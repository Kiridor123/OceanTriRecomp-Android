#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80063A04(CpuContext* ctx);
extern "C" uint64_t func_80063A04_ra0_0_18_0(CpuContext*);
extern "C" void func_80063A34(CpuContext* ctx);
extern "C" uint32_t func_80063A34_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_80063A04_statefree(uint32_t, uint32_t);

extern "C" uint64_t func_800639C8_ra10_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];

    goto loc_800639C8;

loc_800639C8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r4;
    ctx->lr = 0x800639E0u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80063A04u) && KnownTranslatedCpuCall<0x80063A04u>::kAvailable && !KnownTranslatedCpuCall<0x80063A04u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80063A04u>()) {
        const auto state_free_result_80063A04_49A = func_80063A04_statefree(r1, 0x800639E0u);
        r1 = static_cast<uint32_t>(state_free_result_80063A04_49A[0]);
        r3 = static_cast<uint32_t>(state_free_result_80063A04_49A[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80063A04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = r31;
    r4 = (r1 + 8);
    ctx->lr = 0x800639F0u;
    if constexpr (KnownRegArgsCpuCall<0x80063A34u>(&func_80063A34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80063A34_78F = func_80063A34_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80063A34_78F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80063A34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800639C8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800639C8_ra10_0_18_0(ctx, ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000012 gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800639C8 func_800639C8 preserves=true fpr_mask=0x00000000
