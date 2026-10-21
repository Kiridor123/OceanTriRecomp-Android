#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80456C40(CpuContext* ctx);
extern "C" uint64_t func_80456C40_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804CCCC0(CpuContext* ctx);
extern "C" uint64_t func_804CCCC0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804CDCA0(CpuContext* ctx);
extern "C" uint64_t func_804CDCA0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804CF9D0(CpuContext* ctx);
extern "C" uint64_t func_804CF9D0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804CFD00(CpuContext* ctx);
extern "C" uint64_t func_804CFD00_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804D0C80(CpuContext* ctx);
extern "C" uint64_t func_804D0C80_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804E9010(CpuContext* ctx);
extern "C" uint32_t func_804E9010_ra308_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804E9130(CpuContext* ctx);
extern "C" uint64_t func_804E9130_ra308_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804E91A0(CpuContext* ctx);
extern "C" uint64_t func_804E91A0_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_804777E0_statefree();
extern "C" uint64_t func_804777E0_statefree_v0(uint32_t);

extern "C" uint64_t func_804D0010_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804D0010u);
    goto loc_804D0010;

loc_804D0010:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 84u, (r1 + 84), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_2, 32u, (r1 + 32), r0);
    MemoryInline::WriteResolved32(guest_range_2, 40u, (r1 + 40), r0);
    // inline leaf 0x804D1310 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 | 32768);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D1310
    r29 = 0x80750000u;
    r29 = (r29 + -1304);
    r28 = MemoryInline::FlatRead32((r29 + 8));
    r3 = r28;
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80456C40_104E = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_104E);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_104E >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r30 = (r3 + 1);
    r4 = 32;
    r3 = r30;
    // inline leaf 0x804CC770 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -20112));
    r5 = (r4 + -1);
    r6 = ~(r5 | r5);
    r5 = (r4 + r0);
    r0 = (r5 + -1);
    r0 = (r6 & r0);
    r3 = (r0 + r3);
    r4 = (r3 + r4);
    r3 = r0;
    r0 = (r4 + -1);
    r0 = (r6 & r0);
    MemoryInline::FlatWrite32((r13 + -20112), r0);
    // end of inlined leaf 0x804CC770
    r4 = r28;
    r5 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8045BC18u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r29 + 8), r3);
    r3 = 655360;
    r3 = (r3 + 4100);
    r4 = 32;
    // inline leaf 0x804CC770 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -20112));
    r5 = (r4 + -1);
    r6 = ~(r5 | r5);
    r5 = (r4 + r0);
    r0 = (r5 + -1);
    r0 = (r6 & r0);
    r3 = (r0 + r3);
    r4 = (r3 + r4);
    r3 = r0;
    r0 = (r4 + -1);
    r0 = (r6 & r0);
    MemoryInline::FlatWrite32((r13 + -20112), r0);
    // end of inlined leaf 0x804CC770
    r31 = r3;
    // inline leaf 0x804CC700 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -20112));
    // end of inlined leaf 0x804CC700
    r4 = r3;
    r3 = r31;
    ctx->lr = 0x804D0094u;
    if constexpr (KnownRegArgsCpuCall<0x804D0C80u>(&func_804D0C80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[0] = f0;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804D0C80_193F = func_804D0C80_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D0C80_193F);
        r4 = static_cast<uint32_t>(regargs_result_804D0C80_193F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804D0C80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = 589824;
    r4 = 32;
    r3 = (r3 + 24576);
    // inline leaf 0x804CC770 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -20112));
    r5 = (r4 + -1);
    r6 = ~(r5 | r5);
    r5 = (r4 + r0);
    r0 = (r5 + -1);
    r0 = (r6 & r0);
    r3 = (r0 + r3);
    r4 = (r3 + r4);
    r3 = r0;
    r0 = (r4 + -1);
    r0 = (r6 & r0);
    MemoryInline::FlatWrite32((r13 + -20112), r0);
    // end of inlined leaf 0x804CC770
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -1992), 0, 64u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 56u, (r2 + -1936));
    r4 = MemoryInline::FlatRead8((r1 + 26));
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    r0 = MemoryInline::FlatRead8((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 40));
    r3 = MemoryInline::FlatRead8((r1 + 25));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -1980));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f5.d = PpcFmulsInline(f2.d, f3.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -1984));
    MemoryInline::FlatWriteRam32((r1 + 44), r4);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -1976));
    f11.d = PpcFmulsInline(f2.d, f6.d);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f3.d = PpcFmulsInline(f3.d, f4.d);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -1968));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f8.d = PpcFmulsInline(f9.d, f2.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r2 + -1964));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r2 + -1960));
    f7.d = PpcFmulsInline(f4.d, f6.d);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f6.d = PpcFmulsInline(f2.d, f3.d);
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r2 + -1956));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r2 + -1952));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f5.d = PpcFmulsInline(f9.d, f5.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f6.d));
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -1988));
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -1992));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f10.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f3.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r2 + -1972));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f6.d));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r2 + -1948));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f7.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    SetCRFloatResident(cr, 0, f5.d, f6.d);
}

