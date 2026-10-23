#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803B5F8C_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t ctr = ctx->ctr;

    goto loc_803B5F8C;

loc_803B5F8C:
{
    r5 = 0x806C0000u;
    r5 = (r5 + 31960);
    r5 = (r5 + 148);
    r3 = (r3 & 65535);
    r0 = 3;
    ctr = r0;
}

loc_803B5FA4:
{
    r0 = MemoryInline::FlatRead32(r5);
    r0 = (r0 & 8192);
}

loc_803B5FB0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8192))) {
        goto loc_803B5FD8;
    }
}

loc_803B5FB4:
{
    r0 = MemoryInline::FlatRead16((r5 + 4));
}

loc_803B5FBC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_803B5FD8;
    }
}

loc_803B5FC0:
{
}

loc_803B5FC4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803B5FD0;
    }
}

loc_803B5FC8:
{
    r0 = MemoryInline::FlatRead16((r5 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
}

loc_803B5FD0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return r3;
}

loc_803B5FD8:
{
    r5 = (r5 + 96);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803B5FA4;
    }
}

loc_803B5FE0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_803B5F8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803B5F8C_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803B5F8C func_803B5F8C preserves=true fpr_mask=0x00000000
