#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D30BC(CpuContext* ctx);
extern "C" uint64_t func_800D30BC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800E05C4(CpuContext* ctx);
extern "C" uint64_t func_800E05C4_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800E2728(CpuContext* ctx);
extern "C" uint64_t func_800E2728_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803A7D3C(CpuContext* ctx);
extern "C" uint64_t func_803A7D3C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80433BB8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    uint32_t ctr = ctx->ctr;

    goto loc_80433BB8;

loc_80433BB8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r27 = r3;
    r4 = 0x806D0000u;
    r29 = (r4 + 24520);
    r28 = 1;
    r0 = (r3 & 255);
    r30 = (r0 * 372);
    r31 = (r29 + r30);
    r0 = MemoryInline::FlatRead8((r31 + 368));
}

loc_80433BF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80433D70;
    }
}

loc_80433BF4:
{
    r25 = 0;
    MemoryInline::FlatWrite8((r31 + 368), static_cast<uint8_t>(r25));
    r24 = 1;
    r26 = (r31 + 4);
}

loc_80433C04:
{
    r3 = MemoryInline::FlatRead32((r26 + 4));
}

loc_80433C0C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80433C18;
    }
}

loc_80433C10:
{
    ctx->lr = 0x80433C14u;
    if constexpr (KnownRegArgsCpuCall<0x800D30BCu>(&func_800D30BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->ctr = ctr;
        const auto regargs_result_800D30BC_E01 = func_800D30BC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800D30BC_E01);
        r4 = static_cast<uint32_t>(regargs_result_800D30BC_E01 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D30BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite32((r26 + 4), r25);
}

loc_80433C18:
{
    r26 = (r26 + -4);
    r24 = (r24 + -1);
}

loc_80433C24:
{
    if ((static_cast<int32_t>(r24) >= static_cast<int32_t>(0))) {
        goto loc_80433C04;
    }
}

loc_80433C28:
{
    r26 = (r31 + 12);
    r3 = r26;
    ctx->lr = 0x80433C34u;
    if constexpr (KnownRegArgsCpuCall<0x800E2728u>(&func_800E2728)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_800E2728_183C = func_800E2728_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800E2728_183C);
        r4 = static_cast<uint32_t>(regargs_result_800E2728_183C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800E2728u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r25 = (r29 + r30);
    r3 = MemoryInline::FlatRead32((r25 + 280));
}

loc_80433C40:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80433C50;
    }
}

loc_80433C44:
{
    ctx->lr = 0x80433C48u;
    if constexpr (KnownRegArgsCpuCall<0x800D30BCu>(&func_800D30BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->ctr = ctr;
        const auto regargs_result_800D30BC_20CB = func_800D30BC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800D30BC_20CB);
        r4 = static_cast<uint32_t>(regargs_result_800D30BC_20CB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D30BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r0 = 0;
    MemoryInline::FlatWrite32((r25 + 280), r0);
}

loc_80433C50:
{
    r3 = r26;
    ctx->lr = 0x80433C58u;
    if constexpr (KnownRegArgsCpuCall<0x800E05C4u>(&func_800E05C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        const auto regargs_result_800E05C4_2A08 = func_800E05C4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E05C4_2A08);
        r4 = static_cast<uint32_t>(regargs_result_800E05C4_2A08 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800E05C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    r0 = 0;
    r25 = (r29 + r30);
    MemoryInline::FlatWrite8((r25 + 64), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r25 + 369));
    ctx->lr = 0x80433C6Cu;
    if constexpr (KnownRegArgsCpuCall<0x803A7D3Cu>(&func_803A7D3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803A7D3C_2DBD = func_803A7D3C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803A7D3C_2DBD);
        r4 = static_cast<uint32_t>(regargs_result_803A7D3C_2DBD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803A7D3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r26 = r25;
    r3 = MemoryInline::FlatRead8((r26 + 371));
}

loc_80433C78:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(255))) {
        goto loc_80433D54;
    }
}

loc_80433C7C:
{
    r6 = 0;
    r5 = r29;
    r4 = (r27 & 255);
    r0 = 2;
    ctr = r0;
}

loc_80433C90:
{
    r0 = MemoryInline::FlatRead8((r5 + 368));
}

loc_80433C98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80433CB8;
    }
}

loc_80433C9C:
{
}

loc_80433CA0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(r4))) {
        goto loc_80433CB8;
    }
}

