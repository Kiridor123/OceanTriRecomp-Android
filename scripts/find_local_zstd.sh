#!/usr/bin/env bash
set -euo pipefail
roots=(
  /c/mh3src/third_party/zstd
  /c/mh3src/aurora-main/third_party/zstd
  /c/mh3tools/zstd
  "$LOCALAPPDATA/zstd"
  "/c/Program Files/zstd"
  "/c/Program Files (x86)/zstd"
)
found_include=""
found_library=""
for root in "${roots[@]}"; do
  if [ -d "$root" ]; then
    for inc in "$root" "$root/include" "$root/lib"; do
      if [ -f "$inc/zstd.h" ] && [ -z "$found_include" ]; then
        found_include="$inc"
      fi
      for lib in libzstd.a libzstd.lib; do
        if [ -f "$inc/$lib" ] && [ -z "$found_library" ]; then
          found_library="$inc/$lib"
        fi
      done
    done
  fi
done
if [ -z "$found_include" ] || [ -z "$found_library" ]; then
  echo "NO_LOCAL_ZSTD"
  exit 0
fi
echo "ZSTD_INCLUDE=$found_include"
echo "ZSTD_LIBRARY=$found_library"
