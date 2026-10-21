#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80533BE0_ra38_6_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t stackword1 = 0;
    uint32_t stackword2 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;

    MKW_GUEST_ENTER(0x80533BE0u);
    goto loc_80533BE0;

loc_80533BE0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = MemoryInline::FlatRead32((r4 + 60));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & 15);
}

loc_80533BF0:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r0))) {
        goto loc_80533C04;
    }
}

loc_80533BF4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1256));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    goto loc_80533C48;
}

loc_80533C04:
{
    r0 = (r5 * 28);
    r5 = 1127219200;
    r4 = MemoryInline::FlatRead32((r4 + 64));
    stackword1 = r5;
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r6 = (r4 + r0);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -1240));
    r4 = MemoryInline::FlatRead16((r6 + 10));
    r0 = MemoryInline::FlatRead16((r6 + 8));
    stackword2 = r4;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword2));
    stackword3 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    stackword4 = r5;
    MemoryInline::FlatWriteRam32((r1 + 16), r5);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword3));
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
}

loc_80533C48:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return r4;
}

}

extern "C" void func_80533BE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80533BE0_ra38_6_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x00000073 gpr_return=0x00000010 fpr_read=0x00000006 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80533BE0 func_80533BE0 preserves=true fpr_mask=0x00000000
