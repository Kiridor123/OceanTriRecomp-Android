#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80273A54(CpuContext* ctx);
extern "C" uint64_t func_80273A54_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027E648(CpuContext* ctx);
extern "C" uint64_t func_8027E648_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027E76C(CpuContext* ctx);
extern "C" uint64_t func_8027E76C_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80273B78_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_80273B78;

loc_80273B78:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r28 = r3;
    r24 = r4;
    r29 = r5;
    r25 = r6;
    r26 = r7;
    r27 = r8;
    r30 = r9;
    r0 = 0;
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r0));
    r31 = 0;
    r0 = (r4 + -6);
}

loc_80273BBC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(10))) {
        goto loc_80273BC8;
    }
}

loc_80273BC0:
{
}

loc_80273BC4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80273F1C;
    }
}

loc_80273BC8:
{
}

loc_80273BCC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80273C24;
    }
}

loc_80273BD0:
{
}

loc_80273BD4:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80273BF8;
    }
}

loc_80273BD8:
{
}

loc_80273BDC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(6))) {
        goto loc_80273BF8;
    }
}

loc_80273BE0:
{
    r0 = MemoryInline::FlatRead8(r7);
}

loc_80273BE8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80273BF8;
    }
}

loc_80273BEC:
{
    r3 = r26;
    ctx->lr = 0x80273BF4u;
    if constexpr (KnownRegArgsCpuCall<0x8027E648u>(&func_8027E648)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_8027E648_E79 = func_8027E648_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E648_E79);
        r4 = static_cast<uint32_t>(regargs_result_8027E648_E79 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8027E648u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r31 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_80273BF8:
{
}

loc_80273BFC:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80273F20;
    }
}

loc_80273C00:
{
}

loc_80273C04:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(0))) {
        goto loc_80273F20;
    }
}

loc_80273C08:
{
    r0 = MemoryInline::FlatRead8(r27);
}

loc_80273C10:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80273F20;
    }
}

loc_80273C14:
{
    r3 = r27;
    ctx->lr = 0x80273C1Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027E76Cu>(&func_8027E76C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027E76C_14EB = func_8027E76C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027E76C_14EB);
        r4 = static_cast<uint32_t>(regargs_result_8027E76C_14EB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027E76Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = (r31 + r3);
    goto loc_80273F20;
}

loc_80273C24:
{
    r3 = r25;
    r4 = (r1 + 12);
    r5 = (r1 + 8);
    ctx->lr = 0x80273C34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8027EE6Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
}

loc_80273C38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80273C48;
    }
}

loc_80273C3C:
{
}

loc_80273C40:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80273EA0;
    }
}

loc_80273C44:
{
    goto loc_80273F20;
}

loc_80273C48:
{
}

loc_80273C4C:
{
    if ((static_cast<uint32_t>(r24) > static_cast<uint32_t>(16))) {
        goto loc_80273E44;
    }
}

loc_80273C50:
{
    r3 = 0x805C0000u;
    r3 = (r3 + 26540);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80273C74u:
        goto loc_80273C74;
        break;
    case 0x80273E44u:
        goto loc_80273E44;
        break;
    case 0x80273C68u:
        goto loc_80273C68;
        break;
    case 0x80273C80u:
        goto loc_80273C80;
        break;
    case 0x80273CB0u:
        goto loc_80273CB0;
        break;
    case 0x80273CE0u:
        goto loc_80273CE0;
        break;
    case 0x80273D10u:
        goto loc_80273D10;
        break;
    case 0x80273D40u:
        goto loc_80273D40;
        break;
    case 0x80273D70u:
        goto loc_80273D70;
        break;
    case 0x80273DA0u:
        goto loc_80273DA0;
        break;
    case 0x80273DD0u:
        goto loc_80273DD0;
        break;
    case 0x80273E00u:
        goto loc_80273E00;
        break;
    case 0x80273E24u:
        goto loc_80273E24;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
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

loc_80273C68:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r31 = MemoryInline::FlatRead16((r3 + 10));
    r31 = (r31 << 16);
    r31 = (static_cast<int32_t>(r31) >> 16);
    goto loc_80273E44;
}

loc_80273C74:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r31 = MemoryInline::FlatRead8((r3 + 12));
    goto loc_80273E44;
}

loc_80273C80:
{
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead8((r4 + 14));
}

loc_80273C8C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80273E44;
    }
}

