# OceanTriRecomp Android 🦖📱

[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](LICENSE)
[![Platform: Android](https://img.shields.io/badge/Platform-Android%20ARM64-green.svg)](https://github.com/Kiridor123/OceanTriRecomp-Android)
[![Latest Release](https://img.shields.io/badge/Release-v1.5-brightgreen.svg)](https://github.com/Kiridor123/OceanTriRecomp-Android/releases)

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

## ✨ Novedades y Características (v1.5)

### ⌨️ 1. Integración Nativa del Teclado de Android
- **Apertura automática**: Al abrir cualquier diálogo de introducción de texto del juego (creación y nombre de personaje, chat de Loc Lac, nombres de equipamiento, etc.), se despliega automáticamente el teclado del sistema (Gboard, Samsung Keyboard, etc.).
- **Escritura y borrado en tiempo real**: Se escribe y borra directamente sobre el búfer UTF-16BE del motor de juego con soporte para caracteres en español (`ñ`, tildes, números y signos).
- **Confirmación con Enter**: Al presionar la tecla *Enter / Intro / Enviar*, el juego procesa y confirma el texto de forma nativa cerrando el menú de la Wii.
- **Ocultamiento inteligente de controles virtuales**: Los botones táctiles en pantalla se ocultan automáticamente mientras el teclado está activo para no obstruir la visión, reapareciendo al cerrarlo.
- **Restauración al volver de segundo plano**: Si sales de la aplicación o cambias de ventana con el teclado activo, este se restaura suavemente al reenfocar la pantalla.
- **Aislamiento de controles de juego**: Se bloquean las teclas de control de PC mientras se escribe, evitando que espacios o letras activen botones o muevan al cazador.

### ⏭️ 2. Salto de Cinemáticas con el Botón A
- Permite omitir cinemáticas en tiempo real simplemente pulsando el **botón A** o el **botón +**.
- Funciona tanto en las **secuencias del motor** (apariciones de monstruos y cinemáticas in-game) como en los **vídeos pre-renderizados** (vídeos de apertura y transición en formato THP).

### 🚀 3. Corrección de Rendimiento y Cámara Lenta en Gamas de Entrada (Helio G25 / Nokia G10)
- Se solucionó el problema por el cual dispositivos que corren a 15–25 FPS sufrían una ralentización artificial (simulación en cámara lenta).
- Se amplió el límite delta dinámico de fotogramas hasta 100 ms (10 FPS), permitiendo que la física y las animaciones se sincronicen al 100% en tiempo real a cualquier tasa de cuadros.

### 🛡️ 4. Corrección de Crash en Dispositivos con 4GB RAM (Helio G85 / Moto G24)
- Solucionado el fallo `Invalid or duplicate model GPU registration` que ocurría al grabar pantalla o al reanudar la app en dispositivos con SoC MediaTek Helio G85.
- Gestión segura de handles de malla y purga optimizada en el ciclo de dibujado.

### 📺 5. Selector de Relación de Aspecto
- En `Ajustes` → `Gráficos` se incluye selector entre **16:9 Panorámica (Recomendado)**, **Pantalla Completa Adaptable** (llena la pantalla del móvil sin bordes) y **4:3 Clásica**, resolviendo franjas negras desalineadas en menús.

---

### ⚠️ Bugs Conocidos (Known Issues)
1. **Atajo acuático en "Sin amor para el Ludroth"**: En la misión de 2 estrellas de la aldea llamada *"Sin amor para el Ludroth"*, existe un fallo en el atajo acuático del campamento base donde pueden fallar las físicas (en otras misiones no se ha detectado este problema).
2. **Autocompletado del teclado**: Con la integración del teclado de Android, si se hace uso de las sugerencias o autocompletado predictivo del teclado, el texto renderizado en la caja de texto del juego puede buguearse visualmente (se recomienda teclear directamente letra por letra).

---

## ✨ Versiones Anteriores

### 🏰 Novedades de la v1.4.5

### 🏰 1. Modo Online — Ciudad Loc Lac
- Conexión directa al servidor comunitario oficial **mh3sp.com** para jugar en línea con otros cazadores.
- Servidor local embebido (adaptación nativa de [MH3SP](https://github.com/sepalani/MH3SP)) para modo LAN.
- Beacon LAN para descubrimiento automático de partidas en red local o redes virtuales privadas (**ZeroTier**).
- Implementación nativa de NAS (Nintendo Authentication Server).

### ⏱️ 2. Selector Libre de FPS (30 / 60 / 90 / 120 FPS)
- Selector de FPS totalmente configurable y a elección del usuario en `Ajustes` → `Gráficos`:
  - **30 FPS**: Velocidad de físicas idéntica a la consola Wii original (recomendado para estabilidad en el modo online).
  - **60, 90 o 120 FPS**: Máxima fluidez y respuesta visual en pantallas con alta tasa de refresco.
- Control total a discreción del jugador sin bloqueos forzados.

### 🔇 3. Corrección de Audio en Segundo Plano (AAudio)
- Se solucionó la pérdida permanente de sonido al cambiar de aplicación o al apagar la pantalla (`AAudio stream disconnect`). Ahora el audio se reanuda suavemente al regresar al juego.

### 💥 4. Corrección de Destellos y Partículas en Combate
- Corregido el problema donde aparecía un destello blanco (estrella/rayos) al golpear monstruos o correr sobre tierra. La iluminación se aplica ahora en el orden correcto antes de procesar los emisores de partículas.

### 📊 5. HUD de FPS y Temperatura del Dispositivo
- Contador en tiempo real ubicado discretamente en la **esquina inferior izquierda** de la pantalla (`m_unit * 0.025f`).
- Muestra los FPS actuales y la **temperatura real del dispositivo** (batería/SoC en °C), permitiendo monitorizar el rendimiento térmico durante cacerías intensas.

### 🎚️ 6. Selector de Opacidad y Auto-ocultado de Botones Virtuales
- En `Ajustes` → `Controles`:
  - **Opacidad Táctil**: Elige entre 25% (Suave), 50% (Medio), 75% (Claro) o 100% (Sólido).
  - **Auto-ocultar Ajustes (⚙)**: Opción para desvanecer la rueda de ajustes tras 3, 5 o 10 segundos sin tocar la pantalla para una experiencia inmersiva limpia.
- Todas las preferencias se guardan automáticamente en `touch_layout.cfg`.

### 🖼️ 7. Reemplazo de Texturas en Alta Definición (Pack Dolphin HD)
- Soporte nativo para paquetes de texturas HD diseñados originalmente para Dolphin (`tex1_...`).
- Acceso directo en la memoria del teléfono: coloca tus carpetas de texturas (como `RMHE08` o `RMHP08`) en:
  `/storage/emulated/0/MH3/textures/`
- En el menú `Ajustes` → `Gráficos` encontrarás un interruptor para activar/desactivar texturas HD, un contador de texturas cargadas y un botón para **recargar texturas en caliente** sin reiniciar el juego.

### 🔐 8. Firma Triple de APK (v1 + v2 + v3) y Compatibilidad Total
- Se corrigió el problema de instalación `"App no instalada: digest did not verify"`.
- Los paquetes APK ahora se firman simultáneamente con esquemas **v1 (JAR signing)**, **v2 (APK Signature)** y **v3 (Android 9+)**, además de estar alineados a páginas de 16 KB (`zipalign -P 16`). Compatible con MIUI, HyperOS, ColorOS, One UI, OxygenOS y Android AOSP (Android 10 hasta Android 15+).

### 🎮 9. Controles Táctiles y Mandos Físicos
- **Gamepad Virtual Completo**: Sticks analógicos, A/B/X/Y, L/R/ZL/ZR, D-Pad, +/-.
- **Botones Macro**: M1 (A+X), M2 (B+Y), M3 (L+R), M4 (A+B) — M4 viene desactivado por defecto y con prioridad de colisión.
- **Modo Edición en Pantalla**: Arrastra y reposiciona cualquier botón táctil con escala independiente.
- **Keymapper para Mandos Bluetooth/USB**: Disposiciones Nintendo y Xbox / Genérica con intercambio de gatillos.

### 📝 10. Sistema de Registro (Logs)
- Los logs se guardan de forma accesible en `/storage/emulated/0/MH3/logs/`:
  - `game_log.txt`: Salida y actividad del juego.
  - `oceantri_log.txt`: Eventos y conectividad de red.
  - `oceantri_crash.txt`: Diagnóstico de fallos.

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
