#!/usr/bin/env bash
# Cross-compile Project Moga for Windows x64 (Vulkan + OpenGL ES via ANGLE)
# and package as a self-contained portable ZIP in release/.
set -euo pipefail

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ROOT_DIR"

LLVM_MINGW="${MH3_LLVM_MINGW:-$ROOT_DIR/toolchain/windows/llvm-mingw}"
ANGLE_DIR="${MH3_ANGLE_DIR:-$ROOT_DIR/toolchain/windows/angle/angle-x64}"
OPENSSL_DIR="${MH3_WIN_OPENSSL:-$ROOT_DIR/toolchain/windows/openssl}"
BUILD_DIR="${MH3_WIN_BUILD:-$ROOT_DIR/build-windows-x64}"
JOBS="${BUILD_JOBS:-$(nproc)}"
APP_VERSION="${APP_VERSION:-v1.7}"
STAGE_DIR="$ROOT_DIR/packaging/windows/ProjectMoga-Windows-${APP_VERSION}-x64"
ZIP_OUT="$ROOT_DIR/release/Project-Moga-Windows-${APP_VERSION}-x64.zip"

mkdir -p "$ROOT_DIR/logs" "$ROOT_DIR/release"

if [[ ! -x "$LLVM_MINGW/bin/x86_64-w64-mingw32-clang++" ]]; then
  echo "ERROR: llvm-mingw not found at $LLVM_MINGW" >&2
  exit 1
fi
if [[ ! -f "$ANGLE_DIR/bin/libEGL.dll" || ! -f "$ANGLE_DIR/lib/libGLESv2.dll.lib" ]]; then
  echo "ERROR: ANGLE Windows x64 not found at $ANGLE_DIR" >&2
  exit 1
fi

echo "=== 1. Configuring CMake for Windows x64 (llvm-mingw UCRT) ==="
cmake -S runtime -B "$BUILD_DIR" -G Ninja \
  -DCMAKE_TOOLCHAIN_FILE="$ROOT_DIR/cmake/toolchains/windows-x64-llvm-mingw.cmake" \
  -DLLVM_MINGW_ROOT="$LLVM_MINGW" \
  -DCMAKE_BUILD_TYPE=Release \
  -DCMAKE_C_FLAGS="-march=${MH3_MARCH:-x86-64-v3} -D_WIN32_WINNT=0x0A00 -DWINVER=0x0A00" \
  -DCMAKE_CXX_FLAGS="-march=${MH3_MARCH:-x86-64-v3} -D_WIN32_WINNT=0x0A00 -DWINVER=0x0A00" \
  -DCMAKE_EXE_LINKER_FLAGS="-fuse-ld=lld -static-libgcc -static-libstdc++ -Wl,-Bstatic -lwinpthread -Wl,-Bdynamic -Wl,--thinlto-jobs=${JOBS}" \
  -DMH3_ALLOW_UNSUPPORTED_HOST=ON \
  -DMH3_RELEASE_EXCEPTIONS=ON \
  -DMH3_PGO_RELEASE_PROFILE=OFF \
  -DMH3_BUILD_HOST_TESTS=OFF \
  -DMH3_BUILD_VITA_TEXTURE_PACKER=OFF \
  -DMH3_AURORA_ROOT="$ROOT_DIR/aurora-main" \
  -DFETCHCONTENT_BASE_DIR="$BUILD_DIR/_deps" \
  -DAURORA_ANGLE_VULKAN=ON \
  -DAURORA_GLES3_INCLUDE_DIR="$ANGLE_DIR/include" \
  -DAURORA_EGL_INCLUDE_DIR="$ANGLE_DIR/include" \
  -DAURORA_GLESV2_LIBRARY="$ANGLE_DIR/lib/libGLESv2.dll.lib" \
  -DAURORA_ANGLE_GLESV2_LIBRARY="$ANGLE_DIR/lib/libGLESv2.dll.lib" \
  -DAURORA_SDL3_PROVIDER=vendor \
  -DAURORA_SDL3_LINKAGE=static \
  -DAURORA_SDL3_LIBUSB=OFF \
  -DAURORA_ENABLE_CARD=OFF \
  -DSDL_TESTS=OFF \
  -DSDL_EXAMPLES=OFF \
  -DPNG_SHARED=OFF \
  -DPNG_STATIC=ON \
  -DOPENSSL_ROOT_DIR="$OPENSSL_DIR" \
  -DOPENSSL_USE_STATIC_LIBS=ON \
  -DOPENSSL_INCLUDE_DIR:PATH="$OPENSSL_DIR/include" \
  -DOPENSSL_SSL_LIBRARY:FILEPATH="$OPENSSL_DIR/lib64/libssl.a" \
  -DOPENSSL_CRYPTO_LIBRARY:FILEPATH="$OPENSSL_DIR/lib64/libcrypto.a" \
  -DCMAKE_PROJECT_aurora_INCLUDE="$ROOT_DIR/scripts/aurora-compat.cmake" \
  2>&1 | tee "$ROOT_DIR/logs/windows-configure.log"

