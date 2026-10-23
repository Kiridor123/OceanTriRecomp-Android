$SearchRoots = @(
  "C:\mh3src\third_party\zstd",
  "C:\mh3src\aurora-main\third_party\zstd",
  "C:\mh3tools\zstd",
  "$env:LOCALAPPDATA\zstd",
  "C:\Program Files\zstd",
  "C:\Program Files (x86)\zstd"
)

function Find-ZstdLocal {
  $hits = @()
  foreach ($root in $SearchRoots) {
    $dir = $root
    if (-not (Test-Path $dir)) { continue }
    Get-ChildItem $dir -Recurse -File -ErrorAction SilentlyContinue |
      Where-Object { $_.Name -match 'zstd\.h' } |
      ForEach-Object {
        $inc = $_.Directory.FullName
        $lib = $null
        foreach ($guess in @('lib', 'lib64', 'libzstd.a', 'libzstd.lib')) {
          $candidate = Join-Path $inc $guess
          if (Test-Path $candidate) { $lib = $candidate; break }
        }
        if ($lib -and (Test-Path $lib)) {
          $hits += [PSCustomObject]@{ Include = $inc; Library = $lib }
        }
      }
  }
  $hits
}

$hits = Find-ZstdLocal
if ($hits.Count -eq 0) {
  Write-Output "NO_ZSTD_LOCAL"
  exit 0
}

$hits | ForEach-Object {
  Write-Output "ZSTD_INCLUDE=$($_.Include)"
  Write-Output "ZSTD_LIBRARY=$($_.Library)"
}
