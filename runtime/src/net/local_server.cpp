// Ciudad online / LAN / Comunidad:
// - Offline: Loc Lac local offline (jugar solo en la ciudad)
// - Host: servidor local en 0.0.0.0, amigos por LAN/ZeroTier
// - Client: conectar a IP:puerto de otro host
// - Community: conectar a mh3sp.com (servidores comunitarios globales)
#include "local_server.h"

#include "../mh3sp_native_server.h"
#include "lan_beacon.h"
#include "nas_server.h"
#include "online.h"
#include "net_host.h"

#ifdef _WIN32
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <winsock2.h>
#include <ws2tcpip.h>
#include <iphlpapi.h>
#include <windows.h>

#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <string>
#include <vector>
#include <thread>
#include <chrono>
#include <algorithm>
#include <sstream>
#include <atomic>

namespace {
constexpr uint16_t kNasPort = 18080;
constexpr uint16_t kOpnPort = 8200;
constexpr uint16_t kLmpPort = 8201;
constexpr uint16_t kFmpPort = 8202;
constexpr uint16_t kRfpPort = 8203;

OnlineNetMode g_mode       = OnlineNetMode::Offline;
std::string   g_clientIp   = "192.168.0.1";
int           g_clientPort = 18080;
bool          g_serverStarted = false;
std::string   g_statusText;

std::filesystem::path OnlineSettingsPath() {
    wchar_t path[32768]{};
    const DWORD length = GetModuleFileNameW(nullptr, path, 32768);
    const auto exe = (length > 0 && length < 32768)
        ? std::filesystem::path(std::wstring(path, length)).parent_path()
        : std::filesystem::current_path();
    return exe / L"MH3UI.online";
}

bool PortOpen(uint16_t port, const char* host = "127.0.0.1") {
    const SOCKET handle = ::socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (handle == INVALID_SOCKET) return false;
    u_long nb = 1;
    ioctlsocket(handle, FIONBIO, &nb);
    sockaddr_in addr{};
    addr.sin_family = AF_INET;
    addr.sin_port   = htons(port);
    inet_pton(AF_INET, host, &addr.sin_addr);
    ::connect(handle, reinterpret_cast<const sockaddr*>(&addr), sizeof(addr));
    fd_set w, f;
    FD_ZERO(&w); FD_ZERO(&f);
    FD_SET(handle, &w); FD_SET(handle, &f);
    timeval tv{0, 200000};
    const int r = ::select(0, nullptr, &w, &f, &tv);
    const bool ok = r > 0 && FD_ISSET(handle, &w) && !FD_ISSET(handle, &f);
    ::closesocket(handle);
    return ok;
}

// Detecta conexión a Internet probando opn.mh3sp.com:8200
bool HasInternetAccess() {
    WSADATA wsa{};
    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0) return true;

    sockaddr_in addr{};
    addr.sin_family = AF_INET;
    addr.sin_port = htons(8200);

    addrinfo hints{};
    hints.ai_family   = AF_INET;
    hints.ai_socktype = SOCK_STREAM;
    addrinfo* res = nullptr;
    if (getaddrinfo("opn.mh3sp.com", "8200", &hints, &res) == 0 && res) {
        std::memcpy(&addr, res->ai_addr, sizeof(sockaddr_in));
        freeaddrinfo(res);
    } else {
        inet_pton(AF_INET, "170.187.164.37", &addr.sin_addr);
    }

    const SOCKET sock = ::socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (sock == INVALID_SOCKET) return true;

    u_long nb = 1;
    ioctlsocket(sock, FIONBIO, &nb);
    ::connect(sock, reinterpret_cast<const sockaddr*>(&addr), sizeof(addr));

    fd_set w, f;
    FD_ZERO(&w); FD_ZERO(&f);
    FD_SET(sock, &w); FD_SET(sock, &f);
    timeval tv{2, 500000};
    const int ready = ::select(0, nullptr, &w, &f, &tv);
    const bool connected = ready > 0 && FD_ISSET(sock, &w) && !FD_ISSET(sock, &f);
    ::closesocket(sock);
    return connected;
}

