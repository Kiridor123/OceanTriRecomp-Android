#pragma once
#include <cstdint>
#include <string>

namespace LocalOnlineServer {
enum class Mode {
    Offline = 0,     // Desconectado (Aldea de Moga)
    Host = 1,        // Crea servidor local (0.0.0.0), emite baliza LAN/ZeroTier y conecta
    Client = 2,      // Se une a un servidor en la misma red (LAN o ZeroTier) con IP y puerto
    Community = 3    // Se conecta al servidor de la comunidad (mh3sp.com)
};

void Configure();
void Ensure();

// Ajuste dinámico de modo, host y puerto
void SetMode(Mode mode, const std::string& hostIp = "", uint16_t port = 18080);
Mode GetMode();
std::string GetConfiguredHostIp();
uint16_t GetConfiguredHostPort();

// Control de servidor local
bool StartLocalServer();
void StopLocalServer();
bool IsLocalServerRunning();

// Persistencia
void LoadOnlineConfig();
void SaveOnlineConfig();
} // namespace LocalOnlineServer
