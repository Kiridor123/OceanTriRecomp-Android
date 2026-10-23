# CMake generated Testfile for 
# Source directory: C:/mh3src/runtime
# Build directory: C:/mh3src/runtime/build-clang
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test("mh3_classic_map_check" "C:/mh3src/runtime/build-clang/mh3_classic_map_check.exe")
set_tests_properties("mh3_classic_map_check" PROPERTIES  _BACKTRACE_TRIPLES "C:/mh3src/runtime/CMakeLists.txt;342;add_test;C:/mh3src/runtime/CMakeLists.txt;0;")
add_test("mh3_runtime_self_test" "C:/mh3src/runtime/build-clang/MH3.exe" "--self-test")
set_tests_properties("mh3_runtime_self_test" PROPERTIES  _BACKTRACE_TRIPLES "C:/mh3src/runtime/CMakeLists.txt;376;add_test;C:/mh3src/runtime/CMakeLists.txt;0;")
add_test("mh3_audio_self_test" "C:/mh3src/runtime/build-clang/MH3.exe" "--audio-self-test")
set_tests_properties("mh3_audio_self_test" PROPERTIES  _BACKTRACE_TRIPLES "C:/mh3src/runtime/CMakeLists.txt;377;add_test;C:/mh3src/runtime/CMakeLists.txt;0;")
add_test("mh3_native_frame_statistics_check" "C:/mh3src/runtime/build-clang/mh3_native_frame_statistics_check.exe")
set_tests_properties("mh3_native_frame_statistics_check" PROPERTIES  _BACKTRACE_TRIPLES "C:/mh3src/runtime/CMakeLists.txt;407;add_test;C:/mh3src/runtime/CMakeLists.txt;0;")
add_test("mh3_fast_map_check" "C:/mh3src/runtime/build-clang/mh3_fast_map_check.exe")
set_tests_properties("mh3_fast_map_check" PROPERTIES  _BACKTRACE_TRIPLES "C:/mh3src/runtime/CMakeLists.txt;411;add_test;C:/mh3src/runtime/CMakeLists.txt;0;")
add_test("mh3_shader_cache_pack_check" "C:/mh3src/runtime/build-clang/mh3_shader_cache_pack_check.exe")
set_tests_properties("mh3_shader_cache_pack_check" PROPERTIES  _BACKTRACE_TRIPLES "C:/mh3src/runtime/CMakeLists.txt;416;add_test;C:/mh3src/runtime/CMakeLists.txt;0;")
add_test("mh3_shade_check" "C:/mh3src/runtime/build-clang/mh3_shade_check.exe")
set_tests_properties("mh3_shade_check" PROPERTIES  _BACKTRACE_TRIPLES "C:/mh3src/runtime/CMakeLists.txt;422;add_test;C:/mh3src/runtime/CMakeLists.txt;0;")
add_test("mh3_sdl_controller_test" "C:/mh3src/runtime/build-clang/MH3ControllerHostTest.exe")
set_tests_properties("mh3_sdl_controller_test" PROPERTIES  _BACKTRACE_TRIPLES "C:/mh3src/runtime/CMakeLists.txt;568;add_test;C:/mh3src/runtime/CMakeLists.txt;0;")
subdirs("aurora")
