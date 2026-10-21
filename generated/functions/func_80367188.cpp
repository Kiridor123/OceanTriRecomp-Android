#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005001C(CpuContext* ctx);
extern "C" double func_8005001C_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800E0C44(CpuContext* ctx);
extern "C" uint64_t func_800E0C44_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800F8ECC(CpuContext* ctx);
extern "C" uint64_t func_800F8ECC_ra38_1fc_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_8019E770(CpuContext* ctx);
extern "C" uint64_t func_8019E770_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80366FB8(CpuContext* ctx);
extern "C" uint64_t func_80366FB8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8036A6F4(CpuContext* ctx);
extern "C" uint64_t func_8036A6F4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8036A888(CpuContext* ctx);
extern "C" uint64_t func_8036A888_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803B4168(CpuContext* ctx);
extern "C" uint32_t func_803B4168_ra28_e_8_0(CpuContext*, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_80367188_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    const uint32_t r14_entry = r14;
    const uint32_t r15_entry = r15;
    const uint32_t r16_entry = r16;
    const uint32_t r17_entry = r17;
    const uint32_t r18_entry = r18;
    const uint32_t r19_entry = r19;
    const uint32_t r20_entry = r20;
    const uint32_t r21_entry = r21;
    const uint32_t r22_entry = r22;
    const uint32_t r23_entry = r23;
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80367188u);
    goto loc_80367188;

loc_80367188:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r15 = r3;
    r18 = MemoryInline::FlatRead32((r3 + 56));
    r3 = 0x806C0000u;
    r23 = (r3 + -9184);
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = MemoryInline::FlatRead8((r15 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r15 + 5), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r15 + 1), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r15 + 16), r0);
    MemoryInline::FlatWrite32((r15 + 12), r0);
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r3 = (r3 & 255);
    r0 = (r3 + -6);
}

loc_803671E4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(14))) {
        goto loc_803672EC;
    }
}

loc_803671E8:
{
    r3 = 0x805F0000u;
    r3 = (r3 + -6280);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80367200u:
        goto loc_80367200;
        break;
    case 0x80367250u:
        goto loc_80367250;
        break;
    case 0x80367278u:
        goto loc_80367278;
        break;
    case 0x803672A0u:
        goto loc_803672A0;
        break;
    case 0x803672ECu:
        goto loc_803672EC;
        break;
    case 0x803672C8u:
        goto loc_803672C8;
        break;
    case 0x80367228u:
        goto loc_80367228;
        break;
    case 0x80367264u:
        goto loc_80367264;
        break;
    case 0x8036728Cu:
        goto loc_8036728C;
        break;
    case 0x803672DCu:
        goto loc_803672DC;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80367200:
{
    r0 = MemoryInline::FlatRead8((r15 + 68));
}

loc_80367208:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80367218;
    }
}

loc_8036720C:
{
}

loc_80367210:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80367220;
    }
}

loc_80367214:
{
    goto loc_803672EC;
}

loc_80367218:
{
    r22 = 123;
    goto loc_803672EC;
}

loc_80367220:
{
    r22 = 125;
    goto loc_803672EC;
}

loc_80367228:
{
    r0 = MemoryInline::FlatRead8((r15 + 68));
}

loc_80367230:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80367240;
    }
}

loc_80367234:
{
}

loc_80367238:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80367248;
    }
}

loc_8036723C:
{
    goto loc_803672EC;
}

loc_80367240:
{
    r22 = 124;
    goto loc_803672EC;
}

loc_80367248:
{
    r22 = 126;
    goto loc_803672EC;
}

loc_80367250:
{
    r0 = MemoryInline::FlatRead8((r15 + 68));
}

loc_80367258:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_803672EC;
    }
}

loc_8036725C:
{
    r22 = 130;
    goto loc_803672EC;
}

loc_80367264:
{
    r0 = MemoryInline::FlatRead8((r15 + 68));
}

loc_8036726C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_803672EC;
    }
}

loc_80367270:
{
    r22 = 131;
    goto loc_803672EC;
}

