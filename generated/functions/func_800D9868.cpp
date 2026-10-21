#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D8E40(CpuContext* ctx);
extern "C" uint32_t func_800D8E40_rac8_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800F13B0(CpuContext* ctx);
extern "C" uint64_t func_800F13B0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800F13FC(CpuContext* ctx);
extern "C" uint32_t func_800F13FC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_800D9868_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x800D9868u);
    goto loc_800D9868;

loc_800D9868:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r31 = r5;
    r29 = MemoryInline::FlatRead32((r13 + -17576));
}

loc_800D9890:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_800D989C;
    }
}

loc_800D9894:
{
    r3 = 0;
    goto loc_800D9BB8;
}

loc_800D989C:
{
}

loc_800D98A0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800D98B4;
    }
}

loc_800D98A4:
{
}

loc_800D98A8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(8))) {
        goto loc_800D9B80;
    }
}

loc_800D98AC:
{
    r3 = 0;
    goto loc_800D9BB8;
}

loc_800D98B4:
{
}

loc_800D98B8:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(14))) {
        goto loc_800D9BB4;
    }
}

loc_800D98BC:
{
    r5 = 0x805A0000u;
    r5 = (r5 + -32212);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    ctr = r5;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800D9BB4u:
        goto loc_800D9BB4;
        break;
    case 0x800D98D4u:
        goto loc_800D98D4;
        break;
    case 0x800D9908u:
        goto loc_800D9908;
        break;
    case 0x800D9938u:
        goto loc_800D9938;
        break;
    case 0x800D9994u:
        goto loc_800D9994;
        break;
    case 0x800D9ABCu:
        goto loc_800D9ABC;
        break;
    case 0x800D9B80u:
        goto loc_800D9B80;
        break;
    case 0x800D99D4u:
        goto loc_800D99D4;
        break;
    case 0x800D9A34u:
        goto loc_800D9A34;
        break;
    case 0x800D9A04u:
        goto loc_800D9A04;
        break;
    case 0x800D9A78u:
        goto loc_800D9A78;
        break;
    case 0x800D9B50u:
        goto loc_800D9B50;
        break;
    case 0x800D9B20u:
        goto loc_800D9B20;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_800D98D4:
{
    r3 = r29;
    ctx->lr = 0x800D98DCu;
    if constexpr (KnownRegArgsCpuCall<0x800D8E40u>(&func_800D8E40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_800D8E40_11FE = func_800D8E40_rac8_0_8_0(ctx, r3, r6, r7);
        r3 = regargs_result_800D8E40_11FE;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8E40u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
}

loc_800D98E0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D9BB4;
    }
}

loc_800D98E4:
{
    MemoryInline::FlatWrite32((r3 + 4), r28);
    MemoryInline::FlatWrite32((r3 + 8), r27);
    r4 = MemoryInline::FlatRead8((r28 + 8));
    r0 = (r4 + 20);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    MemoryInline::FlatWrite32((r3 + 2628), r31);
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    goto loc_800D9BB8;
}

loc_800D9908:
{
    r3 = r29;
    ctx->lr = 0x800D9910u;
    if constexpr (KnownRegArgsCpuCall<0x800D8E40u>(&func_800D8E40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_800D8E40_17CB = func_800D8E40_rac8_0_8_0(ctx, r3, r6, r7);
        r3 = regargs_result_800D8E40_17CB;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8E40u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
}

loc_800D9914:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D9BB4;
    }
}

loc_800D9918:
{
    MemoryInline::FlatWrite32((r3 + 4), r28);
    MemoryInline::FlatWrite32((r3 + 8), r27);
    r0 = 4;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    MemoryInline::FlatWrite32((r3 + 2628), r31);
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    goto loc_800D9BB8;
}

loc_800D9938:
{
    r3 = r29;
    ctx->lr = 0x800D9940u;
    if constexpr (KnownRegArgsCpuCall<0x800D8E40u>(&func_800D8E40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_800D8E40_1D63 = func_800D8E40_rac8_0_8_0(ctx, r3, r6, r7);
        r3 = regargs_result_800D8E40_1D63;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8E40u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
    r29 = r3;
}

loc_800D9948:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D9BB4;
    }
}

loc_800D994C:
{
    MemoryInline::FlatWrite32((r3 + 4), r28);
    MemoryInline::FlatWrite32((r3 + 8), r27);
    MemoryInline::FlatWrite32((r3 + 2628), r31);
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_800D996C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_800D9984;
    }
}

