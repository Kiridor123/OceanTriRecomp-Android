#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800F6B2C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t ctr = ctx->ctr;

    goto loc_800F6B2C;

loc_800F6B2C:
{
    r4 = 0x806A0000u;
    r4 = (r4 + 20916);
    r4 = (r4 + 4);
    r5 = 0;
    r3 = (r3 & 255);
    r0 = 51;
    ctr = r0;
}

loc_800F6B48:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_800F6B50:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_800F6B5C;
    }
}

loc_800F6B54:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800F6B5C:
{
    r4 = (r4 + 24);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_800F6B68:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_800F6B74;
    }
}

loc_800F6B6C:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800F6B74:
{
    r4 = (r4 + 24);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_800F6B80:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_800F6B8C;
    }
}

loc_800F6B84:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800F6B8C:
{
    r4 = (r4 + 24);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_800F6B98:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_800F6BA4;
    }
}

loc_800F6B9C:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800F6BA4:
{
    r4 = (r4 + 24);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_800F6BB0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_800F6BBC;
    }
}

loc_800F6BB4:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800F6BBC:
{
    r5 = (r5 + 4);
    r4 = (r4 + 24);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800F6B48;
    }
}

loc_800F6BC8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800F6B2C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800F6B2C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F6B2C func_800F6B2C preserves=true fpr_mask=0x00000000
