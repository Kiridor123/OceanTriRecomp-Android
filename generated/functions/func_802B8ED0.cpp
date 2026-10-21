#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005001C(CpuContext* ctx);
extern "C" double func_8005001C_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80050AF4(CpuContext* ctx);
extern "C" uint64_t func_80050AF4_ra38_1e0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_8005101C(CpuContext* ctx);
extern "C" uint64_t func_8005101C_ra18_18_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_800513DC(CpuContext* ctx);
extern "C" uint64_t func_800513DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8005246C(CpuContext* ctx);
extern "C" uint32_t func_8005246C_ra38_e_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_800ADA24(CpuContext* ctx);
extern "C" uint64_t func_800ADA24_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_8012D4FC(CpuContext* ctx);
extern "C" uint64_t func_8012D4FC_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_804644D0(CpuContext* ctx);
extern "C" uint64_t func_804644D0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_802B8ED0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_802B9590_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x802B8ED0u);
    goto loc_802B8ED0;

loc_802B8ED0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -288), 0, 296u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -288), r1);
    r1 = (r1 + -288);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 292u, (r1 + 292), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 272u, (r1 + 272), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 272);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r28 = r3;
    r29 = r4;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 216u, (r1 + 216), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 224u, (r1 + 224), r0);
    r3 = (r1 + 204);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 192);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 180);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 168);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 156);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 144);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = 1;
    r4 = r29;
    r5 = (r1 + 8);
    ctx->lr = 0x802B8F44u;
    if constexpr (KnownRegArgsCpuCall<0x8012D4FCu>(&func_8012D4FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8012D4FC_10D1 = func_8012D4FC_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8012D4FC_10D1);
        r4 = static_cast<uint32_t>(regargs_result_8012D4FC_10D1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012D4FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r31 = r3;
}

loc_802B8F4C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B8FA4;
    }
}

loc_802B8F50:
{
    r0 = MemoryInline::FlatRead32((r28 + 276));
}

loc_802B8F58:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802B8F64;
    }
}

loc_802B8F5C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 276), r0);
}

loc_802B8F64:
{
    r27 = 0;
    MemoryInline::FlatWrite8((r28 + 280), static_cast<uint8_t>(r27));
    r0 = 16384;
    MemoryInline::FlatWrite16((r28 + 282), static_cast<uint16_t>(r0));
    r3 = 65536;
    r0 = (r3 + -4096);
    MemoryInline::FlatWrite16((r28 + 284), static_cast<uint16_t>(r0));
    r3 = (r28 + 312);
    r4 = 0x805D0000u;
    r4 = (r4 + 1576);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        const auto regargs_result_8005001C_1840 = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_1840;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13752));
    MemoryInline::FlatWriteFloat32((r28 + 52), f0.d);
    MemoryInline::FlatWrite8((r28 + 324), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r28 + 325), static_cast<uint8_t>(r27));
    goto loc_802B958C;
}

loc_802B8FA4:
{
    r4 = MemoryInline::FlatRead8((r3 + 3));
    r0 = (r4 + -1);
}

loc_802B8FB0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_802B8FC8;
    }
}

loc_802B8FB4:
{
}

loc_802B8FB8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(7))) {
        goto loc_802B8FD0;
    }
}

loc_802B8FBC:
{
}

loc_802B8FC0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(4))) {
        goto loc_802B901C;
    }
}

loc_802B8FC4:
{
    goto loc_802B958C;
}

loc_802B8FC8:
{
    r30 = (r13 + -26992);
    goto loc_802B906C;
}

loc_802B8FD0:
{
    r0 = MemoryInline::FlatRead8((r28 + 324));
}

loc_802B8FD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B8FE8;
    }
}

loc_802B8FDC:
{
}

loc_802B8FE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802B9014;
    }
}

loc_802B8FE4:
{
    goto loc_802B906C;
}

loc_802B8FE8:
{
    r0 = MemoryInline::FlatRead8((r28 + 325));
}

loc_802B8FF0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802B900C;
    }
}

loc_802B8FF4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 324), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 276), r0);
    MemoryInline::FlatWrite8((r28 + 325), static_cast<uint8_t>(r0));
    goto loc_802B9014;
}

loc_802B900C:
{
    r30 = (r13 + -26984);
    goto loc_802B906C;
}

loc_802B9014:
{
    r30 = (r13 + -26976);
    goto loc_802B906C;
}

loc_802B901C:
{
    r0 = MemoryInline::FlatRead8((r28 + 324));
}

loc_802B9024:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B9034;
    }
}

loc_802B9028:
{
}

loc_802B902C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802B9060;
    }
}

loc_802B9030:
{
    goto loc_802B906C;
}

