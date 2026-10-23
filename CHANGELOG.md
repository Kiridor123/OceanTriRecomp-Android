# Changelog (Historial de Versiones)

Todos los cambios relevantes de **[OceanTriRecomp](https://github.com/krisztsa/OceanTriRecomp)** se documentan en este archivo.

El formato está basado en **[Keep a Changelog](https://keepachangelog.com/es-ES/1.0.0/)**, y este proyecto se adhiere a **[Semantic Versioning (SemVer)](https://semver.org/lang/es/)**.

> **Política de Lanzamientos (Releases):** Los cambios integrados en la rama `main` se registran inicialmente bajo la sección `[Unreleased]`. La promoción a una nueva etiqueta y publicación en **[GitHub Releases](https://github.com/krisztsa/OceanTriRecomp/releases)** se realiza exclusivamente bajo autorización directa del autor (`krisztsa`).

## [Unreleased]

### Added
* Documentación integral del repositorio (`README.md`) con arquitectura modular, guía paso a paso de compilación con CMake/Ninja/PGO y declaración de transparencia sobre asistencia de IA.
* Archivo `THIRD_PARTY_NOTICES.md` para el cumplimiento formal de las licencias GPL-3.0, MIT, zlib y BSD-3-Clause/Apache-2.0 de los componentes integrados.
* Guía de contribución y flujo de control de versiones en `CONTRIBUTING.md`.
* Estructura estandarizada de control de versiones en `CHANGELOG.md`.

## [1.7.0] - Alpha 1.4 - 2026-10-22

### Fixed
* **Inicialización OpenGL ES / EGL (ANGLE):** Solucionado el cierre inesperado al iniciar en equipos que devolvían el error `"OpenGL ES 3.0 is required"`, forzando la creación nativa del contexto OpenGL ES mediante EGL (ANGLE) y añadiendo respaldo automático cuando Vulkan no está disponible.
* **Persistencia de Resolución Interna:** La resolución seleccionada en el menú (`540p` a `2160p`) ahora se guarda y restaura de forma fiable al reiniciar la aplicación.

### Added
* **Diagnósticos Extendidos de Inicialización Gráfica:** Registro detallado de controladores de video, estados de *hints* de SDL y códigos de error EGL en caso de fallo al crear el contexto gráfico.
* **Pantalla Completa sin Bordes (*Borderless Fullscreen*):** Nuevo interruptor en `Ajustes -> Gráficos`.
* **Restauración de Valores Predeterminados:** Botón `"Restaurar ajustes predeterminados"` integrado en el panel de opciones.
* **Control de Tasa de Cuadros (FPS) y V-Sync:** Selección de límites de 30, 45, 60, 90 y 120 FPS en formato panorámico 16:9.
* **Selector de Backend Gráfico:** Alternancia entre **Vulkan (ANGLE)** y **OpenGL ES**.
* **Menú Integrado (`MH3UI`):** Interfaz multipágina para Gráficos, Apariencia (temas y fuentes), Sensibilidad de Ratón, Gestor de Partidas Guardadas y Selector de Idioma (almacenado localmente en `MH3UI.graphics`).

## [1.3.0] - Alpha 1.3 - 2026-09-15

### Added
* Integración de la capa de ventanas, entrada y audio basada en **[SDL3](https://github.com/libsdl-org/SDL)**.
* Integración inicial del backend gráfico **[Aurora](https://github.com/encounter/aurora)** para la traducción de llamadas GX.

## [1.0.0] - Alpha 1.0 - 2026-08-01

### Added
* Primera versión pública de la arquitectura de recompilación estática AOT de PowerPC a C++ para *Monster Hunter Tri* en PC.
