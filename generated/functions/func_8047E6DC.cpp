#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8047ABB0(CpuContext* ctx);
extern "C" uint64_t func_8047ABB0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8047B278(CpuContext* ctx);
extern "C" uint32_t func_8047B278_ra58_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8047B70C(CpuContext* ctx);
extern "C" uint64_t func_8047B70C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80486B8C(CpuContext* ctx);
extern "C" uint64_t func_80486B8C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80486D5C(CpuContext* ctx);
extern "C" uint64_t func_80486D5C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8047E6DC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r22_rot_0 = 0;
    uint32_t r22_rot_1 = 0;
    uint32_t r22_rot_2 = 0;
    uint32_t r22_rot_3 = 0;
    uint32_t r22_rot_4 = 0;
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
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addr_5 = 0;
    uint32_t r7_addr_6 = 0;
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

    MKW_GUEST_ENTER(0x8047E6DCu);
    goto loc_8047E6DC;

loc_8047E6DC:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r5 = 0x80740000u;
    r20 = r3;
    r28 = (r5 + -18476);
    r21 = r4;
    r0 = MemoryInline::FlatRead8((r28 + 77));
    r27 = 0;
    r26 = 0;
    r25 = 0;
}

loc_8047E714:
{
    r24 = 0;
    r23 = 0;
    r22 = 0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8047EA44;
    }
}

loc_8047E724:
{
    r30 = 0;
    goto loc_8047E758;
}

loc_8047E72C:
{
    r0 = (r30 & 255);
    r4 = r20;
    r29 = (r0 * 11);
    r3 = (r28 + r29);
    if constexpr (KnownRegArgsCpuCall<0x8047B278u>(&func_8047B278)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8047B278_106C = func_8047B278_ra58_0_8_0(ctx, r3, r4, r6);
        r3 = regargs_result_8047B278_106C;
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

loc_8047E744:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8047E754;
    }
}

loc_8047E748:
{
    r24 = (r28 + r29);
    r25 = MemoryInline::FlatRead8((r24 + 10));
    goto loc_8047E768;
}

loc_8047E754:
{
    r30 = (r30 + 1);
}

loc_8047E758:
{
    r0 = MemoryInline::FlatRead8((r28 + 77));
    r3 = (r30 & 255);
}

loc_8047E764:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8047E72C;
    }
}

loc_8047E768:
{
}

loc_8047E76C:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_8047EA44;
    }
}

loc_8047E770:
{
    r30 = 0x80740000u;
    r28 = 0;
    r31 = (r30 + -18216);
    goto loc_8047E8AC;
}

loc_8047E780:
{
    r3 = (r28 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & 2040);
    r29 = (r0 + r3);
    r4 = r20;
    r3 = (r31 + r29);
    r3 = (r3 + 1);
    if constexpr (KnownRegArgsCpuCall<0x8047B278u>(&func_8047B278)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8047B278_16CB = func_8047B278_ra58_0_8_0(ctx, r3, r4, r6);
        r3 = regargs_result_8047B278_16CB;
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

loc_8047E7A0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8047E8A8;
    }
}

loc_8047E7A4:
{
    r7 = MemoryInline::FlatRead32((r13 + -20696));
    r8 = (r31 + r29);
    r3 = MemoryInline::FlatRead8((r8 + 8));
    r9 = 1;
    r6 = MemoryInline::FlatRead8((r7 + 1));
    r4 = MemoryInline::FlatRead8((r8 + 7));
    goto loc_8047E7F4;
}

loc_8047E7C0:
{
    r5 = (r9 & 255);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 1020);
    r0 = (r0 - r5);
    r5 = (r7 + r0);
    r7_addr_3 = (r7 + r0);
    r0 = MemoryInline::FlatRead8(r7_addr_3);
}

loc_8047E7D8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8047E7F0;
    }
}

loc_8047E7DC:
{
    r0 = MemoryInline::FlatRead8((r5 + 1));
}

loc_8047E7E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_8047E800;
    }
}

loc_8047E7E8:
{
}

loc_8047E7EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_8047E800;
    }
}

loc_8047E7F0:
{
    r9 = (r9 + 1);
}

loc_8047E7F4:
{
    r0 = (r9 & 255);
}

loc_8047E7FC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r6))) {
        goto loc_8047E7C0;
    }
}

loc_8047E800:
{
    r3 = (r9 & 255);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & 1020);
    r3 = (r0 - r3);
    r0 = MemoryInline::FlatRead8((r8 + 9));
    r4 = (r7 + r3);
    r3 = MemoryInline::FlatRead32((r13 + -20692));
    r4 = MemoryInline::FlatRead8((r4 + 2));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & -8);
    r4 = (r4 * 74);
    r5 = (r3 + r4);
    r3 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5);
    r4 = MemoryInline::FlatRead8((r3 + 2));
    r23 = (r23 | r0);
    r0 = (r25 & r4);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8047E870;
    }
}

