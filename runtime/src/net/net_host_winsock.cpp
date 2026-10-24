// NetHost (net_host.h) sobre Winsock: Windows. Sin TLS (el servidor local de la
// ciudad offline usa OPN sin TLS: MH3_ONLINE_SKIP_TLS). Mismo contrato que
// net_host_posix.cpp: sockets no bloqueantes, errores como SO_E* negados.
#include "net_host.h"

#include "guest_threads.h"
#include "local_server.h"

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <winsock2.h>
#include <ws2tcpip.h>

// Windows Schannel TLS (secur32 + crypt32, sin dependencias externas)
#define SECURITY_WIN32
#include <sspi.h>
#include <wincrypt.h>
#include <schannel.h>

#include <algorithm>
#include <memory>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <mutex>
#include <string_view>
#include <thread>
#include <utility>
#include <vector>

namespace NetHost {
namespace {
SOCKET Native(int handle) {
    return handle < 0 ? INVALID_SOCKET : static_cast<SOCKET>(handle);
}

// Un error de Winsock como error SO_E* negado de la Wii.
int32_t Error(int error) {
    switch (error) {
    case WSAEBADF:
    case WSAENOTSOCK:
        return -kSoEBadF;
    case WSAEADDRINUSE:
        return -kSoEAddrInUse;
    case WSAECONNRESET:
    case WSAECONNABORTED:
        return -kSoEConnReset;
    case WSAEISCONN:
        return -kSoEIsConn;
    case WSAENOTCONN:
        return -kSoENotConn;
    case WSAEINPROGRESS:
        return -kSoEInProgress;
    case WSAEALREADY:
        return -kSoEAlready;
    case WSAECONNREFUSED:
        return -kSoEConnRefused;
    case WSAENETUNREACH:
        return -kSoENetUnreach;
    case WSAEHOSTUNREACH:
        return -kSoEHostUnreach;
    case WSAENOBUFS:
        return -kSoENoMem;
    case WSAETIMEDOUT:
        return -kSoETimedOut;
    case WSAEWOULDBLOCK:
        return -kSoEAgain;
    case WSAEMSGSIZE:
        return -kSoEMsgSize;
    case WSAEINVAL:
        return -kSoEInval;
    case WSAENETDOWN:
        return -kSoENetDown;
    default:
        return -1;
    }
}

int32_t Last() {
    return Error(WSAGetLastError());
}

int32_t Result(int result) {
    return result == SOCKET_ERROR ? Last() : result;
}

std::mutex overrideLock;
std::vector<std::pair<uint16_t, uint16_t>> portOverrides;

// MH3_ONLINE_PORTS (from=to[,from=to...]) y AddPortOverride: puertos destino a cambiar.
uint16_t MapPort(uint16_t port) {
    const unsigned wanted = ntohs(port);

    {
        std::lock_guard guard(overrideLock);

        for (const auto& [from, to] : portOverrides)
            if (from == wanted)
                return htons(to);
    }

    const char* ports = std::getenv("MH3_ONLINE_PORTS");

    if (!ports)
        return port;

    std::string_view rest(ports);

    while (!rest.empty()) {
        const auto comma = rest.find(',');
        const std::string entry(rest.substr(0, comma));
        rest = comma == std::string_view::npos ? std::string_view{} : rest.substr(comma + 1);
        unsigned from = 0, to = 0;

        if (std::sscanf(entry.c_str(), "%u=%u", &from, &to) == 2 && from == wanted)
            return htons(uint16_t(to));
    }

    return port;
}

// MH3_ONLINE_ADDRESSES (from=to[,from=to...]): direcciones IPv4 a cambiar, en ambos sentidos.
uint32_t MapAddress(uint32_t ip, bool outgoing) {
    const char* addresses = std::getenv("MH3_ONLINE_ADDRESSES");

    if (!addresses)
        return ip;

    std::string_view rest(addresses);

    while (!rest.empty()) {
        const auto comma = rest.find(',');
        const std::string entry(rest.substr(0, comma));
        rest = comma == std::string_view::npos ? std::string_view{} : rest.substr(comma + 1);
        const auto equals = entry.find('=');
        in_addr from{}, to{};

        if (equals == std::string::npos || inet_pton(AF_INET, entry.substr(0, equals).c_str(), &from) != 1 || inet_pton(AF_INET, entry.substr(equals + 1).c_str(), &to) != 1)
            continue;

        if (ip == (outgoing ? from : to).s_addr)
            return (outgoing ? to : from).s_addr;
    }

    return ip;
}

sockaddr_in ToNative(const Address& address) {
    sockaddr_in native{};
    native.sin_family = AF_INET;
    native.sin_addr.s_addr = MapAddress(address.ip, true);
    native.sin_port = MapPort(address.port);
    return native;
}

Address FromNative(const sockaddr_in& native) {
    return {MapAddress(native.sin_addr.s_addr, false), native.sin_port};
}

// Una opcion de socket de la Wii como la del host; false si esta capa la ignora.
bool NativeOption(uint32_t level, uint32_t name, int* nativeLevel, int* nativeName) {
    if (level == 6) { // IPPROTO_TCP
        *nativeLevel = IPPROTO_TCP;

        if (name == 0x2001) {
            *nativeName = TCP_NODELAY;
            return true;
        }

        return false;
    }

    if (level != 0xFFFF)
        return false;

    *nativeLevel = SOL_SOCKET;

    switch (name) {
    case 0x0004:
        *nativeName = SO_REUSEADDR;
        return true;
    case 0x0008:
        *nativeName = SO_KEEPALIVE;
        return true;
    case 0x0020:
        *nativeName = SO_BROADCAST;
        return true;
    case 0x0080:
        *nativeName = SO_LINGER;
        return true;
    case 0x0100:
        *nativeName = SO_OOBINLINE;
        return true;
    case 0x1001:
        *nativeName = SO_SNDBUF;
        return true;
    case 0x1002:
        *nativeName = SO_RCVBUF;
        return true;
    case 0x1003:
        *nativeName = SO_SNDLOWAT;
        return true;
    case 0x1004:
        *nativeName = SO_RCVLOWAT;
        return true;
    case 0x1008:
        *nativeName = SO_TYPE;
        return true;
    case 0x1009:
        *nativeName = SO_ERROR;
        return true;
    default:
        return false;
    }
}

uint32_t Swap32(uint32_t value) {
    return ntohl(value);
}

struct HostOverride {
    std::string pattern;
    uint32_t ip;
};

std::vector<HostOverride> hostOverrides;

bool MatchesHost(std::string_view pattern, std::string_view name) {
    return pattern == name || (pattern.size() > 2 && pattern.substr(0, 2) == "*." && name.size() >= pattern.size() - 1 && name.substr(name.size() - (pattern.size() - 1)) == pattern.substr(1));
}

// AddHostOverride y luego MH3_ONLINE_HOSTS: name=address, "*.dominio" para todo el dominio.
bool Override(const std::string& name, uint32_t* ip) {
    {
        std::lock_guard guard(overrideLock);

        for (const auto& entry : hostOverrides)
            if (MatchesHost(entry.pattern, name)) {
                *ip = entry.ip;
                return true;
            }
    }

    const char* hosts = std::getenv("MH3_ONLINE_HOSTS");

    if (!hosts)
        return false;

    std::string_view rest(hosts);

    while (!rest.empty()) {
        const auto comma = rest.find(',');
        const std::string_view entry = rest.substr(0, comma);
        rest = comma == std::string_view::npos ? std::string_view{} : rest.substr(comma + 1);
        const auto equals = entry.find('=');

        if (equals == std::string_view::npos)
            continue;

        const std::string_view pattern = entry.substr(0, equals);
        const std::string address(entry.substr(equals + 1));

        if (MatchesHost(pattern, name) && inet_pton(AF_INET, address.c_str(), ip) == 1)
            return true;
    }

    // Direct resolution for MH3SP community infrastructure:
    // Prevents error 20100/23403 if ISP/network DNS fails to resolve mh3sp.com subdomains.
    if (MatchesHost("opn.mh3sp.com", name) || MatchesHost("nas.mh3sp.com", name) || MatchesHost("available.mh3sp.com", name)) {
        inet_pton(AF_INET, "170.187.164.37", ip);
        return true;
    }
    if (MatchesHost("natneg1.mh3sp.com", name) || MatchesHost("natneg2.mh3sp.com", name) || MatchesHost("natneg3.mh3sp.com", name)) {
        inet_pton(AF_INET, "97.107.139.231", ip);
        return true;
    }

    return false;
}

void SetNonBlocking(SOCKET handle) {
    u_long enabled = 1;
    ioctlsocket(handle, FIONBIO, &enabled);
}
} // namespace

void AddHostOverride(std::string pattern, uint32_t ip) {
    std::lock_guard guard(overrideLock);
    hostOverrides.push_back({std::move(pattern), ip});
}

void AddPortOverride(uint16_t from, uint16_t to) {
    std::lock_guard guard(overrideLock);
    portOverrides.emplace_back(from, to);
}

bool Startup() {
    static const bool started = [] {
        WSADATA data{};
        return WSAStartup(MAKEWORD(2, 2), &data) == 0;
    }();

    // Primer uso de la red: si hay una ciudad offline instalada, se arranca aqui.
    if (started)
        LocalOnlineServer::Ensure();

    return started;
}

int32_t OpenSocket(bool stream) {
    const SOCKET handle = ::socket(AF_INET, stream ? SOCK_STREAM : SOCK_DGRAM, 0);

    if (handle == INVALID_SOCKET)
        return Last();

    SetNonBlocking(handle);

    // Los sockets UDP de la Wii pueden enviar a broadcast por defecto.
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
    }

