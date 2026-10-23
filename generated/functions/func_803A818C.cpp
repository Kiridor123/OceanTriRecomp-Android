#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF80C(CpuContext* ctx);
extern "C" uint64_t func_800CF80C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800F0F9C(CpuContext* ctx);
extern "C" uint64_t func_800F0F9C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80126B34(CpuContext* ctx);
extern "C" uint64_t func_80126B34_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8014160C(CpuContext* ctx);
extern "C" uint64_t func_8014160C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80143AA4(CpuContext* ctx);
extern "C" void func_80143AA4_ra8_0_0_0(CpuContext*, uint32_t);
extern "C" void func_8028EFE0(CpuContext* ctx);
extern "C" uint64_t func_8028EFE0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803A80DC(CpuContext* ctx);
extern "C" uint64_t func_803A80DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_80143AA4_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80143AA4_statefree_v1(uint32_t, uint32_t);

extern "C" uint64_t func_803A818C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r25_addr_0 = 0;
    uint32_t r25_addr_1 = 0;
    uint32_t r25_addr_2 = 0;
    uint32_t r25_addr_3 = 0;
    uint32_t r25_addr_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r23 = ctx->gpr[23];
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
    const uint32_t r23_entry = r23;
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_803A818C;

loc_803A818C:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    r11 = (r1 + 112);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r3 = 0x806A0000u;
    r30 = (r3 + 31072);
    r9 = 0;
    r5 = (r1 + 16);
    r6 = (r1 + 40);
    r7 = r26;
    r8 = (r1 + 8);
    r4 = 0;
    r3 = -1;
    r0 = 2;
    ctr = r0;
}

loc_803A81D8:
{
    MemoryInline::FlatWrite32(r5, r4);
    MemoryInline::FlatWrite32(r6, r4);
    r0 = MemoryInline::FlatRead16((r7 + 8548));
    MemoryInline::FlatWrite16((r7 + 8560), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r7 + 8560));
}

loc_803A81F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A81FC;
    }
}

loc_803A81F4:
{
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r4));
    goto loc_803A8200;
}

loc_803A81FC:
{
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r3));
}

loc_803A8200:
{
    MemoryInline::FlatWrite32((r5 + 4), r4);
    MemoryInline::FlatWrite32((r6 + 4), r4);
    r0 = MemoryInline::FlatRead16((r7 + 8550));
    MemoryInline::FlatWrite16((r7 + 8562), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r7 + 8562));
}

loc_803A8218:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A8224;
    }
}

loc_803A821C:
{
    MemoryInline::FlatWrite8((r8 + 1), static_cast<uint8_t>(r4));
    goto loc_803A8228;
}

loc_803A8224:
{
    MemoryInline::FlatWrite8((r8 + 1), static_cast<uint8_t>(r3));
}

loc_803A8228:
{
    MemoryInline::FlatWrite32((r5 + 8), r4);
    MemoryInline::FlatWrite32((r6 + 8), r4);
    r0 = MemoryInline::FlatRead16((r7 + 8552));
    MemoryInline::FlatWrite16((r7 + 8564), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r7 + 8564));
}

loc_803A8240:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A824C;
    }
}

loc_803A8244:
{
    MemoryInline::FlatWrite8((r8 + 2), static_cast<uint8_t>(r4));
    goto loc_803A8250;
}

loc_803A824C:
{
    MemoryInline::FlatWrite8((r8 + 2), static_cast<uint8_t>(r3));
}

loc_803A8250:
{
    r5 = (r5 + 12);
    r6 = (r6 + 12);
    r7 = (r7 + 6);
    r8 = (r8 + 3);
    r9 = (r9 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803A81D8;
    }
}

loc_803A8268:
{
    r31 = 0;
    r3 = 512;
    ctx->lr = 0x803A8274u;
    if constexpr (KnownRegArgsCpuCall<0x800CF80Cu>(&func_800CF80C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->ctr = ctr;
        const auto regargs_result_800CF80C_1B1A = func_800CF80C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CF80C_1B1A);
        r4 = static_cast<uint32_t>(regargs_result_800CF80C_1B1A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r23 = ctx->gpr[23];
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
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
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
        InvokeDirectCpu<0x800CF80Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r23 = ctx->gpr[23];
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
        xer = ctx->xer;
    }
    r29 = r3;
}

loc_803A827C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803A8290;
    }
}