loc_804D01B0:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804D01BC;
    }
}

loc_804D01B8:
{
    goto loc_804D01D0;
}

loc_804D01BC:
{
    SetCRFloatResident(cr, 0, f5.d, f9.d);
}

loc_804D01C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804D01C8;
    }
}

loc_804D01C4:
{
    goto loc_804D01CC;
}

loc_804D01C8:
{
    f9.d = f5.d;
}

loc_804D01CC:
{
    f6.d = f9.d;
}

loc_804D01D0:
{
    f0.d = PPC_Fctiwz(f6.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r2 + -1944));
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    SetCRFloatResident(cr, 0, f2.d, f3.d);
}

loc_804D01E0:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804D01F0;
    }
}

loc_804D01EC:
{
    goto loc_804D0204;
}

loc_804D01F0:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -1988));
    SetCRFloatResident(cr, 0, f2.d, f3.d);
}

loc_804D01F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804D0200;
    }
}

loc_804D01FC:
{
    goto loc_804D0204;
}

loc_804D0200:
{
    f3.d = f2.d;
}

loc_804D0204:
{
    f0.d = PPC_Fctiwz(f3.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r2 + -1944));
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_804D0214:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804D0224;
    }
}

loc_804D0220:
{
    goto loc_804D0238;
}

loc_804D0224:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -1988));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_804D022C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804D0234;
    }
}

loc_804D0230:
{
    goto loc_804D0238;
}

loc_804D0234:
{
    f2.d = f1.d;
}

loc_804D0238:
{
    f0.d = PPC_Fctiwz(f2.d);
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    r4 = r30;
    r5 = 0;
    r0 = 20;
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r3 = fctiwzword0;
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    r6 = MemoryInline::FlatRead8((r1 + 29));
    r7 = MemoryInline::FlatRead8((r1 + 30));
    r3 = MemoryInline::FlatRead8((r1 + 28));
}

loc_804D0270:
{
    ctr = r0;
}

loc_804D0274:
{
    guest_range_3 = MemoryInline::ResolveRangeHost(r4, 0, 64u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, r4, static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r4 + 1), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r4 + 2), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r4 + 3), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r4 + 4), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r4 + 5), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r4 + 6), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r4 + 7), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 8u, (r4 + 8), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 9u, (r4 + 9), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 10u, (r4 + 10), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 11u, (r4 + 11), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 12u, (r4 + 12), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 13u, (r4 + 13), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 14u, (r4 + 14), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 15u, (r4 + 15), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 16u, (r4 + 16), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 17u, (r4 + 17), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 18u, (r4 + 18), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 19u, (r4 + 19), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 20u, (r4 + 20), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 21u, (r4 + 21), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 22u, (r4 + 22), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 23u, (r4 + 23), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 24u, (r4 + 24), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 25u, (r4 + 25), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 26u, (r4 + 26), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 27u, (r4 + 27), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 28u, (r4 + 28), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 29u, (r4 + 29), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 30u, (r4 + 30), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 31u, (r4 + 31), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 32u, (r4 + 32), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 33u, (r4 + 33), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 34u, (r4 + 34), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 35u, (r4 + 35), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 36u, (r4 + 36), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 37u, (r4 + 37), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 38u, (r4 + 38), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 39u, (r4 + 39), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 40u, (r4 + 40), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 41u, (r4 + 41), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 42u, (r4 + 42), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 43u, (r4 + 43), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 44u, (r4 + 44), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 45u, (r4 + 45), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 46u, (r4 + 46), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 47u, (r4 + 47), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 48u, (r4 + 48), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 49u, (r4 + 49), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 50u, (r4 + 50), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 51u, (r4 + 51), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 52u, (r4 + 52), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 53u, (r4 + 53), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 54u, (r4 + 54), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 55u, (r4 + 55), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 56u, (r4 + 56), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 57u, (r4 + 57), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 58u, (r4 + 58), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 59u, (r4 + 59), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 60u, (r4 + 60), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 61u, (r4 + 61), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 62u, (r4 + 62), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_3, 63u, (r4 + 63), static_cast<uint8_t>(r7));
    r4 = (r4 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804D0274;
    }
}

