#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8046ADA8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];

    MKW_GUEST_ENTER(0x8046ADA8u);
    goto loc_8046ADA8;

loc_8046ADA8:
{
    r9 = 0;
    r7 = 0;
    goto loc_8046ADF4;
}

loc_8046ADB4:
{
    r7 = MemoryInline::FlatRead32((r3 + 8));
    r8 = MemoryInline::FlatRead8(r4);
}

loc_8046ADC0:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(2176))) {
        goto loc_8046ADCC;
    }
}

loc_8046ADC4:
{
    r7 = 769;
    goto loc_8046ADEC;
}

loc_8046ADCC:
{
    r6 = (r3 + r7);
    r0 = (r7 + 1);
    MemoryInline::FlatWrite8((r6 + 12), static_cast<uint8_t>(r8));
    r7 = 0;
    r6 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r0 = (r6 + 1);
    MemoryInline::FlatWrite32((r3 + 4), r0);
}

loc_8046ADEC:
{
    r9 = (r9 + 1);
    r4 = (r4 + 1);
}

loc_8046ADF4:
{
}

loc_8046ADF8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8046AE04;
    }
}

loc_8046ADFC:
{
}

loc_8046AE00:
{
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(r5))) {
        goto loc_8046ADB4;
    }
}

loc_8046AE04:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8046ADA8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046ADA8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8046ADA8 func_8046ADA8 preserves=true fpr_mask=0x00000000
