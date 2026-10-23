#!/usr/bin/env bash
# Configure then build MH3 in build/x86-64 with the MinGW toolchain from WinGet.
set -euo pipefail

P=/c/mh3src
MINGW_C="C:/Users/Kris/AppData/Local/Microsoft/WinGet/Packages/BrechtSanders.WinLibs.POSIX.UCRT_Microsoft.WinGet.Source_8wekyb3d8bbwe/mingw64/bin/gcc.exe"
MINGW_CXX="C:/Users/Kris/AppData/Local/Microsoft/WinGet/Packages/BrechtSanders.WinLibs.POSIX.UCRT_Microsoft.WinGet.Source_8wekyb3d8bbwe/mingw64/bin/g++.exe"

cd "$P"

# Remove any stale CMake cache so the generator is always re-read.
if [ -e build/x86-64/CMakeCache.txt ]; then
  rm -rf build/x86-64/CMakeCache.txt
fi

cmake -S runtime -B build/x86-64 \
  -G Ninja \
  -DCMAKE_BUILD_TYPE=Release \
  -DCMAKE_C_COMPILER="$MINGW_C" \
  -DCMAKE_CXX_COMPILER="$MINGW_CXX" \
  -DMH3_ALLOW_UNSUPPORTED_HOST=ON \
  -DAURORA_CACHE_USE_ZSTD=ON \
  > build_gen.log 2>&1
g=$?

echo "GEN_EXIT:$g"
if [ "$g" -ne 0 ]; then
  echo "----- build_gen.log -----"
  cat build_gen.log
  exit "$g"
fi

echo "GEN_OK"
cmake --build build/x86-64 --parallel > build_build.log 2>&1
b=$?

echo "BUILD_EXIT:$b"
if [ -e build/x86-64/MH3.exe ]; then
  echo "EXE_OK"
else
  echo "----- build_build.log -----"
  cat build_build.log
fi
exit "$b"
