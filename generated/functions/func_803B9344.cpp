#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803B939C(CpuContext* ctx);
extern "C" uint32_t func_803B939C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint32_t func_803B9344_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_803B9344;

loc_803B9344:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = (r3 + 92);
    r31 = (r3 + 872);
}

loc_803B9368:
{
    r3 = r30;
    ctx->lr = 0x803B9370u;
    if constexpr (KnownRegArgsCpuCall<0x803B939Cu>(&func_803B939C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B939C_3E8 = func_803B939C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B939C_3E8;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803B939Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r30 = (r30 + 60);
}

loc_803B9378:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r31))) {
        goto loc_803B9368;
    }
}

loc_803B937C:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_803B9344(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803B9344_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803B9344 func_803B9344 preserves=true fpr_mask=0x00000000
