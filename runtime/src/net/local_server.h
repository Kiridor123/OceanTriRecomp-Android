#pragma once
#include <string>
#include <vector>

// Modos de red online del port
enum class OnlineNetMode {
    Offline   = 0, // Sin red online (solo historia)
    Host      = 1, // Servidor local LAN/ZeroTier (host)
    Client    = 2, // Cliente a IP:puerto de otro host (LAN/ZeroTier)
    Community = 3, // Servidores comunitarios mh3sp.com
};

namespace LocalOnlineServer {
    // Configuración inicial (llamada desde Startup() una vez)
    void Configure();
    // Inicia el servidor nativo si es necesario (llamada desde NetHost::Startup)
    void Ensure();

    // Modo de red: cargado desde MH3UI.online al arrancar
    OnlineNetMode GetMode();
    void SetMode(OnlineNetMode mode);

    // IP y puerto del cliente (modo Client)
    std::string GetClientTarget();   // e.g. "192.168.0.116"
    int         GetClientPort();     // e.g. 18080
    void        SetClientTarget(const std::string& ip, int port);

    // Ajusta los octetos de la IP del cliente (para el selector de UI)
    void AdjustClientIpOctet(int octet, int delta);
    void AdjustClientPort(int delta);

    // IPs locales de red para mostrar en modo Host
    std::vector<std::string> GetLocalNetworkIPs(); // e.g. {{"wlan0", "192.168.0.116"}, ...}

    // Estado textual para la UI
    std::string GetStatusText();

    // Reiniciar servidor local (Host/Offline)
    void RestartServer();

    // Persistencia
    void LoadSettings();
    void SaveSettings();
}
