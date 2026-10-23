#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF2E4(CpuContext* ctx);
extern "C" uint32_t func_800CF2E4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B2DB4(CpuContext* ctx);
extern "C" uint64_t func_803B2DB4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803B60DC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_803B60DC;

loc_803B60DC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r30 = r4;
    ctx->lr = 0x803B60FCu;
    if constexpr (KnownRegArgsCpuCall<0x800CF2E4u>(&func_800CF2E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800CF2E4_483 = func_800CF2E4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800CF2E4_483;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CF2E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803B6100:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B6120;
    }
}

loc_803B6104:
{
}

loc_803B6108:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_803B6120;
    }
}

loc_803B610C:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    r3 = 0;
    goto loc_803B619C;
}

loc_803B6120:
{
    r3 = 0x806C0000u;
    r3 = (r3 + 31960);
    r0 = (r31 & 65535);
    r0 = (r0 * 96);
    r31 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r31 + 148));
    r0 = (r0 & 10);
}

loc_803B613C:
{
}

loc_803B6140:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_803B6184;
    }
}

loc_803B6144:
{
}

loc_803B6148:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_803B617C;
    }
}

loc_803B614C:
{
    r0 = MemoryInline::FlatRead16((r31 + 152));
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r31 + 152));
    r4 = 0;
    ctx->lr = 0x803B6160u;
    if constexpr (KnownRegArgsCpuCall<0x803B2DB4u>(&func_803B2DB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B2DB4_BA6 = func_803B2DB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803B2DB4_BA6);
        r4 = static_cast<uint32_t>(regargs_result_803B2DB4_BA6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803B2DB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead16((r31 + 154));
    r0 = (r0 - r3);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_803B6170:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_803B6178;
    }
}

loc_803B6174:
{
    r0 = 0;
}

loc_803B6178:
{
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
}

loc_803B617C:
{
    r3 = MemoryInline::FlatRead16((r31 + 152));
    goto loc_803B619C;
}

loc_803B6184:
{
}

loc_803B6188:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_803B6198;
    }
}

loc_803B618C:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
}

loc_803B6198:
{
    r3 = 0;
}

loc_803B619C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803B60DC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B60DC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803B60DC func_803B60DC preserves=true fpr_mask=0x00000000
