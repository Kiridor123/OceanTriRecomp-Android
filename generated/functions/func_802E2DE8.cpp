#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802E2DE8_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword13 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_802E2DE8;

loc_802E2DE8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r29 = r3;
    r0 = 1127219200;
    stackword6 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r0);
    r0 = 1127219200;
    stackword7 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r0);
    r30 = MemoryInline::FlatRead32((r4 + 4));
    r31 = r30;
    r28 = MemoryInline::FlatRead16((r4 + 2));
    r28 = (r28 << 16);
    r28 = (static_cast<int32_t>(r28) >> 16);
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 & 32768);
}

loc_802E2E30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802E2E4C;
    }
}

loc_802E2E34:
{
    r0 = (r28 + -1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r30_addr_1 = (r30 + r0);
    r3 = MemoryInline::FlatRead16(r30_addr_1);
    r4 = (r5 & 65535);
    // inline leaf 0x802E2750 (8 guest instruction(s))
    r4 = (r4 & 65535);
    r3 = (r3 & 65535);
    r3 = (r3 + 1);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
    r3 = (r0 & 65535);
    // end of inlined leaf 0x802E2750
    r5 = r3;
}

loc_802E2E4C:
{
    r3 = (r5 & 65535);
}

loc_802E2E54:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802E2E6C;
    }
}

loc_802E2E58:
{
    r3 = r29;
    r4 = (r30 + 4);
    // inline leaf 0x802A25B4 (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x802A25B4
    r3 = 1;
    goto loc_802E2F98;
}

loc_802E2E6C:
{
    r4 = MemoryInline::FlatRead16(r30);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
}

loc_802E2E74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802E2E8C;
    }
}

loc_802E2E78:
{
    r3 = r29;
    r4 = (r30 + 4);
    // inline leaf 0x802A25B4 (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x802A25B4
    r3 = 1;
    goto loc_802E2F98;
}

loc_802E2E8C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_802E2EC0;
    }
}

loc_802E2E90:
{
    r28 = (r28 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
}

loc_802E2E9C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802E2EB4;
    }
}

loc_802E2EA0:
{
    r3 = r29;
    r4 = (r30 + 4);
    // inline leaf 0x802A25B4 (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x802A25B4
    r3 = 0;
    goto loc_802E2F98;
}

loc_802E2EB4:
{
    r31 = r30;
    r30 = (r30 + 8);
    goto loc_802E2E6C;
}

loc_802E2EC0:
{
    r0 = MemoryInline::FlatRead16((r31 + 2));
}

loc_802E2EC8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802E2EDC;
    }
}

loc_802E2ECC:
{
    r3 = r29;
    r4 = (r31 + 4);
    // inline leaf 0x802A25B4 (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x802A25B4
    goto loc_802E2F94;
}

loc_802E2EDC:
{
    r5 = MemoryInline::FlatRead16(r31);
    r0 = (r3 - r5);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -12760));
    r0 = (r0 ^ -2147483648);
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r0 = (r4 - r5);
    r0 = (r0 ^ -2147483648);
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword9));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r3 = MemoryInline::FlatRead16((r31 + 4));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -12752));
    stackword10 = r3;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword10));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r0 = MemoryInline::FlatRead16((r30 + 4));
    r0 = (r0 - r3);
    r0 = (r0 ^ -2147483648);
    stackword11 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword11));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r31 + 6));
    stackword12 = r3;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword12));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r0 = MemoryInline::FlatRead16((r30 + 6));
    r0 = (r0 - r3);
    r0 = (r0 ^ -2147483648);
    stackword13 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword13));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite16((r29 + 2), static_cast<uint16_t>(r0));
}

loc_802E2F94:
{
    r3 = 1;
}

loc_802E2F98:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802E2DE8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802E2DE8_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802E2DE8 func_802E2DE8 preserves=true fpr_mask=0x00000000
