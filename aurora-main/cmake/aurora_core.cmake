add_library(aurora_core STATIC
        lib/aurora.cpp
        lib/input.cpp
        lib/window.cpp
        lib/logging.cpp
        lib/legacy_gx.cpp
        lib/system_info.cpp
        lib/system_info.hpp
)
add_library(aurora::core ALIAS aurora_core)
set_target_properties(aurora_core PROPERTIES FOLDER "aurora")

target_compile_definitions(aurora_core PUBLIC AURORA TARGET_PC)
target_include_directories(aurora_core PUBLIC include)
target_link_libraries(aurora_core PUBLIC fmt::fmt ${AURORA_SDL3_TARGET} xxhash)
target_link_libraries(aurora_core PRIVATE sqlite3)

if (AURORA_ENABLE_GX AND AURORA_CACHE_USE_ZSTD)
    target_compile_definitions(aurora_core PRIVATE AURORA_CACHE_USE_ZSTD)
    target_link_libraries(aurora_core PRIVATE libzstd_static)
endif ()

if (CMAKE_SYSTEM_NAME STREQUAL Windows)
    # stuff for fetching system info.
    target_link_libraries(aurora_core PRIVATE ntdll dxgi advapi32 user32)
elseif (APPLE)
    target_sources(aurora_core PRIVATE lib/system_info_mac.mm)
endif ()

if (AURORA_ENABLE_GX)
    target_sources(aurora_core PRIVATE lib/imgui.cpp)
    target_link_libraries(aurora_core PUBLIC imgui)
endif ()

if (AURORA_ENABLE_GX)
    target_compile_definitions(aurora_core PUBLIC AURORA_ENABLE_GX)
    target_sources(aurora_core PRIVATE lib/gl/device.cpp lib/gfx/port_capture.cpp lib/gfx/cg_shader.cpp lib/gfx/shader_source.cpp)

    if(AURORA_WEBGPU)
      # Emscripten's emdawnwebgpu port supplies webgpu/webgpu_cpp.h. The
      # executable links the WGSL shader bank (cmake/WebShaderBank.cmake,
      # docs/optimizations/platforms/web-build.md); GLES3/gl3.h, from Emscripten's sysroot, only
      # provides the enum values of the renderer interface.
      target_compile_definitions(aurora_core PUBLIC AURORA_WEBGPU)
      target_sources(aurora_core PRIVATE lib/webgpu/gpu.cpp lib/webgpu/renderer.cpp lib/webgpu/shader_bank.cpp)
      target_compile_options(aurora_core PUBLIC --use-port=emdawnwebgpu)
      target_link_options(aurora_core PUBLIC --use-port=emdawnwebgpu)

      if(NOT TARGET libzstd_static)
        message(FATAL_ERROR "The WGSL shader bank decompresses with zstd; enable AURORA_CACHE_USE_ZSTD")
      endif()

      target_link_libraries(aurora_core PRIVATE libzstd_static)
    else()
      if(WIN32 AND AURORA_ANGLE_VULKAN)
        find_path(AURORA_ANGLE_ROOT_DIR
          NAMES include/EGL/egl.h include/GLES3/gl3.h
          PATHS "C:/libs/angle" "C:/angle" "C:/libs/angle-win" ${AURORA_ANGLE_ROOT}
          NO_DEFAULT_PATH
          REQUIRED
          MESSAGE_SUPPRESSED_BY_FIND_PACKAGE)
        find_path(AURORA_GLES3_INCLUDE_DIR GLES3/gl3.h
          PATHS "${AURORA_ANGLE_ROOT_DIR}/include" NO_DEFAULT_PATH
          REQUIRED
          MESSAGE_SUPPRESSED_BY_FIND_PACKAGE)
        find_library(AURORA_ANGLE_GLESV2_LIBRARY NAMES GLESv2 libGLESv2
          PATHS "${AURORA_ANGLE_ROOT_DIR}/lib64" "${AURORA_ANGLE_ROOT_DIR}/lib" NO_DEFAULT_PATH
          REQUIRED
          MESSAGE_SUPPRESSED_BY_FIND_PACKAGE)
        set(AURORA_GLESV2_LIBRARY "${AURORA_ANGLE_GLESV2_LIBRARY}" CACHE FILEPATH "ANGLE GLESv2 library" FORCE)
      else()
        find_path(AURORA_GLES3_INCLUDE_DIR GLES3/gl3.h REQUIRED)
        find_library(AURORA_GLESV2_LIBRARY NAMES GLESv2 REQUIRED)
      endif()
      target_sources(aurora_core PRIVATE lib/gl/gl.cpp)
      target_include_directories(aurora_core PUBLIC ${AURORA_GLES3_INCLUDE_DIR})
      target_link_libraries(aurora_core PUBLIC ${AURORA_GLESV2_LIBRARY})
      if(WIN32 AND AURORA_ANGLE_VULKAN)
        set(AURORA_EGL_INCLUDE_DIR "${AURORA_ANGLE_ROOT_DIR}/include" CACHE PATH "ANGLE EGL include directory" FORCE)
        target_compile_definitions(aurora_core PUBLIC AURORA_ANGLE_VULKAN=1)
        target_include_directories(aurora_core PUBLIC "${AURORA_EGL_INCLUDE_DIR}")
        target_sources(aurora_core PRIVATE lib/gl/angle_vulkan_context.cpp)
      endif()
    endif()
endif ()
