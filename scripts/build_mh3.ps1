# 1. Create a local backup before compiling if backup script is present
if (Test-Path "$PSScriptRoot/make_backup.ps1") {
    & "$PSScriptRoot/make_backup.ps1"
}

# 2. Setup llvm-mingw environment if present
if (Test-Path "C:\mh3tools\llvm-mingw\bin") {
    $env:PATH = "C:\mh3tools\llvm-mingw\bin;" + $env:PATH
}

$buildDir = "$PSScriptRoot/../runtime/build-clang"
if (-not (Test-Path $buildDir)) {
    Write-Host "Creating build directory $buildDir..." -ForegroundColor Cyan
    New-Item -ItemType Directory -Path $buildDir -Force | Out-Null
    Push-Location $buildDir
    try {
        cmake ../.. -G Ninja -DCMAKE_BUILD_TYPE=Release -DAURORA_ANGLE_VULKAN=ON -DAURORA_ENABLE_GX=ON
    } finally {
        Pop-Location
    }
}

Push-Location $buildDir
try {
    ninja MH3
} finally {
    Pop-Location
}
