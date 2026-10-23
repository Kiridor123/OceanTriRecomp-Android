// Servidor local y multijugador para Ciudad/Loc Lac (local_server.h)
#include "local_server.h"

#include "../mh3sp_native_server.h"
#include "lan_beacon.h"
#include "nas_server.h"
#include "online.h"

#if defined(_WIN32)
#  ifndef WIN32_LEAN_AND_MEAN
#    define WIN32_LEAN_AND_MEAN
#  endif
#  ifndef NOMINMAX
#    define NOMINMAX
#  endif
#  include <winsock2.h>
#  include <ws2tcpip.h>
#else
#  include <arpa/inet.h>
#  include <fcntl.h>
#  include <netinet/in.h>
#  include <sys/select.h>
#  include <sys/socket.h>
#  include <unistd.h>
#endif

#include <chrono>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <string>
#include <thread>

namespace {
constexpr uint16_t kNasPort = 18080;
constexpr uint16_t kOpnPort = 8200;
constexpr uint16_t kLmpPort = 8201;
constexpr uint16_t kFmpPort = 8202;
constexpr uint16_t kRfpPort = 8203;

LocalOnlineServer::Mode g_mode = LocalOnlineServer::Mode::Community; // Por defecto Servidor de la Comunidad
std::string g_hostIp = "mh3sp.com";
bool g_configured = false;
bool g_configLoaded = false;

std::string GetConfigPath() {
    const char* user = std::getenv("MH3_USER_DIR");
    if (user && *user)
        return std::string(user) + "/MH3UI.online";
    if (std::filesystem::exists("/storage/emulated/0/MH3"))
        return "/storage/emulated/0/MH3/MH3UI.online";
    if (std::filesystem::exists("/sdcard/Download"))
        return "/sdcard/Download/MH3UI.online";
    return "MH3UI.online";
}

bool PortOpen(uint16_t port) {
#if defined(_WIN32)
    const SOCKET handle = ::socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (handle == INVALID_SOCKET)
        return false;
    u_long nonBlocking = 1;
    ioctlsocket(handle, FIONBIO, &nonBlocking);
#else
    const int handle = ::socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (handle < 0)
        return false;
    int flags = fcntl(handle, F_GETFL, 0);
    fcntl(handle, F_SETFL, (flags < 0 ? 0 : flags) | O_NONBLOCK);
#endif

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
#if defined(_WIN32)
    const int ready = ::select(0, nullptr, &writable, &failed, &wait);
    const bool open = ready > 0 && FD_ISSET(handle, &writable) && !FD_ISSET(handle, &failed);
    ::closesocket(handle);
#else
    const int ready = ::select(handle + 1, nullptr, &writable, &failed, &wait);
    const bool open = ready > 0 && FD_ISSET(handle, &writable) && !FD_ISSET(handle, &failed);
    ::close(handle);
#endif
    return open;
}
} // namespace

namespace LocalOnlineServer {
void LoadOnlineConfig() {
    if (g_configLoaded)
        return;
    g_configLoaded = true;

    const std::string path = GetConfigPath();
    std::ifstream in(path);
    int m = 3;
    if (in >> m) {
        if (m == 0)
            g_mode = Mode::Offline;
        else
            g_mode = Mode::Community;
    } else {
        g_mode = Mode::Community;
    }
    g_hostIp = "mh3sp.com";
}

void SaveOnlineConfig() {
    const std::string path = GetConfigPath();
    std::ofstream out(path);
    if (out.is_open()) {
        out << (g_mode == Mode::Offline ? 0 : 3) << " mh3sp.com\n";
    }
}

void SetMode(Mode mode, const std::string& hostIp) {
    if (mode == Mode::Offline) {
        g_mode = Mode::Offline;
    } else {
        g_mode = Mode::Community;
    }
    g_hostIp = "mh3sp.com";
    SaveOnlineConfig();

    StopLocalServer();

    if (g_mode == Mode::Community) {
        SetOnlineServerSetting("mh3sp.com");
        SetSkipTlsSetting(false);
    }
    ApplyOnlinePatches();
}

Mode GetMode() {
    LoadOnlineConfig();
    return g_mode;
}

std::string GetConfiguredHostIp() {
    return "mh3sp.com";
}

bool StartLocalServer() {
    return false;
}

void StopLocalServer() {
    LanBeacon::StopBroadcaster();
    LanBeacon::StopScanner();
    if (mh3sp_native::IsRunning())
        mh3sp_native::Stop();
    if (NasServer::IsRunning())
        NasServer::Stop();
}

bool IsLocalServerRunning() {
    return false;
}

void Configure() {
    LoadOnlineConfig();
    StopLocalServer();

    if (g_mode == Mode::Community) {
        SetOnlineServerSetting("mh3sp.com");
        SetSkipTlsSetting(false);
        g_configured = true;
        std::fprintf(stderr, "[MH3 Online] Servidor oficial de la comunidad mh3sp.com configurado\n");
    } else {
        std::fprintf(stderr, "[MH3 Online] Modo Desconectado\n");
    }
}

void Ensure() {
    StopLocalServer();
}
} // namespace LocalOnlineServer
