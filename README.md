# OceanTriRecomp

[![Version](https://img.shields.io/badge/Version-v1.7.0%20(Alpha%201.4)-0A66C2.svg)](https://github.com/krisztsa/OceanTriRecomp/releases)
[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0)
[![Platform](https://img.shields.io/badge/Platform-Windows%2010%2F11%20x64-2ea44f.svg)](https://github.com/krisztsa/OceanTriRecomp)

**OceanTriRecomp** es un port nativo para PC (Windows x64) de *Monster Hunter Tri* desarrollado por **[Kris´ZtS](https://github.com/krisztsa)** mediante **recompilación estática AOT (*Ahead-Of-Time*)**.

A diferencia de la emulación tradicional mediante traducción dinámica o intérpretes JIT (*Just-In-Time*), este proyecto traduce de forma estática los bloques ejecutables de la arquitectura original PowerPC (Wii, `main.dol` y módulos relocables) directamente a código fuente C++ optimizado. El resultado es un binario nativo de 64 bits (`MH3.exe`) con ejecución directa en CPU, menor latencia de entrada, soporte para altas tasas de refresco y un pipeline gráfico moderno basado en **[Aurora](https://github.com/encounter/aurora)**, **[SDL3](https://github.com/libsdl-org/SDL)** y **[ANGLE](https://github.com/google/angle)**.

## Características Principales

* **Ejecución Nativa AOT en C++:** Traducción estática de funciones PowerPC a C++ compilado directamente para arquitecturas x86_64 sin sobrecarga de intérprete ni JIT en tiempo de ejecución.
* **Capa Gráfica Moderna (Aurora HAL + ANGLE):** Implementación de la API gráfica GX de Wii sobre **[Aurora](https://github.com/encounter/aurora)** y **[ANGLE](https://github.com/google/angle)**, con selección de backend entre **Vulkan** y **OpenGL ES 3.0 (EGL)** y sistema de recuperación automática (*fallback*) con diagnósticos detallados.
* **Escalado de Resolución y Rendimiento:**
  * Resoluciones internas seleccionables desde **540p, 720p, 900p, 1080p, 1440p hasta 2160p (4K)** con persistencia automática entre sesiones.
  * Soporte nativo para relación de aspecto panorámica **16:9**.
  * Límites de cuadros por segundo configurables (**30, 45, 60, 90 y 120 FPS**), control de sincronización vertical (**V-Sync**) y modo de **pantalla completa sin bordes (*Borderless Fullscreen*)**.
* **Interfaz Integrada (`MH3UI`):** Menú superpuesto dentro del juego dividido en páginas dedicadas para **Gráficos**, **Apariencia** (temas visuales y tipografías), **Controles y Sensibilidad de Ratón**, **Gestor de Partidas Guardadas**, **Selector de Idioma** y opción para restaurar los valores predeterminados.
* **Subsistema Multimedia SDL3:** Gestión multiplataforma de ventanas, audio de baja latencia y soporte nativo para teclado, ratón y mandos (Xbox, PlayStation DualShock/DualSense, Nintendo Switch Pro Controller) a través de **[SDL3](https://github.com/libsdl-org/SDL)**.
* **Optimización Guiada por Perfiles (PGO):** Infraestructura integrada para compilaciones instrumentadas y optimización de rutas críticas de ejecución.

## Arquitectura y Construcción del Proyecto

El código fuente del repositorio **[OceanTriRecomp](https://github.com/krisztsa/OceanTriRecomp)** se estructura en módulos desacoplados que separan el código traducido, el entorno de ejecución del sistema y la capa de abstracción de hardware:

| Directorio / Componente | Función Técnica en el Proyecto |
| :--- | :--- |
| `generated/` | Contiene los módulos C++ generados mediante recompilación estática a partir del binario PowerPC original. |
| `runtime/` | Núcleo de tiempo de ejecución: gestión de memoria simulada, registros de CPU, hilos, sistema de archivos (DVD/NAND) y llamadas al sistema operativo de Wii. |
| `aurora-main/` | Capa de compatibilidad y abstracción de hardware **[Aurora](https://github.com/encounter/aurora)** (traducción de comandos GX/VI/PAD a APIs modernas). |
| `toolchain/` y `cmake/` | Definiciones de compiladores (LLVM/Clang/MSVC), parches de dependencias y módulos de configuración de CMake. |
| `scripts/` | Herramientas auxiliares de extracción, automatización de compilación y empaquetado. |
| `pgo/` | Perfiles de ejecución y scripts para *Profile-Guided Optimization* (PGO). |
| `docs/` | Documentación técnica e historial de arquitectura del proyecto. |

### Transparencia de Desarrollo y Uso de IA

Este proyecto fue concebido, diseñado e integrado por **[krisztsa](https://github.com/krisztsa)**. Como parte de un flujo de ingeniería moderno y transparente, el desarrollo contó con **asistencia de inteligencia artificial (Claude en aproximadamente un 65%)** para acelerar el trabajo mecánico de traducción estática de bloques PowerPC a C++, refactorización de subsistemas del *runtime*, diagnóstico de contextos gráficos EGL/ANGLE y construcción de la interfaz `MH3UI`. Toda la arquitectura, validación en hardware real, corrección de errores y control de calidad son supervisados y mantenidos directamente por el autor.

## Requisitos e Instrucciones de Compilación

### Requisitos Previos

* **Sistema Operativo:** Windows 10 o Windows 11 (64 bits).
* **Copia Legal del Juego:** Imagen de disco original legítimamente obtenida de *Monster Hunter Tri* (versión europea PAL `RMHP08` recomendada, en formato `.iso` o `.rvz`).
* **Entorno de Desarrollo:**
  * **CMake** `3.22` o superior.
  * **Ninja** Build System.
  * **LLVM / Clang** (compatible con C++20) o **Visual Studio 2022** (carga de trabajo *Desarrollo para el escritorio con C++*).
  * **Git** para clonar el repositorio y gestionar submódulos/dependencias.

### Compilación Paso a Paso desde el Código Fuente

1. **Clonar el repositorio:**
   ```bash
   git clone https://github.com/krisztsa/OceanTriRecomp.git
   cd OceanTriRecomp
   ```

2. **Configurar el árbol de compilación con CMake:**
   ```bash
   cmake -B build -S . -G Ninja -DCMAKE_BUILD_TYPE=Release
   ```
   *(Si utilizas el generador de Visual Studio 2022 sin Ninja, puedes omitir `-G Ninja` y ejecutar `cmake -B build -S .`).*

3. **Compilar el ejecutable nativo:**
   ```bash
   cmake --build build --config Release --parallel
   ```

4. **Compilación con Optimización Guiada por Perfiles (PGO - Opcional):**
   ```bash
   # Paso 1: Compilar con instrumentación de perfiles
   cmake -B build_pgo -S . -G Ninja -DCMAKE_BUILD_TYPE=Release -DENABLE_PGO=GENERATE
   cmake --build build_pgo --config Release

   # Paso 2: tras generar los datos de perfil en pgo/, compilar el binario optimizado final
   cmake -B build -S . -G Ninja -DCMAKE_BUILD_TYPE=Release -DENABLE_PGO=USE
   cmake --build build --config Release
   ```

## Instalación y Uso

1. **Suministrar los datos del juego:** Extrae o selecciona tu copia legalmente adquirida de *Monster Hunter Tri* (`RMHP08`, formato `.iso` o `.rvz`) siguiendo el asistente o estructura de datos del directorio de ejecución.
2. **Ubicación de la carpeta:** Coloca la carpeta del juego en una ruta con **permisos de lectura y escritura de usuario** (por ejemplo, `C:\Games\OceanTriRecomp` o en tu directorio personal). Evita rutas protegidas como `C:\Program Files`, ya que el ejecutable guarda las preferencias gráficas y de interfaz localmente en el archivo `MH3UI.graphics`.
3. **Ejecución:** Inicia `MH3.exe` y configura la resolución, el límite de FPS, el backend gráfico (Vulkan u OpenGL ES) y tus controles desde el menú integrado `MH3UI`.

## Control de Versiones y Política de Lanzamientos (Releases)

Este proyecto sigue **[Semantic Versioning (SemVer)](https://semver.org/lang/es/)** (`MAJOR.MINOR.PATCH`) y registra todos los cambios técnicos en `CHANGELOG.md`:

* **Rama `main`:** Recibe mejoras continuas de documentación, refactorizaciones, correcciones de errores y preparación de código bajo la sección `[Unreleased]` del registro de cambios.
* **Publicación de Releases:** Las etiquetas de versión y paquetes compilados en la sección de **[Releases](https://github.com/krisztsa/OceanTriRecomp/releases)** se publican **exclusivamente de forma manual por el autor principal (`krisztsa`)** tras validar la estabilidad de cada versión en hardware real.

## Proyectos Relacionados de la Comunidad

* **[Kiridor123/OceanTriRecomp-Android](https://github.com/Kiridor123/OceanTriRecomp-Android):** Fork comunitario que adapta la base de recompilación estática de `OceanTriRecomp` a dispositivos móviles Android (ARM64).

## Agradecimientos y Créditos a Otros Repositorios

**OceanTriRecomp** es posible gracias al trabajo pionero de la comunidad de preservación, ingeniería inversa y desarrollo de código abierto. Agradecemos especialmente a los autores y colaboradores de los siguientes proyectos:

* **[patchzyy/Wiicompiled](https://github.com/patchzyy/wiicompiled)** y **[ExpansionPak/DolRecomp](https://github.com/ExpansionPak/DolRecomp):** Por sentar las bases de las herramientas de traducción estática de binarios PowerPC (Wii/GameCube) a C++ y la arquitectura de *runtime* de recompilación.
* **[encounter/aurora](https://github.com/encounter/aurora):** Por el desarrollo de **Aurora**, la capa de compatibilidad de nivel de código fuente para GameCube y Wii (GX, VI, PAD, DVD y CARD).
* **[libsdl-org/SDL](https://github.com/libsdl-org/SDL):** Al equipo de **SDL3 (Simple DirectMedia Layer)** por proporcionar la capa multiplataforma de ventanas, entrada de mandos/teclado/ratón y audio.
* **[google/angle](https://github.com/google/angle):** Al equipo de **ANGLE (*Almost Native Graphics Layer Engine*)** por permitir una traducción robusta y de alto rendimiento de contextos OpenGL ES 3.0 y EGL sobre Vulkan y backends de escritorio.
* **Anthropic (Claude):** Por la asistencia mediante IA durante el proceso de traducción estática, depuración y estructuración de componentes del proyecto.

## Cumplimiento de Licencias

El código fuente de **OceanTriRecomp** se distribuye bajo los términos de la licencia **GNU General Public License v3.0 (GPL-3.0)** (consulta el archivo `LICENSE` en la raíz del repositorio), en estricto cumplimiento con las licencias de los proyectos de los que deriva o con los que se enlaza:

| Componente / Proyecto | Licencia | Enlace al Repositorio Oficial |
| :--- | :--- | :--- |
| **OceanTriRecomp** | GPL-3.0 | [krisztsa/OceanTriRecomp](https://github.com/krisztsa/OceanTriRecomp) |
| **WiiCompiled** | GPL-3.0 | [patchzyy/Wiicompiled](https://github.com/patchzyy/wiicompiled) |
| **Aurora Compatibility Layer** | MIT License | [encounter/aurora](https://github.com/encounter/aurora) |
| **SDL3 (Simple DirectMedia Layer)** | zlib License | [libsdl-org/SDL](https://github.com/libsdl-org/SDL) |
| **Google ANGLE** | BSD-3-Clause / Apache-2.0 | [google/angle](https://github.com/google/angle) |

Consulta el archivo `THIRD_PARTY_NOTICES.md` incluido en este repositorio para ver los textos completos de atribución, avisos de copyright y permisos de cada biblioteca de terceros.

## Aviso Legal (Disclaimer)

* *Monster Hunter* y *Monster Hunter Tri* son marcas registradas y propiedad intelectual de **Capcom Co., Ltd.**
* *Wii* y *GameCube* son marcas registradas de **Nintendo Co., Ltd.**
* **OceanTriRecomp** es un proyecto independiente de código abierto desarrollado sin ánimo de lucro con fines de interoperabilidad, investigación técnica y preservación histórica de software. No está afiliado, patrocinado, respaldado ni asociado de ninguna manera con Capcom Co., Ltd. ni con Nintendo Co., Ltd.
* **Sin contenido con derechos de autor:** Este repositorio y sus lanzamientos oficiales **NO contienen ni distribuyen** código fuente original de Capcom o Nintendo, ni ejecutables originales (`main.dol`), imágenes de disco (`.iso`, `.rvz`, `.wbfs`), modelos 3D, texturas, pistas de audio ni ningún otro activo protegido por derechos de autor. Para utilizar este software es estrictamente necesario poseer y suministrar una copia legítima del juego original.
