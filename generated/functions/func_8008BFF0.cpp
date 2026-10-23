#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008BFF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8008BFF0;

loc_8008BFF0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    // inline leaf 0x8008C020 (2 guest instruction(s))
    // psq_load w=1 quant=2 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLInline<1u, 2u>(ctx, r3));
    // end of inlined leaf 0x8008C020
    MemoryInline::FlatWriteFloat32(r31, PPC_PsToScalarInline(f1.d));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_8008BFF0_statefree(uint32_t native_r1, uint32_t native_r3, uint32_t native_r4, uint32_t native_lr, uint32_t native_gqr2)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r1 = native_r1;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r31 = 0;
    PPC_FPR cached_f1 = PPC_FPR{};

    goto loc_8008BFF0;

loc_8008BFF0:
{
    MemoryInline::FlatWriteRam32((cached_r1 + -16), cached_r1);
    cached_r1 = (cached_r1 + -16);
    cached_r0 = native_lr;
    MemoryInline::FlatWriteRam32((cached_r1 + 20), cached_r0);
    cached_r31 = cached_r4;
    // inline leaf 0x8008C020 (2 guest instruction(s))
    // psq_load w=1 quant=2 (using PPC_PsqL)
    PpcSetPairedFprInline(cached_f1, PPC_PsqLStateInline<1u, 2u, false>(native_gqr2, cached_r3));
    // end of inlined leaf 0x8008C020
    MemoryInline::FlatWriteFloat32(cached_r31, PPC_PsToScalarInline(cached_f1.d));
    cached_r0 = MemoryInline::FlatRead32((cached_r1 + 20));
    native_lr = cached_r0;
    cached_r1 = (cached_r1 + 16);

return static_cast<uint64_t>(cached_r1);
}


    return static_cast<uint64_t>(cached_r1);
}
// RECOMP_STATE_FREE_ABI address=0x8008BFF0 symbol=func_8008BFF0_statefree gpr_in=0x0000001A gpr_out=0x00000002 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x04 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=1


// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x00000003 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008BFF0 func_8008BFF0 preserves=true fpr_mask=0x00000000


extern "C" double func_8008BFF0_ra18_0_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_8008BFF0(ctx);
    return ctx->fpr[1].d;
}
