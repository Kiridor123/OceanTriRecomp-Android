#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_80135510_ra8_0_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r3 = arg_r3;
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x80135510u);
    goto loc_80135510;

loc_80135510:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 788));
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80130460u>(ctx);
    r3 = ctx->gpr[3];
    f1 = ctx->fpr[1];
    return f1.d;
}

}

extern "C" void func_80135510(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_80135510_ra8_0_0_2(ctx, ctx->gpr[3]);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFD fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80135510 func_80135510 preserves=true fpr_mask=0x00000000
