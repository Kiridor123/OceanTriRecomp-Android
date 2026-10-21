#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D9868(CpuContext* ctx);
extern "C" uint64_t func_800D9868_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800E0350(CpuContext* ctx);
extern "C" uint64_t func_800E0350_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800DFA34_ra68_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, uint32_t arg_r6)
{
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r6 = arg_r6;
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x800DFA34u);
    goto loc_800DFA34;

loc_800DFA34:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = r3;
    r3 = 8;
    r5 = 0;
    ctx->lr = 0x800DFA50u;
    if constexpr (KnownRegArgsCpuCall<0x800D9868u>(&func_800D9868)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_800D9868_6DF = func_800D9868_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800D9868_6DF);
        r4 = static_cast<uint32_t>(regargs_result_800D9868_6DF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D9868u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -17576), 0, 4u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r4 = (r4 + 196608);
    MemoryInline::FlatWrite32((r4 + -27936), r3);
    r6 = 0;
    r5 = 0;
    r0 = 2;
    ctr = r0;
}

loc_800DFA6C:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r4 = (r6 + 196608);
    r0 = (r4 + -27932);
    r3_addr_2 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_2, r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -27928);
    r3_addr_3 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_3, r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -27924);
    r3_addr_4 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_4, r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -27920);
    r3_addr_5 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_5, r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -27916);
    r3_addr_6 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_6, r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -27912);
    r3_addr_7 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_7, r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -27908);
    r3_addr_8 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_8, r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -27904);
    r3_addr_9 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_9, r5);
    r6 = (r6 + 32);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r4 = (r6 + 196608);
    r0 = (r4 + -27932);
    r3_addr_10 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_10, r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -27928);
    r3_addr_11 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_11, r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -27924);
    r3_addr_12 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_12, r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -27920);
    r3_addr_13 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_13, r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -27916);
    r3_addr_14 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_14, r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -27912);
    r3_addr_15 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_15, r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -27908);
    r3_addr_16 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_16, r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -27904);
    r3_addr_17 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_17, r5);
    r6 = (r6 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800DFA6C;
    }
}

loc_800DFB40:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    ctx->lr = 0x800DFB48u;
    if constexpr (KnownRegArgsCpuCall<0x800E0350u>(&func_800E0350)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800E0350_178C = func_800E0350_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E0350_178C);
        r4 = static_cast<uint32_t>(regargs_result_800E0350_178C >> 32);
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
        InvokeDirectCpu<0x800E0350u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800DFA34(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800DFA34_ra68_0_18_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020EA gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800DFA34 func_800DFA34 preserves=true fpr_mask=0x00000000
