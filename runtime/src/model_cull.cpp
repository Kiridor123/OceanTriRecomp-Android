// Native visibility culling of model draws (model_cull.h).
#include "model_cull.h"
#include "bytes_equal.h"
#include "native_graphics.h"
#include "runtime/native/mh3_model_cull.h"
#include <atomic>
#include <cstdlib>
#include <cstring>

namespace {
// Widens the drawable rectangle by 1% of its NDC extent: covers rounding and
// the GXM rasterizer's sub-pixel offset.
constexpr float Margin = 0.02f;
std::atomic<uint64_t> draws{0}, culled{0};

// Render thread: the last draw's frustum and what it was made from; draws in
// a row mostly share the projection, viewport and scissor.
struct FrustumInputs {
    float projection[16], viewport[4];
    int32_t scissor[4];
};

struct {
    FrustumInputs inputs;
    mh3_cull_frustum value;
    bool known = false, valid = false;
} lastFrustum;
} // namespace

bool CullNativeModelMesh(const mh3_resolved_mesh_submit& mesh) {
    (void)mesh;
    return false;
}

NativeModelCullStatistics TakeNativeModelCullStatistics() {
    return {draws.exchange(0, std::memory_order_relaxed), culled.exchange(0, std::memory_order_relaxed)};
}
