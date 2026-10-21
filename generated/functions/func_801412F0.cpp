#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80141380(CpuContext* ctx);
extern "C" uint32_t func_80141380_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80141714(CpuContext* ctx);
extern "C" uint64_t func_80141714_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80141954(CpuContext* ctx);
extern "C" uint32_t func_80141954_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80141BB0(CpuContext* ctx);
extern "C" uint64_t func_80141BB0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80145684(CpuContext* ctx);
extern "C" uint64_t func_80145684_ra0_0_18_0(CpuContext*);
extern "C" void func_80145CE8(CpuContext* ctx);
extern "C" uint64_t func_80145CE8_ra0_0_18_0(CpuContext*);
extern "C" void func_8045169C(CpuContext* ctx);
extern "C" uint32_t func_8045169C_ra0_0_8_0(CpuContext*);
extern "C" void func_80451720(CpuContext* ctx);
extern "C" uint32_t func_80451720_ra0_0_8_0(CpuContext*);

extern "C" uint64_t func_80145CE8_statefree();
extern "C" MkwStateFreeResult2 func_8045169C_statefree(uint32_t);
extern "C" MkwStateFreeResult2 func_80451720_statefree(uint32_t);
extern "C" uint64_t func_8045169C_statefree_v0(uint32_t);

extern "C" uint64_t func_801412F0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x801412F0u);
    goto loc_801412F0;

loc_801412F0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->lr = 0x80141304u;
    if constexpr (KnownRegArgsCpuCall<0x80141380u>(&func_80141380)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_80141380_82A = func_80141380_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_80141380_82A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80141380u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x80141308u;
    if constexpr (KnownRegArgsCpuCall<0x80141714u>(&func_80141714)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80141714_AEB = func_80141714_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80141714_AEB);
        r4 = static_cast<uint32_t>(regargs_result_80141714_AEB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80141714u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x8014130Cu;
    if constexpr (KnownRegArgsCpuCall<0x80141954u>(&func_80141954)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80141954_DF5 = func_80141954_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80141954_DF5;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80141954u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    ctx->lr = 0x80141310u;
    if constexpr (KnownRegArgsCpuCall<0x80141BB0u>(&func_80141BB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80141BB0_1015 = func_80141BB0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80141BB0_1015);
        r4 = static_cast<uint32_t>(regargs_result_80141BB0_1015 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80141BB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 0;
    r3 = 0x806A0000u;
    r31 = (r3 + 27152);
    MemoryInline::FlatWriteRam32((r31 + 864), r0);
    MemoryInline::FlatWriteRam32((r31 + 868), r0);
    r0 = -1;
    MemoryInline::FlatWriteRam16((r31 + 872), static_cast<uint16_t>(r0));
    // inline leaf 0x80145044 (13 guest instruction(s))
    r4 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -17296), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r13 + -17296), static_cast<uint8_t>(r4));
    r3 = (r13 + -17296);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 1), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 2), static_cast<uint8_t>(r4));
    r0 = -1;
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 5), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 6), static_cast<uint8_t>(r4));
    r0 = 255;
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 7), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80145044
    if constexpr (KnownRegArgsCpuCall<0x80145684u>(&func_80145684)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80145684_17C2 = func_80145684_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_80145684_17C2);
        r4 = static_cast<uint32_t>(regargs_result_80145684_17C2 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80145684u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    // inline leaf 0x801453F4 (9 guest instruction(s))
    r4 = 0;
    MemoryInline::FlatWrite8((r13 + -17288), static_cast<uint8_t>(r4));
    r0 = 255;
    r3 = (r13 + -17288);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x801453F4
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80145CE8u) && KnownTranslatedCpuCall<0x80145CE8u>::kAvailable && !KnownTranslatedCpuCall<0x80145CE8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80145CE8u>()) {
        const auto state_free_result_80145CE8_1C81 = func_80145CE8_statefree();
        r4 = static_cast<uint32_t>(state_free_result_80145CE8_1C81);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80145CE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
    }
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8045169Cu) && KnownTranslatedCpuCall<0x8045169Cu>::kAvailable && !KnownTranslatedCpuCall<0x8045169Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8045169Cu>()) {
        const auto state_free_result_8045169C_1F6A = func_8045169C_statefree_v0(r13);
        r3 = static_cast<uint32_t>(state_free_result_8045169C_1F6A);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045169Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
    }
}

loc_80141344:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80141354;
    }
}

loc_80141348:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80451720u) && KnownTranslatedCpuCall<0x80451720u>::kAvailable && !KnownTranslatedCpuCall<0x80451720u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80451720u>()) {
        const auto state_free_result_80451720_22E3 = func_80451720_statefree(r13);
        r0 = static_cast<uint32_t>(state_free_result_80451720_22E3[0]);
        r3 = static_cast<uint32_t>(state_free_result_80451720_22E3[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80451720u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
    }
    MemoryInline::FlatWriteRam8((r31 + 874), static_cast<uint8_t>(r3));
    goto loc_8014135C;
}

loc_80141354:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r31 + 874), static_cast<uint8_t>(r0));
}

loc_8014135C:
{
    r0 = 0;
    r3 = 0x806A0000u;
    r3 = (r3 + 27152);
    MemoryInline::FlatWriteRam8((r3 + 875), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801412F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801412F0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801412F0 func_801412F0 preserves=true fpr_mask=0x00000000
