#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800AE2FC_ra18_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1)
{
    uint32_t r3 = arg_r3;
    PPC_FPR f1; f1.d = arg_f1;
    ctx->gpr[4] = arg_r4;

    goto loc_800AE2FC;

loc_800AE2FC:
{
    MemoryInline::FlatWriteFloat32((r3 + 136), f1.d);
    r3 = (r3 + 140);
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    return r3;
}

}

extern "C" void func_800AE2FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800AE2FC_ra18_2_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000002 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800AE2FC func_800AE2FC preserves=true fpr_mask=0x00000000
