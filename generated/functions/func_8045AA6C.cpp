#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80459C9C(CpuContext* ctx);
extern "C" uint32_t func_80459C9C_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8045A0A4(CpuContext* ctx);
extern "C" uint64_t func_8045A0A4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8045A188(CpuContext* ctx);
extern "C" uint32_t func_8045A188_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8045A288(CpuContext* ctx);
extern "C" uint32_t func_8045A288_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8045A764(CpuContext* ctx);
extern "C" uint64_t func_8045A764_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8045C0D0(CpuContext* ctx);
extern "C" uint64_t func_8045C0D0_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_80467F6C(CpuContext* ctx);
extern "C" uint32_t func_80467F6C_ra0_6_8_0(CpuContext*, double, double);
extern "C" void func_80468238(CpuContext* ctx);
extern "C" uint64_t func_80468238_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_804685F8(CpuContext* ctx);
extern "C" uint64_t func_804685F8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8045AA6C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_addc_left_0 = 0;
    uint32_t r0_addc_left_1 = 0;
    uint32_t r0_addc_left_2 = 0;
    uint32_t r0_addc_left_3 = 0;
    uint32_t r0_addc_left_4 = 0;
    uint32_t r0_addc_left_5 = 0;
    uint32_t r0_addc_left_6 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_ca_5 = 0;
    uint32_t r0_ca_6 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t stackword34 = 0;
    uint32_t stackword35 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8045AA6C;

loc_8045AA6C:
{
    MemoryAlias::FlatWriteRam32((r1 + -384), r1);
    r1 = (r1 + -384);
    r0 = ctx->lr;
    MemoryAlias::FlatWriteRam32((r1 + 388), r0);
    r11 = (r1 + 368);
    MemoryAlias::FlatWriteRamFloat64((r1 + 368), f31.d);
    // psq_store w=0 quant=0 (using MemoryAlias::PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 376);
    MemoryAlias::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryAlias::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    guest_range_1 = MemoryAlias::ResolveRangeHost(r3, 0, 42u, true, false);
    r0 = MemoryAlias::ReadResolved8(guest_range_1, 4u, (r3 + 4));
    r4 = 1127219200;
    MemoryAlias::FlatWriteRam32((r1 + 296), r4);
    r27 = r3;
}

loc_8045AA9C:
{
    MemoryAlias::FlatWriteRam32((r1 + 304), r4);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045AAC8;
    }
}

loc_8045AAA4:
{
    r0 = MemoryAlias::ReadResolved8(guest_range_1, 0u, r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045AAB8;
    }
}

loc_8045AAB0:
{
    f2.d = MemoryAlias::FlatReadFloat64((r2 + -4336));
    goto loc_8045AABC;
}

loc_8045AAB8:
{
    f2.d = MemoryAlias::FlatReadFloat64((r2 + -4328));
}

loc_8045AABC:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -4344));
    if constexpr (KnownRegArgsCpuCall<0x80467F6Cu>(&func_80467F6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_80467F6C_17E5 = func_80467F6C_ra0_6_8_0(ctx, f1.d, f2.d);
        r3 = regargs_result_80467F6C_17E5;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->xer = xer;
        InvokeDirectCpu<0x80467F6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
    }
    goto loc_8045B198;
}

loc_8045AAC8:
{
    r0 = MemoryAlias::ReadResolved8(guest_range_1, 5u, (r3 + 5));
}

loc_8045AAD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(48))) {
        goto loc_8045AAE8;
    }
}

loc_8045AAD4:
{
}

loc_8045AAD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(73))) {
        goto loc_8045AB0C;
    }
}

loc_8045AADC:
{
}

loc_8045AAE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(78))) {
        goto loc_8045AB34;
    }
}

loc_8045AAE4:
{
    goto loc_8045AB74;
}

loc_8045AAE8:
{
    r0 = MemoryAlias::ReadResolved8(guest_range_1, 0u, r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045AAFC;
    }
}

loc_8045AAF4:
{
    f2.d = MemoryAlias::FlatReadFloat64((r2 + -4336));
    goto loc_8045AB00;
}

loc_8045AAFC:
{
    f2.d = MemoryAlias::FlatReadFloat64((r2 + -4328));
}

loc_8045AB00:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -4344));
    if constexpr (KnownRegArgsCpuCall<0x80467F6Cu>(&func_80467F6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_80467F6C_1EE6 = func_80467F6C_ra0_6_8_0(ctx, f1.d, f2.d);
        r3 = regargs_result_80467F6C_1EE6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->xer = xer;
        InvokeDirectCpu<0x80467F6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
    }
    goto loc_8045B198;
}