loc_8047E840:
{
    r3 = (r31 + r29);
    r0 = (r27 & 255);
    r3 = MemoryInline::FlatRead8((r3 + 9));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_2 & -8);
    r5 = (r5 + r3);
    r3 = MemoryInline::FlatRead8((r5 + 2));
}

loc_8047E85C:
{
    r22 = (r22 | r3);
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_8047E8A8;
    }
}

loc_8047E864:
{
    r26 = MemoryInline::FlatRead16((r5 + 4));
    r27 = r4;
    goto loc_8047E8A8;
}

loc_8047E870:
{
    r3 = MemoryInline::FlatRead8((r3 + 6));
    r0 = (r25 & r3);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8047E8A8;
    }
}

loc_8047E87C:
{
    r4 = (r31 + r29);
    r0 = (r27 & 255);
    r4 = MemoryInline::FlatRead8((r4 + 9));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r4 = (r4_rot_2 & -8);
    r5 = (r5 + r4);
    r4 = MemoryInline::FlatRead8((r5 + 6));
}

loc_8047E898:
{
    r22 = (r22 | r4);
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_8047E8A8;
    }
}

loc_8047E8A0:
{
    r27 = r3;
    r26 = MemoryInline::FlatRead16((r5 + 8));
}

loc_8047E8A8:
{
    r28 = (r28 + 1);
}

loc_8047E8AC:
{
    r0 = MemoryInline::FlatRead8((r30 + -18216));
    r3 = (r28 & 255);
}

loc_8047E8B8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8047E780;
    }
}

loc_8047E8BC:
{
    r0 = (r27 & 3);
}

loc_8047E8C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8047E8E4;
    }
}

loc_8047E8C4:
{
    r3 = (r23 & 255);
    r0 = (r27 & 255);
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8047E8E4;
    }
}

loc_8047E8D4:
{
    r0 = (r23 & r22);
    r27 = (r0 & 3);
}

loc_8047E8DC:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_8047E8E4;
    }
}

loc_8047E8E0:
{
    r26 = 0;
}

loc_8047E8E4:
{
}

loc_8047E8E8:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(0))) {
        goto loc_8047E988;
    }
}

loc_8047E8EC:
{
}

loc_8047E8F0:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_8047E988;
    }
}

loc_8047E8F4:
{
    r21 = 0x80740000u;
    r0 = 3;
    r21 = (r21 + -18476);
    r4 = 0;
    ctr = r0;
}

loc_8047E908:
{
    r22_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
    r22 = (r22_rot_2 & 8160);
    r3 = (r21 + r22);
    r0 = MemoryInline::FlatRead8((r3 + 182));
}

loc_8047E918:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8047E954;
    }
}

loc_8047E91C:
{
    r0 = 1;
    r4 = r20;
    MemoryInline::FlatWrite8((r3 + 182), static_cast<uint8_t>(r0));
    r3 = (r3 + 176);
    // inline leaf 0x8047B244 (13 guest instruction(s))
    r9 = MemoryInline::FlatRead8(r4);
    r8 = MemoryInline::FlatRead8((r4 + 1));
    r7 = MemoryInline::FlatRead8((r4 + 2));
    r6 = MemoryInline::FlatRead8((r4 + 3));
    r5 = MemoryInline::FlatRead8((r4 + 4));
    r0 = MemoryInline::FlatRead8((r4 + 5));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r9));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8047B244
    r4 = 0x80480000u;
    r3 = (r21 + r22);
    r4 = (r4 + -5420);
    r5 = r26;
    MemoryInline::FlatWrite32((r3 + 160), r4);
    r3 = (r3 + 152);
    r4 = 0;
    ctx->lr = 0x8047E950u;
    if constexpr (KnownRegArgsCpuCall<0x8047B70Cu>(&func_8047B70C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_8047B70C_3042 = func_8047B70C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8047B70C_3042);
        r4 = static_cast<uint32_t>(regargs_result_8047B70C_3042 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8047B70Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    }
    goto loc_8047EA44;
}

loc_8047E954:
{
    r4 = (r4 + 1);
    r0 = (r4 & 255);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8047E908;
    }
}

loc_8047E960:
{
}

loc_8047E964:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8047E988;
    }
}

loc_8047E968:
{
    r0 = MemoryInline::FlatRead8((r13 + -15848));
}

