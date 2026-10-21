#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008BFF0(CpuContext* ctx);
extern "C" double func_8008BFF0_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8008BFF0_statefree(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_8008BFC8_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x8008BFC8u);
    goto loc_8008BFC8;

loc_8008BFC8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r1 + 8);
    ctx->lr = 0x8008BFDCu;
    ctx->gpr[1] = r1;
    if (false) {
        const auto state_free_result_8008BFF0_373 = func_8008BFF0_statefree(r1, r3, r4, 0x8008BFDCu, ctx->gqr[2]);
        r1 = static_cast<uint32_t>(state_free_result_8008BFF0_373);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8008BFF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    return r4;
}

}

extern "C" void func_8008BFC8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8008BFC8_ra8_0_10_0(ctx, ctx->gpr[3]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x00000013 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008BFC8 func_8008BFC8 preserves=true fpr_mask=0x00000000
