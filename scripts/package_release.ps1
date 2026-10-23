# Package OceanTriRecomp 1.5 Release
param(
    [string]$SourceDir = "C:\games\OceanTriRecomp",
    [string]$OutputDir = "C:\mh3src",
    [string]$ZipName = "OceanTriRecomp 1.5.zip"
)

$ErrorActionPreference = "Stop"

Write-Host "=== Creando paquete $ZipName ===" -ForegroundColor Cyan

$StagingDir = Join-Path $env:TEMP "OceanTriRecomp_1.5_staging"
if (Test-Path $StagingDir) {
    Remove-Item -Path $StagingDir -Recurse -Force
}
New-Item -ItemType Directory -Path $StagingDir -Force | Out-Null

# 1. Copiar binario principal y DLLs esenciales
$CoreFiles = @(
    "MH3.exe",
    "draw-tables.bin",
    "portable.txt",
    "SDL3.dll",
    "libGLESv2.dll",
    "GLESv2.dll",
    "libEGL.dll",
    "d3dcompiler_47.dll",
    "libc++.dll",
    "libunwind.dll",
    "libwinpthread-1.dll",
    "libpng16.dll",
    "libz.dll",
    "MH3UI.graphics",
    "MH3UI.theme.v3",
    "MH3UI.language",
    "MH3UI.mods",
    "MH3UI.controls",
    "MH3UI.mouse_sensitivity"
)

foreach ($file in $CoreFiles) {
    $src = Join-Path $SourceDir $file
    if (Test-Path $src) {
        Copy-Item -Path $src -Destination $StagingDir -Force
        Write-Host "  + Archivo: $file"
    } else {
        Write-Warning "Archivo no encontrado: $src"
    }
}

# 2. Copiar UserData (Config.toml)
$UserDataDst = Join-Path $StagingDir "UserData"
New-Item -ItemType Directory -Path $UserDataDst -Force | Out-Null
$ConfigSrc = Join-Path $SourceDir "UserData\Config.toml"
if (Test-Path $ConfigSrc) {
    Copy-Item -Path $ConfigSrc -Destination $UserDataDst -Force
    Write-Host "  + Directorio: UserData/Config.toml"
}

# 3. Estructura de mods y README
$ModsDst = Join-Path $StagingDir "mods"
New-Item -ItemType Directory -Path $ModsDst -Force | Out-Null
$ModsReadme = @"
================================================================================
                    CARPETA DE MODS - OceanTriRecomp
================================================================================