    return static_cast<int32_t>(handle);
}

int32_t CloseSocket(int handle) {
    return Result(::closesocket(Native(handle)));
}

int32_t Bind(int handle, const Address& address) {
    const sockaddr_in native = ToNative(address);
    return Result(::bind(Native(handle), reinterpret_cast<const sockaddr*>(&native), sizeof(native)));
}

int32_t Connect(int handle, const Address& address) {
    const sockaddr_in native = ToNative(address);

    if (::connect(Native(handle), reinterpret_cast<const sockaddr*>(&native), sizeof(native)) == 0)
        return 0;

    const int error = WSAGetLastError();
    return error == WSAEWOULDBLOCK || error == WSAEINPROGRESS ? -kSoEInProgress : Error(error);
}

int32_t ConnectResult(int handle) {
    const SOCKET socket = Native(handle);
    fd_set writable, failed;
    FD_ZERO(&writable);
    FD_ZERO(&failed);
    FD_SET(socket, &writable);
    FD_SET(socket, &failed);
    timeval zero{0, 0};

    if (::select(0, nullptr, &writable, &failed, &zero) <= 0)
        return -kSoEInProgress;

    if (FD_ISSET(socket, &failed)) {
        int error = 0;
        int size = sizeof(error);
        ::getsockopt(socket, SOL_SOCKET, SO_ERROR, reinterpret_cast<char*>(&error), &size);
        return error ? Error(error) : -kSoEConnRefused;
    }

    return FD_ISSET(socket, &writable) ? 0 : -kSoEInProgress;
}

