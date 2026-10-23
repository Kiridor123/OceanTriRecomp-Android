#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80143AA4(CpuContext* ctx);
extern "C" void func_80143AA4_ra8_0_0_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_80143AA4_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80143AA4_statefree_v1(uint32_t, uint32_t);

extern "C" uint32_t func_80143BE8_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    goto loc_80143BE8;

loc_80143BE8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x806A0000u;
    r31 = (r3 + 31072);
    r30 = 0;
}

loc_80143C08:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_80143C10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143C34;
    }
}

loc_80143C14:
{
    r0 = MemoryInline::FlatRead8((r31 + 12));
}

loc_80143C1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143C34;
    }
}

loc_80143C20:
{
    r0 = MemoryInline::FlatRead32((r31 + 48));
}

loc_80143C28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80143C34;
    }
}

loc_80143C2C:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80143AA4u) && KnownTranslatedCpuCall<0x80143AA4u>::kAvailable && !KnownTranslatedCpuCall<0x80143AA4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80143AA4u>()) {
        const auto state_free_result_80143AA4_71F = func_80143AA4_statefree_v1(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_80143AA4_71F);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80143AA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        xer = ctx->xer;
    }
}

loc_80143C34:
{
    r30 = (r30 + 1);
    r31 = (r31 + 68);
}

loc_80143C40:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(128))) {
        goto loc_80143C08;
    }
}

loc_80143C44:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_80143BE8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80143BE8_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80143BE8 func_80143BE8 preserves=true fpr_mask=0x00000000
