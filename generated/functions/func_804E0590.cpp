#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804685F8(CpuContext* ctx);
extern "C" uint64_t func_804685F8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804E0590_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lfsx_804E0698_loc_0 = 0;
    uint32_t addr_lfsx_804E07B0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
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
    uint32_t xer = ctx->xer;

    goto loc_804E0590;

loc_804E0590:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 0;
    r31 = r3;
    MemoryInline::FlatWrite32((r3 + 124), r0);
    r0 = 1127219200;
    r5 = MemoryInline::FlatRead32((r3 + 24));
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r30 = MemoryInline::FlatRead32((r5 + 72));
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
}

loc_804E05C8:
{
    MemoryInline::FlatWrite32((r3 + 144), r30);
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_804E083C;
    }
}

loc_804E05D0:
{
    r4 = MemoryInline::FlatRead32((r5 + 48));
    r0 = (r4 + -2147483648);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_804E05DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804E0610;
    }
}

loc_804E05E0:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 120), r0);
    MemoryInline::FlatWrite32((r3 + 124), r30);
    r4 = MemoryInline::FlatRead32((r5 + 52));
    r0 = (r4 + -2147483648);
}

loc_804E05F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_804E070C;
    }
}

loc_804E05FC:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 120), r0);
    r0 = MemoryInline::FlatRead32((r5 + 56));
    MemoryInline::FlatWrite32((r3 + 124), r0);
    goto loc_804E070C;
}

loc_804E0610:
{
    r6 = MemoryInline::FlatRead8((r3 + 14));
    r3 = MemoryInline::FlatRead32((r5 + 64));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804E0624;
    }
}

loc_804E061C:
{
    r4 = 0;
    goto loc_804E06D4;
}

loc_804E0624:
{
    r0 = (r3 + -2147483648);
}

loc_804E062C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_804E0670;
    }
}

loc_804E0630:
{
    r0 = (r4 ^ -2147483648);
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -1832));
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword6));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1848));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -1856));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    ctx->lr = 0x804E0654u;
    if constexpr (KnownRegArgsCpuCall<0x804685F8u>(&func_804685F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_804685F8_11FC = func_804685F8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804685F8_11FC);
        r4 = static_cast<uint32_t>(regargs_result_804685F8_11FC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        InvokeDirectCpu<0x804685F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    }
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1844));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r4 = fctiwzword0;
    goto loc_804E06D4;
}

loc_804E0670:
{
    r0 = (r3 ^ -2147483648);
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r4 = (r4 ^ -2147483648);
    r3 = 0x80630000u;
    f4.d = MemoryInline::FlatReadFloat64((r2 + -1832));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword7));
    r3 = (r3 + -22176);
    stackword8 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    addr_lfsx_804E0698_loc_0 = (r3 + r0);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_804E0698_loc_0);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword8));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1840));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -1856));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    ctx->lr = 0x804E06BCu;
    if constexpr (KnownRegArgsCpuCall<0x804685F8u>(&func_804685F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_804685F8_1F5D = func_804685F8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804685F8_1F5D);
        r4 = static_cast<uint32_t>(regargs_result_804685F8_1F5D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        InvokeDirectCpu<0x804685F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    }
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1844));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r4 = fctiwzword1;
}

loc_804E06D4:
{
    r3 = 1431633920;
    r0 = (r3 + 21846);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
    r0 = (r3 + r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E0700;
    }
}

loc_804E06EC:
{
    r3 = PPC_Divw(static_cast<int32_t>(r30), static_cast<int32_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 120), r0);
    MemoryInline::FlatWrite32((r31 + 128), r3);
    goto loc_804E070C;
}

loc_804E0700:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 128), r30);
    MemoryInline::FlatWrite32((r31 + 120), r0);
}

loc_804E070C:
{
    r0 = MemoryInline::FlatRead32((r31 + 120));
}

loc_804E0714:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_804E0828;
    }
}

loc_804E0718:
{
    r4 = MemoryInline::FlatRead32((r31 + 24));
    r5 = MemoryInline::FlatRead8((r31 + 13));
    r3 = MemoryInline::FlatRead32((r4 + 52));
    r4 = MemoryInline::FlatRead32((r4 + 68));
    r0 = (r3 + -2147483648);
}

loc_804E0730:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_804E073C;
    }
}

loc_804E0734:
{
    r4 = 0;
    goto loc_804E07EC;
}

loc_804E073C:
{
    r0 = (r4 + -2147483648);
}

loc_804E0744:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_804E0788;
    }
}

loc_804E0748:
{
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -1832));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1848));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -1856));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    ctx->lr = 0x804E076Cu;
    if constexpr (KnownRegArgsCpuCall<0x804685F8u>(&func_804685F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_804685F8_3008 = func_804685F8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804685F8_3008);
        r4 = static_cast<uint32_t>(regargs_result_804685F8_3008 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        InvokeDirectCpu<0x804685F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    }
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1844));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword2;
    goto loc_804E07EC;
}

loc_804E0788:
{
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r3 ^ -2147483648);
    r3 = 0x80630000u;
    f4.d = MemoryInline::FlatReadFloat64((r2 + -1832));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & 1020);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r3 = (r3 + -22176);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    addr_lfsx_804E07B0_loc_0 = (r3 + r0);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_804E07B0_loc_0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1840));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -1856));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    ctx->lr = 0x804E07D4u;
    if constexpr (KnownRegArgsCpuCall<0x804685F8u>(&func_804685F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_804685F8_3C97 = func_804685F8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804685F8_3C97);
        r4 = static_cast<uint32_t>(regargs_result_804685F8_3C97 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        InvokeDirectCpu<0x804685F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    }
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1844));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword3;
}

loc_804E07EC:
{
    r3 = 1431633920;
    r0 = (r3 + 21846);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & 1);
    r3 = (r3 + r0);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804E0814;
    }
}

loc_804E0804:
{
    r0 = MemoryInline::FlatRead32((r31 + 144));
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r3));
    MemoryInline::FlatWrite32((r31 + 132), r0);
    goto loc_804E081C;
}

loc_804E0814:
{
    r0 = MemoryInline::FlatRead32((r31 + 144));
    MemoryInline::FlatWrite32((r31 + 132), r0);
}

loc_804E081C:
{
    r0 = MemoryInline::FlatRead32((r31 + 132));
    r0 = (0 - r0);
    MemoryInline::FlatWrite32((r31 + 132), r0);
}

loc_804E0828:
{
    r3 = MemoryInline::FlatRead32((r31 + 24));
    r0 = MemoryInline::FlatRead32((r3 + 56));
    MemoryInline::FlatWrite32((r31 + 136), r0);
    r0 = MemoryInline::FlatRead32((r3 + 60));
    MemoryInline::FlatWrite32((r31 + 140), r0);
}

loc_804E083C:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_804E0590(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804E0590_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804E0590 func_804E0590 preserves=true fpr_mask=0x00000000