void ApplyMode() {
    const OnlineNetMode mode = g_mode;
    _putenv_s("MH3SP_BIND", "");

    switch (mode) {
    case OnlineNetMode::Offline:
        // Ciudad Loc Lac offline (jugar solo sin conexion)
        LanBeacon::StopBroadcaster();
        SetOnlineServerSetting("127.0.0.1:18080");
        SetSkipTlsSetting(true);
        g_statusText = "Modo Offline activo: Ciudad Loc Lac local (jugar solo).";
        std::fprintf(stderr, "MH3 red: modo OFFLINE (Loc Lac local 127.0.0.1:18080)\n");
        break;

    case OnlineNetMode::Host:
        // Servidor local en 0.0.0.0 (accesible desde LAN/ZeroTier)
        _putenv_s("MH3SP_BIND", "0.0.0.0");
        SetOnlineServerSetting("127.0.0.1:18080");
        SetSkipTlsSetting(true);
        g_statusText = "Servidor local listo en puerto 18080 (0.0.0.0).";
        std::fprintf(stderr, "MH3 red: modo HOST (0.0.0.0:18080)\n");
        LanBeacon::StartBroadcaster("OceanTri-Host", 18080);
        break;

    case OnlineNetMode::Client: {
        // Conectar a IP del host amigo (LAN/ZeroTier)
        LanBeacon::StopBroadcaster();
        const std::string target = g_clientIp + ":" + std::to_string(g_clientPort);
        SetOnlineServerSetting(target);
        SetSkipTlsSetting(true);
        g_statusText = "Modo cliente activo. Conectando a " + target;
        std::fprintf(stderr, "MH3 red: modo CLIENTE -> %s\n", target.c_str());
        break;
    }

    case OnlineNetMode::Community:
        // Servidor comunitario global opn.mh3sp.com con TLS Schannel.
        // El login NAS va al :80 real de la comunidad (asi el juego llega al
        // OPN :8200). La redireccion 80->18080 al NAS local rompia el login:
        // el override solo cambiaba el puerto, no la direccion, y el 18080
        // remoto esta cerrado (ECONNREFUSED -> error 20100). Para probar el
        // NAS local usar MH3_ONLINE_PORTS=80=18080.
        LanBeacon::StopBroadcaster();
        SetOnlineServerSetting("mh3sp.com");
        SetSkipTlsSetting(false);
        g_statusText = "Comunidad MH3SP: conectado a mh3sp.com (TLS).";
        std::fprintf(stderr, "MH3 red: modo COMUNIDAD (mh3sp.com, NAS :80 real, TLS)\n");
        break;
    }

    ApplyOnlinePatches();
}

