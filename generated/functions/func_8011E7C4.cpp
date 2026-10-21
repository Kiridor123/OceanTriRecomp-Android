#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_8011E7C4_ra18_2_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t stackword1 = 0;
    uint32_t stackword2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;

    MKW_GUEST_ENTER(0x8011E7C4u);
    goto loc_8011E7C4;

loc_8011E7C4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
}

loc_8011E7CC:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_8011E7DC;
    }
}

loc_8011E7D0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 1952), r0);
    goto loc_8011E834;
}

loc_8011E7DC:
{
    r0 = MemoryInline::FlatRead32((r3 + 1956));
}

loc_8011E7E4:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_8011E7F0;
    }
}

loc_8011E7E8:
{
    MemoryInline::FlatWrite32((r3 + 1952), r0);
    goto loc_8011E834;
}

loc_8011E7F0:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -28304));
    r0 = (r0 ^ -2147483648);
    stackword1 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword2 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword1));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1968));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
}

loc_8011E824:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_8011E830;
    }
}

loc_8011E828:
{
    MemoryInline::FlatWrite32((r3 + 1952), r0);
    goto loc_8011E834;
}

loc_8011E830:
{
    MemoryInline::FlatWrite32((r3 + 1952), r4);
}

loc_8011E834:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    return f1.d;
}

}

extern "C" void func_8011E7C4(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_8011E7C4_ra18_2_0_2(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x00000003 gpr_return=0x00000000 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8011E7C4 func_8011E7C4 preserves=true fpr_mask=0x00000000
