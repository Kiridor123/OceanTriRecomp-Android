#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80099198_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_80099198;

loc_80099198:
{
    r4 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r4 & 2);
}

loc_800991A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800991CC;
    }
}

loc_800991A8:
{
    r0 = (r4 & 4);
}

loc_800991B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800991CC;
    }
}

loc_800991B4:
{
    r0 = (r4 & 8);
}

loc_800991BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800991CC;
    }
}

loc_800991C0:
{
    r0 = (r4 | 1);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    ctx->gpr[0] = r0;
    return r4;
}

loc_800991CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    ctx->gpr[0] = r0;
    return r4;
}

}

extern "C" void func_80099198(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80099198_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80099198 func_80099198 preserves=true fpr_mask=0x00000000