loc_8045AB0C:
{
    r0 = MemoryAlias::ReadResolved8(guest_range_1, 0u, r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045AB20;
    }
}

loc_8045AB18:
{
    f2.d = MemoryAlias::FlatReadFloat64((r2 + -4336));
    goto loc_8045AB24;
}

loc_8045AB20:
{
    f2.d = MemoryAlias::FlatReadFloat64((r2 + -4328));
}

loc_8045AB24:
{
    r3 = 0x80790000u;
    f1.d = MemoryAlias::FlatReadFloat32((r3 + 25020));
    if constexpr (KnownRegArgsCpuCall<0x80467F6Cu>(&func_80467F6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_80467F6C_23CF = func_80467F6C_ra0_6_8_0(ctx, f1.d, f2.d);
        r3 = regargs_result_80467F6C_23CF;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->xer = xer;
        InvokeDirectCpu<0x80467F6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
    }
    goto loc_8045B198;
}

loc_8045AB34:
{
    r0 = MemoryAlias::ReadResolved8(guest_range_1, 0u, r3);
    r4 = 0;
    r3 = 2146435072;
    MemoryAlias::FlatWriteRam32((r1 + 28), r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryAlias::FlatWriteRam32((r1 + 24), r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045AB60;
    }
}

loc_8045AB50:
{
    r0 = 0x80000000u;
    MemoryAlias::FlatWriteRam32((r1 + 28), r4);
    r0 = (r0 | 2146435072);
    MemoryAlias::FlatWriteRam32((r1 + 24), r0);
}

loc_8045AB60:
{
    r0 = MemoryAlias::FlatRead32((r1 + 24));
    r0 = (r0 | 524288);
    MemoryAlias::FlatWriteRam32((r1 + 24), r0);
    f1.d = MemoryAlias::FlatReadFloat64((r1 + 24));
    goto loc_8045B198;
}

loc_8045AB74:
{
    r0 = MemoryAlias::ReadResolved32(guest_range_1, 4u, (r3 + 4));
    r4 = (r1 + 257);
    MemoryAlias::FlatWriteRam32((r1 + 256), r0);
    r21 = MemoryAlias::ReadResolved32(guest_range_1, 0u, r3);
    r0 = MemoryAlias::FlatRead8((r1 + 256));
    r12 = MemoryAlias::ReadResolved32(guest_range_1, 8u, (r3 + 8));
    r28 = (r4 + r0);
    {
        const auto resolved_pair = MemoryAlias::ReadResolvedPair32(guest_range_1, 12u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryAlias::ReadResolved32(guest_range_1, 12u, (r3 + 12));
            r10 = MemoryAlias::ReadResolved32(guest_range_1, 16u, (r3 + 16));
        }
    }
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r4), static_cast<uint32_t>(r28));
}

loc_8045AB9C:
{
    {
        const auto resolved_pair = MemoryAlias::ReadResolvedPair32(guest_range_1, 20u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryAlias::ReadResolved32(guest_range_1, 20u, (r3 + 20));
            r8 = MemoryAlias::ReadResolved32(guest_range_1, 24u, (r3 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryAlias::ReadResolvedPair32(guest_range_1, 28u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryAlias::ReadResolved32(guest_range_1, 28u, (r3 + 28));
            r6 = MemoryAlias::ReadResolved32(guest_range_1, 32u, (r3 + 32));
        }
    }
    r5 = MemoryAlias::ReadResolved32(guest_range_1, 36u, (r3 + 36));
    r0 = MemoryAlias::ReadResolved16(guest_range_1, 40u, (r3 + 40));
    guest_range_3 = MemoryAlias::ResolveRangeHost((r1 + 252), 0, 42u, false, true);
    MemoryAlias::WriteResolved32(guest_range_3, 0u, (r1 + 252), r21);
    if (!MemoryAlias::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryAlias::WriteResolved32(guest_range_3, 8u, (r1 + 260), r12);
        MemoryAlias::WriteResolved32(guest_range_3, 12u, (r1 + 264), r11);
    }
    if (!MemoryAlias::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryAlias::WriteResolved32(guest_range_3, 16u, (r1 + 268), r10);
        MemoryAlias::WriteResolved32(guest_range_3, 20u, (r1 + 272), r9);
    }
    if (!MemoryAlias::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryAlias::WriteResolved32(guest_range_3, 24u, (r1 + 276), r8);
        MemoryAlias::WriteResolved32(guest_range_3, 28u, (r1 + 280), r7);
    }
    if (!MemoryAlias::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryAlias::WriteResolved32(guest_range_3, 32u, (r1 + 284), r6);
        MemoryAlias::WriteResolved32(guest_range_3, 36u, (r1 + 288), r5);
    }
    MemoryAlias::WriteResolved16(guest_range_3, 40u, (r1 + 292), static_cast<uint16_t>(r0));
    if (((cr & 0x08000000u) == 0)) {
        goto loc_8045AC98;
    }
}

loc_8045ABE0:
{
    r0 = (r28 - r4);
    r3 = (r28 + -8);
}

loc_8045ABEC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_8045AC74;
    }
}

loc_8045ABF0:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_8045AC74;
    }
}