Para instalar mods en OceanTriRecomp:
1. Crea una carpeta para tu mod dentro de este directorio (ejemplo: 'mods\MiMod\').
2. Coloca los archivos modificados dentro de esa subcarpeta respetando la estructura
   de archivos del juego (ejemplo: 'mods\MiMod\05\quest00_eng.bin').
3. Abre el juego y ve al menú superior > pestaña 'MODS'.
4. Podrás activar o desactivar cada mod de manera independiente o usar el switch maestro.
"@
$ModsReadme | Out-File -FilePath (Join-Path $ModsDst "README.txt") -Encoding utf8
Write-Host "  + Directorio: mods/ (con README.txt)"

# 4. Estructura de texturas HD y README
$TexDst = Join-Path $StagingDir "textures\RMHP08"
New-Item -ItemType Directory -Path $TexDst -Force | Out-Null
$TexReadme = @"
================================================================================
              CARPETA DE TEXTURAS HD DOLPHIN - OceanTriRecomp
================================================================================

Esta carpeta corresponde al ID del juego Monster Hunter Tri Europeo: RMHP08.

Para instalar paquetes de texturas personalizadas:
1. Coloca las texturas en formato .png o .dds con los nombres generados por Dolphin
   directamente en esta carpeta (o en sus subcarpetas).
   Ejemplo de nombre: tex1_128x128_6d79a2bb34382583_14.png
2. En el juego, ve a la pestaña 'Gráficos' en la barra de menú superior.
3. Activa la opción 'Texturas HD (Dolphin)' para que el motor reemplace automáticamente
   las texturas del juego con las versiones de alta resolución.
"@
$TexReadme | Out-File -FilePath (Join-Path $TexDst "README.txt") -Encoding utf8
Write-Host "  + Directorio: textures/RMHP08/ (con README.txt)"

# 5. Carpeta de saves limpia
$SavesDst = Join-Path $StagingDir "saves"
New-Item -ItemType Directory -Path $SavesDst -Force | Out-Null
$SavesReadme = @"
================================================================================
                    CARPETA DE GUARDADOS - OceanTriRecomp
================================================================================

Tus partidas, datos de cazador y configuraciones del sistema se guardan aquí.
Gracias a 'portable.txt', todo se mantiene dentro de la carpeta del juego de forma
totalmente portátil sin tocar carpetas externas de tu sistema operativo.
"@
$SavesReadme | Out-File -FilePath (Join-Path $SavesDst "README.txt") -Encoding utf8
Write-Host "  + Directorio: saves/ (limpia con README.txt)"

# 6. OnlineLocal (Servidor local MH3SP limpio)
$OnlineDst = Join-Path $StagingDir "OnlineLocal\MH3SP"
New-Item -ItemType Directory -Path $OnlineDst -Force | Out-Null
$OnlineSrc = Join-Path $SourceDir "OnlineLocal\MH3SP"
if (Test-Path $OnlineSrc) {
    # Copiar cert, config, mh, other, README, LICENSE
    Copy-Item -Path (Join-Path $OnlineSrc "cert") -Destination $OnlineDst -Recurse -Force
    Copy-Item -Path (Join-Path $OnlineSrc "mh") -Destination $OnlineDst -Recurse -Force
    Copy-Item -Path (Join-Path $OnlineSrc "other") -Destination $OnlineDst -Recurse -Force
    Copy-Item -Path (Join-Path $OnlineSrc "config.ini") -Destination $OnlineDst -Force
    Copy-Item -Path (Join-Path $OnlineSrc "README.md") -Destination $OnlineDst -Force
    Copy-Item -Path (Join-Path $OnlineSrc "LICENSE") -Destination $OnlineDst -Force

    # Crear carpeta logs vacía
    New-Item -ItemType Directory -Path (Join-Path $OnlineDst "logs") -Force | Out-Null
    
    # Limpiar __pycache__ si fue copiado
    Get-ChildItem -Path $OnlineDst -Filter "__pycache__" -Recurse | Remove-Item -Recurse -Force -ErrorAction SilentlyContinue

    Write-Host "  + Directorio: OnlineLocal/MH3SP (limpio)"
}

# 7. Documentación oficial LEEME_OceanTriRecomp_1.5.txt
$LeemeContent = @"
================================================================================
                    OceanTriRecomp v1.5 - Release Oficial
         Port Nativo de Monster Hunter Tri (Nintendo Wii) para PC (Windows)
================================================================================

INSTRUCCIONES DE INICIO RÁPIDO:
--------------------------------
1. Copia tu copia de seguridad de Monster Hunter Tri (Versión Europea - RMHP08)
   en formato .rvz, .iso o .wia en esta misma carpeta junto a MH3.exe.
   (Por ejemplo: "monster hunter tri.rvz" o "RMHP08.iso").
2. Si ejecutas MH3.exe sin una ROM al lado, se abrirá el asistente integrado
   para que selecciones tu archivo de ROM fácilmente con un explorador de archivos.
3. ¡Ejecuta MH3.exe y disfruta de Monster Hunter Tri a 60/120 FPS nativos!

NOVEDADES Y CARACTERÍSTICAS DE LA VERSIÓN 1.5:
---------------------------------------------
* Modo MH3U (Monster Hunter 3 Ultimate):
  - Nuevo estilo visual calibrado con la paleta de colores vibrantes y vivos de 3U.
  - Curvas de mapeo tonal fílmico ACES combinadas con realce de saturación (+25%),
    aguas turquesas y vegetación esmeralda brillante.
  - Interruptor directo en el menú Gráficos (activado por defecto).

* Estabilidad Multijugador Online (Anti-Teletransporte de Monstruos):
  - Resuelto el error donde monstruos como Qurupeco y otros se teletransportaban
    o sufrían saltos de posición erráticos en salas multijugador online.
  - Sincronización canónica estricta a 30 Hz con el anfitrión online para planeos,
    giros, carreras y temporizadores de ataques de monstruos.
  - Corrección de buffers de red Winsock (ICMP ConnReset ignorado y búferes UDP
    ampliados a 512 KB), eliminando la pérdida de paquetes y rubberbanding.

* Interfaz Moderna, Ultraligera y Optimizada (Zero FPS Drops):
  - Doble buffer GDI en memoria 1:1, eliminando la caída de FPS al abrir o usar la UI.
  - Panel rediseñado, limpio y accesible con F1 / Esc.
  - Selector de temas, fuentes y modo oscuro/claro.

* Compatibilidad Gráfica Dual (Vulkan y OpenGL ES):
  - Selector directo de Backend en Gráficos entre Vulkan (ANGLE D3D11) y OpenGL ES.
  - Totalmente funcional y optimizado sin caídas ni errores de texturas.

* FOV del Cazador Ajustable (Exclusivo en Misiones):
  - Slider de FOV en Gráficos (35° a 90°).
  - Se aplica dinámicamente de forma exclusiva durante las misiones/caza en el campo,
    manteniendo la cámara y vista original en la Aldea de Moga y menús.

* Detección Automática de Resolución de Pantalla:
  - Botón integrado en Gráficos para detectar tu resolución nativa (Full HD, 2K, 4K)
    al instante con un solo clic.

* Soporte de Mods Integrado:
  - Nueva pestaña exclusiva de "MODS" con interruptor maestro y activación por mod.
  - Coloca tus carpetas de mods dentro de la carpeta "mods/".

* Soporte de Texturas HD (Dolphin):
  - Activa o desactiva paquetes de texturas personalizadas desde el menú de Gráficos.
  - Compatible con los paquetes HD de Dolphin para RMHP08 colocados en "textures/RMHP08/".

* Multijugador Local y Online Inteligente:
  - Detección automática de conexión a Internet:
    * Con Internet: Conexión directa y transparente al servidor comunitario oficial de MH3 (mh3sp.com).
    * Sin Internet: Modo local automático en la ciudad de Loc Lac (127.0.0.1:18080) sin configurar nada.
  - Servidor emulado MH3SP integrado nativamente en C++ dentro de MH3.exe (sin necesidad de Python ni dependencias externas).

* Corrección de Bugs Críticos:
  - Solucionado el bug crítico de fin de misión en salas online: Las misiones ahora terminan correctamente,
    mostrando "Quest Clear", reproduciendo la fanfarria de victoria, activando el temporizador de 60 segundos
    para recolectar/carvear y mostrando la pantalla de recompensas.
  - Solucionado el cierre o cuelgue al presionar "Continuar" en la pantalla de título.
  - Asignación de mallas en GPU y buffers completamente estabilizados.

================================================================================
"@
$LeemeContent | Out-File -FilePath (Join-Path $StagingDir "LEEME_OceanTriRecomp_1.5.txt") -Encoding utf8
Write-Host "  + Documento: LEEME_OceanTriRecomp_1.5.txt"

# 8. Empaquetar a .ZIP
$TargetZip1 = Join-Path $OutputDir $ZipName
$TargetZip2 = Join-Path $SourceDir $ZipName

if (Test-Path $TargetZip1) { Remove-Item $TargetZip1 -Force }
if (Test-Path $TargetZip2) { Remove-Item $TargetZip2 -Force }

Write-Host "Comprimiendo archivo ZIP a $TargetZip1 ..." -ForegroundColor Yellow
Compress-Archive -Path "$StagingDir\*" -DestinationPath $TargetZip1 -CompressionLevel Optimal

# Copiar también a C:\games\OceanTriRecomp\
Copy-Item -Path $TargetZip1 -Destination $TargetZip2 -Force

Write-Host "=== Paquete completado con éxito! ===" -ForegroundColor Green
Write-Host "Ubicación 1: $TargetZip1"
Write-Host "Ubicación 2: $TargetZip2"
$ZipItem = Get-Item $TargetZip1
Write-Host ("Tamaño del ZIP: {0:N2} MB" -f ($ZipItem.Length / 1MB))
