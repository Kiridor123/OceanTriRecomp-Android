#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800BC0D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    MKW_GUEST_ENTER(0x800BC0D4u);
    goto loc_800BC0D4;

loc_800BC0D4:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_800BC0E4:
{
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f3.d));
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE void func_800BC0D4_statefree(uint32_t native_r3)
{

    uint32_t cached_r3 = native_r3;
    PPC_FPR cached_f1 = PPC_FPR{};
    PPC_FPR cached_f2 = PPC_FPR{};
    PPC_FPR cached_f3 = PPC_FPR{};

    MKW_GUEST_ENTER(0x800BC0D4u);
    goto loc_800BC0D4;

loc_800BC0D4:
{
    cached_f1.d = MemoryInline::FlatReadFloat32(cached_r3);
    cached_f2.d = MemoryInline::FlatReadFloat32((cached_r3 + 4));
    cached_f3.d = MemoryInline::FlatReadFloat32((cached_r3 + 8));
}

loc_800BC0E4:
{
    cached_r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(cached_f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(cached_f2.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(cached_f3.d));

return;
}

}
// RECOMP_STATE_FREE_ABI address=0x800BC0D4 symbol=func_800BC0D4_statefree gpr_in=0x00000008 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x0000000E fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800BC0D4 func_800BC0D4 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_800BC0D4_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_800BC0D4(ctx);
    return ctx->gpr[3];
}