loc_802B9034:
{
    r0 = MemoryInline::FlatRead8((r28 + 325));
}

loc_802B903C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802B9058;
    }
}

loc_802B9040:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 324), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 276), r0);
    MemoryInline::FlatWrite8((r28 + 325), static_cast<uint8_t>(r0));
    goto loc_802B9060;
}

loc_802B9058:
{
    r30 = (r13 + -26968);
    goto loc_802B906C;
}

loc_802B9060:
{
    r30 = (r13 + -26960);
}

loc_802B906C:
{
    r0 = MemoryInline::FlatRead8((r28 + 280));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802B9078:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_802B90B4;
    }
}

loc_802B907C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13752));
    MemoryInline::FlatWriteFloat32((r28 + 52), f0.d);
}

loc_802B9088:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(-1))) {
        goto loc_802B958C;
    }
}

loc_802B908C:
{
    r4 = 0;
    MemoryInline::FlatWrite32((r28 + 276), r4);
    r0 = MemoryInline::FlatRead32((r3 + 448));
    MemoryInline::FlatWrite32((r28 + 112), r0);
    MemoryInline::FlatWrite32((r28 + 104), r0);
    r0 = -2;
    MemoryInline::FlatWrite8((r28 + 280), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 324), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r28 + 325), static_cast<uint8_t>(r4));
    goto loc_802B958C;
}

loc_802B90B4:
{
    r4 = MemoryInline::FlatRead32((r28 + 276));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r28 + 276), r4);
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802B90C8:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_802B958C;
    }
}

loc_802B90CC:
{
    r4 = MemoryInline::FlatRead8((r3 + 3));
    r0 = (r4 + -1);
}

loc_802B90D8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_802B90F0;
    }
}

loc_802B90DC:
{
}

loc_802B90E0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(4))) {
        goto loc_802B9404;
    }
}

loc_802B90E4:
{
}

loc_802B90E8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(7))) {
        goto loc_802B9444;
    }
}

loc_802B90EC:
{
    goto loc_802B958C;
}

loc_802B90F0:
{
    r3 = (r1 + 192);
    r27 = 0x805D0000u;
    r4 = (r27 + 1552);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        const auto regargs_result_8005001C_2C88 = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_2C88;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r1 + 168);
    r4 = (r27 + 1552);
    r4 = (r4 + 12);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        const auto regargs_result_8005001C_2F0A = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_2F0A;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = MemoryInline::FlatRead16(r30);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead32((r28 + 276));
    r0 = (r0 - r3);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -13688));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 220), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 216));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r4 = MemoryInline::FlatRead16((r30 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 224));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_802B9148:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802B9160;
    }
}

loc_802B914C:
{
    MemoryInline::FlatWriteRam32((r1 + 220), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 216));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = (r4 + r3);
    MemoryInline::FlatWrite32((r28 + 276), r0);
}

loc_802B9160:
{
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -13688));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 224));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13588));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13584));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13592));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->lr = 0x802B9198u;
    if constexpr (KnownRegArgsCpuCall<0x804644D0u>(&func_804644D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_804644D0_3971 = func_804644D0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804644D0_3971);
        r4 = static_cast<uint32_t>(regargs_result_804644D0_3971 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x804644D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13596));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13600));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 232), f0.d);
    r30 = fctiwzword0;
    r3 = (r1 + 120);
    r4 = (r1 + 192);
    r5 = (r28 + 312);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 132);
    r4 = (r1 + 120);
    r0 = (r30 & 65535);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -13664));
    MemoryInline::FlatWriteRam32((r1 + 220), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 216));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    ctx->lr = 0x802B91E4u;
    if constexpr (KnownRegArgsCpuCall<0x800ADA24u>(&func_800ADA24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        const auto regargs_result_800ADA24_43A6 = func_800ADA24_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800ADA24_43A6);
        r4 = static_cast<uint32_t>(regargs_result_800ADA24_43A6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x800ADA24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
    }
    r3 = (r28 + 312);
    r4 = (r1 + 132);
    ctx->lr = 0x802B91F0u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = (r1 + 192);
    r4 = (r28 + 312);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = 3;
    MemoryInline::FlatWrite8((r28 + 124), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead16((r28 + 282));
    r3 = 65536;
    r4 = (r3 + -8192);
    r0 = (r4 - r5);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r30 & 65535);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 & 65535);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite16((r28 + 282), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802B9238:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(-8192))) {
        goto loc_802B9248;
    }
}

loc_802B923C:
{
    MemoryInline::FlatWrite16((r28 + 282), static_cast<uint16_t>(r4));
    r0 = 2;
    MemoryInline::FlatWrite8((r28 + 280), static_cast<uint8_t>(r0));
}

