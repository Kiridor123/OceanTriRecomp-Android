#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8031C050_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    MKW_GUEST_ENTER(0x8031C050u);
    goto loc_8031C050;

loc_8031C050:
{
    r7 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r7)) << 16) | static_cast<uint16_t>(r7)))) {
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r3 + 6), r7);
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r3 + 4), r7);
    }
    r6 = 65536;
    r0 = (r6 + -1);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 10), r0);
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 8), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r3 + 22), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r7);
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r3 + 14), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

}

extern "C" void func_8031C050(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8031C050_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x000000C1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8031C050 func_8031C050 preserves=true fpr_mask=0x00000000