loc_803A8280:
{
    r3 = r26;
    r4 = r29;
    ctx->lr = 0x803A828Cu;
    if constexpr (KnownRegArgsCpuCall<0x803A80DCu>(&func_803A80DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        const auto regargs_result_803A80DC_26D1 = func_803A80DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803A80DC_26D1);
        r4 = static_cast<uint32_t>(regargs_result_803A80DC_26D1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803A80DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r31 = r3;
}

loc_803A8290:
{
    r23 = 0;
    r25 = (r1 + 40);
}

loc_803A8298:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_803A82A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A83CC;
    }
}

loc_803A82A4:
{
    r3 = MemoryInline::FlatRead16((r30 + 22));
}

loc_803A82AC:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(32))) {
        goto loc_803A83CC;
    }
}

loc_803A82B0:
{
    ctx->lr = 0x803A82B4u;
    if constexpr (KnownRegArgsCpuCall<0x8028EFE0u>(&func_8028EFE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_8028EFE0_2E58 = func_8028EFE0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8028EFE0_2E58);
        r4 = static_cast<uint32_t>(regargs_result_8028EFE0_2E58 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8028EFE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        ctr = ctx->ctr;
    }
}

loc_803A82B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803A83CC;
    }
}

loc_803A82BC:
{
    r24 = MemoryInline::FlatRead32((r3 + 8));
    r0 = MemoryInline::FlatRead8((r24 + 10));
}

loc_803A82C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803A82F4;
    }
}

loc_803A82CC:
{
    r0 = MemoryInline::FlatRead32((r26 + 8792));
}

loc_803A82D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803A830C;
    }
}

loc_803A82D8:
{
    r3 = 16;
    ctx->lr = 0x803A82E0u;
    if constexpr (KnownRegArgsCpuCall<0x800CF80Cu>(&func_800CF80C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->ctr = ctr;
        const auto regargs_result_800CF80C_3519 = func_800CF80C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CF80C_3519);
        r4 = static_cast<uint32_t>(regargs_result_800CF80C_3519 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r23 = ctx->gpr[23];
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
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
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
        InvokeDirectCpu<0x800CF80Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r23 = ctx->gpr[23];
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
        xer = ctx->xer;
    }
    MemoryInline::FlatWrite32((r26 + 8792), r3);
    r4 = 0;
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_803A830C;
}

loc_803A82F4:
{
    r3 = r30;
    r4 = (r27 & 255);
    r5 = (r28 & 255);
    ctx->lr = 0x803A8304u;
    if constexpr (KnownRegArgsCpuCall<0x80126B34u>(&func_80126B34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126B34_40A7 = func_80126B34_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80126B34_40A7);
        r4 = static_cast<uint32_t>(regargs_result_80126B34_40A7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80126B34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
}

loc_803A8308:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803A83CC;
    }
}

loc_803A830C:
{
    r0 = MemoryInline::FlatRead32(r24);
    r3 = MemoryInline::FlatRead32((r1 + 40));
}

loc_803A8318:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r3))) {
        goto loc_803A83CC;
    }
}

loc_803A831C:
{
    r3 = MemoryInline::FlatRead32((r1 + 44));
}

loc_803A8324:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r3))) {
        goto loc_803A83CC;
    }
}

loc_803A8328:
{
    r3 = MemoryInline::FlatRead32((r1 + 48));
}

loc_803A8330:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r3))) {
        goto loc_803A83CC;
    }
}

loc_803A8334:
{
    r3 = MemoryInline::FlatRead32((r1 + 52));
}

loc_803A833C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r3))) {
        goto loc_803A83CC;
    }
}

loc_803A8340:
{
    r3 = MemoryInline::FlatRead32((r1 + 56));
}

loc_803A8348:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r3))) {
        goto loc_803A83CC;
    }
}

loc_803A834C:
{
    r3 = MemoryInline::FlatRead32((r1 + 60));
}

loc_803A8354:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r3))) {
        goto loc_803A83CC;
    }
}

loc_803A8358:
{
    r4 = 0;
    r0 = MemoryInline::FlatRead32((r1 + 40));
}

loc_803A8364:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A83B8;
    }
}

loc_803A8368:
{
    r4 = 1;
    r0 = MemoryInline::FlatRead32((r1 + 44));
}

loc_803A8374:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A83B8;
    }
}

loc_803A8378:
{
    r4 = 2;
    r0 = MemoryInline::FlatRead32((r1 + 48));
}

loc_803A8384:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A83B8;
    }
}

loc_803A8388:
{
    r4 = 3;
    r0 = MemoryInline::FlatRead32((r1 + 52));
}

loc_803A8394:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A83B8;
    }
}