void StartLocalServer() {
    if (g_serverStarted) return;
    g_serverStarted = true;

    WSADATA data{};
    WSAStartup(MAKEWORD(2, 2), &data);

    const char* bindIp = (g_mode == OnlineNetMode::Host) ? "0.0.0.0" : "127.0.0.1";
    if (!PortOpen(kNasPort) && !NasServer::Start(kNasPort, bindIp)) {
        std::fprintf(stderr, "MH3 ciudad: no pude abrir NAS en puerto %d\n", int(kNasPort));
    }

    // Si estamos en modo Community, solo necesitamos NAS; no necesitamos emular OPN/LMP localmente
    if (g_mode == OnlineNetMode::Community) {
        g_statusText = "Comunidad MH3SP: autenticacion lista -> conectando a mh3sp.com";
        return;
    }

    // OPN/LMP/FMP/RFP nativos para Offline y Host
    if (!mh3sp_native::IsRunning())
        mh3sp_native::Start();

    for (int i = 0; i < 80; ++i) {
        if (PortOpen(kNasPort) && PortOpen(kOpnPort) && PortOpen(kLmpPort) &&
            PortOpen(kFmpPort) && PortOpen(kRfpPort)) {
            g_statusText = (g_mode == OnlineNetMode::Host)
                ? "Servidor local listo en puerto 18080 (0.0.0.0)"
                : "Servidor local listo en puerto 18080";
            std::fprintf(stderr, "MH3 ciudad: servicios nativos listos\n");
            return;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    std::fprintf(stderr, "MH3 ciudad: algunos servicios no respondieron\n");
}

} // namespace

namespace LocalOnlineServer {

OnlineNetMode GetMode() { return g_mode; }

void SetMode(OnlineNetMode mode) {
    const OnlineNetMode prev = g_mode;
    g_mode = mode;
    ApplyMode();
    SaveSettings();
    if (mode == OnlineNetMode::Host || mode == OnlineNetMode::Offline) {
        if (g_serverStarted && prev != mode) {
            std::thread([]() { RestartServer(); }).detach();
        } else if (!g_serverStarted) {
            std::thread([]() { StartLocalServer(); }).detach();
        }
    }
}

std::string GetClientTarget() { return g_clientIp; }
int         GetClientPort()   { return g_clientPort; }

void SetClientTarget(const std::string& ip, int port) {
    g_clientIp   = ip;
    g_clientPort = port;
    if (g_mode == OnlineNetMode::Client) ApplyMode();
    SaveSettings();
}

void AdjustClientIpOctet(int octet, int delta) {
    int a = 192, b = 168, c = 0, d = 1;
    std::sscanf(g_clientIp.c_str(), "%d.%d.%d.%d", &a, &b, &c, &d);
    int parts[4] = {a, b, c, d};
    parts[octet] = std::max(0, std::min(255, parts[octet] + delta));
    char buf[20];
    std::snprintf(buf, sizeof(buf), "%d.%d.%d.%d", parts[0], parts[1], parts[2], parts[3]);
    g_clientIp = buf;
    if (g_mode == OnlineNetMode::Client) ApplyMode();
    SaveSettings();
}

void AdjustClientPort(int delta) {
    g_clientPort = std::max(1, std::min(65535, g_clientPort + delta));
    if (g_mode == OnlineNetMode::Client) ApplyMode();
    SaveSettings();
}

std::vector<std::string> GetLocalNetworkIPs() {
    std::vector<std::string> result;
    ULONG bufLen = 15000;
    std::vector<uint8_t> buf(bufLen);
    PIP_ADAPTER_ADDRESSES addrs = reinterpret_cast<PIP_ADAPTER_ADDRESSES>(buf.data());

    if (GetAdaptersAddresses(AF_INET, GAA_FLAG_SKIP_ANYCAST | GAA_FLAG_SKIP_MULTICAST,
                             nullptr, addrs, &bufLen) != ERROR_SUCCESS) {
        return result;
    }

    for (auto* a = addrs; a; a = a->Next) {
        if (a->OperStatus != IfOperStatusUp) continue;
        if (a->IfType == IF_TYPE_SOFTWARE_LOOPBACK) continue;

        for (auto* ua = a->FirstUnicastAddress; ua; ua = ua->Next) {
            if (ua->Address.lpSockaddr->sa_family != AF_INET) continue;
            char ip[INET_ADDRSTRLEN]{};
            auto* sin = reinterpret_cast<sockaddr_in*>(ua->Address.lpSockaddr);
            inet_ntop(AF_INET, &sin->sin_addr, ip, sizeof(ip));

            char adapterName[128]{};
            WideCharToMultiByte(CP_UTF8, 0, a->FriendlyName, -1, adapterName, 128, nullptr, nullptr);

            std::string entry = std::string(adapterName) + ": " + ip + ":" + std::to_string(kNasPort);
            result.push_back(entry);
        }
    }
    return result;
}

std::string GetStatusText() { return g_statusText; }

void RestartServer() {
    g_serverStarted = false;
    LanBeacon::StopBroadcaster();
    LanBeacon::StopScanner();
    mh3sp_native::Stop();
    NasServer::Stop();
    std::this_thread::sleep_for(std::chrono::milliseconds(200));
    StartLocalServer();
}

void LoadSettings() {
    std::ifstream in(OnlineSettingsPath());
    if (!in.is_open()) return;

    int modeVal = 0;
    std::string clientIp;
    int clientPort = 18080;
    if (in >> modeVal >> clientIp >> clientPort) {
        g_mode       = static_cast<OnlineNetMode>(std::clamp(modeVal, 0, 3));
        g_clientIp   = clientIp;
        g_clientPort = std::clamp(clientPort, 1, 65535);
    }
}

void SaveSettings() {
    std::ofstream out(OnlineSettingsPath(), std::ios::trunc);
    out << int(g_mode) << "\n" << g_clientIp << "\n" << g_clientPort << "\n";
}

void Configure() {
    if (std::getenv("MH3_ONLINE_SERVER")) {
        std::fprintf(stderr, "MH3 red: servidor manual por entorno: %s\n",
                     std::getenv("MH3_ONLINE_SERVER"));
        return;
    }

    LoadSettings();

    // Si está en modo Community pero no hay internet, fallback a Offline
    if (g_mode == OnlineNetMode::Community && !HasInternetAccess()) {
        std::fprintf(stderr, "MH3 red: sin internet -> cambiando a modo Offline\n");
        g_mode = OnlineNetMode::Offline;
    }

    ApplyMode();
}

void Ensure() {
    if (g_mode == OnlineNetMode::Client) return; // cliente conecta a host remoto
    if (g_serverStarted) return;
    StartLocalServer();
}

} // namespace LocalOnlineServer
#else
namespace LocalOnlineServer {
OnlineNetMode GetMode() { return OnlineNetMode::Community; }
void SetMode(OnlineNetMode) {}
std::string GetClientTarget() { return "mh3sp.com"; }
int GetClientPort() { return 18080; }
void SetClientTarget(const std::string&, int) {}
void AdjustClientIpOctet(int, int) {}
void AdjustClientPort(int) {}
std::vector<std::string> GetLocalNetworkIPs() { return {}; }
std::string GetStatusText() { return "Comunidad MH3SP"; }
void RestartServer() {}
void LoadSettings() {}
void SaveSettings() {}
void Configure() {
    if (!std::getenv("MH3_ONLINE_SERVER")) {
        SetOnlineServerSetting("mh3sp.com");
        SetSkipTlsSetting(false);
    }
    ApplyOnlinePatches();
}
void Ensure() {}
} // namespace LocalOnlineServer
#endif