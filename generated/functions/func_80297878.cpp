#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012A688(CpuContext* ctx);
extern "C" uint32_t func_8012A688_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80297878_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t addr_psqx_80297C28_loc_0 = 0;
    uint32_t addr_stfsx_80297944_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80297878;

loc_80297878:
{
    MemoryInline::FlatWriteRam32((r1 + -208), r1);
    r1 = (r1 + -208);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 192), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 192);
    // inline leaf 0x80457464 (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    // end of inlined leaf 0x80457464
    r31 = r3;
    r19 = r4;
    r20 = r5;
    r21 = r6;
    r22 = r7;
    r23 = r8;
    r3 = (r1 + 28);
    ctx->lr = 0x802978B4u;
    if constexpr (KnownRegArgsCpuCall<0x8012A688u>(&func_8012A688)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012A688_A7D = func_8012A688_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8012A688_A7D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8012A688u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 48);
    ctx->lr = 0x802978BCu;
    if constexpr (KnownRegArgsCpuCall<0x8012A688u>(&func_8012A688)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012A688_CC3 = func_8012A688_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8012A688_CC3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8012A688u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 68);
    ctx->lr = 0x802978C4u;
    if constexpr (KnownRegArgsCpuCall<0x8012A688u>(&func_8012A688)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012A688_F09 = func_8012A688_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8012A688_F09;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8012A688u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 88);
    ctx->lr = 0x802978CCu;
    if constexpr (KnownRegArgsCpuCall<0x8012A688u>(&func_8012A688)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012A688_114F = func_8012A688_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8012A688_114F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8012A688u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 108);
    ctx->lr = 0x802978D4u;
    if constexpr (KnownRegArgsCpuCall<0x8012A688u>(&func_8012A688)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012A688_1398 = func_8012A688_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8012A688_1398;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8012A688u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r26 = 0;
    r24 = 0;
    r30 = (static_cast<int32_t>(static_cast<int8_t>(r23)));
}

loc_802978E4:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(1))) {
        goto loc_80297BE0;
    }
}

loc_802978E8:
{
    r25 = 0;
    r28 = r21;
    r29 = r20;
    r27 = (r1 + 28);
    r18 = (r1 + 8);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -14188));
    goto loc_80297954;
}

loc_80297904:
{
    f1.d = MemoryInline::FlatReadFloat32(r28);
    f0.d = MemoryInline::FlatReadFloat32((r19 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80297914:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80297948;
    }
}

loc_8029791C:
{
    r26 = 1;
    r3 = r27;
    r4 = r29;
    // inline leaf 0x80297C48 (19 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 20u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_2, 0u, r4);
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 20u, false, true);
    MemoryInline::WriteResolved16(guest_range_3, 0u, r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r4 + 2));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r4 + 3));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r4 + 4));
    MemoryInline::WriteResolved16(guest_range_3, 4u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r4 + 6));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r3 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r4 + 7));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r3 + 7), static_cast<uint8_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r4 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r3 + 8), r5);
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r3 + 12), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r4 + 16));
    MemoryInline::WriteResolved32(guest_range_3, 16u, (r3 + 16), r0);
    // end of inlined leaf 0x80297C48
    r27 = (r27 + 20);
    f0.d = MemoryInline::FlatReadFloat32(r28);
    r0 = r24;
    r24 = (r24 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    addr_stfsx_80297944_loc_0 = (r18 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80297944_loc_0, f0.d);
}

loc_80297948:
{
    r28 = (r28 + 4);
    r29 = (r29 + 20);
    r25 = (r25 + 1);
}

loc_80297954:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r25)));
}

loc_8029795C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r30))) {
        goto loc_80297904;
    }
}

loc_80297960:
{
}

loc_80297964:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(1))) {
        goto loc_80297AD0;
    }
}

loc_80297968:
{
    r30 = (static_cast<int32_t>(static_cast<int8_t>(r24)));
}

loc_80297970:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(1))) {
        goto loc_802979BC;
    }
}

loc_80297974:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32(r22, f0.d);
    r0 = MemoryInline::FlatRead16((r1 + 28));
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 30));
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 31));
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 32));
    MemoryInline::FlatWrite16((r31 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 34));
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 35));
    MemoryInline::FlatWrite8((r31 + 7), static_cast<uint8_t>(r0));
    r3 = (r31 + 8);
    r4 = (r1 + 36);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_80297C24;
}

loc_802979BC:
{
    r27 = 0;
    r29 = (r1 + 8);
    r28 = (r1 + 28);
    goto loc_80297A7C;
}

loc_802979CC:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
}

loc_802979D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80297A20;
    }
}

loc_802979D8:
{
    f0.d = MemoryInline::FlatReadFloat32(r29);
    MemoryInline::FlatWriteFloat32(r21, f0.d);
    r0 = MemoryInline::FlatRead16(r28);
    MemoryInline::FlatWrite16(r20, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r28 + 2));
    MemoryInline::FlatWrite8((r20 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r28 + 3));
    MemoryInline::FlatWrite8((r20 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 4));
    MemoryInline::FlatWrite16((r20 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r28 + 6));
    MemoryInline::FlatWrite8((r20 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r28 + 7));
    MemoryInline::FlatWrite8((r20 + 7), static_cast<uint8_t>(r0));
    r3 = (r20 + 8);
    r4 = (r28 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_80297A70;
}

