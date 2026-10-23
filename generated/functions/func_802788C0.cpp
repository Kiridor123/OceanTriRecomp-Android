#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026FF84(CpuContext* ctx);
extern "C" uint64_t func_8026FF84_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80272B14(CpuContext* ctx);
extern "C" uint64_t func_80272B14_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80275448(CpuContext* ctx);
extern "C" uint64_t func_80275448_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802766F4(CpuContext* ctx);
extern "C" uint32_t func_802766F4_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802767DC(CpuContext* ctx);
extern "C" uint32_t func_802767DC_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80276D4C(CpuContext* ctx);
extern "C" uint32_t func_80276D4C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802788C0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802788C0;

loc_802788C0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r0 = 600;
    MemoryInline::FlatWrite16((r3 + 890), static_cast<uint16_t>(r0));
    r0 = 100;
    MemoryInline::FlatWrite16((r3 + 882), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 896), static_cast<uint16_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80278900:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80278978;
    }
}

loc_80278904:
{
}

loc_80278908:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80278920;
    }
}

loc_8027890C:
{
    r3 = r29;
    r4 = 39;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_95C = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_95C);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_95C >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8027891C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80278978;
    }
}

loc_80278920:
{
    r3 = r29;
    r4 = 1;
    ctx->lr = 0x8027892Cu;
    if constexpr (KnownRegArgsCpuCall<0x80275448u>(&func_80275448)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80275448_CA3 = func_80275448_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80275448_CA3);
        r4 = static_cast<uint32_t>(regargs_result_80275448_CA3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80275448u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = r3;
    r3 = r29;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = 0;
    ctx->lr = 0x80278940u;
    if constexpr (KnownRegArgsCpuCall<0x802766F4u>(&func_802766F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802766F4_FD5 = func_802766F4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_802766F4_FD5;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802766F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = r29;
    r4 = 2;
    ctx->lr = 0x8027894Cu;
    if constexpr (KnownRegArgsCpuCall<0x80275448u>(&func_80275448)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80275448_1261 = func_80275448_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80275448_1261);
        r4 = static_cast<uint32_t>(regargs_result_80275448_1261 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80275448u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = r3;
    r3 = r29;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    ctx->lr = 0x8027895Cu;
    if constexpr (KnownRegArgsCpuCall<0x80276D4Cu>(&func_80276D4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80276D4C_1589 = func_80276D4C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80276D4C_1589;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80276D4Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = r29;
    r4 = 3;
    ctx->lr = 0x80278968u;
    if constexpr (KnownRegArgsCpuCall<0x80275448u>(&func_80275448)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80275448_17F8 = func_80275448_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80275448_17F8);
        r4 = static_cast<uint32_t>(regargs_result_80275448_17F8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80275448u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = r3;
    r3 = r29;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if constexpr (KnownRegArgsCpuCall<0x802767DCu>(&func_802767DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802767DC_1B04 = func_802767DC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_802767DC_1B04;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802767DCu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
}

loc_80278978:
{
    r3 = r29;
    ctx->lr = 0x80278980u;
    if constexpr (KnownRegArgsCpuCall<0x8026FF84u>(&func_8026FF84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8026FF84_1D48 = func_8026FF84_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8026FF84_1D48);
        r4 = static_cast<uint32_t>(regargs_result_8026FF84_1D48 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8026FF84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = r3;
    r3 = r29;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = 0;
    ctx->lr = 0x80278994u;
    if constexpr (KnownRegArgsCpuCall<0x802766F4u>(&func_802766F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802766F4_207D = func_802766F4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_802766F4_207D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802766F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = 50;
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 876), 0, 51u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r29 + 876), static_cast<uint16_t>(r0));
    r0 = 150;
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r29 + 878), static_cast<uint16_t>(r0));
}

loc_802789A8:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_802789DC;
    }
}

loc_802789AC:
{
    r0 = MemoryInline::FlatRead16((r29 + 890));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r29 + 888), static_cast<uint16_t>(r0));
    r0 = 10800;
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r29 + 892), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 50u, (r29 + 926), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 30u, (r29 + 906), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 882));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r29 + 880), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r29 + 886), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 896));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_0, 18u, (r29 + 894), static_cast<uint16_t>(r0));
}

loc_802789DC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802788C0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802788C0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802788C0 func_802788C0 preserves=true fpr_mask=0x00000000