loc_8045ABF4:
{
    r0 = (r3 + 7);
    r0 = (r0 - r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_8045AC08:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3))) {
        goto loc_8045AC74;
    }
}

loc_8045AC0C:
{
    r3 = MemoryAlias::FlatRead8(r4);
    r0 = (r3 + -48);
    MemoryAlias::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r3 = MemoryAlias::FlatRead8((r4 + 1));
    r0 = (r3 + -48);
    MemoryAlias::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryAlias::FlatRead8((r4 + 2));
    r0 = (r3 + -48);
    MemoryAlias::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    r3 = MemoryAlias::FlatRead8((r4 + 3));
    r0 = (r3 + -48);
    MemoryAlias::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
    r3 = MemoryAlias::FlatRead8((r4 + 4));
    r0 = (r3 + -48);
    MemoryAlias::FlatWrite8((r4 + 4), static_cast<uint8_t>(r0));
    r3 = MemoryAlias::FlatRead8((r4 + 5));
    r0 = (r3 + -48);
    MemoryAlias::FlatWrite8((r4 + 5), static_cast<uint8_t>(r0));
    r3 = MemoryAlias::FlatRead8((r4 + 6));
    r0 = (r3 + -48);
    MemoryAlias::FlatWrite8((r4 + 6), static_cast<uint8_t>(r0));
    r3 = MemoryAlias::FlatRead8((r4 + 7));
    r0 = (r3 + -48);
    MemoryAlias::FlatWrite8((r4 + 7), static_cast<uint8_t>(r0));
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8045AC0C;
    }
}

loc_8045AC74:
{
    r0 = (r28 - r4);
    ctr = r0;
}

loc_8045AC80:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r28))) {
        goto loc_8045AC98;
    }
}

loc_8045AC84:
{
    r3 = MemoryAlias::FlatRead8(r4);
    r0 = (r3 + -48);
    MemoryAlias::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8045AC84;
    }
}

loc_8045AC98:
{
    r3 = MemoryAlias::FlatRead8((r1 + 256));
    r4 = 0x80570000u;
    r4 = (r4 + 11528);
    r5 = MemoryAlias::FlatRead16((r1 + 254));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (r3 + -1);
    r3 = (r1 + 208);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r4 = (r4 + 184);
    r0 = (r5 + r0);
    MemoryAlias::FlatWriteRam16((r1 + 254), static_cast<uint16_t>(r0));
    r29 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = 308;
    if constexpr (KnownRegArgsCpuCall<0x80459C9Cu>(&func_80459C9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80459C9C_4226 = func_80459C9C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80459C9C_4226;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80459C9Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r3 = (r1 + 208);
    r4 = (r1 + 252);
    if constexpr (KnownRegArgsCpuCall<0x8045A188u>(&func_8045A188)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8045A188_465E = func_8045A188_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8045A188_465E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8045A188u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8045ACDC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045AD08;
    }
}

loc_8045ACE0:
{
    r0 = MemoryAlias::FlatRead8(r27);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045ACF4;
    }
}

loc_8045ACEC:
{
    f2.d = MemoryAlias::FlatReadFloat64((r2 + -4336));
    goto loc_8045ACF8;
}

loc_8045ACF4:
{
    f2.d = MemoryAlias::FlatReadFloat64((r2 + -4328));
}

loc_8045ACF8:
{
    r3 = 0x80790000u;
    f1.d = MemoryAlias::FlatReadFloat32((r3 + 25020));
    if constexpr (KnownRegArgsCpuCall<0x80467F6Cu>(&func_80467F6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_80467F6C_4D66 = func_80467F6C_ra0_6_8_0(ctx, f1.d, f2.d);
        r3 = regargs_result_80467F6C_4D66;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->xer = xer;
        InvokeDirectCpu<0x80467F6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
    }
    goto loc_8045B198;
}

loc_8045AD08:
{
    r0 = MemoryAlias::FlatRead8((r1 + 257));
    r7 = 0x80610000u;
    MemoryAlias::FlatWriteRam32((r1 + 300), r0);
    r4 = (r1 + 258);
    f2.d = MemoryAlias::FlatReadFloat64((r2 + -4304));
    r7 = (r7 + -2944);
    f0.d = MemoryAlias::FlatReadFloat64((r1 + 296));
    r3 = 0x80000000u;
    f31.d = (f0.d - f2.d);
    goto loc_8045AE6C;
}

loc_8045AD30:
{
    r5 = (r28 - r4);
    r10 = 0;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r0 = (r0_rot_5 & -536870912);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & 1);
    r0 = (r0 - r5);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & -1);
    r6 = (r0 + r5);
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8045AD54;
    }
}

