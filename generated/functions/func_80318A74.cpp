#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027F06C(CpuContext* ctx);
extern "C" uint64_t func_8027F06C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80315A30(CpuContext* ctx);
extern "C" uint32_t func_80315A30_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80318A74_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
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
    uint32_t r11 = ctx->gpr[11];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80318A74;

loc_80318A74:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457464 (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    // end of inlined leaf 0x80457464
    r18 = r3;
    r19 = r5;
    r20 = r6;
    r21 = r7;
    r31 = MemoryInline::FlatRead32(r4);
    r30 = MemoryInline::FlatRead32((r4 + 4));
    r29 = MemoryInline::FlatRead32((r4 + 8));
    r28 = MemoryInline::FlatRead32((r4 + 12));
    r27 = MemoryInline::FlatRead32((r4 + 16));
    r26 = MemoryInline::FlatRead32((r4 + 20));
    r25 = 0;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r24 = 0;
    r23 = 0;
    r22 = 0;
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    r3 = (r6 & 255);
    if constexpr (KnownRegArgsCpuCall<0x80315A30u>(&func_80315A30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80315A30_CB4 = func_80315A30_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80315A30_CB4;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80315A30u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_80318ADC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(8))) {
        goto loc_80318DC4;
    }
}

loc_80318AE0:
{
    r3 = 0x805E0000u;
    r3 = (r3 + -10768);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80318DC4u:
        goto loc_80318DC4;
        break;
    case 0x80318AF8u:
        goto loc_80318AF8;
        break;
    case 0x80318B68u:
        goto loc_80318B68;
        break;
    case 0x80318BB8u:
        goto loc_80318BB8;
        break;
    case 0x80318C28u:
        goto loc_80318C28;
        break;
    case 0x80318CB8u:
        goto loc_80318CB8;
        break;
    case 0x80318CF4u:
        goto loc_80318CF4;
        break;
    case 0x80318D20u:
        goto loc_80318D20;
        break;
    case 0x80318D6Cu:
        goto loc_80318D6C;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80318AF8:
{
    r0 = (r20 & 255);
    r0 = (r0 & 16);
}

loc_80318B04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80318B40;
    }
}

loc_80318B08:
{
    r3 = MemoryInline::FlatRead8(r28);
    r0 = (r3 + 245);
    r0 = (r0 & 255);
}

loc_80318B18:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_80318B40;
    }
}

loc_80318B1C:
{
    r3 = r18;
    r4 = (r19 & 255);
    r5 = r28;
    r6 = 0;
    r7 = 0;
    r8 = (r1 + 8);
    ctx->lr = 0x80318B38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80274BC0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r23 = r3;
    r22 = 1;
}

loc_80318B40:
{
    r3 = r18;
    r4 = (r19 & 255);
    r5 = r31;
    r6 = 0;
    r7 = 0;
    r8 = (r1 + 8);
    ctx->lr = 0x80318B5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80274BC0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r24 = r3;
    r25 = (r25 | 1);
    goto loc_80318DC4;
}

loc_80318B68:
{
    r0 = (r20 & 255);
    r0 = (r0 & 16);
}

loc_80318B74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80318BA0;
    }
}

loc_80318B78:
{
    r3 = MemoryInline::FlatRead8(r28);
    r0 = (r3 + 245);
    r0 = (r0 & 255);
}

loc_80318B88:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_80318BA0;
    }
}

loc_80318B8C:
{
    r3 = r28;
    r4 = (r19 & 255);
    ctx->lr = 0x80318B98u;
    if constexpr (KnownRegArgsCpuCall<0x8027F06Cu>(&func_8027F06C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8027F06C_2005 = func_8027F06C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027F06C_2005);
        r4 = static_cast<uint32_t>(regargs_result_8027F06C_2005 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027F06Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r23 = r3;
    r22 = 1;
}

loc_80318BA0:
{
    r3 = r31;
    r4 = (r19 & 255);
    ctx->lr = 0x80318BACu;
    if constexpr (KnownRegArgsCpuCall<0x8027F06Cu>(&func_8027F06C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8027F06C_244B = func_8027F06C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027F06C_244B);
        r4 = static_cast<uint32_t>(regargs_result_8027F06C_244B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027F06Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r24 = r3;
    r25 = (r25 | 1);
    goto loc_80318DC4;
}

loc_80318BB8:
{
    r0 = MemoryInline::FlatRead8(r28);
}

loc_80318BC0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80318C00;
    }
}

loc_80318BC4:
{
    r0 = MemoryInline::FlatRead8(r27);
}

loc_80318BCC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80318C00;
    }
}