int32_t Listen(int handle, int backlog) {
    return Result(::listen(Native(handle), backlog));
}

int32_t Accept(int handle, Address* peer) {
    sockaddr_in native{};
    int size = sizeof(native);
    const SOCKET accepted = ::accept(Native(handle), reinterpret_cast<sockaddr*>(&native), &size);

    if (accepted == INVALID_SOCKET)
        return Last();

    SetNonBlocking(accepted);

    if (peer)
        *peer = FromNative(native);

    return static_cast<int32_t>(accepted);
}

int32_t Shutdown(int handle, int how) {
    return Result(::shutdown(Native(handle), how));
}

int32_t Send(int handle, const uint8_t* data, size_t size, bool outOfBand, const Address* to) {
    const int flags = outOfBand ? MSG_OOB : 0;

    if (!to)
        return Result(::send(Native(handle), reinterpret_cast<const char*>(data), int(size), flags));

    const sockaddr_in native = ToNative(*to);
    return Result(::sendto(Native(handle), reinterpret_cast<const char*>(data), int(size), flags, reinterpret_cast<const sockaddr*>(&native), sizeof(native)));
}

int32_t Receive(int handle, uint8_t* data, size_t size, bool peek, bool outOfBand, Address* from) {
    const int flags = (peek ? MSG_PEEK : 0) | (outOfBand ? MSG_OOB : 0);
    sockaddr_in native{};
    int length = sizeof(native);
    const int received = ::recvfrom(Native(handle), reinterpret_cast<char*>(data), int(size), flags, from ? reinterpret_cast<sockaddr*>(&native) : nullptr, from ? &length : nullptr);

    if (received == SOCKET_ERROR) {
        const int error = WSAGetLastError();

        // Un datagrama mas grande que el buffer: se entrega truncado, como en la Wii.
        if (error == WSAEMSGSIZE) {
            if (from)
                *from = FromNative(native);

            return int32_t(size);
        }

        // WSAECONNRESET en UDP se debe a ICMP port unreachable de pares; ignorar y continuar sin romper el socket
        if (error == WSAECONNRESET) {
            return -kSoEAgain;
        }

        return Error(error);
    }

    if (from)
        *from = FromNative(native);

    return received;
}

int32_t LocalAddress(int handle, Address* address) {
    sockaddr_in native{};
    int size = sizeof(native);

    if (::getsockname(Native(handle), reinterpret_cast<sockaddr*>(&native), &size) != 0)
        return Last();

    *address = FromNative(native);
    return 0;
}

int32_t PeerAddress(int handle, Address* address) {
    sockaddr_in native{};
    int size = sizeof(native);

    if (::getpeername(Native(handle), reinterpret_cast<sockaddr*>(&native), &size) != 0)
        return Last();

    *address = FromNative(native);
    return 0;
}

int32_t SetOption(int handle, uint32_t level, uint32_t name, const uint8_t* value, uint32_t size) {
    int nativeLevel = 0, nativeName = 0;

    if (!NativeOption(level, name, &nativeLevel, &nativeName))
        return 0;

    // Las opciones son ints big-endian (linger: dos).
    uint32_t words[2]{};
    const uint32_t count = std::min<uint32_t>(size / 4, 2);

    if (count == 0)
        return 0;

    for (uint32_t i = 0; i < count; ++i) {
        uint32_t word;
        std::memcpy(&word, value + i * 4, 4);
        words[i] = Swap32(word);
    }

    if (nativeLevel == SOL_SOCKET && nativeName == SO_LINGER) {
        linger option{};
        option.l_onoff = u_short(words[0]);
        option.l_linger = u_short(words[1]);
        return Result(::setsockopt(Native(handle), nativeLevel, nativeName, reinterpret_cast<const char*>(&option), sizeof(option)));
    }

    return Result(::setsockopt(Native(handle), nativeLevel, nativeName, reinterpret_cast<const char*>(words), int(count * 4)));
}

