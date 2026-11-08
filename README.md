# OceanTriRecomp Android 🦖📱

[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](LICENSE)
[![Platform: Android](https://img.shields.io/badge/Platform-Android%20ARM64-green.svg)](https://github.com/Kiridor123/OceanTriRecomp-Android)
[![Latest Release](https://img.shields.io/badge/Release-v1.6-brightgreen.svg)](https://github.com/Kiridor123/OceanTriRecomp-Android/releases)

Port nativo para **Android** de **Monster Hunter Tri** mediante recompilación estática de código (AOT - *Ahead-of-Time*), logrando rendimiento nativo en hardware ARM64 sin necesidad de emulación pesada.

---

## 🙏 Reconocimientos y Proyectos Base

Este proyecto se construye directamente sobre el trabajo de otros desarrolladores. Con total transparencia, estos son los proyectos y autores cuyos aportes hicieron posible este port:

### Proyecto Base: OceanTriRecomp

> **Fork directo de [krisztsa/OceanTriRecomp](https://github.com/krisztsa/OceanTriRecomp)**
>
> Todo el mérito por la arquitectura de recompilación estática PowerPC → C++, el renderizador moderno con Aurora HAL, y el runtime nativo pertenece a **[krisztsa](https://github.com/krisztsa)**. Este repositorio adapta y extiende su trabajo para Android ARM64.

### Servidor Online: MH3SP (Monster Hunter 3 Server Project)

> El modo online (Ciudad Loc Lac) utiliza una implementación de servidor derivada de **[sepalani/MH3SP](https://github.com/sepalani/MH3SP)**, creado por **[Sepalani](https://github.com/sepalani)**.
>
> - **Repositorio del servidor**: [sepalani/MH3SP](https://github.com/sepalani/MH3SP) — Licencia AGPL-3.0
> - **Parches de cliente**: [sepalani/MH3SP-patcher](https://github.com/sepalani/MH3SP-patcher)
>
> El archivo [`mh3sp_native_server.cpp`](runtime/src/mh3sp_native_server.cpp) es una adaptación nativa en C++ del servidor Python original de MH3SP. El código derivado se distribuye bajo la misma licencia AGPL-3.0 del proyecto original, como se indica en sus cabeceras. La conexión online por defecto apunta al servidor comunitario `mh3sp.com`.

### Toolchain de Recompilación: WiiCompiled

> El traductor estático PowerPC → C++ y el ABI bridge provienen de **WiiCompiled** (commit `85f250155f`).
> Consultar [`toolchain/ORIGIN.md`](toolchain/ORIGIN.md) y [`toolchain/THIRD-PARTY-NOTICES.md`](toolchain/THIRD-PARTY-NOTICES.md) para detalles y licencias (GPLv3).

### 👥 Colaboradores y Contribuciones de la Comunidad

- **[Álvaro Barchín (@abarchin)](https://github.com/abarchin)**:
  - **Audio:** Recuperación y reconexión automática del stream de audio en Android tras suspender la app o cambiar a otra aplicación (`AAudio` lifecycle fix).
  - **Gráficos / Efectos:** Corrección del orden de iluminación en efectos de partículas (`CalcCollected`), solucionando el destello blanco/textura sin iluminar al golpear monstruos o levantar polvo al correr.
  - **Controles:** Opción para auto-ocultar la rueda de ajustes (⚙) tras inactividad táctil (3 s, 5 s, 10 s).

### Otros Proyectos Utilizados

| Proyecto | Uso | Licencia |
|----------|-----|----------|
| [Aurora (encounter/aurora)](https://github.com/encounter/aurora) | HAL gráfico SDL3 + OpenGL ES 3.0 | MIT |
| [libSDL3](https://github.com/libsdl-org/SDL) | Ventana, audio, input multiplataforma | zlib |
| [Dolphin Emulator](https://github.com/dolphin-emu/dolphin) | Referencia de comportamiento hardware, Riivolution y paquetes de texturas HD | GPL-2.0 |
| [Crypto++](https://github.com/weidai11/cryptopp) | Criptografía de red (SHA-1, ECDSA) | BSL-1.0 |
| [pugixml](https://github.com/zeux/pugixml) | Parser XML para parches Riivolution | MIT |
| [toml11](https://github.com/ToruNiina/toml11) | Configuración de ajustes | MIT |
| [stb_dxt](https://github.com/nothings/stb) | Compresión de texturas DXT | MIT/Public Domain |

---

## 📲 Instalación

1. Dirígete a la sección de **[Releases](https://github.com/Kiridor123/OceanTriRecomp-Android/releases)**.
2. Descarga el archivo `OceanTriRecomp-Android-v1.4.5-arm64.apk`.
3. Instálalo en tu dispositivo Android (permite fuentes desconocidas si tu navegador lo solicita).
4. Abre **Monster Hunter Tri**. En la pantalla de bienvenida, selecciona tu copia legal de Monster Hunter Tri (`.iso` o `.rvz`, versión europea recomendada `RMHP08`).
5. ¡A cazar!

---

## 🛠️ Requisitos del Dispositivo

- **Procesador**: 64-bit ARMv8-A (Snapdragon, MediaTek Dimensity, Google Tensor, Samsung Exynos).
- **Sistema Operativo**: Android 10 (API nivel 29) o superior.
- **Gráficos**: Compatible con OpenGL ES 3.0+.
- **Almacenamiento**: Alrededor de 3 a 5 GB libres para los datos del juego y texturas opcionales.

---

## 🏗️ Compilar desde el Código Fuente (Build from Source)

### Prerrequisitos (Linux)
- Android NDK r28+
- Android SDK Build-Tools 35.0.0
- CMake 3.25+ y Ninja
- Clang / LLVM
- Java JDK 17+

### Pasos
```bash
# 1. Clonar el repositorio
git clone https://github.com/Kiridor123/OceanTriRecomp-Android.git
cd OceanTriRecomp-Android

# 2. Configurar variables de entorno (ajusta según tus rutas locales)
export ANDROID_HOME="/ruta/a/android-sdk"
export ANDROID_NDK_HOME="${ANDROID_HOME}/ndk/28.2.13676358"

# 3. Configurar CMake (ARM64)
cmake -B build-android \
  -DCMAKE_TOOLCHAIN_FILE="${ANDROID_NDK_HOME}/build/cmake/android.toolchain.cmake" \
  -DANDROID_ABI=arm64-v8a \
  -DANDROID_PLATFORM=android-29 \
  -DCMAKE_BUILD_TYPE=Release \
  -DANDROID=ON \
  -G Ninja

# 4. Compilar target nativo
cmake --build build-android --target MH3 --parallel $(nproc)

# 5. Empaquetar APK firmado
bash packaging/android/build_apk.sh
```

El APK firmado se genera en `release/OceanTriRecomp-Android-v1.4.5-arm64.apk`.

---

## ⚖️ Licencia y Descargo de Responsabilidad (Disclaimer)

### Licencia del Código
Este proyecto está distribuido bajo la licencia **GNU General Public License v3.0 (GPLv3)**. Consulta el archivo [LICENSE](LICENSE) para más detalles.

### Descargo de Responsabilidad Legal
- **Monster Hunter** y **Monster Hunter Tri** son marcas registradas de **Capcom Co., Ltd.**
- **Wii** es una marca registrada de **Nintendo Co., Ltd.**
- Este proyecto es un esfuerzo independiente de código abierto con fines de investigación, compatibilidad y preservación histórica. No está afiliado, respaldado, asociado ni patrocinado por Capcom ni por Nintendo.
- **Este repositorio y sus versiones compiladas (Releases) NO contienen ni distribuyen ningún archivo con derechos de autor, código propietario, modelos, texturas, música ni archivos ROM del juego original.** El usuario final debe suministrar su propia copia legalmente adquirida de *Monster Hunter Tri* para generar o cargar los datos necesarios en la aplicación.
