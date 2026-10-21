#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_80569C9C_ra0_0_0_2(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r2 = ctx->gpr[2];
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x80569C9Cu);
    goto loc_80569C9C;

loc_80569C9C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -844));
    return f1.d;
}

}

extern "C" void func_80569C9C(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_80569C9C_ra0_0_0_2(ctx);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000004 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80569C9C func_80569C9C preserves=true fpr_mask=0x00000000
