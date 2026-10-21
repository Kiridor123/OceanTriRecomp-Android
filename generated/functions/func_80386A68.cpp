#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012ECA0(CpuContext* ctx);
extern "C" uint64_t func_8012ECA0_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80386A68_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80386A68u);
    goto loc_80386A68;

loc_80386A68:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r5;
    r0 = MemoryInline::FlatRead8(r4);
}

loc_80386A84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_80386CEC;
    }
}

loc_80386A88:
{
    r0 = MemoryInline::FlatRead8(r5);
}

loc_80386A90:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(68))) {
        goto loc_80386CEC;
    }
}

loc_80386A94:
{
    r4 = 0x805F0000u;
    r4 = (r4 + 644);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80386CECu:
        goto loc_80386CEC;
        break;
    case 0x80386AACu:
        goto loc_80386AAC;
        break;
    case 0x80386AC8u:
        goto loc_80386AC8;
        break;
    case 0x80386AE0u:
        goto loc_80386AE0;
        break;
    case 0x80386AF8u:
        goto loc_80386AF8;
        break;
    case 0x80386B10u:
        goto loc_80386B10;
        break;
    case 0x80386B28u:
        goto loc_80386B28;
        break;
    case 0x80386B40u:
        goto loc_80386B40;
        break;
    case 0x80386B58u:
        goto loc_80386B58;
        break;
    case 0x80386B70u:
        goto loc_80386B70;
        break;
    case 0x80386B88u:
        goto loc_80386B88;
        break;
    case 0x80386BA0u:
        goto loc_80386BA0;
        break;
    case 0x80386BB8u:
        goto loc_80386BB8;
        break;
    case 0x80386BD0u:
        goto loc_80386BD0;
        break;
    case 0x80386BE8u:
        goto loc_80386BE8;
        break;
    case 0x80386C00u:
        goto loc_80386C00;
        break;
    case 0x80386C18u:
        goto loc_80386C18;
        break;
    case 0x80386C30u:
        goto loc_80386C30;
        break;
    case 0x80386C48u:
        goto loc_80386C48;
        break;
    case 0x80386C60u:
        goto loc_80386C60;
        break;
    case 0x80386C78u:
        goto loc_80386C78;
        break;
    case 0x80386C90u:
        goto loc_80386C90;
        break;
    case 0x80386CA8u:
        goto loc_80386CA8;
        break;
    case 0x80386CC0u:
        goto loc_80386CC0;
        break;
    case 0x80386CD8u:
        goto loc_80386CD8;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80386AAC:
{
    r0 = MemoryInline::FlatRead16((r3 + 2102));
    r0 = (r0 & 1);
}

loc_80386AB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80386CEC;
    }
}

loc_80386ABC:
{
    r0 = 67;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    goto loc_80386CEC;
}

loc_80386AC8:
{
    // inline leaf 0x8012ECA0 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2207));
    r4 = (r3 + -2);
    r3 = 1;
    r0 = (1 - r4);
    r3 = (r3 | ~r4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8012ECA0
}

loc_80386AD0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80386CEC;
    }
}

loc_80386AD4:
{
    r0 = 7;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80386CEC;
}

loc_80386AE0:
{
    // inline leaf 0x8012ECA0 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2207));
    r4 = (r3 + -2);
    r3 = 1;
    r0 = (1 - r4);
    r3 = (r3 | ~r4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_3 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x8012ECA0
}

loc_80386AE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80386CEC;
    }
}

loc_80386AEC:
{
    r0 = 15;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80386CEC;
}

loc_80386AF8:
{
    // inline leaf 0x8012ECA0 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2207));
    r4 = (r3 + -2);
    r3 = 1;
    r0 = (1 - r4);
    r3 = (r3 | ~r4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_4 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x8012ECA0
}

loc_80386B00:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80386CEC;
    }
}

loc_80386B04:
{
    r0 = 16;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80386CEC;
}

loc_80386B10:
{
    // inline leaf 0x8012ECA0 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2207));
    r4 = (r3 + -2);
    r3 = 1;
    r0 = (1 - r4);
    r3 = (r3 | ~r4);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x8012ECA0
}

loc_80386B18:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80386CEC;
    }
}

