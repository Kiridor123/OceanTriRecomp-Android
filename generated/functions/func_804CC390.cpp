#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804CC390_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_804CC390;

loc_804CC390:
{
    r7 = r3;
    r6 = 0;
    goto loc_804CC3B0;
}

loc_804CC3A0:
{
}

loc_804CC3A4:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r7))) {
        goto loc_804CC3B8;
    }
}

loc_804CC3A8:
{
    r6 = r7;
    r7 = MemoryInline::FlatRead32((r7 + 4));
}

loc_804CC3B0:
{
}

loc_804CC3B4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_804CC3A0;
    }
}

loc_804CC3B8:
{
}

loc_804CC3BC:
{
    MemoryInline::FlatWrite32((r4 + 4), r7);
    MemoryInline::FlatWrite32(r4, r6);
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804CC3FC;
    }
}

loc_804CC3C8:
{
    MemoryInline::FlatWrite32(r7, r4);
    r5 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r4 + r5);
}

loc_804CC3D8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r7))) {
        goto loc_804CC3FC;
    }
}

loc_804CC3DC:
{
    r0 = MemoryInline::FlatRead32((r7 + 8));
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r7 = MemoryInline::FlatRead32((r7 + 4));
    MemoryInline::FlatWrite32((r4 + 4), r7);
}

loc_804CC3F4:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804CC3FC;
    }
}

loc_804CC3F8:
{
    MemoryInline::FlatWrite32(r7, r4);
}

loc_804CC3FC:
{
}

loc_804CC400:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804CC438;
    }
}

loc_804CC404:
{
    MemoryInline::FlatWrite32((r6 + 4), r4);
    r5 = MemoryInline::FlatRead32((r6 + 8));
    r0 = (r6 + r5);
}

loc_804CC414:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_return;
    }
}

loc_804CC418:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
}

loc_804CC420:
{
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r6 + 8), r0);
    MemoryInline::FlatWrite32((r6 + 4), r7);
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_804CC430:
{
    MemoryInline::FlatWrite32(r7, r6);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r3;
}

loc_804CC438:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r3;
}

}

extern "C" void func_804CC390(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804CC390_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CC390 func_804CC390 preserves=true fpr_mask=0x00000000
