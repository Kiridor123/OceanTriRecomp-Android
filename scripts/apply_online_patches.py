import sys

def patch_file(path, replacements):
    with open(path, "r", encoding="utf-8") as f:
        data = f.read()
    original = data
    for old, new in replacements:
        if old not in data:
            print(f"ERROR: Could not find target in {path}:\n{old[:120]}...", file=sys.stderr)
            return False
        data = data.replace(old, new)
    if data != original:
        with open(path, "w", newline="\r\n", encoding="utf-8") as f:
            f.write(data)
        print(f"Patched: {path}")
        return True
    else:
        print(f"No changes needed: {path}")
        return True

# 1. net_host_winsock.cpp
p1 = r"c:\mh3src\runtime\src\net\net_host_winsock.cpp"
r1 = [
    (
"""    // Los sockets UDP de la Wii pueden enviar a broadcast por defecto.
    if (!stream) {
        const BOOL on = TRUE;
        ::setsockopt(handle, SOL_SOCKET, SO_BROADCAST, reinterpret_cast<const char*>(&on), sizeof(on));
    }""",
"""    // Los sockets UDP de la Wii pueden enviar a broadcast por defecto.
    if (!stream) {
        const BOOL on = TRUE;
        ::setsockopt(handle, SOL_SOCKET, SO_BROADCAST, reinterpret_cast<const char*>(&on), sizeof(on));

        // Desactivar SIO_UDP_CONNRESET en Windows para que paquetes ICMP port-unreachable
        // no rompan las llamadas subsecuentes de recvfrom() con WSAECONNRESET (10054).
#ifndef SIO_UDP_CONNRESET
#define SIO_UDP_CONNRESET _WSAIOW(IOC_VENDOR, 12)
#endif
        BOOL bNewBehavior = FALSE;
        DWORD dwBytesReturned = 0;
        ::WSAIoctl(handle, SIO_UDP_CONNRESET, &bNewBehavior, sizeof(bNewBehavior), NULL, 0, &dwBytesReturned, NULL, NULL);

        // Aumentar buffers de recepcion y envio a 512 KB para evitar perdida de paquetes en multijugador
        const int bufSize = 524288;
        ::setsockopt(handle, SOL_SOCKET, SO_RCVBUF, reinterpret_cast<const char*>(&bufSize), sizeof(bufSize));
        ::setsockopt(handle, SOL_SOCKET, SO_SNDBUF, reinterpret_cast<const char*>(&bufSize), sizeof(bufSize));
    }"""
    ),
    (
"""        // Un datagrama mas grande que el buffer: se entrega truncado, como en la Wii.
        if (error == WSAEMSGSIZE) {
            if (from)
                *from = FromNative(native);

            return int32_t(size);
        }

        return Error(error);""",
"""        // Un datagrama mas grande que el buffer: se entrega truncado, como en la Wii.
        if (error == WSAEMSGSIZE) {
            if (from)
                *from = FromNative(native);

            return int32_t(size);
        }

        // WSAECONNRESET en UDP se debe a ICMP port unreachable de pares; ignorar y continuar sin romper el socket
        if (error == WSAECONNRESET) {
            return -kSoEAgain;
        }

        return Error(error);"""
    )
]

if patch_file(p1, r1):
    print("net_host_winsock.cpp patched successfully!")
else:
    sys.exit(1)
