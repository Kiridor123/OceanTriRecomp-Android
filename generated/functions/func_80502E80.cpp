#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80502E80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_80502E80;

loc_80502E80:
{
    // inline leaf 0x804CCF60 (9 guest instruction(s))
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
    // end of inlined leaf 0x804CCF60
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80502E80_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_r5, uint32_t native_lr)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = native_r5;
    uint32_t cached_r6 = 0;

    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;

    goto loc_80502E80;

loc_80502E80:
{
    // inline leaf 0x804CCF60 (9 guest instruction(s))
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r5), static_cast<uint32_t>(30));
    cached_r6 = (r6_rot_0 & 31);
    cached_r4 = (cached_r4 & 536870911);
    cached_r6 = (cached_r6 | cached_r4);
    // mtspr 922 (unknown SPR) @ 0x804CCF6C
    PPC_WriteSpr(922, cached_r6);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(cached_r5), static_cast<uint32_t>(2));
    cached_r6 = (r6_rot_1 & 12);
    cached_r6 = (cached_r6 | cached_r3);
    cached_r6 = (cached_r6 | 18);
    // mtspr 923 (unknown SPR) @ 0x804CCF7C
    PPC_WriteSpr(923, cached_r6);
    // end of inlined leaf 0x804CCF60

    return { static_cast<uint64_t>(cached_r4), static_cast<uint64_t>(cached_r6) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80502E80 symbol=func_80502E80_statefree gpr_in=0x00000038 gpr_out=0x00000050 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=1


// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000050 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80502E80 func_80502E80 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_80502E80_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    ctx->gpr[5] = arg_r5;
    [[clang::noinline]] func_80502E80(ctx);
    return ctx->gpr[4];
}
