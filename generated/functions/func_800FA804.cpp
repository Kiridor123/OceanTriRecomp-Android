#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800FA804(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t stackword1 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword2 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];

    goto loc_800FA804;

loc_800FA804:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = 1127219200;
    stackword1 = r0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 16u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 8), r0);
    r0 = 1127219200;
    stackword2 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 16), r0);
}

loc_800FA818:
{
    r9 = MemoryInline::FlatRead8(r3);
}

loc_800FA820:
{
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(255))) {
        goto loc_800FA840;
    }
}

loc_800FA824:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 2));
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 3));
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    goto loc_800FA954;
}

loc_800FA840:
{
}

loc_800FA844:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r9))) {
        goto loc_800FA94C;
    }
}

loc_800FA848:
{
    r8 = MemoryInline::FlatRead8((r3 + 4));
}

loc_800FA850:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r8))) {
        goto loc_800FA94C;
    }
}

loc_800FA854:
{
    r0 = (r4 - r9);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -29880));
    r0 = (r0 ^ -2147483648);
    stackword3 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 12), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword3));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r0 = (r8 - r9);
    r0 = (r0 ^ -2147483648);
    stackword4 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 20), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r4 = MemoryInline::FlatRead8((r3 + 1));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -29856));
    stackword5 = r4;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 12), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword5));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r0 = MemoryInline::FlatRead8((r3 + 5));
    r0 = (r0 - r4);
    r0 = (r0 ^ -2147483648);
    stackword6 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 20), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword6));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8((r3 + 2));
    stackword7 = r4;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 12), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword7));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r0 = MemoryInline::FlatRead8((r3 + 6));
    r0 = (r0 - r4);
    r0 = (r0 ^ -2147483648);
    stackword8 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 20), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8((r3 + 3));
    stackword9 = r4;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 12), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword9));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r0 = MemoryInline::FlatRead8((r3 + 7));
    r0 = (r0 - r4);
    r0 = (r0 ^ -2147483648);
    stackword10 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 20), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword10));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword2;
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    goto loc_800FA954;
}

loc_800FA94C:
{
    r3 = (r3 + 4);
    goto loc_800FA818;
}

loc_800FA954:
{
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003FE gpr_write=0x0000031B gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800FA804 func_800FA804 preserves=true fpr_mask=0x00000000
