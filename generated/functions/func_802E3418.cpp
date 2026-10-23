#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80053870(CpuContext* ctx);
extern "C" uint32_t func_80053870_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8005399C(CpuContext* ctx);
extern "C" uint32_t func_8005399C_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_80053B30(CpuContext* ctx);
extern "C" uint64_t func_80053B30_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8005432C(CpuContext* ctx);
extern "C" uint64_t func_8005432C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800543D4(CpuContext* ctx);
extern "C" uint64_t func_800543D4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802E3F8C(CpuContext* ctx);
extern "C" uint64_t func_802E3F8C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" MkwStateFreeResult2 func_8005399C_statefree(uint32_t);
extern "C" void func_8005399C_statefree_v0(uint32_t);

extern "C" uint64_t func_802E3418_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t stackword18 = 0;
    uint32_t stackword19 = 0;
    uint32_t stackword20 = 0;
    uint32_t stackword21 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
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
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_802E3418;

loc_802E3418:
{
    MemoryInline::FlatWriteRam32((r1 + -256), r1);
    r1 = (r1 + -256);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 260), r0);
    r11 = (r1 + 256);
    // inline leaf 0x8045745C (17 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, false, true);
    // end of inlined leaf 0x8045745C
    r17 = r3;
    r18 = r4;
    r21 = r7;
    r22 = r9;
    r23 = MemoryInline::FlatRead16((r1 + 266));
    r24 = MemoryInline::FlatRead16((r1 + 270));
    r30 = MemoryInline::FlatRead16((r1 + 274));
    r19 = (r5 & 65520);
    r20 = (r6 & 65520);
}

loc_802E3454:
{
    if ((static_cast<uint32_t>(r19) >= static_cast<uint32_t>(64))) {
        goto loc_802E345C;
    }
}

loc_802E3458:
{
    r19 = 64;
}

loc_802E345C:
{
}

loc_802E3460:
{
    if ((static_cast<uint32_t>(r20) >= static_cast<uint32_t>(64))) {
        goto loc_802E3468;
    }
}

loc_802E3464:
{
    r20 = 64;
}

loc_802E3468:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r5 = r19;
    r6 = r20;
    r7 = (r8 & 255);
    r8 = r10;
    r9 = 0;
    ctx->lr = 0x802E3488u;
    if constexpr (KnownRegArgsCpuCall<0x802E3F8Cu>(&func_802E3F8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_802E3F8C_124C = func_802E3F8C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E3F8C_124C);
        r4 = static_cast<uint32_t>(regargs_result_802E3F8C_124C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802E3F8Cu>(ctx);
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = (r17 + 32);
    r31 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r18 + 32);
    r29 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r17 + r19);
    r26 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r18 + r20);
    r25 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r26 + -32);
    r28 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r25 + -32);
    r27 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 64u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 44u, (r1 + 60), static_cast<uint16_t>(r17));
    MemoryInline::WriteResolved16(guest_range_1, 32u, (r1 + 48), static_cast<uint16_t>(r17));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r1 + 28), static_cast<uint16_t>(r17));
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r1 + 16), static_cast<uint16_t>(r17));
    MemoryInline::WriteResolved16(guest_range_1, 22u, (r1 + 38), static_cast<uint16_t>(r18));
    MemoryInline::WriteResolved16(guest_range_1, 18u, (r1 + 34), static_cast<uint16_t>(r18));
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r1 + 22), static_cast<uint16_t>(r18));
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r1 + 18), static_cast<uint16_t>(r18));
    MemoryInline::WriteResolved16(guest_range_1, 40u, (r1 + 56), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved16(guest_range_1, 36u, (r1 + 52), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r1 + 24), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r1 + 20), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved16(guest_range_1, 30u, (r1 + 46), static_cast<uint16_t>(r29));
    MemoryInline::WriteResolved16(guest_range_1, 26u, (r1 + 42), static_cast<uint16_t>(r29));
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r1 + 30), static_cast<uint16_t>(r29));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r1 + 26), static_cast<uint16_t>(r29));
    MemoryInline::WriteResolved16(guest_range_1, 60u, (r1 + 76), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_1, 48u, (r1 + 64), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_1, 28u, (r1 + 44), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r1 + 32), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_1, 54u, (r1 + 70), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved16(guest_range_1, 50u, (r1 + 66), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved16(guest_range_1, 38u, (r1 + 54), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved16(guest_range_1, 34u, (r1 + 50), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved16(guest_range_1, 56u, (r1 + 72), static_cast<uint16_t>(r26));
    MemoryInline::WriteResolved16(guest_range_1, 52u, (r1 + 68), static_cast<uint16_t>(r26));
    MemoryInline::WriteResolved16(guest_range_1, 24u, (r1 + 40), static_cast<uint16_t>(r26));
    MemoryInline::WriteResolved16(guest_range_1, 20u, (r1 + 36), static_cast<uint16_t>(r26));
    MemoryInline::WriteResolved16(guest_range_1, 62u, (r1 + 78), static_cast<uint16_t>(r25));
    MemoryInline::WriteResolved16(guest_range_1, 58u, (r1 + 74), static_cast<uint16_t>(r25));
    MemoryInline::WriteResolved16(guest_range_1, 46u, (r1 + 62), static_cast<uint16_t>(r25));
    MemoryInline::WriteResolved16(guest_range_1, 42u, (r1 + 58), static_cast<uint16_t>(r25));
    r0 = (r21 & 255);
}

loc_802E3540:
{
    r3 = 0x805D0000u;
    r16 = (r3 + 24648);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_802E3554;
    }
}

loc_802E354C:
{
    r3 = 0x805D0000u;
    r16 = (r3 + 24584);
}

loc_802E3554:
{
    r3 = 3;
    r4 = 16;
    // inline leaf 0x80053870 (21 guest instruction(s))
}

loc_inl1_0x80053870:
{
    r6 = 0x80670000u;
    r5 = (r6 + -12896);
    MemoryInline::FlatWriteRam8((r5 + 4), static_cast<uint8_t>(r3));
    r0 = 0;
    MemoryInline::FlatWriteRam32((r6 + -12896), r0);
    r0 = (r4 & 65535);
}

loc_inl1_0x8005388C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_inl1_0x800538AC;
    }
}

