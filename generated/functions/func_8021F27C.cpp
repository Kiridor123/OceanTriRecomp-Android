#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8021F27C_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x8021F27Cu);
    goto loc_8021F27C;

loc_8021F27C:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -12536);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 24));
    ctx->fpr[1] = f1;
    return r3;
}

}

extern "C" void func_8021F27C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8021F27C_ra0_0_8_0(ctx);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8021F27C func_8021F27C preserves=true fpr_mask=0x00000000