loc_800D9970:
{
    r0 = MemoryInline::FlatRead8((r28 + 8));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r0 = (r3 + 24);
    MemoryInline::FlatWrite32((r29 + 12), r0);
    goto loc_800D998C;
}

loc_800D9984:
{
    // inline leaf 0x800F0944 (2 guest instruction(s))
    r3 = 32;
    // end of inlined leaf 0x800F0944
    MemoryInline::FlatWrite32((r29 + 12), r3);
}

loc_800D998C:
{
    r3 = r29;
    goto loc_800D9BB8;
}

loc_800D9994:
{
    r3 = MemoryInline::FlatRead8((r4 + 3));
    if constexpr (KnownRegArgsCpuCall<0x800F13B0u>(&func_800F13B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800F13B0_25B8 = func_800F13B0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F13B0_25B8);
        r4 = static_cast<uint32_t>(regargs_result_800F13B0_25B8 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800F13B0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
    r30 = r3;
}

loc_800D99A4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_800D9BB4;
    }
}

loc_800D99A8:
{
    r3 = r29;
    ctx->lr = 0x800D99B0u;
    if constexpr (KnownRegArgsCpuCall<0x800D8E40u>(&func_800D8E40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_800D8E40_2A30 = func_800D8E40_rac8_0_8_0(ctx, r3, r6, r7);
        r3 = regargs_result_800D8E40_2A30;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8E40u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
}

loc_800D99B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D9BB4;
    }
}

loc_800D99B8:
{
    MemoryInline::FlatWrite32((r3 + 4), r28);
    MemoryInline::FlatWrite32((r3 + 8), r27);
    MemoryInline::FlatWrite32((r3 + 12), r30);
    MemoryInline::FlatWrite32((r3 + 2628), r31);
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    goto loc_800D9BB8;
}

loc_800D99D4:
{
    r3 = r29;
    ctx->lr = 0x800D99DCu;
    if constexpr (KnownRegArgsCpuCall<0x800D8E40u>(&func_800D8E40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_800D8E40_2FBD = func_800D8E40_rac8_0_8_0(ctx, r3, r6, r7);
        r3 = regargs_result_800D8E40_2FBD;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8E40u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
}

loc_800D99E0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D9BB4;
    }
}

loc_800D99E4:
{
    MemoryInline::FlatWrite32((r3 + 4), r28);
    MemoryInline::FlatWrite32((r3 + 8), r27);
    r0 = 28;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    MemoryInline::FlatWrite32((r3 + 2628), r31);
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    goto loc_800D9BB8;
}

loc_800D9A04:
{
    r3 = r29;
    ctx->lr = 0x800D9A0Cu;
    if constexpr (KnownRegArgsCpuCall<0x800D8E40u>(&func_800D8E40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_800D8E40_3556 = func_800D8E40_rac8_0_8_0(ctx, r3, r6, r7);
        r3 = regargs_result_800D8E40_3556;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8E40u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
}

loc_800D9A10:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D9BB4;
    }
}

loc_800D9A14:
{
    MemoryInline::FlatWrite32((r3 + 4), r28);
    MemoryInline::FlatWrite32((r3 + 8), r27);
    r0 = 4;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    MemoryInline::FlatWrite32((r3 + 2628), r31);
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    goto loc_800D9BB8;
}

loc_800D9A34:
{
    r3 = r28;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800F13FCu>(&func_800F13FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F13FC_3A93 = func_800F13FC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800F13FC_3A93;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800F13FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r30 = r3;
}

loc_800D9A48:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_800D9BB4;
    }
}

loc_800D9A4C:
{
    r3 = r29;
    ctx->lr = 0x800D9A54u;
    if constexpr (KnownRegArgsCpuCall<0x800D8E40u>(&func_800D8E40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_800D8E40_3D8F = func_800D8E40_rac8_0_8_0(ctx, r3, r6, r7);
        r3 = regargs_result_800D8E40_3D8F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8E40u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
}

loc_800D9A58:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D9BB4;
    }
}

loc_800D9A5C:
{
    MemoryInline::FlatWrite32((r3 + 4), r28);
    MemoryInline::FlatWrite32((r3 + 8), r27);
    MemoryInline::FlatWrite32((r3 + 12), r30);
    MemoryInline::FlatWrite32((r3 + 2628), r31);
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    goto loc_800D9BB8;
}

loc_800D9A78:
{
    r3 = r28;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x800F13FCu>(&func_800F13FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F13FC_42C1 = func_800F13FC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800F13FC_42C1;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800F13FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r30 = r3;
}

loc_800D9A8C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_800D9BB4;
    }
}

