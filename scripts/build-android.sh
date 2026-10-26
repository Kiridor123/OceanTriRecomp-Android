#!/usr/bin/env bash
set -euo pipefail
ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
ANDROID_SDK_ROOT="${ANDROID_HOME:-/var/mnt/juegos_sdb2/MHFU/out/android-sdk}"
if [ -n "${ANDROID_NDK_HOME:-}" ] && [ -d "${ANDROID_NDK_HOME}" ]; then
    ANDROID_NDK_ROOT="${ANDROID_NDK_HOME}"
elif [ -d "${ANDROID_SDK_ROOT}/ndk/28.2.13676358" ]; then
    ANDROID_NDK_ROOT="${ANDROID_SDK_ROOT}/ndk/28.2.13676358"
else
    ANDROID_NDK_ROOT="$(find "${ANDROID_SDK_ROOT}/ndk" -mindepth 1 -maxdepth 1 -type d 2>/dev/null | sort -V | tail -n1)"
fi

export DOTNET_BIN="${DOTNET_BIN:-$(which dotnet 2>/dev/null || echo "$ROOT_DIR/tools/dotnet/dotnet")}"
BUILD_DIR="${ROOT_DIR}/build-android"

echo "=== 1. Configuring CMake for Android arm64-v8a ==="
cmake -S "${ROOT_DIR}/runtime" -B "${BUILD_DIR}" -G Ninja \
  -DCMAKE_TOOLCHAIN_FILE="${ANDROID_NDK_ROOT}/build/cmake/android.toolchain.cmake" \
  -DANDROID_ABI=arm64-v8a \
  -DANDROID_PLATFORM=android-29 \
  -DCMAKE_BUILD_TYPE=Release

echo "=== 2. Building native libraries ==="
cmake --build "${BUILD_DIR}" --target libmain.so png16 --parallel "$(nproc)"

echo "=== 3. Packaging and signing APK ==="
bash "${ROOT_DIR}/packaging/android/build_apk.sh"
