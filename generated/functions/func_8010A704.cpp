#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A5234(CpuContext* ctx);
extern "C" uint32_t func_800A5234_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_800A5234_statefree(uint32_t);

extern "C" uint64_t func_8010A704_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[5] = arg_r5;

    goto loc_8010A704;

loc_8010A704:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r4;
    r3 = r28;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800A5234u) && KnownTranslatedCpuCall<0x800A5234u>::kAvailable && !KnownTranslatedCpuCall<0x800A5234u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800A5234u>()) {
        const auto state_free_result_800A5234_4B9 = func_800A5234_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_800A5234_4B9);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800A5234u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r29 = 0;
    r30 = 3;
    r31 = (r3 & 65535);
    goto loc_8010A764;
}

loc_8010A73C:
{
    r3 = r28;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800A5234u) && KnownTranslatedCpuCall<0x800A5234u>::kAvailable && !KnownTranslatedCpuCall<0x800A5234u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800A5234u>()) {
        const auto state_free_result_800A5234_7D4 = func_800A5234_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_800A5234_7D4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800A5234u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 65535);
}

loc_8010A74C:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(r0))) {
        goto loc_8010A760;
    }
}

loc_8010A750:
{
    r3 = r28;
    r4 = (r29 & 65535);
    ctx->lr = 0x8010A75Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800A523Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    MemoryInline::FlatWrite32((r3 + 180), r30);
}

loc_8010A760:
{
    r29 = (r29 + 1);
}

loc_8010A764:
{
}

loc_8010A768:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r31))) {
        goto loc_8010A73C;
    }
}

loc_8010A76C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8010A704(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8010A704_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8010A704 func_8010A704 preserves=true fpr_mask=0x00000000
