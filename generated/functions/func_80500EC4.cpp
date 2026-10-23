#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80504C20(CpuContext* ctx);
extern "C" void func_80504C20_ra68_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_80500EC4_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_80500EC4;

loc_80500EC4:
{
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 25), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 26), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 27), static_cast<uint8_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x80504C20u>(&func_80504C20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[4] = r4;
        ctx->gpr[7] = r7;
        func_80504C20_ra68_0_0_0(ctx, r3, r5, r6);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80504C20u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r4;
}

}

extern "C" void func_80500EC4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80500EC4_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x000007F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80500EC4 func_80500EC4 preserves=true fpr_mask=0x00000000
