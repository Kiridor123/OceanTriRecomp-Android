#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80396C7C(CpuContext* ctx);
extern "C" uint32_t func_80396C7C_ra0_0_8_0(CpuContext*);
extern "C" void func_80396F38(CpuContext* ctx);
extern "C" uint32_t func_80396F38_ra0_0_8_0(CpuContext*);
extern "C" void func_80396F68(CpuContext* ctx);
extern "C" uint32_t func_80396F68_ra0_0_8_0(CpuContext*);

extern "C" uint64_t func_80396F98_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_80396F98;

loc_80396F98:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    // inline leaf 0x8004D1A4 (3 guest instruction(s))
    r3 = 0x80670000u;
    r3 = (r3 + -14744);
    // end of inlined leaf 0x8004D1A4
    r0 = (r31 & 255);
}

loc_80396FC0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(8))) {
        goto loc_80397144;
    }
}

loc_80396FC4:
{
    r4 = 0x805F0000u;
    r4 = (r4 + 7768);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80396FDCu:
        goto loc_80396FDC;
        break;
    case 0x80396FE4u:
        goto loc_80396FE4;
        break;
    case 0x80397014u:
        goto loc_80397014;
        break;
    case 0x8039705Cu:
        goto loc_8039705C;
        break;
    case 0x80397144u:
        goto loc_80397144;
        break;
    case 0x80397088u:
        goto loc_80397088;
        break;
    case 0x803970A0u:
        goto loc_803970A0;
        break;
    case 0x803970E4u:
        goto loc_803970E4;
        break;
    case 0x80397128u:
        goto loc_80397128;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80396FDC:
{
    r3 = 0;
    goto loc_80397148;
}

loc_80396FE4:
{
    r3 = r30;
    ctx->lr = 0x80396FECu;
    if constexpr (KnownRegArgsCpuCall<0x80396F38u>(&func_80396F38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80396F38_C9A = func_80396F38_ra0_0_8_0(ctx);
        r3 = regargs_result_80396F38_C9A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80396F38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80396FF0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80396FFC;
    }
}

loc_80396FF4:
{
    r3 = 0;
    goto loc_80397148;
}

loc_80396FFC:
{
    r3 = r30;
    ctx->lr = 0x80397004u;
    if constexpr (KnownRegArgsCpuCall<0x80396F68u>(&func_80396F68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80396F68_FA7 = func_80396F68_ra0_0_8_0(ctx);
        r3 = regargs_result_80396F68_FA7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80396F68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80397008:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80397144;
    }
}

loc_8039700C:
{
    r3 = 0;
    goto loc_80397148;
}

loc_80397014:
{
    r3 = r30;
    ctx->lr = 0x8039701Cu;
    if constexpr (KnownRegArgsCpuCall<0x80396F38u>(&func_80396F38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80396F38_12B4 = func_80396F38_ra0_0_8_0(ctx);
        r3 = regargs_result_80396F38_12B4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80396F38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80397020:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8039702C;
    }
}

loc_80397024:
{
    r3 = 0;
    goto loc_80397148;
}

loc_8039702C:
{
    r3 = r30;
    // inline leaf 0x80396CAC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 12384));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80396CAC
}

loc_80397038:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80397044;
    }
}

loc_8039703C:
{
    r3 = 0;
    goto loc_80397148;
}

loc_80397044:
{
    r3 = r30;
    ctx->lr = 0x8039704Cu;
    if constexpr (KnownRegArgsCpuCall<0x80396F68u>(&func_80396F68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80396F68_17CA = func_80396F68_ra0_0_8_0(ctx);
        r3 = regargs_result_80396F68_17CA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80396F68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80397050:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80397144;
    }
}

loc_80397054:
{
    r3 = 0;
    goto loc_80397148;
}

loc_8039705C:
{
    r0 = MemoryInline::FlatRead8((r3 + 932));
}

loc_80397064:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80397070;
    }
}

loc_80397068:
{
    r3 = 0;
    goto loc_80397148;
}

loc_80397070:
{
    r3 = r30;
    ctx->lr = 0x80397078u;
    if constexpr (KnownRegArgsCpuCall<0x80396F68u>(&func_80396F68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80396F68_1BD7 = func_80396F68_ra0_0_8_0(ctx);
        r3 = regargs_result_80396F68_1BD7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80396F68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8039707C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80397144;
    }
}

loc_80397080:
{
    r3 = 0;
    goto loc_80397148;
}

loc_80397088:
{
    r3 = r30;
    ctx->lr = 0x80397090u;
    if constexpr (KnownRegArgsCpuCall<0x80396F68u>(&func_80396F68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80396F68_1EE6 = func_80396F68_ra0_0_8_0(ctx);
        r3 = regargs_result_80396F68_1EE6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80396F68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80397094:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80397144;
    }
}

loc_80397098:
{
    r3 = 0;
    goto loc_80397148;
}

loc_803970A0:
{
    r0 = MemoryInline::FlatRead16((r3 + 480));
}

loc_803970A8:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(10000))) {
        goto loc_803970B4;
    }
}

