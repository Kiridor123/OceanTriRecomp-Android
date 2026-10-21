#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006E6F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x8006E6F4u);
    goto loc_8006E6F4;

loc_8006E6F4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r1 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_8006E6F4_statefree(uint32_t native_r1, PPC_FPR native_f1)
{

    uint32_t cached_r1 = native_r1;
    uint32_t cached_r3 = 0;
    PPC_FPR cached_f1 = native_f1;

    MKW_GUEST_ENTER(0x8006E6F4u);
    goto loc_8006E6F4;

loc_8006E6F4:
{
    MemoryInline::FlatWriteRam32((cached_r1 + -16), cached_r1);
    cached_r1 = (cached_r1 + -16);
    MemoryInline::FlatWriteRamFloat32((cached_r1 + 8), cached_f1.d);
    cached_r3 = MemoryInline::FlatRead32((cached_r1 + 8));
    cached_r1 = (cached_r1 + 16);

    return { static_cast<uint64_t>(cached_r1), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x8006E6F4 symbol=func_8006E6F4_statefree gpr_in=0x00000002 gpr_out=0x0000000A fpr_in=0x00000002 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x0000000A gpr_return=0x00000008 fpr_read=0x00000002 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8006E6F4 func_8006E6F4 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_8006E6F4_ra0_2_8_0(CpuContext* MKW_RESTRICT ctx, double arg_f1)
{
    ctx->fpr[1].d = arg_f1;
    [[clang::noinline]] func_8006E6F4(ctx);
    return ctx->gpr[3];
}
