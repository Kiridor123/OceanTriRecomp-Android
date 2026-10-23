#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80087AF4_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_80087AF4;

loc_80087AF4:
{
    r6 = 0;
    r5 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80087B04:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_80087B2C;
    }
}

loc_80087B08:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80087B14:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_80087B2C;
    }
}

loc_80087B18:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = MemoryInline::FlatRead32((r4 + 8));
}

loc_80087B24:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80087B2C;
    }
}

loc_80087B28:
{
    r6 = 1;
}

loc_80087B2C:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_80087AF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80087AF4_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80087AF4 func_80087AF4 preserves=true fpr_mask=0x00000000
