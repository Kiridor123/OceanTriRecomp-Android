#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8049AE2C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x8049AE2Cu);
    goto loc_8049AE2C;

loc_8049AE2C:
{
    r4 = (r5 ^ r4);
    r6 = 0;
    r0 = (r4 & 1);
}

loc_8049AE38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049AE4C;
    }
}

loc_8049AE3C:
{
    r0 = (r5 & 1);
}

loc_8049AE40:
{
    r6 = (r6 | 16);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049AE4C;
    }
}

loc_8049AE48:
{
    r6 = (r6 | 2048);
}

loc_8049AE4C:
{
    r0 = (r4 & 2);
}

loc_8049AE50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049AE64;
    }
}

loc_8049AE54:
{
    r0 = (r5 & 2);
}

loc_8049AE58:
{
    r6 = (r6 | 8);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049AE64;
    }
}

loc_8049AE60:
{
    r6 = (r6 | 1024);
}

loc_8049AE64:
{
    r0 = (r4 & 4);
}

loc_8049AE68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049AE70;
    }
}

loc_8049AE6C:
{
    r6 = (r6 | 256);
}

loc_8049AE70:
{
    r0 = (r4 & 8);
}

loc_8049AE74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049AE88;
    }
}

loc_8049AE78:
{
    r0 = (r5 & 8);
}

loc_8049AE7C:
{
    r6 = (r6 | 32);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049AE88;
    }
}

loc_8049AE84:
{
    r6 = (r6 | 4096);
}

loc_8049AE88:
{
    r0 = MemoryInline::FlatRead32((r3 + 136));
    r3 = (r0 & r6);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8049AE2C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8049AE2C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000059 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8049AE2C func_8049AE2C preserves=true fpr_mask=0x00000000
