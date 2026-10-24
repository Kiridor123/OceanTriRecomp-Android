// NAS local de la Ciudad offline, dentro del exe (antes online-local-nas.py).
#pragma once
#include <cstdint>

namespace NasServer {
// Arranca el NAS (HTTP en bindIp:httpPort y UDP 27900) en hilos propios.
// false si no pudo abrir el puerto HTTP. bindIp: "0.0.0.0" o "127.0.0.1".
bool Start(uint16_t httpPort, const char* bindIp = "0.0.0.0");
void Stop();
bool IsRunning();
} // namespace NasServer
