#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803E35FC(CpuContext* ctx);
extern "C" uint64_t func_803E35FC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803EF424(CpuContext* ctx);
extern "C" uint64_t func_803EF424_ra190_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803EF52C(CpuContext* ctx);
extern "C" uint64_t func_803EF52C_rad0_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80401EAC(CpuContext* ctx);
extern "C" uint64_t func_80401EAC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80401F40(CpuContext* ctx);
extern "C" uint64_t func_80401F40_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80401FBC(CpuContext* ctx);
extern "C" uint64_t func_80401FBC_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80402008(CpuContext* ctx);
extern "C" uint64_t func_80402008_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804020D8(CpuContext* ctx);
extern "C" uint64_t func_804020D8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80402154(CpuContext* ctx);
extern "C" uint64_t func_80402154_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_803E9D20_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
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

    goto loc_803E9D20;

loc_803E9D20:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r31 = r3;
    r23 = r4;
    r24 = r6;
    r25 = r7;
    r26 = r8;
    r27 = r9;
    r28 = r10;
    r29 = MemoryInline::FlatRead32((r1 + 88));
    r30 = MemoryInline::FlatRead32((r1 + 92));
    r0 = MemoryInline::FlatRead8((r3 + 960));
}

loc_803E9D60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803E9D90;
    }
}

loc_803E9D64:
{
}

loc_803E9D68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_803E9E08;
    }
}

loc_803E9D6C:
{
}

loc_803E9D70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_803E9FAC;
    }
}

loc_803E9D74:
{
}

loc_803E9D78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(15))) {
        goto loc_803EA024;
    }
}

loc_803E9D7C:
{
}

loc_803E9D80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(20))) {
        goto loc_803EA0B0;
    }
}

loc_803E9D84:
{
}

loc_803E9D88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(25))) {
        goto loc_803EA0E8;
    }
}

loc_803E9D8C:
{
    goto loc_803EA164;
}

loc_803E9D90:
{
    r0 = (0 - r5);
    r0 = (r0 | r5);
    r4 = (static_cast<int32_t>(r0) >> 31);
    r30 = (r4 + 2);
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 824), r0);
}

loc_803E9DAC:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(0))) {
        goto loc_803E9DD0;
    }
}

