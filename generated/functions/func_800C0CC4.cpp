#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_800C0CC4_ra8_2_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1)
{
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];

    MKW_GUEST_ENTER(0x800C0CC4u);
    goto loc_800C0CC4;

loc_800C0CC4:
{
    f5.d = f1.d;
    f4.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -30936));
    f3.d = PpcFmulsInline(f2.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30932));
    f0.d = PpcFmulsInline(f0.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    return f1.d;
}

}

extern "C" void func_800C0CC4(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_800C0CC4_ra8_2_0_2(ctx, ctx->gpr[3], ctx->fpr[1].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000002 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800C0CC4 func_800C0CC4 preserves=true fpr_mask=0x00000000
