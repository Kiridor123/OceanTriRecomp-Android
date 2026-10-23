#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804CCF60_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_804CCF60;

loc_804CCF60:
{
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r6 = (r6_rot_0 & 31);
    r4 = (r4 & 536870911);
    r6 = (r6 | r4);
    // mtspr 922 (unknown SPR) @ 0x804CCF6C
    PPC_WriteSpr(922, r6);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r6 = (r6_rot_1 & 12);
    r6 = (r6 | r3);
    r6 = (r6 | 18);
    // mtspr 923 (unknown SPR) @ 0x804CCF7C
    PPC_WriteSpr(923, r6);
    ctx->gpr[6] = r6;
    return r4;
}

}

extern "C" void func_804CCF60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804CCF60_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000050 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CCF60 func_804CCF60 preserves=true fpr_mask=0x00000000
