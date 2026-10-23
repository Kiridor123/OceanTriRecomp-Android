#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8050E5F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_8050E5F0;

loc_8050E5F0:
{
}

loc_80512010:
{
    MemoryInline::FlatWrite32((r3 + 32), r4);
    return;
}

}
extern "C" MKW_PPC_NO_INLINE void func_8050E5F0_statefree(uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    goto loc_8050E5F0;

loc_8050E5F0:
{
}

loc_80512010:
{
    MemoryInline::FlatWrite32((cached_r3 + 32), cached_r4);
    return;
}

}
// RECOMP_STATE_FREE_ABI address=0x8050E5F0 symbol=func_8050E5F0_statefree gpr_in=0x00000018 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8050E5F0 func_8050E5F0 preserves=true fpr_mask=0x00000000


extern "C" void func_8050E5F0_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_8050E5F0(ctx);
}
