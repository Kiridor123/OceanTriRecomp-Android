#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80466228(CpuContext* ctx);
extern "C" uint64_t func_80466228_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80465D94_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;

    goto loc_80465D94;

loc_80465D94:
{
    MemoryAlias::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    r4 = 1072234496;
    MemoryAlias::FlatWriteRam32((r1 + 100), r0);
    r0 = (r4 + 8699);
    MemoryAlias::FlatWriteRamFloat64((r1 + 8), f1.d);
    r31 = MemoryAlias::FlatRead32((r1 + 8));
    r30 = r3;
    r6 = (r31 & 2147483647);
}

loc_80465DC4:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(r0))) {
        goto loc_80465DDC;
    }
}

loc_80465DC8:
{
    f0.d = MemoryAlias::FlatReadFloat64((r2 + -3400));
    MemoryAlias::FlatWriteFloat64(r3, f1.d);
    MemoryAlias::FlatWriteFloat64((r3 + 8), f0.d);
    r3 = 0;
    goto loc_80466100;
}

loc_80465DDC:
{
    r4 = 1073938432;
    r0 = (r4 + -9860);
}

loc_80465DE8:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r0))) {
        goto loc_80465EA4;
    }
}

loc_80465DEC:
{
}

loc_80465DF0:
{
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(0))) {
        goto loc_80465E4C;
    }
}

loc_80465DF4:
{
    f0.d = MemoryAlias::FlatReadFloat64((r2 + -3392));
    r0 = (r6 + -1073283072);
}

loc_80465E00:
{
    f2.d = (f1.d - f0.d);
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(8699))) {
        goto loc_80465E24;
    }
}

loc_80465E08:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3384));
    f0.d = (f2.d - f1.d);
    MemoryAlias::FlatWriteFloat64(r3, f0.d);
    f0.d = (f2.d - f0.d);
    f0.d = (f0.d - f1.d);
    MemoryAlias::FlatWriteFloat64((r3 + 8), f0.d);
    goto loc_80465E44;
}

loc_80465E24:
{
    f0.d = MemoryAlias::FlatReadFloat64((r2 + -3376));
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3368));
    f2.d = (f2.d - f0.d);
    f0.d = (f2.d - f1.d);
    MemoryAlias::FlatWriteFloat64(r3, f0.d);
    f0.d = (f2.d - f0.d);
    f0.d = (f0.d - f1.d);
    MemoryAlias::FlatWriteFloat64((r3 + 8), f0.d);
}

loc_80465E44:
{
    r3 = 1;
    goto loc_80466100;
}

loc_80465E4C:
{
    f0.d = MemoryAlias::FlatReadFloat64((r2 + -3392));
    r0 = (r6 + -1073283072);
}

loc_80465E58:
{
    f2.d = (f0.d + f1.d);
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(8699))) {
        goto loc_80465E7C;
    }
}

loc_80465E60:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3384));
    f0.d = (f1.d + f2.d);
    MemoryAlias::FlatWriteFloat64(r3, f0.d);
    f0.d = (f2.d - f0.d);
    f0.d = (f1.d + f0.d);
    MemoryAlias::FlatWriteFloat64((r3 + 8), f0.d);
    goto loc_80465E9C;
}

loc_80465E7C:
{
    f0.d = MemoryAlias::FlatReadFloat64((r2 + -3376));
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3368));
    f2.d = (f2.d + f0.d);
    f0.d = (f1.d + f2.d);
    MemoryAlias::FlatWriteFloat64(r3, f0.d);
    f0.d = (f2.d - f0.d);
    f0.d = (f1.d + f0.d);
    MemoryAlias::FlatWriteFloat64((r3 + 8), f0.d);
}

loc_80465E9C:
{
    r3 = -1;
    goto loc_80466100;
}

loc_80465EA4:
{
    r4 = 1094254592;
    r0 = (r4 + 8699);
}

loc_80465EB0:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(r0))) {
        goto loc_80465FF8;
    }
}

