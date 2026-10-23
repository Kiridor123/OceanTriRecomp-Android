#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80456C40(CpuContext* ctx);
extern "C" uint64_t func_80456C40_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8045FE20(CpuContext* ctx);
extern "C" uint64_t func_8045FE20_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8052124C(CpuContext* ctx);
extern "C" uint64_t func_8052124C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8050C2C0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r12_rot_5 = 0;
    uint32_t r25_addr_0 = 0;
    uint32_t r25_addr_1 = 0;
    uint32_t r25_addr_2 = 0;
    uint32_t r25_addr_3 = 0;
    uint32_t r25_addr_4 = 0;
    uint32_t r25_addr_5 = 0;
    uint32_t r25_addr_6 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r26_rot_3 = 0;
    uint32_t r26_rot_4 = 0;
    uint32_t r26_rot_5 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r27_addr_4 = 0;
    uint32_t r27_addr_5 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_10 = 0;
    uint32_t r30_addr_11 = 0;
    uint32_t r30_addr_12 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r30_addr_6 = 0;
    uint32_t r30_addr_7 = 0;
    uint32_t r30_addr_8 = 0;
    uint32_t r30_addr_9 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r30_rot_3 = 0;
    uint32_t r30_rot_4 = 0;
    uint32_t r30_rot_5 = 0;
    uint32_t r30_rot_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_10 = 0;
    uint32_t r4_addr_11 = 0;
    uint32_t r4_addr_12 = 0;
    uint32_t r4_addr_13 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;
    uint32_t r6_addr_7 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t ctr = ctx->ctr;

    goto loc_8050C2C0;

loc_8050C2C0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r27 = r3;
    r3 = (r13 + -19168);
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_19BB = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_19BB);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_19BB >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r5 = r3;
    r4 = r27;
    r3 = (r13 + -19168);
    if constexpr (KnownRegArgsCpuCall<0x8045FE20u>(&func_8045FE20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8045FE20_1C8A = func_8045FE20_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045FE20_1C8A);
        r4 = static_cast<uint32_t>(regargs_result_8045FE20_1C8A >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8045FE20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8050C2F4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8050C41C;
    }
}

loc_8050C2F8:
{
    r0 = MemoryInline::FlatRead32((r13 + -13848));
}

loc_8050C300:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8050C414;
    }
}

loc_8050C304:
{
    r3 = 0x80760000u;
    r23 = 0;
    r25 = 0;
    r24 = (r3 + 14456);
}

loc_8050C314:
{
    r3 = MemoryInline::FlatRead32((r13 + -13848));
    r3_addr_2 = (r3 + r25);
    r0 = MemoryInline::FlatRead32(r3_addr_2);
}

loc_8050C320:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8050C3C0;
    }
}

loc_8050C324:
{
    r27 = 0;
    r26 = 0;
    goto loc_8050C34C;
}

loc_8050C330:
{
}

loc_8050C334:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8050C344;
    }
}

loc_8050C338:
{
    r12 = MemoryInline::FlatRead32((r24 + 4));
    ctr = r12;
    ctx->lr = 0x8050C344u;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
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

loc_8050C344:
{
    r26 = (r26 + 4);
    r27 = (r27 + 1);
}

loc_8050C34C:
{
    r0 = MemoryInline::FlatRead32((r13 + -13848));
    r25_addr_3 = (r25 + r0);
    r3 = MemoryInline::FlatRead32(r25_addr_3);
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r4_addr_3 = (r4 + r26);
    r3 = MemoryInline::FlatRead32(r4_addr_3);
}

loc_8050C360:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8050C330;
    }
}

loc_8050C364:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4_addr_4 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_4);
}

loc_8050C370:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8050C380;
    }
}

loc_8050C374:
{
    r12 = MemoryInline::FlatRead32((r24 + 4));
    ctr = r12;
    ctx->lr = 0x8050C380u;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
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

loc_8050C380:
{
    r3 = MemoryInline::FlatRead32((r13 + -13848));
    r3_addr_3 = (r3 + r25);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8050C390:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8050C3A0;
    }
}

loc_8050C394:
{
    r12 = MemoryInline::FlatRead32((r24 + 4));
    ctr = r12;
    ctx->lr = 0x8050C3A0u;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
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

loc_8050C3A0:
{
    r3 = MemoryInline::FlatRead32((r13 + -13848));
    r3_addr_4 = (r3 + r25);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_8050C3B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8050C3C0;
    }
}