loc_804D037C:
{
    r5 = (r5 + 1);
}

loc_804D0384:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(480))) {
        goto loc_804D0270;
    }
}

loc_804D0388:
{
    r3 = r30;
    ctx->lr = 0x804D0390u;
    if constexpr (KnownRegArgsCpuCall<0x804E9130u>(&func_804E9130)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        const auto regargs_result_804E9130_5725 = func_804E9130_ra308_0_18_0(ctx, r3, r8, r9);
        r3 = static_cast<uint32_t>(regargs_result_804E9130_5725);
        r4 = static_cast<uint32_t>(regargs_result_804E9130_5725 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        InvokeDirectCpu<0x804E9130u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
    }
    r3 = 640;
    r4 = 480;
    ctx->lr = 0x804D039Cu;
    if constexpr (KnownRegArgsCpuCall<0x804CFD00u>(&func_804CFD00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[0] = f0;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CFD00_5D3B = func_804CFD00_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CFD00_5D3B);
        r4 = static_cast<uint32_t>(regargs_result_804CFD00_5D3B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CFD00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    ctx->lr = 0x804D03A0u;
    if constexpr (KnownRegArgsCpuCall<0x804E9010u>(&func_804E9010)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        const auto regargs_result_804E9010_66AA = func_804E9010_ra308_0_8_0(ctx, r3, r8, r9);
        r3 = regargs_result_804E9010_66AA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        InvokeDirectCpu<0x804E9010u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
    }
    // inline leaf 0x804E9220 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -14236));
    // end of inlined leaf 0x804E9220
    r28 = r3;
}

loc_804D03A8:
{
    // inline leaf 0x804E9220 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -14236));
    // end of inlined leaf 0x804E9220
    r0 = (r3 - r28);
}

loc_804D03B4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(2))) {
        goto loc_804D03A8;
    }
}

loc_804D03B8:
{
    r0 = MemoryInline::FlatRead32(r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -1992), 0, 64u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 56u, (r2 + -1936));
    r4 = MemoryInline::FlatRead8((r1 + 18));
    MemoryInline::FlatWriteRam32((r1 + 44), r4);
    r0 = MemoryInline::FlatRead8((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r3 = MemoryInline::FlatRead8((r1 + 17));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -1980));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f5.d = PpcFmulsInline(f2.d, f3.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -1984));
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -1976));
    f11.d = PpcFmulsInline(f2.d, f6.d);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f3.d = PpcFmulsInline(f3.d, f4.d);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -1968));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f8.d = PpcFmulsInline(f9.d, f2.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r2 + -1964));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r2 + -1960));
    f7.d = PpcFmulsInline(f4.d, f6.d);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f6.d = PpcFmulsInline(f2.d, f3.d);
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r2 + -1956));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    MemoryInline::FlatWriteRam32((r1 + 44), r4);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r2 + -1952));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f5.d = PpcFmulsInline(f9.d, f5.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f6.d));
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -1988));
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -1992));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f10.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f3.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -1972));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f6.d));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 44u, (r2 + -1948));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f7.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    SetCRFloatResident(cr, 0, f5.d, f6.d);
}

loc_804D04C0:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804D04CC;
    }
}

loc_804D04C8:
{
    goto loc_804D04E0;
}

loc_804D04CC:
{
    SetCRFloatResident(cr, 0, f5.d, f9.d);
}

loc_804D04D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804D04D8;
    }
}

loc_804D04D4:
{
    goto loc_804D04DC;
}

