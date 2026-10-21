#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80549D4C(CpuContext* ctx);
extern "C" uint64_t func_80549D4C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80549A84_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r27_addic_src_0 = 0;
    uint32_t r27_addic_src_1 = 0;
    uint32_t r27_addic_src_2 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;
    uint32_t r6_addr_7 = 0;
    uint32_t r6_addr_8 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
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
    uint32_t r12 = ctx->gpr[12];
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

    MKW_GUEST_ENTER(0x80549A84u);
    goto loc_80549A84;

loc_80549A84:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r23 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 6460));
    r21 = r4;
    r24 = r5;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x80549AB8u;
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
    r4 = MemoryInline::FlatRead32(r21);
    r29 = r3;
    r27 = 1;
    r30 = 0;
    r31 = 1;
    goto loc_80549CC4;
}

loc_80549AD0:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r29_addr_2 = (r29 + r0);
    r0 = MemoryInline::FlatRead16(r29_addr_2);
}

loc_80549ADC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_80549CA4;
    }
}

loc_80549AE0:
{
    r0 = MemoryInline::FlatRead16((r23 + 6632));
    r6 = MemoryInline::FlatRead32((r23 + 6628));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r3 = (r6 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & -8);
    r28 = (r6 + r0);
    r6_addr_2 = (r6 + r0);
    r8 = MemoryInline::FlatRead16(r6_addr_2);
    r7 = MemoryInline::FlatRead16((r28 + 2));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & -8);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r5 = (r5_rot_2 & -8);
    r6_addr_3 = (r6 + r5);
    r9 = MemoryInline::FlatRead16(r6_addr_3);
    r3 = (r6 + r0);
    r6_addr_4 = (r6 + r5);
    MemoryInline::FlatWrite16(r6_addr_4, static_cast<uint16_t>(r8));
}

loc_80549B1C:
{
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r9));
    MemoryInline::FlatWrite16((r28 + 2), static_cast<uint16_t>(r9));
    r3 = MemoryInline::FlatRead16((r23 + 6632));
    r6 = MemoryInline::FlatRead32((r23 + 6628));
    r0 = (r3 + 1);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & 524280);
    r6_addr_5 = (r6 + r0);
    r0 = MemoryInline::FlatRead16(r6_addr_5);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & -8);
    r5 = (r6 + r0);
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(r9))) {
        goto loc_80549B64;
    }
}

loc_80549B48:
{
    r7 = MemoryInline::FlatRead16((r5 + 2));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r3 = (r3_rot_2 & -8);
    r6_addr_6 = (r6 + r3);
    r0 = MemoryInline::FlatRead16(r6_addr_6);
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r28 + 2), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r9));
    r6_addr_7 = (r6 + r3);
    MemoryInline::FlatWrite16(r6_addr_7, static_cast<uint16_t>(r9));
}

loc_80549B64:
{
    MemoryInline::FlatWrite16((r28 + 4), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r28 + 6), static_cast<uint16_t>(r31));
    r5 = MemoryInline::FlatRead16((r28 + 2));
    r7 = MemoryInline::FlatRead32((r23 + 6628));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r3 = (r3_rot_4 & -8);
    r8 = MemoryInline::FlatRead16(r28);
    r7_addr_2 = (r7 + r3);
    r6 = MemoryInline::FlatRead16(r7_addr_2);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & -8);
    r7_addr_3 = (r7 + r3);
    MemoryInline::FlatWrite16(r7_addr_3, static_cast<uint16_t>(r8));
    r3 = (r7 + r0);
}

loc_80549B90:
{
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r28 + 2), static_cast<uint16_t>(r6));
    r7 = MemoryInline::FlatRead32((r23 + 6640));
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r6))) {
        goto loc_80549BC4;
    }
}

loc_80549BA4:
{
    r8 = MemoryInline::FlatRead16((r7 + 2));
    r5 = MemoryInline::FlatRead32((r23 + 6628));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r3 = (r3_rot_5 & -8);
    r5_addr_2 = (r5 + r3);
    r0 = MemoryInline::FlatRead16(r5_addr_2);
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r28 + 2), static_cast<uint16_t>(r8));
    MemoryInline::FlatWrite16((r7 + 2), static_cast<uint16_t>(r6));
    r5_addr_3 = (r5 + r3);
    MemoryInline::FlatWrite16(r5_addr_3, static_cast<uint16_t>(r6));
}

loc_80549BC4:
{
    r0 = MemoryInline::FlatRead16((r23 + 6648));
    r25 = 0;
    r21 = (r4 - r0);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & -2);
    r26 = r21;
    r22 = (r29 + r0);
    goto loc_80549C0C;
}

