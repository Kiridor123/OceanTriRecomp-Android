# Project Moga 🦖🌊💻🐧📱

[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](LICENSE)
[![Platforms: Windows | Linux | Android](https://img.shields.io/badge/Platforms-Windows%20x64%20%7C%20Linux%20x86__64%20%7C%20Android%20ARM64-green.svg)](https://github.com/Kiridor123/Project-Moga)
[![Latest Release](https://img.shields.io/badge/Release-v1.7-brightgreen.svg)](https://github.com/Kiridor123/Project-Moga/releases)
[![Crossplay: PC / Android / Consolas](https://img.shields.io/badge/Online-Crossplay%20MH3SP-orange.svg)](https://github.com/Kiridor123/Project-Moga/releases)

**Project Moga** (anteriormente *OceanTriRecomp Android & Linux*) es una bifurcación multiplataforma de **[krisztsa/OceanTriRecomp](https://github.com/krisztsa/OceanTriRecomp)** que lleva **Monster Hunter Tri** de forma nativa a **Windows (x64)**, **Linux (x86_64 AppImage)** y **Android (ARM64)** mediante recompilación estática de código (AOT — *Ahead-of-Time*), logrando rendimiento nativo hasta 120 FPS y **multijugador online con crossplay total** sin necesidad de emulación pesada.

---

## ✨ Novedades Destacadas (v1.7)

- **🪟 Nuevo Port Nativo para Windows x64 con Crossplay Completo:**
  - Versión portable lista para ejecutar (`Project-Moga-Windows-v1.7-x64.zip` — solo descomprimir y abrir `ProjectMoga.exe`), con respaldo automático de Vulkan a ANGLE Direct3D 11.
  - **Crossplay total en Ciudad de Loc Lac (MH3SP / `mh3sp.com` y servidores LAN/privados):** gracias a la nueva capa nativa de red Winsock2, los cazadores de **Windows** pueden conectarse, compartir sala y cazar en tiempo real con jugadores de **Android, Linux y consolas reales (Wii / Wii U / Dolphin)**.
- **🛡️ Armadura Superpuesta nativa (*Transmog / Layered Armor*):**
  - Nueva opción **`Armadura Superp.`** integrada directamente dentro del Baúl de Objetos (en la Aldea y en Loc Lac).
  - Permite cambiar la apariencia visual de **Casco, Pecho, Brazos, Cintura y Piernas** usando las armaduras forjadas en tu baúl, además de una opción para **ocultar el casco**, manteniendo intactas las estadísticas y habilidades de tu armadura equipada.
  - Cambios visuales en vivo sobre el cazador 3D y soporte completo para pantalla táctil, mando y ratón/teclado.
- **🎯 Cámara de Objetivo (*Target Camera* estilo MH3U / MH4U):**
  - Fija monstruos grandes con medallas interactivas en pantalla (táctiles en Android o alternables con mando/teclado) e icono de calavera azul pulsante cuando un monstruo está listo para capturar.
  - Pulsar `L` enfoca instantáneamente al monstruo fijado (o centra la cámara detrás del cazador si no hay objetivo seleccionado).
- **🎮 Corrección de Gatillos `ZL` / `ZR` y Remapeo de Teclado:**
  - **Solucionada la asignación de gatillos del mando (#22):** ahora los gatillos analógicos/digitales (`ZL`/`ZR` y `LT`/`RT`), su reasignación personalizada y el intercambio de gatillos funcionan correctamente en **Windows, Linux y Android** (incluyendo el control de nado con `ZL`/`ZR`).
  - **Remapeo completo de teclado en PC** (Windows y Linux) desde el menú de Ajustes (`F1`).
- **🛠️ Estabilidad Online y UI:**
  - Corregido un cierre inesperado (*crash* `SIGSEGV` en `CaptureState`) al renderizar interfaz superpuesta en salas online de Loc Lac en Android y Linux.
  - Corregido un error en Android donde cerrar el menú de Transmog volvía a abrirlo de inmediato por un toque residual del botón táctil `A`.
  - Nuevo nombre e identidad visual (**Project Moga**) con iconos actualizados para Windows, Linux y Android.

### Mejoras heredadas de versiones anteriores (v1.6.5)
- **Sistema de Logros Nativo (198 Logros — 3.814 pts):** 57 logros de la Aldea de Moga y 141 de Ciudad de Loc Lac con notificaciones emergentes y pestaña `Logros` en Ajustes (`F1` / `⚙`).
- **Números de daño flotantes** (estilo MHW / Rise) en solitario y online.
- **Físicas y temporizadores corregidos a 90 / 120 FPS**, corrección de cámara en agarres (*pin attacks*) y golpe de escudo de Lanza.
- **Linux AppImage compilado en Debian 11 (`glibc 2.31+`)** para máxima compatibilidad entre distribuciones.

---

## 🙏 Reconocimientos y Proyectos Base

Este proyecto es una bifurcación y extensión directa del trabajo de otros desarrolladores. Con total transparencia, estos son los proyectos y autores que hacen posible **Project Moga**:

### Proyecto Base: OceanTriRecomp

> **Bifurcación directa (fork) de [krisztsa/OceanTriRecomp](https://github.com/krisztsa/OceanTriRecomp)**
>
> Todo el mérito por la arquitectura de recompilación estática PowerPC → C++, el renderizador moderno con Aurora HAL y el runtime nativo pertenece a **[krisztsa](https://github.com/krisztsa)**. **Project Moga** mantiene su base como bifurcación de OceanTriRecomp y la extiende con soporte para **Windows x64 con crossplay**, **Android ARM64**, **Linux AppImage**, controles táctiles, Transmog, Cámara de Objetivo y mejoras de calidad de vida.

### Servidor Online: MH3SP (Monster Hunter 3 Server Project)

> El modo online (Ciudad de Loc Lac) utiliza una implementación derivada de **[sepalani/MH3SP](https://github.com/sepalani/MH3SP)**, creado por **[Sepalani](https://github.com/sepalani)**.
>
> - **Repositorio del servidor**: [sepalani/MH3SP](https://github.com/sepalani/MH3SP) — Licencia AGPL-3.0
> - **Parches de cliente**: [sepalani/MH3SP-patcher](https://github.com/sepalani/MH3SP-patcher)
>
> El archivo [`mh3sp_native_server.cpp`](runtime/src/mh3sp_native_server.cpp) es una adaptación nativa en C++ del servidor Python original de MH3SP, distribuida bajo la misma licencia AGPL-3.0. La conexión online por defecto apunta al servidor comunitario `mh3sp.com`, permitiendo **crossplay** entre **Windows, Linux, Android y consolas (Wii / Wii U / Dolphin)**.

### Sistema de Logros: RetroAchievements.org

> El catálogo de **198 logros** (57 de la Aldea de Moga y 141 de la Ciudad de Loc Lac) está basado e inspirado con profundo agradecimiento en el trabajo de **[RetroAchievements.org](https://retroachievements.org/)** y del desarrollador comunitario **Gudra**:
>
> - **Set Base — Aldea de Moga (57 logros)**: [Monster Hunter Tri (Game #208)](https://retroachievements.org/game/208)
> - **Subset — Ciudad Loc Lac (141 logros)**: [Monster Hunter Tri — Loc Lac (Set #36536)](https://retroachievements.org/game/208?set=36536)
>
> Todo el mérito por el diseño, curación, títulos, descripciones y puntuación de estos desafíos pertenece a **RetroAchievements.org** y a su creador (**Gudra**). La integración en Project Moga es un rastreador **100 % local y offline** para conveniencia de los jugadores; no está afiliado oficialmente con RetroAchievements ni sincroniza puntuaciones con sus servidores.

### Toolchain de Recompilación: WiiCompiled

> El traductor estático PowerPC → C++ y el ABI bridge provienen de **WiiCompiled** (commit `85f250155f`).
> Consultar [`toolchain/ORIGIN.md`](toolchain/ORIGIN.md) y [`toolchain/THIRD-PARTY-NOTICES.md`](toolchain/THIRD-PARTY-NOTICES.md) para detalles y licencias (GPLv3).

### 👥 Colaboradores y Contribuciones de la Comunidad

- **[Álvaro Barchín (@abarchin)](https://github.com/abarchin)**:
  - **Audio:** Recuperación y reconexión automática del stream de audio en Android tras suspender la app o cambiar a otra aplicación (`AAudio` lifecycle fix).
  - **Gráficos / Efectos:** Corrección del orden de iluminación en efectos de partículas (`CalcCollected`), solucionando el destello blanco/textura sin iluminar al golpear monstruos o levantar polvo al correr.
  - **Controles:** Opción para auto-ocultar la rueda de ajustes (`⚙`) tras inactividad táctil (3 s, 5 s, 10 s).

### Otros Proyectos Utilizados

| Proyecto | Uso | Licencia |
|----------|-----|----------|
| [Aurora (encounter/aurora)](https://github.com/encounter/aurora) | HAL gráfico SDL3 + Vulkan / ANGLE D3D11 / OpenGL ES 3.0 | MIT |
| [libSDL3](https://github.com/libsdl-org/SDL) | Ventana, audio, input multiplataforma | zlib |
| [Dolphin Emulator](https://github.com/dolphin-emu/dolphin) | Referencia de comportamiento hardware, Riivolution y paquetes de texturas HD | GPL-2.0 |
| [Crypto++](https://github.com/weidai11/cryptopp) | Criptografía de red (SHA-1, ECDSA) | BSL-1.0 |
| [pugixml](https://github.com/zeux/pugixml) | Parser XML para parches Riivolution | MIT |
| [toml11](https://github.com/ToruNiina/toml11) | Configuración de ajustes | MIT |
| [stb_dxt](https://github.com/nothings/stb) | Compresión de texturas DXT | MIT/Public Domain |

---

## 📲 Instalación

### 🪟 Windows (x64 Portable — Crossplay completo)
1. Dirígete a la sección de **[Releases](https://github.com/Kiridor123/Project-Moga/releases)** y descarga `Project-Moga-Windows-v1.7-x64.zip`.
2. Descomprime el archivo ZIP en la carpeta de tu preferencia.
3. Ejecuta `ProjectMoga.exe` y selecciona tu copia legal de *Monster Hunter Tri* (`.rvz` o `.iso` PAL `RMHP08`).
4. Abre el menú de ajustes en cualquier momento con **`F1`** (incluye servidor online, mando, teclado, gráficos y logros).

### 🐧 Linux (x86_64 AppImage — compatible con `glibc 2.31+`)
1. Descarga `Project-Moga-Linux-v1.7-x86_64.AppImage` desde **[Releases](https://github.com/Kiridor123/Project-Moga/releases)**.
2. Dale permisos de ejecución (`chmod +x Project-Moga-Linux-v1.7-x86_64.AppImage`) y ejecútalo.
3. Selecciona tu copia legal de *Monster Hunter Tri* (`.rvz` / `.iso` PAL `RMHP08`) cuando se solicite.

### 📱 Android (ARM64)
1. Dirígete a la sección de **[Releases](https://github.com/Kiridor123/Project-Moga/releases)** y descarga `Project-Moga-Android-v1.7-arm64.apk`.
2. Instálalo en tu dispositivo Android (permite fuentes desconocidas si tu navegador lo solicita).
3. Abre **Project Moga**. En la pantalla de bienvenida, selecciona tu copia legal de *Monster Hunter Tri* (`.iso` o `.rvz`, versión europea `RMHP08`).
4. ¡A cazar!

---

## 🛠️ Requisitos

- **Windows**: Windows 10 / 11 de 64 bits con GPU compatible con Vulkan o Direct3D 11.
- **Linux**: Distribución x86_64 con `glibc 2.31+` (Debian 11+, Ubuntu 20.04+, Fedora, Arch, SteamOS) y OpenGL / Vulkan.
- **Android**: Procesador ARM64 (ARMv8-A), Android 10 (API 29) o superior, OpenGL ES 3.0+.
- **Almacenamiento**: Alrededor de 3 a 5 GB libres para los datos del juego y texturas HD opcionales.

---

## 🏗️ Compilar desde el Código Fuente (Build from Source)

### Windows x64 (cross-compilación desde Linux con `llvm-mingw`)
```bash
./scripts/build-windows.sh
```
Genera `release/Project-Moga-Windows-v1.7-x64.zip`.

### Linux x86_64 AppImage (contenedor Debian 11 / `glibc 2.31`)
```bash
./scripts/build-linux-appimage.sh
```
Genera `release/Project-Moga-Linux-v1.7-x86_64.AppImage`.

### Android ARM64 APK
```bash
# Prerrequisitos: Android NDK r28+, SDK Build-Tools 35, CMake 3.28+, Ninja, JDK 17+
./gradlew assembleRelease
```
O mediante el script de empaquetado manual en `packaging/android/build_apk.sh`.

---

## ⚖️ Licencia y Descargo de Responsabilidad (Disclaimer)

### Licencia del Código
Este proyecto está distribuido bajo la licencia **GNU General Public License v3.0 (GPLv3)**. Consulta el archivo [LICENSE](LICENSE) para más detalles.

### Descargo de Responsabilidad Legal
- **Monster Hunter** y **Monster Hunter Tri** son marcas registradas de **Capcom Co., Ltd.**
- **Wii** es una marca registrada de **Nintendo Co., Ltd.**
- Este proyecto es un esfuerzo independiente de código abierto con fines de investigación, compatibilidad y preservación histórica. No está afiliado, respaldado, asociado ni patrocinado por Capcom ni por Nintendo.
- **Este repositorio y sus versiones compiladas (Releases) NO contienen ni distribuyen ningún archivo con derechos de autor, código propietario, modelos, texturas, música ni archivos ROM del juego original.** El usuario final debe suministrar su propia copia legalmente adquirida de *Monster Hunter Tri* para generar o cargar los datos necesarios en la aplicación.
