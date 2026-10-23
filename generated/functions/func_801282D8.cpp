#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_801282D8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_801282D8;

loc_801282D8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r0 = 0;
    r0 = (r0 * 20);
    r31 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r31 + 2800));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80128314:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8012834C;
    }
}

loc_80128318:
{
    // inline leaf 0x80144560 (4 guest instruction(s))
    r3 = 0x806A0000u;
    r3 = (r3 + 27152);
    r3 = MemoryInline::FlatRead16((r3 + 872));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    // end of inlined leaf 0x80144560
    MemoryInline::FlatWrite16((r31 + 2800), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r31 + 2802), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r31 + 2803), static_cast<uint8_t>(r30));
    r0 = MemoryInline::FlatRead8((r28 + 896));
    MemoryInline::FlatWrite8((r31 + 2804), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r28 + 897));
    MemoryInline::FlatWrite8((r31 + 2805), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r28 + 898));
    MemoryInline::FlatWrite8((r31 + 2806), static_cast<uint8_t>(r0));
    r3 = (r31 + 2808);
    r4 = (r28 + 876);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_8012834C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801282D8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801282D8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801282D8 func_801282D8 preserves=true fpr_mask=0x00000000