echo "=== 2. Building ProjectMoga.exe (jobs: $JOBS) ==="
cmake --build "$BUILD_DIR" --target MH3 --parallel "$JOBS" 2>&1 | tee "$ROOT_DIR/logs/windows-build.log"

echo "=== 3. Packaging Portable Windows x64 ZIP ==="
rm -rf "$STAGE_DIR" "$ZIP_OUT"
mkdir -p "$STAGE_DIR"

cp "$BUILD_DIR/ProjectMoga.exe" "$STAGE_DIR/ProjectMoga.exe"
"$LLVM_MINGW/bin/llvm-strip" --strip-debug "$STAGE_DIR/ProjectMoga.exe" || true

cp "$ANGLE_DIR/bin/libEGL.dll"         "$STAGE_DIR/"
cp "$ANGLE_DIR/bin/libGLESv2.dll"      "$STAGE_DIR/"
cp "$ANGLE_DIR/bin/d3dcompiler_47.dll" "$STAGE_DIR/"
cp "$ROOT_DIR/runtime/portable.txt"    "$STAGE_DIR/portable.txt"

# Bundle any shared libs built by dependencies (e.g. libpng16.dll, libz.dll)
for dep_dll in "$BUILD_DIR"/_deps/png-build/*.dll "$BUILD_DIR"/_deps/zlib-build/*.dll; do
  if [[ -f "$dep_dll" ]]; then
    cp "$dep_dll" "$STAGE_DIR/"
  fi
done

echo "=== Verifying PE DLL dependencies of ProjectMoga.exe ==="
"$LLVM_MINGW/bin/llvm-objdump" -p "$STAGE_DIR/ProjectMoga.exe" | grep "DLL Name:" || true

cat > "$STAGE_DIR/LEEME.txt" <<'EOF'
Project Moga (Monster Hunter Tri Recomp) - Windows x64 Portable
===============================================================
1. Descomprime toda esta carpeta en cualquier ubicación (sin instalar nada).
2. Ejecuta ProjectMoga.exe y selecciona tu ROM Europea (PAL) de Monster Hunter Tri (.rvz o .iso),
   o colócala junto a ProjectMoga.exe.
3. Gráficos: usa Vulkan por defecto (máximo rendimiento) con respaldo automático a
   OpenGL ES / Direct3D 11 (ANGLE) y selector de renderizador en Ajustes.
4. Tus partidas y configuraciones se guardan de forma portable en esta misma carpeta (UserData / MH3UI.*).
EOF

(cd "$(dirname "$STAGE_DIR")" && zip -r -9 "$ZIP_OUT" "$(basename "$STAGE_DIR")")

echo "=== Windows x64 Portable ZIP built ==="
ls -lh "$ZIP_OUT" "$STAGE_DIR"
