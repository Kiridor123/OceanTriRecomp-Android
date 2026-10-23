#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DC924(CpuContext* ctx);
extern "C" uint64_t func_800DC924_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_800F9218(CpuContext* ctx);
extern "C" uint64_t func_800F9218_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8010BC40(CpuContext* ctx);
extern "C" uint64_t func_8010BC40_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013599C(CpuContext* ctx);
extern "C" uint64_t func_8013599C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8010B1FC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r20_addr_0 = 0;
    uint32_t r20_addr_1 = 0;
    uint32_t r20_addr_2 = 0;
    uint32_t r20_addr_3 = 0;
    uint32_t r21_addr_0 = 0;
    uint32_t r21_addr_1 = 0;
    uint32_t r21_addr_2 = 0;
    uint32_t r21_addr_3 = 0;
    uint32_t r23_addr_0 = 0;
    uint32_t r23_addr_1 = 0;
    uint32_t r23_addr_2 = 0;
    uint32_t r23_addr_3 = 0;
    uint32_t r26_addr_0 = 0;
    uint32_t r26_addr_1 = 0;
    uint32_t r26_addr_2 = 0;
    uint32_t r26_addr_3 = 0;
    uint32_t r26_addr_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
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
    uint32_t ctr = ctx->ctr;

    goto loc_8010B1FC;

loc_8010B1FC:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r11 = (r1 + 128);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r25 = r3;
    r28 = MemoryInline::FlatRead32((r3 + 56));
    r27 = MemoryInline::FlatRead32((r3 + 48));
    r3 = (r1 + 24);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = MemoryInline::FlatRead8((r25 + 2));
}

loc_8010B234:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8010B244;
    }
}

loc_8010B238:
{
}

loc_8010B23C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_8010B26C;
    }
}

loc_8010B240:
{
    goto loc_8010B298;
}

loc_8010B244:
{
    r3 = 0x805A0000u;
    r20 = (r3 + -904);
    r3 = 0x805A0000u;
    r21 = (r3 + -1096);
    r3 = 0x805A0000u;
    r23 = (r3 + -1256);
    r22 = 11;
    r26 = 0;
    r4 = 50;
    goto loc_8010B2A4;
}

loc_8010B26C:
{
    r3 = 0x805A0000u;
    r20 = (r3 + -904);
    r3 = 0x805A0000u;
    r21 = (r3 + -1052);
    r3 = 0x805A0000u;
    r23 = (r3 + -1256);
    r3 = 0x805A0000u;
    r26 = (r3 + -948);
    r22 = 11;
    r4 = 50;
    goto loc_8010B2A4;
}

loc_8010B298:
{
    r3 = r25;
    ctx->lr = 0x8010B2A0u;
    if constexpr (KnownRegArgsCpuCall<0x8010BC40u>(&func_8010BC40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8010BC40_1306 = func_8010BC40_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8010BC40_1306);
        r4 = static_cast<uint32_t>(regargs_result_8010BC40_1306 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8010BC40u>(ctx);
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
        ctr = ctx->ctr;
    }
    goto loc_8010B550;
}

loc_8010B2A4:
{
    r3 = MemoryInline::FlatRead32((r25 + 12));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r25 + 12), r0);
}

loc_8010B2B4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r4))) {
        goto loc_8010B2C8;
    }
}

loc_8010B2B8:
{
    r3 = r27;
    // inline leaf 0x8012D068 (10 guest instruction(s))
}

loc_inl3_0x8012D068:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl3_0x8012D070:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x8012D088;
    }
}

loc_inl3_0x8012D074:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_inl3_0x8012D07C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_inl3_0x8012D088;
    }
}

loc_inl3_0x8012D080:
{
    r3 = 0;
    goto loc_inl3_cont_8012D068;
}

loc_inl3_0x8012D088:
{
    r3 = 1;
}

loc_inl3_cont_8012D068:
{
    // end of inlined leaf 0x8012D068
}

loc_8010B2C4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8010B2E0;
    }
}

loc_8010B2C8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r25 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r25 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r25 + 5), static_cast<uint8_t>(r0));
    goto loc_8010B550;
}

loc_8010B2E0:
{
    r3 = MemoryInline::FlatRead32((r25 + 16));
}

loc_8010B2E8:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_8010B4B0;
    }
}

loc_8010B2EC:
{
    r0 = MemoryInline::FlatRead8((r28 + 207));
}

