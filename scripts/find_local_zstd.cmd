@echo off
setlocal enabledelayedexpansion

set "roots=C:\mh3src\third_party\zstd;C:\mh3src\aurora-main\third_party\zstd;C:\mh3tools\zstd;%LOCALAPPDATA%\zstd;C:\Program Files\zstd;C:\Program Files (x86)\zstd"

set "found_include="
set "found_library="

for %%R in ("%roots:;=","%") do (
  if exist "%%R" (
    for /f "delims=" %%I in ('dir /b /a:-d "%%R\*.h" 2^>nul ^| findstr /i /x "zstd.h"') do (
      set "inc=%%~dpI"
      if not defined found_include (
        set "found_include=!inc!"
      )
    )
    for /f "delims=" %%L in ('dir /b /a:-d "%%R\*.a" 2^>nul ^| findstr /i /x "libzstd.a"') do (
      if not defined found_library (
        set "found_library=%%R\%%L"
      )
    )
    for /f "delims=" %%L in ('dir /b /a:-d "%%R\*.lib" 2^>nul ^| findstr /i /x "libzstd.lib"') do (
      if not defined found_library (
        set "found_library=%%R\%%L"
      )
    )
    for /f "delims=" %%L in ('dir /b /a:-d "%%R\lib\*.a" 2^>nul ^| findstr /i /x "libzstd.a"') do (
      if not defined found_library (
        set "found_library=%%R\lib\%%L"
      )
    )
    for /f "delims=" %%L in ('dir /b /a:-d "%%R\lib\*.lib" 2^>nul ^| findstr /i /x "libzstd.lib"') do (
      if not defined found_library (
        set "found_library=%%R\lib\%%L"
      )
    )
    for /f "delims=" %%L in ('dir /b /a:-d "%%R\lib64\*.a" 2^>nul ^| findstr /i /x "libzstd.a"') do (
      if not defined found_library (
        set "found_library=%%R\lib64\%%L"
      )
    )
    for /f "delims=" %%L in ('dir /b /a:-d "%%R\lib64\*.lib" 2^>nul ^| findstr /i /x "libzstd.lib"') do (
      if not defined found_library (
        set "found_library=%%R\lib64\%%L"
      )
    )
  )
)

if not defined found_include (
  echo NO_LOCAL_ZSTD
  exit /b 0
)

echo ZSTD_INCLUDE=!found_include!
echo ZSTD_LIBRARY=!found_library!