loc_80367278:
{
    r0 = MemoryInline::FlatRead8((r15 + 68));
}

loc_80367280:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_803672EC;
    }
}

loc_80367284:
{
    r22 = 136;
    goto loc_803672EC;
}

loc_8036728C:
{
    r0 = MemoryInline::FlatRead8((r15 + 68));
}

loc_80367294:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_803672EC;
    }
}

loc_80367298:
{
    r22 = 137;
    goto loc_803672EC;
}

loc_803672A0:
{
    r0 = MemoryInline::FlatRead8((r15 + 68));
}

loc_803672A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803672B8;
    }
}

loc_803672AC:
{
}

loc_803672B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803672C0;
    }
}

loc_803672B4:
{
    goto loc_803672EC;
}

loc_803672B8:
{
    r22 = 138;
    goto loc_803672EC;
}

loc_803672C0:
{
    r22 = 139;
    goto loc_803672EC;
}

loc_803672C8:
{
    r0 = MemoryInline::FlatRead8((r15 + 68));
}

loc_803672D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_803672EC;
    }
}

loc_803672D4:
{
    r22 = 140;
    goto loc_803672EC;
}

loc_803672DC:
{
    r0 = MemoryInline::FlatRead8((r15 + 68));
}

loc_803672E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_803672EC;
    }
}

loc_803672E8:
{
    r22 = 141;
}

loc_803672EC:
{
    r0 = MemoryInline::FlatRead8((r18 + 36));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = 0x805F0000u;
    r3 = (r3 + -6584);
    r3_addr_3 = (r3 + r0);
    r21 = MemoryInline::FlatRead32(r3_addr_3);
    r20 = 0;
    r17 = r18;
    r14 = 0x805F0000u;
    r16 = 0;
    r25 = 8;
    r24 = 6;
    goto loc_80367514;
}

loc_8036731C:
{
    r3 = MemoryInline::FlatRead32((r17 + 4));
    r4 = r22;
    r5 = 40;
    r6 = 2;
    ctx->lr = 0x80367330u;
    if constexpr (KnownRegArgsCpuCall<0x800F8ECCu>(&func_800F8ECC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        const auto regargs_result_800F8ECC_2AB3 = func_800F8ECC_ra38_1fc_18_0(ctx, r3, r4, r5, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F8ECC_2AB3);
        r4 = static_cast<uint32_t>(regargs_result_800F8ECC_2AB3 >> 32);
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
        InvokeDirectCpu<0x800F8ECCu>(ctx);
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
}

loc_80367334:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80367344;
    }
}

loc_80367338:
{
    r3 = r15;
    ctx->lr = 0x80367340u;
    if constexpr (KnownRegArgsCpuCall<0x8036A888u>(&func_8036A888)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8036A888_322A = func_8036A888_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8036A888_322A);
        r4 = static_cast<uint32_t>(regargs_result_8036A888_322A >> 32);
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
        InvokeDirectCpu<0x8036A888u>(ctx);
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
    goto loc_803677AC;
}

loc_80367344:
{
    r3 = MemoryInline::FlatRead32((r17 + 4));
    r3 = (r3 + 4);
    r4 = (r21 + 4);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_3941 = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_3941;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = MemoryInline::FlatRead32((r17 + 4));
    r3 = (r3 + 28);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -8976));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r0 = MemoryInline::FlatRead16((r21 + 16));
    r3 = MemoryInline::FlatRead32((r17 + 4));
    MemoryInline::FlatWrite32((r3 + 40), r0);
    r0 = MemoryInline::FlatRead16((r21 + 18));
    r3 = MemoryInline::FlatRead32((r17 + 4));
    MemoryInline::FlatWrite32((r3 + 44), r0);
    r0 = MemoryInline::FlatRead16((r21 + 20));
    r3 = MemoryInline::FlatRead32((r17 + 4));
    MemoryInline::FlatWrite32((r3 + 48), r0);
    r3 = MemoryInline::FlatRead32((r17 + 4));
    MemoryInline::FlatWrite8((r3 + 53), static_cast<uint8_t>(r16));
    r19 = (r18 + r20);
    r0 = MemoryInline::FlatRead8((r21 + 2));
    MemoryInline::FlatWrite8((r19 + 37), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r17 + 64), r16);
    MemoryInline::FlatWrite8((r19 + 96), static_cast<uint8_t>(r16));
    r0 = MemoryInline::FlatRead8(r21);
    MemoryInline::FlatWrite8((r19 + 45), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r21 + 1));
    MemoryInline::FlatWrite8((r19 + 53), static_cast<uint8_t>(r0));
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r0 = (r3 & 255);
}

