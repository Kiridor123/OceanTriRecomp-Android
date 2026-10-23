#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8047ABB0(CpuContext* ctx);
extern "C" uint64_t func_8047ABB0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8047B278(CpuContext* ctx);
extern "C" uint32_t func_8047B278_ra58_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8047B72C(CpuContext* ctx);
extern "C" uint64_t func_8047B72C_ra48_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8047E6DC(CpuContext* ctx);
extern "C" uint64_t func_8047E6DC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80481978(CpuContext* ctx);
extern "C" uint64_t func_80481978_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8047E35C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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

    goto loc_8047E35C;

loc_8047E35C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r3 = (r1 + 12);
    // inline leaf 0x80484568 (19 guest instruction(s))
}

loc_inl1_0x80484568:
{
    r5 = 0x80740000u;
    r5 = (r5 + -17608);
    r0 = MemoryInline::FlatRead8((r5 + 1614));
}

loc_inl1_0x80484578:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(4))) {
        goto loc_inl1_0x80484584;
    }
}

loc_inl1_0x8048457C:
{
    r3 = 12;
    goto loc_inl1_cont_80484568;
}

loc_inl1_0x80484584:
{
    r4 = MemoryInline::FlatRead16((r5 + 1590));
    r0 = MemoryInline::FlatRead16((r5 + 1592));
    MemoryInline::FlatWriteRam16(r3, static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead16((r5 + 1594));
    r0 = MemoryInline::FlatRead16((r5 + 1596));
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam16((r3 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r5 + 1598));
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    r3 = 0;
}

loc_inl1_cont_80484568:
{
    // end of inlined leaf 0x80484568
    r0 = (r3 & 255);
}

loc_8047E38C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8047E3F8;
    }
}

loc_8047E390:
{
    r0 = MemoryInline::FlatRead16((r1 + 18));
}

loc_8047E398:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(15))) {
        goto loc_8047E3F8;
    }
}

loc_8047E39C:
{
    r0 = MemoryInline::FlatRead8((r1 + 12));
}

loc_8047E3A4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(3))) {
        goto loc_8047E3F8;
    }
}

loc_8047E3A8:
{
}

loc_8047E3AC:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(4))) {
        goto loc_8047E3D4;
    }
}

loc_8047E3B0:
{
    r5 = 0x80570000u;
    r3 = r28;
    r5 = (r5 + 15632);
    r4 = (r1 + 8);
    r0 = MemoryInline::FlatRead16((r5 + 4));
    r0 = (r0 & 11);
}

loc_8047E3C8:
{
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    ctx->lr = 0x8047E3D0u;
    if constexpr (KnownRegArgsCpuCall<0x80481978u>(&func_80481978)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        const auto regargs_result_80481978_17C6 = func_80481978_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80481978_17C6);
        r4 = static_cast<uint32_t>(regargs_result_80481978_17C6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        InvokeDirectCpu<0x80481978u>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_8047E3F8;
}

loc_8047E3D4:
{
}

loc_8047E3D8:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(5))) {
        goto loc_8047E3F8;
    }
}

loc_8047E3DC:
{
    r5 = 0x80570000u;
    r3 = r28;
    r5 = (r5 + 15632);
    r4 = (r1 + 8);
    r0 = MemoryInline::FlatRead16((r5 + 4));
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    ctx->lr = 0x8047E3F8u;
    if constexpr (KnownRegArgsCpuCall<0x80481978u>(&func_80481978)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        const auto regargs_result_80481978_2155 = func_80481978_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80481978_2155);
        r4 = static_cast<uint32_t>(regargs_result_80481978_2155 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        InvokeDirectCpu<0x80481978u>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_8047E3F8:
{
    r5 = MemoryInline::FlatRead32((r13 + -20696));
    r30 = 1;
    r4 = MemoryInline::FlatRead8((r5 + 1));
    goto loc_8047E43C;
}

loc_8047E408:
{
    r3 = (r30 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r0 = (r0 - r3);
    r3 = (r5 + r0);
    r5_addr_2 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_2);
}

loc_8047E420:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(r0))) {
        goto loc_8047E438;
    }
}

loc_8047E424:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_8047E42C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_8047E448;
    }
}

loc_8047E430:
{
}

loc_8047E434:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r0))) {
        goto loc_8047E448;
    }
}

loc_8047E438:
{
    r30 = (r30 + 1);
}

loc_8047E43C:
{
    r0 = (r30 & 255);
}

loc_8047E444:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r4))) {
        goto loc_8047E408;
    }
}

loc_8047E448:
{
    r0 = MemoryInline::FlatRead8((r5 + 1));
    r3 = (r30 & 255);
}