loc_803E9DB0:
{
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = (r30 & 255);
    r5 = r23;
    r6 = r24;
    r7 = r25;
    ctx->lr = 0x803E9DC8u;
    if constexpr (KnownRegArgsCpuCall<0x80401EACu>(&func_80401EAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_80401EAC_1845 = func_80401EAC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80401EAC_1845);
        r4 = static_cast<uint32_t>(regargs_result_80401EAC_1845 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x80401EACu>(ctx);
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
    MemoryInline::FlatWrite32((r31 + 912), r3);
    goto loc_803E9DFC;
}

loc_803E9DD0:
{
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    MemoryInline::FlatWriteRam32((r1 + 8), r29);
    r4 = (r30 & 255);
    r5 = r23;
    r6 = r24;
    r7 = r25;
    r8 = r26;
    r9 = r27;
    r10 = r28;
    ctx->lr = 0x803E9DF8u;
    if constexpr (KnownRegArgsCpuCall<0x80402008u>(&func_80402008)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_80402008_22B6 = func_80402008_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80402008_22B6);
        r4 = static_cast<uint32_t>(regargs_result_80402008_22B6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x80402008u>(ctx);
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
    MemoryInline::FlatWrite32((r31 + 912), r3);
}

loc_803E9DFC:
{
    r0 = 5;
    MemoryInline::FlatWrite8((r31 + 960), static_cast<uint8_t>(r0));
    goto loc_803EA164;
}

loc_803E9E08:
{
    r4 = MemoryInline::FlatRead32((r3 + 824));
    r0 = (r4 & 1);
}

loc_803E9E14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803E9E28;
    }
}

loc_803E9E18:
{
    r4 = r30;
    ctx->lr = 0x803E9E20u;
    if constexpr (KnownRegArgsCpuCall<0x803EF424u>(&func_803EF424)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->ctr = ctr;
        const auto regargs_result_803EF424_2DB6 = func_803EF424_ra190_1fe_18_0(ctx, r4, r7, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EF424_2DB6);
        r4 = static_cast<uint32_t>(regargs_result_803EF424_2DB6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EF424u>(ctx);
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
        r13 = ctx->gpr[13];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
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
    r3 = -1;
    goto loc_803EA168;
}

loc_803E9E28:
{
    r0 = (r4 & 2);
}

loc_803E9E30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803E9E44;
    }
}

loc_803E9E34:
{
    r4 = r30;
    ctx->lr = 0x803E9E3Cu;
    if constexpr (KnownRegArgsCpuCall<0x803EF52Cu>(&func_803EF52C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->ctr = ctr;
        const auto regargs_result_803EF52C_39E7 = func_803EF52C_rad0_1fe_18_0(ctx, r4, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EF52C_39E7);
        r4 = static_cast<uint32_t>(regargs_result_803EF52C_39E7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EF52Cu>(ctx);
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
        r13 = ctx->gpr[13];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
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
    r3 = -2;
    goto loc_803EA168;
}

loc_803E9E44:
{
    r0 = (r4 & 2048);
}

loc_803E9E4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EA164;
    }
}

loc_803E9E50:
{
    r5 = 0;
    r4 = (r3 + 458752);
    MemoryInline::FlatWrite32((r4 + -17360), r5);
    r6 = 0;
    r0 = 2;
    ctr = r0;
}

loc_803E9E68:
{
    r4 = (r31 + 458752);
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + -17303), 0, 645u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r4 + -17303), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 92u, (r4 + -17211), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 184u, (r4 + -17119), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 276u, (r4 + -17027), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 368u, (r4 + -16935), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 460u, (r4 + -16843), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 552u, (r4 + -16751), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 644u, (r4 + -16659), static_cast<uint8_t>(r5));
    r31 = (r31 + 736);
    r4 = (r31 + 458752);
    guest_range_2 = MemoryInline::ResolveRangeHost((r4 + -17303), 0, 645u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r4 + -17303), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 92u, (r4 + -17211), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 184u, (r4 + -17119), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 276u, (r4 + -17027), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 368u, (r4 + -16935), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 460u, (r4 + -16843), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 552u, (r4 + -16751), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 644u, (r4 + -16659), static_cast<uint8_t>(r5));
    r31 = (r31 + 736);
    r4 = (r31 + 458752);
    guest_range_3 = MemoryInline::ResolveRangeHost((r4 + -17303), 0, 645u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r4 + -17303), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 92u, (r4 + -17211), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 184u, (r4 + -17119), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 276u, (r4 + -17027), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 368u, (r4 + -16935), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 460u, (r4 + -16843), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 552u, (r4 + -16751), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 644u, (r4 + -16659), static_cast<uint8_t>(r5));
    r31 = (r31 + 736);
    r4 = (r31 + 458752);
    guest_range_4 = MemoryInline::ResolveRangeHost((r4 + -17303), 0, 645u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, (r4 + -17303), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 92u, (r4 + -17211), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 184u, (r4 + -17119), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 276u, (r4 + -17027), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 368u, (r4 + -16935), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 460u, (r4 + -16843), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 552u, (r4 + -16751), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 644u, (r4 + -16659), static_cast<uint8_t>(r5));
    r31 = (r31 + 736);
    r4 = (r31 + 458752);
    guest_range_5 = MemoryInline::ResolveRangeHost((r4 + -17303), 0, 645u, false, true);
    MemoryInline::WriteResolved8(guest_range_5, 0u, (r4 + -17303), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_5, 92u, (r4 + -17211), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_5, 184u, (r4 + -17119), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_5, 276u, (r4 + -17027), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_5, 368u, (r4 + -16935), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_5, 460u, (r4 + -16843), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_5, 552u, (r4 + -16751), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_5, 644u, (r4 + -16659), static_cast<uint8_t>(r5));
    r31 = (r31 + 736);
    r4 = (r31 + 458752);
    guest_range_6 = MemoryInline::ResolveRangeHost((r4 + -17303), 0, 645u, false, true);
    MemoryInline::WriteResolved8(guest_range_6, 0u, (r4 + -17303), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_6, 92u, (r4 + -17211), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_6, 184u, (r4 + -17119), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_6, 276u, (r4 + -17027), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_6, 368u, (r4 + -16935), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_6, 460u, (r4 + -16843), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_6, 552u, (r4 + -16751), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_6, 644u, (r4 + -16659), static_cast<uint8_t>(r5));
    r31 = (r31 + 736);
    r6 = (r6 + 48);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803E9E68;
    }
}

loc_803E9F60:
{
    r4 = (r3 + 458752);
    r0 = (r6 * 92);
    r4 = (r4 + r0);
    r5 = 0;
    MemoryInline::FlatWrite8((r4 + -17303), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r4 + -17211), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r4 + -17119), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r4 + -17027), static_cast<uint8_t>(r5));
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r4 + -3676));
}

