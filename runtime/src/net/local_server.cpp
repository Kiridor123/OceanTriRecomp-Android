// Ciudad offline: usa los servidores nativos compilados en MH3.exe.
// Solo se activa cuando existe OnlineLocal junto al ejecutable y el usuario
// no ha elegido un servidor externo ni el modo comunidad.
#include "local_server.h"

#include "../mh3sp_native_server.h"
#include "nas_server.h"
#include "online.h"

#ifdef _WIN32
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <winsock2.h>
#include <ws2tcpip.h>
#include <windows.h>

#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <string>
#include <thread>
#include <chrono>

namespace {
constexpr const char* kServer = "127.0.0.1:18080";
constexpr uint16_t kNasPort = 18080;
constexpr uint16_t kOpnPort = 8200;
constexpr uint16_t kLmpPort = 8201;
constexpr uint16_t kFmpPort = 8202;
constexpr uint16_t kRfpPort = 8203;
bool configured = false;
bool started = false;

std::filesystem::path Root() {
    wchar_t path[32768]{};
    const DWORD length = GetModuleFileNameW(nullptr, path, 32768);
    const auto exe = (length > 0 && length < 32768)
        ? std::filesystem::path(std::wstring(path, length)).parent_path()
        : std::filesystem::current_path();
    return exe / L"OnlineLocal";
}

bool Installed() {
    // OnlineLocal es el interruptor de activación; no se necesita ningún .py.
    std::error_code ec;
    return std::filesystem::is_directory(Root(), ec);
}

// OnlineLocal\modo.txt con la palabra "comunidad": usar el servidor de la comunidad.
bool CommunityMode() {
    std::ifstream in(Root() / L"modo.txt");
    std::string word;
    return (in >> word) && word == "comunidad";
}

bool PortOpen(uint16_t port) {
    const SOCKET handle = ::socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (handle == INVALID_SOCKET)
        return false;

    u_long nonBlocking = 1;
    ioctlsocket(handle, FIONBIO, &nonBlocking);
    sockaddr_in address{};
    address.sin_family = AF_INET;
    address.sin_port = htons(port);
    inet_pton(AF_INET, "127.0.0.1", &address.sin_addr);
    ::connect(handle, reinterpret_cast<const sockaddr*>(&address), sizeof(address));

    fd_set writable, failed;
    FD_ZERO(&writable);
    FD_ZERO(&failed);
    FD_SET(handle, &writable);
    FD_SET(handle, &failed);
    timeval wait{0, 150000};
    const int ready = ::select(0, nullptr, &writable, &failed, &wait);
    const bool open = ready > 0 && FD_ISSET(handle, &writable) && !FD_ISSET(handle, &failed);
    ::closesocket(handle);
    return open;
}
} // namespace

namespace LocalOnlineServer {
void Configure() {
    // Un servidor elegido manualmente tiene prioridad sobre el modo local.
    if (std::getenv("MH3_ONLINE_SERVER") || !Installed() || CommunityMode())
        return;

    SetOnlineServerSetting(kServer);
    SetSkipTlsSetting(true);
    configured = true;
    std::fprintf(stderr, "MH3 ciudad offline: servidor nativo local en %s (OnlineLocal)\n", kServer);
}

void Ensure() {
    if (!configured || started)
        return;

    started = true;
    WSADATA data{};
    const int wsaResult = WSAStartup(MAKEWORD(2, 2), &data);
    if (wsaResult != 0) {
        std::fprintf(stderr, "MH3 ciudad offline: WSAStartup fallo (%d)\n", wsaResult);
        return;
    }

    // NAS HTTP integrado en el ejecutable.
    if (!PortOpen(kNasPort) && !NasServer::Start(kNasPort)) {
        std::fprintf(stderr, "MH3 ciudad offline: no pude abrir el NAS local en el puerto %d\n", int(kNasPort));
    }

    // OPN/LMP/FMP/RFP se ejecutan dentro de MH3.exe; ya no se lanza Python.
    if (!mh3sp_native::IsRunning())
        mh3sp_native::Start();

    // Espera hasta 10 segundos a que los cinco servicios estén escuchando.
    for (int i = 0; i < 100; ++i) {
        if (PortOpen(kNasPort) && PortOpen(kOpnPort) && PortOpen(kLmpPort) &&
            PortOpen(kFmpPort) && PortOpen(kRfpPort)) {
            std::fprintf(stderr, "MH3 ciudad offline: NAS y servicios OPN/LMP/FMP/RFP listos\n");
            return;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    std::fprintf(stderr,
        "MH3 ciudad offline: faltan servicios nativos; comprueba que los puertos 8200-8203 y 18080 estén libres\n");
}
} // namespace LocalOnlineServer
#else
namespace LocalOnlineServer {
void Configure() {}
void Ensure() {}
} // namespace LocalOnlineServer
#endif
