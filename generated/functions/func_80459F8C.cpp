#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80459C9C(CpuContext* ctx);
extern "C" uint32_t func_80459C9C_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_80459F8C_rac8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6, uint32_t arg_r7)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;
    ctx->gpr[7] = arg_r7;

    goto loc_80459F8C;

loc_80459F8C:
{
    r4 = 0x80570000u;
    r5 = 2;
    r4 = (r4 + 11528);
    r4 = (r4 + 176);
    if constexpr (KnownRegArgsCpuCall<0x80459C9Cu>(&func_80459C9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80459C9C_3A1 = func_80459C9C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80459C9C_3A1;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80459C9Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8045A08C:
{
    r0 = MemoryInline::FlatRead32((r1 + 116));
    r31 = MemoryInline::FlatRead32((r1 + 108));
    r30 = MemoryInline::FlatRead32((r1 + 104));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return r4;
}

}

extern "C" void func_80459F8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80459F8C_rac8_0_10_0(ctx, ctx->gpr[3], ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000000CB gpr_write=0xC00000F3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80459F8C func_80459F8C preserves=true fpr_mask=0x00000000
