#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80275078(CpuContext* ctx);
extern "C" uint64_t func_80275078_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027ED7C(CpuContext* ctx);
extern "C" uint64_t func_8027ED7C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80315A30(CpuContext* ctx);
extern "C" uint32_t func_80315A30_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803177EC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x803177ECu);
    goto loc_803177EC;

loc_803177EC:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457468 (14 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    // end of inlined leaf 0x80457468
    r21 = r3;
    r22 = r5;
    r23 = r6;
    r30 = MemoryInline::FlatRead32(r4);
    r20 = MemoryInline::FlatRead32((r4 + 4));
    r29 = MemoryInline::FlatRead32((r4 + 8));
    r28 = MemoryInline::FlatRead32((r4 + 12));
    r19 = MemoryInline::FlatRead32((r4 + 16));
    r27 = MemoryInline::FlatRead32((r4 + 20));
    r26 = 0;
    r31 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r31));
    r25 = 0;
    r24 = 0;
    r3 = (r5 & 255);
    if constexpr (KnownRegArgsCpuCall<0x80315A30u>(&func_80315A30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80315A30_993 = func_80315A30_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80315A30_993;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80315A30u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80317848:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80317A0C;
    }
}

loc_8031784C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80317864;
    }
}

loc_80317850:
{
}

loc_80317854:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_80317968;
    }
}

loc_80317858:
{
}

loc_8031785C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_8031787C;
    }
}

loc_80317860:
{
    goto loc_80317B84;
}

loc_80317864:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(8));
}

loc_80317868:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80317B44;
    }
}

loc_8031786C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80317B84;
    }
}

loc_80317870:
{
}

loc_80317874:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(7))) {
        goto loc_80317B00;
    }
}

loc_80317878:
{
    goto loc_80317AB0;
}

loc_8031787C:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80317884:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_80317890;
    }
}

loc_80317888:
{
}

loc_8031788C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80317B84;
    }
}

loc_80317890:
{
    r0 = MemoryInline::FlatRead8(r28);
}

loc_80317898:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_803178A4;
    }
}

loc_8031789C:
{
}

loc_803178A0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_803178DC;
    }
}

loc_803178A4:
{
    r3 = r28;
    ctx->lr = 0x803178ACu;
    if constexpr (KnownRegArgsCpuCall<0x8027ED7Cu>(&func_8027ED7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027ED7C_12A8 = func_8027ED7C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027ED7C_12A8);
        r4 = static_cast<uint32_t>(regargs_result_8027ED7C_12A8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027ED7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803178B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803178E0;
    }
}

loc_803178B4:
{
    r24 = MemoryInline::FlatRead8((r3 + 9));
    r0 = MemoryInline::FlatRead8(r28);
}

loc_803178C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_803178CC;
    }
}

loc_803178C4:
{
    r24 = (r24 + 10);
    goto loc_803178E0;
}

loc_803178CC:
{
}

loc_803178D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_803178E0;
    }
}

loc_803178D4:
{
    r24 = (r24 + 13);
    goto loc_803178E0;
}

loc_803178DC:
{
    r22 = (r22 & 247);
}

loc_803178E0:
{
    r3 = r30;
    ctx->lr = 0x803178E8u;
    if constexpr (KnownRegArgsCpuCall<0x8027ED7Cu>(&func_8027ED7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027ED7C_1808 = func_8027ED7C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027ED7C_1808);
        r4 = static_cast<uint32_t>(regargs_result_8027ED7C_1808 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027ED7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803178EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803178F4;
    }
}

loc_803178F0:
{
    r25 = MemoryInline::FlatRead8((r3 + 9));
}

loc_803178F4:
{
    r26 = (r26 | 1);
    r4 = MemoryInline::FlatRead8(r30);
}

loc_80317900:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(11))) {
        goto loc_8031790C;
    }
}

loc_80317904:
{
    r25 = (r25 + 10);
    goto loc_8031791C;
}

loc_8031790C:
{
}

loc_80317910:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(13))) {
        goto loc_8031791C;
    }
}

loc_80317914:
{
    r0 = (r25 + 13);
    r25 = (r0 & 255);
}

loc_8031791C:
{
    r3 = (r22 & 255);
    r0 = (r3 & 8);
}

loc_80317928:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80317B84;
    }
}