loc_8010B2F4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r22))) {
        goto loc_8010B4B8;
    }
}

loc_8010B2F8:
{
    r20_addr_1 = (r20 + r0);
    r29 = MemoryInline::FlatRead8(r20_addr_1);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r31 = 0;
    r21_addr_1 = (r21 + r0);
    r22 = MemoryInline::FlatRead32(r21_addr_1);
    r23_addr_1 = (r23 + r0);
    r21 = MemoryInline::FlatRead32(r23_addr_1);
    r23 = 1;
    r24 = 2;
    goto loc_8010B424;
}

loc_8010B31C:
{
    r30 = 0;
    r3 = r28;
    ctr = r24;
}

loc_8010B328:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
}

loc_8010B330:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8010B3B0;
    }
}

loc_8010B334:
{
    r30 = (r30 + 1);
    r0 = MemoryInline::FlatRead8((r3 + 20));
}

loc_8010B340:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8010B3B0;
    }
}

loc_8010B344:
{
    r30 = (r30 + 1);
    r0 = MemoryInline::FlatRead8((r3 + 32));
}

loc_8010B350:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8010B3B0;
    }
}

loc_8010B354:
{
    r30 = (r30 + 1);
    r0 = MemoryInline::FlatRead8((r3 + 44));
}

loc_8010B360:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8010B3B0;
    }
}

loc_8010B364:
{
    r30 = (r30 + 1);
    r0 = MemoryInline::FlatRead8((r3 + 56));
}

loc_8010B370:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8010B3B0;
    }
}

loc_8010B374:
{
    r30 = (r30 + 1);
    r0 = MemoryInline::FlatRead8((r3 + 68));
}

loc_8010B380:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8010B3B0;
    }
}

loc_8010B384:
{
    r30 = (r30 + 1);
    r0 = MemoryInline::FlatRead8((r3 + 80));
}

loc_8010B390:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8010B3B0;
    }
}

loc_8010B394:
{
    r30 = (r30 + 1);
    r0 = MemoryInline::FlatRead8((r3 + 92));
}

loc_8010B3A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8010B3B0;
    }
}

loc_8010B3A4:
{
    r3 = (r3 + 96);
    r30 = (r30 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8010B328;
    }
}

loc_8010B3B0:
{
}

loc_8010B3B4:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(16))) {
        goto loc_8010B42C;
    }
}

loc_8010B3B8:
{
    r0 = (r30 * 12);
    r20 = (r28 + r0);
    r3 = MemoryInline::FlatRead16(r22);
    r4 = 38;
    r5 = 0;
    ctx->lr = 0x8010B3D0u;
    if constexpr (KnownRegArgsCpuCall<0x800F9218u>(&func_800F9218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_800F9218_2C0B = func_800F9218_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9218_2C0B);
        r4 = static_cast<uint32_t>(regargs_result_800F9218_2C0B >> 32);
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
        ctr = ctx->ctr;
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800F9218u>(ctx);
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
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite32((r20 + 4), r3);
    r0 = MemoryInline::FlatRead32((r20 + 4));
}

loc_8010B3DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8010B3EC;
    }
}

loc_8010B3E0:
{
    r3 = r25;
    ctx->lr = 0x8010B3E8u;
    if constexpr (KnownRegArgsCpuCall<0x8010BC40u>(&func_8010BC40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8010BC40_3499 = func_8010BC40_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8010BC40_3499);
        r4 = static_cast<uint32_t>(regargs_result_8010BC40_3499 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8010BC40u>(ctx);
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
        ctr = ctx->ctr;
    }
    goto loc_8010B550;
}

loc_8010B3EC:
{
    MemoryInline::FlatWrite8((r20 + 8), static_cast<uint8_t>(r23));
    r0 = MemoryInline::FlatRead32(r21);
    MemoryInline::FlatWrite32((r20 + 12), r0);
    r3 = r27;
    r4 = MemoryInline::FlatRead32((r20 + 12));
    r5 = (r1 + 8);
    ctx->lr = 0x8010B408u;
    if constexpr (KnownRegArgsCpuCall<0x8013599Cu>(&func_8013599C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8013599C_3D11 = func_8013599C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013599C_3D11);
        r4 = static_cast<uint32_t>(regargs_result_8013599C_3D11 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x8013599Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = MemoryInline::FlatRead32((r27 + 2836));
    r4 = (r1 + 8);
    r5 = 1;
    ctx->lr = 0x8010B418u;
    if constexpr (KnownRegArgsCpuCall<0x800DC924u>(&func_800DC924)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_800DC924_417B = func_800DC924_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DC924_417B);
        r4 = static_cast<uint32_t>(regargs_result_800DC924_417B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DC924u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
    }
    r22 = (r22 + 2);
    r21 = (r21 + 4);
    r31 = (r31 + 1);
}

loc_8010B424:
{
}

loc_8010B428:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r29))) {
        goto loc_8010B31C;
    }
}

