#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8046F110_ra20_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r5)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8046F110u);
    goto loc_8046F110;

loc_8046F110:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r6 = 0x80700000u;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r6 = (r6 + -25984);
    r0 = 32;
    r4 = 1;
    r3 = 2;
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -16200), 0, 60u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r13 + -16144), r5);
    r7 = (r6 + 0);
    r8 = (r6 + 4608);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r13 + -16148), r5);
    r6 = (r6 + 9216);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r13 + -16152), r5);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r13 + -16156), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r13 + -16160), r5);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r13 + -16164), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r13 + -16192), r5);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r13 + -16196), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r13 + -16200), r3);
    ctr = r0;
}

loc_8046F168:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r7, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r7, r5);
    guest_range_2 = MemoryInline::ResolveRangeHost(r8, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, r8, r5);
    guest_range_3 = MemoryInline::ResolveRangeHost(r6, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, r6, r5);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r7 + 4), r5);
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r8 + 4), r5);
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r6 + 4), r5);
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r7 + 8), r5);
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r8 + 8), r5);
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r6 + 8), r5);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r7 + 12), r5);
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r8 + 12), r5);
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r6 + 12), r5);
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r7 + 16), r5);
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r8 + 16), r5);
    MemoryInline::WriteResolved32(guest_range_3, 16u, (r6 + 16), r5);
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r7 + 20), r5);
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r8 + 20), r5);
    MemoryInline::WriteResolved32(guest_range_3, 20u, (r6 + 20), r5);
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r7 + 24), r5);
    MemoryInline::WriteResolved32(guest_range_2, 24u, (r8 + 24), r5);
    MemoryInline::WriteResolved32(guest_range_3, 24u, (r6 + 24), r5);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r7 + 28), r5);
    MemoryInline::WriteResolved32(guest_range_2, 28u, (r8 + 28), r5);
    MemoryInline::WriteResolved32(guest_range_3, 28u, (r6 + 28), r5);
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r7 + 32), r5);
    r7 = (r7 + 36);
    MemoryInline::WriteResolved32(guest_range_2, 32u, (r8 + 32), r5);
    r8 = (r8 + 36);
    MemoryInline::WriteResolved32(guest_range_3, 32u, (r6 + 32), r5);
    r6 = (r6 + 36);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8046F168;
    }
}

loc_8046F1E4:
{
    r3 = (r13 + -16132);
    r4 = 0;
    r5 = 3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r13 + -16136);
    r4 = 0;
    r5 = 3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r13 + -16140);
    r4 = 0;
    r5 = 3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8046F110(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046F110_ra20_0_18_0(ctx, ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002022 gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8046F110 func_8046F110 preserves=true fpr_mask=0x00000000
