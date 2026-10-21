#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80479270_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x80479270u);
    goto loc_80479270;

loc_80479270:
{
}

loc_80479274:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80479278:
{
    r0 = MemoryInline::FlatRead8((r4 + 22));
}

loc_80479280:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80479284:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8047928C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80479294;
    }
}

loc_80479290:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

loc_80479294:
{
    r6 = MemoryInline::FlatRead32(r4);
}

loc_8047929C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804792B4;
    }
}

loc_804792A0:
{
    r5 = MemoryInline::FlatRead32((r6 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r6 + 12), r0);
    goto loc_804792C4;
}

loc_804792B4:
{
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 - r5);
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_804792C4:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_804792CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_80479300;
    }
}

loc_804792D0:
{
    r5 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r3, r5);
}

loc_804792DC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804792E8;
    }
}

loc_804792E0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r5 + 4), r0);
}

loc_804792E8:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_804792F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_80479378;
    }
}

loc_804792F4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_80479378;
}

loc_80479300:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80479308:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_80479328;
    }
}

loc_8047930C:
{
    r5 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r5);
}

loc_80479318:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80479378;
    }
}

loc_8047931C:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_80479378;
}

loc_80479328:
{
    r3 = MemoryInline::FlatRead32(r4);
}

loc_80479330:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80479334:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8047933C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_return;
    }
}

loc_80479340:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r0);
}

loc_80479350:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80479358:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8047935C:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80479364:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_return;
    }
}

loc_80479368:
{
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r3, r0);
}

loc_80479378:
{
    r3 = 0;
    r0 = 0x80000000u;
    MemoryInline::FlatWrite32((r4 + 4), r3);
    MemoryInline::FlatWrite32(r4, r3);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    MemoryInline::FlatWrite8((r4 + 22), static_cast<uint8_t>(r3));
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

extern "C" void func_80479270(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80479270_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80479270 func_80479270 preserves=true fpr_mask=0x00000000
