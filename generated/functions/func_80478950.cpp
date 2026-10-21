#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80477970(CpuContext* ctx);
extern "C" uint64_t func_80477970_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80479670(CpuContext* ctx);
extern "C" uint32_t func_80479670_ra68_1fe_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80478950_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r30_addr_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;

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

    MKW_GUEST_ENTER(0x80478950u);
    goto loc_80478950;

loc_80478950:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r7 = 0x80710000u;
}

loc_8047896C:
{
    r7 = (r7 + -3456);
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = (r7 + 84);
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(65523))) {
        goto loc_8047898C;
    }
}

loc_80478984:
{
    r3 = 255;
    goto loc_80478C80;
}

loc_8047898C:
{
    r0 = 3;
    r31 = 0;
    ctr = r0;
}

loc_80478998:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r5 = (r5_rot_2 & 1020);
    r5 = (r5 + 196608);
    r0 = (r5 + -30180);
    r30_addr_2 = (r30 + r0);
    r0 = MemoryInline::FlatRead32(r30_addr_2);
}

loc_804789AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804789F0;
    }
}

loc_804789B0:
{
    r31 = (r31 + 1);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r5 = (r5_rot_3 & 1020);
    r5 = (r5 + 196608);
    r0 = (r5 + -30180);
    r30_addr_3 = (r30 + r0);
    r0 = MemoryInline::FlatRead32(r30_addr_3);
}

loc_804789C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804789F0;
    }
}

loc_804789CC:
{
    r31 = (r31 + 1);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r5 = (r5_rot_4 & 1020);
    r5 = (r5 + 196608);
    r0 = (r5 + -30180);
    r30_addr_4 = (r30 + r0);
    r0 = MemoryInline::FlatRead32(r30_addr_4);
}

loc_804789E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804789F0;
    }
}

loc_804789E8:
{
    r31 = (r31 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80478998;
    }
}

loc_804789F0:
{
    r0 = (r31 & 255);
}

loc_804789F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_80478A04;
    }
}

loc_804789FC:
{
    r3 = 255;
    goto loc_80478C80;
}

loc_80478A04:
{
    r0 = (r3 + 3);
}

loc_80478A0C:
{
    r3 = (r0 & -4);
    r0 = (r3 + 12);
    r3 = (r0 * r4);
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80478A24;
    }
}

loc_80478A1C:
{
    ctx->lr = 0x80478A20u;
    if constexpr (KnownRegArgsCpuCall<0x80479670u>(&func_80479670)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_80479670_140B = func_80479670_ra68_1fe_8_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_80479670_140B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        InvokeDirectCpu<0x80479670u>(ctx);
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
    r6 = r3;
}

loc_80478A24:
{
}

loc_80478A28:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80478C7C;
    }
}

loc_80478A2C:
{
    r4 = r27;
    r5 = r28;
    r3 = (r31 & 255);
    ctx->lr = 0x80478A3Cu;
    if constexpr (KnownRegArgsCpuCall<0x80477970u>(&func_80477970)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_80477970_1D2E = func_80477970_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80477970_1D2E);
        r4 = static_cast<uint32_t>(regargs_result_80477970_1D2E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80477970u>(ctx);
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
        ctr = ctx->ctr;
    }
    r3 = 0x80710000u;
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(4));
    r5 = (r5_rot_6 & 4080);
    r3 = (r3 + -3456);
    r4 = 0;
    r3 = (r3 + 84);
    r6 = (r5 + 196608);
    r5 = (r3 + 196608);
    r5 = MemoryInline::FlatRead8((r5 + -30073));
    r0 = (r6 + -30316);
    r3_addr_1 = (r3 + r0);
    r7 = MemoryInline::FlatRead16(r3_addr_1);
    ctr = r5;
}

loc_80478A6C:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_80478A9C;
    }
}

loc_80478A70:
{
    r6 = (r4 + 196608);
    r0 = (r6 + -30082);
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_3);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r6 = (r6_rot_2 & -16);
    r6 = (r6 + 196608);
    r0 = (r6 + -30316);
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_4);
}

loc_80478A90:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(r0))) {
        goto loc_80478A9C;
    }
}

loc_80478A94:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80478A70;
    }
}

loc_80478A9C:
{
}

loc_80478AA0:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(r4))) {
        goto loc_80478C04;
    }
}

loc_80478AA4:
{
    r0 = (r5 - r4);
    r8 = (r4 + 8);
}

loc_80478AB0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_80478BDC;
    }
}

loc_80478AB4:
{
    r6 = (r3 + 196608);
    r9 = 0;
    r0 = MemoryInline::FlatRead8((r6 + -30073));
    r10 = 0;
    r11 = 0;
    r7 = 0;
}

loc_80478AD0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_80478AE8;
    }
}

loc_80478AD4:
{
    r6 = 0x80000000u;
    r0 = (r6 + 1);
}

loc_80478AE0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_80478AE8;
    }
}