int32_t GetOption(int handle, uint32_t level, uint32_t name, uint8_t* value, uint32_t* size) {
    int nativeLevel = 0, nativeName = 0;
    uint32_t words[2]{};

    if (NativeOption(level, name, &nativeLevel, &nativeName)) {
        if (nativeLevel == SOL_SOCKET && nativeName == SO_LINGER) {
            linger option{};
            int length = sizeof(option);

            if (::getsockopt(Native(handle), nativeLevel, nativeName, reinterpret_cast<char*>(&option), &length) != 0)
                return Last();

            words[0] = option.l_onoff;
            words[1] = option.l_linger;
            *size = 8;
        } else {
            int length = sizeof(words);

            if (::getsockopt(Native(handle), nativeLevel, nativeName, reinterpret_cast<char*>(words), &length) != 0)
                return Last();

            if (nativeName == SO_ERROR && nativeLevel == SOL_SOCKET)
                words[0] = words[0] ? uint32_t(-Error(int(words[0]))) : 0;

            *size = std::min<uint32_t>(uint32_t(length), 8);
        }
    } else
        *size = 4;

    for (uint32_t i = 0; i < *size / 4; ++i) {
        const uint32_t word = Swap32(words[i]);
        std::memcpy(value + i * 4, &word, 4);
    }

    return 0;
}

int32_t Poll(std::vector<PollEntry>& entries) {
    std::vector<WSAPOLLFD> natives(entries.size());

    for (size_t i = 0; i < entries.size(); ++i) {
        SHORT events = 0;

        if (entries[i].events & 0x01)
            events |= POLLRDNORM;

        if (entries[i].events & 0x08)
            events |= POLLWRNORM;

        natives[i].fd = Native(entries[i].handle);
        natives[i].events = events;
        natives[i].revents = 0;
    }

    if (!natives.empty() && ::WSAPoll(natives.data(), ULONG(natives.size()), 0) == SOCKET_ERROR)
        return Last();

    int32_t count = 0;

    for (size_t i = 0; i < entries.size(); ++i) {
        uint32_t revents = 0;
        const SHORT native = natives[i].revents;

        if (entries[i].handle < 0)
            revents = 0x80;

        if (native & POLLRDNORM)
            revents |= 0x01;

        if (native & POLLRDBAND)
            revents |= 0x02;

        if (native & POLLWRNORM)
            revents |= 0x08;

        if (native & POLLERR)
            revents |= 0x20;

        if (native & POLLHUP)
            revents |= 0x40;

        if (native & POLLNVAL)
            revents |= 0x80;

        // Solo los eventos pedidos y las condiciones que siempre se informan.
        entries[i].revents = revents & (entries[i].events | 0xE0);
        count += entries[i].revents != 0;
    }

    return count;
}

bool Readable(int handle) {
    WSAPOLLFD entry{Native(handle), POLLRDNORM, 0};
    return ::WSAPoll(&entry, 1, 0) > 0;
}

bool Writable(int handle) {
    WSAPOLLFD entry{Native(handle), POLLWRNORM, 0};
    return ::WSAPoll(&entry, 1, 0) > 0;
}

Interface DefaultInterface() {
    // 10.0.1.30/24, puerta 10.0.1.1, DNS 8.8.8.8 (orden de red): una red privada fija.
    return {0x1E01000A, 0x00FFFFFF, 0xFF01000A, 0x0101000A, 0x08080808};
}

bool ParseIpv4(const std::string& text, uint32_t* ip) {
    return inet_pton(AF_INET, text.c_str(), ip) == 1;
}

struct Lookup::State {
    std::mutex lock;
    bool done = false;
    std::string name;
    std::vector<uint32_t> addresses;
};

Lookup::Lookup(std::string name) : state_(std::make_shared<State>()) {
    state_->name = std::move(name);
    uint32_t ip = 0;

    if (Override(state_->name, &ip) || inet_pton(AF_INET, state_->name.c_str(), &ip) == 1) {
        state_->addresses.push_back(ip);
        state_->done = true;
        return;
    }

    // getaddrinfo bloquea: en un hilo aparte; el hilo invitado espera en el planificador.
    const auto state = state_;
    std::thread([state] {
        addrinfo hints{};
        hints.ai_family = AF_INET;
        hints.ai_socktype = SOCK_STREAM;
        addrinfo* found = nullptr;
        std::vector<uint32_t> addresses;

        if (getaddrinfo(state->name.c_str(), nullptr, &hints, &found) == 0) {
            for (const addrinfo* entry = found; entry; entry = entry->ai_next)
                if (entry->ai_family == AF_INET)
                    addresses.push_back(reinterpret_cast<const sockaddr_in*>(entry->ai_addr)->sin_addr.s_addr);

            freeaddrinfo(found);
        }

        {
            std::lock_guard guard(state->lock);
            state->addresses = std::move(addresses);
            state->done = true;
        }

        GuestThreads::Notify();
    }).detach();
}

Lookup::~Lookup() = default;

bool Lookup::Done() const {
    std::lock_guard guard(state_->lock);
    return state_->done;
}

const std::vector<uint32_t>& Lookup::Addresses() const {
    return state_->addresses;
}

const std::string& Lookup::Name() const {
    return state_->name;
}

