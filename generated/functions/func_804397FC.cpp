#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80439810(CpuContext* ctx);
extern "C" uint32_t func_80439810_ra88_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint32_t func_804397FC_ra88_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r7)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r7 = arg_r7;

    MKW_GUEST_ENTER(0x804397FCu);
    goto loc_804397FC;

loc_804397FC:
{
    r0 = 17;
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x80439810u>(&func_80439810)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_80439810_303 = func_80439810_ra88_0_8_0(ctx, r3, r7);
        r3 = regargs_result_80439810_303;
        r0 = ctx->gpr[0];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80439810u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r7 = ctx->gpr[7];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return r3;
}

}

extern "C" void func_804397FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804397FC_ra88_0_8_0(ctx, ctx->gpr[3], ctx->gpr[7]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000208A gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804397FC func_804397FC preserves=true fpr_mask=0x00000000
