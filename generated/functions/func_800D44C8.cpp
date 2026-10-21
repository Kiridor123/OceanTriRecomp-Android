#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805020E4(CpuContext* ctx);
extern "C" void func_805020E4_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_800D44C8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x800D44C8u);
    goto loc_800D44C8;

loc_800D44C8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r4 = 0x80590000u;
    r0 = (r4 + 23504);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r0);
    r3 = (r3 + 4);
    r4 = 0;
    // inline leaf 0x805020CC (6 guest instruction(s))
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 14u, (r3 + 10), static_cast<uint16_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 4), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r3 + 8), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x805020CC
    r3 = (r28 + 16);
    r4 = 0;
    // inline leaf 0x805020CC (6 guest instruction(s))
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 26u, (r3 + 10), static_cast<uint16_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 4), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r3 + 8), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x805020CC
    r0 = 340;
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r28 + 28), r0);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r28, r30);
    r31 = 0;
    goto loc_800D4540;
}

loc_800D4528:
{
    MemoryInline::FlatWrite32((r30 + 8), r31);
    r3 = (r28 + 4);
    r4 = r30;
    if constexpr (KnownRegArgsCpuCall<0x805020E4u>(&func_805020E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        func_805020E4_ra18_0_0_0(ctx, r3, r4);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x805020E4u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    }
    r30 = (r30 + 340);
    r31 = (r31 + 1);
}

loc_800D4540:
{
}

loc_800D4544:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(r29))) {
        goto loc_800D4528;
    }
}

loc_800D4548:
{
    r3 = r28;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800D44C8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800D44C8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003A gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D44C8 func_800D44C8 preserves=true fpr_mask=0x00000000
