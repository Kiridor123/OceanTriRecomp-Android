@echo off
setlocal enabledelayedexpansion

rem Keep this tag in sync with the latest ANGLE release that ships a mingw package.
set "ANGLE_RELEASE=release-3.1.1"
set "BASE_URL=https://github.com/FreeCAD/FreeCAD/releases/download"
set "ANGLE_ZIP=%ANGLE_RELEASE%-mingw-angle.zip"

set "INSTALL_ROOT=C:\libs\angle"
if not exist "%INSTALL_ROOT%" mkdir "%INSTALL_ROOT%"

echo Fetching ANGLE for MinGW from %BASE_URL%/%ANGLE_RELEASE%/%ANGLE_ZIP%
curl -L -o "%TEMP%\angle-mingw.zip" "%BASE_URL%/%ANGLE_RELEASE%/%ANGLE_ZIP%"
if errorlevel 1 (
  echo Failed to download ANGLE
  exit /b 1
)

set "EXTRACT=%TEMP%\angle-extract"
if exist "%EXTRACT%" rmdir /s /q "%EXTRACT%"
mkdir "%EXTRACT%"
powershell -NoProfile -Command "Expand-Archive -Path '%TEMP%\angle-mingw.zip' -DestinationPath '%EXTRACT%' -Force"

echo Extracting headers + import lib to %INSTALL_ROOT%

for /f "delims=" %%D in ('dir /b /ad "%EXTRACT%\*\" 2^>nul') do (
  for /f "delims=" %%F in ('dir /b /a:-d "%%D\*.h" 2^>nul ^| findstr /i /x "EGL\egl.h"') do (
    echo Found EGL header under %%D
    if not exist "%INSTALL_ROOT%\include\EGL" mkdir "%INSTALL_ROOT%\include\EGL"
    copy /y "%%D\EGL\egl.h" "%INSTALL_ROOT%\include\EGL\" >nul
    copy /y "%%D\EGL\eglext.h" "%INSTALL_ROOT%\include\EGL\" >nul
  )
  for /f "delims=" %%F in ('dir /b /a:-d "%%D\*.h" 2^>nul ^| findstr /i /x "GLES3\gl3.h"') do (
    echo Found GLES3 header under %%D
    if not exist "%INSTALL_ROOT%\include\GLES3" mkdir "%INSTALL_ROOT%\include\GLES3"
    copy /y "%%D\GLES3\gl3.h" "%INSTALL_ROOT%\include\GLES3\" >nul
  )
  for /f "delims=" %%F in ('dir /b /a:-d "%%D\*.lib" 2^>nul ^| findstr /i /x "libGLESv2.lib"') do (
    echo Found libGLESv2 import lib under %%D
    if not exist "%INSTALL_ROOT%\lib64" mkdir "%INSTALL_ROOT%\lib64"
    copy /y "%%D\libGLESv2.lib" "%INSTALL_ROOT%\lib64\" >nul
  )
  for /f "delims=" %%F in ('dir /b /a:-d "%%D\*.a" 2^>nul ^| findstr /i /x "libGLESv2.a"') do (
    echo Found libGLESv2 static lib under %%D
    if not exist "%INSTALL_ROOT%\lib64" mkdir "%INSTALL_ROOT%\lib64"
    copy /y "%%D\libGLESv2.a" "%INSTALL_ROOT%\lib64\" >nul
  )
)

if not exist "%INSTALL_ROOT%\include\EGL\egl.h" (
  echo ANGLE EGL/egl.h was not found in the archive
  dir /s /b "%EXTRACT%" > "%TEMP%\angle-tree.txt"
  type "%TEMP%\angle-tree.txt"
  exit /b 2
)

if not exist "%INSTALL_ROOT%\include\GLES3\gl3.h" (
  echo ANGLE GLES3/gl3.h was not found in the archive
  dir /s /b "%EXTRACT%" > "%TEMP%\angle-tree.txt"
  type "%TEMP%\angle-tree.txt"
  exit /b 2
)

echo ANGLE ready at %INSTALL_ROOT%
echo Set AURORA_ANGLE_ROOT=%INSTALL_ROOT% for downstream builds
