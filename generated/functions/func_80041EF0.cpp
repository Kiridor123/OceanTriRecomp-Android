#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80041EF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    MKW_GUEST_ENTER(0x80041EF0u);
    goto loc_80041EF0;

loc_80041EF0:
{
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    return;
}

}
extern "C" MKW_PPC_NO_INLINE void func_80041EF0_statefree(uint32_t native_r3, PPC_FPR native_f1, PPC_FPR native_f2, PPC_FPR native_f3)
{

    uint32_t cached_r3 = native_r3;
    PPC_FPR cached_f1 = native_f1;
    PPC_FPR cached_f2 = native_f2;
    PPC_FPR cached_f3 = native_f3;

    MKW_GUEST_ENTER(0x80041EF0u);
    goto loc_80041EF0;

loc_80041EF0:
{
    MemoryInline::FlatWriteFloat32(cached_r3, cached_f1.d);
    MemoryInline::FlatWriteFloat32((cached_r3 + 4), cached_f2.d);
    MemoryInline::FlatWriteFloat32((cached_r3 + 8), cached_f3.d);
    return;
}

}
// RECOMP_STATE_FREE_ABI address=0x80041EF0 symbol=func_80041EF0_statefree gpr_in=0x00000008 gpr_out=0x00000000 fpr_in=0x0000000E fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x0000000E fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80041EF0 func_80041EF0 preserves=true fpr_mask=0x00000000


extern "C" void func_80041EF0_ra8_e_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1, double arg_f2, double arg_f3)
{
    ctx->gpr[3] = arg_r3;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    [[clang::noinline]] func_80041EF0(ctx);
}