loc_inl1_0x80053890:
{
    r0 = (r3 & 255);
    r3 = (r13 + -32540);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_0);
    MemoryInline::FlatWriteRam16((r5 + 6), static_cast<uint16_t>(r0));
}

loc_inl1_0x800538A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800538B0;
    }
}

loc_inl1_0x800538A8:
{
    goto loc_inl1_cont_80053870;
}

loc_inl1_0x800538AC:
{
    MemoryInline::FlatWriteRam16((r5 + 6), static_cast<uint16_t>(r4));
}

loc_inl1_0x800538B0:
{
    r0 = 6;
    r3 = 0x80670000u;
    r3 = (r3 + -12896);
    MemoryInline::FlatWriteRam8((r3 + 5), static_cast<uint8_t>(r0));
}

loc_inl1_cont_80053870:
{
    // end of inlined leaf 0x80053870
    r3 = (r1 + 16);
    // inline leaf 0x800538C4 (7 guest instruction(s))
    r4 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r4 + -12896));
    r0 = (r0 | 4096);
    MemoryInline::FlatWriteRam32((r4 + -12896), r0);
    r4 = (r4 + -12896);
    MemoryInline::FlatWriteRam32((r4 + 8), r3);
    // end of inlined leaf 0x800538C4
    r3 = r22;
    // inline leaf 0x8005399C (10 guest instruction(s))
    r4 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r4 + -12896));
    r0 = (r0 | 131072);
    r0 = (r0 | 8192);
    MemoryInline::FlatWriteRam32((r4 + -12896), r0);
    r4 = (r4 + -12896);
    MemoryInline::FlatWriteRam32((r4 + 68), r3);
    r0 = (r4 + 68);
    MemoryInline::FlatWriteRam32((r4 + 12), r0);
    // end of inlined leaf 0x8005399C
    r3 = r30;
    r4 = r16;
    ctx->lr = 0x802E357Cu;
    if constexpr (KnownRegArgsCpuCall<0x80053B30u>(&func_80053B30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80053B30_3187 = func_80053B30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80053B30_3187);
        r4 = static_cast<uint32_t>(regargs_result_80053B30_3187 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80053B30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r21 & 255);
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r30 = (r30_rot_0 & -8);
    r3 = 0x805D0000u;
    r0 = (r3 + 24776);
    r3 = (r0 + r30);
    ctx->lr = 0x802E3594u;
    if constexpr (KnownRegArgsCpuCall<0x8005432Cu>(&func_8005432C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        const auto regargs_result_8005432C_36A4 = func_8005432C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8005432C_36A4);
        r4 = static_cast<uint32_t>(regargs_result_8005432C_36A4 >> 32);
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8005432Cu>(ctx);
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
    }
    ctx->lr = 0x802E3598u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x8005480Cu>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 176u, false, true);
    MemoryInline::WriteResolved16(guest_range_2, 36u, (r1 + 44), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved16(guest_range_2, 24u, (r1 + 32), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved16(guest_range_2, 20u, (r1 + 28), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved16(guest_range_2, 8u, (r1 + 16), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved16(guest_range_2, 32u, (r1 + 40), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_2, 28u, (r1 + 36), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_2, 16u, (r1 + 24), static_cast<uint16_t>(r28));
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r28)) << 16) | static_cast<uint16_t>(r18)))) {
        MemoryInline::WriteResolved16(guest_range_2, 12u, (r1 + 20), r28);
        MemoryInline::WriteResolved16(guest_range_2, 14u, (r1 + 22), r18);
    }
    MemoryInline::WriteResolved16(guest_range_2, 10u, (r1 + 18), static_cast<uint16_t>(r18));
    r0 = (r18 + 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_2, 22u, (r1 + 30), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 18u, (r1 + 26), static_cast<uint16_t>(r0));
    r0 = (r25 + -16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_2, 30u, (r1 + 38), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 26u, (r1 + 34), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 38u, (r1 + 46), static_cast<uint16_t>(r25));
    MemoryInline::WriteResolved16(guest_range_2, 34u, (r1 + 42), static_cast<uint16_t>(r25));
    r0 = (r19 + -64);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -12760));
    r0 = (r0 ^ -2147483648);
    stackword18 = r0;
    MemoryInline::WriteResolved32(guest_range_2, 172u, (r1 + 180), r0);
    r31 = 1127219200;
    stackword19 = r31;
    MemoryInline::WriteResolved32(guest_range_2, 168u, (r1 + 176), r31);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword19), static_cast<uint32_t>(stackword18));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r1 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12744));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r1 + 12), f0.d);
    r3 = 3;
    r4 = 8;
    // inline leaf 0x80053870 (21 guest instruction(s))
}

