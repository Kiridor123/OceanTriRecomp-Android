#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80107610(CpuContext* ctx);
extern "C" uint64_t func_80107610_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_802D29F4(CpuContext* ctx);
extern "C" uint64_t func_802D29F4_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_802D42AC(CpuContext* ctx);
extern "C" uint64_t func_802D42AC_ra38_1f2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);

extern "C" uint64_t func_802D4618_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    MKW_GUEST_ENTER(0x802D4618u);
    goto loc_802D4618;

loc_802D4618:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13024));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -13360));
    ctx->lr = 0x802D462Cu;
    if constexpr (KnownRegArgsCpuCall<0x802D29F4u>(&func_802D29F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802D29F4_7F7 = func_802D29F4_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802D29F4_7F7);
        r4 = static_cast<uint32_t>(regargs_result_802D29F4_7F7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x802D29F4u>(ctx);
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
        cr = ctx->cr;
    }
}

loc_802D4630:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D6284;
    }
}

loc_802D4634:
{
    r3 = r31;
    r4 = 0;
    r5 = 6;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13176));
    ctx->lr = 0x802D4650u;
    if constexpr (KnownRegArgsCpuCall<0x802D42ACu>(&func_802D42AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_802D42AC_E76 = func_802D42AC_ra38_1f2_18_0(ctx, r3, r4, r5, f1.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802D42AC_E76);
        r4 = static_cast<uint32_t>(regargs_result_802D42AC_E76 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->gpr[7] = r7;
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
        InvokeDirectCpu<0x802D42ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
}

loc_802D6284:
{
    r0 = MemoryInline::FlatRead8((r31 + 368));
}

loc_802D628C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802D63B8;
    }
}

loc_802D6290:
{
    r3 = r31;
    // inline leaf 0x802D2A14 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 88));
    // end of inlined leaf 0x802D2A14
    r0 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(63));
}

loc_802D62A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802D64C8;
    }
}

loc_802D62A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802D62D8;
    }
}

loc_802D62A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(13));
}

loc_802D62AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802D6350;
    }
}

loc_802D62B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802D62C0;
    }
}

loc_802D62B4:
{
}

loc_802D62B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802D62FC;
    }
}

loc_802D62BC:
{
    goto loc_802D64C8;
}

loc_802D62C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(57));
}

loc_802D62C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802D62FC;
    }
}

loc_802D62C8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_802D64C8;
    }
}

loc_802D62CC:
{
}

loc_802D62D0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(61))) {
        goto loc_802D62FC;
    }
}

loc_802D62D4:
{
    goto loc_802D64C8;
}

loc_802D62D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(67));
}

loc_802D62DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802D62FC;
    }
}

loc_802D62E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802D62F0;
    }
}

loc_802D62E4:
{
}

loc_802D62E8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(65))) {
        goto loc_802D64C8;
    }
}

loc_802D62EC:
{
    goto loc_802D62FC;
}

loc_802D62F0:
{
}

loc_802D62F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(79))) {
        goto loc_802D62FC;
    }
}

loc_802D62F8:
{
    goto loc_802D64C8;
}

loc_802D62FC:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MH3_HookedLoad32(r3, 12, 2150458116);
    r0 = (r0 & 15);
}

loc_802D6310:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802D64C8;
    }
}

loc_802D6314:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13332));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 380));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 416));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802D6328:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802D64C8;
    }
}

loc_802D6330:
{
    r3 = r31;
    r4 = 0;
    r5 = 3;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13176));
    ctx->lr = 0x802D634Cu;
    if constexpr (KnownRegArgsCpuCall<0x802D42ACu>(&func_802D42AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_802D42AC_2234 = func_802D42AC_ra38_1f2_18_0(ctx, r3, r4, r5, f1.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802D42AC_2234);
        r4 = static_cast<uint32_t>(regargs_result_802D42AC_2234 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->gpr[7] = r7;
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
        InvokeDirectCpu<0x802D42ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    goto loc_802D64C8;
}

loc_802D6350:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12888));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -13360));
    ctx->lr = 0x802D6364u;
    if constexpr (KnownRegArgsCpuCall<0x802D29F4u>(&func_802D29F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802D29F4_2A33 = func_802D29F4_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802D29F4_2A33);
        r4 = static_cast<uint32_t>(regargs_result_802D29F4_2A33 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x802D29F4u>(ctx);
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
        cr = ctx->cr;
    }
}

loc_802D6368:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D64C8;
    }
}

loc_802D636C:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 380));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 416));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13332));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_802D6380:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802D64C8;
    }
}

loc_802D6388:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13360));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = (r1 + 8);
    r5 = 14;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13352));
    r6 = 3;
    ctx->lr = 0x802D63B4u;
    if constexpr (KnownRegArgsCpuCall<0x80107610u>(&func_80107610)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80107610_33F6 = func_80107610_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80107610_33F6);
        r4 = static_cast<uint32_t>(regargs_result_80107610_33F6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80107610u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_802D64C8;
}