loc_8045AD50:
{
    r6 = 8;
}

loc_8045AD54:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8045AD58:
{
    r5 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8045AE34;
    }
}

loc_8045AD60:
{
}

loc_8045AD64:
{
    r8 = (r6 + -8);
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(8))) {
        goto loc_8045AE0C;
    }
}

loc_8045AD6C:
{
    r9 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8045AD84;
    }
}

loc_8045AD74:
{
    r0 = (r3 + -2);
}

loc_8045AD7C:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(r0))) {
        goto loc_8045AD84;
    }
}

loc_8045AD80:
{
    r9 = 1;
}

loc_8045AD84:
{
}

loc_8045AD88:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_8045AE0C;
    }
}

loc_8045AD8C:
{
    r0 = (r8 + 7);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_7 & 536870911);
    ctr = r0;
}

loc_8045AD9C:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(0))) {
        goto loc_8045AE0C;
    }
}

loc_8045ADA0:
{
    r0 = (r10 * 10);
    guest_range_4 = MemoryAlias::ResolveRangeHost(r4, 0, 8u, true, false);
    r9 = MemoryAlias::ReadResolved8(guest_range_4, 0u, r4);
    r8 = MemoryAlias::ReadResolved8(guest_range_4, 1u, (r4 + 1));
    r5 = (r5 + 8);
    r21 = MemoryAlias::ReadResolved8(guest_range_4, 2u, (r4 + 2));
    r0 = (r9 + r0);
    r0 = (r0 * 10);
    r12 = MemoryAlias::ReadResolved8(guest_range_4, 3u, (r4 + 3));
    r11 = MemoryAlias::ReadResolved8(guest_range_4, 4u, (r4 + 4));
    r10 = MemoryAlias::ReadResolved8(guest_range_4, 5u, (r4 + 5));
    r0 = (r8 + r0);
    r9 = MemoryAlias::ReadResolved8(guest_range_4, 6u, (r4 + 6));
    r0 = (r0 * 10);
    r8 = MemoryAlias::ReadResolved8(guest_range_4, 7u, (r4 + 7));
    r4 = (r4 + 8);
    r0 = (r21 + r0);
    r0 = (r0 * 10);
    r0 = (r12 + r0);
    r0 = (r0 * 10);
    r0 = (r11 + r0);
    r0 = (r0 * 10);
    r0 = (r10 + r0);
    r0 = (r0 * 10);
    r0 = (r9 + r0);
    r0 = (r0 * 10);
    r10 = (r8 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8045ADA0;
    }
}

loc_8045AE0C:
{
    r0 = (r6 - r5);
    ctr = r0;
}

loc_8045AE18:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r6))) {
        goto loc_8045AE34;
    }
}

loc_8045AE1C:
{
    r0 = (r10 * 10);
    r8 = MemoryAlias::FlatRead8(r4);
    r5 = (r5 + 1);
    r4 = (r4 + 1);
    r10 = (r8 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8045AE1C;
    }
}

loc_8045AE34:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r0 = (r0_rot_10 & -8);
    MemoryAlias::FlatWriteRam32((r1 + 308), r10);
    r5 = (r7 + r0);
}

loc_8045AE44:
{
    f1.d = MemoryAlias::FlatReadFloat64((r5 + -8));
    f0.d = MemoryAlias::FlatReadFloat64((r1 + 304));
    f1.d = (f31.d * f1.d);
    f0.d = (f0.d - f2.d);
    f0.d = (f1.d + f0.d);
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_8045AE64;
    }
}

loc_8045AE5C:
{
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8045AE60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8045AE74;
    }
}

loc_8045AE64:
{
    f31.d = f0.d;
    r29 = (r29 - r6);
}

loc_8045AE6C:
{
}

loc_8045AE70:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r28))) {
        goto loc_8045AD30;
    }
}

