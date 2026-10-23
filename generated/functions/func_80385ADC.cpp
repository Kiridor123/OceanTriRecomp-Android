#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80385ADC_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    goto loc_80385ADC;

loc_80385ADC:
{
    r4 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 392));
    MemoryInline::FlatWrite32((r3 + 44), r0);
    r0 = MemoryInline::FlatRead32((r3 + 396));
    MemoryInline::FlatWrite32((r3 + 48), r0);
    r0 = MemoryInline::FlatRead32((r3 + 400));
    MemoryInline::FlatWrite32((r3 + 52), r0);
    r3 = (r3 + 8);
    r4 = (r4 + 368);
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80385ADC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80385ADC_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80385ADC func_80385ADC preserves=true fpr_mask=0x00000000