loc_802B9248:
{
    r4 = MemoryInline::FlatRead16((r28 + 284));
    r0 = (0 - r4);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r30 & 65535);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r0));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 & 65535);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite16((r28 + 284), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802B9274:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802B9280;
    }
}

loc_802B9278:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r28 + 284), static_cast<uint16_t>(r0));
}

loc_802B9280:
{
    r0 = (r3 + -2);
    r0 = (r0 & 65535);
}

loc_802B928C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(65532))) {
        goto loc_802B9298;
    }
}

loc_802B9290:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r28 + 280), static_cast<uint8_t>(r0));
}

loc_802B9298:
{
    r3 = (r1 + 192);
    r4 = MemoryInline::FlatRead16((r28 + 284));
    ctx->lr = 0x802B92A4u;
    if constexpr (KnownRegArgsCpuCall<0x8005101Cu>(&func_8005101C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8005101C_50A4 = func_8005101C_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8005101C_50A4);
        r4 = static_cast<uint32_t>(regargs_result_8005101C_50A4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005101Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = (r1 + 192);
    r4 = MemoryInline::FlatRead32((r31 + 448));
    r0 = MemoryInline::FlatRead16((r28 + 282));
    r4 = (r4 + r0);
    ctx->lr = 0x802B92B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
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
    r3 = MemoryInline::FlatRead8((r28 + 280));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_802B92C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B9300;
    }
}

loc_802B92C8:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r28 + 280), static_cast<uint8_t>(r0));
    r3 = (r1 + 96);
    r4 = (r31 + 392);
    r5 = (r29 + 60);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 108);
    r4 = (r29 + 60);
    r5 = (r1 + 96);
    ctx->lr = 0x802B92F0u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_5AE6 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_5AE6);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_5AE6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r28 + 288);
    r4 = (r1 + 108);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_802B9390;
}

loc_802B9300:
{
}

loc_802B9304:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_802B9390;
    }
}

loc_802B9308:
{
    r3 = (r1 + 72);
    r4 = (r31 + 392);
    r5 = (r29 + 60);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 84);
    r4 = (r29 + 60);
    r5 = (r1 + 72);
    ctx->lr = 0x802B9328u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_6104 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_6104);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_6104 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 204);
    r4 = (r1 + 84);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 204));
    MemoryInline::FlatWriteFloat32((r28 + 288), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 212));
    MemoryInline::FlatWriteFloat32((r28 + 296), f0.d);
    r3 = r28;
    r4 = (r28 + 300);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 168);
    r4 = MemoryInline::FlatRead32((r31 + 448));
    ctx->lr = 0x802B935Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
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
    r3 = (r1 + 60);
    r4 = (r28 + 288);
    r5 = (r1 + 168);
    ctx->lr = 0x802B936Cu;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_69EE = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_69EE);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_69EE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r28 + 12);
    r4 = (r1 + 60);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r28 + 12);
    r4 = r28;
    ctx->lr = 0x802B9384u;
    if constexpr (KnownRegArgsCpuCall<0x80050AF4u>(&func_80050AF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_80050AF4_6ECA = func_80050AF4_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050AF4_6ECA);
        r4 = static_cast<uint32_t>(regargs_result_80050AF4_6ECA >> 32);
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80050AF4u>(ctx);
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
    }
    MemoryInline::FlatWrite32((r28 + 112), r3);
    MemoryInline::FlatWrite32((r28 + 104), r3);
    goto loc_802B958C;
}

loc_802B9390:
{
    r3 = (r1 + 144);
    r4 = (r28 + 288);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 48);
    r4 = (r1 + 144);
    r5 = (r1 + 192);
    ctx->lr = 0x802B93ACu;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_7633 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_7633);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_7633 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r28 + 300);
    r4 = (r1 + 48);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r4 = r3;
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 168);
    r4 = MemoryInline::FlatRead32((r31 + 448));
    ctx->lr = 0x802B93D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
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
    r3 = (r1 + 36);
    r4 = (r1 + 144);
    r5 = (r1 + 168);
    ctx->lr = 0x802B93E0u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_7E3A = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_7E3A);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_7E3A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r28 + 12);
    r4 = (r1 + 36);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r28 + 12);
    r4 = r28;
    ctx->lr = 0x802B93F8u;
    if constexpr (KnownRegArgsCpuCall<0x80050AF4u>(&func_80050AF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_80050AF4_8316 = func_80050AF4_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050AF4_8316);
        r4 = static_cast<uint32_t>(regargs_result_80050AF4_8316 >> 32);
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80050AF4u>(ctx);
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
    }
    MemoryInline::FlatWrite32((r28 + 112), r3);
    MemoryInline::FlatWrite32((r28 + 104), r3);
    goto loc_802B958C;
}

