#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80417780_ra8_2_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1)
{
    uint32_t r3 = arg_r3;
    PPC_FPR f1; f1.d = arg_f1;

    MKW_GUEST_ENTER(0x80417780u);
    goto loc_80417780;

loc_80417780:
{
    MemoryInline::FlatWriteFloat32((r3 + 28116), f1.d);
    return;
}

}

extern "C" void func_80417780(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80417780_ra8_2_0_0(ctx, ctx->gpr[3], ctx->fpr[1].d);
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000002 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80417780 func_80417780 preserves=true fpr_mask=0x00000000
