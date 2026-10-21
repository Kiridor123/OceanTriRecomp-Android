#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_8026A548_ra8_0_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r3 = arg_r3;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x8026A548u);
    goto loc_8026A548;

loc_8026A548:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 60));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 120));
    f0.d = MH3_PerStep(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 60), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 124));
    f0.d = MH3_PerStep(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 64), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 68));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 128));
    f0.d = MH3_PerStep(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 68), f0.d);
    ctx->fpr[0] = f0;
    return f1.d;
}

}

extern "C" void func_8026A548(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_8026A548_ra8_0_0_2(ctx, ctx->gpr[3]);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8026A548 func_8026A548 preserves=true fpr_mask=0x00000000