loc_804D04D8:
{
    f9.d = f5.d;
}

loc_804D04DC:
{
    f6.d = f9.d;
}

loc_804D04E0:
{
    f0.d = PPC_Fctiwz(f6.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 48u, (r2 + -1944));
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    SetCRFloatResident(cr, 0, f2.d, f3.d);
}

loc_804D04F0:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804D0500;
    }
}

loc_804D04FC:
{
    goto loc_804D0514;
}

loc_804D0500:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -1988));
    SetCRFloatResident(cr, 0, f2.d, f3.d);
}

loc_804D0508:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804D0510;
    }
}

loc_804D050C:
{
    goto loc_804D0514;
}

loc_804D0510:
{
    f3.d = f2.d;
}

loc_804D0514:
{
    f0.d = PPC_Fctiwz(f3.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 48u, (r2 + -1944));
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_804D0524:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804D0534;
    }
}

loc_804D0530:
{
    goto loc_804D0548;
}

loc_804D0534:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -1988));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_804D053C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804D0544;
    }
}

loc_804D0540:
{
    goto loc_804D0548;
}

loc_804D0544:
{
    f2.d = f1.d;
}

loc_804D0548:
{
    f0.d = PPC_Fctiwz(f2.d);
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    r3 = r30;
    r10 = MemoryInline::FlatRead32((r29 + 8));
    r6 = (r1 + 20);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r4 = 640;
    r5 = 480;
    r7 = 48;
    r0 = fctiwzword1;
    r8 = 100;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r9 = MemoryInline::FlatRead16((r31 + 14));
    ctx->lr = 0x804D058Cu;
    if constexpr (KnownRegArgsCpuCall<0x804CF9D0u>(&func_804CF9D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[0] = f0;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CF9D0_87EE = func_804CF9D0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CF9D0_87EE);
        r4 = static_cast<uint32_t>(regargs_result_804CF9D0_87EE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CF9D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r4 = 589824;
    r3 = r30;
    r4 = (r4 + 24576);
    if constexpr (KnownRegArgsCpuCall<0x804CCCC0u>(&func_804CCCC0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CCCC0_9140 = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_9140);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_9140 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = 0;
    ctx->lr = 0x804D05A4u;
    if constexpr (KnownRegArgsCpuCall<0x804E91A0u>(&func_804E91A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        const auto regargs_result_804E91A0_9511 = func_804E91A0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804E91A0_9511);
        r4 = static_cast<uint32_t>(regargs_result_804E91A0_9511 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        InvokeDirectCpu<0x804E91A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
    }
    ctx->lr = 0x804D05A8u;
    if constexpr (KnownRegArgsCpuCall<0x804E9010u>(&func_804E9010)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        const auto regargs_result_804E9010_9A49 = func_804E9010_ra308_0_8_0(ctx, r3, r8, r9);
        r3 = regargs_result_804E9010_9A49;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        InvokeDirectCpu<0x804E9010u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
    }
    // inline leaf 0x804E9220 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -14236));
    // end of inlined leaf 0x804E9220
    r30 = r3;
}

loc_804D05B0:
{
    // inline leaf 0x804E9220 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -14236));
    // end of inlined leaf 0x804E9220
    r0 = (r3 - r30);
}

loc_804D05BC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(1))) {
        goto loc_804D05B0;
    }
}

loc_804D05C0:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = MemoryInline::FlatRead32((r29 + 8));
    r3 = (r13 + -20080);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x804D05D4u;
    if constexpr (KnownRegArgsCpuCall<0x804CDCA0u>(&func_804CDCA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[0] = f0;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CDCA0_A31A = func_804CDCA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CDCA0_A31A);
        r4 = static_cast<uint32_t>(regargs_result_804CDCA0_A31A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CDCA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x804777E0u) && KnownTranslatedCpuCall<0x804777E0u>::kAvailable && !KnownTranslatedCpuCall<0x804777E0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x804777E0u>()) {
        const auto state_free_result_804777E0_AC84 = func_804777E0_statefree_v0(r3);
        r3 = static_cast<uint32_t>(state_free_result_804777E0_AC84);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804777E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804D0010(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D0010_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804D0010 func_804D0010 preserves=true fpr_mask=0x00000000