loc_8010B42C:
{
}

loc_8010B430:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_8010B46C;
    }
}

loc_8010B434:
{
    r31 = 0;
    r0 = MemoryInline::FlatRead8((r28 + 207));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r26_addr_1 = (r26 + r0);
    r23 = MemoryInline::FlatRead32(r26_addr_1);
    r0 = (r30 * 12);
    r24 = (r28 + r0);
    goto loc_8010B464;
}

loc_8010B450:
{
    r3 = MemoryInline::FlatRead32((r24 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r23);
    ctx->lr = 0x8010B45Cu;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F9B24u>(ctx);
    r0 = ctx->gpr[0];
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
    ctr = ctx->ctr;
    r23 = (r23 + 4);
    r31 = (r31 + 1);
}

loc_8010B464:
{
}

loc_8010B468:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r29))) {
        goto loc_8010B450;
    }
}

loc_8010B46C:
{
    r3 = MemoryInline::FlatRead8((r28 + 208));
    r0 = (r31 & 255);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite8((r28 + 208), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r28 + 207));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r28 + 207), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite32((r25 + 16), r0);
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl4_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl4_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x800CEF40;
    }
}

loc_inl4_0x800CEF3C:
{
    r0 = 1;
}

loc_inl4_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl4_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65535);
    r3 = (r0 & 1);
    r0 = MemoryInline::FlatRead32((r25 + 16));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r25 + 16), r0);
    goto loc_8010B4B8;
}

loc_8010B4B0:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r25 + 16), r0);
}

loc_8010B4B8:
{
    r20 = 0;
    r23 = r28;
    r26 = (r28 + 4);
    r24 = 0;
}

loc_8010B4C8:
{
    r0 = MemoryInline::FlatRead8((r23 + 8));
}

loc_8010B4D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8010B53C;
    }
}

loc_8010B4D4:
{
    r3 = r27;
    r4 = MemoryInline::FlatRead32((r23 + 12));
    r5 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80135994u>(ctx);
    r3 = MemoryInline::FlatRead32((r23 + 4));
    r4 = (r1 + 24);
    ctx->lr = 0x8010B4F0u;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800A5420u>(ctx);
    r0 = ctx->gpr[0];
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
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32((r23 + 4));
    ctx->lr = 0x8010B4F8u;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F9984u>(ctx);
    r0 = ctx->gpr[0];
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
    ctr = ctx->ctr;
}

loc_8010B4FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8010B524;
    }
}

loc_8010B500:
{
    r3 = r26;
    r4 = 1;
    ctx->lr = 0x8010B50Cu;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F8B1Cu>(ctx);
    r0 = ctx->gpr[0];
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
    ctr = ctx->ctr;
    MemoryInline::FlatWrite8((r23 + 8), static_cast<uint8_t>(r24));
    MemoryInline::FlatWrite32((r23 + 12), r24);
    r3 = MemoryInline::FlatRead8((r28 + 208));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r28 + 208), static_cast<uint8_t>(r0));
    goto loc_8010B53C;
}

loc_8010B524:
{
    r3 = r25;
    r4 = r26;
    r5 = 1;
    r6 = 1;
    r7 = 0;
    ctx->lr = 0x8010B53Cu;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
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
    ctr = ctx->ctr;
}

loc_8010B53C:
{
    r23 = (r23 + 12);
    r26 = (r26 + 12);
    r20 = (r20 + 1);
}

loc_8010B54C:
{
    if ((static_cast<int32_t>(r20) < static_cast<int32_t>(16))) {
        goto loc_8010B4C8;
    }
}

loc_8010B550:
{
    r11 = (r1 + 128);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8010B1FC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8010B1FC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8010B1FC func_8010B1FC preserves=true fpr_mask=0x00000000
