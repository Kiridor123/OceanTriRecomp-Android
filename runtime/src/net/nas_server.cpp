// NAS local de la Ciudad offline (nas_server.h): responde lo que el juego pregunta
// antes de llegar al servidor de Capcom, como hacia online-local-nas.py:
//   POST /ac  acctcreate, login y svcloc (el NAS de Nintendo, DWC)
//   POST /pr  filtro de palabras: ninguna es mala
//   UDP 27900 chequeo de disponibilidad de GameSpy: disponible
#include "nas_server.h"

#ifdef _WIN32
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <winsock2.h>
#include <ws2tcpip.h>

#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <random>
#include <string>
#include <thread>
#include <utility>
#include <vector>

namespace {
using Fields = std::vector<std::pair<std::string, std::string>>;

constexpr char kAlphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
const std::string kAlnum = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
const std::string kUpper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

uint32_t RandomInt(uint32_t low, uint32_t high) {
    static thread_local std::mt19937 rng{std::random_device{}()};
    return std::uniform_int_distribution<uint32_t>(low, high)(rng);
}

std::string RandomText(const std::string& alphabet, size_t length) {
    std::string out;

    for (size_t i = 0; i < length; ++i)
        out += alphabet[RandomInt(0, uint32_t(alphabet.size() - 1))];

    return out;
}

std::string B64Encode(const std::string& in) {
    std::string out;
    size_t i = 0;

    for (; i + 2 < in.size(); i += 3) {
        const uint32_t v = (uint32_t(uint8_t(in[i])) << 16) | (uint32_t(uint8_t(in[i + 1])) << 8) | uint8_t(in[i + 2]);
        out += kAlphabet[v >> 18];
        out += kAlphabet[(v >> 12) & 63];
        out += kAlphabet[(v >> 6) & 63];
        out += kAlphabet[v & 63];
    }

    if (i + 1 == in.size()) {
        const uint32_t v = uint32_t(uint8_t(in[i])) << 16;
        out += kAlphabet[v >> 18];
        out += kAlphabet[(v >> 12) & 63];
        out += "==";
    } else if (i + 2 == in.size()) {
        const uint32_t v = (uint32_t(uint8_t(in[i])) << 16) | (uint32_t(uint8_t(in[i + 1])) << 8);
        out += kAlphabet[v >> 18];
        out += kAlphabet[(v >> 12) & 63];
        out += kAlphabet[(v >> 6) & 63];
        out += '=';
    }

    return out;
}

int B64Value(char c) {
    const char* p = c ? std::strchr(kAlphabet, c) : nullptr;
    return p ? int(p - kAlphabet) : -1;
}

// Como b64decode de Python: lo que no es del alfabeto se descarta; falla si el relleno no cuadra.
bool B64Decode(const std::string& in, std::string& out) {
    out.clear();
    uint32_t acc = 0;
    int bits = 0;
    size_t data = 0, pad = 0;

    for (const char c : in) {
        if (c == '=') {
            ++pad;
            continue;
        }

        const int v = B64Value(c);

        if (v < 0)
            continue;

        ++data;
        acc = (acc << 6) | uint32_t(v);
        bits += 6;

        if (bits >= 8) {
            bits -= 8;
            out += char((acc >> bits) & 0xFF);
        }
    }

    const size_t rem = data % 4;
    return rem != 1 && (rem == 0 || pad >= 4 - rem);
}

int Hex(char c) {
    if (c >= '0' && c <= '9')
        return c - '0';

    if (c >= 'a' && c <= 'f')
        return c - 'a' + 10;

    if (c >= 'A' && c <= 'F')
        return c - 'A' + 10;

    return -1;
}

std::string UrlDecode(const std::string& in) {
    std::string out;

    for (size_t i = 0; i < in.size(); ++i) {
        if (in[i] == '+') {
            out += ' ';
        } else if (in[i] == '%' && i + 2 < in.size() && Hex(in[i + 1]) >= 0 && Hex(in[i + 2]) >= 0) {
            out += char(Hex(in[i + 1]) * 16 + Hex(in[i + 2]));
            i += 2;
        } else {
            out += in[i];
        }
    }

    return out;
}

void Set(Fields& fields, const std::string& key, const std::string& value) {
    for (auto& field : fields)
        if (field.first == key) {
            field.second = value;
            return;
        }

    fields.emplace_back(key, value);
}

std::string Get(const Fields& fields, const std::string& key) {
    for (const auto& field : fields)
        if (field.first == key)
            return field.second;

    return {};
}

// Campos del NAS: base64 con '*' por '=' (y variantes de '+' y '/').
Fields Decode(const std::string& query) {
    Fields fields;
    size_t start = 0;

    while (start <= query.size()) {
        size_t end = query.find('&', start);

        if (end == std::string::npos)
            end = query.size();

        const std::string pair = query.substr(start, end - start);
        start = end + 1;

        if (pair.empty())
            continue;

        const size_t eq = pair.find('=');
        const std::string key = UrlDecode(pair.substr(0, eq));
        const std::string value = eq == std::string::npos ? std::string() : UrlDecode(pair.substr(eq + 1));
        std::string text = value;

        for (char& c : text) {
            if (c == '*')
                c = '=';
            else if (c == '.' || c == '>')
                c = '+';
            else if (c == '-' || c == '?')
                c = '/';
        }

        std::string decoded;
        Set(fields, key, B64Decode(text, decoded) ? decoded : value);
    }

    return fields;
}

std::string Encode(const Fields& fields) {
    std::string out;

    for (size_t i = 0; i < fields.size(); ++i) {
        std::string value = B64Encode(fields[i].second);

        for (char& c : value)
            if (c == '=')
                c = '*';

        if (i)
            out += '&';

        out += fields[i].first + "=" + value;
    }

    return out + "\r\n";
}

std::string Now() {
    const time_t t = time(nullptr);
    tm local{};
    localtime_s(&local, &t);
    char text[32];
    std::strftime(text, sizeof(text), "%Y%m%d%H%M%S", &local);
    return text;
}

std::string Token() {
    return "NDS" + RandomText(kAlnum, 96);
}

bool BuildReply(const std::string& path, const Fields& fields, Fields& reply) {
    if (path == "/ac") {
        std::string action = Get(fields, "action");
        std::transform(action.begin(), action.end(), action.begin(), [](unsigned char c) { return char(std::tolower(c)); });
        std::fprintf(stderr, "MH3 NAS /ac action=%s\n", action.c_str());
        Set(reply, "retry", "0");

        if (action == "acctcreate") {
            Set(reply, "returncd", "002");
            Set(reply, "userid", std::to_string(RandomInt(100000000, 999999999)));
        } else if (action == "login") {
            Set(reply, "returncd", "001");
            Set(reply, "locator", "gamespy.com");
            Set(reply, "challenge", RandomText(kUpper, 8));
            Set(reply, "token", Token());
        } else if (action == "svcloc") {
            Set(reply, "returncd", "007");
            Set(reply, "statusdata", "Y");
            Set(reply, "svchost", "n/a");
            Set(reply, "servicetoken", Token());
        } else {
            Set(reply, "returncd", "109");
        }

        Set(reply, "datetime", Now());
        return true;
    }

    if (path == "/pr") {
        const std::string words = Get(fields, "words");
        const size_t count = 1 + size_t(std::count(words.begin(), words.end(), '\t'));
        const std::string zeros(count, '0');
        Set(reply, "prwords", zeros);
        Set(reply, "returncd", "000");
        Set(reply, "datetime", Now());

        for (const char region : std::string("ACEJKP"))
            Set(reply, std::string("prwords") + region, zeros);

        return true;
    }

    return false;
}

void Send(SOCKET s, const std::string& status, const std::string& headers, const std::string& body) {
    const std::string out = "HTTP/1.0 " + status + "\r\n" + headers + "Content-Length: " + std::to_string(body.size()) + "\r\nConnection: close\r\n\r\n" + body;
    size_t sent = 0;

    while (sent < out.size()) {
        const int n = ::send(s, out.data() + sent, int(out.size() - sent), 0);

        if (n <= 0)
            break;

        sent += size_t(n);
    }
}

void Serve(SOCKET s) {
    DWORD timeout = 5000;
    setsockopt(s, SOL_SOCKET, SO_RCVTIMEO, reinterpret_cast<const char*>(&timeout), sizeof(timeout));
    std::string data;
    char buffer[4096];
    size_t headerEnd = std::string::npos;

    while (headerEnd == std::string::npos) {
        const int n = ::recv(s, buffer, sizeof(buffer), 0);

        if (n <= 0 || data.size() > 65536) {
            ::closesocket(s);
            return;
        }

        data.append(buffer, size_t(n));
        headerEnd = data.find("\r\n\r\n");
    }

    const std::string head = data.substr(0, headerEnd);
    std::string body = data.substr(headerEnd + 4);
    const size_t lineEnd = head.find("\r\n");
    const std::string line = head.substr(0, lineEnd == std::string::npos ? head.size() : lineEnd);
    const size_t a = line.find(' ');
    const size_t b = a == std::string::npos ? a : line.find(' ', a + 1);

    if (a == std::string::npos || b == std::string::npos) {
        ::closesocket(s);
        return;
    }

    const std::string method = line.substr(0, a), path = line.substr(a + 1, b - a - 1);
    std::string lower = head;
    std::transform(lower.begin(), lower.end(), lower.begin(), [](unsigned char c) { return char(std::tolower(c)); });
    const size_t pos = lower.find("content-length:");
    size_t length = pos == std::string::npos ? 0 : size_t(std::strtoul(head.c_str() + pos + 15, nullptr, 10));
    length = std::min<size_t>(length, 1u << 20);

    while (body.size() < length) {
        const int n = ::recv(s, buffer, sizeof(buffer), 0);

        if (n <= 0)
            break;

        body.append(buffer, size_t(n));
    }

    if (method == "GET") {
        Send(s, "200 OK", "Content-Type: text/html\r\nX-Organization: Nintendo\r\n", "ok");
    } else if (method == "POST") {
        Fields reply;

        if (BuildReply(path, Decode(body.substr(0, length)), reply))
            Send(s, "200 OK", "Content-Type: text/plain\r\nNODE: wifiappe1\r\n", Encode(reply));
        else
            Send(s, "404 Not Found", "", "");
    } else {
        Send(s, "501 Not Implemented", "", "");
    }

    ::closesocket(s);
}

void AcceptLoop(SOCKET listener) {
    for (;;) {
        const SOCKET client = ::accept(listener, nullptr, nullptr);

        if (client == INVALID_SOCKET)
            break;

        std::thread(Serve, client).detach();
    }
}

void AvailableLoop(SOCKET udp) {
    char buffer[512];

    for (;;) {
        sockaddr_in from{};
        int fromLength = sizeof(from);
        const int n = ::recvfrom(udp, buffer, sizeof(buffer), 0, reinterpret_cast<sockaddr*>(&from), &fromLength);

        if (n < 0)
            break;

        // 0x09, cuatro ceros y el nombre del juego: el backend esta disponible.
        if (n >= 1 && buffer[0] == 0x09) {
            static const char reply[] = {char(0xFE), char(0xFD), 0x09, 0, 0, 0, 0};
            ::sendto(udp, reply, sizeof(reply), 0, reinterpret_cast<const sockaddr*>(&from), fromLength);
        }
    }
}

SOCKET Bind(int type, uint16_t port) {
    const SOCKET s = ::socket(AF_INET, type, 0);

    if (s == INVALID_SOCKET)
        return s;

    sockaddr_in address{};
    address.sin_family = AF_INET;
    address.sin_port = htons(port);
    inet_pton(AF_INET, "127.0.0.1", &address.sin_addr);

    if (::bind(s, reinterpret_cast<const sockaddr*>(&address), sizeof(address)) != 0 || (type == SOCK_STREAM && ::listen(s, 16) != 0)) {
        ::closesocket(s);
        return INVALID_SOCKET;
    }

    return s;
}
} // namespace

namespace NasServer {
bool Start(uint16_t httpPort) {
    static bool started = false;

    if (started)
        return true;

    const SOCKET tcp = Bind(SOCK_STREAM, httpPort);

    if (tcp == INVALID_SOCKET)
        return false;

    std::thread(AcceptLoop, tcp).detach();
    const SOCKET udp = Bind(SOCK_DGRAM, 27900);

    if (udp != INVALID_SOCKET)
        std::thread(AvailableLoop, udp).detach();
    else
        std::fprintf(stderr, "MH3 NAS: no pude abrir UDP 27900 (otro programa lo usa)\n");

    started = true;
    std::fprintf(stderr, "MH3 NAS: escuchando en 127.0.0.1:%u\n", unsigned(httpPort));
    return true;
}
} // namespace NasServer
#else
namespace NasServer {
bool Start(uint16_t) {
    return false;
}
} // namespace NasServer
#endif