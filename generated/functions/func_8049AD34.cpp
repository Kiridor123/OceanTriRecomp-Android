#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8049AD34_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t ctr = ctx->ctr;

    goto loc_8049AD34;

loc_8049AD34:
{
    r5 = 0x80740000u;
    r0 = 5;
    r6 = (r3 & 1);
    r7 = (r3 + -1);
    r5 = (r5 + -3096);
    r8 = 0;
    ctr = r0;
}

loc_8049AD50:
{
    r0 = (r8 & 65535);
    r0 = (r0 * 164);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 105));
    r9 = (r4 + 104);
}

loc_8049AD68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049ADAC;
    }
}

loc_8049AD6C:
{
    r0 = MemoryInline::FlatRead32((r9 + 108));
}

loc_8049AD74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8049ADAC;
    }
}

loc_8049AD78:
{
    r4 = MemoryInline::FlatRead8((r9 + 13));
}

loc_8049AD80:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r3))) {
        goto loc_8049AD8C;
    }
}

loc_8049AD84:
{
    r3 = r9;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8049AD8C:
{
}

loc_8049AD90:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8049ADAC;
    }
}

loc_8049AD94:
{
}

loc_8049AD98:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r7))) {
        goto loc_8049ADAC;
    }
}

loc_8049AD9C:
{
    r0 = (r4 + 1);
    r3 = r9;
    MemoryInline::FlatWrite8((r9 + 13), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8049ADAC:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8049AD50;
    }
}

loc_8049ADB4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8049AD34(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8049AD34_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8049AD34 func_8049AD34 preserves=true fpr_mask=0x00000000