loc_802B9404:
{
    r0 = MemoryInline::FlatRead8((r28 + 324));
}

loc_802B940C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B941C;
    }
}

loc_802B9410:
{
}

loc_802B9414:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802B9430;
    }
}

loc_802B9418:
{
    goto loc_802B9488;
}

loc_802B941C:
{
    r3 = 0x805D0000u;
    r3 = (r3 + 4000);
    r4 = 0x805D0000u;
    r29 = (r4 + 5680);
    goto loc_802B9488;
}

loc_802B9430:
{
    r3 = 0x805D0000u;
    r3 = (r3 + 7360);
    r4 = 0x805D0000u;
    r29 = (r4 + 8432);
    goto loc_802B9488;
}

loc_802B9444:
{
    r0 = MemoryInline::FlatRead8((r28 + 324));
}

loc_802B944C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B945C;
    }
}

loc_802B9450:
{
}

loc_802B9454:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802B9470;
    }
}

loc_802B9458:
{
    goto loc_802B9480;
}

loc_802B945C:
{
    r3 = 0x805D0000u;
    r3 = (r3 + 1600);
    r4 = 0x805D0000u;
    r29 = (r4 + 2544);
    goto loc_802B9480;
}

loc_802B9470:
{
    r3 = 0x805D0000u;
    r3 = (r3 + 3488);
    r4 = 0x805D0000u;
    r29 = (r4 + 3744);
}

loc_802B9480:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r28 + 124), static_cast<uint8_t>(r0));
}

loc_802B9488:
{
    r4 = MemoryInline::FlatRead16(r30);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead32((r28 + 276));
    r0 = (r0 - r4);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -13688));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 224));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r5 = MemoryInline::FlatRead16((r30 + 2));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 220), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 216));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_802B94C0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802B94D8;
    }
}

loc_802B94C4:
{
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 224));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = (r5 + r4);
    MemoryInline::FlatWrite32((r28 + 276), r0);
}

loc_802B94D8:
{
    r0 = MemoryInline::FlatRead16((r30 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -13688));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 220), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 216));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r28 + 52), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13696));
    f1.d = PpcFmulsInline(f0.d, f31.d);
    r4 = (r1 + 192);
    r5 = (r1 + 196);
    r6 = (r1 + 200);
    if constexpr (KnownRegArgsCpuCall<0x8005246Cu>(&func_8005246C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005246C_95AB = func_8005246C_ra38_e_8_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = regargs_result_8005246C_95AB;
        r0 = ctx->gpr[0];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8005246Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r3 = r29;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13696));
    f1.d = PpcFmulsInline(f0.d, f31.d);
    r4 = (r1 + 168);
    r5 = (r1 + 172);
    r6 = (r1 + 176);
    if constexpr (KnownRegArgsCpuCall<0x8005246Cu>(&func_8005246C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005246C_9A3F = func_8005246C_ra38_e_8_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = regargs_result_8005246C_9A3F;
        r0 = ctx->gpr[0];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8005246Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r3 = (r1 + 192);
    r4 = MemoryInline::FlatRead32((r31 + 448));
    ctx->lr = 0x802B9534u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
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
    r3 = (r1 + 168);
    r4 = MemoryInline::FlatRead32((r31 + 448));
    ctx->lr = 0x802B9540u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
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
    r3 = (r1 + 24);
    r4 = (r31 + 392);
    r5 = (r1 + 168);
    ctx->lr = 0x802B9550u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_A413 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_A413);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_A413 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r28 + 12);
    r4 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 12);
    r4 = (r31 + 392);
    r5 = (r1 + 192);
    ctx->lr = 0x802B956Cu;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_A8C1 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_A8C1);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_A8C1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = r28;
    r4 = (r1 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r28 + 12);
    r4 = r28;
    ctx->lr = 0x802B9584u;
    if constexpr (KnownRegArgsCpuCall<0x80050AF4u>(&func_80050AF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_80050AF4_AD96 = func_80050AF4_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050AF4_AD96);
        r4 = static_cast<uint32_t>(regargs_result_80050AF4_AD96 >> 32);
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80050AF4u>(ctx);
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
    }
    MemoryInline::FlatWrite32((r28 + 112), r3);
    MemoryInline::FlatWrite32((r28 + 104), r3);
}

loc_802B958C:
{
    r0 = 280;
    addr_psqx_802B9590_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802B9590_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 272));
    r11 = (r1 + 272);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 292));
    ctx->lr = r0;
    r1 = (r1 + 288);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802B8ED0 func_802B8ED0 preserves=true fpr_mask=0x00000000