loc_8047E454:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_8047E6C4;
    }
}

loc_8047E458:
{
    r23 = 0x80740000u;
    r31 = 0;
    r23 = (r23 + -18476);
}

loc_8047E464:
{
    r29_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(5));
    r29 = (r29_rot_2 & 8160);
    r24 = (r23 + r29);
    r0 = MemoryInline::FlatRead8((r24 + 182));
}

loc_8047E474:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8047E4A4;
    }
}

loc_8047E478:
{
    r4 = r28;
    r3 = (r24 + 176);
    if constexpr (KnownRegArgsCpuCall<0x8047B278u>(&func_8047B278)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8047B278_2FF6 = func_8047B278_ra58_0_8_0(ctx, r3, r4, r6);
        r3 = regargs_result_8047B278_2FF6;
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
        InvokeDirectCpu<0x8047B278u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8047E488:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8047E4A4;
    }
}

loc_8047E48C:
{
    r3 = r24;
    r3 = (r3 + 152);
    ctx->lr = 0x8047E498u;
    if constexpr (KnownRegArgsCpuCall<0x8047B72Cu>(&func_8047B72C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8047B72C_338C = func_8047B72C_ra48_0_18_0(ctx, r3, r6);
        r3 = static_cast<uint32_t>(regargs_result_8047B72C_338C);
        r4 = static_cast<uint32_t>(regargs_result_8047B72C_338C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8047B72Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = 0;
    MemoryInline::FlatWrite8((r24 + 182), static_cast<uint8_t>(r0));
    goto loc_8047E4B0;
}

loc_8047E4A4:
{
    r31 = (r31 + 1);
}

loc_8047E4AC:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(3))) {
        goto loc_8047E464;
    }
}

loc_8047E4B0:
{
    r4 = (r30 & 255);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & 1020);
    r30 = (r3 - r4);
    r0 = MemoryInline::FlatRead32((r13 + -20696));
    r4 = MemoryInline::FlatRead32((r13 + -20692));
    r31_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(3));
    r31 = (r31_rot_1 & 2040);
    r3 = (r0 + r30);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r0 * 74);
    r0 = (r4 + r0);
    r3 = (r0 + r31);
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_8047E4E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8047E6C4;
    }
}

loc_8047E4E8:
{
    r23 = 0x80740000u;
    r29 = 0;
    r24 = (r23 + -18216);
    goto loc_8047E538;
}

loc_8047E4F8:
{
    r3 = (r29 & 255);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & 2040);
    r0 = (r0 + r3);
    r3 = (r24 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 7));
}

loc_8047E510:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(r0))) {
        goto loc_8047E534;
    }
}

loc_8047E514:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
}

loc_8047E51C:
{
    if ((static_cast<uint32_t>(r27) != static_cast<uint32_t>(r0))) {
        goto loc_8047E534;
    }
}

loc_8047E520:
{
    r4 = r28;
    r3 = (r3 + 1);
    if constexpr (KnownRegArgsCpuCall<0x8047B278u>(&func_8047B278)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8047B278_3DBD = func_8047B278_ra58_0_8_0(ctx, r3, r4, r6);
        r3 = regargs_result_8047B278_3DBD;
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
        InvokeDirectCpu<0x8047B278u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8047E530:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8047E548;
    }
}

loc_8047E534:
{
    r29 = (r29 + 1);
}

loc_8047E538:
{
    r0 = MemoryInline::FlatRead8((r23 + -18216));
    r3 = (r29 & 255);
}

loc_8047E544:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8047E4F8;
    }
}

loc_8047E548:
{
    r0 = MemoryInline::FlatRead32((r13 + -20696));
    r4 = MemoryInline::FlatRead32((r13 + -20692));
    r3 = (r0 + r30);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r0 * 74);
    r0 = (r4 + r0);
    r3 = (r0 + r31);
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_8047E56C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(16))) {
        goto loc_8047E5DC;
    }
}

loc_8047E570:
{
    r27 = 0x80740000u;
    r3 = (r29 & 255);
    r0 = MemoryInline::FlatRead8((r27 + -18216));
}

loc_8047E580:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8047E648;
    }
}

loc_8047E584:
{
    r26 = (r27 + -18216);
    goto loc_8047E5C0;
}

loc_8047E58C:
{
    r6 = (r29 & 255);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(3));
    r4 = (r4_rot_2 & 2040);
    r3 = (r6 + 1);
    r5 = 9;
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & -8);
    r4 = (r4 + r6);
    r0 = (r0 + r3);
    r3 = (r26 + r4);
    r4 = (r26 + r0);
    r3 = (r3 + 1);
    r4 = (r4 + 1);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r29 = (r29 + 1);
}

