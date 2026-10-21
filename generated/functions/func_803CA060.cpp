#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803CA060_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_10 = 0;
    uint32_t r8_rot_11 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r8_rot_8 = 0;
    uint32_t r8_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x803CA060u);
    goto loc_803CA060;

loc_803CA060:
{
    r5 = 65536;
    r8 = (r5 + -1);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r6 = 0;
    r0 = (r4 & 65535);
}

loc_803CA078:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803CA230;
    }
}

loc_803CA07C:
{
    r7 = (r4 + 65536);
    r7 = (r7 + -8);
}

loc_803CA088:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_803CA1DC;
    }
}

loc_803CA08C:
{
    r3 = 0x80570000u;
    r3 = (r3 + 5088);
    r7 = (r7 & 65535);
    r0 = (r7 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_803CA0A8:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(0))) {
        goto loc_803CA1DC;
    }
}

loc_803CA0AC:
{
    r0 = (r8 & 65535);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r8 = (r8_rot_2 & -256);
    r7 = (static_cast<int32_t>(r0) >> 8);
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r5);
    r0 = (r7 ^ r0);
    r0 = (r0 & 255);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_2);
    r0 = (r8 ^ r0);
    r0 = (r0 & 65535);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r8 = (r8_rot_3 & -256);
    r7 = (static_cast<int32_t>(r0) >> 8);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r5 + 1));
    r0 = (r7 ^ r0);
    r0 = (r0 & 255);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_3);
    r0 = (r8 ^ r0);
    r0 = (r0 & 65535);
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r8 = (r8_rot_4 & -256);
    r7 = (static_cast<int32_t>(r0) >> 8);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r5 + 2));
    r0 = (r7 ^ r0);
    r0 = (r0 & 255);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_4);
    r0 = (r8 ^ r0);
    r0 = (r0 & 65535);
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r8 = (r8_rot_5 & -256);
    r7 = (static_cast<int32_t>(r0) >> 8);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r5 + 3));
    r0 = (r7 ^ r0);
    r0 = (r0 & 255);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r3_addr_5 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_5);
    r0 = (r8 ^ r0);
    r0 = (r0 & 65535);
    r8_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r8 = (r8_rot_6 & -256);
    r7 = (static_cast<int32_t>(r0) >> 8);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r5 + 4));
    r0 = (r7 ^ r0);
    r0 = (r0 & 255);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r3_addr_6 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_6);
    r0 = (r8 ^ r0);
    r0 = (r0 & 65535);
    r8_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r8 = (r8_rot_7 & -256);
    r7 = (static_cast<int32_t>(r0) >> 8);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r5 + 5));
    r0 = (r7 ^ r0);
    r0 = (r0 & 255);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r3_addr_7 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_7);
    r0 = (r8 ^ r0);
    r0 = (r0 & 65535);
    r8_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r8 = (r8_rot_8 & -256);
    r7 = (static_cast<int32_t>(r0) >> 8);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r5 + 6));
    r0 = (r7 ^ r0);
    r0 = (r0 & 255);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & -2);
    r3_addr_8 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_8);
    r0 = (r8 ^ r0);
    r0 = (r0 & 65535);
    r8_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r8 = (r8_rot_9 & -256);
    r7 = (static_cast<int32_t>(r0) >> 8);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r5 + 7));
    r0 = (r7 ^ r0);
    r0 = (r0 & 255);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r3_addr_9 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_9);
    r0 = (r8 ^ r0);
    r8 = (r0 & 65535);
    r5 = (r5 + 8);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803CA0AC;
    }
}

loc_803CA1DC:
{
    r3 = 0x80570000u;
    r7 = (r3 + 5088);
    r3 = (r4 & 65535);
    r4 = (r6 & 65535);
    r0 = (r3 - r4);
    ctr = r0;
}

loc_803CA1F8:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3))) {
        goto loc_803CA230;
    }
}

loc_803CA1FC:
{
    r0 = (r8 & 65535);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r4 = (r4_rot_2 & -256);
    r3 = (static_cast<int32_t>(r0) >> 8);
    r0 = MemoryInline::FlatRead8(r5);
    r0 = (r3 ^ r0);
    r0 = (r0 & 255);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_13 & -2);
    r7_addr_2 = (r7 + r0);
    r0 = MemoryInline::FlatRead16(r7_addr_2);
    r0 = (r4 ^ r0);
    r8 = (r0 & 65535);
    r6 = (r6 + 1);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803CA1FC;
    }
}

loc_803CA230:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803CA060(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803CA060_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803CA060 func_803CA060 preserves=true fpr_mask=0x00000000
