#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80229334(CpuContext* ctx);
extern "C" uint32_t func_80229334_ra18_30_8_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_80229368(CpuContext* ctx);
extern "C" uint64_t func_80229368_ra38_c_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_80274150(CpuContext* ctx);
extern "C" uint64_t func_80274150_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80226F28_ra38_3e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80226F28;

loc_80226F28:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r30 = r4;
    r31 = r5;
    r28 = r6;
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r30;
    ctx->lr = 0x80226F70u;
    if constexpr (KnownRegArgsCpuCall<0x80274150u>(&func_80274150)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80274150_8EA = func_80274150_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80274150_8EA);
        r4 = static_cast<uint32_t>(regargs_result_80274150_8EA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80274150u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r29 = r3;
    // inline leaf 0x800D0788 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2167));
    // end of inlined leaf 0x800D0788
    r0 = (r3 & 255);
}

loc_80226F80:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80227380;
    }
}

loc_80226F84:
{
    r3 = MemoryInline::FlatRead32((r30 + 316));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 72));
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -15816), 0, 172u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -15812));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80226F94:
{
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1);
    r3 = (r0 & 255);
    r0 = (r28 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1101));
}

loc_80226FA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802271F8;
    }
}

loc_80226FAC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80227034;
    }
}

loc_80226FB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1040));
}

loc_80226FB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802271AC;
    }
}

loc_80226FB8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80226FF8;
    }
}

loc_80226FBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1009));
}

loc_80226FC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80227168;
    }
}

loc_80226FC4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80226FE0;
    }
}

loc_80226FC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1003));
}

loc_80226FCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80227124;
    }
}

loc_80226FD0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802272F8;
    }
}

loc_80226FD4:
{
}

loc_80226FD8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1002))) {
        goto loc_802270B8;
    }
}

loc_80226FDC:
{
    goto loc_802272F8;
}

loc_80226FE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1035));
}

loc_80226FE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802271AC;
    }
}

loc_80226FE8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_802272F8;
    }
}

loc_80226FEC:
{
}

loc_80226FF0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1039))) {
        goto loc_802272B4;
    }
}

loc_80226FF4:
{
    goto loc_802272F8;
}

loc_80226FF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1057));
}

loc_80226FFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80227124;
    }
}

loc_80227000:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8022701C;
    }
}

loc_80227004:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1052));
}

loc_80227008:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80227124;
    }
}

loc_8022700C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802272F8;
    }
}

loc_80227010:
{
}

loc_80227014:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1051))) {
        goto loc_802270B8;
    }
}

loc_80227018:
{
    goto loc_802272F8;
}

loc_8022701C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1085));
}

loc_80227020:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802271AC;
    }
}

loc_80227024:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802272F8;
    }
}

loc_80227028:
{
}

loc_8022702C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1082))) {
        goto loc_802271AC;
    }
}

loc_80227030:
{
    goto loc_802272F8;
}

loc_80227034:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1150));
}

loc_80227038:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802271F8;
    }
}

loc_8022703C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8022707C;
    }
}

loc_80227040:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1108));
}

loc_80227044:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802271F8;
    }
}

loc_80227048:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80227064;
    }
}

loc_8022704C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1105));
}

loc_80227050:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80227268;
    }
}

loc_80227054:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802272F8;
    }
}

loc_80227058:
{
}

loc_8022705C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1104))) {
        goto loc_80227244;
    }
}

loc_80227060:
{
    goto loc_802272F8;
}

loc_80227064:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1130));
}

loc_80227068:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802270B8;
    }
}

loc_8022706C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_802272F8;
    }
}

loc_80227070:
{
}

loc_80227074:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1133))) {
        goto loc_802272F8;
    }
}

loc_80227078:
{
    goto loc_802271AC;
}

loc_8022707C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1157));
}

loc_80227080:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802271F8;
    }
}

loc_80227084:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802270A0;
    }
}

loc_80227088:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1154));
}

loc_8022708C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80227268;
    }
}

loc_80227090:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802272F8;
    }
}

loc_80227094:
{
}

loc_80227098:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1153))) {
        goto loc_80227244;
    }
}

loc_8022709C:
{
    goto loc_802272F8;
}

loc_802270A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1180));
}

loc_802270A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802270B8;
    }
}

loc_802270A8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_802272F8;
    }
}

loc_802270AC:
{
}

loc_802270B0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1183))) {
        goto loc_802272F8;
    }
}

loc_802270B4:
{
    goto loc_802271AC;
}

loc_802270B8:
{
}

loc_802270BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80227318;
    }
}

loc_802270C0:
{
    r0 = (r29 & 255);
}