loc_8045AE74:
{
}

loc_8045AE78:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(0))) {
        goto loc_8045AEA4;
    }
}

loc_8045AE7C:
{
    r0 = (0 - r29);
    f2.d = MemoryAlias::FlatReadFloat64((r2 + -4296));
    r0 = (r0 ^ -2147483648);
    MemoryAlias::FlatWriteRam32((r1 + 300), r0);
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -4320));
    f0.d = MemoryAlias::FlatReadFloat64((r1 + 296));
    f2.d = (f0.d - f2.d);
    ctx->lr = 0x8045AE9Cu;
    if constexpr (KnownRegArgsCpuCall<0x804685F8u>(&func_804685F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804685F8_64EF = func_804685F8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804685F8_64EF);
        r4 = static_cast<uint32_t>(regargs_result_804685F8_64EF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        xer = ctx->xer;
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804685F8u>(ctx);
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
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        xer = ctx->xer;
    }
    f31.d = (f31.d / f1.d);
    goto loc_8045AEC4;
}

loc_8045AEA4:
{
    r0 = (r29 ^ -2147483648);
    MemoryAlias::FlatWriteRam32((r1 + 308), r0);
    f2.d = MemoryAlias::FlatReadFloat64((r2 + -4296));
    f0.d = MemoryAlias::FlatReadFloat64((r1 + 304));
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -4320));
    f2.d = (f0.d - f2.d);
    ctx->lr = 0x8045AEC0u;
    if constexpr (KnownRegArgsCpuCall<0x804685F8u>(&func_804685F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804685F8_70DB = func_804685F8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804685F8_70DB);
        r4 = static_cast<uint32_t>(regargs_result_804685F8_70DB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        xer = ctx->xer;
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804685F8u>(ctx);
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
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        xer = ctx->xer;
    }
    f31.d = (f31.d * f1.d);
}

loc_8045AEC4:
{
    f1.d = f31.d;
    r3 = r29;
    ctx->lr = 0x8045AED0u;
    if constexpr (KnownRegArgsCpuCall<0x80468238u>(&func_80468238)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80468238_7AF8 = func_80468238_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80468238_7AF8);
        r4 = static_cast<uint32_t>(regargs_result_80468238_7AF8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80468238u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f31.d = f1.d;
    MemoryAlias::FlatWriteRamFloat64((r1 + 16), f1.d);
    if constexpr (KnownRegArgsCpuCall<0x8045C0D0u>(&func_8045C0D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8045C0D0_8030 = func_8045C0D0_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8045C0D0_8030);
        r4 = static_cast<uint32_t>(regargs_result_8045C0D0_8030 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8045C0D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8045AEE0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8045AEEC;
    }
}

loc_8045AEE4:
{
    f31.d = MemoryAlias::FlatReadFloat64((r2 + -4312));
    MemoryAlias::FlatWriteRamFloat64((r1 + 16), f31.d);
}

loc_8045AEEC:
{
    f1.d = f31.d;
    r3 = (r1 + 164);
    r27 = 0;
    ctx->lr = 0x8045AEFCu;
    if constexpr (KnownRegArgsCpuCall<0x8045A764u>(&func_8045A764)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8045A764_8617 = func_8045A764_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045A764_8617);
        r4 = static_cast<uint32_t>(regargs_result_8045A764_8617 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8045A764u>(ctx);
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
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = (r1 + 164);
    r4 = (r1 + 252);
    if constexpr (KnownRegArgsCpuCall<0x8045A0A4u>(&func_8045A0A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8045A0A4_8F42 = func_8045A0A4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045A0A4_8F42);
        r4 = static_cast<uint32_t>(regargs_result_8045A0A4_8F42 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8045A0A4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_8045AF0C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8045B184;
    }
}

loc_8045AF10:
{
    r3 = (r1 + 164);
    r4 = (r1 + 252);
    if constexpr (KnownRegArgsCpuCall<0x8045A188u>(&func_8045A188)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8045A188_9575 = func_8045A188_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8045A188_9575;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8045A188u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8045AF20:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045AF28;
    }
}

loc_8045AF24:
{
    r27 = 1;
}

loc_8045AF28:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r27));
    MemoryAlias::FlatWriteRamFloat64((r1 + 8), f31.d);
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r28 = (r28_rot_1 & 134217727);
    r29 = 1;
    r30 = 0;
    r31 = -1;
}

loc_8045AF40:
{
}

loc_8045AF44:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_8045AF74;
    }
}

