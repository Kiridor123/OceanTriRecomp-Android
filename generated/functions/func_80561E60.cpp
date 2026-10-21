#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80561E60_ra0_2_8_0(CpuContext* MKW_RESTRICT ctx, double arg_f1)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f1; f1.d = arg_f1;

    MKW_GUEST_ENTER(0x80561E60u);
    goto loc_80561E60;

loc_80561E60:
{
    r3 = (r13 + -18240);
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    return r3;
}

}

extern "C" void func_80561E60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80561E60_ra0_2_8_0(ctx, ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000002 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80561E60 func_80561E60 preserves=true fpr_mask=0x00000000
