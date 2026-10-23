#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800D4E00_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];

    goto loc_800D4E00;

loc_800D4E00:
{
    r4 = MemoryInline::FlatRead32((r13 + -17584));
    r0 = (r3 * 76);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 12400));
}

loc_800D4E14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D4E20;
    }
}

loc_800D4E18:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return r3;
}

loc_800D4E20:
{
    r0 = MemoryInline::FlatRead32((r3 + 12404));
}

loc_800D4E28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D4E34;
    }
}

loc_800D4E2C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return r3;
}

loc_800D4E34:
{
    r3 = (r3 + 12408);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return r3;
}

}

extern "C" void func_800D4E00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800D4E00_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D4E00 func_800D4E00 preserves=true fpr_mask=0x00000000