// ============================================================
// SchannelTls: implementacion TLS via Windows Schannel.
// Sin SNI (la Wii no lo envía). Acepta certs SHA-1/Nintendo.
// Soporta operaciones no bloqueantes: kWantRead / kWantWrite.
// ============================================================
namespace {

// Diagnostico: un estado de seguridad en una linea. `what` lo explica.
void NoteSstatus(const char* what, SECURITY_STATUS ss) {
    std::fprintf(stderr, "MH3 net: TLS %s: status 0x%08lX\n", what, static_cast<unsigned long>(ss));
}

// Tamanio max de un registro TLS + cabecera (16 KB + 5 bytes cabecera + 2KB MAC)
constexpr size_t kTlsMaxMsg = 16384 + 512;

class SchannelTls : public Tls {
public:
    SchannelTls(std::string hostname, bool verify)
        : hostname_(std::move(hostname)), verify_(verify),
          socket_(INVALID_SOCKET), credValid_(false), ctxValid_(false),
          hStore_(nullptr), handshakeDone_(false) {
        SecInvalidateHandle(&cred_);
        SecInvalidateHandle(&ctx_);
    }

    ~SchannelTls() override { Close(); }

    bool AddRootCa(const uint8_t* der, size_t size) override {
        if (!hStore_)
            hStore_ = CertOpenStore(CERT_STORE_PROV_MEMORY, 0, 0,
                                    CERT_STORE_CREATE_NEW_FLAG, nullptr);
        if (!hStore_) return false;

        PCCERT_CONTEXT cert = CertCreateCertificateContext(
            X509_ASN_ENCODING | PKCS_7_ASN_ENCODING, der, (DWORD)size);
        if (!cert) return false;

        bool ok = CertAddCertificateContextToStore(
            hStore_, cert, CERT_STORE_ADD_REPLACE_EXISTING, nullptr) != FALSE;
        CertFreeCertificateContext(cert);
        // Guardar DER de la CA para PeerSignedBy
        rootCaDer_.assign(der, der + size);
        return ok;
    }

    void Attach(int handle) override {
        socket_ = (SOCKET)handle;
    }

    int32_t Handshake() override {
        if (handshakeDone_) return kOk;

        // Primera llamada: inicializar credencial Schannel
        if (!credValid_) {
            SCHANNEL_CRED sc{};
            sc.dwVersion = SCHANNEL_CRED_VERSION;
            // Sin verificacion de nombre (no SNI), acepta certs SHA-1/old
            sc.dwFlags = SCH_CRED_NO_DEFAULT_CREDS
                       | SCH_CRED_NO_SERVERNAME_CHECK
                       | SCH_CRED_MANUAL_CRED_VALIDATION;
            // Aceptar TLS 1.0/1.1/1.2 — necesario para Nintendo CA
            sc.grbitEnabledProtocols = SP_PROT_TLS1_CLIENT
                                     | SP_PROT_TLS1_1_CLIENT
                                     | SP_PROT_TLS1_2_CLIENT;

            SECURITY_STATUS ss = AcquireCredentialsHandleA(
                nullptr, const_cast<char*>(UNISP_NAME_A),
                SECPKG_CRED_OUTBOUND, nullptr, &sc,
                nullptr, nullptr, &cred_, nullptr);
            if (ss != SEC_E_OK) { NoteSstatus("credentials", ss); return kFailed; }
            credValid_ = true;
        }

        // Bucle del handshake
        return DoHandshake();
    }

    int32_t Write(const uint8_t* data, size_t size) override {
        if (!handshakeDone_) return kFailed;

        SecPkgContext_StreamSizes sizes{};
        QueryContextAttributes(&ctx_, SECPKG_ATTR_STREAM_SIZES, &sizes);

        const size_t chunk = std::min(size, (size_t)sizes.cbMaximumMessage);
        const size_t totalBuf = sizes.cbHeader + chunk + sizes.cbTrailer;
        std::vector<uint8_t> buf(totalBuf);

        SecBuffer outBufs[4]{};
        outBufs[0].BufferType = SECBUFFER_STREAM_HEADER;
        outBufs[0].pvBuffer   = buf.data();
        outBufs[0].cbBuffer   = sizes.cbHeader;
        outBufs[1].BufferType = SECBUFFER_DATA;
        outBufs[1].pvBuffer   = buf.data() + sizes.cbHeader;
        outBufs[1].cbBuffer   = (ULONG)chunk;
        outBufs[2].BufferType = SECBUFFER_STREAM_TRAILER;
        outBufs[2].pvBuffer   = buf.data() + sizes.cbHeader + chunk;
        outBufs[2].cbBuffer   = sizes.cbTrailer;
        outBufs[3].BufferType = SECBUFFER_EMPTY;
        outBufs[3].cbBuffer   = 0;
        outBufs[3].pvBuffer   = nullptr;

        std::memcpy(outBufs[1].pvBuffer, data, chunk);

        SecBufferDesc desc{SECBUFFER_VERSION, 4, outBufs};        SECURITY_STATUS ss = EncryptMessage(&ctx_, 0, &desc, 0);
        if (ss != SEC_E_OK) { NoteSstatus("encrypt", ss); return kFailed; }

        // Enviar el registro cifrado entero: a medias llegaria corrupto.
        // Si el socket no acepta mas, esperar con select y reintentar.
        const ULONG total = outBufs[0].cbBuffer + outBufs[1].cbBuffer + outBufs[2].cbBuffer;
        {
            const char* p = reinterpret_cast<const char*>(buf.data());
            int remaining = (int)total;
            int guard = 0;
            while (remaining > 0) {
                const int sent = ::send(socket_, p, remaining, 0);
                if (sent == SOCKET_ERROR) {
                    const int err = WSAGetLastError();
                    if (err == WSAEWOULDBLOCK || err == WSAEINPROGRESS) {
                        fd_set writeSet;
                        FD_ZERO(&writeSet);
                        FD_SET(socket_, &writeSet);
                        timeval tv{1, 0};
                        if (::select(0, nullptr, &writeSet, nullptr, &tv) <= 0)
                            return ++guard > 5 ? kFailed : kWantWrite;
                        continue;
                    }
                    return kFailed;
                }
                p += sent;
                remaining -= sent;
            }
        }
        return (int32_t)chunk;
    }

