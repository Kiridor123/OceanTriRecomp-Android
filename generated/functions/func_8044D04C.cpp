#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8044D07C(CpuContext* ctx);
extern "C" uint64_t func_8044D07C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8044D0C8(CpuContext* ctx);
extern "C" uint64_t func_8044D0C8_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8044D0C8_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_8044D0C8_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8044D04C_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8044D04Cu);
    goto loc_8044D04C;

loc_8044D04C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x806F0000u;
    r3 = (r3 + -28728);
    ctx->lr = 0x8044D064u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8044D0C8u) && KnownTranslatedCpuCall<0x8044D0C8u>::kAvailable && !KnownTranslatedCpuCall<0x8044D0C8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8044D0C8u>()) {
        const auto state_free_result_8044D0C8_526 = func_8044D0C8_statefree_v0(r1, r3, r31, 0x8044D064u);
        r1 = static_cast<uint32_t>(state_free_result_8044D0C8_526);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8044D0C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r13 = ctx->gpr[13];
    }
    r3 = (r13 + -16476);
    ctx->lr = 0x8044D06Cu;
    if constexpr (KnownRegArgsCpuCall<0x8044D07Cu>(&func_8044D07C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8044D07C_7AC = func_8044D07C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8044D07C_7AC);
        r4 = static_cast<uint32_t>(regargs_result_8044D07C_7AC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8044D07Cu>(ctx);
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

extern "C" void func_8044D04C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8044D04C_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002002 gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8044D04C func_8044D04C preserves=true fpr_mask=0x00000000