loc_803673C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_803673E8;
    }
}

loc_803673CC:
{
}

loc_803673D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(17))) {
        goto loc_803673E8;
    }
}

loc_803673D4:
{
}

loc_803673D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_8036742C;
    }
}

loc_803673DC:
{
}

loc_803673E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(18))) {
        goto loc_8036742C;
    }
}

loc_803673E4:
{
    goto loc_80367464;
}

loc_803673E8:
{
    r3 = MemoryInline::FlatRead8((r19 + 37));
    r0 = (r3 + 254);
    r0 = (r0 & 255);
}

loc_803673F8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80367464;
    }
}

loc_803673FC:
{
    r3 = (r1 + 8);
    r4 = (r14 + -6556);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_4559 = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_4559;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r17 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 44));
    ctx->lr = 0x80367418u;
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
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
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
    r3 = MemoryInline::FlatRead32((r17 + 4));
    r3 = (r3 + 4);
    r4 = (r1 + 8);
    ctx->lr = 0x80367428u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    goto loc_80367464;
}

loc_8036742C:
{
    r0 = MemoryInline::FlatRead8((r19 + 37));
}

loc_80367434:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_80367464;
    }
}

loc_80367438:
{
    r3 = (r1 + 8);
    r4 = (r14 + -6556);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_4D0F = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_4D0F;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r17 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 44));
    ctx->lr = 0x80367454u;
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
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
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
    r3 = MemoryInline::FlatRead32((r17 + 4));
    r3 = (r3 + 4);
    r4 = (r1 + 8);
    ctx->lr = 0x80367464u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
}

loc_80367464:
{
    r26 = 0;
    goto loc_803674A0;
}

loc_8036746C:
{
    r0 = MemoryInline::FlatRead8((r21 + 2));
}

loc_80367474:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r26))) {
        goto loc_8036748C;
    }
}

loc_80367478:
{
    r3 = MemoryInline::FlatRead32((r17 + 4));
    r4 = r26;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    goto loc_8036749C;
}

loc_8036748C:
{
    r3 = MemoryInline::FlatRead32((r17 + 4));
    r4 = r26;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
}

loc_8036749C:
{
    r26 = (r26 + 1);
}

loc_803674A0:
{
    r3 = MemoryInline::FlatRead32((r17 + 4));
    ctx->lr = 0x803674A8u;
    if constexpr (KnownRegArgsCpuCall<0x800E0C44u>(&func_800E0C44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800E0C44_56F5 = func_800E0C44_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E0C44_56F5);
        r4 = static_cast<uint32_t>(regargs_result_800E0C44_56F5 >> 32);
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
        InvokeDirectCpu<0x800E0C44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_803674AC:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(r3))) {
        goto loc_8036746C;
    }
}

loc_803674B0:
{
    r0 = MemoryInline::FlatRead8((r19 + 45));
}

loc_803674B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803674DC;
    }
}

loc_803674BC:
{
    r0 = MemoryInline::FlatRead8(r23);
}

loc_803674C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803674D0;
    }
}

loc_803674C8:
{
    MemoryInline::FlatWrite8((r19 + 96), static_cast<uint8_t>(r16));
    goto loc_803674DC;
}

loc_803674D0:
{
    r0 = MemoryInline::FlatRead32((r23 + 4));
    MemoryInline::FlatWrite32((r17 + 64), r0);
    MemoryInline::FlatWrite8((r19 + 96), static_cast<uint8_t>(r25));
}