loc_802270C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802270E0;
    }
}

loc_802270CC:
{
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -14784);
    ctx->lr = 0x802270DCu;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80229334_2940 = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_2940;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteFloat32((r31 + 116), f1.d);
}

loc_802270E0:
{
    r0 = MemoryInline::FlatRead8((r30 + 617));
}

loc_802270E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80227108;
    }
}

loc_802270EC:
{
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -14640);
    r5 = (r31 + 136);
    r6 = (r31 + 132);
    ctx->lr = 0x80227104u;
    if constexpr (KnownRegArgsCpuCall<0x80229368u>(&func_80229368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229368_2FB2 = func_80229368_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80229368_2FB2);
        r4 = static_cast<uint32_t>(regargs_result_80229368_2FB2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x80229368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    goto loc_80227380;
}

loc_80227108:
{
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -14728);
    r5 = (r31 + 136);
    r6 = (r31 + 132);
    ctx->lr = 0x80227120u;
    if constexpr (KnownRegArgsCpuCall<0x80229368u>(&func_80229368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229368_358A = func_80229368_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80229368_358A);
        r4 = static_cast<uint32_t>(regargs_result_80229368_358A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x80229368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    goto loc_80227380;
}

loc_80227124:
{
}

loc_80227128:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80227348;
    }
}

loc_8022712C:
{
    r0 = (r29 & 255);
}

loc_80227134:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8022714C;
    }
}

loc_80227138:
{
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -14192);
    ctx->lr = 0x80227148u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80229334_3C8C = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_3C8C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteFloat32((r31 + 116), f1.d);
}

loc_8022714C:
{
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -14152);
    r5 = (r31 + 136);
    r6 = (r31 + 132);
    ctx->lr = 0x80227164u;
    if constexpr (KnownRegArgsCpuCall<0x80229368u>(&func_80229368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229368_423B = func_80229368_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80229368_423B);
        r4 = static_cast<uint32_t>(regargs_result_80229368_423B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x80229368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    goto loc_80227380;
}

loc_80227168:
{
}

loc_8022716C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80227348;
    }
}

loc_80227170:
{
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -14048);
    r5 = (r31 + 136);
    r6 = (r31 + 132);
    ctx->lr = 0x80227188u;
    if constexpr (KnownRegArgsCpuCall<0x80229368u>(&func_80229368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229368_48A6 = func_80229368_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80229368_48A6);
        r4 = static_cast<uint32_t>(regargs_result_80229368_48A6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x80229368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r0 = (r29 & 255);
}

loc_80227190:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80227380;
    }
}

loc_80227194:
{
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -14080);
    ctx->lr = 0x802271A4u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80229334_4EE6 = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_4EE6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteFloat32((r31 + 116), f1.d);
    goto loc_80227380;
}

loc_802271AC:
{
}

loc_802271B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80227318;
    }
}

loc_802271B4:
{
    r0 = MemoryInline::FlatRead8((r30 + 617));
}

loc_802271BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802271DC;
    }
}

loc_802271C0:
{
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -14544);
    r5 = (r31 + 136);
    r6 = (r31 + 132);
    ctx->lr = 0x802271D8u;
    if constexpr (KnownRegArgsCpuCall<0x80229368u>(&func_80229368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229368_5603 = func_80229368_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80229368_5603);
        r4 = static_cast<uint32_t>(regargs_result_80229368_5603 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x80229368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    goto loc_80227380;
}

loc_802271DC:
{
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -14592);
    r5 = (r31 + 136);
    r6 = (r31 + 132);
    ctx->lr = 0x802271F4u;
    if constexpr (KnownRegArgsCpuCall<0x80229368u>(&func_80229368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229368_5BDB = func_80229368_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80229368_5BDB);
        r4 = static_cast<uint32_t>(regargs_result_80229368_5BDB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x80229368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    goto loc_80227380;
}

loc_802271F8:
{
}

loc_802271FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80227348;
    }
}

loc_80227200:
{
    r0 = MemoryInline::FlatRead8((r30 + 617));
}

loc_80227208:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80227228;
    }
}

loc_8022720C:
{
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -14496);
    r5 = (r31 + 136);
    r6 = (r31 + 132);
    ctx->lr = 0x80227224u;
    if constexpr (KnownRegArgsCpuCall<0x80229368u>(&func_80229368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229368_6309 = func_80229368_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80229368_6309);
        r4 = static_cast<uint32_t>(regargs_result_80229368_6309 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x80229368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    goto loc_80227380;
}

loc_80227228:
{
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -14384);
    r5 = (r31 + 136);
    r6 = (r31 + 132);
    ctx->lr = 0x80227240u;
    if constexpr (KnownRegArgsCpuCall<0x80229368u>(&func_80229368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229368_68E1 = func_80229368_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80229368_68E1);
        r4 = static_cast<uint32_t>(regargs_result_80229368_68E1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x80229368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    goto loc_80227380;
}

loc_80227244:
{
}

loc_80227248:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80227348;
    }
}

