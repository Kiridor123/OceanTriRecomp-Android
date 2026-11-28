#!/usr/bin/env bash
# Build the x86_64 Linux desktop version inside Debian 11 (glibc 2.31) and
# package it as release/OceanTriRecomp-Linux-<version>-x86_64.AppImage.
#
# Environment:
#   BUILD_JOBS        compile parallelism (default: nproc)
#   MH3_LINUX_BUILD   build directory (default: build-linux-debian11-x86_64)
#   APP_VERSION       version string in the AppImage name (default: v1.6.5)
#   MH3_MARCH         x86 target level (default: x86-64-v3 = AVX2/FMA)
#   MH3_DEBIAN_IMAGE  podman image (default: oceantri-debian11:latest)
#   MH3_LLVM_DIR      host LLVM/Clang dir mounted into the container
set -euo pipefail
ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ROOT_DIR"

if [[ -z ${MH3_IN_DEBIAN11:-} ]]; then
  IMAGE="${MH3_DEBIAN_IMAGE:-oceantri-debian11:latest}"
  LLVM_DIR="${MH3_LLVM_DIR:-/var/mnt/juegos_sdb2/MHFU/out/android-sdk/ndk/28.2.13676358/toolchains/llvm/prebuilt/linux-x86_64}"
  if ! podman image exists "$IMAGE"; then
    echo "=== Building Debian 11 image '$IMAGE' ==="
    podman build -t "$IMAGE" -f "$ROOT_DIR/packaging/linux/Dockerfile.debian11" "$ROOT_DIR/packaging/linux"
  fi
  DOTNET_DIR="${MH3_DOTNET_DIR:-$HOME/.dotnet}"
  EXTRA_MOUNTS=()
  if [[ -d "$DOTNET_DIR" ]]; then
    EXTRA_MOUNTS+=(-v "$DOTNET_DIR:$DOTNET_DIR:ro" -e "DOTNET_BIN=$DOTNET_DIR/dotnet")
  fi
  if [[ -L "$ROOT_DIR/Assets" ]]; then
    ASSETS_TARGET="$(readlink -f "$ROOT_DIR/Assets")"
    EXTRA_MOUNTS+=(-v "$ASSETS_TARGET:$ASSETS_TARGET:ro")
  fi
  echo "=== Building inside Debian 11 container '$IMAGE' (glibc 2.31) ==="
  exec podman run --rm --security-opt label=disable \
    -v "$ROOT_DIR:$ROOT_DIR" \
    -v "$LLVM_DIR:/opt/llvm:ro" \
    "${EXTRA_MOUNTS[@]}" \
    -w "$ROOT_DIR" \
    -e MH3_IN_DEBIAN11=1 \
    -e PATH="/opt/llvm/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin" \
    -e BUILD_JOBS="${BUILD_JOBS:-}" \
    -e MH3_LINUX_BUILD="${MH3_LINUX_BUILD:-}" \
    -e APP_VERSION="${APP_VERSION:-}" \
    -e MH3_MARCH="${MH3_MARCH:-}" \
    -e MH3_EXTRA_CMAKE_ARGS="${MH3_EXTRA_CMAKE_ARGS:-}" \
    "$IMAGE" bash "$ROOT_DIR/scripts/build-linux-appimage.sh" "$@"
fi

BUILD_DIR="${MH3_LINUX_BUILD:-$ROOT_DIR/build-linux-debian11-x86_64}"
JOBS="${BUILD_JOBS:-$(nproc)}"
APP_VERSION="${APP_VERSION:-v1.7}"
mkdir -p "$ROOT_DIR/logs"

echo "=== 0. Environment: $(ldd --version | head -n 1) ==="
echo "=== 1. Configuring CMake for Linux x86_64 (clang $(clang -dumpversion)) ==="
cmake -S runtime -B "$BUILD_DIR" -G Ninja \
  -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ \
  -DCMAKE_BUILD_TYPE=Release \
  -DCMAKE_C_FLAGS="-march=${MH3_MARCH:-x86-64-v3}" -DCMAKE_CXX_FLAGS="-march=${MH3_MARCH:-x86-64-v3} -include \"$ROOT_DIR/packaging/linux/debian11-compat.h\"" \
  -DMH3_ALLOW_UNSUPPORTED_HOST=ON -DMH3_RELEASE_EXCEPTIONS=ON \
  -DMH3_PGO_RELEASE_PROFILE=OFF \
  -DMH3_AURORA_ROOT="$ROOT_DIR/aurora-main" \
  -DFETCHCONTENT_BASE_DIR="$BUILD_DIR/_deps" \
  -DAURORA_SDL3_PROVIDER=vendor -DAURORA_ENABLE_CARD=OFF \
  -DSDL_X11_XTEST=OFF -DSDL_TESTS=OFF -DSDL_EXAMPLES=OFF \
  -DMH3_BUILD_VITA_TEXTURE_PACKER=OFF \
  -DCMAKE_EXE_LINKER_FLAGS="-fuse-ld=lld -Wl,--thinlto-jobs=${JOBS} -Wl,-rpath,\$ORIGIN/../lib" \
  -DCMAKE_PROJECT_aurora_INCLUDE="$ROOT_DIR/scripts/aurora-compat.cmake" \
  ${MH3_EXTRA_CMAKE_ARGS:-} 2>&1 | tee "$ROOT_DIR/logs/linux-configure.log"

echo "=== 2. Building MH3 (jobs: $JOBS) ==="
cmake --build "$BUILD_DIR" --target MH3 --parallel "$JOBS" 2>&1 | tee "$ROOT_DIR/logs/linux-build.log"

echo "=== 3. Packaging AppImage ==="
APP_VERSION="$APP_VERSION" bash "$ROOT_DIR/packaging/linux/build_appimage.sh" "$BUILD_DIR/MH3"
