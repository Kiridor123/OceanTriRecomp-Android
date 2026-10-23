$cmakes = Get-Process -Name 'cmake*' -ErrorAction SilentlyContinue
foreach ($cm in $cmakes) {
    $children = Get-CimInstance Win32_Process | Where-Object { $_.ParentProcessId -eq $cm.Id }
    if ($children) {
        foreach ($c in $children) {
            Write-Host "Child of $($cm.Id): $($c.ProcessId) $($c.Name) $($c.CommandLine)"
        }
    } else {
        Write-Host "No children for $($cm.Id) ($($cm.ProcessName))."
    }
}
