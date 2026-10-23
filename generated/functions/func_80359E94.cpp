#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80359C44(CpuContext* ctx);
extern "C" uint32_t func_80359C44_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_80359E94_ra68_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;

    goto loc_80359E94;

loc_80359E94:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r4 = MemoryInline::FlatRead16((r31 + 44));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    if constexpr (KnownRegArgsCpuCall<0x80359C44u>(&func_80359C44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80359C44_464 = func_80359C44_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80359C44_464;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80359C44u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite32((r31 + 28), r3);
}

loc_80359EBC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80359ED0;
    }
}

loc_80359EC0:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
}

loc_80359ED0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_80359E94(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80359E94_ra68_0_8_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->gpr[6]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000003EB gpr_write=0x000003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80359E94 func_80359E94 preserves=true fpr_mask=0x00000000
