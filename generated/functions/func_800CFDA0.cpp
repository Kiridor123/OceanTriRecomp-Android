#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800CFDA0_rac0_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r6, uint32_t arg_r7)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;
    ctx->gpr[7] = arg_r7;

    goto loc_800CFDA0;

loc_800CFDA0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = 0x80690000u;
    r3 = (r31 + 28984);
    r4 = 0;
    r5 = 1636;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r5 = MemoryInline::FlatRead32((r3 + 76));
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 28984), 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r31 + 28984), r5);
    r0 = MemoryInline::FlatRead32((r3 + 80));
    r4 = (r31 + 28984);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r4 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r4 + 8), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r4 + 12), r5);
    r3 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + 16), r3);
    r0 = (r5 + r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + 24), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 28), r3);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800CFDA0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800CFDA0_rac0_0_18_0(ctx, ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800CFDA0 func_800CFDA0 preserves=true fpr_mask=0x00000000