loc_8050C3B4:
{
    r12 = MemoryInline::FlatRead32((r24 + 4));
    ctr = r12;
    ctx->lr = 0x8050C3C0u;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
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

loc_8050C3C0:
{
    r3 = MemoryInline::FlatRead32((r13 + -13848));
    r3_addr_6 = (r3 + r25);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
}

loc_8050C3CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8050C3DC;
    }
}

loc_8050C3D0:
{
    r12 = MemoryInline::FlatRead32((r24 + 4));
    ctr = r12;
    ctx->lr = 0x8050C3DCu;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
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

loc_8050C3DC:
{
    r23 = (r23 + 1);
    r25 = (r25 + 4);
}

loc_8050C3E8:
{
    if ((static_cast<uint32_t>(r23) < static_cast<uint32_t>(31))) {
        goto loc_8050C314;
    }
}

loc_8050C3EC:
{
    r3 = MemoryInline::FlatRead32((r13 + -13848));
}

loc_8050C3F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8050C40C;
    }
}

loc_8050C3F8:
{
    r4 = 0x80760000u;
    r4 = (r4 + 14456);
    r12 = MemoryInline::FlatRead32((r4 + 4));
    ctr = r12;
    ctx->lr = 0x8050C40Cu;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
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

loc_8050C40C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -13848), r0);
}

loc_8050C414:
{
    r3 = 0;
    goto loc_8050C82C;
}

loc_8050C41C:
{
    r0 = MemoryInline::FlatRead32((r13 + -13848));
}

loc_8050C424:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8050C44C;
    }
}

loc_8050C428:
{
    r4 = 0x80760000u;
    r3 = 124;
    r12 = MemoryInline::FlatRead32((r4 + 14456));
    ctr = r12;
    ctx->lr = 0x8050C43Cu;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    MemoryInline::FlatWrite32((r13 + -13848), r3);
    r4 = 0;
    r5 = 124;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8050C44C:
{
    r3 = r27;
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_4C5E = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_4C5E);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_4C5E >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8050C458:
{
    r28 = 0;
    r4 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8050C580;
    }
}

loc_8050C464:
{
}

loc_8050C468:
{
    r5 = (r3 + -8);
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(8))) {
        goto loc_8050C54C;
    }
}

loc_8050C470:
{
    r0 = (r5 + 7);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_5 & 536870911);
    ctr = r0;
}

loc_8050C480:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(0))) {
        goto loc_8050C54C;
    }
}

loc_8050C484:
{
    r23 = (r27 + r4);
    r27_addr_2 = (r27 + r4);
    r0 = MemoryInline::FlatRead8(r27_addr_2);
    r25 = MemoryInline::FlatRead8((r23 + 1));
    r26 = (r4 + 1);
    r31 = MemoryInline::FlatRead8((r23 + 2));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & 28);
    r30 = (r4 + 2);
    r24 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r29 = MemoryInline::FlatRead8((r23 + 3));
    r12 = (r4 + 3);
    r11 = MemoryInline::FlatRead8((r23 + 4));
    r10 = (r4 + 4);
    r9 = MemoryInline::FlatRead8((r23 + 5));
    r8 = (r4 + 5);
    r7 = MemoryInline::FlatRead8((r23 + 6));
    r6 = (r4 + 6);
    r0 = (r4 + 7);
    r5 = MemoryInline::FlatRead8((r23 + 7));
    r25 = (static_cast<int32_t>(static_cast<int8_t>(r25)));
    r26_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r26 = (r26_rot_2 & 28);
    r28 = (r28 + r24);
    r26 = PPC_Slw(static_cast<uint32_t>(r25), static_cast<uint32_t>(r26));
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    r30_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r30 = (r30_rot_2 & 28);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r12 = (r12_rot_2 & 28);
    r28 = (r28 + r26);
    r30 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r30));
    r11 = (static_cast<int32_t>(static_cast<int8_t>(r11)));
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r10 = (r10_rot_2 & 28);
    r12 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r12));
    r28 = (r28 + r30);
    r9 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r8 = (r8_rot_2 & 28);
    r10 = PPC_Slw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r10));
    r28 = (r28 + r12);
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & 28);
    r8 = PPC_Slw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r8));
    r28 = (r28 + r10);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & 28);
    r6 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r6));
    r28 = (r28 + r8);
    r4 = (r4 + 8);
    r28 = (r28 + r6);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r28 = (r28 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8050C484;
    }
}

loc_8050C54C:
{
    r0 = (r3 - r4);
    r5 = (r27 + r4);
    ctr = r0;
}

loc_8050C55C:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3))) {
        goto loc_8050C580;
    }
}

loc_8050C560:
{
    r3 = MemoryInline::FlatRead8(r5);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & 28);
    r4 = (r4 + 1);
    r5 = (r5 + 1);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r28 = (r28 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8050C560;
    }
}

