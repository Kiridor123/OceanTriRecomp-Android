#!/usr/bin/env bash
set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "${SCRIPT_DIR}/../.." && pwd)"
ANDROID_SDK_ROOT="${ANDROID_HOME:-/var/mnt/juegos_sdb2/MHFU/out/android-sdk}"
SDK_BUILD_TOOLS="${ANDROID_SDK_ROOT}/build-tools/35.0.0"
ANDROID_JAR="${ANDROID_SDK_ROOT}/platforms/android-35/android.jar"
NDK_STRIP="${ANDROID_NDK_HOME:-${ANDROID_SDK_ROOT}/ndk/28.2.13676358}/toolchains/llvm/prebuilt/linux-x86_64/bin/llvm-strip"

PKG_DIR="${PROJECT_ROOT}/packaging/android"
BUILD_DIR="${PKG_DIR}/build"
OBJ_DIR="${PKG_DIR}/obj"
SRC_DIR="${PKG_DIR}/src"
RES_DIR="${PKG_DIR}/res"
MANIFEST="${PKG_DIR}/AndroidManifest.xml"
KEYSTORE="${BUILD_DIR}/oceantri.keystore"

mkdir -p "${BUILD_DIR}"
mkdir -p "${OBJ_DIR}"

echo "=== 1. Compiling Java Sources ==="
rm -rf "${OBJ_DIR}"
mkdir -p "${OBJ_DIR}"

cd "${SRC_DIR}"
find . -name "*.java" > "${BUILD_DIR}/sources.txt"
javac --release 17 -cp "${ANDROID_JAR}" -d "${OBJ_DIR}" @"${BUILD_DIR}/sources.txt"

echo "=== 2. Creating classes.dex with D8 ==="
cd "${OBJ_DIR}"
find . -name "*.class" > "${BUILD_DIR}/classes.txt"
"${SDK_BUILD_TOOLS}/d8" --output "${BUILD_DIR}/" --lib "${ANDROID_JAR}" --min-api 29 $(cat "${BUILD_DIR}/classes.txt")

echo "=== 3. Compiling Android Resources ==="
"${SDK_BUILD_TOOLS}/aapt2" compile --dir "${RES_DIR}" -o "${BUILD_DIR}/compiled_res.zip"

echo "=== 4. Linking Base APK ==="
rm -f "${BUILD_DIR}/base.apk"
"${SDK_BUILD_TOOLS}/aapt2" link -o "${BUILD_DIR}/base.apk" \
    -I "${ANDROID_JAR}" \
    --manifest "${MANIFEST}" \
    "${BUILD_DIR}/compiled_res.zip" \
    --auto-add-overlay

echo "=== 5. Adding classes.dex to APK ==="
cd "${BUILD_DIR}"
jar -uf "base.apk" classes.dex

echo "=== 6. Preparing and Stripping Native Libraries ==="
mkdir -p "${BUILD_DIR}/apk_root/lib/arm64-v8a"
cp "${PROJECT_ROOT}/build-android/libmain.so" "${BUILD_DIR}/apk_root/lib/arm64-v8a/libmain.so"
cp "${PROJECT_ROOT}/build-android/_deps/png-build/libpng16.so" "${BUILD_DIR}/apk_root/lib/arm64-v8a/libpng16.so"
cp "/var/mnt/juegos_sdb2/MHFU/out/release-android-mhfu/deps/sdl3-install/lib/libSDL3.so" "${BUILD_DIR}/apk_root/lib/arm64-v8a/libSDL3.so"

"${NDK_STRIP}" --strip-all "${BUILD_DIR}/apk_root/lib/arm64-v8a/libmain.so"
"${NDK_STRIP}" --strip-all "${BUILD_DIR}/apk_root/lib/arm64-v8a/libpng16.so"
"${NDK_STRIP}" --strip-all "${BUILD_DIR}/apk_root/lib/arm64-v8a/libSDL3.so"

echo "=== 7. Adding Native Libraries to APK ==="
cd "${BUILD_DIR}/apk_root"
jar -uf "${BUILD_DIR}/base.apk" lib/arm64-v8a/libmain.so lib/arm64-v8a/libpng16.so lib/arm64-v8a/libSDL3.so

echo "=== 8. Aligning APK (16KB page alignment) ==="
cd "${BUILD_DIR}"
rm -f aligned.apk
"${SDK_BUILD_TOOLS}/zipalign" -P 16 -f 4 base.apk aligned.apk

echo "=== 9. Signing APK ==="
if [ ! -f "${KEYSTORE}" ]; then
    echo "=== Generating signing keystore ==="
    keytool -genkeypair -v -keystore "${KEYSTORE}" -alias oceantri -keyalg RSA -keysize 2048 -validity 10000 \
        -storepass oceantrikey -keypass oceantrikey -dname "CN=OceanTri, OU=Gaming, O=Recomp, L=City, S=State, C=US"
fi
OUTPUT_APK="${BUILD_DIR}/OceanTriRecomp-Android-v1.3-arm64.apk"
rm -f "${OUTPUT_APK}"
"${SDK_BUILD_TOOLS}/apksigner" sign \
    --ks "${KEYSTORE}" \
    --ks-pass pass:oceantrikey \
    --key-pass pass:oceantrikey \
    --out "${OUTPUT_APK}" \
    aligned.apk

echo "=== 10. Copying release APK ==="
DEST_DIR="${PROJECT_ROOT}/release"
mkdir -p "${DEST_DIR}"
cp "${OUTPUT_APK}" "${DEST_DIR}/OceanTriRecomp-Android-v1.3-arm64.apk"
if [ -d "/var/mnt/juegos_sdb2/OceanTriRecomp Alpha 1.3" ]; then
    cp "${OUTPUT_APK}" "/var/mnt/juegos_sdb2/OceanTriRecomp Alpha 1.3/OceanTriRecomp-Android-v1.3-arm64.apk"
fi

echo "=== APK Successfully Built ==="
ls -lh "${DEST_DIR}/OceanTriRecomp-Android-v1.3-arm64.apk"
