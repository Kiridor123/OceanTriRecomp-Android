// NAS local de la Ciudad offline, dentro del exe (antes online-local-nas.py).
#pragma once
#include <cstdint>

namespace NasServer {
// Arranca el NAS (HTTP en 0.0.0.0:httpPort y UDP 27900) en hilos propios.
// false si no pudo abrir el puerto HTTP.
bool Start(uint16_t httpPort);
void Stop();
bool IsRunning();
} // namespace NasServer
