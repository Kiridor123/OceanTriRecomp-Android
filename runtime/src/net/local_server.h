// Ciudad offline: servidores MH3SP locales (OnlineLocal\ junto al exe) para que el
// boton Ciudad del juego entre a Loc Lac sin Capcom, sin Nintendo y sin servidores de la comunidad.
#pragma once

namespace LocalOnlineServer {
// Antes de ApplyOnlinePatches: si OnlineLocal esta instalado (y no hay otro servidor
// elegido), el modo online apunta a 127.0.0.1 sin TLS.
void Configure();

// Al primer uso de la red: arranca los servidores ocultos y espera a que respondan.
void Ensure();
} // namespace LocalOnlineServer
