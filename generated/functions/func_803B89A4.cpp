#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803B89A4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x803B89A4u);
    goto loc_803B89A4;

loc_803B89A4:
{
    r4 = MemoryInline::FlatRead32((r13 + -22424));
    r5 = (r4 + 1120);
    r6 = r5;
    r4 = (r3 & 65535);
    r0 = 30;
    ctr = r0;
}

loc_803B89BC:
{
    r0 = MemoryInline::FlatRead16(r6);
}

loc_803B89C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_803B89EC;
    }
}

loc_803B89C8:
{
    r3 = MemoryInline::FlatRead16((r6 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_803B89D0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(99))) {
        goto loc_803B89E4;
    }
}

loc_803B89D4:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r6 + 2), static_cast<uint16_t>(r0));
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803B89E4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803B89EC:
{
    r6 = (r6 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803B89BC;
    }
}

loc_803B89F4:
{
    r0 = 30;
    ctr = r0;
}

loc_803B89FC:
{
    r0 = MemoryInline::FlatRead16(r5);
}

loc_803B8A04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803B8A20;
    }
}

loc_803B8A08:
{
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead16((r5 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803B8A20:
{
    r5 = (r5 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803B89FC;
    }
}

loc_803B8A28:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803B89A4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B89A4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803B89A4 func_803B89A4 preserves=true fpr_mask=0x00000000
