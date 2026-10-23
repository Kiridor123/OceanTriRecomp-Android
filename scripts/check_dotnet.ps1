$dotnet = Get-Process -Name 'dotnet*' -ErrorAction SilentlyContinue
if ($dotnet) {
    foreach ($d in $dotnet) {
        Write-Host "dotnet: $($d.Id) CPU=$($d.CPU) WS=$($d.WorkingSet)"
    }
} else {
    Write-Host "No dotnet processes."
}
$python = Get-Process -Name 'python*' -ErrorAction SilentlyContinue
if ($python) {
    foreach ($p in $python) {
        Write-Host "python: $($p.Id) CPU=$($p.CPU) WS=$($p.WorkingSet)"
    }
}
