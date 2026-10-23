#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804473DC_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_804473DC;

loc_804473DC:
{
    r0 = MemoryInline::FlatRead8((r3 + 13));
}

loc_804473E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804473F4;
    }
}

loc_804473E8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    goto loc_80447D90;
}

loc_804473F4:
{
    r3 = 1;
    goto loc_80447D94;
}

loc_80447D90:
{
    r3 = 0;
}

loc_80447D94:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return r3;
}

}

extern "C" void func_804473DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804473DC_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0xC000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804473DC func_804473DC preserves=true fpr_mask=0x00000000
