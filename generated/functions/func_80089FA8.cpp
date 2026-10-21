#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80089FDC(CpuContext* ctx);
extern "C" uint32_t func_80089FDC_ra0_2_8_0(CpuContext*, double);

extern "C" MkwStateFreeResult2 func_80089FDC_statefree(uint32_t, PPC_FPR, uint32_t, uint32_t);

extern "C" uint32_t func_80089FA8_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x80089FA8u);
    goto loc_80089FA8;

loc_80089FA8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    f1.d = MemoryInline::FlatReadFloat32(r3);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80089FDCu) && KnownTranslatedCpuCall<0x80089FDCu>::kAvailable && !KnownTranslatedCpuCall<0x80089FDCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80089FDCu>()) {
        const auto state_free_result_80089FDC_472 = func_80089FDC_statefree(r1, f1, 0x80089FC4u, ctx->gqr[5]);
        r1 = static_cast<uint32_t>(state_free_result_80089FDC_472[0]);
        r3 = static_cast<uint32_t>(state_free_result_80089FDC_472[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80089FDCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    return r3;
}

}

extern "C" void func_80089FA8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80089FA8_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80089FA8 func_80089FA8 preserves=true fpr_mask=0x00000000
