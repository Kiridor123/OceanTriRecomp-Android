#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004A270(CpuContext* ctx);
extern "C" void func_8004A270_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8004C09C(CpuContext* ctx);
extern "C" uint64_t func_8004C09C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8004A270_statefree(uint32_t, uint32_t);
extern "C" void func_8004A270_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_8004C1BC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8004C1BC;

loc_8004C1BC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r3 = (r4 + 104);
    r0 = MemoryInline::FlatRead16((r4 + 152));
    r0 = (r0 * 12);
    r4 = (r4 + r0);
    r4 = (r4 + 3584);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + -36), 0, 48u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 36u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_0, 37u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::WriteResolved16(guest_range_0, 38u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::WriteResolved16(guest_range_0, 40u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::WriteResolved32(guest_range_0, 42u, (r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::WriteResolved16(guest_range_0, 46u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r31 + 68);
    r0 = MemoryInline::FlatRead16((r31 + 146));
    r0 = (r0 * 12);
    r4 = (r31 + r0);
    r4 = (r4 + 3584);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::WriteResolved32(guest_range_0, 6u, (r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r31 + 116);
    r0 = MemoryInline::FlatRead16((r31 + 154));
    r0 = (r0 * 12);
    r4 = (r31 + r0);
    r4 = (r4 + 3584);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r31 + 80);
    r0 = MemoryInline::FlatRead16((r31 + 148));
    r0 = (r0 * 12);
    r4 = (r31 + r0);
    r4 = (r4 + 3584);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r31 + 92);
    r0 = MemoryInline::FlatRead16((r31 + 150));
    r0 = (r0 * 12);
    r4 = (r31 + r0);
    r4 = (r4 + 3584);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r31 + 128);
    r0 = MemoryInline::FlatRead16((r31 + 156));
    r0 = (r0 * 12);
    r4 = (r31 + r0);
    r4 = (r4 + 3584);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x8004C274u;
    if constexpr (KnownRegArgsCpuCall<0x8004C09Cu>(&func_8004C09C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004C09C_196D = func_8004C09C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004C09C_196D);
        r4 = static_cast<uint32_t>(regargs_result_8004C09C_196D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004C09Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004C1BC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004C1BC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FA gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8004C1BC func_8004C1BC preserves=true fpr_mask=0x00000000
