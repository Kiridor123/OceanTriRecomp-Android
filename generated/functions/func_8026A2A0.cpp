#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026A2A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8026A2A0;

loc_8026A2A0:
{
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = (r3 + 4);
    // inline leaf 0x800E2718 (4 guest instruction(s))
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + r0);
    MemoryInline::FlatWriteFloat32((r3 + 212), f1.d);
    // end of inlined leaf 0x800E2718
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY void func_8026A2A0_statefree_v0(uint32_t native_r3, uint32_t native_r4, PPC_FPR native_f1)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    PPC_FPR cached_f1 = native_f1;

    uint32_t r0_rot_0 = 0;

    goto loc_8026A2A0;

loc_8026A2A0:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 316));
    cached_r3 = (cached_r3 + 4);
    // inline leaf 0x800E2718 (4 guest instruction(s))
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r4), static_cast<uint32_t>(2));
    cached_r0 = (r0_rot_0 & -4);
    cached_r3 = (cached_r3 + cached_r0);
    MemoryInline::FlatWriteFloat32((cached_r3 + 212), cached_f1.d);
    // end of inlined leaf 0x800E2718

    return;
}

}
// RECOMP_STATE_FREE_ABI address=0x8026A2A0 symbol=func_8026A2A0_statefree_v0 gpr_in=0x00000018 gpr_out=0x00000000 fpr_in=0x00000002 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_8026A2A0_statefree(uint32_t native_r3, uint32_t native_r4, PPC_FPR native_f1)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    PPC_FPR cached_f1 = native_f1;

    uint32_t r0_rot_0 = 0;

    goto loc_8026A2A0;

loc_8026A2A0:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 316));
    cached_r3 = (cached_r3 + 4);
    // inline leaf 0x800E2718 (4 guest instruction(s))
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r4), static_cast<uint32_t>(2));
    cached_r0 = (r0_rot_0 & -4);
    cached_r3 = (cached_r3 + cached_r0);
    MemoryInline::FlatWriteFloat32((cached_r3 + 212), cached_f1.d);
    // end of inlined leaf 0x800E2718

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x8026A2A0 symbol=func_8026A2A0_statefree gpr_in=0x00000018 gpr_out=0x00000009 fpr_in=0x00000002 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000002 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8026A2A0 func_8026A2A0 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_8026A2A0_ra18_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    ctx->fpr[1].d = arg_f1;
    [[clang::noinline]] func_8026A2A0(ctx);
    return ctx->gpr[3];
}
