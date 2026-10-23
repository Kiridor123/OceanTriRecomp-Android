#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005B8D8(CpuContext* ctx);
extern "C" uint64_t func_8005B8D8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8005B994(CpuContext* ctx);
extern "C" uint64_t func_8005B994_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8005BAB4(CpuContext* ctx);
extern "C" uint64_t func_8005BAB4_ra38_3e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);
extern "C" void func_8005BEA4(CpuContext* ctx);
extern "C" uint32_t func_8005BEA4_ra68_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800DBC94(CpuContext* ctx);
extern "C" uint64_t func_800DBC94_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80461D34(CpuContext* ctx);
extern "C" uint64_t func_80461D34_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8005CAC8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_10 = 0;
    uint32_t r30_addr_11 = 0;
    uint32_t r30_addr_12 = 0;
    uint32_t r30_addr_13 = 0;
    uint32_t r30_addr_14 = 0;
    uint32_t r30_addr_15 = 0;
    uint32_t r30_addr_16 = 0;
    uint32_t r30_addr_17 = 0;
    uint32_t r30_addr_18 = 0;
    uint32_t r30_addr_19 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_20 = 0;
    uint32_t r30_addr_21 = 0;
    uint32_t r30_addr_22 = 0;
    uint32_t r30_addr_23 = 0;
    uint32_t r30_addr_24 = 0;
    uint32_t r30_addr_25 = 0;
    uint32_t r30_addr_26 = 0;
    uint32_t r30_addr_27 = 0;
    uint32_t r30_addr_28 = 0;
    uint32_t r30_addr_29 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_30 = 0;
    uint32_t r30_addr_31 = 0;
    uint32_t r30_addr_32 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r30_addr_6 = 0;
    uint32_t r30_addr_7 = 0;
    uint32_t r30_addr_8 = 0;
    uint32_t r30_addr_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8005CAC8;

loc_8005CAC8:
{
    MemoryInline::FlatWriteRam32((r1 + -576), r1);
    r1 = (r1 + -576);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 580), r0);
    r11 = (r1 + 576);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r21 = r3;
    r22 = r4;
    r25 = r5;
    r23 = r6;
    r24 = r7;
    r3 = r24;
    ctx->lr = 0x8005CAF8u;
    if constexpr (KnownRegArgsCpuCall<0x8005B8D8u>(&func_8005B8D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8005B8D8_1381 = func_8005B8D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005B8D8_1381);
        r4 = static_cast<uint32_t>(regargs_result_8005B8D8_1381 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8005B8D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8005CAFC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8005CB08;
    }
}

loc_8005CB00:
{
    r3 = 1;
    goto loc_8005CF1C;
}

loc_8005CB08:
{
    r3 = r24;
    ctx->lr = 0x8005CB10u;
    if constexpr (KnownRegArgsCpuCall<0x8005B994u>(&func_8005B994)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8005B994_189A = func_8005B994_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005B994_189A);
        r4 = static_cast<uint32_t>(regargs_result_8005B994_189A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8005B994u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r27 = r3;
}

loc_8005CB18:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8005CB24;
    }
}

loc_8005CB1C:
{
    r3 = 1;
    goto loc_8005CF1C;
}

loc_8005CB24:
{
}

loc_8005CB28:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_8005CB34;
    }
}

loc_8005CB2C:
{
    r3 = 0;
    goto loc_8005CF1C;
}

loc_8005CB34:
{
    r3 = (r1 + 272);
    r4 = r24;
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_1F09 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_1F09;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8005CB44:
{
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(r27))) {
        goto loc_8005CB4C;
    }
}

loc_8005CB48:
{
    r23 = r27;
}

loc_8005CB4C:
{
    r3 = (r1 + 272);
    r4 = r23;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8005B8DCu>(ctx);
    r3 = ctx->gpr[3];
    r28 = r3;
}

loc_8005CB60:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8005CB6C;
    }
}

loc_8005CB64:
{
    r3 = 1;
    goto loc_8005CF1C;
}

loc_8005CB6C:
{
    r0 = MemoryInline::FlatRead16((r13 + -17728));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r13 + -17728);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r3 = r21;
    r4 = r22;
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl1_0x8005B780:
{
    r5 = MemoryInline::FlatRead32((r13 + -17736));
}

