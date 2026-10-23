#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8056DE58(CpuContext* ctx);
extern "C" void func_8056DE58_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_8056CEE4_ra98_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r7)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    ctx->gpr[7] = arg_r7;

    goto loc_8056CEE4;

loc_8056CEE4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = 1;
    r5 = -1;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x8056DE58u>(&func_8056DE58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        func_8056DE58_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8056DE58u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r4;
}

}

extern "C" void func_8056CEE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8056CEE4_ra98_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[7]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000019A gpr_write=0x000001F3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8056CEE4 func_8056CEE4 preserves=true fpr_mask=0x00000000