    int32_t Read(uint8_t* data, size_t size) override {
        if (!handshakeDone_) return kFailed;

        // Primero intentar desencriptar lo que ya hay en el buffer de recepcion
        if (!recvBuf_.empty()) {
            int32_t r = TryDecrypt(data, size);
            if (r != 0) return r;
        }

        // Recibir mas datos del socket
        uint8_t tmp[4096];
        int n = ::recv(socket_, reinterpret_cast<char*>(tmp), sizeof(tmp), 0);
        if (n == SOCKET_ERROR) {
            int err = WSAGetLastError();
            if (err == WSAEWOULDBLOCK || err == WSAEINPROGRESS)
                return recvPlain_.empty() ? kWantRead : 0;
            return kFailed;
        }
        if (n == 0) return kZero;

        recvBuf_.insert(recvBuf_.end(), tmp, tmp + n);
        return TryDecrypt(data, size);
    }

    void Close() override {
        if (handshakeDone_ && ctxValid_) {
            // Enviar TLS close_notify
            DWORD token = SCHANNEL_SHUTDOWN;
            SecBuffer shutBuf{sizeof(token), SECBUFFER_TOKEN, &token};
            SecBufferDesc shutDesc{SECBUFFER_VERSION, 1, &shutBuf};
            ApplyControlToken(&ctx_, &shutDesc);

            SecBuffer outBuf{0, SECBUFFER_TOKEN, nullptr};
            SecBufferDesc outDesc{SECBUFFER_VERSION, 1, &outBuf};
            DWORD outFlags = 0;
            InitializeSecurityContextA(&cred_, &ctx_, nullptr,
                ISC_REQ_ALLOCATE_MEMORY | ISC_REQ_CONFIDENTIALITY, 0,
                SECURITY_NATIVE_DREP, nullptr, 0,
                &ctx_, &outDesc, &outFlags, nullptr);
            if (outBuf.pvBuffer) {
                ::send(socket_, (const char*)outBuf.pvBuffer, outBuf.cbBuffer, 0);
                FreeContextBuffer(outBuf.pvBuffer);
            }
        }
        if (ctxValid_) { DeleteSecurityContext(&ctx_); ctxValid_ = false; }
        if (credValid_) { FreeCredentialsHandle(&cred_); credValid_ = false; }
        if (hStore_) { CertCloseStore(hStore_, 0); hStore_ = nullptr; }
        handshakeDone_ = false;
    }

