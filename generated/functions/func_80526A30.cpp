#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80526A30_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;

    goto loc_80526A30;

loc_80526A30:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = (r3 + 31);
    r31 = (r5 + 9112);
    r30 = 0;
    r29 = r4;
    r28 = (r0 & -32);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r4 = 0;
    MemoryInline::FlatWriteRam32((r5 + 9112), r0);
    r3 = r28;
    r5 = r29;
    MemoryInline::FlatWriteRam32((r31 + 4), r30);
    MemoryInline::FlatWriteRam32((r31 + 8), r30);
    MemoryInline::FlatWriteRam32((r31 + 12), r30);
    MemoryInline::FlatWriteRam32((r31 + 20), r30);
    MemoryInline::FlatWriteRam32((r31 + 16), r28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 31);
    r0 = 1536;
    r3 = (r3 & -32);
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 24), 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r31 + 24), r0);
    r28 = (r28 + r3);
    r4 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r31 + 28), r30);
    r3 = r28;
    r5 = 3072;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r31 + 32), r30);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r31 + 36), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r31 + 40), r30);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r31 + 48), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r31 + 52), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r31 + 56), r30);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r31 + 44), r28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r4 = 0x80790000u;
    r3 = (r28 + 3072);
    r31 = (r4 + 9176);
    r0 = 63;
    MemoryInline::FlatWriteRam32((r4 + 9176), r30);
    r4 = 0;
    r5 = 128;
    MemoryInline::FlatWriteRam32((r31 + 4), r0);
    MemoryInline::FlatWriteRam32((r31 + 8), r3);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r28 + 7808);
    MemoryInline::FlatWriteRam32((r31 + 12), r3);
    r4 = 0;
    r5 = 128;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -13392), r0);
    r3 = (r28 + 12544);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80526A30(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80526A30_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80526A30 func_80526A30 preserves=true fpr_mask=0x00000000
