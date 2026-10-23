$timestamp = Get-Date -Format 'yyyyMMdd-HHmmss'
$backupDir = "backups/backup-$timestamp"
New-Item -ItemType Directory -Force -Path $backupDir | Out-Null
$files = @(
    'runtime/src/settings_overlay.cpp',
    'runtime/include/disc_image.h',
    'runtime/src/disc_image.cpp',
    'runtime/include/mod_manager.h',
    'runtime/src/mod_manager.cpp',
    'runtime/include/texture_replacer.h',
    'runtime/src/texture_replacer.cpp',
    'runtime/include/post_process.h',
    'runtime/src/post_process.cpp',
    'runtime/include/mh3_graphics_settings.h',
    'runtime/src/glare_filter.cpp',
    'runtime/src/field_camera.cpp',
    'runtime/src/frame_draw.cpp',
    'runtime/src/main.cpp',
    'runtime/CMakeLists.txt',
    'aurora-main/lib/gl/gl.hpp',
    'aurora-main/lib/gl/gl.cpp',
    'runtime/src/net/net_host_winsock.cpp',
    'runtime/src/enemy_glide.cpp',
    'runtime/src/enemy_turn.cpp',
    'runtime/src/enemy_timers.cpp',
    'runtime/src/monster_attacks.cpp',
    'runtime/src/monster_waits.cpp',
    'runtime/src/frame_pacer.cpp'
)
foreach ($f in $files) {
    if (Test-Path $f) {
        $dest = Join-Path $backupDir $f
        $parent = Split-Path $dest
        if (-not (Test-Path $parent)) { New-Item -ItemType Directory -Force -Path $parent | Out-Null }
        Copy-Item -Path $f -Destination $dest -Force
    }
}
Write-Host "Backup created successfully at $backupDir"
