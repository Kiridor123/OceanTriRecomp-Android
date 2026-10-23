#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80500770_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r5_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];

    goto loc_80500770;

loc_80500770:
{
    r5 = 0x80760000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 510);
    r5 = (r5 + 12488);
    r5_addr_0 = (r5 + r0);
    MemoryInline::FlatWrite16(r5_addr_0, static_cast<uint16_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return;
}

}

extern "C" void func_80500770(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80500770_ra18_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80500770 func_80500770 preserves=true fpr_mask=0x00000000
