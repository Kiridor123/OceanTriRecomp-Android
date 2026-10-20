# OceanTriRecomp



Este proyecto lleva Monster Hunter Tri a PC mediante una recompilación del código del juego, con un renderizador moderno sobre SDL3 y ANGLE (Vulkan / OpenGL ES). Incluye un menú de ajustes propio dentro del juego para controlar gráficos, apariencia, controles y partidas guardadas.

Novedades de la Alpha 1.4
Correcciones
Fallo de arranque gráfico en algunos PC (error "OpenGL ES 3.0 is required"): el juego ahora fuerza por sí mismo la creación del contexto OpenGL ES por EGL (ANGLE), por lo que ya no hace falta configurar variables de entorno. Probado en un equipo que antes fallaba y en uno que ya funcionaba.
La resolución interna ahora se conserva al reiniciar: si eliges 1080p (u otra) en el menú, el juego arranca con esa misma escala en lugar de volver a la resolución base.
Diagnóstico ampliado: si vuelve a ocurrir un fallo de OpenGL ES, el log incluye una línea GL diagnostics: con el driver de vídeo de SDL y el estado de los hints. Adjúntala al reportar el problema.
Nuevo
Interruptor de Pantalla completa en Ajustes → Gráficos. Usa modo sin bordes (borderless), no modifica el tamaño de la ventana ni la resolución interna, y su estado se guarda y se aplica en el siguiente arranque.
"Restaurar ajustes predeterminados" también desactiva la pantalla completa.
El panel de Gráficos es algo más alto para alojar la nueva opción.
Características
Resolución interna seleccionable: 540p, 720p, 900p, 1080p, 1440p y 2160p.
Límite de FPS: 30 / 45 / 60 / 90 / 120.
V-Sync, contador de FPS y relación de aspecto 16:9.
Renderizador a elegir: Vulkan (ANGLE) u OpenGL ES (se aplica al reiniciar).
Menú en el juego con páginas de Gráficos, Apariencia (temas y tipografías), Controles (incluida sensibilidad del ratón) y gestor de partidas guardadas.
Selector de idioma.
Configuración guardada junto al ejecutable en MH3UI.graphics.
Requisitos
Windows 10/11 de 64 bits (build principal).
GPU compatible con Vulkan u OpenGL ES 3.0 (vía ANGLE).
Controladores de vídeo actualizados.
<!-- COMPLETAR: archivos del juego necesarios y cómo obtenerlos (por ejemplo, copia propia del juego). -->
Instalación
Descarga el archivo de la Alpha 1.4 desde la sección Releases.
Descomprímelo en una carpeta con permisos de escritura (evita Program Files, porque la configuración se guarda junto al .exe).
<!-- COMPLETAR: pasos para colocar los archivos del juego. -->
Ejecuta MH3.exe.
