#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80341FF8(CpuContext* ctx);
extern "C" uint64_t func_80341FF8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80342568(CpuContext* ctx);
extern "C" uint64_t func_80342568_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803423C0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x803423C0u);
    goto loc_803423C0;

loc_803423C0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r4;
    r31 = MemoryInline::FlatRead32((r3 + 56));
    ctx->lr = 0x803423E0u;
    if constexpr (KnownRegArgsCpuCall<0x80341FF8u>(&func_80341FF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80341FF8_5ED = func_80341FF8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80341FF8_5ED);
        r4 = static_cast<uint32_t>(regargs_result_80341FF8_5ED >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80341FF8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 + -207);
}

loc_803423E8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(26))) {
        goto loc_8034253C;
    }
}

loc_803423EC:
{
    r3 = 0x805F0000u;
    r3 = (r3 + -32304);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80342404u:
        goto loc_80342404;
        break;
    case 0x80342434u:
        goto loc_80342434;
        break;
    case 0x8034241Cu:
        goto loc_8034241C;
        break;
    case 0x80342464u:
        goto loc_80342464;
        break;
    case 0x8034247Cu:
        goto loc_8034247C;
        break;
    case 0x803424ACu:
        goto loc_803424AC;
        break;
    case 0x803424C4u:
        goto loc_803424C4;
        break;
    case 0x8034244Cu:
        goto loc_8034244C;
        break;
    case 0x80342494u:
        goto loc_80342494;
        break;
    case 0x803424F4u:
        goto loc_803424F4;
        break;
    case 0x803424DCu:
        goto loc_803424DC;
        break;
    case 0x8034253Cu:
        goto loc_8034253C;
        break;
    case 0x8034250Cu:
        goto loc_8034250C;
        break;
    case 0x80342524u:
        goto loc_80342524;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80342404:
{
    r3 = r30;
    r4 = 1;
    ctx->lr = 0x80342410u;
    if constexpr (KnownRegArgsCpuCall<0x80342568u>(&func_80342568)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80342568_FB2 = func_80342568_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80342568_FB2);
        r4 = static_cast<uint32_t>(regargs_result_80342568_FB2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80342568u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 88), static_cast<uint8_t>(r0));
    goto loc_80342550;
}

loc_8034241C:
{
    r3 = r30;
    r4 = 4;
    ctx->lr = 0x80342428u;
    if constexpr (KnownRegArgsCpuCall<0x80342568u>(&func_80342568)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80342568_1350 = func_80342568_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80342568_1350);
        r4 = static_cast<uint32_t>(regargs_result_80342568_1350 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80342568u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 4;
    MemoryInline::FlatWrite8((r31 + 88), static_cast<uint8_t>(r0));
    goto loc_80342550;
}

loc_80342434:
{
    r3 = r30;
    r4 = 2;
    ctx->lr = 0x80342440u;
    if constexpr (KnownRegArgsCpuCall<0x80342568u>(&func_80342568)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80342568_16F1 = func_80342568_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80342568_16F1);
        r4 = static_cast<uint32_t>(regargs_result_80342568_16F1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80342568u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 88), static_cast<uint8_t>(r0));
    goto loc_80342550;
}