loc_8045AF48:
{
    r0 = MemoryAlias::FlatRead32((r1 + 12));
    r3 = MemoryAlias::FlatRead32((r1 + 8));
    r0_addc_left_2 = r0;
    r0 = (r0_addc_left_2 + r29);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_left_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r29)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    stackword34 = r0;
    MemoryAlias::FlatWriteRam32((r1 + 12), r0);
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r3 + r30);
    r0 = (r0 + r0_ca_2);
    stackword35 = r0;
    MemoryAlias::FlatWriteRam32((r1 + 8), r0);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword35), static_cast<uint32_t>(stackword34));
    if constexpr (KnownRegArgsCpuCall<0x8045C0D0u>(&func_8045C0D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8045C0D0_9FBD = func_8045C0D0_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8045C0D0_9FBD);
        r4 = static_cast<uint32_t>(regargs_result_8045C0D0_9FBD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8045C0D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8045AF6C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_8045B184;
    }
}

loc_8045AF70:
{
    goto loc_8045AF8C;
}

loc_8045AF74:
{
    r0 = MemoryAlias::FlatRead32((r1 + 12));
    r3 = MemoryAlias::FlatRead32((r1 + 8));
    r0_addc_left_3 = r0;
    r0 = (r0_addc_left_3 + r31);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_left_3)) + static_cast<uint64_t>(static_cast<uint32_t>(r31)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryAlias::FlatWriteRam32((r1 + 12), r0);
    r0_ca_3 = (xer >> 29) & 1u;
    r0 = (r3 + r31);
    r0 = (r0 + r0_ca_3);
    MemoryAlias::FlatWriteRam32((r1 + 8), r0);
}

loc_8045AF8C:
{
    f1.d = MemoryAlias::FlatReadFloat64((r1 + 8));
    r3 = (r1 + 120);
    ctx->lr = 0x8045AF98u;
    if constexpr (KnownRegArgsCpuCall<0x8045A764u>(&func_8045A764)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8045A764_A7FF = func_8045A764_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045A764_A7FF);
        r4 = static_cast<uint32_t>(regargs_result_8045A764_A7FF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8045A764u>(ctx);
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
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8045AF9C:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8045AFB4;
    }
}

loc_8045AFA0:
{
    r3 = (r1 + 120);
    r4 = (r1 + 252);
    if constexpr (KnownRegArgsCpuCall<0x8045A188u>(&func_8045A188)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8045A188_B1BE = func_8045A188_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8045A188_B1BE;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8045A188u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8045AFB0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045B124;
    }
}

loc_8045AFB4:
{
}

loc_8045AFB8:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_8045B0C0;
    }
}

loc_8045AFBC:
{
    r3 = (r1 + 252);
    r4 = (r1 + 120);
    if constexpr (KnownRegArgsCpuCall<0x8045A188u>(&func_8045A188)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8045A188_B83B = func_8045A188_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8045A188_B83B;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8045A188u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8045AFCC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8045B0C0;
    }
}