loc_800D9A90:
{
    r3 = r29;
    ctx->lr = 0x800D9A98u;
    if constexpr (KnownRegArgsCpuCall<0x800D8E40u>(&func_800D8E40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_800D8E40_45BD = func_800D8E40_rac8_0_8_0(ctx, r3, r6, r7);
        r3 = regargs_result_800D8E40_45BD;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8E40u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
}

loc_800D9A9C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D9BB4;
    }
}

loc_800D9AA0:
{
    MemoryInline::FlatWrite32((r3 + 4), r28);
    MemoryInline::FlatWrite32((r3 + 8), r27);
    MemoryInline::FlatWrite32((r3 + 12), r30);
    MemoryInline::FlatWrite32((r3 + 2628), r31);
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    goto loc_800D9BB8;
}

loc_800D9ABC:
{
    r3 = r29;
    ctx->lr = 0x800D9AC4u;
    if constexpr (KnownRegArgsCpuCall<0x800D8E40u>(&func_800D8E40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_800D8E40_4B4A = func_800D8E40_rac8_0_8_0(ctx, r3, r6, r7);
        r3 = regargs_result_800D8E40_4B4A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8E40u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
}

loc_800D9AC8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D9BB4;
    }
}

loc_800D9ACC:
{
    MemoryInline::FlatWrite32((r3 + 4), r28);
    MemoryInline::FlatWrite32((r3 + 8), r27);
}

loc_800D9AD8:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(5))) {
        goto loc_800D9AF0;
    }
}

loc_800D9ADC:
{
}

loc_800D9AE0:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(6))) {
        goto loc_800D9AFC;
    }
}

loc_800D9AE4:
{
}

loc_800D9AE8:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(7))) {
        goto loc_800D9B08;
    }
}

loc_800D9AEC:
{
    goto loc_800D9B10;
}

loc_800D9AF0:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_800D9B10;
}

loc_800D9AFC:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_800D9B10;
}

loc_800D9B08:
{
    r0 = 46;
    MemoryInline::FlatWrite32((r3 + 12), r0);
}

loc_800D9B10:
{
    MemoryInline::FlatWrite32((r3 + 2628), r31);
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    goto loc_800D9BB8;
}

loc_800D9B20:
{
    r3 = r29;
    ctx->lr = 0x800D9B28u;
    if constexpr (KnownRegArgsCpuCall<0x800D8E40u>(&func_800D8E40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_800D8E40_5383 = func_800D8E40_rac8_0_8_0(ctx, r3, r6, r7);
        r3 = regargs_result_800D8E40_5383;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8E40u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
}

loc_800D9B2C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D9BB4;
    }
}

loc_800D9B30:
{
    MemoryInline::FlatWrite32((r3 + 4), r28);
    MemoryInline::FlatWrite32((r3 + 8), r27);
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    MemoryInline::FlatWrite32((r3 + 2628), r31);
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    goto loc_800D9BB8;
}

loc_800D9B50:
{
    r3 = r29;
    ctx->lr = 0x800D9B58u;
    if constexpr (KnownRegArgsCpuCall<0x800D8E40u>(&func_800D8E40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_800D8E40_591B = func_800D8E40_rac8_0_8_0(ctx, r3, r6, r7);
        r3 = regargs_result_800D8E40_591B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8E40u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
}

loc_800D9B5C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D9BB4;
    }
}

loc_800D9B60:
{
    MemoryInline::FlatWrite32((r3 + 4), r28);
    MemoryInline::FlatWrite32((r3 + 8), r27);
    r0 = 32;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    MemoryInline::FlatWrite32((r3 + 2628), r31);
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    goto loc_800D9BB8;
}

loc_800D9B80:
{
    r3 = r29;
    ctx->lr = 0x800D9B88u;
    if constexpr (KnownRegArgsCpuCall<0x800D8E40u>(&func_800D8E40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_800D8E40_5EB4 = func_800D8E40_rac8_0_8_0(ctx, r3, r6, r7);
        r3 = regargs_result_800D8E40_5EB4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D8E40u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
}

loc_800D9B8C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D9BB4;
    }
}

loc_800D9B90:
{
    r4 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 8), r27);
    r0 = 46;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    MemoryInline::FlatWrite32((r3 + 2628), r4);
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    goto loc_800D9BB8;
}

loc_800D9BB4:
{
    r3 = 0;
}

loc_800D9BB8:
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
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800D9868(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800D9868_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800D9868 func_800D9868 preserves=true fpr_mask=0x00000000
