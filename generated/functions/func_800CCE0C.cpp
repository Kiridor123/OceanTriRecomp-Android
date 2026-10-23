#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CCE60(CpuContext* ctx);
extern "C" uint64_t func_800CCE60_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800CCEAC(CpuContext* ctx);
extern "C" uint64_t func_800CCEAC_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800CCEE8(CpuContext* ctx);
extern "C" uint64_t func_800CCEE8_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800CCF24(CpuContext* ctx);
extern "C" uint64_t func_800CCF24_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800CCF60(CpuContext* ctx);
extern "C" uint64_t func_800CCF60_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800CCF9C(CpuContext* ctx);
extern "C" uint64_t func_800CCF9C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800CCFD8(CpuContext* ctx);
extern "C" uint64_t func_800CCFD8_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_800CCEAC_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_800CCEE8_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_800CCF24_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_800CCF60_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_800CCF9C_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_800CCFD8_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_800CCEAC_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_800CCEE8_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_800CCF24_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_800CCF60_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_800CCF9C_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_800CCFD8_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800CCE0C_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800CCE0C;

loc_800CCE0C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = (r13 + -17640);
    ctx->lr = 0x800CCE20u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800CCFD8u) && KnownTranslatedCpuCall<0x800CCFD8u>::kAvailable && !KnownTranslatedCpuCall<0x800CCFD8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800CCFD8u>()) {
        const auto state_free_result_800CCFD8_A9E = func_800CCFD8_statefree_v0(r1, r3, r31, 0x800CCE20u);
        r1 = static_cast<uint32_t>(state_free_result_800CCFD8_A9E);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CCFD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r13 = ctx->gpr[13];
    }
    r3 = (r13 + -17636);
    ctx->lr = 0x800CCE28u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800CCF9Cu) && KnownTranslatedCpuCall<0x800CCF9Cu>::kAvailable && !KnownTranslatedCpuCall<0x800CCF9Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800CCF9Cu>()) {
        const auto state_free_result_800CCF9C_DB2 = func_800CCF9C_statefree_v0(r1, r3, r31, 0x800CCE28u);
        r1 = static_cast<uint32_t>(state_free_result_800CCF9C_DB2);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CCF9Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r13 = ctx->gpr[13];
    }
    r3 = (r13 + -17632);
    ctx->lr = 0x800CCE30u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800CCF60u) && KnownTranslatedCpuCall<0x800CCF60u>::kAvailable && !KnownTranslatedCpuCall<0x800CCF60u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800CCF60u>()) {
        const auto state_free_result_800CCF60_10C6 = func_800CCF60_statefree_v0(r1, r3, r31, 0x800CCE30u);
        r1 = static_cast<uint32_t>(state_free_result_800CCF60_10C6);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CCF60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r13 = ctx->gpr[13];
    }
    r3 = (r13 + -17628);
    ctx->lr = 0x800CCE38u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800CCF24u) && KnownTranslatedCpuCall<0x800CCF24u>::kAvailable && !KnownTranslatedCpuCall<0x800CCF24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800CCF24u>()) {
        const auto state_free_result_800CCF24_13DC = func_800CCF24_statefree_v0(r1, r3, r31, 0x800CCE38u);
        r1 = static_cast<uint32_t>(state_free_result_800CCF24_13DC);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CCF24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r13 = ctx->gpr[13];
    }
    r3 = (r13 + -17624);
    ctx->lr = 0x800CCE40u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800CCEE8u) && KnownTranslatedCpuCall<0x800CCEE8u>::kAvailable && !KnownTranslatedCpuCall<0x800CCEE8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800CCEE8u>()) {
        const auto state_free_result_800CCEE8_16F2 = func_800CCEE8_statefree_v0(r1, r3, r31, 0x800CCE40u);
        r1 = static_cast<uint32_t>(state_free_result_800CCEE8_16F2);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CCEE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r13 = ctx->gpr[13];
    }
    r3 = (r13 + -17620);
    ctx->lr = 0x800CCE48u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800CCEACu) && KnownTranslatedCpuCall<0x800CCEACu>::kAvailable && !KnownTranslatedCpuCall<0x800CCEACu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800CCEACu>()) {
        const auto state_free_result_800CCEAC_1A08 = func_800CCEAC_statefree_v0(r1, r3, r31, 0x800CCE48u);
        r1 = static_cast<uint32_t>(state_free_result_800CCEAC_1A08);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CCEACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r13 = ctx->gpr[13];
    }
    r3 = (r13 + -17616);
    ctx->lr = 0x800CCE50u;
    if constexpr (KnownRegArgsCpuCall<0x800CCE60u>(&func_800CCE60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800CCE60_1CA3 = func_800CCE60_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800CCE60_1CA3);
        r4 = static_cast<uint32_t>(regargs_result_800CCE60_1CA3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CCE60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800CCE0C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800CCE0C_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002002 gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800CCE0C func_800CCE0C preserves=true fpr_mask=0x00000000