loc_8045AFD0:
{
    f0.d = f31.d;
    f31.d = MemoryAlias::FlatReadFloat64((r1 + 8));
    r21 = MemoryAlias::FlatRead32((r1 + 164));
    r12 = MemoryAlias::FlatRead32((r1 + 120));
    r22 = MemoryAlias::FlatRead32((r1 + 168));
    r11 = MemoryAlias::FlatRead32((r1 + 124));
    r23 = MemoryAlias::FlatRead32((r1 + 172));
    r10 = MemoryAlias::FlatRead32((r1 + 128));
    r24 = MemoryAlias::FlatRead32((r1 + 176));
    r9 = MemoryAlias::FlatRead32((r1 + 132));
    r25 = MemoryAlias::FlatRead32((r1 + 180));
    r8 = MemoryAlias::FlatRead32((r1 + 136));
    r26 = MemoryAlias::FlatRead32((r1 + 184));
    r7 = MemoryAlias::FlatRead32((r1 + 140));
    r31 = MemoryAlias::FlatRead32((r1 + 188));
    r6 = MemoryAlias::FlatRead32((r1 + 144));
    r30 = MemoryAlias::FlatRead32((r1 + 192));
    r5 = MemoryAlias::FlatRead32((r1 + 148));
    r29 = MemoryAlias::FlatRead32((r1 + 196));
    r4 = MemoryAlias::FlatRead32((r1 + 152));
    r28 = MemoryAlias::FlatRead32((r1 + 200));
    r3 = MemoryAlias::FlatRead32((r1 + 156));
    r27 = MemoryAlias::FlatRead16((r1 + 204));
    r0 = MemoryAlias::FlatRead16((r1 + 160));
    MemoryAlias::FlatWriteRam32((r1 + 76), r21);
    MemoryAlias::FlatWriteRam32((r1 + 80), r22);
    MemoryAlias::FlatWriteRam32((r1 + 84), r23);
    MemoryAlias::FlatWriteRam32((r1 + 88), r24);
    MemoryAlias::FlatWriteRam32((r1 + 92), r25);
    MemoryAlias::FlatWriteRam32((r1 + 96), r26);
    MemoryAlias::FlatWriteRam32((r1 + 100), r31);
    MemoryAlias::FlatWriteRam32((r1 + 104), r30);
    MemoryAlias::FlatWriteRam32((r1 + 108), r29);
    MemoryAlias::FlatWriteRam32((r1 + 112), r28);
    MemoryAlias::FlatWriteRam16((r1 + 116), static_cast<uint16_t>(r27));
    MemoryAlias::FlatWriteRam32((r1 + 164), r12);
    MemoryAlias::FlatWriteRam32((r1 + 168), r11);
    MemoryAlias::FlatWriteRam32((r1 + 172), r10);
    MemoryAlias::FlatWriteRam32((r1 + 176), r9);
    MemoryAlias::FlatWriteRam32((r1 + 180), r8);
    MemoryAlias::FlatWriteRam32((r1 + 184), r7);
    MemoryAlias::FlatWriteRam32((r1 + 188), r6);
    MemoryAlias::FlatWriteRam32((r1 + 192), r5);
    MemoryAlias::FlatWriteRam32((r1 + 196), r4);
    MemoryAlias::FlatWriteRam32((r1 + 200), r3);
    MemoryAlias::FlatWriteRam16((r1 + 204), static_cast<uint16_t>(r0));
    MemoryAlias::FlatWriteRam32((r1 + 120), r21);
    MemoryAlias::FlatWriteRam32((r1 + 124), r22);
    MemoryAlias::FlatWriteRam32((r1 + 128), r23);
    MemoryAlias::FlatWriteRam32((r1 + 132), r24);
    MemoryAlias::FlatWriteRam32((r1 + 136), r25);
    MemoryAlias::FlatWriteRam32((r1 + 140), r26);
    MemoryAlias::FlatWriteRam32((r1 + 144), r31);
    MemoryAlias::FlatWriteRam32((r1 + 148), r30);
    MemoryAlias::FlatWriteRam32((r1 + 152), r29);
    MemoryAlias::FlatWriteRam32((r1 + 156), r28);
    MemoryAlias::FlatWriteRam16((r1 + 160), static_cast<uint16_t>(r27));
    MemoryAlias::FlatWriteRamFloat64((r1 + 16), f31.d);
    MemoryAlias::FlatWriteRamFloat64((r1 + 8), f0.d);
    goto loc_8045B124;
}