loc_803674DC:
{
    r0 = MemoryInline::FlatRead8((r19 + 45));
}

loc_803674E4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80367508;
    }
}

loc_803674E8:
{
    r0 = MemoryInline::FlatRead8((r23 + 8));
}

loc_803674F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803674FC;
    }
}

loc_803674F4:
{
    MemoryInline::FlatWrite8((r19 + 96), static_cast<uint8_t>(r16));
    goto loc_80367508;
}

loc_803674FC:
{
    r0 = MemoryInline::FlatRead32((r23 + 12));
    MemoryInline::FlatWrite32((r17 + 64), r0);
    MemoryInline::FlatWrite8((r19 + 96), static_cast<uint8_t>(r24));
}

loc_80367508:
{
    r17 = (r17 + 4);
    r20 = (r20 + 1);
    r21 = (r21 + 24);
}

loc_80367514:
{
    r0 = MemoryInline::FlatRead32(r18);
}

loc_8036751C:
{
    if ((static_cast<int32_t>(r20) < static_cast<int32_t>(r0))) {
        goto loc_8036731C;
    }
}

loc_80367520:
{
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r0 = (r3 & 255);
}

loc_8036752C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(6))) {
        goto loc_80367540;
    }
}

loc_80367530:
{
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r0 = (r3 & 255);
}

loc_8036753C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(17))) {
        goto loc_803677A4;
    }
}

loc_80367540:
{
    r16 = 0;
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl7_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl7_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl7_0x800CFB10;
    }
}

loc_inl7_0x800CFB08:
{
    r3 = 0;
    goto loc_inl7_cont_800CFAF4;
}

loc_inl7_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl7_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl7_0x800CFB24;
    }
}

loc_inl7_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl7_cont_800CFAF4;
}

loc_inl7_0x800CFB24:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl7_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r17 = r3;
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl8_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl8_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl8_0x800CFB50;
    }
}

loc_inl8_0x800CFB48:
{
    r3 = 0;
    goto loc_inl8_cont_800CFB34;
}

loc_inl8_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl8_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl8_0x800CFB64;
    }
}

loc_inl8_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl8_cont_800CFB34;
}

loc_inl8_0x800CFB64:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl8_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r19 = 0;
    r14 = (r3 & 65535);
    goto loc_803675A0;
}

loc_80367564:
{
    r0 = MemoryInline::FlatRead8((r17 + 3));
}

loc_8036756C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(25))) {
        goto loc_80367598;
    }
}

loc_80367570:
{
    r3 = MemoryInline::FlatRead8((r17 + 481));
    r0 = MemoryInline::FlatRead8((r15 + 68));
}

loc_8036757C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80367598;
    }
}

loc_80367580:
{
    r3 = r17;
    // inline leaf 0x8012D068 (10 guest instruction(s))
}

loc_inl9_0x8012D068:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl9_0x8012D070:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl9_0x8012D088;
    }
}

loc_inl9_0x8012D074:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_inl9_0x8012D07C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_inl9_0x8012D088;
    }
}

loc_inl9_0x8012D080:
{
    r3 = 0;
    goto loc_inl9_cont_8012D068;
}

loc_inl9_0x8012D088:
{
    r3 = 1;
}

loc_inl9_cont_8012D068:
{
    // end of inlined leaf 0x8012D068
}

loc_8036758C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80367598;
    }
}

loc_80367590:
{
    r16 = 1;
    goto loc_803675A8;
}

loc_80367598:
{
    r19 = (r19 + 1);
    r17 = (r17 + 2840);
}

loc_803675A0:
{
}

loc_803675A4:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(r14))) {
        goto loc_80367564;
    }
}

loc_803675A8:
{
    r19 = 0;
    r25 = 0;
    r24 = r18;
    r26 = 0x805F0000u;
    r23 = (r26 + -6544);
    r22 = r18;
    r21 = (r18 + 114);
    r29 = 0;
    r30 = 3;
    r31 = 5;
    r14 = 9;
    r28 = 13;
    r27 = 11;
}

