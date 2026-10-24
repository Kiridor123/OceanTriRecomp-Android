#pragma once
#include <cstdint>
#include <string>
#include <vector>

namespace LanBeacon {
struct DiscoveredHost {
    std::string ip;
    uint16_t port = 18080;
    std::string name;
    uint32_t lastSeenSec = 0;
};

struct NetworkAddress {
    std::string interfaceName;
    std::string ip;
    std::string type; // "Wi-Fi (LAN)", "ZeroTier / VPN", "Ethernet", etc.
};

// Arranca el emisor de baliza UDP (puerto 27910) para anunciar este servidor en la red local/ZeroTier
void StartBroadcaster(const std::string& hostName, uint16_t gamePort = 18080);
void StopBroadcaster();
bool IsBroadcasterRunning();

// Arranca el receptor para buscar servidores activos en la red local/ZeroTier
void StartScanner();
void StopScanner();
bool IsScannerRunning();
void TriggerScan();

// Devuelve los servidores descubiertos en los ultimos segundos
std::vector<DiscoveredHost> GetDiscoveredHosts();

// Lista las IPs locales del dispositivo (Wi-Fi, ZeroTier, cable)
std::vector<NetworkAddress> GetLocalAddresses();
} // namespace LanBeacon
