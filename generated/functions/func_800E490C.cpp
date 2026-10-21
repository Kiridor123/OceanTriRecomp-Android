#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E490C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x800E490Cu);
    goto loc_800E490C;

loc_800E490C:
{
    MemoryInline::FlatWriteFloat32((r13 + -17488), f1.d);
    return;
}

}
extern "C" MKW_PPC_NO_INLINE void func_800E490C_statefree(uint32_t native_r13, PPC_FPR native_f1)
{

    uint32_t cached_r13 = native_r13;
    PPC_FPR cached_f1 = native_f1;

    MKW_GUEST_ENTER(0x800E490Cu);
    goto loc_800E490C;

loc_800E490C:
{
    MemoryInline::FlatWriteFloat32((cached_r13 + -17488), cached_f1.d);
    return;
}

}
// RECOMP_STATE_FREE_ABI address=0x800E490C symbol=func_800E490C_statefree gpr_in=0x00002000 gpr_out=0x00000000 fpr_in=0x00000002 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000002 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E490C func_800E490C preserves=true fpr_mask=0x00000000


extern "C" void func_800E490C_ra0_2_0_0(CpuContext* MKW_RESTRICT ctx, double arg_f1)
{
    ctx->fpr[1].d = arg_f1;
    [[clang::noinline]] func_800E490C(ctx);
}
