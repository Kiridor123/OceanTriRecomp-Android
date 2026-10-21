#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809EF994(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x809EF994u);
    goto loc_809EF994;

loc_809EF994:
{
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -6520));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8050151Cu>(ctx);
    f1 = ctx->fpr[1];
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000002 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809EF994 func_809EF994 preserves=true fpr_mask=0x00000000