loc_80297A20:
{
    f1.d = MemoryInline::FlatReadFloat32(r21);
    f0.d = MemoryInline::FlatReadFloat32(r29);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80297A2C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80297A70;
    }
}

loc_80297A30:
{
    MemoryInline::FlatWriteFloat32(r21, f0.d);
    r0 = MemoryInline::FlatRead16(r28);
    MemoryInline::FlatWrite16(r20, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r28 + 2));
    MemoryInline::FlatWrite8((r20 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r28 + 3));
    MemoryInline::FlatWrite8((r20 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 4));
    MemoryInline::FlatWrite16((r20 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r28 + 6));
    MemoryInline::FlatWrite8((r20 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r28 + 7));
    MemoryInline::FlatWrite8((r20 + 7), static_cast<uint8_t>(r0));
    r3 = (r20 + 8);
    r4 = (r28 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_80297A70:
{
    r29 = (r29 + 4);
    r28 = (r28 + 20);
    r27 = (r27 + 1);
}

loc_80297A7C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
}

loc_80297A84:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r30))) {
        goto loc_802979CC;
    }
}

loc_80297A88:
{
    f0.d = MemoryInline::FlatReadFloat32(r21);
    MemoryInline::FlatWriteFloat32(r22, f0.d);
    r0 = MemoryInline::FlatRead16(r20);
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r20 + 2));
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r20 + 3));
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r20 + 4));
    MemoryInline::FlatWrite16((r31 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r20 + 6));
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r20 + 7));
    MemoryInline::FlatWrite8((r31 + 7), static_cast<uint8_t>(r0));
    r3 = (r31 + 8);
    r4 = (r20 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_80297C24;
}

loc_80297AD0:
{
    r27 = 0;
    r19 = (static_cast<int32_t>(static_cast<int8_t>(r23)));
    goto loc_80297B8C;
}

loc_80297ADC:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
}

loc_80297AE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80297B30;
    }
}

loc_80297AE8:
{
    f0.d = MemoryInline::FlatReadFloat32(r21);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    r0 = MemoryInline::FlatRead16(r20);
    MemoryInline::FlatWriteRam16((r1 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r20 + 2));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r20 + 3));
    MemoryInline::FlatWriteRam8((r1 + 31), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r20 + 4));
    MemoryInline::FlatWriteRam16((r1 + 32), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r20 + 6));
    MemoryInline::FlatWriteRam8((r1 + 34), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r20 + 7));
    MemoryInline::FlatWriteRam8((r1 + 35), static_cast<uint8_t>(r0));
    r3 = (r1 + 36);
    r4 = (r20 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_80297B80;
}

loc_80297B30:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32(r21);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80297B3C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80297B80;
    }
}

loc_80297B40:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    r0 = MemoryInline::FlatRead16(r20);
    MemoryInline::FlatWriteRam16((r1 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r20 + 2));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r20 + 3));
    MemoryInline::FlatWriteRam8((r1 + 31), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r20 + 4));
    MemoryInline::FlatWriteRam16((r1 + 32), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r20 + 6));
    MemoryInline::FlatWriteRam8((r1 + 34), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r20 + 7));
    MemoryInline::FlatWriteRam8((r1 + 35), static_cast<uint8_t>(r0));
    r3 = (r1 + 36);
    r4 = (r20 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_80297B80:
{
    r21 = (r21 + 4);
    r20 = (r20 + 20);
    r27 = (r27 + 1);
}

loc_80297B8C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
}

loc_80297B94:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r19))) {
        goto loc_80297ADC;
    }
}

loc_80297B98:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32(r22, f0.d);
    r0 = MemoryInline::FlatRead16((r1 + 28));
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 30));
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 31));
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 32));
    MemoryInline::FlatWrite16((r31 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 34));
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 35));
    MemoryInline::FlatWrite8((r31 + 7), static_cast<uint8_t>(r0));
    r3 = (r31 + 8);
    r4 = (r1 + 36);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_80297C24;
}

loc_80297BE0:
{
    f0.d = MemoryInline::FlatReadFloat32(r21);
    MemoryInline::FlatWriteFloat32(r22, f0.d);
    r0 = MemoryInline::FlatRead16(r20);
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r20 + 2));
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r20 + 3));
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r20 + 4));
    MemoryInline::FlatWrite16((r31 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r20 + 6));
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r20 + 7));
    MemoryInline::FlatWrite8((r31 + 7), static_cast<uint8_t>(r0));
    r3 = (r31 + 8);
    r4 = (r20 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_80297C24:
{
    r0 = 200;
    addr_psqx_80297C28_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80297C28_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 192));
    r11 = (r1 + 192);
    // inline leaf 0x804574B0 (15 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    // end of inlined leaf 0x804574B0
    r0 = MemoryInline::FlatRead32((r1 + 212));
    ctx->lr = r0;
    r1 = (r1 + 208);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80297878(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80297878_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FF gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80297878 func_80297878 preserves=true fpr_mask=0x00000000