loc_803675DC:
{
    r0 = MemoryInline::FlatRead32(r18);
}

loc_803675E4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(8))) {
        goto loc_80367784;
    }
}

loc_803675E8:
{
    r20 = (r18 + r19);
    r0 = MemoryInline::FlatRead8((r20 + 51));
}

loc_803675F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80367784;
    }
}

loc_803675F8:
{
}

loc_803675FC:
{
    if ((static_cast<int32_t>(r19) != static_cast<int32_t>(0))) {
        goto loc_80367618;
    }
}

loc_80367600:
{
    r3 = 75;
    ctx->lr = 0x80367608u;
    if constexpr (KnownRegArgsCpuCall<0x803B4168u>(&func_803B4168)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->ctr = ctr;
        const auto regargs_result_803B4168_740F = func_803B4168_ra28_e_8_0(ctx, r3, r5, f1.d, f2.d, f3.d);
        r3 = regargs_result_803B4168_740F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803B4168u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    }
}

loc_8036760C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80367638;
    }
}

loc_80367610:
{
    MemoryInline::FlatWrite8((r20 + 104), static_cast<uint8_t>(r27));
    goto loc_80367784;
}

loc_80367618:
{
}

loc_8036761C:
{
    if ((static_cast<int32_t>(r19) != static_cast<int32_t>(1))) {
        goto loc_80367638;
    }
}

loc_80367620:
{
    r3 = 50;
    ctx->lr = 0x80367628u;
    if constexpr (KnownRegArgsCpuCall<0x803B4168u>(&func_803B4168)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->ctr = ctr;
        const auto regargs_result_803B4168_79D6 = func_803B4168_ra28_e_8_0(ctx, r3, r5, f1.d, f2.d, f3.d);
        r3 = regargs_result_803B4168_79D6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803B4168u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    }
}

loc_8036762C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80367638;
    }
}

loc_80367630:
{
    MemoryInline::FlatWrite8((r20 + 104), static_cast<uint8_t>(r27));
    goto loc_80367784;
}

loc_80367638:
{
    r0 = MemoryInline::FlatRead8((r15 + 68));
}

loc_80367640:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80367764;
    }
}

loc_80367644:
{
}

loc_80367648:
{
    if ((static_cast<int32_t>(r16) == static_cast<int32_t>(0))) {
        goto loc_8036774C;
    }
}

loc_8036764C:
{
}

loc_80367650:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(0))) {
        goto loc_8036774C;
    }
}

loc_80367654:
{
    r3 = r17;
    ctx->lr = 0x8036765Cu;
    if constexpr (KnownRegArgsCpuCall<0x80366FB8u>(&func_80366FB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80366FB8_80C7 = func_80366FB8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80366FB8_80C7);
        r4 = static_cast<uint32_t>(regargs_result_80366FB8_80C7 >> 32);
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
        InvokeDirectCpu<0x80366FB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80367660:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80367684;
    }
}

loc_80367664:
{
    r3 = MemoryInline::FlatRead32((r24 + 28));
    r3 = (r3 + 4);
    r4 = (r26 + -6544);
    r4 = (r25 + r4);
    r4 = (r4 + 120);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_852D = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_852D;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    MemoryInline::FlatWrite8((r20 + 104), static_cast<uint8_t>(r28));
    goto loc_8036776C;
}

loc_80367684:
{
    r3 = r17;
    ctx->lr = 0x8036768Cu;
    if constexpr (KnownRegArgsCpuCall<0x8019E770u>(&func_8019E770)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8019E770_883C = func_8019E770_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8019E770_883C);
        r4 = static_cast<uint32_t>(regargs_result_8019E770_883C >> 32);
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
        InvokeDirectCpu<0x8019E770u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = (r3 & 255);
}

loc_80367694:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803676BC;
    }
}

loc_80367698:
{
}

loc_8036769C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803676D4;
    }
}

loc_803676A0:
{
}

loc_803676A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_803676D4;
    }
}

loc_803676A8:
{
}

loc_803676AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_803676F4;
    }
}

