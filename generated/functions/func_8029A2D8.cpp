#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8029A2D8_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_8029A2D8;

loc_8029A2D8:
{
    r3 = MemoryInline::FlatRead8((r3 + 9));
    r0 = (r3 & 32);
}

loc_8029A2E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029A300;
    }
}

loc_8029A2E8:
{
    r0 = MemoryInline::FlatRead8((r4 + 49));
    r0 = (r0 & 32);
}

loc_8029A2F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029A300;
    }
}

loc_8029A2F8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8029A300:
{
    r0 = (r3 & 16);
}

loc_8029A308:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029A324;
    }
}

loc_8029A30C:
{
    r0 = MemoryInline::FlatRead8((r4 + 49));
    r0 = (r0 & 16);
}

loc_8029A318:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029A324;
    }
}

loc_8029A31C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8029A324:
{
    r0 = (r3 & 1);
}

loc_8029A32C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029A348;
    }
}

loc_8029A330:
{
    r0 = MemoryInline::FlatRead8((r4 + 49));
    r0 = (r0 & 1);
}

loc_8029A33C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029A348;
    }
}

loc_8029A340:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8029A348:
{
    r0 = (r3 & 2);
}

loc_8029A350:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029A36C;
    }
}

loc_8029A354:
{
    r0 = MemoryInline::FlatRead8((r4 + 49));
    r0 = (r0 & 2);
}

loc_8029A360:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029A36C;
    }
}

loc_8029A364:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8029A36C:
{
    r0 = (r3 & 4);
}

loc_8029A374:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029A390;
    }
}

loc_8029A378:
{
    r0 = MemoryInline::FlatRead8((r4 + 49));
    r0 = (r0 & 4);
}

loc_8029A384:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029A390;
    }
}

loc_8029A388:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8029A390:
{
    r0 = (r3 & 8);
}

loc_8029A398:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029A3B4;
    }
}

loc_8029A39C:
{
    r0 = MemoryInline::FlatRead8((r4 + 49));
    r0 = (r0 & 8);
}

loc_8029A3A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029A3B4;
    }
}

loc_8029A3AC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8029A3B4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8029A2D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8029A2D8_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8029A2D8 func_8029A2D8 preserves=true fpr_mask=0x00000000
