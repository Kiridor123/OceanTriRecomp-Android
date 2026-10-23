param(
  [string]$Release = "release-3.1.1",
  [string]$InstallRoot = "C:\libs\angle",
  [switch]$UseReleaseApi
)

$ErrorActionPreference = 'Stop'

$BaseUrl = "https://github.com/FreeCAD/FreeCAD/releases/download"

if ($UseReleaseApi) {
    Write-Host "Resolving ANGLE release asset via GitHub API..."
    $CachePath = Join-Path $env:TEMP 'angle-manifest.json'
    try {
        Invoke-WebRequest -Uri "https://api.github.com/repos/FreeCAD/FreeCAD/releases?per_page=100" -OutFile $CachePath -UseBasicParsing
    } catch {
        Write-Error "Failed to fetch GitHub releases: $_"
        exit 1
    }

    if (-not (Test-Path $CachePath)) {
        Write-Error "GitHub releases cache not created at $CachePath"
        exit 1
    }

    $Body = Get-Content -Path $CachePath -Raw
    try {
        $Rels = $Body | ConvertFrom-Json
    } catch {
        Write-Error "Failed to parse cached GitHub releases JSON: $_"
        exit 1
    }

    if (-not $Rels -or $Rels.Count -eq 0) {
        Write-Error "Cached GitHub releases data is empty"
        exit 1
    }

    $Target = $Rels | Where-Object { $_.tag_name.StartsWith('release-3') } | Select-Object -First 1
    if (-not $Target) {
        Write-Error "No FreeCAD release matching 'release-3' found via API"
        exit 1
    }
    $Asset = $Target.assets | Where-Object { $_.name -match 'mingw-angle.zip' } | Select-Object -First 1
    if (-not $Asset) {
        Write-Error "No mingw-angle.zip asset found in release $($Target.tag_name)"
        exit 1
    }
    $Release = $Target.tag_name
    $ZipUrl = $Asset.browser_download_url
    $ZipName = $Asset.name
} else {
    $ZipName = "$Release-minw-angle.zip"
    $ZipUrl = "$BaseUrl/$Release/$ZipName"
}

$ZipPath = Join-Path $env:TEMP 'angle-mingw.zip'

Write-Host "Fetching ANGLE for MinGW from $ZipUrl"
try {
  Invoke-WebRequest -Uri $ZipUrl -OutFile $ZipPath -UseBasicParsing
} catch {
  Write-Error "ANGLE download failed for $ZipUrl : $_"
  exit 1
}

if (-not (Test-Path $ZipPath)) {
    Write-Error "ANGLE download did not produce $ZipPath"
    exit 1
}

if (-not (Test-Path $InstallRoot)) {
    New-Item -Path $InstallRoot -ItemType Directory -Force | Out-Null
}

$Extract = Join-Path $env:TEMP 'angle-extract'
if (Test-Path $Extract) { Remove-Item $Extract -Recurse -Force }
New-Item -Path $Extract -ItemType Directory -Force | Out-Null
Expand-Archive -Path $ZipPath -DestinationPath $Extract -Force

Write-Host "Extracting headers + import lib to $InstallRoot"

$FoundEgl = $false
$FoundGles3 = $false
$FoundLib = $false

Get-ChildItem $Extract -Recurse -Directory | ForEach-Object {
    $Dir = $_.FullName

    $EglHeaders = Get-ChildItem -Path $Dir -Filter 'egl.h' -Recurse -File -ErrorAction SilentlyContinue | Where-Object { $_.Directory.Name -eq 'EGL' }
    $Gles3Headers = Get-ChildItem -Path $Dir -Filter 'gl3.h' -Recurse -File -ErrorAction SilentlyContinue | Where-Object { $_.Directory.Name -eq 'GLES3' }

    if ($EglHeaders) {
        $Target = Join-Path $InstallRoot 'include\EGL'
        if (-not (Test-Path $Target)) { New-Item -Path $Target -ItemType Directory -Force | Out-Null }
        Copy-Item -Path $EglHeaders.FullName -Destination $Target -Force
        $FoundEgl = $true
    }
    if ($Gles3Headers) {
        $Target = Join-Path $InstallRoot 'include\GLES3'
        if (-not (Test-Path $Target)) { New-Item -Path $Target -ItemType Directory -Force | Out-Null }
        Copy-Item -Path $Gles3Headers.FullName -Destination $Target -Force
        $FoundGles3 = $true
    }

    $LibFiles = Get-ChildItem -Path $Dir -Include 'libGLESv2.lib','libGLESv2.a' -Recurse -File -ErrorAction SilentlyContinue
    foreach ($Lib in $LibFiles) {
        $TargetLibDir = Join-Path $InstallRoot 'lib64'
        if (-not (Test-Path $TargetLibDir)) { New-Item -Path $TargetLibDir -ItemType Directory -Force | Out-Null }
        Copy-Item -Path $Lib.FullName -Destination $TargetLibDir -Force
        $FoundLib = $true
    }
}

if (-not $FoundEgl) {
    Write-Error "ANGLE EGL/egl.h was not found in the archive"
    Get-ChildItem $Extract -Recurse | Select-Object FullName | Format-Table -AutoSize
    exit 2
}
if (-not $FoundGles3) {
    Write-Error "ANGLE GLES3/gl3.h was not found in the archive"
    Get-ChildItem $Extract -Recurse | Select-Object FullName | Format-Table -AutoSize
    exit 2
}

Write-Host "ANGLE ready at $InstallRoot"
Write-Host "Set AURORA_ANGLE_ROOT=$InstallRoot for downstream builds"