loc_8034244C:
{
    r3 = r30;
    r4 = 10;
    ctx->lr = 0x80342458u;
    if constexpr (KnownRegArgsCpuCall<0x80342568u>(&func_80342568)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80342568_1A93 = func_80342568_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80342568_1A93);
        r4 = static_cast<uint32_t>(regargs_result_80342568_1A93 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80342568u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 10;
    MemoryInline::FlatWrite8((r31 + 88), static_cast<uint8_t>(r0));
    goto loc_80342550;
}

loc_80342464:
{
    r3 = r30;
    r4 = 3;
    ctx->lr = 0x80342470u;
    if constexpr (KnownRegArgsCpuCall<0x80342568u>(&func_80342568)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80342568_1E35 = func_80342568_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80342568_1E35);
        r4 = static_cast<uint32_t>(regargs_result_80342568_1E35 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80342568u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 3;
    MemoryInline::FlatWrite8((r31 + 88), static_cast<uint8_t>(r0));
    goto loc_80342550;
}

loc_8034247C:
{
    r3 = r30;
    r4 = 8;
    ctx->lr = 0x80342488u;
    if constexpr (KnownRegArgsCpuCall<0x80342568u>(&func_80342568)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80342568_21D6 = func_80342568_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80342568_21D6);
        r4 = static_cast<uint32_t>(regargs_result_80342568_21D6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80342568u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 8;
    MemoryInline::FlatWrite8((r31 + 88), static_cast<uint8_t>(r0));
    goto loc_80342550;
}

loc_80342494:
{
    r3 = r30;
    r4 = 9;
    ctx->lr = 0x803424A0u;
    if constexpr (KnownRegArgsCpuCall<0x80342568u>(&func_80342568)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80342568_2577 = func_80342568_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80342568_2577);
        r4 = static_cast<uint32_t>(regargs_result_80342568_2577 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80342568u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 9;
    MemoryInline::FlatWrite8((r31 + 88), static_cast<uint8_t>(r0));
    goto loc_80342550;
}

loc_803424AC:
{
    r3 = r30;
    r4 = 5;
    ctx->lr = 0x803424B8u;
    if constexpr (KnownRegArgsCpuCall<0x80342568u>(&func_80342568)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80342568_2918 = func_80342568_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80342568_2918);
        r4 = static_cast<uint32_t>(regargs_result_80342568_2918 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80342568u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 5;
    MemoryInline::FlatWrite8((r31 + 88), static_cast<uint8_t>(r0));
    goto loc_80342550;
}

loc_803424C4:
{
    r3 = r30;
    r4 = 6;
    ctx->lr = 0x803424D0u;
    if constexpr (KnownRegArgsCpuCall<0x80342568u>(&func_80342568)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80342568_2CB9 = func_80342568_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80342568_2CB9);
        r4 = static_cast<uint32_t>(regargs_result_80342568_2CB9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80342568u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 6;
    MemoryInline::FlatWrite8((r31 + 88), static_cast<uint8_t>(r0));
    goto loc_80342550;
}

loc_803424DC:
{
    r3 = r30;
    r4 = 7;
    ctx->lr = 0x803424E8u;
    if constexpr (KnownRegArgsCpuCall<0x80342568u>(&func_80342568)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80342568_305A = func_80342568_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80342568_305A);
        r4 = static_cast<uint32_t>(regargs_result_80342568_305A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80342568u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 7;
    MemoryInline::FlatWrite8((r31 + 88), static_cast<uint8_t>(r0));
    goto loc_80342550;
}

loc_803424F4:
{
    r3 = r30;
    r4 = 7;
    ctx->lr = 0x80342500u;
    if constexpr (KnownRegArgsCpuCall<0x80342568u>(&func_80342568)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80342568_33FB = func_80342568_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80342568_33FB);
        r4 = static_cast<uint32_t>(regargs_result_80342568_33FB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80342568u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 11;
    MemoryInline::FlatWrite8((r31 + 88), static_cast<uint8_t>(r0));
    goto loc_80342550;
}

loc_8034250C:
{
    r3 = r30;
    r4 = 12;
    ctx->lr = 0x80342518u;
    if constexpr (KnownRegArgsCpuCall<0x80342568u>(&func_80342568)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80342568_379E = func_80342568_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80342568_379E);
        r4 = static_cast<uint32_t>(regargs_result_80342568_379E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80342568u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 12;
    MemoryInline::FlatWrite8((r31 + 88), static_cast<uint8_t>(r0));
    goto loc_80342550;
}

loc_80342524:
{
    r3 = r30;
    r4 = 11;
    ctx->lr = 0x80342530u;
    if constexpr (KnownRegArgsCpuCall<0x80342568u>(&func_80342568)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80342568_3B41 = func_80342568_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80342568_3B41);
        r4 = static_cast<uint32_t>(regargs_result_80342568_3B41 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80342568u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 13;
    MemoryInline::FlatWrite8((r31 + 88), static_cast<uint8_t>(r0));
    goto loc_80342550;
}

loc_8034253C:
{
    r3 = r30;
    r4 = 1;
    ctx->lr = 0x80342548u;
    if constexpr (KnownRegArgsCpuCall<0x80342568u>(&func_80342568)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80342568_3EE3 = func_80342568_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80342568_3EE3);
        r4 = static_cast<uint32_t>(regargs_result_80342568_3EE3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80342568u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 88), static_cast<uint8_t>(r0));
}

loc_80342550:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803423C0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803423C0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803423C0 func_803423C0 preserves=true fpr_mask=0x00000000
