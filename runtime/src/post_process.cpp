#include "post_process.h"
#include "aurora-main/lib/gl/gl.hpp"
#include "aurora-main/include/aurora/aurora.h"
#include "aurora-main/lib/window.hpp"

namespace MH3PostProcess {
namespace {

bool g_mh3uMode = true; // Activo por defecto como modo MH3U

} // namespace

void Init() {
    ApplyToRenderer();
}

bool GetMh3uMode() {
    return g_mh3uMode;
}

void SetMh3uMode(bool enabled, void* window) {
    g_mh3uMode = enabled;
    ApplyToRenderer(window);
}

void ApplyToRenderer(void* window) {
    aurora::gl::PostProcessSettings ps;
    ps.mh3u_mode = g_mh3uMode;
    ps.enabled = g_mh3uMode;
    ps.skipWhenOverlayActive = true;
    aurora::gl::set_post_process_settings(ps);
}

} // namespace MH3PostProcess

// ---- C API for the settings overlay (unchanged call site) ----
bool MH3PostProcess_GetMh3uMode(void) { return MH3PostProcess::GetMh3uMode(); }
void MH3PostProcess_SetMh3uMode(bool enabled, void* window) { MH3PostProcess::SetMh3uMode(enabled, window); }