loc_80318BD0:
{
    r0 = MemoryInline::FlatRead8(r26);
}

loc_80318BD8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80318C00;
    }
}

loc_80318BDC:
{
    r3 = r18;
    r4 = (r19 & 255);
    r5 = r28;
    r6 = r27;
    r7 = r26;
    r8 = (r1 + 8);
    ctx->lr = 0x80318BF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80274BC0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r23 = r3;
    r22 = 1;
}

loc_80318C00:
{
    r3 = r18;
    r4 = (r19 & 255);
    r5 = r31;
    r6 = r30;
    r7 = r29;
    r8 = (r1 + 8);
    ctx->lr = 0x80318C1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80274BC0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r24 = r3;
    r25 = (r25 | 1);
    goto loc_80318DC4;
}

loc_80318C28:
{
    r0 = MemoryInline::FlatRead8(r28);
}

loc_80318C30:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80318C80;
    }
}

loc_80318C34:
{
    r0 = MemoryInline::FlatRead8(r27);
}

loc_80318C3C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80318C80;
    }
}

loc_80318C40:
{
    r0 = MemoryInline::FlatRead8(r26);
}

loc_80318C48:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80318C80;
    }
}

loc_80318C4C:
{
    r3 = r28;
    r4 = (r19 & 255);
    ctx->lr = 0x80318C58u;
    if constexpr (KnownRegArgsCpuCall<0x8027F06Cu>(&func_8027F06C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8027F06C_32E3 = func_8027F06C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027F06C_32E3);
        r4 = static_cast<uint32_t>(regargs_result_8027F06C_32E3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027F06Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r18 = r3;
    r3 = r27;
    r4 = (r19 & 255);
    ctx->lr = 0x80318C68u;
    if constexpr (KnownRegArgsCpuCall<0x8027F06Cu>(&func_8027F06C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8027F06C_3704 = func_8027F06C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027F06C_3704);
        r4 = static_cast<uint32_t>(regargs_result_8027F06C_3704 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027F06Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r23 = (r18 + r3);
    r3 = r26;
    r4 = (r19 & 255);
    ctx->lr = 0x80318C78u;
    if constexpr (KnownRegArgsCpuCall<0x8027F06Cu>(&func_8027F06C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8027F06C_3B2D = func_8027F06C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027F06C_3B2D);
        r4 = static_cast<uint32_t>(regargs_result_8027F06C_3B2D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027F06Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r23 = (r23 + r3);
    r22 = 1;
}

loc_80318C80:
{
    r3 = r31;
    r4 = (r19 & 255);
    ctx->lr = 0x80318C8Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027F06Cu>(&func_8027F06C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8027F06C_3F7B = func_8027F06C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027F06C_3F7B);
        r4 = static_cast<uint32_t>(regargs_result_8027F06C_3F7B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027F06Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r18 = r3;
    r3 = r30;
    r4 = (r19 & 255);
    ctx->lr = 0x80318C9Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027F06Cu>(&func_8027F06C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8027F06C_439C = func_8027F06C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027F06C_439C);
        r4 = static_cast<uint32_t>(regargs_result_8027F06C_439C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027F06Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r24 = (r18 + r3);
    r3 = r29;
    r4 = (r19 & 255);
    ctx->lr = 0x80318CACu;
    if constexpr (KnownRegArgsCpuCall<0x8027F06Cu>(&func_8027F06C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8027F06C_47C5 = func_8027F06C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027F06C_47C5);
        r4 = static_cast<uint32_t>(regargs_result_8027F06C_47C5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027F06Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r24 = (r24 + r3);
    r25 = (r25 | 1);
    goto loc_80318DC4;
}

loc_80318CB8:
{
    r3 = MemoryInline::FlatRead8(r31);
    r0 = (r3 + 245);
    r0 = (r0 & 255);
}

loc_80318CC8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_80318DC4;
    }
}

loc_80318CCC:
{
    r3 = r18;
    r4 = (r19 & 255);
    r5 = r31;
    r6 = 0;
    r7 = 0;
    r8 = (r1 + 8);
    ctx->lr = 0x80318CE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80274BC0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r24 = r3;
    r25 = (r25 | 1);
    goto loc_80318DC4;
}

loc_80318CF4:
{
    r3 = MemoryInline::FlatRead8(r31);
    r0 = (r3 + 245);
    r0 = (r0 & 255);
}

loc_80318D04:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_80318DC4;
    }
}

loc_80318D08:
{
    r3 = r31;
    r4 = (r19 & 255);
    ctx->lr = 0x80318D14u;
    if constexpr (KnownRegArgsCpuCall<0x8027F06Cu>(&func_8027F06C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8027F06C_50EE = func_8027F06C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027F06C_50EE);
        r4 = static_cast<uint32_t>(regargs_result_8027F06C_50EE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027F06Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r24 = r3;
    r25 = (r25 | 1);
    goto loc_80318DC4;
}

loc_80318D20:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_80318D28:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80318DC4;
    }
}

loc_80318D2C:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80318D34:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80318DC4;
    }
}

loc_80318D38:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80318D40:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80318DC4;
    }
}

loc_80318D44:
{
    r3 = r18;
    r4 = (r19 & 255);
    r5 = r31;
    r6 = r30;
    r7 = r29;
    r8 = (r1 + 8);
    ctx->lr = 0x80318D60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80274BC0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r24 = r3;
    r25 = (r25 | 1);
    goto loc_80318DC4;
}

loc_80318D6C:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_80318D74:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80318DC4;
    }
}