loc_803A8398:
{
    r4 = 4;
    r0 = MemoryInline::FlatRead32((r1 + 56));
}

loc_803A83A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A83B8;
    }
}

loc_803A83A8:
{
    r4 = 5;
}

loc_803A83B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803A83B8;
    }
}

loc_803A83B4:
{
    r4 = 6;
}

loc_803A83B8:
{
}

loc_803A83BC:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(6))) {
        goto loc_803A83DC;
    }
}

loc_803A83C0:
{
    r3 = MemoryInline::FlatRead32(r24);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r25_addr_2 = (r25 + r0);
    MemoryInline::FlatWrite32(r25_addr_2, r3);
}

loc_803A83CC:
{
    r30 = (r30 + 68);
    r23 = (r23 + 1);
}

loc_803A83D8:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(128))) {
        goto loc_803A8298;
    }
}

loc_803A83DC:
{
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl1_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB10;
    }
}

loc_inl1_0x800CFB08:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB24;
    }
}

loc_inl1_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB24:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl1_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r23 = r3;
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl2_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB50;
    }
}

loc_inl2_0x800CFB48:
{
    r3 = 0;
    goto loc_inl2_cont_800CFB34;
}

loc_inl2_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB64;
    }
}

loc_inl2_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFB34;
}

loc_inl2_0x800CFB64:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl2_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r0 = (r3 & 65535);
    r3 = (r1 + 40);
    ctr = r0;
}

loc_803A8400:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803A84F4;
    }
}

loc_803A8404:
{
    r0 = MemoryInline::FlatRead8(r23);
}

loc_803A840C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A84EC;
    }
}

loc_803A8410:
{
    r0 = MemoryInline::FlatRead32((r23 + 456));
    r0 = (r0 & 1);
}

loc_803A841C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803A84EC;
    }
}

loc_803A8420:
{
    r0 = MemoryInline::FlatRead8((r23 + 12));
}

loc_803A8428:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803A84EC;
    }
}

loc_803A842C:
{
    r0 = MemoryInline::FlatRead8((r23 + 3));
    r4 = MemoryInline::FlatRead32((r1 + 40));
}

loc_803A8438:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r4))) {
        goto loc_803A84EC;
    }
}

loc_803A843C:
{
    r4 = MemoryInline::FlatRead32((r1 + 44));
}

loc_803A8444:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r4))) {
        goto loc_803A84EC;
    }
}

loc_803A8448:
{
    r4 = MemoryInline::FlatRead32((r1 + 48));
}

loc_803A8450:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r4))) {
        goto loc_803A84EC;
    }
}

loc_803A8454:
{
    r4 = MemoryInline::FlatRead32((r1 + 52));
}

loc_803A845C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r4))) {
        goto loc_803A84EC;
    }
}

loc_803A8460:
{
    r4 = MemoryInline::FlatRead32((r1 + 56));
}

loc_803A8468:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r4))) {
        goto loc_803A84EC;
    }
}

loc_803A846C:
{
    r4 = MemoryInline::FlatRead32((r1 + 60));
}

loc_803A8474:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r4))) {
        goto loc_803A84EC;
    }
}

loc_803A8478:
{
    r5 = 0;
    r0 = MemoryInline::FlatRead32((r1 + 40));
}

loc_803A8484:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A84D8;
    }
}

loc_803A8488:
{
    r5 = 1;
    r0 = MemoryInline::FlatRead32((r1 + 44));
}

loc_803A8494:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A84D8;
    }
}

loc_803A8498:
{
    r5 = 2;
    r0 = MemoryInline::FlatRead32((r1 + 48));
}

loc_803A84A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A84D8;
    }
}

loc_803A84A8:
{
    r5 = 3;
    r0 = MemoryInline::FlatRead32((r1 + 52));
}

loc_803A84B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A84D8;
    }
}

loc_803A84B8:
{
    r5 = 4;
    r0 = MemoryInline::FlatRead32((r1 + 56));
}

loc_803A84C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A84D8;
    }
}

loc_803A84C8:
{
    r5 = 5;
}

loc_803A84D0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803A84D8;
    }
}

loc_803A84D4:
{
    r5 = 6;
}

loc_803A84D8:
{
}

loc_803A84DC:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(6))) {
        goto loc_803A84F4;
    }
}

loc_803A84E0:
{
    r4 = MemoryInline::FlatRead8((r23 + 3));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3_addr_2 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_2, r4);
}

loc_803A84EC:
{
    r23 = (r23 + 2840);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803A8404;
    }
}