loc_80433CA4:
{
    r0 = MemoryInline::FlatRead8((r5 + 371));
}

loc_80433CAC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80433CB8;
    }
}

loc_80433CB0:
{
    r28 = 0;
    goto loc_80433D48;
}

loc_80433CB8:
{
    r6 = (r6 + 1);
    r0 = MemoryInline::FlatRead8((r5 + 740));
}

loc_80433CC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80433CE4;
    }
}

loc_80433CC8:
{
}

loc_80433CCC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(r4))) {
        goto loc_80433CE4;
    }
}

loc_80433CD0:
{
    r0 = MemoryInline::FlatRead8((r5 + 743));
}

loc_80433CD8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80433CE4;
    }
}

loc_80433CDC:
{
    r28 = 0;
    goto loc_80433D48;
}

loc_80433CE4:
{
    r6 = (r6 + 1);
    r0 = MemoryInline::FlatRead8((r5 + 1112));
}

loc_80433CF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80433D10;
    }
}

loc_80433CF4:
{
}

loc_80433CF8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(r4))) {
        goto loc_80433D10;
    }
}

loc_80433CFC:
{
    r0 = MemoryInline::FlatRead8((r5 + 1115));
}

loc_80433D04:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80433D10;
    }
}

loc_80433D08:
{
    r28 = 0;
    goto loc_80433D48;
}

loc_80433D10:
{
    r6 = (r6 + 1);
    r0 = MemoryInline::FlatRead8((r5 + 1484));
}

loc_80433D1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80433D3C;
    }
}

loc_80433D20:
{
}

loc_80433D24:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(r4))) {
        goto loc_80433D3C;
    }
}

loc_80433D28:
{
    r0 = MemoryInline::FlatRead8((r5 + 1487));
}

loc_80433D30:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80433D3C;
    }
}

loc_80433D34:
{
    r28 = 0;
    goto loc_80433D48;
}

loc_80433D3C:
{
    r5 = (r5 + 1488);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80433C90;
    }
}

loc_80433D48:
{
}

loc_80433D4C:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(1))) {
        goto loc_80433D54;
    }
}

loc_80433D50:
{
    // inline leaf 0x800D58C8 (19 guest instruction(s))
}

loc_inl1_0x800D58C8:
{
    r4 = MemoryInline::FlatRead32((r13 + -17584));
    r4 = (r4 + 65536);
    r0 = (r3 * 76);
    r4 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 24760));
}

loc_inl1_0x800D58E0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(1))) {
        goto loc_inl1_0x800D58F4;
    }
}

loc_inl1_0x800D58E4:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r4 + 24760), r0);
    r3 = -1;
    goto loc_inl1_cont_800D58C8;
}

loc_inl1_0x800D58F4:
{
    r3 = 0;
    MemoryInline::FlatWrite8((r4 + 24688), static_cast<uint8_t>(r3));
    r0 = -1;
    MemoryInline::FlatWrite32((r4 + 24752), r0);
    MemoryInline::FlatWrite32((r4 + 24756), r3);
    MemoryInline::FlatWrite32((r4 + 24760), r3);
    r3 = 0;
}

loc_inl1_cont_800D58C8:
{
    // end of inlined leaf 0x800D58C8
}

loc_80433D54:
{
    r4 = 255;
    MemoryInline::FlatWrite8((r25 + 369), static_cast<uint8_t>(r4));
    r0 = 0;
    r3 = (r29 + r30);
    MemoryInline::FlatWrite8((r3 + 370), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32(r31, r0);
    MemoryInline::FlatWrite8((r26 + 371), static_cast<uint8_t>(r4));
}

loc_80433D70:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80433BB8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80433BB8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00FFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80433BB8 func_80433BB8 preserves=true fpr_mask=0x00000000