loc_80465EB4:
{
    f5.d = std::fabs(f1.d);
    guest_range_0 = MemoryAlias::ResolveRangeHost((r2 + -3392), 0, 80u, true, false);
    f0.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 40u, (r2 + -3352));
    r0 = 1127219200;
    f2.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 32u, (r2 + -3360));
    stackword4 = r0;
    MemoryAlias::FlatWriteRam32((r1 + 56), r0);
    f4.d = (f0.d * f5.d);
    f3.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 72u, (r2 + -3320));
    f1.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 0u, (r2 + -3392));
    f0.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -3384));
    f2.d = (f2.d + f4.d);
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword0 = PPC_FprLowWordInline(f2.d);
    r5 = fctiwzword0;
    r0 = (r5 ^ -2147483648);
    stackword5 = r0;
    MemoryAlias::FlatWriteRam32((r1 + 60), r0);
}

loc_80465EF4:
{
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword5));
    f6.d = (f2.d - f3.d);
    f1.d = (f1.d * f6.d);
    f2.d = (f0.d * f6.d);
    f4.d = (f5.d - f1.d);
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(32))) {
        goto loc_80465F34;
    }
}

loc_80465F0C:
{
    r0 = (r5 + -1);
    r4 = 0x80570000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + 15008);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryAlias::FlatRead32(r4_addr_1);
}

loc_80465F24:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(r0))) {
        goto loc_80465F34;
    }
}

loc_80465F28:
{
    f0.d = (f4.d - f2.d);
    MemoryAlias::FlatWriteFloat64(r3, f0.d);
    goto loc_80465FC0;
}

loc_80465F34:
{
    f0.d = (f4.d - f2.d);
    r4 = (static_cast<int32_t>(r6) >> 20);
    MemoryAlias::FlatWriteFloat64(r3, f0.d);
    r0 = MemoryAlias::FlatRead32(r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r0 = (r0_rot_3 & 2047);
    r0 = (r4 - r0);
}

loc_80465F50:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(16))) {
        goto loc_80465FC0;
    }
}

loc_80465F54:
{
    f1.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 16u, (r2 + -3376));
    f2.d = f4.d;
    f0.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 24u, (r2 + -3368));
    f3.d = (f1.d * f6.d);
    f1.d = (f0.d * f6.d);
    f4.d = (f4.d - f3.d);
    f0.d = (f2.d - f4.d);
    f0.d = (f0.d - f3.d);
    f2.d = (f1.d - f0.d);
    f0.d = (f4.d - f2.d);
    MemoryAlias::FlatWriteFloat64(r3, f0.d);
    r0 = MemoryAlias::FlatRead32(r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r0 = (r0_rot_4 & 2047);
    r0 = (r4 - r0);
}

loc_80465F90:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(49))) {
        goto loc_80465FC0;
    }
}

loc_80465F94:
{
    f1.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 48u, (r2 + -3344));
    f2.d = f4.d;
    f0.d = MemoryAlias::ReadResolvedFloat64(guest_range_0, 56u, (r2 + -3336));
    f3.d = (f1.d * f6.d);
    f1.d = (f0.d * f6.d);
    f4.d = (f4.d - f3.d);
    f0.d = (f2.d - f4.d);
    f0.d = (f0.d - f3.d);
    f2.d = (f1.d - f0.d);
    f0.d = (f4.d - f2.d);
    MemoryAlias::FlatWriteFloat64(r3, f0.d);
}

loc_80465FC0:
{
    f1.d = MemoryAlias::FlatReadFloat64(r3);
}

loc_80465FC8:
{
    f0.d = (f4.d - f1.d);
    f0.d = (f0.d - f2.d);
    MemoryAlias::FlatWriteFloat64((r3 + 8), f0.d);
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(0))) {
        goto loc_80465FF0;
    }
}

loc_80465FD8:
{
    f1.d = (-(f1.d));
    f0.d = (-(f0.d));
    MemoryAlias::FlatWriteFloat64(r3, f1.d);
    MemoryAlias::FlatWriteFloat64((r3 + 8), f0.d);
    r3 = (0 - r5);
    goto loc_80466100;
}

loc_80465FF0:
{
    r3 = r5;
    goto loc_80466100;
}

loc_80465FF8:
{
    r0 = 2146435072;
}

loc_80466000:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r0))) {
        goto loc_80466018;
    }
}

