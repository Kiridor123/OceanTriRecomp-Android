#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80141750(CpuContext* ctx);
extern "C" uint32_t func_80141750_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_80141750_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80141750_statefree_v0(uint32_t);

extern "C" uint64_t func_801417E0_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t xer = ctx->xer;

    goto loc_801417E0;

loc_801417E0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f31.d);
    r28 = r3;
    f31.d = f1.d;
    r29 = r4;
    r30 = r5;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80141750u) && KnownTranslatedCpuCall<0x80141750u>::kAvailable && !KnownTranslatedCpuCall<0x80141750u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80141750u>()) {
        const auto state_free_result_80141750_5DE = func_80141750_statefree_v0(xer);
        r0 = static_cast<uint32_t>(state_free_result_80141750_5DE[0]);
        r3 = static_cast<uint32_t>(state_free_result_80141750_5DE[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x80141750u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        xer = ctx->xer;
    }
    r31 = r3;
}

loc_8014181C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8014183C;
    }
}

loc_80141820:
{
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    MemoryInline::FlatWriteFloat32((r31 + 12), f31.d);
    MemoryInline::FlatWrite8((r31 + 18), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite16((r31 + 16), static_cast<uint16_t>(r30));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 19), static_cast<uint8_t>(r0));
}

loc_8014183C:
{
    f31.d = MemoryInline::FlatReadFloat64((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801417E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801417E0_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x80000002 fpr_write=0x80000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801417E0 func_801417E0 preserves=true fpr_mask=0x00000000
