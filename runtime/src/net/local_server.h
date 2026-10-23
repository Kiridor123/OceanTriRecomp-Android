#pragma once
#include <string>

namespace LocalOnlineServer {
enum class Mode {
    Offline = 0,
    Host = 1,        // Crea servidor local (0.0.0.0), emite baliza LAN/ZeroTier y conecta
    Client = 2,      // Se une a un servidor en la misma red (LAN o ZeroTier)
    Community = 3    // Se conecta al servidor de la comunidad (mh3sp.com)
};

void Configure();
void Ensure();

// Ajuste dinámico de modo y host
void SetMode(Mode mode, const std::string& hostIp = "");
Mode GetMode();
std::string GetConfiguredHostIp();

// Control de servidor local
bool StartLocalServer();
void StopLocalServer();
bool IsLocalServerRunning();

// Persistencia
void LoadOnlineConfig();
void SaveOnlineConfig();
} // namespace LocalOnlineServer