loc_8050C580:
{
    r3 = 138543104;
    r30 = MemoryInline::FlatRead32((r13 + -13848));
    r31 = (r3 + 4229);
    r29 = 0;
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r31) * static_cast<uint64_t>(r28)) >> 32));
    r0 = (r28 - r3);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_13 & 2147483647);
    r0 = (r0 + r3);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_14 & 268435455);
    r0 = (r0 * 31);
    r28 = (r28 - r0);
}

loc_8050C5AC:
{
    r0 = (r29 * r29);
    r4 = (r28 + r0);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r31) * static_cast<uint64_t>(r4)) >> 32));
    r0 = (r4 - r3);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_16 & 2147483647);
    r0 = (r0 + r3);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_17 & 268435455);
    r0 = (r0 * 31);
    r0 = (r4 - r0);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_18 & -4);
    r30_addr_2 = (r30 + r0);
    r23 = MemoryInline::FlatRead32(r30_addr_2);
}

loc_8050C5DC:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_8050C5FC;
    }
}

loc_8050C5E0:
{
    r3 = MemoryInline::FlatRead32((r23 + 16));
    r4 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8045FD04u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8050C5F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8050C5FC;
    }
}

loc_8050C5F4:
{
    r3 = r23;
    goto loc_8050C82C;
}

loc_8050C5FC:
{
    r29 = (r29 + 1);
}

loc_8050C604:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(15))) {
        goto loc_8050C5AC;
    }
}

loc_8050C608:
{
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    r30_addr_3 = (r30 + r0);
    r0 = MemoryInline::FlatRead32(r30_addr_3);
}

loc_8050C614:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8050C6C4;
    }
}

loc_8050C618:
{
    r3 = 138543104;
    r0 = 7;
    r3 = (r3 + 4229);
    r6 = 1;
    ctr = r0;
}

loc_8050C62C:
{
    r0 = (r6 * r6);
    r5 = (r28 + r0);
    r4 = (static_cast<uint32_t>((static_cast<uint64_t>(r3) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r4);
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_21 & 2147483647);
    r0 = (r0 + r4);
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_22 & 268435455);
    r0 = (r0 * 31);
    r4 = (r5 - r0);
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_23 & -4);
    r30_addr_5 = (r30 + r0);
    r0 = MemoryInline::FlatRead32(r30_addr_5);
}

loc_8050C65C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8050C668;
    }
}

loc_8050C660:
{
    r28 = r4;
    goto loc_8050C6B0;
}

loc_8050C668:
{
    r6 = (r6 + 1);
    r0 = (r6 * r6);
    r5 = (r28 + r0);
    r4 = (static_cast<uint32_t>((static_cast<uint64_t>(r3) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r4);
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_24 & 2147483647);
    r0 = (r0 + r4);
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_25 & 268435455);
    r0 = (r0 * 31);
    r4 = (r5 - r0);
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_26 & -4);
    r30_addr_6 = (r30 + r0);
    r0 = MemoryInline::FlatRead32(r30_addr_6);
}

loc_8050C69C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8050C6A8;
    }
}

loc_8050C6A0:
{
    r28 = r4;
    goto loc_8050C6B0;
}

loc_8050C6A8:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8050C62C;
    }
}

loc_8050C6B0:
{
}

loc_8050C6B4:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(15))) {
        goto loc_8050C6C4;
    }
}

loc_8050C6B8:
{
    r3 = r27;
    ctx->lr = 0x8050C6C0u;
    if constexpr (KnownRegArgsCpuCall<0x8052124Cu>(&func_8052124C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8052124C_71A5 = func_8052124C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8052124C_71A5);
        r4 = static_cast<uint32_t>(regargs_result_8052124C_71A5 >> 32);
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8052124Cu>(ctx);
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
    goto loc_8050C82C;
}

loc_8050C6C4:
{
    r3 = r27;
    ctx->lr = 0x8050C6CCu;
    if constexpr (KnownRegArgsCpuCall<0x8052124Cu>(&func_8052124C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8052124C_7B31 = func_8052124C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8052124C_7B31);
        r4 = static_cast<uint32_t>(regargs_result_8052124C_7B31 >> 32);
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8052124Cu>(ctx);
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
}

loc_8050C6D0:
{
    r29 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8050C6E0;
    }
}

loc_8050C6D8:
{
    r3 = 0;
    goto loc_8050C82C;
}

loc_8050C6E0:
{
    r4 = 0x80760000u;
    r3 = 20;
    r12 = MemoryInline::FlatRead32((r4 + 14456));
    ctr = r12;
    ctx->lr = 0x8050C6F4u;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    r4 = MemoryInline::FlatRead32((r13 + -13848));
    r30_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r30 = (r30_rot_5 & -4);
    r5 = 0;
    r4_addr_7 = (r4 + r30);
    MemoryInline::FlatWrite32(r4_addr_7, r3);
    r3 = MemoryInline::FlatRead32((r29 + 12));
    goto loc_8050C718;
}

loc_8050C710:
{
    r3 = (r3 + 4);
    r5 = (r5 + 1);
}

loc_8050C718:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8050C720:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8050C710;
    }
}

