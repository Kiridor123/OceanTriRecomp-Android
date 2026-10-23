#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_805595F4_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];

    goto loc_805595F4;

loc_805595F4:
{
    r3 = 0x80650000u;
    r0 = MemoryInline::FlatRead32((r13 + -18416));
    r3 = (r3 + 12584);
    r4 = MemoryInline::FlatRead32((r13 + -18412));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 156), 0, 1348u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 156), r0);
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 220), r0);
    MemoryInline::WriteResolved32(guest_range_0, 128u, (r3 + 284), r0);
    MemoryInline::WriteResolved32(guest_range_0, 192u, (r3 + 348), r0);
    MemoryInline::WriteResolved32(guest_range_0, 256u, (r3 + 412), r0);
    MemoryInline::WriteResolved32(guest_range_0, 320u, (r3 + 476), r0);
    MemoryInline::WriteResolved32(guest_range_0, 384u, (r3 + 540), r0);
    MemoryInline::WriteResolved32(guest_range_0, 448u, (r3 + 604), r0);
    MemoryInline::WriteResolved32(guest_range_0, 512u, (r3 + 668), r0);
    MemoryInline::WriteResolved32(guest_range_0, 576u, (r3 + 732), r0);
    MemoryInline::WriteResolved32(guest_range_0, 640u, (r3 + 796), r0);
    MemoryInline::WriteResolved32(guest_range_0, 704u, (r3 + 860), r0);
    MemoryInline::WriteResolved32(guest_range_0, 768u, (r3 + 924), r0);
    MemoryInline::WriteResolved32(guest_range_0, 832u, (r3 + 988), r0);
    MemoryInline::WriteResolved32(guest_range_0, 896u, (r3 + 1052), r0);
    MemoryInline::WriteResolved32(guest_range_0, 960u, (r3 + 1116), r0);
    MemoryInline::WriteResolved32(guest_range_0, 1024u, (r3 + 1180), r0);
    MemoryInline::WriteResolved32(guest_range_0, 1088u, (r3 + 1244), r0);
    MemoryInline::WriteResolved32(guest_range_0, 1152u, (r3 + 1308), r0);
    MemoryInline::WriteResolved32(guest_range_0, 1216u, (r3 + 1372), r0);
    MemoryInline::WriteResolved32(guest_range_0, 1280u, (r3 + 1436), r4);
    MemoryInline::WriteResolved32(guest_range_0, 1344u, (r3 + 1500), r4);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_805595F4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805595F4_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805595F4 func_805595F4 preserves=true fpr_mask=0x00000000