loc_inl4_0x80053870:
{
    r6 = 0x80670000u;
    r5 = (r6 + -12896);
    MemoryInline::FlatWriteRam8((r5 + 4), static_cast<uint8_t>(r3));
    r0 = 0;
    MemoryInline::FlatWriteRam32((r6 + -12896), r0);
    r0 = (r4 & 65535);
}

loc_inl4_0x8005388C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_inl4_0x800538AC;
    }
}

loc_inl4_0x80053890:
{
    r0 = (r3 & 255);
    r3 = (r13 + -32540);
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_4);
    MemoryInline::FlatWriteRam16((r5 + 6), static_cast<uint16_t>(r0));
}

loc_inl4_0x800538A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x800538B0;
    }
}

loc_inl4_0x800538A8:
{
    goto loc_inl4_cont_80053870;
}

loc_inl4_0x800538AC:
{
    MemoryInline::FlatWriteRam16((r5 + 6), static_cast<uint16_t>(r4));
}

loc_inl4_0x800538B0:
{
    r0 = 6;
    r3 = 0x80670000u;
    r3 = (r3 + -12896);
    MemoryInline::FlatWriteRam8((r3 + 5), static_cast<uint8_t>(r0));
}

loc_inl4_cont_80053870:
{
    // end of inlined leaf 0x80053870
    r3 = (r1 + 16);
    // inline leaf 0x800538C4 (7 guest instruction(s))
    r4 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r4 + -12896));
    r0 = (r0 | 4096);
    MemoryInline::FlatWriteRam32((r4 + -12896), r0);
    r4 = (r4 + -12896);
    MemoryInline::FlatWriteRam32((r4 + 8), r3);
    // end of inlined leaf 0x800538C4
    r3 = r22;
    // inline leaf 0x8005399C (10 guest instruction(s))
    r4 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r4 + -12896));
    r0 = (r0 | 131072);
    r0 = (r0 | 8192);
    MemoryInline::FlatWriteRam32((r4 + -12896), r0);
    r4 = (r4 + -12896);
    MemoryInline::FlatWriteRam32((r4 + 68), r3);
    r0 = (r4 + 68);
    MemoryInline::FlatWriteRam32((r4 + 12), r0);
    // end of inlined leaf 0x8005399C
    r3 = r23;
    r4 = 0x805D0000u;
    r4 = (r4 + 24712);
    ctx->lr = 0x802E3640u;
    if constexpr (KnownRegArgsCpuCall<0x80053B30u>(&func_80053B30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80053B30_52E1 = func_80053B30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80053B30_52E1);
        r4 = static_cast<uint32_t>(regargs_result_80053B30_52E1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80053B30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 8);
    r4 = 0x805D0000u;
    r0 = (r4 + 24824);
    r4 = (r0 + r30);
    ctx->lr = 0x802E3654u;
    if constexpr (KnownRegArgsCpuCall<0x800543D4u>(&func_800543D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        const auto regargs_result_800543D4_5787 = func_800543D4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800543D4_5787);
        r4 = static_cast<uint32_t>(regargs_result_800543D4_5787 >> 32);
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800543D4u>(ctx);
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
    }
    ctx->lr = 0x802E3658u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x8005480Cu>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 184u, false, true);
    MemoryInline::WriteResolved16(guest_range_3, 20u, (r1 + 28), static_cast<uint16_t>(r17));
    MemoryInline::WriteResolved16(guest_range_3, 8u, (r1 + 16), static_cast<uint16_t>(r17));
    r0 = (r17 + 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_3, 16u, (r1 + 24), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_3, 12u, (r1 + 20), static_cast<uint16_t>(r0));
    r0 = (r26 + -16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_3, 36u, (r1 + 44), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_3, 24u, (r1 + 32), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_3, 32u, (r1 + 40), static_cast<uint16_t>(r26));
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r26)) << 16) | static_cast<uint16_t>(r29)))) {
        MemoryInline::WriteResolved16(guest_range_3, 28u, (r1 + 36), r26);
        MemoryInline::WriteResolved16(guest_range_3, 30u, (r1 + 38), r29);
    }
    MemoryInline::WriteResolved16(guest_range_3, 26u, (r1 + 34), static_cast<uint16_t>(r29));
    MemoryInline::WriteResolved16(guest_range_3, 14u, (r1 + 22), static_cast<uint16_t>(r29));
    MemoryInline::WriteResolved16(guest_range_3, 10u, (r1 + 18), static_cast<uint16_t>(r29));
    MemoryInline::WriteResolved16(guest_range_3, 38u, (r1 + 46), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved16(guest_range_3, 34u, (r1 + 42), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved16(guest_range_3, 22u, (r1 + 30), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved16(guest_range_3, 18u, (r1 + 26), static_cast<uint16_t>(r27));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12744));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r1 + 8), f0.d);
    r0 = (r20 + -64);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -12760));
    r0 = (r0 ^ -2147483648);
    stackword20 = r0;
    stackword21 = r31;
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 180u, (r1 + 188), r0);
        MemoryInline::WriteResolved32(guest_range_3, 176u, (r1 + 184), r31);
    }
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword21), static_cast<uint32_t>(stackword20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r1 + 12), f0.d);
    r3 = 3;
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x80053870u>(&func_80053870)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80053870_6C68 = func_80053870_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80053870_6C68;
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
        InvokeDirectCpu<0x80053870u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = (r1 + 16);
    // inline leaf 0x800538C4 (7 guest instruction(s))
    r4 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r4 + -12896));
    r0 = (r0 | 4096);
    MemoryInline::FlatWriteRam32((r4 + -12896), r0);
    r4 = (r4 + -12896);
    MemoryInline::FlatWriteRam32((r4 + 8), r3);
    // end of inlined leaf 0x800538C4
    r3 = r22;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8005399Cu) && KnownTranslatedCpuCall<0x8005399Cu>::kAvailable && !KnownTranslatedCpuCall<0x8005399Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8005399Cu>()) {
        func_8005399C_statefree_v0(r3);
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8005399Cu>(ctx);
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
        r11 = ctx->gpr[11];
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
    }
    r3 = r24;
    r4 = 0x805D0000u;
    r4 = (r4 + 24744);
    ctx->lr = 0x802E36FCu;
    if constexpr (KnownRegArgsCpuCall<0x80053B30u>(&func_80053B30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80053B30_768A = func_80053B30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80053B30_768A);
        r4 = static_cast<uint32_t>(regargs_result_80053B30_768A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80053B30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 8);
    r4 = 0x805D0000u;
    r0 = (r4 + 24872);
    r4 = (r0 + r30);
    ctx->lr = 0x802E3710u;
    if constexpr (KnownRegArgsCpuCall<0x800543D4u>(&func_800543D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        const auto regargs_result_800543D4_7B30 = func_800543D4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800543D4_7B30);
        r4 = static_cast<uint32_t>(regargs_result_800543D4_7B30 >> 32);
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800543D4u>(ctx);
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
    }
    ctx->lr = 0x802E3714u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x8005480Cu>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r11 = (r1 + 256);
    r0 = MemoryInline::FlatRead32((r1 + 260));
    ctx->lr = r0;
    r1 = (r1 + 256);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
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

extern "C" void func_802E3418(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802E3418_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF80FFFF fpr_write=0xFF80FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802E3418 func_802E3418 preserves=true fpr_mask=0x00000000