loc_80386B1C:
{
    r0 = 19;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80386CEC;
}

loc_80386B28:
{
    // inline leaf 0x8012ECA0 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2207));
    r4 = (r3 + -2);
    r3 = 1;
    r0 = (1 - r4);
    r3 = (r3 | ~r4);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_6 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x8012ECA0
}

loc_80386B30:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80386CEC;
    }
}

loc_80386B34:
{
    r0 = 20;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80386CEC;
}

loc_80386B40:
{
    // inline leaf 0x8012ECA0 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2207));
    r4 = (r3 + -2);
    r3 = 1;
    r0 = (1 - r4);
    r3 = (r3 | ~r4);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_7 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    // end of inlined leaf 0x8012ECA0
}

loc_80386B48:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80386CEC;
    }
}

loc_80386B4C:
{
    r0 = 23;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80386CEC;
}

loc_80386B58:
{
    // inline leaf 0x8012ECA0 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2207));
    r4 = (r3 + -2);
    r3 = 1;
    r0 = (1 - r4);
    r3 = (r3 | ~r4);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_8 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_7 & 1);
    // end of inlined leaf 0x8012ECA0
}

loc_80386B60:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80386CEC;
    }
}

loc_80386B64:
{
    r0 = 24;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80386CEC;
}

loc_80386B70:
{
    // inline leaf 0x8012ECA0 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2207));
    r4 = (r3 + -2);
    r3 = 1;
    r0 = (1 - r4);
    r3 = (r3 | ~r4);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_9 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & 1);
    // end of inlined leaf 0x8012ECA0
}

loc_80386B78:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80386CEC;
    }
}

loc_80386B7C:
{
    r0 = 27;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80386CEC;
}