loc_803970AC:
{
    r3 = 0;
    goto loc_80397148;
}

loc_803970B4:
{
    r3 = r30;
    ctx->lr = 0x803970BCu;
    if constexpr (KnownRegArgsCpuCall<0x80396F68u>(&func_80396F68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80396F68_22FA = func_80396F68_ra0_0_8_0(ctx);
        r3 = regargs_result_80396F68_22FA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80396F68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_803970C0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803970CC;
    }
}

loc_803970C4:
{
    r3 = 0;
    goto loc_80397148;
}

loc_803970CC:
{
    r3 = r30;
    ctx->lr = 0x803970D4u;
    if constexpr (KnownRegArgsCpuCall<0x80396C7Cu>(&func_80396C7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_80396C7C_2624 = func_80396C7C_ra0_0_8_0(ctx);
        r3 = regargs_result_80396C7C_2624;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80396C7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803970D8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80397144;
    }
}

loc_803970DC:
{
    r3 = 0;
    goto loc_80397148;
}

loc_803970E4:
{
    r0 = MemoryInline::FlatRead32((r30 + 256));
}

loc_803970EC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_803970F8;
    }
}

loc_803970F0:
{
    r3 = 0;
    goto loc_80397148;
}

loc_803970F8:
{
    r3 = r30;
    ctx->lr = 0x80397100u;
    if constexpr (KnownRegArgsCpuCall<0x80396F68u>(&func_80396F68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80396F68_2A83 = func_80396F68_ra0_0_8_0(ctx);
        r3 = regargs_result_80396F68_2A83;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80396F68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80397104:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80397110;
    }
}

loc_80397108:
{
    r3 = 0;
    goto loc_80397148;
}

loc_80397110:
{
    r3 = r30;
    ctx->lr = 0x80397118u;
    if constexpr (KnownRegArgsCpuCall<0x80396C7Cu>(&func_80396C7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_80396C7C_2DAD = func_80396C7C_ra0_0_8_0(ctx);
        r3 = regargs_result_80396C7C_2DAD;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80396C7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8039711C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80397144;
    }
}

loc_80397120:
{
    r3 = 0;
    goto loc_80397148;
}

loc_80397128:
{
    r3 = r30;
    // inline leaf 0x80396D08 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 12398));
    // end of inlined leaf 0x80396D08
    r0 = (r3 & 255);
}

loc_80397138:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80397144;
    }
}

loc_8039713C:
{
    r3 = 0;
    goto loc_80397148;
}

loc_80397144:
{
    r3 = 1;
}

loc_80397148:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->ctr = ctr;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80396F98(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80396F98_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80396F98 func_80396F98 preserves=true fpr_mask=0x00000000