loc_inl1_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryInline::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryInline::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + 20588), r4);
    goto loc_inl1_cont_8005B780;
}

loc_inl1_return:
{
}

loc_inl1_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r25)));
    // inline leaf 0x8005B804 (14 guest instruction(s))
}

loc_inl2_0x8005B804:
{
    r4 = MemoryInline::FlatRead32((r13 + -17736));
}

loc_inl2_0x8005B80C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8005B810:
{
}

loc_inl2_0x8005B814:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8005B818:
{
}

loc_inl2_0x8005B81C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(16))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8005B820:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x80590000u;
    r3 = (r3 + -17520);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_1);
    r3 = (r4 + 65536);
    MemoryInline::FlatWrite32((r3 + 20600), r0);
    goto loc_inl2_cont_8005B804;
}

loc_inl2_return:
{
}

loc_inl2_cont_8005B804:
{
    // end of inlined leaf 0x8005B804
    // inline leaf 0x8005B738 (9 guest instruction(s))
}

loc_inl3_0x8005B738:
{
    r3 = MemoryInline::FlatRead32((r13 + -17736));
}

loc_inl3_0x8005B740:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x8005B74C;
    }
}

loc_inl3_0x8005B744:
{
    r3 = 0;
    goto loc_inl3_cont_8005B738;
}

loc_inl3_0x8005B74C:
{
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + 20576));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_inl3_cont_8005B738:
{
    // end of inlined leaf 0x8005B738
    // inline leaf 0x8005B75C (9 guest instruction(s))
}

loc_inl4_0x8005B75C:
{
    r3 = MemoryInline::FlatRead32((r13 + -17736));
}

loc_inl4_0x8005B764:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x8005B770;
    }
}

loc_inl4_0x8005B768:
{
    r3 = 0;
    goto loc_inl4_cont_8005B75C;
}

loc_inl4_0x8005B770:
{
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + 20580));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_inl4_cont_8005B75C:
{
    // end of inlined leaf 0x8005B75C
    r24 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r25 = (r1 + 272);
    r26 = 0;
    r30 = (r1 + 16);
    r29 = 0x80000000u;
    r31 = 0;
    goto loc_8005CEC8;
}

loc_8005CBB0:
{
    r3 = r25;
    ctx->lr = 0x8005CBB8u;
    if constexpr (KnownRegArgsCpuCall<0x8005BEA4u>(&func_8005BEA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8005BEA4_32A5 = func_8005BEA4_ra68_0_8_0(ctx, r3, r5, r6);
        r3 = regargs_result_8005BEA4_32A5;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8005BEA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8005CBBC:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(1))) {
        goto loc_8005CCC8;
    }
}

loc_8005CBC0:
{
    r4 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8005CBC8:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8005CEC8;
    }
}

loc_8005CBCC:
{
    r5 = (r3 + -8);
}

loc_8005CBD4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(8))) {
        goto loc_8005CC98;
    }
}

loc_8005CBD8:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8005CBF0;
    }
}

loc_8005CBE0:
{
    r0 = (r29 + -2);
}

loc_8005CBE8:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r0))) {
        goto loc_8005CBF0;
    }
}

loc_8005CBEC:
{
    r6 = 1;
}

loc_8005CBF0:
{
}

loc_8005CBF4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8005CC98;
    }
}

loc_8005CBF8:
{
    r0 = (r5 + 7);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_4 & 536870911);
    ctr = r0;
}

loc_8005CC08:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_8005CC98;
    }
}

