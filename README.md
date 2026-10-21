# OceanTriRecomp Android 🦖📱

[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](LICENSE)
[![Platform: Android](https://img.shields.io/badge/Platform-Android%20ARM64-green.svg)](https://github.com/Kiridor123/OceanTriRecomp-Android)
[![Latest Release](https://img.shields.io/badge/Release-v1.3-orange.svg)](https://github.com/Kiridor123/OceanTriRecomp-Android/releases)

Port nativo para **Android** de **Monster Hunter Tri** mediante recompilación estática de código (AOT - *Ahead-of-Time*), logrando rendimiento nativo en hardware ARM64 sin necesidad de emulación pesada.

---

## 🙏 Reconocimientos y Agradecimientos Especiales

> ### **Crédito Principal:**
> Este proyecto es un fork directo y continuación para Android de **[krisztsa/OceanTriRecomp](https://github.com/krisztsa/OceanTriRecomp)**.
> 
> **Gracias al excelente e innovador trabajo de [krisztsa](https://github.com/krisztsa)** —quien desarrolló la arquitectura de recompilación estática de Monster Hunter Tri a C++, el renderizador moderno con Aurora HAL y el menú integrado para PC— fue posible adaptar, optimizar y hacer realidad esta versión nativa para teléfonos y tablets Android. Todo el agradecimiento y reconocimiento por las bases de este proyecto pertenecen a su autor original y a la comunidad de ingeniería inversa y preservación de videojuegos.

Agradecimientos adicionales a:
- Proyecto **WiiCompiled** y herramientas de decompilación estática de PowerPC.
- **Aurora Engine HAL** por la capa de abstracción gráfica de bajo nivel.
- **libSDL3** por el soporte multiplataforma de audio, ventanas y periféricos.
- La comunidad de desarrolladores y jugadores de *Monster Hunter*.

---

## ✨ Características y Avances del Port de Android (v1.3)

### 🚀 1. Rendimiento Nativo ARM64 (Sin Emulación)
A diferencia de los emuladores convencionales (como Dolphin) que deben interpretar o traducir en tiempo de ejecución las instrucciones de CPU (*JIT*) y lidiar con la sobrecarga de emulación, **OceanTriRecomp** ejecuta código binario C++ compilado directamente para la arquitectura **ARM64** de tu dispositivo. Esto se traduce en menor consumo de batería, temperaturas más bajas y estabilidad de cuadros por segundo.

### ⚡ 2. Soporte de Alta Tasa de Refresco: Hasta 120 FPS
- Adaptación para pantallas de **60 Hz, 90 Hz y 120 Hz**.
- Desacoplamiento de V-Sync sin crasheos de pipeline.
- Sistema de pacing de fotogramas dinámico que elimina el estrangulamiento artificial a 60 FPS cuando la pantalla y la GPU permiten tasas superiores.

### 📂 3. Selector de ROM Integrado (ROM Picker)
- En el primer inicio, la aplicación despliega automáticamente el selector de archivos del sistema de Android (*Storage Access Framework*).
- Selecciona tu copia legal de Monster Hunter Tri (`.iso` o `.rvz`) desde la memoria interna o tarjeta SD; el instalador interno copiará y preparará los datos necesarios en el almacenamiento seguro de la app.

### 🎮 4. Controles Táctiles y Ocultación
- **Gamepad Virtual Completo**: Stick analógico virtual y botones táctiles translúcidos en pantalla (A, B, X, Y, L, R, ZL, ZR, +, -, 1).
- **Opción de Ocultar Táctiles**: En `Ajustes` → `Controles` puedes cambiar la opción a `OCULTOS`. Los botones táctiles desaparecerán de pantalla dejando únicamente el engranaje flotante de ajustes (⚙), ideal si utilizas un mando físico o quieres una pantalla limpia.

### 🕹️ 5. Keymapper para Mandos Bluetooth y USB
- Soporte Plug-and-Play para mandos de Xbox, PlayStation (DualShock 4 / DualSense), Nintendo Switch Pro Controller y mandos genéricos USB/Bluetooth.
- Archivo de configuración `gamepad.cfg` integrado con perfiles:
  - **Estilo Nintendo**: Disposición tradicional (A a la derecha, B abajo, X arriba, Y a la izquierda).
  - **Estilo Xbox / Occidental**: Invierte automáticamente A/B y X/Y para respetar la memoria muscular de juegos occidentales (A para aceptar/rodar).
  - **Gatillos**: Opción para alternar entre gatillos primarios y secundarios (L/R y ZL/ZR).

### 📱 6. Recuperación de Pantalla en Segundo Plano (Ciclo de Vida)
- Se solucionó el problema de pantalla negra tras suspender la app, abrir notificaciones push o responder mensajes en apps externas (como WhatsApp). El contexto OpenGL ES 3.0 se recicla y sincroniza limpiamente en el hilo de renderizado sin congelamientos.

### 🔍 7. Interfaz de Ajustes Diseñada para Móviles
- Menú dentro del juego con tipografía de alto contraste y tamaño optimizado para alta densidad de píxeles (DPI).
- Pestañas organizadas para gráficos (resolución interna, V-Sync, FPS), controles, temas visuales e idioma.

### 🛡️ 8. Compatibilidad con Android 15 (Páginas de 16 KB)
- El APK y las librerías nativas (`libmain.so`, `libSDL3.so`, `libpng16.so`) están alineadas a 16 KB mediante `zipalign -P 16`, garantizando compatibilidad con los nuevos núcleos de memoria de Android 15 y dispositivos futuros.

---

## 📲 Instalación

1. Dirígete a la sección de **[Releases](https://github.com/Kiridor123/OceanTriRecomp-Android/releases)**.
2. Descarga el archivo `OceanTriRecomp-Android-v1.3-arm64.apk`.
3. Instálalo en tu dispositivo Android (asegúrate de permitir la instalación desde fuentes desconocidas si tu navegador lo solicita).
4. Abre **Monster Hunter Tri**. En la pantalla de bienvenida, pulsa el botón para seleccionar la ROM.
5. Elige tu archivo `.iso` o `.rvz` de Monster Hunter Tri (versión Europea recomendada: `RMHP08`).
6. Espera unos instantes mientras se copian los datos del juego. ¡A cazar!

---

## 🛠️ Requisitos del Dispositivo

- **Procesador**: 64-bit ARMv8-A (Snapdragon, MediaTek Dimensity, Google Tensor, Samsung Exynos).
- **Sistema Operativo**: Android 10 (API nivel 29) o superior.
- **Gráficos**: Compatible con OpenGL ES 3.0+.
- **Espacio Libre**: Alrededor de 3 a 5 GB libres para los datos del juego.

---

## 🏗️ Cómo Compilar el Proyecto (Build from Source)

### Prerrequisitos en Linux
- Android NDK (r28 o superior recomendado)
- Android SDK Build-Tools 35.0.0
- CMake 3.25+ y Ninja
- Clang / LLVM
- Java JDK 17+

### Pasos de Compilación
```bash
# 1. Clonar el repositorio
git clone https://github.com/Kiridor123/OceanTriRecomp-Android.git
cd OceanTriRecomp-Android

# 2. Configurar variables de entorno (ajusta según tus rutas locales)
export ANDROID_HOME="/ruta/a/tu/android-sdk"
export ANDROID_NDK_HOME="${ANDROID_HOME}/ndk/28.2.13676358"

# 3. Compilar librerías nativas y generar APK
chmod +x scripts/build-android.sh
./scripts/build-android.sh
```

El APK compilado, alineado y firmado estará disponible en la carpeta `release/OceanTriRecomp-Android-v1.3-arm64.apk`.

---

## ⚖️ Licencia y Descargo de Responsabilidad (Disclaimer)

### Licencia del Código
Este proyecto está distribuido bajo la licencia **GNU General Public License v3.0 (GPLv3)**. Consulta el archivo [LICENSE](LICENSE) para más detalles.

### Descargo de Responsabilidad Legal
- **Monster Hunter** y **Monster Hunter Tri** son marcas registradas de **Capcom Co., Ltd.**
- **Wii** es una marca registrada de **Nintendo Co., Ltd.**
- Este proyecto es un esfuerzo independiente de código abierto con fines de investigación, compatibilidad y preservación histórica. No está afiliado, respaldado, asociado ni patrocinado por Capcom ni por Nintendo.
- **Este repositorio y sus versiones compiladas (Releases) NO contienen ni distribuyen ningún archivo con derechos de autor, código propietario, modelos, texturas, música ni archivos ROM del juego original.** El usuario final debe suministrar su propia copia legalmente adquirida de *Monster Hunter Tri* para generar o cargar los datos necesarios en la aplicación.