loc_80273C90:
{
    r3 = r28;
    r4 = MemoryInline::FlatRead8((r4 + 15));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r5 = 0;
    r6 = r30;
    ctx->lr = 0x80273CA8u;
    if constexpr (KnownRegArgsCpuCall<0x80273A54u>(&func_80273A54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80273A54_25EC = func_80273A54_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273A54_25EC);
        r4 = static_cast<uint32_t>(regargs_result_80273A54_25EC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80273A54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
    goto loc_80273E44;
}

loc_80273CB0:
{
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead8((r4 + 14));
}

loc_80273CBC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80273E44;
    }
}

loc_80273CC0:
{
    r3 = r28;
    r4 = MemoryInline::FlatRead8((r4 + 15));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r5 = 0;
    r6 = r30;
    ctx->lr = 0x80273CD8u;
    if constexpr (KnownRegArgsCpuCall<0x80273A54u>(&func_80273A54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80273A54_2AD4 = func_80273A54_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273A54_2AD4);
        r4 = static_cast<uint32_t>(regargs_result_80273A54_2AD4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80273A54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
    goto loc_80273E44;
}

loc_80273CE0:
{
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead8((r4 + 14));
}

loc_80273CEC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80273E44;
    }
}

loc_80273CF0:
{
    r3 = r28;
    r4 = MemoryInline::FlatRead8((r4 + 15));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r5 = 0;
    r6 = r30;
    ctx->lr = 0x80273D08u;
    if constexpr (KnownRegArgsCpuCall<0x80273A54u>(&func_80273A54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80273A54_2FBC = func_80273A54_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273A54_2FBC);
        r4 = static_cast<uint32_t>(regargs_result_80273A54_2FBC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80273A54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
    goto loc_80273E44;
}

loc_80273D10:
{
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead8((r4 + 14));
}

loc_80273D1C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_80273E44;
    }
}

loc_80273D20:
{
    r3 = r28;
    r4 = MemoryInline::FlatRead8((r4 + 15));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r5 = 0;
    r6 = r30;
    ctx->lr = 0x80273D38u;
    if constexpr (KnownRegArgsCpuCall<0x80273A54u>(&func_80273A54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80273A54_34A4 = func_80273A54_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273A54_34A4);
        r4 = static_cast<uint32_t>(regargs_result_80273A54_34A4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80273A54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
    goto loc_80273E44;
}

loc_80273D40:
{
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead8((r4 + 14));
}

loc_80273D4C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_80273E44;
    }
}

loc_80273D50:
{
    r3 = r28;
    r4 = MemoryInline::FlatRead8((r4 + 15));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r5 = 0;
    r6 = r30;
    ctx->lr = 0x80273D68u;
    if constexpr (KnownRegArgsCpuCall<0x80273A54u>(&func_80273A54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80273A54_398C = func_80273A54_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273A54_398C);
        r4 = static_cast<uint32_t>(regargs_result_80273A54_398C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80273A54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
    goto loc_80273E44;
}

loc_80273D70:
{
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead8((r4 + 16));
}

loc_80273D7C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80273E44;
    }
}

loc_80273D80:
{
    r3 = r28;
    r4 = MemoryInline::FlatRead8((r4 + 17));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r5 = 1;
    r6 = r30;
    ctx->lr = 0x80273D98u;
    if constexpr (KnownRegArgsCpuCall<0x80273A54u>(&func_80273A54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80273A54_3E74 = func_80273A54_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273A54_3E74);
        r4 = static_cast<uint32_t>(regargs_result_80273A54_3E74 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80273A54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
    goto loc_80273E44;
}

loc_80273DA0:
{
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead8((r4 + 16));
}

loc_80273DAC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80273E44;
    }
}

loc_80273DB0:
{
    r3 = r28;
    r4 = MemoryInline::FlatRead8((r4 + 17));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r5 = 1;
    r6 = r30;
    ctx->lr = 0x80273DC8u;
    if constexpr (KnownRegArgsCpuCall<0x80273A54u>(&func_80273A54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80273A54_435C = func_80273A54_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273A54_435C);
        r4 = static_cast<uint32_t>(regargs_result_80273A54_435C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80273A54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
    goto loc_80273E44;
}

loc_80273DD0:
{
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead8((r4 + 16));
}

loc_80273DDC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80273E44;
    }
}