loc_8047E5C0:
{
    r3 = MemoryInline::FlatRead8((r27 + -18216));
    r0 = (r29 & 255);
}

loc_8047E5CC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_8047E58C;
    }
}

loc_8047E5D0:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam8((r27 + -18216), static_cast<uint8_t>(r0));
    goto loc_8047E648;
}

loc_8047E5DC:
{
    r30 = 0x80740000u;
    r4 = (r29 & 255);
    r0 = MemoryInline::FlatRead8((r30 + -18216));
}

loc_8047E5EC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8047E648;
    }
}

loc_8047E5F0:
{
}

loc_8047E5F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_8047E618;
    }
}

loc_8047E5F8:
{
    r0 = MemoryInline::FlatRead8((r13 + -15848));
}

loc_8047E600:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_8047E6C4;
    }
}

loc_8047E604:
{
    r4 = 0x80610000u;
    r3 = 1281;
    r4 = (r4 + 14600);
    ctx->lr = 0x8047E614u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABB0u>(&func_8047ABB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        const auto regargs_result_8047ABB0_4BFD = func_8047ABB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABB0_4BFD);
        r4 = static_cast<uint32_t>(regargs_result_8047ABB0_4BFD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        InvokeDirectCpu<0x8047ABB0u>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_8047E6C4;
}

loc_8047E618:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(3));
    r3 = (r3_rot_2 & 2040);
    r0 = (r30 + -18216);
    r3 = (r3 + r4);
    r4 = r28;
    r5 = (r0 + r3);
    guest_range_2 = MemoryInline::ResolveRangeHost((r5 + 1), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r5 + 7), static_cast<uint8_t>(r26));
    r3 = (r5 + 1);
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r5 + 8), static_cast<uint8_t>(r27));
    // inline leaf 0x8047B244 (13 guest instruction(s))
    r9 = MemoryInline::FlatRead8(r4);
    r8 = MemoryInline::FlatRead8((r4 + 1));
    r7 = MemoryInline::FlatRead8((r4 + 2));
    r6 = MemoryInline::FlatRead8((r4 + 3));
    r5 = MemoryInline::FlatRead8((r4 + 4));
    r0 = MemoryInline::FlatRead8((r4 + 5));
    MemoryInline::WriteResolved8(guest_range_2, 0u, r3, static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r3 + 1), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r3 + 2), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r3 + 3), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r3 + 4), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8047B244
    r3 = MemoryInline::FlatRead8((r30 + -18216));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r30 + -18216), static_cast<uint8_t>(r0));
}

loc_8047E648:
{
    r3 = 0x80740000u;
    r24 = 0;
    r26 = (r3 + -18476);
    goto loc_8047E68C;
}

loc_8047E658:
{
    r0 = (r24 & 255);
    r4 = r28;
    r23 = (r0 * 11);
    r3 = (r26 + r23);
    if constexpr (KnownRegArgsCpuCall<0x8047B278u>(&func_8047B278)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8047B278_5A71 = func_8047B278_ra58_0_8_0(ctx, r3, r4, r6);
        r3 = regargs_result_8047B278_5A71;
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
        InvokeDirectCpu<0x8047B278u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8047E670:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8047E688;
    }
}

loc_8047E674:
{
    r3 = (r26 + r23);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r0));
    goto loc_8047E69C;
}

loc_8047E688:
{
    r24 = (r24 + 1);
}

loc_8047E68C:
{
    r0 = MemoryInline::FlatRead8((r26 + 77));
    r3 = (r24 & 255);
}

loc_8047E698:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8047E658;
    }
}

loc_8047E69C:
{
    r6 = 0x80740000u;
    r5 = (r29 & 255);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(3));
    r0 = (r0_rot_10 & 2040);
    r3 = r28;
    r6 = (r6 + -18216);
    r4 = 0;
    r0 = (r0 + r5);
    r5 = (r6 + r0);
    MemoryInline::FlatWrite8((r5 + 9), static_cast<uint8_t>(r25));
    ctx->lr = 0x8047E6C4u;
    if constexpr (KnownRegArgsCpuCall<0x8047E6DCu>(&func_8047E6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        const auto regargs_result_8047E6DC_6179 = func_8047E6DC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047E6DC_6179);
        r4 = static_cast<uint32_t>(regargs_result_8047E6DC_6179 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        InvokeDirectCpu<0x8047E6DCu>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_8047E6C4:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8047E35C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8047E35C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8047E35C func_8047E35C preserves=true fpr_mask=0x00000000
