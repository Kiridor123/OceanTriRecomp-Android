#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800F0338_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];

    goto loc_800F0338;

loc_800F0338:
{
}

loc_800F033C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_800F0340:
{
    r5 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
}

loc_800F034C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_800F0350:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_800F0358:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F0360;
    }
}

loc_800F035C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

loc_800F0360:
{
    r6 = 0;
    r3 = 0;
    goto loc_800F0380;
}

loc_800F036C:
{
    r0 = MemoryInline::FlatRead16((r5 + 70));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r5 + 60), r0);
    MemoryInline::FlatWrite16((r5 + 70), static_cast<uint16_t>(r3));
    r6 = (r6 + 1);
    r5 = (r5 + 72);
}

loc_800F0380:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_800F0388:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r0))) {
        goto loc_800F036C;
    }
}

loc_800F038C:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + -26700), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_800F0338(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800F0338_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F0338 func_800F0338 preserves=true fpr_mask=0x00000000