loc_80273DE0:
{
    r3 = r28;
    r4 = MemoryInline::FlatRead8((r4 + 17));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r5 = 1;
    r6 = r30;
    ctx->lr = 0x80273DF8u;
    if constexpr (KnownRegArgsCpuCall<0x80273A54u>(&func_80273A54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80273A54_4844 = func_80273A54_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273A54_4844);
        r4 = static_cast<uint32_t>(regargs_result_80273A54_4844 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80273A54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
    goto loc_80273E44;
}

loc_80273E00:
{
    r3 = r28;
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r4 = MemoryInline::FlatRead8((r4 + 15));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r5 = 0;
    r6 = r30;
    ctx->lr = 0x80273E1Cu;
    if constexpr (KnownRegArgsCpuCall<0x80273A54u>(&func_80273A54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80273A54_4C69 = func_80273A54_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273A54_4C69);
        r4 = static_cast<uint32_t>(regargs_result_80273A54_4C69 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80273A54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
    goto loc_80273E44;
}

loc_80273E24:
{
    r3 = r28;
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r4 = MemoryInline::FlatRead8((r4 + 17));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r5 = 1;
    r6 = r30;
    ctx->lr = 0x80273E40u;
    if constexpr (KnownRegArgsCpuCall<0x80273A54u>(&func_80273A54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80273A54_508E = func_80273A54_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273A54_508E);
        r4 = static_cast<uint32_t>(regargs_result_80273A54_508E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80273A54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
}

loc_80273E44:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_80273E4C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80273F20;
    }
}

loc_80273E50:
{
    r3 = r28;
    r4 = 201;
    ctx->lr = 0x80273E5Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80273E60:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80273E7C;
    }
}

loc_80273E64:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r0 = (r31 - r0);
    r31 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_80273F20;
}

loc_80273E7C:
{
    r0 = (r29 & 255);
}

loc_80273E84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80273E90;
    }
}

loc_80273E88:
{
    r31 = 0;
    goto loc_80273F20;
}

loc_80273E90:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r0 = (r31 - r0);
    r31 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_80273F20;
}

loc_80273EA0:
{
}

loc_80273EA4:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(6))) {
        goto loc_80273EB4;
    }
}

loc_80273EA8:
{
}

loc_80273EAC:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_80273EE4;
    }
}

loc_80273EB0:
{
    goto loc_80273F14;
}

loc_80273EB4:
{
    r3 = r25;
    ctx->lr = 0x80273EBCu;
    if constexpr (KnownRegArgsCpuCall<0x8027E648u>(&func_8027E648)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_8027E648_5A94 = func_8027E648_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E648_5A94);
        r4 = static_cast<uint32_t>(regargs_result_8027E648_5A94 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8027E648u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r31 = r3;
}

loc_80273EC4:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_80273F20;
    }
}

loc_80273EC8:
{
    r0 = MemoryInline::FlatRead8(r26);
}

loc_80273ED0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80273F20;
    }
}

loc_80273ED4:
{
    r3 = r26;
    ctx->lr = 0x80273EDCu;
    if constexpr (KnownRegArgsCpuCall<0x8027E648u>(&func_8027E648)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_8027E648_6064 = func_8027E648_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E648_6064);
        r4 = static_cast<uint32_t>(regargs_result_8027E648_6064 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8027E648u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r31 = (r31 + r3);
    goto loc_80273F20;
}

loc_80273EE4:
{
    r3 = r25;
    ctx->lr = 0x80273EECu;
    if constexpr (KnownRegArgsCpuCall<0x8027E76Cu>(&func_8027E76C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027E76C_64E5 = func_8027E76C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027E76C_64E5);
        r4 = static_cast<uint32_t>(regargs_result_8027E76C_64E5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027E76Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
}

loc_80273EF4:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80273F20;
    }
}

loc_80273EF8:
{
    r0 = MemoryInline::FlatRead8(r27);
}

loc_80273F00:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80273F20;
    }
}

loc_80273F04:
{
    r3 = r27;
    ctx->lr = 0x80273F0Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027E76Cu>(&func_8027E76C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027E76C_691F = func_8027E76C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027E76C_691F);
        r4 = static_cast<uint32_t>(regargs_result_8027E76C_691F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027E76Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = (r31 + r3);
    goto loc_80273F20;
}

loc_80273F14:
{
    r31 = 0;
    goto loc_80273F20;
}

loc_80273F1C:
{
    r31 = 0;
}

loc_80273F20:
{
    r3 = r31;
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
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

extern "C" void func_80273B78(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80273B78_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80273B78 func_80273B78 preserves=true fpr_mask=0x00000000