loc_8045B0C0:
{
    guest_range_5 = MemoryAlias::ResolveRangeHost((r1 + 8), 0, 154u, true, false);
    {
        const auto resolved_pair = MemoryAlias::ReadResolvedPair32(guest_range_5, 112u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryAlias::ReadResolved32(guest_range_5, 112u, (r1 + 120));
            r11 = MemoryAlias::ReadResolved32(guest_range_5, 116u, (r1 + 124));
        }
    }
    {
        const auto resolved_pair = MemoryAlias::ReadResolvedPair32(guest_range_5, 120u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryAlias::ReadResolved32(guest_range_5, 120u, (r1 + 128));
            r9 = MemoryAlias::ReadResolved32(guest_range_5, 124u, (r1 + 132));
        }
    }
    {
        const auto resolved_pair = MemoryAlias::ReadResolvedPair32(guest_range_5, 128u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryAlias::ReadResolved32(guest_range_5, 128u, (r1 + 136));
            r7 = MemoryAlias::ReadResolved32(guest_range_5, 132u, (r1 + 140));
        }
    }
    {
        const auto resolved_pair = MemoryAlias::ReadResolvedPair32(guest_range_5, 136u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryAlias::ReadResolved32(guest_range_5, 136u, (r1 + 144));
            r5 = MemoryAlias::ReadResolved32(guest_range_5, 140u, (r1 + 148));
        }
    }
    {
        const auto resolved_pair = MemoryAlias::ReadResolvedPair32(guest_range_5, 144u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r4 = MemoryAlias::ReadResolved32(guest_range_5, 144u, (r1 + 152));
            r3 = MemoryAlias::ReadResolved32(guest_range_5, 148u, (r1 + 156));
        }
    }
    r0 = MemoryAlias::ReadResolved16(guest_range_5, 152u, (r1 + 160));
    f31.d = MemoryAlias::ReadResolvedFloat64(guest_range_5, 0u, (r1 + 8));
    guest_range_6 = MemoryAlias::ResolveRangeHost((r1 + 16), 0, 190u, false, true);
    if (!MemoryAlias::WriteResolvedPair32(guest_range_6, 148u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryAlias::WriteResolved32(guest_range_6, 148u, (r1 + 164), r12);
        MemoryAlias::WriteResolved32(guest_range_6, 152u, (r1 + 168), r11);
    }
    if (!MemoryAlias::WriteResolvedPair32(guest_range_6, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryAlias::WriteResolved32(guest_range_6, 156u, (r1 + 172), r10);
        MemoryAlias::WriteResolved32(guest_range_6, 160u, (r1 + 176), r9);
    }
    if (!MemoryAlias::WriteResolvedPair32(guest_range_6, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryAlias::WriteResolved32(guest_range_6, 164u, (r1 + 180), r8);
        MemoryAlias::WriteResolved32(guest_range_6, 168u, (r1 + 184), r7);
    }
    if (!MemoryAlias::WriteResolvedPair32(guest_range_6, 172u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryAlias::WriteResolved32(guest_range_6, 172u, (r1 + 188), r6);
        MemoryAlias::WriteResolved32(guest_range_6, 176u, (r1 + 192), r5);
    }
    if (!MemoryAlias::WriteResolvedPair32(guest_range_6, 180u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryAlias::WriteResolved32(guest_range_6, 180u, (r1 + 196), r4);
        MemoryAlias::WriteResolved32(guest_range_6, 184u, (r1 + 200), r3);
    }
    MemoryAlias::WriteResolved16(guest_range_6, 188u, (r1 + 204), static_cast<uint16_t>(r0));
    MemoryAlias::WriteResolvedFloat64(guest_range_6, 0u, (r1 + 16), f31.d);
    goto loc_8045AF40;
}

loc_8045B124:
{
    r3 = (r1 + 76);
    r4 = (r1 + 252);
    r5 = (r1 + 164);
    if constexpr (KnownRegArgsCpuCall<0x8045A288u>(&func_8045A288)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8045A288_DAF5 = func_8045A288_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045A288_DAF5;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8045A288u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = (r1 + 32);
    r4 = (r1 + 120);
    r5 = (r1 + 252);
    if constexpr (KnownRegArgsCpuCall<0x8045A288u>(&func_8045A288)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8045A288_E1C1 = func_8045A288_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045A288_E1C1;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8045A288u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = (r1 + 76);
    r4 = (r1 + 32);
    if constexpr (KnownRegArgsCpuCall<0x8045A0A4u>(&func_8045A0A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8045A0A4_E81F = func_8045A0A4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045A0A4_E81F);
        r4 = static_cast<uint32_t>(regargs_result_8045A0A4_E81F >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8045A0A4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_8045B154:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045B16C;
    }
}

loc_8045B158:
{
    r0 = MemoryAlias::FlatRead32((r1 + 20));
    r0 = (r0 & 1);
}

loc_8045B160:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045B184;
    }
}

loc_8045B164:
{
    f31.d = MemoryAlias::FlatReadFloat64((r1 + 8));
    goto loc_8045B184;
}

loc_8045B16C:
{
    r3 = (r1 + 76);
    r4 = (r1 + 32);
    if constexpr (KnownRegArgsCpuCall<0x8045A188u>(&func_8045A188)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8045A188_EF8B = func_8045A188_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8045A188_EF8B;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8045A188u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8045B17C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8045B184;
    }
}

loc_8045B180:
{
    f31.d = MemoryAlias::FlatReadFloat64((r1 + 8));
}

loc_8045B184:
{
    r0 = MemoryAlias::FlatRead8((r1 + 252));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045B194;
    }
}

loc_8045B190:
{
    f31.d = (-(f31.d));
}

loc_8045B194:
{
    f1.d = f31.d;
}

loc_8045B198:
{
    r11 = (r1 + 368);
    // psq_load w=0 quant=0 (using MemoryAlias::PPC_PsqL)
    f31.d = MemoryAlias::FlatReadFloat64((r1 + 368));
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_2 = MemoryAlias::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryAlias::FlatRead32((r1 + 388));
    ctx->lr = r0;
    r1 = (r1 + 384);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8045AA6C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8045AA6C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8045AA6C func_8045AA6C preserves=true fpr_mask=0x00000000
