#include "lan_beacon.h"

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <mutex>
#include <string>
#include <thread>
#include <vector>

#if defined(_WIN32)
#  ifndef WIN32_LEAN_AND_MEAN
#    define WIN32_LEAN_AND_MEAN
#  endif
#  ifndef NOMINMAX
#    define NOMINMAX
#  endif
#  include <winsock2.h>
#  include <ws2tcpip.h>
#  include <iphlpapi.h>
#  pragma comment(lib, "iphlpapi.lib")
   using beacon_socket = SOCKET;
   static constexpr beacon_socket BEACON_INVALID_SOCKET = INVALID_SOCKET;
   static void beacon_close_socket(beacon_socket s) { if (s != BEACON_INVALID_SOCKET) closesocket(s); }
#else
#  include <arpa/inet.h>
#  include <fcntl.h>
#  include <ifaddrs.h>
#  include <net/if.h>
#  include <netinet/in.h>
#  include <sys/select.h>
#  include <sys/socket.h>
#  include <unistd.h>
   using beacon_socket = int;
   static constexpr beacon_socket BEACON_INVALID_SOCKET = -1;
   static void beacon_close_socket(beacon_socket s) { if (s >= 0) close(s); }
#endif

namespace LanBeacon {
namespace {
constexpr uint16_t kBeaconPort = 27910;
constexpr const char* kBeaconPrefix = "MH3_HOST:";
constexpr const char* kDiscoverQuery = "MH3_DISCOVER";

struct HostInternal {
    std::string ip;
    uint16_t port;
    std::string name;
    std::chrono::steady_clock::time_point lastSeen;
};

std::mutex g_mutex;
std::vector<HostInternal> g_hosts;

std::atomic<bool> g_broadcasterRunning{false};
std::thread g_broadcasterThread;
std::string g_hostName = "Cazador";
uint16_t g_gamePort = 18080;

std::atomic<bool> g_scannerRunning{false};
std::thread g_scannerThread;
beacon_socket g_scannerSocket = BEACON_INVALID_SOCKET;

std::vector<std::string> GetBroadcastAddresses() {
    std::vector<std::string> broadcasts;
    broadcasts.push_back("255.255.255.255");

#if !defined(_WIN32)
    struct ifaddrs* ifaddr = nullptr;
    if (getifaddrs(&ifaddr) != -1) {
        for (struct ifaddrs* ifa = ifaddr; ifa != nullptr; ifa = ifa->ifa_next) {
            if (!ifa->ifa_addr || ifa->ifa_addr->sa_family != AF_INET)
                continue;
            if (ifa->ifa_flags & IFF_LOOPBACK)
                continue;
            if (!(ifa->ifa_flags & IFF_UP))
                continue;
            if ((ifa->ifa_flags & IFF_BROADCAST) && ifa->ifa_broadaddr) {
                char buf[INET_ADDRSTRLEN]{};
                auto* broad = reinterpret_cast<sockaddr_in*>(ifa->ifa_broadaddr);
                if (inet_ntop(AF_INET, &broad->sin_addr, buf, sizeof(buf))) {
                    if (std::find(broadcasts.begin(), broadcasts.end(), buf) == broadcasts.end())
                        broadcasts.push_back(buf);
                }
            }
        }
        freeifaddrs(ifaddr);
    }
#endif

    return broadcasts;
}

void BroadcasterLoop() {
    beacon_socket s = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (s == BEACON_INVALID_SOCKET)
        return;

    int on = 1;
#if defined(_WIN32)
    setsockopt(s, SOL_SOCKET, SO_BROADCAST, reinterpret_cast<const char*>(&on), sizeof(on));
#else
    setsockopt(s, SOL_SOCKET, SO_BROADCAST, &on, sizeof(on));
#endif

    std::fprintf(stderr, "[LanBeacon] Emisor iniciado en puerto %u para '%s'\n", unsigned(kBeaconPort), g_hostName.c_str());

    while (g_broadcasterRunning.load()) {
        char msg[256];
        std::snprintf(msg, sizeof(msg), "%s%u:%s", kBeaconPrefix, unsigned(g_gamePort), g_hostName.c_str());
        const size_t msgLen = std::strlen(msg);

        const auto bAddrs = GetBroadcastAddresses();
        for (const auto& bIp : bAddrs) {
            sockaddr_in dest{};
            dest.sin_family = AF_INET;
            dest.sin_port = htons(kBeaconPort);
            inet_pton(AF_INET, bIp.c_str(), &dest.sin_addr);
#if defined(_WIN32)
            sendto(s, msg, int(msgLen), 0, reinterpret_cast<const sockaddr*>(&dest), sizeof(dest));
#else
            sendto(s, msg, msgLen, 0, reinterpret_cast<const sockaddr*>(&dest), sizeof(dest));
#endif
        }

        for (int i = 0; i < 20 && g_broadcasterRunning.load(); ++i) {
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
    }

    beacon_close_socket(s);
    std::fprintf(stderr, "[LanBeacon] Emisor detenido.\n");
}

void ScannerLoop() {
    beacon_socket s = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (s == BEACON_INVALID_SOCKET)
        return;

    int on = 1;
#if defined(_WIN32)
    setsockopt(s, SOL_SOCKET, SO_REUSEADDR, reinterpret_cast<const char*>(&on), sizeof(on));
    setsockopt(s, SOL_SOCKET, SO_BROADCAST, reinterpret_cast<const char*>(&on), sizeof(on));
#else
    setsockopt(s, SOL_SOCKET, SO_REUSEADDR, &on, sizeof(on));
#if defined(SO_REUSEPORT)
    setsockopt(s, SOL_SOCKET, SO_REUSEPORT, &on, sizeof(on));
#endif
    setsockopt(s, SOL_SOCKET, SO_BROADCAST, &on, sizeof(on));
#endif

    sockaddr_in addr{};
    addr.sin_family = AF_INET;
    addr.sin_port = htons(kBeaconPort);
    addr.sin_addr.s_addr = htonl(INADDR_ANY);

    if (bind(s, reinterpret_cast<const sockaddr*>(&addr), sizeof(addr)) != 0) {
        std::fprintf(stderr, "[LanBeacon] No se pudo enlazar socket de escaneo en puerto %u\n", unsigned(kBeaconPort));
        beacon_close_socket(s);
        return;
    }

    g_scannerSocket = s;
    std::fprintf(stderr, "[LanBeacon] Escaneo de servidores activo en puerto %u\n", unsigned(kBeaconPort));

    char buf[512];
    while (g_scannerRunning.load()) {
        fd_set readSet;
        FD_ZERO(&readSet);
        FD_SET(s, &readSet);
        timeval tv{1, 0}; // 1 sec timeout

#if defined(_WIN32)
        int r = select(0, &readSet, nullptr, nullptr, &tv);
#else
        int r = select(s + 1, &readSet, nullptr, nullptr, &tv);
#endif
        if (r <= 0)
            continue;

        sockaddr_in from{};
#if defined(_WIN32)
        int fromLen = sizeof(from);
        int n = recvfrom(s, buf, sizeof(buf) - 1, 0, reinterpret_cast<sockaddr*>(&from), &fromLen);
#else
        socklen_t fromLen = sizeof(from);
        ssize_t n = recvfrom(s, buf, sizeof(buf) - 1, 0, reinterpret_cast<sockaddr*>(&from), &fromLen);
#endif
        if (n <= 0)
            continue;

        buf[n] = '\0';
        char senderIp[INET_ADDRSTRLEN]{};
        inet_ntop(AF_INET, &from.sin_addr, senderIp, sizeof(senderIp));

        // Format: MH3_HOST:<port>:<name>
        if (std::strncmp(buf, kBeaconPrefix, std::strlen(kBeaconPrefix)) == 0) {
            const char* rest = buf + std::strlen(kBeaconPrefix);
            const char* colon = std::strchr(rest, ':');
            uint16_t port = 18080;
            std::string name = "Servidor";
            if (colon) {
                port = uint16_t(std::strtoul(rest, nullptr, 10));
                name = colon + 1;
            } else {
                port = uint16_t(std::strtoul(rest, nullptr, 10));
            }

            std::lock_guard<std::mutex> lock(g_mutex);
            bool found = false;
            auto now = std::chrono::steady_clock::now();
            for (auto& h : g_hosts) {
                if (h.ip == senderIp && h.port == port) {
                    h.lastSeen = now;
                    h.name = name;
                    found = true;
                    break;
                }
            }
            if (!found) {
                g_hosts.push_back({senderIp, port, name, now});
                std::fprintf(stderr, "[LanBeacon] Descubierto servidor '%s' en %s:%u\n", name.c_str(), senderIp, unsigned(port));
            }
        }
    }

    beacon_close_socket(s);
    g_scannerSocket = BEACON_INVALID_SOCKET;
    std::fprintf(stderr, "[LanBeacon] Escaneo detenido.\n");
}
} // namespace

void StartBroadcaster(const std::string& hostName, uint16_t gamePort) {
    if (g_broadcasterRunning.load())
        return;
    g_hostName = hostName.empty() ? "Cazador" : hostName;
    g_gamePort = gamePort;
    g_broadcasterRunning.store(true);
    g_broadcasterThread = std::thread(BroadcasterLoop);
}

void StopBroadcaster() {
    if (!g_broadcasterRunning.exchange(false))
        return;
    if (g_broadcasterThread.joinable())
        g_broadcasterThread.join();
}

bool IsBroadcasterRunning() {
    return g_broadcasterRunning.load();
}

void StartScanner() {
    if (g_scannerRunning.load())
        return;
    g_scannerRunning.store(true);
    g_scannerThread = std::thread(ScannerLoop);
}

void StopScanner() {
    if (!g_scannerRunning.exchange(false))
        return;
    if (g_scannerSocket != BEACON_INVALID_SOCKET) {
        beacon_close_socket(g_scannerSocket);
        g_scannerSocket = BEACON_INVALID_SOCKET;
    }
    if (g_scannerThread.joinable())
        g_scannerThread.join();
}

bool IsScannerRunning() {
    return g_scannerRunning.load();
}

void TriggerScan() {
    beacon_socket s = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (s == BEACON_INVALID_SOCKET)
        return;

    int on = 1;
#if defined(_WIN32)
    setsockopt(s, SOL_SOCKET, SO_BROADCAST, reinterpret_cast<const char*>(&on), sizeof(on));
#else
    setsockopt(s, SOL_SOCKET, SO_BROADCAST, &on, sizeof(on));
#endif

    const auto bAddrs = GetBroadcastAddresses();
    for (const auto& bIp : bAddrs) {
        sockaddr_in dest{};
        dest.sin_family = AF_INET;
        dest.sin_port = htons(kBeaconPort);
        inet_pton(AF_INET, bIp.c_str(), &dest.sin_addr);
#if defined(_WIN32)
        sendto(s, kDiscoverQuery, int(std::strlen(kDiscoverQuery)), 0, reinterpret_cast<const sockaddr*>(&dest), sizeof(dest));
#else
        sendto(s, kDiscoverQuery, std::strlen(kDiscoverQuery), 0, reinterpret_cast<const sockaddr*>(&dest), sizeof(dest));
#endif
    }
    beacon_close_socket(s);
}

std::vector<DiscoveredHost> GetDiscoveredHosts() {
    std::lock_guard<std::mutex> lock(g_mutex);
    const auto now = std::chrono::steady_clock::now();
    std::vector<DiscoveredHost> result;

    auto it = g_hosts.begin();
    while (it != g_hosts.end()) {
        auto elapsed = std::chrono::duration_cast<std::chrono::seconds>(now - it->lastSeen).count();
        if (elapsed > 8) {
            it = g_hosts.erase(it);
        } else {
            result.push_back({it->ip, it->port, it->name, uint32_t(elapsed)});
            ++it;
        }
    }
    return result;
}

std::vector<NetworkAddress> GetLocalAddresses() {
    std::vector<NetworkAddress> list;

#if !defined(_WIN32)
    struct ifaddrs* ifaddr = nullptr;
    if (getifaddrs(&ifaddr) == -1)
        return list;

    for (struct ifaddrs* ifa = ifaddr; ifa != nullptr; ifa = ifa->ifa_next) {
        if (!ifa->ifa_addr || ifa->ifa_addr->sa_family != AF_INET)
            continue;
        if (ifa->ifa_flags & IFF_LOOPBACK)
            continue;
        if (!(ifa->ifa_flags & IFF_UP))
            continue;

        char host[INET_ADDRSTRLEN]{};
        auto* sa = reinterpret_cast<sockaddr_in*>(ifa->ifa_addr);
        if (inet_ntop(AF_INET, &sa->sin_addr, host, sizeof(host))) {
            NetworkAddress addr;
            addr.interfaceName = ifa->ifa_name;
            addr.ip = host;
            const std::string& name = addr.interfaceName;
            if (name.rfind("zt", 0) == 0 || name.find("tun") != std::string::npos || name.find("tap") != std::string::npos) {
                addr.type = "ZeroTier / VPN";
            } else if (name.rfind("wl", 0) == 0 || name.find("wlan") != std::string::npos) {
                addr.type = "Wi-Fi (LAN)";
            } else if (name.rfind("eth", 0) == 0 || name.rfind("en", 0) == 0) {
                addr.type = "Ethernet";
            } else {
                addr.type = "Red Local";
            }
            list.push_back(addr);
        }
    }
    freeifaddrs(ifaddr);
#else
    // Windows fallback
    char hostname[256];
    if (gethostname(hostname, sizeof(hostname)) == 0) {
        struct hostent* he = gethostbyname(hostname);
        if (he) {
            for (int i = 0; he->h_addr_list[i] != nullptr; ++i) {
                struct in_addr addr;
                std::memcpy(&addr, he->h_addr_list[i], sizeof(struct in_addr));
                char* ip = inet_ntoa(addr);
                if (ip && std::strcmp(ip, "127.0.0.1") != 0) {
                    list.push_back({"eth", ip, "LAN / Red"});
                }
            }
        }
    }
#endif

    return list;
}
} // namespace LanBeacon