loc_8005CC0C:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r25, 0, 8u, true, false);
    r5 = MemoryInline::ReadResolved8(guest_range_2, 0u, r25);
    r0 = r26;
    r26 = (r26 + 1);
    r30_addr_3 = (r30 + r0);
    MemoryInline::FlatWrite8(r30_addr_3, static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r25 + 1));
    r0 = r26;
    r26 = (r26 + 1);
    r30_addr_4 = (r30 + r0);
    MemoryInline::FlatWrite8(r30_addr_4, static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r25 + 2));
    r0 = r26;
    r26 = (r26 + 1);
    r30_addr_5 = (r30 + r0);
    MemoryInline::FlatWrite8(r30_addr_5, static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r25 + 3));
    r0 = r26;
    r26 = (r26 + 1);
    r30_addr_6 = (r30 + r0);
    MemoryInline::FlatWrite8(r30_addr_6, static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r25 + 4));
    r0 = r26;
    r26 = (r26 + 1);
    r30_addr_7 = (r30 + r0);
    MemoryInline::FlatWrite8(r30_addr_7, static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r25 + 5));
    r0 = r26;
    r26 = (r26 + 1);
    r30_addr_8 = (r30 + r0);
    MemoryInline::FlatWrite8(r30_addr_8, static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r25 + 6));
    r0 = r26;
    r26 = (r26 + 1);
    r30_addr_9 = (r30 + r0);
    MemoryInline::FlatWrite8(r30_addr_9, static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r25 + 7));
    r25 = (r25 + 8);
    r0 = r26;
    r26 = (r26 + 1);
    r30_addr_10 = (r30 + r0);
    MemoryInline::FlatWrite8(r30_addr_10, static_cast<uint8_t>(r5));
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8005CC0C;
    }
}

loc_8005CC98:
{
    r0 = (r3 - r4);
    ctr = r0;
}

loc_8005CCA4:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r3))) {
        goto loc_8005CEC8;
    }
}

loc_8005CCA8:
{
    r3 = MemoryInline::FlatRead8(r25);
    r25 = (r25 + 1);
    r0 = r26;
    r26 = (r26 + 1);
    r30_addr_13 = (r30 + r0);
    MemoryInline::FlatWrite8(r30_addr_13, static_cast<uint8_t>(r3));
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8005CCA8;
    }
}

loc_8005CCC4:
{
    goto loc_8005CEC8;
}

loc_8005CCC8:
{
    r3 = (r25 + 1);
    ctx->lr = 0x8005CCD0u;
    if constexpr (KnownRegArgsCpuCall<0x8005BEA4u>(&func_8005BEA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8005BEA4_45A9 = func_8005BEA4_ra68_0_8_0(ctx, r3, r5, r6);
        r3 = regargs_result_8005BEA4_45A9;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8005BEA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8005CCD4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(1))) {
        goto loc_8005CE00;
    }
}

loc_8005CCD8:
{
    r4 = MemoryInline::FlatRead8(r25);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_8005CCE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_8005CE80;
    }
}

loc_8005CCE8:
{
    r25 = (r25 + 1);
    r0 = r26;
    r26 = (r26 + 1);
    r30_addr_14 = (r30 + r0);
    MemoryInline::FlatWrite8(r30_addr_14, static_cast<uint8_t>(r4));
    r4 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8005CD00:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8005CEC8;
    }
}

loc_8005CD04:
{
    r5 = (r3 + -8);
}

loc_8005CD0C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(8))) {
        goto loc_8005CDD0;
    }
}

loc_8005CD10:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8005CD28;
    }
}

loc_8005CD18:
{
    r0 = (r29 + -2);
}

loc_8005CD20:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r0))) {
        goto loc_8005CD28;
    }
}

loc_8005CD24:
{
    r6 = 1;
}

loc_8005CD28:
{
}

loc_8005CD2C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8005CDD0;
    }
}

loc_8005CD30:
{
    r0 = (r5 + 7);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_6 & 536870911);
    ctr = r0;
}

loc_8005CD40:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_8005CDD0;
    }
}