loc_80386B88:
{
    if constexpr (KnownRegArgsCpuCall<0x8012ECA0u>(&func_8012ECA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012ECA0_2800 = func_8012ECA0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8012ECA0_2800);
        r4 = static_cast<uint32_t>(regargs_result_8012ECA0_2800 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012ECA0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80386B90:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80386CEC;
    }
}

loc_80386B94:
{
    r0 = 28;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80386CEC;
}

loc_80386BA0:
{
    if constexpr (KnownRegArgsCpuCall<0x8012ECA0u>(&func_8012ECA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012ECA0_2B65 = func_8012ECA0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8012ECA0_2B65);
        r4 = static_cast<uint32_t>(regargs_result_8012ECA0_2B65 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012ECA0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80386BA8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80386CEC;
    }
}

loc_80386BAC:
{
    r0 = 35;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80386CEC;
}

loc_80386BB8:
{
    if constexpr (KnownRegArgsCpuCall<0x8012ECA0u>(&func_8012ECA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012ECA0_2ECA = func_8012ECA0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8012ECA0_2ECA);
        r4 = static_cast<uint32_t>(regargs_result_8012ECA0_2ECA >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012ECA0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80386BC0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80386CEC;
    }
}

loc_80386BC4:
{
    r0 = 44;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80386CEC;
}

loc_80386BD0:
{
    if constexpr (KnownRegArgsCpuCall<0x8012ECA0u>(&func_8012ECA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012ECA0_322F = func_8012ECA0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8012ECA0_322F);
        r4 = static_cast<uint32_t>(regargs_result_8012ECA0_322F >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012ECA0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80386BD8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80386CEC;
    }
}

loc_80386BDC:
{
    r0 = 46;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80386CEC;
}

loc_80386BE8:
{
    if constexpr (KnownRegArgsCpuCall<0x8012ECA0u>(&func_8012ECA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012ECA0_3594 = func_8012ECA0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8012ECA0_3594);
        r4 = static_cast<uint32_t>(regargs_result_8012ECA0_3594 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012ECA0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80386BF0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80386CEC;
    }
}

loc_80386BF4:
{
    r0 = 48;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80386CEC;
}

loc_80386C00:
{
    if constexpr (KnownRegArgsCpuCall<0x8012ECA0u>(&func_8012ECA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012ECA0_38F9 = func_8012ECA0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8012ECA0_38F9);
        r4 = static_cast<uint32_t>(regargs_result_8012ECA0_38F9 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012ECA0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80386C08:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80386CEC;
    }
}

loc_80386C0C:
{
    r0 = 50;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80386CEC;
}

loc_80386C18:
{
    if constexpr (KnownRegArgsCpuCall<0x8012ECA0u>(&func_8012ECA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012ECA0_3C5E = func_8012ECA0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8012ECA0_3C5E);
        r4 = static_cast<uint32_t>(regargs_result_8012ECA0_3C5E >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012ECA0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80386C20:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80386CEC;
    }
}

loc_80386C24:
{
    r0 = 52;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80386CEC;
}

loc_80386C30:
{
    if constexpr (KnownRegArgsCpuCall<0x8012ECA0u>(&func_8012ECA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012ECA0_3FC3 = func_8012ECA0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8012ECA0_3FC3);
        r4 = static_cast<uint32_t>(regargs_result_8012ECA0_3FC3 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012ECA0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80386C38:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80386CEC;
    }
}

loc_80386C3C:
{
    r0 = 54;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80386CEC;
}

loc_80386C48:
{
    if constexpr (KnownRegArgsCpuCall<0x8012ECA0u>(&func_8012ECA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012ECA0_4328 = func_8012ECA0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8012ECA0_4328);
        r4 = static_cast<uint32_t>(regargs_result_8012ECA0_4328 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012ECA0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80386C50:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80386CEC;
    }
}

loc_80386C54:
{
    r0 = 56;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80386CEC;
}

loc_80386C60:
{
    if constexpr (KnownRegArgsCpuCall<0x8012ECA0u>(&func_8012ECA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012ECA0_468D = func_8012ECA0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8012ECA0_468D);
        r4 = static_cast<uint32_t>(regargs_result_8012ECA0_468D >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012ECA0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80386C68:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80386CEC;
    }
}

loc_80386C6C:
{
    r0 = 58;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80386CEC;
}

loc_80386C78:
{
    if constexpr (KnownRegArgsCpuCall<0x8012ECA0u>(&func_8012ECA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012ECA0_49F2 = func_8012ECA0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8012ECA0_49F2);
        r4 = static_cast<uint32_t>(regargs_result_8012ECA0_49F2 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012ECA0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80386C80:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80386CEC;
    }
}

loc_80386C84:
{
    r0 = 60;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80386CEC;
}

loc_80386C90:
{
    if constexpr (KnownRegArgsCpuCall<0x8012ECA0u>(&func_8012ECA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012ECA0_4D57 = func_8012ECA0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8012ECA0_4D57);
        r4 = static_cast<uint32_t>(regargs_result_8012ECA0_4D57 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012ECA0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80386C98:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80386CEC;
    }
}

loc_80386C9C:
{
    r0 = 62;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80386CEC;
}

loc_80386CA8:
{
    if constexpr (KnownRegArgsCpuCall<0x8012ECA0u>(&func_8012ECA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012ECA0_50BC = func_8012ECA0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8012ECA0_50BC);
        r4 = static_cast<uint32_t>(regargs_result_8012ECA0_50BC >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012ECA0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80386CB0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80386CEC;
    }
}

loc_80386CB4:
{
    r0 = 64;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80386CEC;
}

loc_80386CC0:
{
    if constexpr (KnownRegArgsCpuCall<0x8012ECA0u>(&func_8012ECA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012ECA0_5421 = func_8012ECA0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8012ECA0_5421);
        r4 = static_cast<uint32_t>(regargs_result_8012ECA0_5421 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012ECA0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80386CC8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80386CEC;
    }
}

loc_80386CCC:
{
    r0 = 66;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_80386CEC;
}

loc_80386CD8:
{
    if constexpr (KnownRegArgsCpuCall<0x8012ECA0u>(&func_8012ECA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012ECA0_5786 = func_8012ECA0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8012ECA0_5786);
        r4 = static_cast<uint32_t>(regargs_result_8012ECA0_5786 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012ECA0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80386CE0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80386CEC;
    }
}

loc_80386CE4:
{
    r0 = 69;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
}

loc_80386CEC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->ctr = ctr;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80386A68(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80386A68_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80386A68 func_80386A68 preserves=true fpr_mask=0x00000000