loc_80466004:
{
    f0.d = (f1.d - f1.d);
    MemoryAlias::FlatWriteFloat64((r3 + 8), f0.d);
    MemoryAlias::FlatWriteFloat64(r3, f0.d);
    r3 = 0;
    goto loc_80466100;
}

loc_80466018:
{
    r3 = (static_cast<int32_t>(r6) >> 20);
    r0 = 1127219200;
    r5 = (r3 + -1046);
    r4 = MemoryAlias::FlatRead32((r1 + 12));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(20));
    r3 = (r3_rot_1 & -1048576);
    stackword6 = r4;
    guest_range_1 = MemoryAlias::ResolveRangeHost((r1 + 16), 0, 64u, false, true);
    MemoryAlias::WriteResolved32(guest_range_1, 4u, (r1 + 20), r4);
    r3 = (r6 - r3);
    f4.d = MemoryAlias::FlatReadFloat64((r2 + -3320));
    stackword7 = r3;
    MemoryAlias::WriteResolved32(guest_range_1, 0u, (r1 + 16), r3);
    r3 = (r1 + 48);
    f3.d = MemoryAlias::FlatReadFloat64((r2 + -3328));
    r6 = 3;
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    stackword8 = r0;
    MemoryAlias::WriteResolved32(guest_range_1, 32u, (r1 + 48), r0);
    f0.d = PPC_Fctiwz(f2.d);
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3400));
    stackword9 = r0;
    MemoryAlias::WriteResolved32(guest_range_1, 56u, (r1 + 72), r0);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryAlias::WriteResolvedFloat64(guest_range_1, 40u, (r1 + 56), f0.d);
    r0 = fctiwzword1;
    r0 = (r0 ^ -2147483648);
    stackword10 = r0;
    MemoryAlias::WriteResolved32(guest_range_1, 36u, (r1 + 52), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword8), static_cast<uint32_t>(stackword10));
    f0.d = (f0.d - f4.d);
    MemoryAlias::WriteResolvedFloat64(guest_range_1, 8u, (r1 + 24), f0.d);
    f0.d = (f2.d - f0.d);
    f2.d = (f3.d * f0.d);
    f0.d = PPC_Fctiwz(f2.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryAlias::WriteResolvedFloat64(guest_range_1, 48u, (r1 + 64), f0.d);
    r0 = fctiwzword2;
    r0 = (r0 ^ -2147483648);
    stackword11 = r0;
    MemoryAlias::WriteResolved32(guest_range_1, 60u, (r1 + 76), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword11));
    f0.d = (f0.d - f4.d);
    MemoryAlias::WriteResolvedFloat64(guest_range_1, 16u, (r1 + 32), f0.d);
    f0.d = (f2.d - f0.d);
    f0.d = (f3.d * f0.d);
    MemoryAlias::WriteResolvedFloat64(guest_range_1, 24u, (r1 + 40), f0.d);
    goto loc_804660B8;
}

loc_804660B0:
{
    r3 = (r3 + -8);
    r6 = (r6 + -1);
}

loc_804660B8:
{
    f0.d = MemoryAlias::FlatReadFloat64((r3 + -8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804660C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804660B0;
    }
}

loc_804660C4:
{
    r8 = 0x80570000u;
    r4 = r30;
    r3 = (r1 + 24);
    r7 = 2;
    r8 = (r8 + 14744);
    ctx->lr = 0x804660DCu;
    if constexpr (KnownRegArgsCpuCall<0x80466228u>(&func_80466228)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80466228_312B = func_80466228_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80466228_312B);
        r4 = static_cast<uint32_t>(regargs_result_80466228_312B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80466228u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_804660E0:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(0))) {
        goto loc_80466100;
    }
}

loc_804660E4:
{
    f1.d = MemoryAlias::FlatReadFloat64(r30);
    r3 = (0 - r3);
    f0.d = MemoryAlias::FlatReadFloat64((r30 + 8));
    f1.d = (-(f1.d));
    f0.d = (-(f0.d));
    MemoryAlias::FlatWriteFloat64(r30, f1.d);
    MemoryAlias::FlatWriteFloat64((r30 + 8), f0.d);
}

loc_80466100:
{
    r0 = MemoryAlias::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80465D94(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80465D94_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF8003FF fpr_write=0xFF8003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80465D94 func_80465D94 preserves=true fpr_mask=0x00000000