loc_803A84F4:
{
    r4 = (r1 + 40);
    r5 = (r1 + 16);
    r3 = 1;
    r0 = 6;
    ctr = r0;
}

loc_803A8508:
{
    r6 = MemoryInline::FlatRead32(r4);
}

loc_803A8510:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_803A85B8;
    }
}

loc_803A8514:
{
    r7 = 0;
    r0 = MemoryInline::FlatRead16((r26 + 8560));
}

loc_803A8520:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r6))) {
        goto loc_803A852C;
    }
}

loc_803A8524:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    goto loc_803A85A8;
}

loc_803A852C:
{
    r7 = 1;
    r0 = MemoryInline::FlatRead16((r26 + 8562));
}

loc_803A8538:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r6))) {
        goto loc_803A8544;
    }
}

loc_803A853C:
{
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r3));
    goto loc_803A85A8;
}

loc_803A8544:
{
    r7 = 2;
    r0 = MemoryInline::FlatRead16((r26 + 8564));
}

loc_803A8550:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r6))) {
        goto loc_803A855C;
    }
}

loc_803A8554:
{
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r3));
    goto loc_803A85A8;
}

loc_803A855C:
{
    r7 = 3;
    r0 = MemoryInline::FlatRead16((r26 + 8566));
}

loc_803A8568:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r6))) {
        goto loc_803A8574;
    }
}

loc_803A856C:
{
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r3));
    goto loc_803A85A8;
}

loc_803A8574:
{
    r7 = 4;
    r0 = MemoryInline::FlatRead16((r26 + 8568));
}

loc_803A8580:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r6))) {
        goto loc_803A858C;
    }
}

loc_803A8584:
{
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
    goto loc_803A85A8;
}

loc_803A858C:
{
    r7 = 5;
    r0 = MemoryInline::FlatRead16((r26 + 8570));
}

loc_803A8598:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r6))) {
        goto loc_803A85A4;
    }
}

loc_803A859C:
{
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r3));
    goto loc_803A85A8;
}

loc_803A85A4:
{
    r7 = 6;
}

loc_803A85A8:
{
}

loc_803A85AC:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(6))) {
        goto loc_803A85B8;
    }
}

loc_803A85B0:
{
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r5, r0);
}

loc_803A85B8:
{
    r4 = (r4 + 4);
    r5 = (r5 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803A8508;
    }
}

loc_803A85C4:
{
    r23 = 0;
    r25 = (r1 + 8);
    r30 = r26;
    r24 = r26;
    r28 = -1;
    r27 = 0;
}

loc_803A85DC:
{
    r0 = MemoryInline::FlatRead8(r25);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803A85E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803A8640;
    }
}

loc_803A85EC:
{
    r3 = MemoryInline::FlatRead32((r30 + 8596));
}

loc_803A85F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_803A8600;
    }
}

loc_803A85F8:
{
    // inline leaf 0x800D5914 (11 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -17584));
    r4 = (r4 + 65536);
    r0 = (r3 * 76);
    r4 = (r4 + r0);
    r3 = 0;
    MemoryInline::FlatWrite8((r4 + 24688), static_cast<uint8_t>(r3));
    r0 = -1;
    MemoryInline::FlatWrite32((r4 + 24752), r0);
    MemoryInline::FlatWrite32((r4 + 24756), r3);
    MemoryInline::FlatWrite32((r4 + 24760), r3);
    // end of inlined leaf 0x800D5914
    MemoryInline::FlatWrite32((r30 + 8596), r28);
}

loc_803A8600:
{
    r3 = MemoryInline::FlatRead32((r30 + 8692));
}

loc_803A8608:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_803A8614;
    }
}

loc_803A860C:
{
    // inline leaf 0x800D5914 (11 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -17584));
    r4 = (r4 + 65536);
    r0 = (r3 * 76);
    r4 = (r4 + r0);
    r3 = 0;
    MemoryInline::FlatWrite8((r4 + 24688), static_cast<uint8_t>(r3));
    r0 = -1;
    MemoryInline::FlatWrite32((r4 + 24752), r0);
    MemoryInline::FlatWrite32((r4 + 24756), r3);
    MemoryInline::FlatWrite32((r4 + 24760), r3);
    // end of inlined leaf 0x800D5914
    MemoryInline::FlatWrite32((r30 + 8692), r28);
}

loc_803A8614:
{
    r0 = MemoryInline::FlatRead16((r24 + 8548));
    r3 = (r0 & 255);
    ctx->lr = 0x803A8620u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    InvokeDirectCpu<0x80141538u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    xer = ctx->xer;
    r3 = (r3 & 255);
}

