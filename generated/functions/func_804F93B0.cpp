#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_804F93B0_ra38_196_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f4, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t stackword1 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword2 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x804F93B0u);
    goto loc_804F93B0;

loc_804F93B0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r9 = 1127219200;
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -1600), 0, 20u, true, false);
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -1592));
    r10 = MemoryInline::FlatRead16(r6);
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f9.d = f8.d;
    r8 = (r10 ^ -2147483648);
    stackword1 = r9;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 16u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 8), r9);
    r0 = (r0 ^ -2147483648);
    r7 = MemoryInline::FlatRead16(r4);
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    stackword2 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r1 + 12), r0);
    r0 = MemoryInline::FlatRead16((r6 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f10.d = f8.d;
    stackword3 = r9;
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 16), r9);
    r9 = (r7 ^ -2147483648);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword2));
    stackword4 = r8;
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 20), r8);
    r8 = (r0 ^ -2147483648);
    r0 = MemoryInline::FlatRead16(r5);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword4));
    f6.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 0u, (r2 + -1600));
    r7 = (r0 ^ -2147483648);
    stackword5 = r8;
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 20), r8);
    r0 = MemoryInline::FlatRead16((r6 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    stackword6 = r9;
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r1 + 12), r9);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f6.d));
    f4.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword5));
    r0 = (r0 ^ -2147483648);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword6));
    stackword7 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 20), r0);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    stackword8 = r7;
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r1 + 12), r7);
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword7));
    f3.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword8));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -1588));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f6.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f6.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f6.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    SetCRFloatResident(cr, 0, f7.d, f0.d);
}

loc_804F945C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804F9468;
    }
}

loc_804F9460:
{
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -1584));
    f7.d = (-(f7.d));
}

loc_804F9468:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -1588));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_804F9470:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804F947C;
    }
}

loc_804F9474:
{
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -1584));
    f4.d = (-(f4.d));
}

loc_804F947C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -1588));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_804F9484:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804F9490;
    }
}

loc_804F9488:
{
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -1584));
    f2.d = (-(f2.d));
}

loc_804F9490:
{
    SetCRFloatResident(cr, 0, f7.d, f1.d);
}

loc_804F9494:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804F949C;
    }
}

loc_804F9498:
{
    f7.d = f1.d;
}

loc_804F949C:
{
    SetCRFloatResident(cr, 0, f4.d, f1.d);
}

loc_804F94A0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804F94A8;
    }
}

loc_804F94A4:
{
    f4.d = f1.d;
}

loc_804F94A8:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_804F94AC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804F94B4;
    }
}

loc_804F94B0:
{
    f2.d = f1.d;
}

loc_804F94B4:
{
    r0 = (r10 ^ -2147483648);
    stackword9 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r1 + 12), r0);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 0u, (r2 + -1600));
    f7.d = PpcFmulsInline(f7.d, f8.d);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword9));
    f4.d = PpcFmulsInline(f4.d, f9.d);
    f2.d = PpcFmulsInline(f2.d, f10.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f7.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r6 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    stackword10 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 20), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword10));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r6 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    stackword11 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r1 + 12), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword11));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword2;
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->cr = cr;
    return f1.d;
}

}

extern "C" void func_804F93B0(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_804F93B0_ra38_196_0_2(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[4].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000047E gpr_write=0x00000783 gpr_return=0x00000000 fpr_read=0x00000796 fpr_write=0x000007FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804F93B0 func_804F93B0 preserves=true fpr_mask=0x00000000
