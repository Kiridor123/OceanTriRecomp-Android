#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_801FDF18_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_801FDF18;

loc_801FDF18:
{
    r0 = MemoryInline::FlatRead32((r3 + 44));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (r0 - r6);
    MemoryInline::FlatWrite32((r3 + 468), r0);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r0));
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r3 + 488), r0);
    MemoryInline::FlatWrite16((r3 + 484), static_cast<uint16_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return r4;
}

}

extern "C" void func_801FDF18(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_801FDF18_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000051 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801FDF18 func_801FDF18 preserves=true fpr_mask=0x00000000
