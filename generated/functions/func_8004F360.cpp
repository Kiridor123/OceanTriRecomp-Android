#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8004F360_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t r4_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];

    goto loc_8004F360;

loc_8004F360:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = (r4 & 255);
    // inline leaf 0x8004F0D8 (6 guest instruction(s))
    r0 = (r3 & 255);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r4 = (r4_rot_0 & -256);
    r3 = 0x80670000u;
    r0 = (r3 + -13664);
    r3 = (r0 + r4);
    // end of inlined leaf 0x8004F0D8
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 3), 0, 17u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 3));
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 1482), 0, 17u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r31 + 1482), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r31 + 1483), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 5));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r31 + 1484), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r31 + 1485), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 7));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r31 + 1486), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r31 + 1487), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 9));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r31 + 1488), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 10));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r31 + 1489), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r3 + 11));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r31 + 1490), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r3 + 12));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r31 + 1491), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r3 + 13));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r31 + 1492), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r3 + 14));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r31 + 1493), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 15));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r31 + 1494), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r3 + 16));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r31 + 1495), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r3 + 17));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r31 + 1496), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r3 + 18));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r31 + 1497), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r3 + 19));
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r31 + 1498), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004F360(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004F360_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004F360 func_8004F360 preserves=true fpr_mask=0x00000000