loc_8022724C:
{
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -14288);
    r5 = (r31 + 136);
    r6 = (r31 + 132);
    ctx->lr = 0x80227264u;
    if constexpr (KnownRegArgsCpuCall<0x80229368u>(&func_80229368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229368_6F4C = func_80229368_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80229368_6F4C);
        r4 = static_cast<uint32_t>(regargs_result_80229368_6F4C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x80229368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    goto loc_80227380;
}

loc_80227268:
{
}

loc_8022726C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80227348;
    }
}

loc_80227270:
{
    r0 = MemoryInline::FlatRead8((r30 + 617));
}

loc_80227278:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80227298;
    }
}

loc_8022727C:
{
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -13920);
    r5 = (r31 + 136);
    r6 = (r31 + 132);
    ctx->lr = 0x80227294u;
    if constexpr (KnownRegArgsCpuCall<0x80229368u>(&func_80229368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229368_767A = func_80229368_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80229368_767A);
        r4 = static_cast<uint32_t>(regargs_result_80229368_767A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x80229368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    goto loc_80227380;
}

loc_80227298:
{
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -13832);
    r5 = (r31 + 136);
    r6 = (r31 + 132);
    ctx->lr = 0x802272B0u;
    if constexpr (KnownRegArgsCpuCall<0x80229368u>(&func_80229368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229368_7C52 = func_80229368_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80229368_7C52);
        r4 = static_cast<uint32_t>(regargs_result_80229368_7C52 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x80229368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    goto loc_80227380;
}

loc_802272B4:
{
}

loc_802272B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80227348;
    }
}

loc_802272BC:
{
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -13968);
    r5 = (r31 + 136);
    r6 = (r31 + 132);
    ctx->lr = 0x802272D4u;
    if constexpr (KnownRegArgsCpuCall<0x80229368u>(&func_80229368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229368_82BD = func_80229368_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80229368_82BD);
        r4 = static_cast<uint32_t>(regargs_result_80229368_82BD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x80229368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r0 = (r29 & 255);
}

loc_802272DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80227380;
    }
}

loc_802272E0:
{
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -14000);
    ctx->lr = 0x802272F0u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80229334_88FD = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_88FD;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteFloat32((r31 + 116), f1.d);
    goto loc_80227380;
}

loc_802272F8:
{
    r3 = r30;
    // inline leaf 0x8026A404 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 24));
    // end of inlined leaf 0x8026A404
    r0 = (r3 & 255);
}

loc_80227308:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80227318;
    }
}

loc_8022730C:
{
    r0 = MemoryInline::FlatRead8((r31 + 17));
}

loc_80227314:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80227348;
    }
}

loc_80227318:
{
    r0 = (r29 & 255);
}

loc_80227320:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8022732C;
    }
}

loc_80227324:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 156u, (r2 + -15660));
    MemoryInline::FlatWriteFloat32((r31 + 116), f0.d);
}

loc_8022732C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -15816));
    MemoryInline::FlatWriteFloat32((r31 + 128), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 160u, (r2 + -15656));
    MemoryInline::FlatWriteFloat32((r31 + 132), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 164u, (r2 + -15652));
    MemoryInline::FlatWriteFloat32((r31 + 136), f0.d);
    goto loc_80227380;
}

loc_80227348:
{
    r0 = MemoryInline::FlatRead8((r30 + 628));
}

loc_80227350:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80227370;
    }
}

loc_80227354:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -15816));
    MemoryInline::FlatWriteFloat32((r31 + 128), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 168u, (r2 + -15648));
    MemoryInline::FlatWriteFloat32((r31 + 132), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 164u, (r2 + -15652));
    MemoryInline::FlatWriteFloat32((r31 + 136), f0.d);
    goto loc_80227380;
}

loc_80227370:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -15816));
    MemoryInline::FlatWriteFloat32((r31 + 136), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 132), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 128), f0.d);
}

loc_80227380:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 132));
    MemoryInline::FlatWriteFloat32((r31 + 164), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 128));
    MemoryInline::FlatWriteFloat32((r31 + 168), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 136));
    MemoryInline::FlatWriteFloat32((r31 + 172), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80226F28(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80226F28_ra38_3e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x0000003F fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80226F28 func_80226F28 preserves=true fpr_mask=0x00000000