    // Verifica si el cert del peer esta firmado por la CA dada (DER).
    // Solo comprueba la firma directa (sin cadena completa), como indica el contrato.
    bool PeerSignedBy(const uint8_t* der, size_t size) override {
        if (!ctxValid_) return false;

        PCCERT_CONTEXT peer = nullptr;
        if (QueryContextAttributes(&ctx_, SECPKG_ATTR_REMOTE_CERT_CONTEXT, &peer) != SEC_E_OK || !peer)
            return false;

        // Crear contexto del CA
        PCCERT_CONTEXT ca = CertCreateCertificateContext(
            X509_ASN_ENCODING | PKCS_7_ASN_ENCODING, der, (DWORD)size);
        if (!ca) { CertFreeCertificateContext(peer); return false; }

        // Verificar que el cert del peer esta firmado por esta CA
        bool signed_by = CryptVerifyCertificateSignature(
            0, X509_ASN_ENCODING,
            peer->pbCertEncoded, peer->cbCertEncoded,
            &ca->pCertInfo->SubjectPublicKeyInfo) != FALSE;

        // Si no esta firmado directamente, recorrer la cadena
        if (!signed_by && peer->pCertInfo) {
            PCCERT_CONTEXT chain_cert = peer;
            HCERTSTORE sysStore = CertOpenSystemStoreA(0, "ROOT");
            for (int depth = 0; depth < 8 && !signed_by; ++depth) {
                PCCERT_CONTEXT issuer = CertFindCertificateInStore(
                    hStore_ ? hStore_ : sysStore,
                    X509_ASN_ENCODING, 0, CERT_FIND_ISSUER_OF,
                    chain_cert, nullptr);
                if (!issuer) break;
                signed_by = CryptVerifyCertificateSignature(
                    0, X509_ASN_ENCODING,
                    issuer->pbCertEncoded, issuer->cbCertEncoded,
                    &ca->pCertInfo->SubjectPublicKeyInfo) != FALSE;
                if (chain_cert != peer) CertFreeCertificateContext(chain_cert);
                chain_cert = issuer;
            }
            if (chain_cert != peer) CertFreeCertificateContext(chain_cert);
            if (sysStore) CertCloseStore(sysStore, 0);
        }

        CertFreeCertificateContext(ca);
        CertFreeCertificateContext(peer);
        return signed_by;
    }

private:
    // Intento de desencriptar datos en recvBuf_; retorna bytes descifrados o kWantRead.
    int32_t TryDecrypt(uint8_t* out, size_t outSize) {
        // Si ya tenemos datos en el buffer de texto claro, devolver
        if (!recvPlain_.empty()) {
            size_t n = std::min(outSize, recvPlain_.size());
            std::memcpy(out, recvPlain_.data(), n);
            recvPlain_.erase(recvPlain_.begin(), recvPlain_.begin() + n);
            return (int32_t)n;
        }

        if (recvBuf_.empty()) return kWantRead;

        SecBuffer inBufs[4]{};
        inBufs[0].BufferType = SECBUFFER_DATA;
        inBufs[0].pvBuffer   = recvBuf_.data();
        inBufs[0].cbBuffer   = (ULONG)recvBuf_.size();
        inBufs[1].BufferType = SECBUFFER_EMPTY;
        inBufs[2].BufferType = SECBUFFER_EMPTY;
        inBufs[3].BufferType = SECBUFFER_EMPTY;
        SecBufferDesc inDesc{SECBUFFER_VERSION, 4, inBufs};

        SECURITY_STATUS ss = DecryptMessage(&ctx_, &inDesc, 0, nullptr);
        if (ss == SEC_E_INCOMPLETE_MESSAGE) return kWantRead;
        if (ss == SEC_I_CONTEXT_EXPIRED)    return kZero;
        if (ss != SEC_E_OK) { NoteSstatus("decrypt", ss); return kFailed; }
        // Recolectar datos desencriptados
        for (int i = 0; i < 4; ++i) {
            if (inBufs[i].BufferType == SECBUFFER_DATA && inBufs[i].pvBuffer && inBufs[i].cbBuffer > 0) {
                const uint8_t* p = (const uint8_t*)inBufs[i].pvBuffer;
                recvPlain_.insert(recvPlain_.end(), p, p + inBufs[i].cbBuffer);
            }
        }
        // Datos extra sin procesar
        recvBuf_.clear();
        for (int i = 0; i < 4; ++i) {
            if (inBufs[i].BufferType == SECBUFFER_EXTRA && inBufs[i].pvBuffer && inBufs[i].cbBuffer > 0) {
                const uint8_t* p = (const uint8_t*)inBufs[i].pvBuffer;
                recvBuf_.assign(p, p + inBufs[i].cbBuffer);
            }
        }

        if (recvPlain_.empty()) return kWantRead;
        size_t n = std::min(outSize, recvPlain_.size());
        std::memcpy(out, recvPlain_.data(), n);
        recvPlain_.erase(recvPlain_.begin(), recvPlain_.begin() + n);
        return (int32_t)n;
    }

