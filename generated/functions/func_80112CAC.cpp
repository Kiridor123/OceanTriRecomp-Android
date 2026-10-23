#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80114A80(CpuContext* ctx);
extern "C" uint64_t func_80114A80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80112CAC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    goto loc_80112CAC;

loc_80112CAC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r5;
    r4 = (r4 & 255);
    r5 = 10;
    ctx->lr = 0x80112CCCu;
    if constexpr (KnownRegArgsCpuCall<0x80114A80u>(&func_80114A80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80114A80_3E5 = func_80114A80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114A80_3E5);
        r4 = static_cast<uint32_t>(regargs_result_80114A80_3E5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80114A80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80112CD0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80112CEC;
    }
}

loc_80112CD4:
{
    r0 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite32((r3 + 36), r0);
    r0 = MemoryInline::FlatRead32((r31 + 4));
    MemoryInline::FlatWrite32((r3 + 40), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 44), r0);
}

loc_80112CEC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80112CAC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80112CAC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80112CAC func_80112CAC preserves=true fpr_mask=0x00000000
