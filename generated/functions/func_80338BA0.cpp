#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80338BA0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x80338BA0u);
    goto loc_80338BA0;

loc_80338BA0:
{
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r0 & 255);
}

loc_80338C70:
{
    r7 = (r4 & 255);
    r6 = (r13 + -17040);
    r6_addr_0 = (r6 + r7);
    r5 = MemoryInline::FlatRead8(r6_addr_0);
    r4 = 1;
    r0 = (r3 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r0 & 255);
    r0 = (r5 | r0);
    r6_addr_1 = (r6 + r7);
    MemoryInline::FlatWrite8(r6_addr_1, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80338BA0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80338BA0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002018 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80338BA0 func_80338BA0 preserves=true fpr_mask=0x00000000
