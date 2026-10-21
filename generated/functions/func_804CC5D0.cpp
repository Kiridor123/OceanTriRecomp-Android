#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804CC5D0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x804CC5D0u);
    goto loc_804CC5D0;

loc_804CC5D0:
{
    r7 = (r5 * 12);
    MemoryInline::FlatWrite32((r13 + -15100), r3);
    r8 = 0;
    MemoryInline::FlatWrite32((r13 + -15104), r5);
    r6 = 0;
    r5 = -1;
    r3 = 0;
    goto loc_804CC60C;
}

loc_804CC5F0:
{
    r0 = MemoryInline::FlatRead32((r13 + -15100));
    r8 = (r8 + 1);
    r6_addr_2 = (r6 + r0);
    MemoryInline::FlatWrite32(r6_addr_2, r5);
    r9 = (r0 + r6);
    r6 = (r6 + 12);
    MemoryInline::FlatWrite32((r9 + 8), r3);
    MemoryInline::FlatWrite32((r9 + 4), r3);
}

loc_804CC60C:
{
    r0 = MemoryInline::FlatRead32((r13 + -15104));
}

loc_804CC614:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(r0))) {
        goto loc_804CC5F0;
    }
}

loc_804CC618:
{
    r3 = MemoryInline::FlatRead32((r13 + -15100));
    r0 = (r4 & -32);
    r4 = -1;
    MemoryInline::FlatWrite32((r13 + -20120), r4);
    r3 = (r3 + r7);
    r3 = (r3 + 31);
    MemoryInline::FlatWrite32((r13 + -15112), r0);
    r3 = (r3 & -32);
    MemoryInline::FlatWrite32((r13 + -15108), r3);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804CC5D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804CC5D0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000023F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CC5D0 func_804CC5D0 preserves=true fpr_mask=0x00000000
