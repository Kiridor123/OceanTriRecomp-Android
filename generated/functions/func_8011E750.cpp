#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011E750(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t stackword2 = 0;
    uint32_t stackword3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_8011E750;

loc_8011E750:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r6 = 0x80660000u;
    r6 = (r6 + -21920);
    r6 = MemoryInline::FlatRead32((r6 + 12));
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0 = PPC_Divwu(static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
    r0 = (r0 * r5);
    r0 = (r6 - r0);
}

loc_8011E77C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8011E7B4;
    }
}

loc_8011E780:
{
    r0 = MemoryInline::FlatRead32((r3 + 1956));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -28304));
    r0 = (r0 ^ -2147483648);
    stackword2 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword3 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword2));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r5 = fctiwzword0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8011E6BCu>(ctx);
}

loc_8011E7B4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x00000063 gpr_return=0x00000000 fpr_read=0x00000007 fpr_write=0x00000005 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8011E750 func_8011E750 preserves=true fpr_mask=0x00000000
