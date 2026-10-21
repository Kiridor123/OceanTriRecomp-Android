#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803CA4F0_ra0_2_0_0(CpuContext* MKW_RESTRICT ctx, double arg_f1)
{
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f1; f1.d = arg_f1;

    MKW_GUEST_ENTER(0x803CA4F0u);
    goto loc_803CA4F0;

loc_803CA4F0:
{
    MemoryInline::FlatWriteFloat32((r13 + -21788), f1.d);
    return;
}

}

extern "C" void func_803CA4F0(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_803CA4F0_ra0_2_0_0(ctx, ctx->fpr[1].d);
}

// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000002 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803CA4F0 func_803CA4F0 preserves=true fpr_mask=0x00000000