loc_80549BE0:
{
    r0 = MemoryInline::FlatRead16(r22);
}

loc_80549BE8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_80549C04;
    }
}

loc_80549BEC:
{
}

loc_80549BF0:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_80549BFC;
    }
}

loc_80549BF4:
{
    r25 = (r26 + 1);
    goto loc_80549C04;
}

loc_80549BFC:
{
    r26 = (r26 + 1);
    goto loc_80549C2C;
}

loc_80549C04:
{
    r22 = (r22 + 2);
    r26 = (r26 + 1);
}

loc_80549C0C:
{
    r3 = MemoryInline::FlatRead32((r23 + 6460));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x80549C20u;
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
    r0 = (r3 & 65535);
}

loc_80549C28:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(r0))) {
        goto loc_80549BE0;
    }
}

loc_80549C2C:
{
    r3 = MemoryInline::FlatRead32((r23 + 6640));
    r5 = (r25 - r21);
    r4 = (r26 - r25);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r5));
    r3 = (r29 + r0);
    MemoryInline::FlatWrite32((r23 + 6640), r28);
    MemoryInline::FlatWrite16((r28 + 4), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead16((r3 + -2));
}

loc_80549C54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_80549C8C;
    }
}

loc_80549C58:
{
}

loc_80549C5C:
{
    if ((static_cast<uint32_t>(r26) == static_cast<uint32_t>(r25))) {
        goto loc_80549C8C;
    }
}

loc_80549C60:
{
    r0 = MemoryInline::FlatRead32(r24);
    r4 = (r26 + -1);
}

loc_80549C6C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r26))) {
        goto loc_80549C80;
    }
}

loc_80549C70:
{
    r3 = MemoryInline::FlatRead32((r23 + 6640));
    r3 = MemoryInline::FlatRead16((r3 + 4));
    r0 = (r3 + -1);
    goto loc_80549C84;
}

loc_80549C80:
{
    r0 = (r0 - r25);
}

loc_80549C84:
{
    MemoryInline::FlatWrite16((r23 + 6648), static_cast<uint16_t>(r0));
    goto loc_80549C9C;
}

loc_80549C8C:
{
    r0 = MemoryInline::FlatRead32(r24);
    r4 = r26;
    r0 = (r0 - r25);
    MemoryInline::FlatWrite16((r23 + 6648), static_cast<uint16_t>(r0));
}

loc_80549C9C:
{
    r27 = (r27 + 1);
    goto loc_80549CC4;
}

loc_80549CA4:
{
    r5 = MemoryInline::FlatRead32((r23 + 6640));
    r4 = (r4 + 1);
    r3 = MemoryInline::FlatRead16((r5 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r23 + 6648));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r23 + 6648), static_cast<uint16_t>(r0));
}

loc_80549CC4:
{
    r3 = MemoryInline::FlatRead32(r24);
}

loc_80549CCC:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r3))) {
        goto loc_80549AD0;
    }
}

loc_80549CD0:
{
    r0 = MemoryInline::FlatRead16((r23 + 6648));
    r21 = MemoryInline::FlatRead32((r23 + 6640));
    r22 = (r3 - r0);
}

loc_80549CDC:
{
    r3 = r23;
    r4 = r21;
    r5 = r22;
    ctx->lr = 0x80549CECu;
    if constexpr (KnownRegArgsCpuCall<0x80549D4Cu>(&func_80549D4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80549D4C_346C = func_80549D4C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80549D4C_346C);
        r4 = static_cast<uint32_t>(regargs_result_80549D4C_346C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x80549D4Cu>(ctx);
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
    r0 = MemoryInline::FlatRead16(r21);
    r27_addic_src_2 = r27;
    r27 = (r27_addic_src_2 + -1);
}

loc_80549CF4:
{
    r3 = MemoryInline::FlatRead32((r23 + 6628));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_12 & -8);
    r21 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r21 + 4));
    r22 = (r22 - r0);
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_80549CDC;
    }
}

loc_80549D0C:
{
    r12 = MemoryInline::FlatRead32((r23 + 92));
    r3 = (r23 + 16);
    r12 = MemoryInline::FlatRead32((r12 + 144));
    ctr = r12;
    ctx->lr = 0x80549D20u;
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
    r12 = MemoryInline::FlatRead32((r23 + 92));
    r3 = (r23 + 16);
    r12 = MemoryInline::FlatRead32((r12 + 148));
    ctr = r12;
    ctx->lr = 0x80549D34u;
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
    r11 = (r1 + 64);
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
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

extern "C" void func_80549A84(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80549A84_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80549A84 func_80549A84 preserves=true fpr_mask=0x00000000