loc_803E9F8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803E9FA0;
    }
}

loc_803E9F90:
{
    MemoryInline::FlatWrite32((r4 + -3680), r5);
    r0 = 10;
    MemoryInline::FlatWrite8((r3 + 960), static_cast<uint8_t>(r0));
    goto loc_803EA164;
}

loc_803E9FA0:
{
    r0 = 20;
    MemoryInline::FlatWrite8((r3 + 960), static_cast<uint8_t>(r0));
    goto loc_803EA164;
}

loc_803E9FAC:
{
    r5 = (r3 + 65536);
    r4 = MemoryInline::FlatRead32((r5 + -3680));
    r0 = MemoryInline::FlatRead32((r5 + -3676));
    r0 = (r0 - r4);
}

loc_803E9FC0:
{
    r30 = 10;
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(10))) {
        goto loc_803E9FCC;
    }
}

loc_803E9FC8:
{
    r30 = r0;
}

loc_803E9FCC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 824), r0);
}

loc_803E9FD8:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(0))) {
        goto loc_803E9FFC;
    }
}

loc_803E9FDC:
{
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = (r31 + 65536);
    r4 = MemoryInline::FlatRead32((r4 + -3680));
    r4 = (r4 + 1);
    r5 = r30;
    ctx->lr = 0x803E9FF4u;
    if constexpr (KnownRegArgsCpuCall<0x80401F40u>(&func_80401F40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_80401F40_62C0 = func_80401F40_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80401F40_62C0);
        r4 = static_cast<uint32_t>(regargs_result_80401F40_62C0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x80401F40u>(ctx);
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
    MemoryInline::FlatWrite32((r31 + 912), r3);
    goto loc_803EA018;
}

loc_803E9FFC:
{
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = (r31 + 65536);
    r4 = MemoryInline::FlatRead32((r4 + -3680));
    r4 = (r4 + 1);
    r5 = r30;
    ctx->lr = 0x803EA014u;
    if constexpr (KnownRegArgsCpuCall<0x804020D8u>(&func_804020D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_804020D8_6CFB = func_804020D8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804020D8_6CFB);
        r4 = static_cast<uint32_t>(regargs_result_804020D8_6CFB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x804020D8u>(ctx);
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
    MemoryInline::FlatWrite32((r31 + 912), r3);
}

loc_803EA018:
{
    r0 = 15;
    MemoryInline::FlatWrite8((r31 + 960), static_cast<uint8_t>(r0));
    goto loc_803EA164;
}

loc_803EA024:
{
    r4 = MemoryInline::FlatRead32((r3 + 824));
    r0 = (r4 & 1);
}

loc_803EA030:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EA044;
    }
}

loc_803EA034:
{
    r4 = r30;
    ctx->lr = 0x803EA03Cu;
    if constexpr (KnownRegArgsCpuCall<0x803EF424u>(&func_803EF424)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->ctr = ctr;
        const auto regargs_result_803EF424_77FC = func_803EF424_ra190_1fe_18_0(ctx, r4, r7, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EF424_77FC);
        r4 = static_cast<uint32_t>(regargs_result_803EF424_77FC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EF424u>(ctx);
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
        r13 = ctx->gpr[13];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
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
    r3 = -1;
    goto loc_803EA168;
}

loc_803EA044:
{
    r0 = (r4 & 2);
}

loc_803EA04C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EA064;
    }
}

loc_803EA050:
{
    r4 = r30;
    ctx->lr = 0x803EA058u;
    if constexpr (KnownRegArgsCpuCall<0x803EF52Cu>(&func_803EF52C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->ctr = ctr;
        const auto regargs_result_803EF52C_842D = func_803EF52C_rad0_1fe_18_0(ctx, r4, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EF52C_842D);
        r4 = static_cast<uint32_t>(regargs_result_803EF52C_842D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EF52Cu>(ctx);
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
        r13 = ctx->gpr[13];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
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
    r0 = 20;
    MemoryInline::FlatWrite8((r31 + 960), static_cast<uint8_t>(r0));
    goto loc_803EA164;
}

loc_803EA064:
{
    r0 = (r4 & 4096);
}

loc_803EA06C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EA164;
    }
}

loc_803EA070:
{
    r4 = (r3 + 458752);
    r0 = MemoryInline::FlatRead32((r4 + -17360));
}

loc_803EA07C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(100))) {
        goto loc_803EA0A4;
    }
}

