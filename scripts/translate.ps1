$ErrorActionPreference = "Stop"
Set-Location (Split-Path $PSScriptRoot -Parent)
$env:PYTHONUTF8 = "1"
New-Item -ItemType Directory -Force logs, generated, build | Out-Null

$translator = "toolchain\translator\src\Translator.Cli\bin\Release\net8.0\Translator.Cli.dll"
$jobs = if ($env:TRANSLATE_JOBS) { $env:TRANSLATE_JOBS } else { $env:NUMBER_OF_PROCESSORS }

function Run([string]$name, [scriptblock]$cmd) {
    Write-Host ">>> $name" -ForegroundColor Cyan
    $old = $ErrorActionPreference; $ErrorActionPreference = "Continue"
    & $cmd 2>&1 | Tee-Object "logs\$name.log"
    $code = $LASTEXITCODE; $ErrorActionPreference = $old
    if ($code) { throw "FALLO en '$name' (codigo $code). Mira logs\$name.log" }
}

Run "inspect" { python scripts\inspect_disc.py }
Run "symbols" { python scripts\generate_symbols.py }
Run "data-init" { dotnet $translator generate-data-init --project recomp.yml }
Run "prepare-rso" { python scripts\prepare_rso_translation.py }
Run "translate" { dotnet $translator translate-recursive 0x80006310 --project build/recomp-analysis.yml --outdir generated/functions --output-metadata generated/translation.json --threads $jobs --prune-stale }
Run "shards" { python scripts\prepare_native_dispatch.py --force --dotnet dotnet --translator $translator }

$profiles = "map_village quest_field enemy_field map00_field map01_field map02_field map03_field map04_field map05_field map06_field map07_field map08_field map09_field map10_field map11_field net_data map_town_online map_town_quest" -split ' '
foreach ($p in $profiles) {
    Run "overlay-$p" { python scripts\translate_rso_overlays.py --profile $p }
}
Write-Host "TRADUCCION COMPLETA" -ForegroundColor Green
