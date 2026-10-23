#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800624B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_800624B0;

loc_800624B0:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r13 + -31928));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r3);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80061F28u>(ctx);
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFC fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800624B0 func_800624B0 preserves=true fpr_mask=0x00000000
