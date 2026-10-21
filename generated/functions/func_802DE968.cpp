#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802DE968_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x802DE968u);
    goto loc_802DE968;

loc_802DE968:
{
    r0 = (r4 & 255);
    r5 = (r0 * 848);
    r4 = 0x80660000u;
    r0 = (r4 + -18480);
    r5 = (r0 + r5);
    r0 = MemoryInline::FlatRead16((r5 + 708));
    r4 = (r0 & 63);
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead16((r5 + 724));
    r0 = (r0 & 15);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

}

extern "C" void func_802DE968(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802DE968_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802DE968 func_802DE968 preserves=true fpr_mask=0x00000000