loc_80478AE4:
{
    r7 = 1;
}

loc_80478AE8:
{
}

loc_80478AEC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80478B0C;
    }
}

loc_80478AF0:
{
    r7 = (r3 + 196608);
    r6 = 0x80000000u;
    r7 = MemoryInline::FlatRead8((r7 + -30073));
    r0 = (r6 + 1);
}

loc_80478B04:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r0))) {
        goto loc_80478B0C;
    }
}

loc_80478B08:
{
    r11 = 1;
}

loc_80478B0C:
{
}

loc_80478B10:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_80478B24;
    }
}

loc_80478B14:
{
    r0 = (r4 + -2147483648);
}

loc_80478B1C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80478B24;
    }
}

loc_80478B20:
{
    r10 = 1;
}

loc_80478B24:
{
}

loc_80478B28:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_80478B6C;
    }
}

loc_80478B2C:
{
    r6 = (r3 + 196608);
    r0 = (0 - r4);
    r10 = MemoryInline::FlatRead8((r6 + -30073));
    r0 = (r0 & -2147483648);
    r6 = 1;
    r7 = (r10 & -2147483648);
}

loc_80478B48:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r0))) {
        goto loc_80478B60;
    }
}

loc_80478B4C:
{
    r0 = (r10 - r4);
    r0 = (r0 & -2147483648);
}

loc_80478B58:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(r0))) {
        goto loc_80478B60;
    }
}

loc_80478B5C:
{
    r6 = 0;
}

loc_80478B60:
{
}

loc_80478B64:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80478B6C;
    }
}

loc_80478B68:
{
    r9 = 1;
}

loc_80478B6C:
{
}

loc_80478B70:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80478BDC;
    }
}

loc_80478B74:
{
    r0 = (r5 + 7);
    r0 = (r0 - r8);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_80478B88:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(r8))) {
        goto loc_80478BDC;
    }
}

loc_80478B8C:
{
    r6 = (r3 + r5);
    r5 = (r5 + -8);
    r6 = (r6 + 196608);
    r0 = MemoryInline::FlatRead8((r6 + -30083));
    MemoryInline::FlatWrite8((r6 + -30082), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + -30084));
    MemoryInline::FlatWrite8((r6 + -30083), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + -30085));
    MemoryInline::FlatWrite8((r6 + -30084), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + -30086));
    MemoryInline::FlatWrite8((r6 + -30085), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + -30087));
    MemoryInline::FlatWrite8((r6 + -30086), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + -30088));
    MemoryInline::FlatWrite8((r6 + -30087), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + -30089));
    MemoryInline::FlatWrite8((r6 + -30088), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + -30090));
    MemoryInline::FlatWrite8((r6 + -30089), static_cast<uint8_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80478B8C;
    }
}

loc_80478BDC:
{
    r0 = (r5 - r4);
    ctr = r0;
}

loc_80478BE8:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(r4))) {
        goto loc_80478C04;
    }
}

loc_80478BEC:
{
    r6 = (r3 + r5);
    r5 = (r5 + -1);
    r6 = (r6 + 196608);
    r0 = MemoryInline::FlatRead8((r6 + -30083));
    MemoryInline::FlatWrite8((r6 + -30082), static_cast<uint8_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80478BEC;
    }
}

loc_80478C04:
{
    r0 = (r3 + 196608);
    r5 = (r31 & 255);
    r4 = (r0 + r4);
    r3 = 0x80710000u;
    r3 = (r3 + -3456);
}

loc_80478C1C:
{
    MemoryInline::FlatWrite8((r4 + -30082), static_cast<uint8_t>(r31));
    r3 = (r3 + 84);
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(9))) {
        goto loc_80478C64;
    }
}

loc_80478C28:
{
}

loc_80478C2C:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(1))) {
        goto loc_80478C4C;
    }
}

loc_80478C30:
{
    r4 = (r3 + 196608);
    r0 = 1;
    r3 = MemoryInline::FlatRead16((r4 + -30084));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r0 = (r3 | r0);
    MemoryInline::FlatWriteRam16((r4 + -30084), static_cast<uint16_t>(r0));
    goto loc_80478C64;
}

loc_80478C4C:
{
    r4 = (r3 + 196608);
    r0 = 1;
    r3 = MemoryInline::FlatRead16((r4 + -30084));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r0 = (r3 & ~r0);
    MemoryInline::FlatWriteRam16((r4 + -30084), static_cast<uint16_t>(r0));
}

loc_80478C64:
{
    r5 = (r30 + 196608);
    r3 = r31;
    r4 = MemoryInline::FlatRead8((r5 + -30073));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam8((r5 + -30073), static_cast<uint8_t>(r0));
    goto loc_80478C80;
}

loc_80478C7C:
{
    r3 = 255;
}

loc_80478C80:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80478950(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80478950_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80478950 func_80478950 preserves=true fpr_mask=0x00000000