loc_80318D78:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80318D80:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80318DC4;
    }
}

loc_80318D84:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80318D8C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80318DC4;
    }
}

loc_80318D90:
{
    r3 = r31;
    r4 = (r19 & 255);
    ctx->lr = 0x80318D9Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027F06Cu>(&func_8027F06C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8027F06C_5CB7 = func_8027F06C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027F06C_5CB7);
        r4 = static_cast<uint32_t>(regargs_result_8027F06C_5CB7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027F06Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r18 = r3;
    r3 = r30;
    r4 = (r19 & 255);
    ctx->lr = 0x80318DACu;
    if constexpr (KnownRegArgsCpuCall<0x8027F06Cu>(&func_8027F06C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8027F06C_60D8 = func_8027F06C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027F06C_60D8);
        r4 = static_cast<uint32_t>(regargs_result_8027F06C_60D8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027F06Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r24 = (r18 + r3);
    r3 = r29;
    r4 = (r19 & 255);
    ctx->lr = 0x80318DBCu;
    if constexpr (KnownRegArgsCpuCall<0x8027F06Cu>(&func_8027F06C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8027F06C_6501 = func_8027F06C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027F06C_6501);
        r4 = static_cast<uint32_t>(regargs_result_8027F06C_6501 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027F06Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r24 = (r24 + r3);
    r25 = (r25 | 1);
}

loc_80318DC4:
{
    r0 = (r25 & 255);
    r0 = (r0 & 1);
}

loc_80318DD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80318E50;
    }
}

loc_80318DD4:
{
    r3 = (r20 & 255);
    r0 = (r3 & 8);
}

loc_80318DE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80318E18;
    }
}

loc_80318DE4:
{
    r0 = (r3 & 1);
}

loc_80318DEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80318E18;
    }
}

loc_80318DF0:
{
}

loc_80318DF4:
{
    if ((static_cast<uint32_t>(r22) != static_cast<uint32_t>(1))) {
        goto loc_80318E18;
    }
}

loc_80318DF8:
{
    r3 = (r23 & 255);
    r0 = (r24 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80318E04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80318E18;
    }
}

loc_80318E08:
{
    r0 = 4;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80318E14;
    }
}

loc_80318E10:
{
    r0 = 2;
}

loc_80318E14:
{
    r25 = (r25 | r0);
}

loc_80318E18:
{
    r0 = (r20 & 255);
    r0 = (r0 & 4);
}

loc_80318E24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80318E4C;
    }
}

loc_80318E28:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_80318E30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80318E40;
    }
}

loc_80318E34:
{
}

loc_80318E38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80318E48;
    }
}

loc_80318E3C:
{
    goto loc_80318E4C;
}

loc_80318E40:
{
    r25 = (r25 | 8);
    goto loc_80318E4C;
}

loc_80318E48:
{
    r25 = (r25 | 16);
}

loc_80318E4C:
{
    MemoryInline::FlatWrite8(r21, static_cast<uint8_t>(r24));
}

loc_80318E50:
{
    r3 = r25;
    r11 = (r1 + 80);
    // inline leaf 0x804574B0 (15 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    // end of inlined leaf 0x804574B0
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
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

extern "C" void func_80318A74(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80318A74_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80318A74 func_80318A74 preserves=true fpr_mask=0x00000000
