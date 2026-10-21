#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011E6BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t stackword1 = 0;
    uint32_t stackword2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x8011E6BCu);
    goto loc_8011E6BC;

loc_8011E6BC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = MemoryInline::FlatRead32((r3 + 1952));
}

loc_8011E6C8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r5))) {
        goto loc_8011E6D0;
    }
}

loc_8011E6CC:
{
    r5 = r0;
}

loc_8011E6D0:
{
    r0 = MemoryInline::FlatRead32((r3 + 1952));
    r0 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 1952), r0);
}

loc_8011E6E0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8011E6F0;
    }
}

loc_8011E6E4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 1952), r0);
    goto loc_8011E6FC;
}

loc_8011E6F0:
{
}

loc_8011E6F4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r5))) {
        goto loc_8011E6FC;
    }
}

loc_8011E6F8:
{
    MemoryInline::FlatWrite32((r3 + 1952), r5);
}

loc_8011E6FC:
{
    r0 = MemoryInline::FlatRead32((r3 + 1956));
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
    r4 = fctiwzword0;
    r0 = MemoryInline::FlatRead32((r3 + 1952));
}

loc_8011E738:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r4))) {
        goto loc_8011E740;
    }
}

loc_8011E73C:
{
    MemoryInline::FlatWrite32((r3 + 1952), r4);
}

loc_8011E740:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x00000033 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8011E6BC func_8011E6BC preserves=true fpr_mask=0x00000000
