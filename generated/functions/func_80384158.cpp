#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005B7EC(CpuContext* ctx);
extern "C" uint32_t func_8005B7EC_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8005B9EC(CpuContext* ctx);
extern "C" uint32_t func_8005B9EC_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8005BAB4(CpuContext* ctx);
extern "C" uint64_t func_8005BAB4_ra38_3e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);
extern "C" void func_8005C848(CpuContext* ctx);
extern "C" uint64_t func_8005C848_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8005C868(CpuContext* ctx);
extern "C" uint64_t func_8005C868_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8005CA08(CpuContext* ctx);
extern "C" uint64_t func_8005CA08_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802E46E4(CpuContext* ctx);
extern "C" uint64_t func_802E46E4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80384308(CpuContext* ctx);
extern "C" uint32_t func_80384308_ra68_1fe_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80384158_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
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

    goto loc_80384158;

loc_80384158:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r25 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_80384178:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803842F0;
    }
}

loc_8038417C:
{
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead8((r25 + 8));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    ctx->lr = 0x8038418Cu;
    if constexpr (KnownRegArgsCpuCall<0x802E46E4u>(&func_802E46E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802E46E4_EBE = func_802E46E4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E46E4_EBE);
        r4 = static_cast<uint32_t>(regargs_result_802E46E4_EBE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E46E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r3 = 16;
    r4 = 16;
    if constexpr (KnownRegArgsCpuCall<0x8005C868u>(&func_8005C868)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8005C868_1236 = func_8005C868_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005C868_1236);
        r4 = static_cast<uint32_t>(regargs_result_8005C868_1236 >> 32);
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8005C868u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = MemoryInline::FlatRead16((r1 + 8));
    r31 = (r31 << 16);
    r31 = (static_cast<int32_t>(r31) >> 16);
    r0 = (r31 + 76);
    r27 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r4 = MemoryInline::FlatRead8((r25 + 8));
    r3 = MemoryInline::FlatRead8((r25 + 5));
}

loc_803841B0:
{
    r0 = r4;
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r4))) {
        goto loc_803841BC;
    }
}

loc_803841B8:
{
    r0 = r3;
}

loc_803841BC:
{
    r26 = (r0 & 255);
    r30 = MemoryInline::FlatRead8((r25 + 6));
    r3 = MemoryInline::FlatRead16((r1 + 10));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r4 + -1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r0 = (r3 + r0);
    r28 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r29 = 0;
    r22 = (r30 * 100);
    r3 = (r25 + r22);
    r23 = (r3 + 12);
    r24 = -252641280;
    goto loc_803842E4;
}

loc_803841F0:
{
    r22 = (r22 + -100);
    r23 = (r23 + -100);
    r30 = (r30 + -1);
}

loc_80384200:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(0))) {
        goto loc_80384210;
    }
}

loc_80384204:
{
    r3 = (r22 + r25);
    r21 = (r3 + 9612);
    goto loc_80384214;
}

loc_80384210:
{
    r21 = r23;
}

loc_80384214:
{
    r0 = MemoryInline::FlatRead8((r21 + 62));
}

loc_8038421C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80384248;
    }
}

loc_80384220:
{
    r3 = MemoryInline::FlatRead32((r21 + 96));
    r0 = (r3 & 15);
}

loc_8038422C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8038423C;
    }
}

loc_80384230:
{
    r3 = (r3 | 255);
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl1_0x8005B7EC:
{
    r4 = MemoryInline::FlatRead32((r13 + -17736));
}

loc_inl1_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryInline::FlatWrite32((r4 + 20600), r3);
    goto loc_inl1_cont_8005B7EC;
}

loc_inl1_return:
{
}

loc_inl1_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    goto loc_80384270;
}

loc_8038423C:
{
    r3 = (r24 + -3841);
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl2_0x8005B7EC:
{
    r4 = MemoryInline::FlatRead32((r13 + -17736));
}

loc_inl2_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryInline::FlatWrite32((r4 + 20600), r3);
    goto loc_inl2_cont_8005B7EC;
}

loc_inl2_return:
{
}

loc_inl2_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    goto loc_80384270;
}

loc_80384248:
{
    r3 = MemoryInline::FlatRead32((r21 + 96));
    r0 = (r3 + 6029312);
}

loc_80384254:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(25087))) {
        goto loc_80384264;
    }
}

loc_80384258:
{
    r3 = (r24 + -3841);
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl3_0x8005B7EC:
{
    r4 = MemoryInline::FlatRead32((r13 + -17736));
}

loc_inl3_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryInline::FlatWrite32((r4 + 20600), r3);
    goto loc_inl3_cont_8005B7EC;
}

