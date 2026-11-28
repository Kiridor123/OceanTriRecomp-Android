#!/usr/bin/env bash
# Package a built Linux MH3 executable as an AppImage.
# Usage: packaging/linux/build_appimage.sh <path/to/MH3>
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "${SCRIPT_DIR}/../.." && pwd)"
EXE="${1:?usage: build_appimage.sh <MH3 executable>}"
APP_VERSION="${APP_VERSION:-v1.6}"
ARCH=x86_64

WORK_DIR="${PROJECT_ROOT}/packaging/linux/build"
APPDIR="${WORK_DIR}/OceanTri.AppDir"
TOOLS_DIR="${PROJECT_ROOT}/packaging/linux/tools"
OUTPUT="${PROJECT_ROOT}/release/Project-Moga-Linux-${APP_VERSION}-${ARCH}.AppImage"

rm -rf "${APPDIR}"
mkdir -p "${APPDIR}/usr/bin" "${APPDIR}/usr/lib" "${APPDIR}/usr/share/applications" \
         "${APPDIR}/usr/share/icons/hicolor/128x128/apps" "${TOOLS_DIR}" "${PROJECT_ROOT}/release"

echo "=== Copying executable ==="
cp "${EXE}" "${APPDIR}/usr/bin/MH3"
# Keep the dynamic symbol table (fatal-error backtraces use it); drop debug info.
strip --strip-debug "${APPDIR}/usr/bin/MH3" || true

echo "=== Bundling shared libraries ==="
# Libraries that must come from the host system (driver stack, glibc, X11/
# Wayland, audio servers). Everything else that MH3 links (SDL3, OpenSSL,
# libpng, ...) is copied into usr/lib.
EXCLUDE_RE='^(ld-linux.*|libc|libm|libdl|libpthread|librt|libresolv|libutil|libstdc\+\+|libgcc_s|libGL|libGLX|libGLdispatch|libEGL|libGLESv1_CM|libGLESv2|libOpenGL|libdrm|libgbm|libvulkan|libX11|libX11-xcb|libxcb.*|libXext|libXau|libXdmcp|libwayland-.*|libasound|libpulse.*|libpipewire.*|libdbus-1|libudev|libsystemd|libz|libexpat|libfontconfig|libfreetype|libharfbuzz|libglib-2\.0|libgobject-2\.0|libgio-2\.0|libgmodule-2\.0)\.so'
bundle_deps() {
  local target="$1"
  ldd "$target" | awk '/=> \//{print $3}' | while read -r lib; do
    local name
    name="$(basename "$lib")"
    if [[ $name =~ $EXCLUDE_RE ]]; then continue; fi
    if [[ ! -e "${APPDIR}/usr/lib/${name}" ]]; then
      echo "  + ${name}"
      cp -L "$lib" "${APPDIR}/usr/lib/${name}"
      bundle_deps "${APPDIR}/usr/lib/${name}"
    fi
  done
}
bundle_deps "${APPDIR}/usr/bin/MH3"
if command -v patchelf >/dev/null 2>&1; then
  patchelf --set-rpath '$ORIGIN/../lib' "${APPDIR}/usr/bin/MH3"
  for lib in "${APPDIR}"/usr/lib/*.so*; do patchelf --set-rpath '$ORIGIN' "$lib" 2>/dev/null || true; done
fi

echo "=== Desktop entry and icon ==="
cp "${PROJECT_ROOT}/packaging/android/res/mipmap-xxhdpi/ic_launcher.png" \
   "${APPDIR}/usr/share/icons/hicolor/128x128/apps/oceantri.png"
cp "${APPDIR}/usr/share/icons/hicolor/128x128/apps/oceantri.png" "${APPDIR}/oceantri.png"
ln -sf oceantri.png "${APPDIR}/.DirIcon"
cp "${SCRIPT_DIR}/oceantri.desktop" "${APPDIR}/oceantri.desktop"
cp "${SCRIPT_DIR}/oceantri.desktop" "${APPDIR}/usr/share/applications/oceantri.desktop"
install -m 755 "${SCRIPT_DIR}/AppRun" "${APPDIR}/AppRun"

echo "=== Building AppImage ==="
APPIMAGETOOL="${TOOLS_DIR}/appimagetool-${ARCH}.AppImage"
if [[ ! -x "${APPIMAGETOOL}" ]]; then
  echo "Downloading appimagetool..."
  wget -q -O "${APPIMAGETOOL}" \
    "https://github.com/AppImage/appimagetool/releases/download/continuous/appimagetool-${ARCH}.AppImage"
  chmod +x "${APPIMAGETOOL}"
fi
rm -f "${OUTPUT}"
# --appimage-extract-and-run avoids needing FUSE inside containers.
ARCH=${ARCH} "${APPIMAGETOOL}" --appimage-extract-and-run --no-appstream --runtime-file "${TOOLS_DIR}/runtime-x86_64" "${APPDIR}" "${OUTPUT}"

echo "=== AppImage built ==="
ls -lh "${OUTPUT}"
if [ -d "/var/mnt/juegos_sdb2/OceanTriRecomp Alpha 1.3" ]; then
    cp -f "${OUTPUT}" "/var/mnt/juegos_sdb2/OceanTriRecomp Alpha 1.3/OceanTriRecomp-Linux-${APP_VERSION}-${ARCH}.AppImage"
    echo "Copied to /var/mnt/juegos_sdb2/OceanTriRecomp Alpha 1.3/"
fi