loc_802D63B8:
{
    r3 = r31;
    // inline leaf 0x802D2A14 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 88));
    // end of inlined leaf 0x802D2A14
    r0 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(37));
}

loc_802D63C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802D646C;
    }
}

loc_802D63CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802D6420;
    }
}

loc_802D63D0:
{
}

loc_802D63D4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(22))) {
        goto loc_802D6400;
    }
}

loc_802D63D8:
{
}

loc_802D63DC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(4))) {
        goto loc_802D63EC;
    }
}

loc_802D63E0:
{
}

loc_802D63E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802D646C;
    }
}

loc_802D63E8:
{
    goto loc_802D64C8;
}

loc_802D63EC:
{
}

loc_802D63F0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(20))) {
        goto loc_802D646C;
    }
}

loc_802D63F4:
{
}

loc_802D63F8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(11))) {
        goto loc_802D64C8;
    }
}

loc_802D63FC:
{
    goto loc_802D646C;
}

loc_802D6400:
{
}

loc_802D6404:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(27))) {
        goto loc_802D6414;
    }
}

loc_802D6408:
{
}

loc_802D640C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(24))) {
        goto loc_802D646C;
    }
}

loc_802D6410:
{
    goto loc_802D64C8;
}

loc_802D6414:
{
}

loc_802D6418:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(30))) {
        goto loc_802D64C8;
    }
}

loc_802D641C:
{
    goto loc_802D646C;
}

loc_802D6420:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(100));
}

loc_802D6424:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802D646C;
    }
}

loc_802D6428:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802D6450;
    }
}

loc_802D642C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(42));
}

loc_802D6430:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802D64C8;
    }
}

loc_802D6434:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802D6444;
    }
}

loc_802D6438:
{
}

loc_802D643C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(41))) {
        goto loc_802D646C;
    }
}

loc_802D6440:
{
    goto loc_802D64C8;
}

loc_802D6444:
{
}

loc_802D6448:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(46))) {
        goto loc_802D64C8;
    }
}

loc_802D644C:
{
    goto loc_802D646C;
}

loc_802D6450:
{
}

loc_802D6454:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(105))) {
        goto loc_802D6464;
    }
}

loc_802D6458:
{
}

loc_802D645C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(102))) {
        goto loc_802D646C;
    }
}

loc_802D6460:
{
    goto loc_802D64C8;
}

loc_802D6464:
{
}

loc_802D6468:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(107))) {
        goto loc_802D64C8;
    }
}

loc_802D646C:
{
    r0 = MemoryInline::FlatRead16((r31 + 804));
    r0 = (r0 & 6);
}

loc_802D6478:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D64C8;
    }
}

loc_802D647C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12856));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 380));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 416));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802D6490:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802D64C8;
    }
}

loc_802D6494:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MH3_HookedLoad32(r3, 12, 2150458524);
    r0 = (r0 & 15);
}

loc_802D64A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802D64C8;
    }
}

loc_802D64AC:
{
    r3 = r31;
    r4 = 0;
    r5 = 3;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12852));
    ctx->lr = 0x802D64C8u;
    if constexpr (KnownRegArgsCpuCall<0x802D42ACu>(&func_802D42AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_802D42AC_491D = func_802D42AC_ra38_1f2_18_0(ctx, r3, r4, r5, f1.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802D42AC_491D);
        r4 = static_cast<uint32_t>(regargs_result_802D42AC_491D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->gpr[7] = r7;
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
        InvokeDirectCpu<0x802D42ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
}

loc_802D64C8:
{
    r0 = MemoryInline::FlatRead8((r31 + 368));
}

loc_802D64D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802D6584;
    }
}

loc_802D64D4:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 380));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 416));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13292));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_802D64E8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802D6584;
    }
}

loc_802D64F0:
{
    r3 = r31;
    // inline leaf 0x802D2A14 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 88));
    // end of inlined leaf 0x802D2A14
    r0 = (r3 & 65535);
}

loc_802D6500:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(13))) {
        goto loc_802D6584;
    }
}

loc_802D6504:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 380));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13332));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 416));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_802D6518:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802D6584;
    }
}

loc_802D6520:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r4 = MH3_HookedLoad32(r3, 12, 2150458664);
    r3 = 1813446656;
    r0 = (r3 + -16019);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r0 = (r4 - r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r0 + r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_2 & 67108863);
    r0 = (r0 * 90);
    r0 = (r4 - r0);
}

loc_802D6554:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802D6584;
    }
}

loc_802D6558:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13360));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -13164));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -13132));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = (r1 + 8);
    r5 = 14;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13352));
    r6 = 0;
    ctx->lr = 0x802D6584u;
    if constexpr (KnownRegArgsCpuCall<0x80107610u>(&func_80107610)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80107610_5B87 = func_80107610_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80107610_5B87);
        r4 = static_cast<uint32_t>(regargs_result_80107610_5B87 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80107610u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_802D6584:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
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

extern "C" void func_802D4618(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802D4618_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x80003FFF gpr_write=0x80001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802D4618 func_802D4618 preserves=true fpr_mask=0x00000000
