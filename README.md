# OceanTriRecomp Android 🦖📱

[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](LICENSE)
[![Platform: Android](https://img.shields.io/badge/Platform-Android%20ARM64-green.svg)](https://github.com/Kiridor123/OceanTriRecomp-Android)
[![Latest Release](https://img.shields.io/badge/Release-v1.4-orange.svg)](https://github.com/Kiridor123/OceanTriRecomp-Android/releases)

Port nativo para **Android** de **Monster Hunter Tri** mediante recompilación estática de código (AOT — *Ahead-of-Time*), logrando rendimiento nativo en hardware ARM64 sin necesidad de emulación.

> **⚠️ Este proyecto NO incluye ningún archivo del juego.** Se requiere una copia legal propia de Monster Hunter Tri (`.iso` / `.rvz`) para poder utilizarlo.

---

## 🙏 Reconocimientos y Proyectos Base

Este proyecto se construye directamente sobre el trabajo de otros desarrolladores. Con total transparencia, estos son los proyectos y autores cuyos aportes hicieron posible este port:

### Proyecto Base: OceanTriRecomp

> **Fork directo de [krisztsa/OceanTriRecomp](https://github.com/krisztsa/OceanTriRecomp)**
>
> Todo el mérito por la arquitectura de recompilación estática PowerPC → C++, el renderizador moderno con Aurora HAL, y el runtime nativo pertenece a **[krisztsa](https://github.com/krisztsa)**. Este repositorio adapta su trabajo para Android ARM64.

### Servidor Online: MH3SP (Monster Hunter 3 Server Project)

> El modo online (Ciudad Loc Lac) utiliza una implementación de servidor derivada de **[sepalani/MH3SP](https://github.com/sepalani/MH3SP)**, creado por **[Sepalani](https://github.com/sepalani)**.
>
> - **Repositorio del servidor**: [sepalani/MH3SP](https://github.com/sepalani/MH3SP) — Licencia AGPL-3.0
> - **Parches de cliente**: [sepalani/MH3SP-patcher](https://github.com/sepalani/MH3SP-patcher)
>
> El archivo [`mh3sp_native_server.cpp`](runtime/src/mh3sp_native_server.cpp) es una adaptación nativa en C++ del servidor Python original de MH3SP. El código derivado se distribuye bajo la misma licencia AGPL-3.0 del proyecto original, como se indica en sus cabeceras. La conexión online por defecto apunta a `mh3sp.com`.

### Toolchain de Recompilación: WiiCompiled

> El traductor estático PowerPC → C++ y el ABI bridge provienen de **WiiCompiled** (commit `85f250155f`).
> Consultar [`toolchain/ORIGIN.md`](toolchain/ORIGIN.md) y [`toolchain/THIRD-PARTY-NOTICES.md`](toolchain/THIRD-PARTY-NOTICES.md) para detalles y licencias (GPLv3).

### Otros Proyectos Utilizados

| Proyecto | Uso | Licencia |
|----------|-----|----------|
| [Aurora (encounter/aurora)](https://github.com/encounter/aurora) | HAL gráfico SDL3 + OpenGL ES 3.0 | MIT |
| [libSDL3](https://github.com/libsdl-org/SDL) | Ventana, audio, input multiplataforma | zlib |
| [Dolphin Emulator](https://github.com/dolphin-emu/dolphin) | Referencia de comportamiento hardware y Riivolution | GPL-2.0 |
| [Crypto++](https://github.com/weidai11/cryptopp) | Criptografía de red (SHA-1, ECDSA) | BSL-1.0 |
| [pugixml](https://github.com/zeux/pugixml) | Parser XML para parches Riivolution | MIT |
| [toml11](https://github.com/ToruNiina/toml11) | Configuración de ajustes | MIT |
| [stb_dxt](https://github.com/nothings/stb) | Compresión de texturas DXT | MIT/Public Domain |

---

## ✨ Características (v1.4)

### 🚀 Rendimiento Nativo ARM64
Código C++ compilado directamente para ARM64. Sin interpretación ni JIT en tiempo de ejecución. Menor consumo de batería y temperaturas más bajas comparado con emulación convencional.

### 🌐 Modo Online — Ciudad Loc Lac
- Conexión directa al servidor **mh3sp.com** para jugar online.
- Servidor local embebido (adaptación nativa de [MH3SP](https://github.com/sepalani/MH3SP)) para modo LAN.
- Beacon LAN para descubrimiento automático de partidas en red local.
- Implementación nativa de NAS (Nintendo Authentication Server).

### ⚡ Soporte de Alta Tasa de Refresco
- Soporte para pantallas de 60 Hz, 90 Hz y 120 Hz.
- Frame pacing dinámico sin estrangulamiento artificial.

### 🎮 Controles Táctiles Personalizables
- Gamepad virtual completo: sticks analógicos, A/B/X/Y, L/R/ZL/ZR, D-Pad, +/-.
- **Botones macro**: M1 (A+X), M2 (B+Y), M3 (L+R), M4 (A+B) — activables individualmente desde ajustes.
- Modo edición: arrastra y reposiciona cualquier botón. Escala individual por botón.
- Opción de ocultar controles táctiles para uso con mando físico.

### 🕹️ Mandos Bluetooth y USB
- Plug-and-Play para mandos Xbox, PlayStation (DualShock/DualSense), Nintendo Switch Pro y genéricos.
- Perfiles Nintendo y Xbox para disposición de botones.
- Intercambio de gatillos L/R ↔ ZL/ZR.

### 🔧 Mejoras Técnicas en v1.4
- **Sistema de limpieza GPU mejorado**: fence-based mesh retirement con drenaje automático.
- **Corrección de crash GPU**: operaciones de GPU ahora correctamente despachadas al render thread.
- **Límite de memoria GPU**: aumentado de 16 MiB a 64 MiB para evitar evicción prematura.
- **Logs estructurados**: registros del juego en `/storage/emulated/0/MH3/logs/`.
- **Corrección de audio**: mezcla nativa sin artefactos en dispositivos ARM64.
- **Corrección de crash en foto grupal**: estabilidad en capturas de pantalla multijugador.
- **Optimización de frustum culling**: reducción de draw calls innecesarios.

---

## 📲 Instalación

1. Ve a **[Releases](https://github.com/Kiridor123/OceanTriRecomp-Android/releases)**.
2. Descarga `OceanTriRecomp-Android-v1.4-arm64.apk`.
3. Instala en tu dispositivo (permite instalación de fuentes desconocidas si se solicita).
4. Abre la app, selecciona tu ROM de Monster Hunter Tri (`.iso` / `.rvz`, versión PAL `RMHP08`).
5. Espera la copia inicial de datos. ¡A cazar!

---

## 🛠️ Requisitos

- **CPU**: ARMv8-A 64-bit (Snapdragon, Dimensity, Tensor, Exynos)
- **OS**: Android 10+ (API 29)
- **GPU**: OpenGL ES 3.0+
- **Espacio**: ~3-5 GB libres

---

## 🏗️ Compilar desde el Código Fuente

### Prerrequisitos (Linux)
- Android NDK r28+
- Android SDK Build-Tools 35.0.0
- CMake 3.25+ y Ninja
- Clang / LLVM
- Java JDK 17+

### Pasos
```bash
# Clonar
git clone https://github.com/Kiridor123/OceanTriRecomp-Android.git
cd OceanTriRecomp-Android

# Variables de entorno
export ANDROID_HOME="/ruta/a/android-sdk"
export ANDROID_NDK_HOME="${ANDROID_HOME}/ndk/28.2.13676358"

# Configurar (ARM64)
cmake -B build-android \
  -DCMAKE_TOOLCHAIN_FILE="${ANDROID_NDK_HOME}/build/cmake/android.toolchain.cmake" \
  -DANDROID_ABI=arm64-v8a \
  -DANDROID_PLATFORM=android-29 \
  -DCMAKE_BUILD_TYPE=Release \
  -DANDROID=ON \
  -G Ninja

# Compilar
cmake --build build-android --target MH3 --parallel $(nproc)

# Empaquetar APK
bash packaging/android/build_apk.sh
```

El APK se genera en `release/OceanTriRecomp-Android-v1.4-arm64.apk`.

---

## 📜 Licencias

- **Runtime y toolchain**: GPLv3 (heredada de WiiCompiled)
- **Servidor online (mh3sp_native_server.cpp)**: AGPL-3.0 (derivado de [MH3SP](https://github.com/sepalani/MH3SP))
- **Aurora HAL**: MIT
- Ver [`toolchain/THIRD-PARTY-NOTICES.md`](toolchain/THIRD-PARTY-NOTICES.md) para la lista completa de dependencias.

---

## ⚖️ Aviso Legal

Este proyecto es una herramienta de preservación de software. **No distribuye, incluye ni enlaza a ningún archivo protegido por derechos de autor de Nintendo, Capcom ni ningún otro titular.** Se requiere que el usuario proporcione su propia copia legal del juego. El uso de este software es responsabilidad del usuario.