loc_8050C724:
{
    r6 = MemoryInline::FlatRead32((r13 + -13848));
    r0 = (r5 + 1);
    r7 = 2;
    r5 = 0;
    r6_addr_1 = (r6 + r30);
    r4 = MemoryInline::FlatRead32(r6_addr_1);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r28 = 0x80760000u;
    MemoryInline::FlatWrite16((r4 + 8), static_cast<uint16_t>(r7));
    r6_addr_2 = (r6 + r30);
    r4 = MemoryInline::FlatRead32(r6_addr_2);
    r0 = MemoryInline::FlatRead16((r29 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r4 + 10), static_cast<uint16_t>(r0));
    r6_addr_3 = (r6 + r30);
    r4 = MemoryInline::FlatRead32(r6_addr_3);
    MemoryInline::FlatWrite32(r4, r5);
    r6_addr_4 = (r6 + r30);
    r4 = MemoryInline::FlatRead32(r6_addr_4);
    MemoryInline::FlatWrite32((r4 + 4), r5);
    r12 = MemoryInline::FlatRead32((r28 + 14456));
    ctr = r12;
    ctx->lr = 0x8050C76Cu;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    r4 = MemoryInline::FlatRead32((r13 + -13848));
    r23 = 0;
    r24 = 0;
    r4_addr_8 = (r4 + r30);
    r4 = MemoryInline::FlatRead32(r4_addr_8);
    MemoryInline::FlatWrite32((r4 + 12), r3);
    goto loc_8050C7C8;
}

loc_8050C784:
{
    r12 = MemoryInline::FlatRead32((r28 + 14456));
    r3 = MemoryInline::FlatRead16((r29 + 10));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    ctr = r12;
    ctx->lr = 0x8050C794u;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r13 + -13848));
    r30_addr_10 = (r30 + r0);
    r4 = MemoryInline::FlatRead32(r30_addr_10);
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r4_addr_10 = (r4 + r24);
    MemoryInline::FlatWrite32(r4_addr_10, r3);
    r30_addr_11 = (r30 + r0);
    r4 = MemoryInline::FlatRead32(r30_addr_11);
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r3_addr_10 = (r3 + r24);
    r4 = MemoryInline::FlatRead32(r3_addr_10);
    r5_addr_2 = (r5 + r24);
    r3 = MemoryInline::FlatRead32(r5_addr_2);
    r5 = MemoryInline::FlatRead16((r29 + 10));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r24 = (r24 + 4);
    r23 = (r23 + 1);
}

loc_8050C7C8:
{
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r3_addr_9 = (r3 + r24);
    r0 = MemoryInline::FlatRead32(r3_addr_9);
}

loc_8050C7D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8050C784;
    }
}

loc_8050C7D8:
{
    r4 = MemoryInline::FlatRead32((r13 + -13848));
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r0 = (r0_rot_29 & -4);
    r5 = 0;
    r3 = r27;
    r4_addr_11 = (r4 + r30);
    r4 = MemoryInline::FlatRead32(r4_addr_11);
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r4_addr_12 = (r4 + r0);
    MemoryInline::FlatWrite32(r4_addr_12, r5);
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_9EA0 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_9EA0);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_9EA0 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r4 = 0x80760000u;
    r12 = MemoryInline::FlatRead32((r4 + 14456));
    ctr = r12;
    r3 = (r3 + 1);
    ctx->lr = 0x8050C80Cu;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    r6 = MemoryInline::FlatRead32((r13 + -13848));
    r4 = r27;
    r6_addr_5 = (r6 + r30);
    r5 = MemoryInline::FlatRead32(r6_addr_5);
    MemoryInline::FlatWrite32((r5 + 16), r3);
    r6_addr_6 = (r6 + r30);
    r3 = MemoryInline::FlatRead32(r6_addr_6);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_A723 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_A723;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r3 = r29;
}

loc_8050C82C:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8050C2C0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8050C2C0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8050C2C0 func_8050C2C0 preserves=true fpr_mask=0x00000000
