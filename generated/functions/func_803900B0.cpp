#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004B108(CpuContext* ctx);
extern "C" uint64_t func_8004B108_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803595CC(CpuContext* ctx);
extern "C" uint64_t func_803595CC_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8038FFD4(CpuContext* ctx);
extern "C" uint32_t func_8038FFD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803900B0_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x803900B0u);
    goto loc_803900B0;

loc_803900B0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r28 = r3;
    r3 = (r3 + 75);
    r4 = 0;
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r28 + 20), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r28 + 22), static_cast<uint16_t>(r0));
    r3 = (r28 + 96);
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r29 = 0;
    r31 = (r13 + -23096);
    r30 = r28;
}

loc_8039010C:
{
    r3 = MemoryInline::FlatRead16(r31);
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x80390118u;
    if constexpr (KnownRegArgsCpuCall<0x8004B108u>(&func_8004B108)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8004B108_8BB = func_8004B108_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8004B108_8BB);
        r4 = static_cast<uint32_t>(regargs_result_8004B108_8BB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8004B108u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8039011C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8039012C;
    }
}

loc_80390120:
{
    r0 = MemoryInline::FlatRead16(r31);
    MemoryInline::FlatWrite16((r30 + 96), static_cast<uint16_t>(r0));
    r30 = (r30 + 2);
}

loc_8039012C:
{
    r31 = (r31 + 2);
    r29 = (r29 + 1);
}

loc_80390138:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(2))) {
        goto loc_8039010C;
    }
}

loc_8039013C:
{
    r3 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 25u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 8), r3);
    r0 = 364;
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r1 + 12), static_cast<uint16_t>(r0));
    r0 = -1;
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r1 + 14), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r1 + 18), static_cast<uint16_t>(r0));
    r0 = 365;
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r1 + 16), static_cast<uint16_t>(r0));
    r0 = 5095;
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 14u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r1 + 22), r0);
        MemoryInline::WriteResolved16(guest_range_0, 16u, (r1 + 24), r3);
    }
    r0 = 2;
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r1 + 20), static_cast<uint16_t>(r0));
    r0 = (r28 + 96);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 28), r0);
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r1 + 32), static_cast<uint8_t>(r3));
    r3 = (r1 + 8);
    r4 = 1;
    ctx->lr = 0x8039018Cu;
    if constexpr (KnownRegArgsCpuCall<0x803595CCu>(&func_803595CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_803595CC_12BB = func_803595CC_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_803595CC_12BB);
        r4 = static_cast<uint32_t>(regargs_result_803595CC_12BB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x803595CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = r28;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8038FFD4u>(&func_8038FFD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8038FFD4_162F = func_8038FFD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8038FFD4_162F;
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
        InvokeDirectCpu<0x8038FFD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803900B0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803900B0_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020DB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803900B0 func_803900B0 preserves=true fpr_mask=0x00000000
