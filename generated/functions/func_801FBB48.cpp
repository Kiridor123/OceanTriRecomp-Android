#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_801FBB48_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];
    ctx->gpr[5] = arg_r5;

    goto loc_801FBB48;

loc_801FBB48:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x8004D1A4 (3 guest instruction(s))
    r3 = 0x80670000u;
    r3 = (r3 + -14744);
    // end of inlined leaf 0x8004D1A4
    r0 = MemoryInline::FlatRead8((r3 + 482));
}

loc_801FBB60:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_801FBB7C;
    }
}

loc_801FBB64:
{
    r3 = MemoryInline::FlatRead32((r3 + 1008));
}

loc_801FBB6C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_801FBB7C;
    }
}

loc_801FBB70:
{
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = (r4 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8004D14Cu>(ctx);
}

loc_801FBB7C:
{
    r0 = 0;
    r3 = 0x80660000u;
    MemoryInline::FlatWriteRam16((r3 + -19148), static_cast<uint16_t>(r0));
    r3 = (r3 + -19148);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 26u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 4), r0);
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 12), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r3 + 16), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 13), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 14u, (r3 + 18), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r3 + 14), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 16u, (r3 + 20), r0);
        MemoryInline::WriteResolved16(guest_range_0, 18u, (r3 + 22), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 20u, (r3 + 24), r0);
        MemoryInline::WriteResolved16(guest_range_0, 22u, (r3 + 26), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r3 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801FBB48(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801FBB48_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801FBB48 func_801FBB48 preserves=true fpr_mask=0x00000000
