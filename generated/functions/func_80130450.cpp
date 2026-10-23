#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80130450_ra8_2_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_80130450;

loc_80130450:
{
    MemoryInline::FlatWriteFloat32((r3 + 428), f1.d);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 479), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_80130450(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80130450_ra8_2_0_0(ctx, ctx->gpr[3], ctx->fpr[1].d);
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000002 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80130450 func_80130450 preserves=true fpr_mask=0x00000000
