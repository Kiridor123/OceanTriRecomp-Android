#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802D4108_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];

    goto loc_802D4108;

loc_802D4108:
{
    r0 = MemoryInline::FlatRead16((r3 + 960));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r5 = (r3 + r0);
    MemoryInline::FlatWrite16((r5 + 912), static_cast<uint16_t>(r4));
    r5 = 1;
    r0 = MemoryInline::FlatRead16((r3 + 960));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r3 + r0);
    MemoryInline::FlatWrite16((r4 + 914), static_cast<uint16_t>(r5));
    r4 = MemoryInline::FlatRead16((r3 + 960));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 960), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_802D4140:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(8))) {
        goto loc_return;
    }
}

loc_802D4144:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 960), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

}

extern "C" void func_802D4108(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802D4108_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D4108 func_802D4108 preserves=true fpr_mask=0x00000000
