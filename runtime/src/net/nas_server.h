// NAS local de la Ciudad offline, dentro del exe (antes online-local-nas.py).
#pragma once
#include <cstdint>

namespace NasServer {
// Arranca el NAS (HTTP en bindIp:httpPort y UDP 27900) en hilos propios.
// false si no pudo abrir el puerto HTTP. bindIp: "127.0.0.1" o "0.0.0.0".
bool Start(uint16_t httpPort, const char* bindIp = "127.0.0.1");
void Stop();
} // namespace NasServer
