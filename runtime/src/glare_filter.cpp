// Existing glare address retained as a thin ABI entry. Typed preparation and
// GPU-only downsample/brightness/composition live in native_scene_feedback.
#include "abi_bridge.h"
#include "mh3_graphics_settings.h"

extern "C" bool g_bloomEnabled = true;

extern "C" void MH3_NativeGlareDraw(CpuContext *cpu);
extern "C" void MH3_GlareFilterDraw(CpuContext *cpu) {
    if (!g_bloomEnabled)
        return;
    MH3_NativeGlareDraw(cpu);
}
REGISTER_NATIVE_FUNCTION_AS(0x80056F88, MH3_GlareFilterDraw, "GlareFilter::draw");
