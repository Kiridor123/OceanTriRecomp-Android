#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FDE00_ra8_2_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1)
{
    uint32_t fctiwzword0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_801FDE00;

loc_801FDE00:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite16((r3 + 482), static_cast<uint16_t>(r0));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 492));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 504), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 496));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 508), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 500));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 512), f0.d);
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    return;
}

}

extern "C" void func_801FDE00(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_801FDE00_ra8_2_0_0(ctx, ctx->gpr[3], ctx->fpr[1].d);
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x00000003 gpr_return=0x00000000 fpr_read=0x00000002 fpr_write=0x00000005 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801FDE00 func_801FDE00 preserves=true fpr_mask=0x00000000