loc_8005CD44:
{
    guest_range_3 = MemoryInline::ResolveRangeHost(r25, 0, 8u, true, false);
    r5 = MemoryInline::ReadResolved8(guest_range_3, 0u, r25);
    r0 = r26;
    r26 = (r26 + 1);
    r30_addr_16 = (r30 + r0);
    MemoryInline::FlatWrite8(r30_addr_16, static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_3, 1u, (r25 + 1));
    r0 = r26;
    r26 = (r26 + 1);
    r30_addr_17 = (r30 + r0);
    MemoryInline::FlatWrite8(r30_addr_17, static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_3, 2u, (r25 + 2));
    r0 = r26;
    r26 = (r26 + 1);
    r30_addr_18 = (r30 + r0);
    MemoryInline::FlatWrite8(r30_addr_18, static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_3, 3u, (r25 + 3));
    r0 = r26;
    r26 = (r26 + 1);
    r30_addr_19 = (r30 + r0);
    MemoryInline::FlatWrite8(r30_addr_19, static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_3, 4u, (r25 + 4));
    r0 = r26;
    r26 = (r26 + 1);
    r30_addr_20 = (r30 + r0);
    MemoryInline::FlatWrite8(r30_addr_20, static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_3, 5u, (r25 + 5));
    r0 = r26;
    r26 = (r26 + 1);
    r30_addr_21 = (r30 + r0);
    MemoryInline::FlatWrite8(r30_addr_21, static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_3, 6u, (r25 + 6));
    r0 = r26;
    r26 = (r26 + 1);
    r30_addr_22 = (r30 + r0);
    MemoryInline::FlatWrite8(r30_addr_22, static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_3, 7u, (r25 + 7));
    r25 = (r25 + 8);
    r0 = r26;
    r26 = (r26 + 1);
    r30_addr_23 = (r30 + r0);
    MemoryInline::FlatWrite8(r30_addr_23, static_cast<uint8_t>(r5));
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8005CD44;
    }
}

loc_8005CDD0:
{
    r0 = (r3 - r4);
    ctr = r0;
}

loc_8005CDDC:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r3))) {
        goto loc_8005CEC8;
    }
}

loc_8005CDE0:
{
    r3 = MemoryInline::FlatRead8(r25);
    r25 = (r25 + 1);
    r0 = r26;
    r26 = (r26 + 1);
    r30_addr_26 = (r30 + r0);
    MemoryInline::FlatWrite8(r30_addr_26, static_cast<uint8_t>(r3));
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8005CDE0;
    }
}

loc_8005CDFC:
{
    goto loc_8005CEC8;
}

loc_8005CE00:
{
    r3 = MemoryInline::FlatRead8(r25);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_8005CE0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(126))) {
        goto loc_8005CE74;
    }
}

loc_8005CE10:
{
    r0 = MemoryInline::FlatRead8((r25 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8005CE1C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(67))) {
        goto loc_8005CE74;
    }
}

loc_8005CE20:
{
    r0 = MemoryInline::FlatRead8((r25 + 2));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r25 + 3));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r31));
    r25 = (r25 + 4);
}

loc_8005CE3C:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_8005CE64;
    }
}

loc_8005CE40:
{
    r30_addr_27 = (r30 + r26);
    MemoryInline::FlatWrite8(r30_addr_27, static_cast<uint8_t>(r31));
    r3 = r30;
    ctx->lr = 0x8005CE4Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005BAB4u>(&func_8005BAB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8005BAB4_5E9F = func_8005BAB4_ra38_3e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BAB4_5E9F);
        r4 = static_cast<uint32_t>(regargs_result_8005BAB4_5E9F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8005BAB4u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r26 = 0;
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r31));
    // inline leaf 0x8005B7A4 (9 guest instruction(s))
}

loc_inl5_0x8005B7A4:
{
    r3 = MemoryInline::FlatRead32((r13 + -17736));
}

loc_inl5_0x8005B7AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x8005B7B8;
    }
}

loc_inl5_0x8005B7B0:
{
    r3 = 0;
    goto loc_inl5_cont_8005B7A4;
}

loc_inl5_0x8005B7B8:
{
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + 20584));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_inl5_cont_8005B7A4:
{
    // end of inlined leaf 0x8005B7A4
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r4 = r22;
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl6_0x8005B780:
{
    r5 = MemoryInline::FlatRead32((r13 + -17736));
}

loc_inl6_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryInline::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryInline::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + 20588), r4);
    goto loc_inl6_cont_8005B780;
}

loc_inl6_return:
{
}

loc_inl6_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
}

loc_8005CE64:
{
    r3 = (r1 + 8);
    ctx->lr = 0x8005CE6Cu;
    if constexpr (KnownRegArgsCpuCall<0x80461D34u>(&func_80461D34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80461D34_6AE0 = func_80461D34_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80461D34_6AE0);
        r4 = static_cast<uint32_t>(regargs_result_80461D34_6AE0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80461D34u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    // inline leaf 0x8005B804 (14 guest instruction(s))
}

loc_inl7_0x8005B804:
{
    r4 = MemoryInline::FlatRead32((r13 + -17736));
}

loc_inl7_0x8005B80C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl7_return;
    }
}