loc_803EA080:
{
    r5 = (r3 + 65536);
    r4 = MemoryInline::FlatRead32((r5 + -3680));
    r0 = MemoryInline::FlatRead32((r5 + -3676));
    r0 = (r0 - r4);
}

loc_803EA094:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803EA0A4;
    }
}

loc_803EA098:
{
    r0 = 10;
    MemoryInline::FlatWrite8((r3 + 960), static_cast<uint8_t>(r0));
    goto loc_803EA164;
}

loc_803EA0A4:
{
    r0 = 20;
    MemoryInline::FlatWrite8((r3 + 960), static_cast<uint8_t>(r0));
    goto loc_803EA164;
}

loc_803EA0B0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 824), r0);
}

loc_803EA0BC:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(0))) {
        goto loc_803EA0D0;
    }
}

loc_803EA0C0:
{
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    ctx->lr = 0x803EA0C8u;
    if constexpr (KnownRegArgsCpuCall<0x80401FBCu>(&func_80401FBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_80401FBC_9475 = func_80401FBC_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80401FBC_9475);
        r4 = static_cast<uint32_t>(regargs_result_80401FBC_9475 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x80401FBCu>(ctx);
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
    MemoryInline::FlatWrite32((r31 + 912), r3);
    goto loc_803EA0DC;
}

loc_803EA0D0:
{
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    ctx->lr = 0x803EA0D8u;
    if constexpr (KnownRegArgsCpuCall<0x80402154u>(&func_80402154)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_80402154_9E27 = func_80402154_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80402154_9E27);
        r4 = static_cast<uint32_t>(regargs_result_80402154_9E27 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
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
        InvokeDirectCpu<0x80402154u>(ctx);
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
    MemoryInline::FlatWrite32((r31 + 912), r3);
}

loc_803EA0DC:
{
    r0 = 25;
    MemoryInline::FlatWrite8((r31 + 960), static_cast<uint8_t>(r0));
    goto loc_803EA164;
}

loc_803EA0E8:
{
    r4 = MemoryInline::FlatRead32((r3 + 824));
    r0 = (r4 & 1);
}

loc_803EA0F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EA108;
    }
}

loc_803EA0F8:
{
    r4 = r30;
    ctx->lr = 0x803EA100u;
    if constexpr (KnownRegArgsCpuCall<0x803EF424u>(&func_803EF424)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->ctr = ctr;
        const auto regargs_result_803EF424_A928 = func_803EF424_ra190_1fe_18_0(ctx, r4, r7, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EF424_A928);
        r4 = static_cast<uint32_t>(regargs_result_803EF424_A928 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EF424u>(ctx);
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
        r13 = ctx->gpr[13];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
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
    r3 = -1;
    goto loc_803EA168;
}

loc_803EA108:
{
    r0 = (r4 & 2);
}

loc_803EA110:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EA124;
    }
}

loc_803EA114:
{
    r4 = r30;
    ctx->lr = 0x803EA11Cu;
    if constexpr (KnownRegArgsCpuCall<0x803EF52Cu>(&func_803EF52C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->ctr = ctr;
        const auto regargs_result_803EF52C_B559 = func_803EF52C_rad0_1fe_18_0(ctx, r4, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803EF52C_B559);
        r4 = static_cast<uint32_t>(regargs_result_803EF52C_B559 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803EF52Cu>(ctx);
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
        r13 = ctx->gpr[13];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
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
    r3 = -2;
    goto loc_803EA168;
}

loc_803EA124:
{
    r0 = (r4 & 8192);
}

loc_803EA12C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EA164;
    }
}

loc_803EA130:
{
    r3 = (r1 + 16);
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r30;
    r4 = (r1 + 16);
    ctx->lr = 0x803EA14Cu;
    if constexpr (KnownRegArgsCpuCall<0x803E35FCu>(&func_803E35FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->ctr = ctr;
        const auto regargs_result_803E35FC_C2A4 = func_803E35FC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803E35FC_C2A4);
        r4 = static_cast<uint32_t>(regargs_result_803E35FC_C2A4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        InvokeDirectCpu<0x803E35FCu>(ctx);
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
    }
    r0 = MemoryInline::FlatRead32((r1 + 16));
}

loc_803EA154:
{
    r3 = 1;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EA168;
    }
}

loc_803EA15C:
{
    r3 = -2;
    goto loc_803EA168;
}

loc_803EA164:
{
    r3 = 0;
}

loc_803EA168:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_7 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
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

extern "C" void func_803E9D20(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803E9D20_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x007FFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803E9D20 func_803E9D20 preserves=true fpr_mask=0x00000000
