#!/usr/bin/env bash
set -euo pipefail
ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
ANDROID_SDK_ROOT="${ANDROID_HOME:-/var/mnt/juegos_sdb2/MHFU/out/android-sdk}"
ANDROID_NDK_ROOT="${ANDROID_NDK_HOME:-${ANDROID_SDK_ROOT}/ndk/28.2.13676358}"

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
