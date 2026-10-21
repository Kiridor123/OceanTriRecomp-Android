#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804685F8(CpuContext* ctx);
extern "C" uint64_t func_804685F8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804E02D0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lfsx_804E03C0_loc_0 = 0;
    uint32_t addr_lfsx_804E04F8_loc_0 = 0;
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
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
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

    MKW_GUEST_ENTER(0x804E02D0u);
    goto loc_804E02D0;

loc_804E02D0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 1127219200;
    r31 = r3;
    r6 = MemoryInline::FlatRead32((r3 + 24));
    stackword3 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = MemoryInline::FlatRead32((r6 + 24));
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r0 = (r4 + -2147483648);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_804E0300:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804E0338;
    }
}

loc_804E0304:
{
    r4 = 1;
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 92), r4);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    r4 = MemoryInline::FlatRead32((r6 + 28));
    r0 = (r4 + -2147483648);
}

loc_804E0320:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_804E0454;
    }
}

loc_804E0324:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 92), r0);
    r0 = MemoryInline::FlatRead32((r6 + 32));
    MemoryInline::FlatWrite32((r3 + 96), r0);
    goto loc_804E0454;
}

loc_804E0338:
{
    r5 = MemoryInline::FlatRead8((r3 + 14));
    r3 = MemoryInline::FlatRead32((r6 + 40));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804E034C;
    }
}

loc_804E0344:
{
    r4 = 0;
    goto loc_804E03FC;
}

loc_804E034C:
{
    r0 = (r3 + -2147483648);
}

loc_804E0354:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_804E0398;
    }
}

loc_804E0358:
{
    r0 = (r4 ^ -2147483648);
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -1832));
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword5));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1848));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -1856));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    ctx->lr = 0x804E037Cu;
    if constexpr (KnownRegArgsCpuCall<0x804685F8u>(&func_804685F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_804685F8_101F = func_804685F8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804685F8_101F);
        r4 = static_cast<uint32_t>(regargs_result_804685F8_101F >> 32);
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
    goto loc_804E03FC;
}

loc_804E0398:
{
    r0 = (r3 ^ -2147483648);
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r4 = (r4 ^ -2147483648);
    r3 = 0x80630000u;
    f4.d = MemoryInline::FlatReadFloat64((r2 + -1832));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword6));
    r3 = (r3 + -22176);
    stackword7 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    addr_lfsx_804E03C0_loc_0 = (r3 + r0);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_804E03C0_loc_0);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword7));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1840));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -1856));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    ctx->lr = 0x804E03E4u;
    if constexpr (KnownRegArgsCpuCall<0x804685F8u>(&func_804685F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_804685F8_1D21 = func_804685F8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804685F8_1D21);
        r4 = static_cast<uint32_t>(regargs_result_804685F8_1D21 >> 32);
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

loc_804E03FC:
{
    r3 = 1431633920;
    r0 = (r3 + 21846);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
    r3 = (r3 + r0);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804E0438;
    }
}

loc_804E0414:
{
    r0 = 6553600;
    r4 = 0;
    r3 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r3));
    MemoryInline::FlatWrite32((r31 + 100), r4);
    r0 = -62914560;
    MemoryInline::FlatWrite32((r31 + 96), r0);
    MemoryInline::FlatWrite32((r31 + 92), r4);
    MemoryInline::FlatWrite32((r31 + 104), r3);
    goto loc_804E0454;
}

loc_804E0438:
{
    r4 = 0;
    r3 = 6553600;
    r0 = -62914560;
    MemoryInline::FlatWrite32((r31 + 100), r4);
    MemoryInline::FlatWrite32((r31 + 104), r3);
    MemoryInline::FlatWrite32((r31 + 96), r0);
    MemoryInline::FlatWrite32((r31 + 92), r4);
}

loc_804E0454:
{
    r0 = MemoryInline::FlatRead32((r31 + 92));
}

loc_804E045C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_804E0564;
    }
}

loc_804E0460:
{
    r4 = MemoryInline::FlatRead32((r31 + 24));
    r5 = MemoryInline::FlatRead8((r31 + 13));
    r3 = MemoryInline::FlatRead32((r4 + 28));
    r4 = MemoryInline::FlatRead32((r4 + 44));
    r0 = (r3 + -2147483648);
}

loc_804E0478:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_804E0484;
    }
}

loc_804E047C:
{
    r4 = 0;
    goto loc_804E0534;
}

loc_804E0484:
{
    r0 = (r4 + -2147483648);
}

loc_804E048C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_804E04D0;
    }
}

loc_804E0490:
{
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -1832));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1848));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -1856));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    ctx->lr = 0x804E04B4u;
    if constexpr (KnownRegArgsCpuCall<0x804685F8u>(&func_804685F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_804685F8_2E36 = func_804685F8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804685F8_2E36);
        r4 = static_cast<uint32_t>(regargs_result_804685F8_2E36 >> 32);
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
    goto loc_804E0534;
}

loc_804E04D0:
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
    addr_lfsx_804E04F8_loc_0 = (r3 + r0);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_804E04F8_loc_0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1840));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -1856));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    ctx->lr = 0x804E051Cu;
    if constexpr (KnownRegArgsCpuCall<0x804685F8u>(&func_804685F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_804685F8_3A69 = func_804685F8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804685F8_3A69);
        r4 = static_cast<uint32_t>(regargs_result_804685F8_3A69 >> 32);
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

loc_804E0534:
{
    r3 = 1431633920;
    r0 = (r3 + 21846);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & 1);
    r3 = (r3 + r0);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804E055C;
    }
}

loc_804E054C:
{
    r0 = -62914560;
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r3));
    MemoryInline::FlatWrite32((r31 + 108), r0);
    goto loc_804E0564;
}

loc_804E055C:
{
    r0 = -62914560;
    MemoryInline::FlatWrite32((r31 + 108), r0);
}

loc_804E0564:
{
    r3 = MemoryInline::FlatRead32((r31 + 24));
    r0 = MemoryInline::FlatRead32((r3 + 32));
    MemoryInline::FlatWrite32((r31 + 112), r0);
    r0 = MemoryInline::FlatRead32((r3 + 36));
    MemoryInline::FlatWrite32((r31 + 116), r0);
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

extern "C" void func_804E02D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804E02D0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804E02D0 func_804E02D0 preserves=true fpr_mask=0x00000000