loc_8047E970:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_8047EA44;
    }
}

loc_8047E974:
{
    r4 = 0x80610000u;
    r3 = 1281;
    r4 = (r4 + 14644);
    ctx->lr = 0x8047E984u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABB0u>(&func_8047ABB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8047ABB0_370E = func_8047ABB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABB0_370E);
        r4 = static_cast<uint32_t>(regargs_result_8047ABB0_370E >> 32);
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
        ctr = ctx->ctr;
    }
    goto loc_8047EA44;
}

loc_8047E988:
{
    r0 = (r27 & 255);
}

loc_8047E98C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8047EA44;
    }
}

loc_8047E990:
{
}

loc_8047E994:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8047E9D8;
    }
}

loc_8047E998:
{
    r0 = 1;
    r3 = r20;
    MemoryInline::FlatWrite8((r24 + 9), static_cast<uint8_t>(r0));
    r4 = (r1 + 9);
    ctx->lr = 0x8047E9ACu;
    if constexpr (KnownRegArgsCpuCall<0x80486D5Cu>(&func_80486D5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80486D5C_4087 = func_80486D5C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80486D5C_4087);
        r4 = static_cast<uint32_t>(regargs_result_80486D5C_4087 >> 32);
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
        InvokeDirectCpu<0x80486D5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = MemoryInline::FlatRead8((r1 + 9));
}

loc_8047E9B4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_8047EA44;
    }
}

loc_8047E9B8:
{
    r3 = 0x80740000u;
    r5 = MemoryInline::FlatRead32((r13 + -20688));
    r3 = (r3 + -18476);
    r4 = r20;
    r3 = MemoryInline::FlatRead8((r3 + 149));
    r5 = (r5 + 10);
    ctx->lr = 0x8047E9D4u;
    if constexpr (KnownRegArgsCpuCall<0x80486B8Cu>(&func_80486B8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_80486B8C_4633 = func_80486B8C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80486B8C_4633);
        r4 = static_cast<uint32_t>(regargs_result_80486B8C_4633 >> 32);
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
        InvokeDirectCpu<0x80486B8Cu>(ctx);
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
        ctr = ctx->ctr;
    }
    goto loc_8047EA44;
}

loc_8047E9D8:
{
}

loc_8047E9DC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8047EA1C;
    }
}

loc_8047E9E0:
{
    r0 = 2;
    r3 = r20;
    MemoryInline::FlatWrite8((r24 + 9), static_cast<uint8_t>(r0));
    r4 = (r1 + 8);
    ctx->lr = 0x8047E9F4u;
    if constexpr (KnownRegArgsCpuCall<0x80486D5Cu>(&func_80486D5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80486D5C_4F0E = func_80486D5C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80486D5C_4F0E);
        r4 = static_cast<uint32_t>(regargs_result_80486D5C_4F0E >> 32);
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
        InvokeDirectCpu<0x80486D5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_8047E9FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8047EA44;
    }
}

loc_8047EA00:
{
    r3 = 0x80740000u;
    r5 = MemoryInline::FlatRead32((r13 + -20688));
    r3 = (r3 + -18476);
    r4 = r20;
    r3 = MemoryInline::FlatRead8((r3 + 149));
    ctx->lr = 0x8047EA18u;
    if constexpr (KnownRegArgsCpuCall<0x80486B8Cu>(&func_80486B8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_80486B8C_54A6 = func_80486B8C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80486B8C_54A6);
        r4 = static_cast<uint32_t>(regargs_result_80486B8C_54A6 >> 32);
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
        InvokeDirectCpu<0x80486B8Cu>(ctx);
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
        ctr = ctx->ctr;
    }
    goto loc_8047EA44;
}

loc_8047EA1C:
{
}

loc_8047EA20:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_8047EA44;
    }
}

loc_8047EA24:
{
    r3 = 0x80740000u;
    r0 = 0;
    r3 = (r3 + -18476);
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r3 + 149));
    r4 = r20;
    r5 = (r1 + 12);
    ctx->lr = 0x8047EA44u;
    if constexpr (KnownRegArgsCpuCall<0x80486B8Cu>(&func_80486B8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_80486B8C_5E49 = func_80486B8C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80486B8C_5E49);
        r4 = static_cast<uint32_t>(regargs_result_80486B8C_5E49 >> 32);
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
        InvokeDirectCpu<0x80486B8Cu>(ctx);
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
        ctr = ctx->ctr;
    }
}

loc_8047EA44:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
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

extern "C" void func_8047E6DC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8047E6DC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8047E6DC func_8047E6DC preserves=true fpr_mask=0x00000000
