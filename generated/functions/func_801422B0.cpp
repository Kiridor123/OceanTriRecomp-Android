#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E05C4(CpuContext* ctx);
extern "C" uint64_t func_800E05C4_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80135B4C(CpuContext* ctx);
extern "C" uint32_t func_80135B4C_ra8_0_10_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_80135B4C_statefree(uint32_t);

extern "C" uint64_t func_801422B0_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];

    goto loc_801422B0;

loc_801422B0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = (r3 + 36);
    ctx->lr = 0x801422CCu;
    if constexpr (KnownRegArgsCpuCall<0x800E05C4u>(&func_800E05C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E05C4_472 = func_800E05C4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E05C4_472);
        r4 = static_cast<uint32_t>(regargs_result_800E05C4_472 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E05C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 1160u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r31, static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r31 + 1), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r31 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r31 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r31 + 6), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r31 + 7), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r31 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r31 + 10), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 1156u, (r31 + 1156), r0);
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80135B4Cu) && KnownTranslatedCpuCall<0x80135B4Cu>::kAvailable && !KnownTranslatedCpuCall<0x80135B4Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80135B4Cu>()) {
        const auto state_free_result_80135B4C_B25 = func_80135B4C_statefree(r3);
        r4 = static_cast<uint32_t>(state_free_result_80135B4C_B25[0]);
        r5 = static_cast<uint32_t>(state_free_result_80135B4C_B25[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80135B4Cu>(ctx);
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

extern "C" void func_801422B0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801422B0_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000200E gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801422B0 func_801422B0 preserves=true fpr_mask=0x00000000