loc_803A8628:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(255))) {
        goto loc_803A8630;
    }
}

loc_803A862C:
{
    ctx->lr = 0x803A8630u;
    if constexpr (KnownRegArgsCpuCall<0x8014160Cu>(&func_8014160C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->ctr = ctr;
        const auto regargs_result_8014160C_7E1B = func_8014160C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8014160C_7E1B);
        r4 = static_cast<uint32_t>(regargs_result_8014160C_7E1B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8014160Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_803A8630:
{
    r0 = MemoryInline::FlatRead16((r24 + 8548));
    r3 = (r0 & 255);
    ctx->lr = 0x803A863Cu;
    if constexpr (KnownRegArgsCpuCall<0x800F0F9Cu>(&func_800F0F9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F0F9C_87AF = func_800F0F9C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F0F9C_87AF);
        r4 = static_cast<uint32_t>(regargs_result_800F0F9C_87AF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800F0F9Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite16((r24 + 8548), static_cast<uint16_t>(r27));
}

loc_803A8640:
{
    r25 = (r25 + 1);
    r30 = (r30 + 4);
    r24 = (r24 + 2);
    r23 = (r23 + 1);
}

loc_803A8654:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(6))) {
        goto loc_803A85DC;
    }
}

loc_803A8658:
{
    r24 = 0;
    r25 = (r1 + 16);
}

loc_803A8660:
{
    r3 = MemoryInline::FlatRead32(r25);
}

loc_803A8668:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803A86F4;
    }
}

loc_803A866C:
{
    r4 = 0;
    r0 = MemoryInline::FlatRead16((r26 + 8548));
}

loc_803A8678:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A86D0;
    }
}

loc_803A867C:
{
    r4 = 1;
    r0 = MemoryInline::FlatRead16((r26 + 8550));
}

loc_803A8688:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A86D0;
    }
}

loc_803A868C:
{
    r4 = 2;
    r0 = MemoryInline::FlatRead16((r26 + 8552));
}

loc_803A8698:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A86D0;
    }
}

loc_803A869C:
{
    r4 = 3;
    r0 = MemoryInline::FlatRead16((r26 + 8554));
}

loc_803A86A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A86D0;
    }
}

loc_803A86AC:
{
    r4 = 4;
    r0 = MemoryInline::FlatRead16((r26 + 8556));
}

loc_803A86B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A86D0;
    }
}

loc_803A86BC:
{
    r4 = 5;
    r0 = MemoryInline::FlatRead16((r26 + 8558));
}

loc_803A86C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A86D0;
    }
}

loc_803A86CC:
{
    r4 = 6;
}

loc_803A86D0:
{
}

loc_803A86D4:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(6))) {
        goto loc_803A86F4;
    }
}

loc_803A86D8:
{
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_14 & -2);
    r4 = (r26 + r0);
    r0 = (r3 & 65535);
    MemoryInline::FlatWrite16((r4 + 8548), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 8548));
    r3 = (r0 & 255);
    ctx->lr = 0x803A86F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    InvokeDirectCpu<0x801410B4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    xer = ctx->xer;
}

loc_803A86F4:
{
    r25 = (r25 + 4);
    r24 = (r24 + 1);
}

loc_803A8700:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(6))) {
        goto loc_803A8660;
    }
}

loc_803A8704:
{
}

loc_803A8708:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_803A8738;
    }
}

loc_803A870C:
{
    r23 = r29;
    r24 = 0;
    goto loc_803A8728;
}

loc_803A8718:
{
    r3 = MemoryInline::FlatRead32(r23);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80143AA4u) && KnownTranslatedCpuCall<0x80143AA4u>::kAvailable && !KnownTranslatedCpuCall<0x80143AA4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80143AA4u>()) {
        const auto state_free_result_80143AA4_99D4 = func_80143AA4_statefree_v1(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_80143AA4_99D4);
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
        InvokeDirectCpu<0x80143AA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r24 = (r24 + 1);
    r23 = (r23 + 4);
}

loc_803A8728:
{
}

loc_803A872C:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(r31))) {
        goto loc_803A8718;
    }
}

loc_803A8730:
{
    r3 = r29;
    ctx->lr = 0x803A8738u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    InvokeDirectCpu<0x800CF878u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    xer = ctx->xer;
}

loc_803A8738:
{
    r11 = (r1 + 112);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->gpr[23] = r23_entry;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803A818C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803A818C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x007FFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803A818C func_803A818C preserves=true fpr_mask=0x00000000