loc_inl7_0x8005B810:
{
}

loc_inl7_0x8005B814:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_inl7_return;
    }
}

loc_inl7_0x8005B818:
{
}

loc_inl7_0x8005B81C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(16))) {
        goto loc_inl7_return;
    }
}

loc_inl7_0x8005B820:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = 0x80590000u;
    r3 = (r3 + -17520);
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_4);
    r3 = (r4 + 65536);
    MemoryInline::FlatWrite32((r3 + 20600), r0);
    goto loc_inl7_cont_8005B804;
}

loc_inl7_return:
{
}

loc_inl7_cont_8005B804:
{
    // end of inlined leaf 0x8005B804
    goto loc_8005CEC8;
}

loc_8005CE74:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_8005CE7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_8005CEB4;
    }
}

loc_8005CE80:
{
    r25 = (r25 + 1);
}

loc_8005CE88:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_8005CEA0;
    }
}

loc_8005CE8C:
{
    r30_addr_30 = (r30 + r26);
    MemoryInline::FlatWrite8(r30_addr_30, static_cast<uint8_t>(r31));
    r3 = r30;
    ctx->lr = 0x8005CE98u;
    if constexpr (KnownRegArgsCpuCall<0x8005BAB4u>(&func_8005BAB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8005BAB4_7915 = func_8005BAB4_ra38_3e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BAB4_7915);
        r4 = static_cast<uint32_t>(regargs_result_8005BAB4_7915 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8005BAB4u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r26 = 0;
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r31));
}

loc_8005CEA0:
{
    r22 = (r22 + r24);
    r3 = r21;
    r4 = r22;
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl8_0x8005B780:
{
    r5 = MemoryInline::FlatRead32((r13 + -17736));
}

loc_inl8_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl8_return;
    }
}

loc_inl8_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryInline::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryInline::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + 20588), r4);
    goto loc_inl8_cont_8005B780;
}

loc_inl8_return:
{
}

loc_inl8_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    goto loc_8005CEC8;
}

loc_8005CEB4:
{
    r3 = MemoryInline::FlatRead8(r25);
    r25 = (r25 + 1);
    r0 = r26;
    r26 = (r26 + 1);
    r30_addr_29 = (r30 + r0);
    MemoryInline::FlatWrite8(r30_addr_29, static_cast<uint8_t>(r3));
}

loc_8005CEC8:
{
}

loc_8005CECC:
{
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(r28))) {
        goto loc_8005CBB0;
    }
}

loc_8005CED0:
{
}

loc_8005CED4:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_8005CEE8;
    }
}

loc_8005CED8:
{
    r0 = 0;
    r3 = (r1 + 16);
    r3_addr_6 = (r3 + r26);
    MemoryInline::FlatWrite8(r3_addr_6, static_cast<uint8_t>(r0));
    ctx->lr = 0x8005CEE8u;
    if constexpr (KnownRegArgsCpuCall<0x8005BAB4u>(&func_8005BAB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8005BAB4_859C = func_8005BAB4_ra38_3e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BAB4_859C);
        r4 = static_cast<uint32_t>(regargs_result_8005BAB4_859C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8005BAB4u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_8005CEE8:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r23)));
    MemoryInline::FlatWrite16((r13 + -17728), static_cast<uint16_t>(r4));
    r3 = (r13 + -17728);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8005CEFC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_8005CF08;
    }
}

loc_8005CF00:
{
    r3 = 33;
    ctx->lr = 0x8005CF08u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_8E4B = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_8E4B);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_8E4B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8005CF08:
{
}

loc_8005CF0C:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(r27))) {
        goto loc_8005CF18;
    }
}

loc_8005CF10:
{
    r3 = 1;
    goto loc_8005CF1C;
}

loc_8005CF18:
{
    r3 = 0;
}

loc_8005CF1C:
{
    r11 = (r1 + 576);
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryInline::FlatRead32((r1 + 580));
    ctx->lr = r0;
    r1 = (r1 + 576);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8005CAC8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8005CAC8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8005CAC8 func_8005CAC8 preserves=true fpr_mask=0x00000000
