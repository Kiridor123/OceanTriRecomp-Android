#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80063A34(CpuContext* ctx);
extern "C" uint32_t func_80063A34_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8007B6C4(CpuContext* ctx);
extern "C" uint64_t func_8007B6C4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8007B760(CpuContext* ctx);
extern "C" uint64_t func_8007B760_ra0_0_18_0(CpuContext*);

extern "C" MkwStateFreeResult2 func_8007B760_statefree(uint32_t, uint32_t);

extern "C" uint64_t func_8007B658_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8007B658;

loc_8007B658:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r4;
    ctx->lr = 0x8007B678u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8007B760u) && KnownTranslatedCpuCall<0x8007B760u>::kAvailable && !KnownTranslatedCpuCall<0x8007B760u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8007B760u>()) {
        const auto state_free_result_8007B760_574 = func_8007B760_statefree(r1, 0x8007B678u);
        r1 = static_cast<uint32_t>(state_free_result_8007B760_574[0]);
        r3 = static_cast<uint32_t>(state_free_result_8007B760_574[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8007B760u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = r31;
    r4 = (r1 + 12);
    ctx->lr = 0x8007B688u;
    if constexpr (KnownRegArgsCpuCall<0x80063A34u>(&func_80063A34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80063A34_86B = func_80063A34_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80063A34_86B;
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
}

loc_8007B68C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8007B698;
    }
}

loc_8007B690:
{
    r3 = 1;
    goto loc_8007B6AC;
}

loc_8007B698:
{
    r0 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = r30;
    r4 = (r1 + 8);
    ctx->lr = 0x8007B6ACu;
    if constexpr (KnownRegArgsCpuCall<0x8007B6C4u>(&func_8007B6C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B6C4_C08 = func_8007B6C4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8007B6C4_C08);
        r4 = static_cast<uint32_t>(regargs_result_8007B6C4_C08 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8007B6C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8007B6AC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8007B658(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8007B658_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8007B658 func_8007B658 preserves=true fpr_mask=0x00000000
