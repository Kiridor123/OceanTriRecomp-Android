#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804E0F10_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0_rot_0 = 0;
    uint32_t stackword1 = 0;
    uint32_t stackword2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    MKW_GUEST_ENTER(0x804E0F10u);
    goto loc_804E0F10;

loc_804E0F10:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = 1127219200;
    f2.d = MemoryInline::FlatReadFloat64((r2 + -1808));
    r4 = MemoryInline::FlatRead32((r3 + 28));
    stackword1 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryInline::FlatRead16((r4 + 2));
    stackword2 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1812));
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword2));
    r5 = MemoryInline::FlatRead32((r3 + 20));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    r0 = MemoryInline::FlatRead8((r3 + 13));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 44), f0.d);
    r4 = MemoryInline::FlatRead8(r5);
    r0 = (r0 - r4);
    r4 = (r0 * 100);
    MemoryInline::FlatWrite32((r3 + 48), r4);
    r0 = MemoryInline::FlatRead16((r5 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r4 + r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_0 & -65536);
    MemoryInline::FlatWrite32((r3 + 48), r0);
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return r4;
}

}

extern "C" void func_804E0F10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804E0F10_ra8_0_10_0(ctx, ctx->gpr[3]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x00000033 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804E0F10 func_804E0F10 preserves=true fpr_mask=0x00000000