loc_8031792C:
{
    r0 = (r3 & 1);
}

loc_80317934:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80317B84;
    }
}

loc_80317938:
{
    r3 = (r24 & 255);
    r0 = (r25 & 255);
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80317944:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80317B84;
    }
}

loc_80317948:
{
    r0 = MemoryInline::FlatRead8(r28);
}

loc_80317950:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80317B84;
    }
}

loc_80317954:
{
    r0 = 4;
    if (((cr & 0x08000000u) == 0)) {
        goto loc_80317960;
    }
}

loc_8031795C:
{
    r0 = 2;
}

loc_80317960:
{
    r26 = (r26 | r0);
    goto loc_80317B84;
}

loc_80317968:
{
    r0 = MemoryInline::FlatRead8(r28);
}

loc_80317970:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_803179AC;
    }
}

loc_80317974:
{
    r0 = MemoryInline::FlatRead8(r19);
}

loc_8031797C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_803179AC;
    }
}

loc_80317980:
{
    r0 = MemoryInline::FlatRead8(r27);
}

loc_80317988:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_803179AC;
    }
}

loc_8031798C:
{
    r3 = r21;
    r4 = r28;
    r5 = r27;
    r6 = (r1 + 8);
    ctx->lr = 0x803179A0u;
    if constexpr (KnownRegArgsCpuCall<0x80275078u>(&func_80275078)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80275078_2388 = func_80275078_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80275078_2388);
        r4 = static_cast<uint32_t>(regargs_result_80275078_2388 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80275078u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r24 = r3;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r31));
    goto loc_803179B0;
}

loc_803179AC:
{
    r22 = (r22 & 247);
}

loc_803179B0:
{
    r3 = r21;
    r4 = r30;
    r5 = r29;
    r6 = (r1 + 8);
    ctx->lr = 0x803179C4u;
    if constexpr (KnownRegArgsCpuCall<0x80275078u>(&func_80275078)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80275078_27D2 = func_80275078_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80275078_27D2);
        r4 = static_cast<uint32_t>(regargs_result_80275078_27D2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80275078u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r25 = r3;
    r26 = (r26 | 1);
    r4 = (r22 & 255);
    r0 = (r4 & 8);
}

loc_803179D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80317B84;
    }
}

loc_803179DC:
{
    r0 = (r4 & 1);
}

loc_803179E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80317B84;
    }
}

loc_803179E8:
{
    r4 = (r24 & 255);
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_803179F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80317B84;
    }
}

loc_803179F8:
{
    r0 = 4;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80317A04;
    }
}

loc_80317A00:
{
    r0 = 2;
}

loc_80317A04:
{
    r26 = (r26 | r0);
    goto loc_80317B84;
}

loc_80317A0C:
{
    r0 = MemoryInline::FlatRead8(r28);
}

loc_80317A14:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80317A50;
    }
}

loc_80317A18:
{
    r0 = MemoryInline::FlatRead8(r19);
}

loc_80317A20:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80317A50;
    }
}

loc_80317A24:
{
    r0 = MemoryInline::FlatRead8(r27);
}

loc_80317A2C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80317A50;
    }
}

loc_80317A30:
{
    r3 = 0;
    r4 = r28;
    r5 = r27;
    r6 = (r1 + 8);
    ctx->lr = 0x80317A44u;
    if constexpr (KnownRegArgsCpuCall<0x80275078u>(&func_80275078)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80275078_30A7 = func_80275078_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80275078_30A7);
        r4 = static_cast<uint32_t>(regargs_result_80275078_30A7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80275078u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r24 = r3;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r31));
    goto loc_80317A54;
}

loc_80317A50:
{
    r22 = (r22 & 247);
}

loc_80317A54:
{
    r3 = 0;
    r4 = r30;
    r5 = r29;
    r6 = (r1 + 8);
    ctx->lr = 0x80317A68u;
    if constexpr (KnownRegArgsCpuCall<0x80275078u>(&func_80275078)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80275078_34EF = func_80275078_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80275078_34EF);
        r4 = static_cast<uint32_t>(regargs_result_80275078_34EF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80275078u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r25 = r3;
    r26 = (r26 | 1);
    r4 = (r22 & 255);
    r0 = (r4 & 8);
}

loc_80317A7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80317B84;
    }
}

