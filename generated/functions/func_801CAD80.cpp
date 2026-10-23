#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801CAD80_ra28_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_801CAD80;

loc_801CAD80:
{
    r0 = MemoryInline::FlatRead16((r3 + 2102));
    r0 = (r0 & 1);
}

loc_801CAD8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801CAEBC;
    }
}

loc_801CAD90:
{
    r0 = 33;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
}

loc_801CAEBC:
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
    return;
}

}

extern "C" void func_801CAD80(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_801CAD80_ra28_0_0_0(ctx, ctx->gpr[3], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x0000002B gpr_write=0xC0000003 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801CAD80 func_801CAD80 preserves=true fpr_mask=0x00000000
