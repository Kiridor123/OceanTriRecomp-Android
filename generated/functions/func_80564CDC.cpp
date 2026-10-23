#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_80564CDC_ra8_0_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r3 = arg_r3;
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_80564CDC;

loc_80564CDC:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 6920));
    return f1.d;
}

}

extern "C" void func_80564CDC(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_80564CDC_ra8_0_0_2(ctx, ctx->gpr[3]);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80564CDC func_80564CDC preserves=true fpr_mask=0x00000000
