@echo off
setlocal enabledelayedexpansion

set "ZSTD_SRC=%1"
if not defined ZSTD_SRC (
  echo USAGE: build_zstd_windows.cmd ^<zstd-source-dir^>
  exit /b 2
)
if not exist "%ZSTD_SRC%\zstd.h" (
  echo Missing zstd source headers in %ZSTD_SRC%
  exit /b 2
)

set "PREFIX=%ZSTD_SRC%\build_tmp"
if exist "%PREFIX%" rmdir /s /q "%PREFIX%"
mkdir "%PREFIX%"

set "MINGW=C:\Users\Kris\AppData\Local\Microsoft\WinGet\Packages\BrechtSanders.WinLibs.POSIX.UCRT_Microsoft.WinGet.Source_8wekyb3d8bbwe\mingw64\bin"

set "CC=%MINGW%\gcc.exe"
set "AR=%MINGW%\ar.exe"
set "RANLIB=%MINGW%\ranlib.exe"

echo Building zstd static library in %PREFIX%
%pushd% "%ZSTD_SRC%"
%CC% -c -O2 -DNDEBUG -std=c11 -fno-common -o "%PREFIX%\zstd-all.obj" ^
  zstd.c zstd_hidden.def zstd_errors.c zstd_internal.h zdict.c ^
  !list of files from source!

if not exist "%PREFIX%\zstd-all.obj" (
  echo Compilation failed; no object produced
  exit /b 3
)

%AR% rcs "%PREFIX%\libzstd.a" "%PREFIX%\zstd-all.obj"
%RANLIB% "%PREFIX%\libzstd.a"

copy "%PREFIX%\libzstd.a" "%ZSTD_SRC%\lib\libzstd.a" >nul
copy "%ZSTD_SRC%\zstd.h" "%ZSTD_SRC%\include\zstd.h" >nul

echo Built libzstd.a for MinGW
exit /b 0