loc_80317A80:
{
    r0 = (r4 & 1);
}

loc_80317A88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80317B84;
    }
}

loc_80317A8C:
{
    r4 = (r24 & 255);
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80317A98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80317B84;
    }
}

loc_80317A9C:
{
    r0 = 4;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80317AA8;
    }
}

loc_80317AA4:
{
    r0 = 2;
}

loc_80317AA8:
{
    r26 = (r26 | r0);
    goto loc_80317B84;
}

loc_80317AB0:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80317AB8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_80317AC4;
    }
}

loc_80317ABC:
{
}

loc_80317AC0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80317B84;
    }
}

loc_80317AC4:
{
    r3 = r30;
    ctx->lr = 0x80317ACCu;
    if constexpr (KnownRegArgsCpuCall<0x8027ED7Cu>(&func_8027ED7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027ED7C_3C8E = func_8027ED7C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027ED7C_3C8E);
        r4 = static_cast<uint32_t>(regargs_result_8027ED7C_3C8E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027ED7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80317AD0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80317AD8;
    }
}

loc_80317AD4:
{
    r25 = MemoryInline::FlatRead8((r3 + 9));
}

loc_80317AD8:
{
    r26 = (r26 | 1);
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80317AE4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80317AF0;
    }
}

loc_80317AE8:
{
    r25 = (r25 + 10);
    goto loc_80317B84;
}

loc_80317AF0:
{
}

loc_80317AF4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80317B84;
    }
}

loc_80317AF8:
{
    r25 = (r25 + 13);
    goto loc_80317B84;
}

loc_80317B00:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80317B08:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80317B84;
    }
}

loc_80317B0C:
{
    r0 = MemoryInline::FlatRead8(r20);
}

loc_80317B14:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80317B84;
    }
}

loc_80317B18:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80317B20:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80317B84;
    }
}

loc_80317B24:
{
    r3 = r21;
    r4 = r30;
    r5 = r29;
    r6 = (r1 + 8);
    ctx->lr = 0x80317B38u;
    if constexpr (KnownRegArgsCpuCall<0x80275078u>(&func_80275078)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80275078_4461 = func_80275078_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80275078_4461);
        r4 = static_cast<uint32_t>(regargs_result_80275078_4461 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80275078u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r25 = r3;
    r26 = (r26 | 1);
    goto loc_80317B84;
}

loc_80317B44:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80317B4C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80317B84;
    }
}

loc_80317B50:
{
    r0 = MemoryInline::FlatRead8(r20);
}

loc_80317B58:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80317B84;
    }
}

loc_80317B5C:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80317B64:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80317B84;
    }
}

loc_80317B68:
{
    r3 = 0;
    r4 = r30;
    r5 = r29;
    r6 = (r1 + 8);
    ctx->lr = 0x80317B7Cu;
    if constexpr (KnownRegArgsCpuCall<0x80275078u>(&func_80275078)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80275078_4A64 = func_80275078_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80275078_4A64);
        r4 = static_cast<uint32_t>(regargs_result_80275078_4A64 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80275078u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r25 = r3;
    r26 = (r26 | 1);
}

loc_80317B84:
{
    r0 = (r26 & 255);
    r0 = (r0 & 1);
}

loc_80317B90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80317BCC;
    }
}

loc_80317B94:
{
    r0 = (r22 & 255);
    r0 = (r0 & 4);
}

loc_80317BA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80317BC8;
    }
}

loc_80317BA4:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_80317BAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80317BBC;
    }
}

loc_80317BB0:
{
}

loc_80317BB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80317BC4;
    }
}

loc_80317BB8:
{
    goto loc_80317BC8;
}

loc_80317BBC:
{
    r26 = (r26 | 8);
    goto loc_80317BC8;
}

loc_80317BC4:
{
    r26 = (r26 | 16);
}

loc_80317BC8:
{
    MemoryInline::FlatWrite8(r23, static_cast<uint8_t>(r25));
}

loc_80317BCC:
{
    r3 = r26;
    r11 = (r1 + 80);
    // inline leaf 0x804574B4 (14 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
    // end of inlined leaf 0x804574B4
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803177EC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803177EC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803177EC func_803177EC preserves=true fpr_mask=0x00000000