    // Handshake Schannel no bloqueante.
    // Clave: tras cada llamada Schannel consume parte (o todo) del token de
    // entrada y lo reporta en SECBUFFER_EXTRA; hay que quedarse solo con el
    // resto antes de volver a llamar, o se le re-almimenta la ServerHello
    // consumida y el handshake se atasca.
    int32_t DoHandshake() {
        DWORD reqFlags = ISC_REQ_CONFIDENTIALITY | ISC_REQ_REPLAY_DETECT
                       | ISC_REQ_SEQUENCE_DETECT | ISC_REQ_STREAM
                       | ISC_REQ_INTEGRITY | ISC_REQ_ALLOCATE_MEMORY
                       | ISC_REQ_MANUAL_CRED_VALIDATION;

        bool esperarServidor = false; // ya emitimos un token: solo quedan datos del par

        for (;;) {
            // Si el siguiente mensaje es del servidor y aun no ha llegado, leerlo antes.
            if (esperarServidor && hsRecvBuf_.empty()) {
                uint8_t tmp[4096];
                int n = ::recv(socket_, reinterpret_cast<char*>(tmp), sizeof(tmp), 0);
                if (n == SOCKET_ERROR) {
                    int e = WSAGetLastError();
                    return (e == WSAEWOULDBLOCK || e == WSAEINPROGRESS) ? kWantRead : kFailed;
                }
                if (n == 0) return kFailed;
                hsRecvBuf_.insert(hsRecvBuf_.end(), tmp, tmp + n);
                esperarServidor = false;
            }
            SecBuffer outBuf{0, SECBUFFER_TOKEN, nullptr};
            SecBufferDesc outDesc{SECBUFFER_VERSION, 1, &outBuf};

            SecBuffer inBufs[2]{};
            inBufs[0].BufferType = SECBUFFER_TOKEN;
            inBufs[0].pvBuffer   = hsRecvBuf_.empty() ? nullptr : hsRecvBuf_.data();
            inBufs[0].cbBuffer   = (ULONG)hsRecvBuf_.size();
            inBufs[1].BufferType = SECBUFFER_EMPTY;
            SecBufferDesc inDesc{SECBUFFER_VERSION, 2, inBufs};

            DWORD outFlags = 0;
            // Sin SNI: pasar nullptr como targetName
            SECURITY_STATUS ss = InitializeSecurityContextA(
                &cred_,
                ctxValid_ ? &ctx_ : nullptr,
                nullptr,  // target name = sin SNI
                reqFlags, 0, SECURITY_NATIVE_DREP,
                ctxValid_ ? &inDesc : nullptr, 0,
                ctxValid_ ? nullptr : &ctx_,
                &outDesc, &outFlags, nullptr);

            ctxValid_ = true;

            // Reconciliar el buffer de entrada con lo que Schannel dejo sin consumir.
            if (ss != SEC_E_INCOMPLETE_MESSAGE) {
                if (inBufs[1].BufferType == SECBUFFER_EXTRA && inBufs[1].pvBuffer && inBufs[1].cbBuffer > 0) {
                    const uint8_t* p = (const uint8_t*)inBufs[1].pvBuffer;
                    hsRecvBuf_.assign(p, p + inBufs[1].cbBuffer);
                } else {
                    hsRecvBuf_.clear();
                }
            }
            // (En INCOMPLETE_MESSAGE el token esta a medias: conservar y pedir mas.)

            // Enviar el token de salida, si lo hay, entero.
            if (outBuf.pvBuffer && outBuf.cbBuffer > 0) {
                const char* p = (const char*)outBuf.pvBuffer;
                int remaining = (int)outBuf.cbBuffer;
                bool blocked = false;
                while (remaining > 0) {
                    int sent = ::send(socket_, p, remaining, 0);
                    if (sent == SOCKET_ERROR) {
                        int e = WSAGetLastError();
                        if (e == WSAEWOULDBLOCK || e == WSAEINPROGRESS) {
                            fd_set writeSet;
                            FD_ZERO(&writeSet);
                            FD_SET(socket_, &writeSet);
                            timeval tv{1, 0};
                            if (::select(0, nullptr, &writeSet, nullptr, &tv) <= 0) {
                                blocked = true;
                                break;
                            }
                            continue; // reintentar tras el select
                        }
                        FreeContextBuffer(outBuf.pvBuffer);
                        return kFailed;
                    }
                    p += sent;
                    remaining -= sent;
                }
                FreeContextBuffer(outBuf.pvBuffer);
                if (blocked) return kWantWrite;
            } else if (outBuf.pvBuffer) {
                FreeContextBuffer(outBuf.pvBuffer);
            }

            if (ss == SEC_E_OK) {
                // Handshake completo; lo que quede sin consumir son datos de
                // aplicacion ya cifrados: pasarselos al receptor.
                if (!hsRecvBuf_.empty()) {
                    recvBuf_.insert(recvBuf_.end(), hsRecvBuf_.begin(), hsRecvBuf_.end());
                    hsRecvBuf_.clear();
                }
                handshakeDone_ = true;
                return kOk;
            }

            if (ss == SEC_I_CONTINUE_NEEDED || ss == SEC_E_INCOMPLETE_MESSAGE) {
                esperarServidor = (ss == SEC_I_CONTINUE_NEEDED);
                // Necesitamos mas datos del servidor.

                if (ss == SEC_E_INCOMPLETE_MESSAGE || !hsRecvBuf_.empty()) {
                    uint8_t tmp[4096];
                    int n = ::recv(socket_, reinterpret_cast<char*>(tmp), sizeof(tmp), 0);
                    if (n == SOCKET_ERROR) {
                        int e = WSAGetLastError();
                        return (e == WSAEWOULDBLOCK || e == WSAEINPROGRESS) ? kWantRead : kFailed;
                    }
                    if (n == 0) return kFailed;
                    hsRecvBuf_.insert(hsRecvBuf_.end(), tmp, tmp + n);
                }
                continue; // volver a intentar con el token crecido
            }

            return kFailed;
        }
    }

    std::string hostname_;
    bool verify_;
    SOCKET socket_;
    CredHandle cred_;
    CtxtHandle ctx_;
    bool credValid_;
    bool ctxValid_;
    bool handshakeDone_;
    HCERTSTORE hStore_;
    std::vector<uint8_t> rootCaDer_;
    std::vector<uint8_t> hsRecvBuf_;  // buffer del handshake
    std::vector<uint8_t> recvBuf_;    // datos cifrados recibidos
    std::vector<uint8_t> recvPlain_;  // datos descifrados listos
};

} // anonymous namespace

std::unique_ptr<Tls> Tls::Create(const std::string& hostname, bool verify) {
    return std::make_unique<SchannelTls>(hostname, verify);
}

bool HasTls() {
    return true;
}
} // namespace NetHost
