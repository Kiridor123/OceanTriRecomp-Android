#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8004D7D8_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x8004D7D8u);
    goto loc_8004D7D8;

loc_8004D7D8:
{
    r6 = MemoryInline::FlatRead32((r13 + -17824));
    r5 = MemoryInline::FlatRead16((r6 + 21218));
    r4 = 1;
    r0 = (r3 + -9000);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r0 & 65535);
    r0 = (r5 | r0);
    MemoryInline::FlatWrite16((r6 + 21218), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r4;
}

}

extern "C" void func_8004D7D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8004D7D8_ra8_0_10_0(ctx, ctx->gpr[3]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004D7D8 func_8004D7D8 preserves=true fpr_mask=0x00000000