loc_inl3_return:
{
}

loc_inl3_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    goto loc_80384270;
}

loc_80384264:
{
    r3 = MemoryInline::FlatRead8((r21 + 61));
    // inline leaf 0x802D9FBC (6 guest instruction(s))
    r0 = (r3 & 255);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = 0x805D0000u;
    r3 = (r3 + 23648);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x802D9FBC
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl5_0x8005B7EC:
{
    r4 = MemoryInline::FlatRead32((r13 + -17736));
}

loc_inl5_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryInline::FlatWrite32((r4 + 20600), r3);
    goto loc_inl5_cont_8005B7EC;
}

loc_inl5_return:
{
}

loc_inl5_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
}

loc_80384270:
{
    r3 = r31;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    if constexpr (KnownRegArgsCpuCall<0x8005C848u>(&func_8005C848)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8005C848_2761 = func_8005C848_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005C848_2761);
        r4 = static_cast<uint32_t>(regargs_result_8005C848_2761 >> 32);
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8005C848u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r21;
    ctx->lr = 0x80384284u;
    if constexpr (KnownRegArgsCpuCall<0x80384308u>(&func_80384308)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        const auto regargs_result_80384308_2A41 = func_80384308_ra68_1fe_8_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_80384308_2A41;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80384308u>(ctx);
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
    }
    r3 = MemoryInline::FlatRead32((r21 + 96));
}

loc_8038428C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8038429C;
    }
}

loc_80384290:
{
    r3 = (r24 + -3841);
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl6_0x8005B7EC:
{
    r4 = MemoryInline::FlatRead32((r13 + -17736));
}

loc_inl6_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryInline::FlatWrite32((r4 + 20600), r3);
    goto loc_inl6_cont_8005B7EC;
}

loc_inl6_return:
{
}

loc_inl6_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    goto loc_803842B8;
}

loc_8038429C:
{
    r0 = (r3 & 15);
}

loc_803842A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803842B4;
    }
}

loc_803842A8:
{
    r3 = (r3 | 255);
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl7_0x8005B7EC:
{
    r4 = MemoryInline::FlatRead32((r13 + -17736));
}

loc_inl7_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl7_return;
    }
}

loc_inl7_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryInline::FlatWrite32((r4 + 20600), r3);
    goto loc_inl7_cont_8005B7EC;
}

loc_inl7_return:
{
}

loc_inl7_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    goto loc_803842B8;
}

loc_803842B4:
{
    if constexpr (KnownRegArgsCpuCall<0x8005B7ECu>(&func_8005B7EC)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_8005B7EC_361F = func_8005B7EC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005B7EC_361F;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8005B7ECu>(ctx);
        r4 = ctx->gpr[4];
    }
}

loc_803842B8:
{
    r3 = r27;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    if constexpr (KnownRegArgsCpuCall<0x8005C848u>(&func_8005C848)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8005C848_3833 = func_8005C848_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005C848_3833);
        r4 = static_cast<uint32_t>(regargs_result_8005C848_3833 >> 32);
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8005C848u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8005B9ECu>(&func_8005B9EC)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_8005B9EC_3AA2 = func_8005B9EC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005B9EC_3AA2;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8005B9ECu>(ctx);
        r4 = ctx->gpr[4];
    }
    r3 = r21;
    ctx->lr = 0x803842D4u;
    if constexpr (KnownRegArgsCpuCall<0x8005BAB4u>(&func_8005BAB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8005BAB4_3C9B = func_8005BAB4_ra38_3e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BAB4_3C9B);
        r4 = static_cast<uint32_t>(regargs_result_8005BAB4_3C9B >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        InvokeDirectCpu<0x8005BAB4u>(ctx);
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
    }
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8005B9ECu>(&func_8005B9EC)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_8005B9EC_41D6 = func_8005B9EC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005B9EC_41D6;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8005B9ECu>(ctx);
        r4 = ctx->gpr[4];
    }
    r28 = (r28 + -16);
    r29 = (r29 + 1);
}

loc_803842E4:
{
}

loc_803842E8:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r26))) {
        goto loc_803841F0;
    }
}

loc_803842EC:
{
    ctx->lr = 0x803842F0u;
    if constexpr (KnownRegArgsCpuCall<0x8005CA08u>(&func_8005CA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8005CA08_449A = func_8005CA08_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005CA08_449A);
        r4 = static_cast<uint32_t>(regargs_result_8005CA08_449A >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8005CA08u>(ctx);
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
    }
}

loc_803842F0:
{
    r11 = (r1 + 64);
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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

extern "C" void func_80384158(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80384158_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80384158 func_80384158 preserves=true fpr_mask=0x00000000
