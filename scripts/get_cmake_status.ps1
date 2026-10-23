$procs = Get-CimInstance Win32_Process | Where-Object { $_.Name -match 'cmake|ninja|clang|git' }
foreach ($p in $procs) {
    Write-Host "$($p.ProcessId) $($p.Name): $($p.CommandLine)"
}