loc_803676B0:
{
}

loc_803676B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80367714;
    }
}

loc_803676B8:
{
    goto loc_80367734;
}

loc_803676BC:
{
    MemoryInline::FlatWrite8((r20 + 104), static_cast<uint8_t>(r29));
    r3 = MemoryInline::FlatRead32((r24 + 28));
    r3 = (r3 + 4);
    r4 = r23;
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_8F13 = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_8F13;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    goto loc_8036776C;
}

loc_803676D4:
{
    MemoryInline::FlatWrite8((r20 + 104), static_cast<uint8_t>(r30));
    r3 = MemoryInline::FlatRead32((r24 + 28));
    r3 = (r3 + 4);
    r4 = (r26 + -6544);
    r4 = (r25 + r4);
    r4 = (r4 + 48);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_927C = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_927C;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    goto loc_8036776C;
}

loc_803676F4:
{
    MemoryInline::FlatWrite8((r20 + 104), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead32((r24 + 28));
    r3 = (r3 + 4);
    r4 = (r26 + -6544);
    r4 = (r25 + r4);
    r4 = (r4 + 72);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_95E5 = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_95E5;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    goto loc_8036776C;
}

loc_80367714:
{
    MemoryInline::FlatWrite8((r20 + 104), static_cast<uint8_t>(r14));
    r3 = MemoryInline::FlatRead32((r24 + 28));
    r3 = (r3 + 4);
    r4 = (r26 + -6544);
    r4 = (r25 + r4);
    r4 = (r4 + 96);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_994E = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_994E;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    goto loc_8036776C;
}

loc_80367734:
{
    MemoryInline::FlatWrite8((r20 + 104), static_cast<uint8_t>(r29));
    r3 = MemoryInline::FlatRead32((r24 + 28));
    r3 = (r3 + 4);
    r4 = r23;
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_9C84 = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_9C84;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    goto loc_8036776C;
}

loc_8036774C:
{
    MemoryInline::FlatWrite8((r20 + 104), static_cast<uint8_t>(r29));
    r3 = MemoryInline::FlatRead32((r24 + 28));
    r3 = (r3 + 4);
    r4 = r23;
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_9FBA = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_9FBA;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    goto loc_8036776C;
}

loc_80367764:
{
    r0 = 12;
    MemoryInline::FlatWrite8((r20 + 104), static_cast<uint8_t>(r0));
}

loc_8036776C:
{
    MemoryInline::FlatWrite16((r22 + 106), static_cast<uint16_t>(r29));
    MemoryInline::FlatWrite16((r22 + 110), static_cast<uint16_t>(r29));
    r3 = r21;
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80367784:
{
    r25 = (r25 + 12);
    r24 = (r24 + 4);
    r23 = (r23 + 12);
    r22 = (r22 + 2);
    r21 = (r21 + 4);
    r19 = (r19 + 1);
}

loc_803677A0:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(2))) {
        goto loc_803675DC;
    }
}

loc_803677A4:
{
    r3 = r15;
    ctx->lr = 0x803677ACu;
    if constexpr (KnownRegArgsCpuCall<0x8036A6F4u>(&func_8036A6F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8036A6F4_A582 = func_8036A6F4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8036A6F4_A582);
        r4 = static_cast<uint32_t>(regargs_result_8036A6F4_A582 >> 32);
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
        InvokeDirectCpu<0x8036A6F4u>(ctx);
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
}

loc_803677AC:
{
    r11 = (r1 + 96);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
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
    ctx->gpr[14] = r14_entry;
    ctx->gpr[15] = r15_entry;
    ctx->gpr[16] = r16_entry;
    ctx->gpr[17] = r17_entry;
    ctx->gpr[18] = r18_entry;
    ctx->gpr[19] = r19_entry;
    ctx->gpr[20] = r20_entry;
    ctx->gpr[21] = r21_entry;
    ctx->gpr[22] = r22_entry;
    ctx->gpr[23] = r23_entry;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80367188(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80367188_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80367188 func_80367188 preserves=true fpr_mask=0x00000000
