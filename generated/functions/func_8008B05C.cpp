#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8008B05C_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r3 = arg_r3;
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x8008B05Cu);
    goto loc_8008B05C;

loc_8008B05C:
{
    r3 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32(r3);
    ctx->fpr[1] = f1;
    return r3;
}

}

extern "C" void func_8008B05C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8008B05C_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008B05C func_8008B05C preserves=true fpr_mask=0x00000000
