#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B7084_ra8_4_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f2)
{
    uint32_t cr0_0 = 0;

    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2; f2.d = arg_f2;
    uint32_t cr = ctx->cr;

    goto loc_801B7084;

loc_801B7084:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 396));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19880));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 880));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_801B7098:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_801B709C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -19876));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 396), f0.d);
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

extern "C" void func_801B7084(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_801B7084_ra8_4_0_0(ctx, ctx->gpr[3], ctx->fpr[2].d);
}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000004 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801B7084 func_801B7084 preserves=true fpr_mask=0x00000000
