#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804E2070_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r30_addr_6 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_10 = 0;
    uint32_t r8_addr_11 = 0;
    uint32_t r8_addr_12 = 0;
    uint32_t r8_addr_13 = 0;
    uint32_t r8_addr_14 = 0;
    uint32_t r8_addr_15 = 0;
    uint32_t r8_addr_16 = 0;
    uint32_t r8_addr_17 = 0;
    uint32_t r8_addr_18 = 0;
    uint32_t r8_addr_19 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_20 = 0;
    uint32_t r8_addr_21 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_addr_4 = 0;
    uint32_t r8_addr_5 = 0;
    uint32_t r8_addr_6 = 0;
    uint32_t r8_addr_7 = 0;
    uint32_t r8_addr_8 = 0;
    uint32_t r8_addr_9 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r8_rot_8 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_804E2070;

loc_804E2070:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r4 = MemoryInline::FlatRead32((r13 + -14712));
    r3 = 1048576;
    MemoryInline::FlatWrite32((r13 + -14616), r4);
    r11 = (r3 + -1);
    r0 = (r4 + 257);
    r6 = MemoryInline::FlatRead32((r13 + -14716));
    MemoryInline::FlatWrite32((r13 + -14620), r0);
    r12 = -1;
    r0 = 0;
    r10 = 1;
    r3 = MemoryInline::FlatRead32((r6 + 1692));
    r9 = 8;
    r7 = 2;
    r5 = MemoryInline::FlatRead8(r3);
    r4 = (r3 + 2);
    r3 = MemoryInline::FlatRead8((r3 + 1));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r3_mrot_0 = (r3_rot_0 & 65280);
    r3_mdest_0 = (r3 & -65281);
    r3 = (r3_mdest_0 | r3_mrot_0);
    r3 = (r3 + -2);
    MemoryInline::FlatWrite32((r6 + 1692), r4);
    r5 = (r3 & 65535);
}

loc_804E20D4:
{
    r30 = MemoryInline::FlatRead32((r13 + -14716));
    r6 = 0;
    r3 = 0;
    r8 = MemoryInline::FlatRead32((r30 + 1692));
    r4 = (r8 + 1);
    MemoryInline::FlatWrite32((r30 + 1692), r4);
    r4 = MemoryInline::FlatRead8(r8);
    r30 = MemoryInline::FlatRead32((r13 + -14716));
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r8 = (r8_rot_2 & 30);
    r4 = (static_cast<int32_t>(r4) >> 4);
    r4 = (r8 + r4);
    r8 = MemoryInline::FlatRead32((r30 + 1692));
    MemoryInline::FlatWrite32((r13 + -14612), r8);
    r4 = (r4 & 255);
    ctr = r7;
}

loc_804E2110:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -14716), 0, 4u, true, false);
    r31 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -14716));
    r3 = (r3 + 8);
    r30 = MemoryInline::FlatRead32((r31 + 1692));
    r8 = (r30 + 1);
    MemoryInline::FlatWrite32((r31 + 1692), r8);
    r31 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -14716));
    r8 = MemoryInline::FlatRead8(r30);
    r30 = MemoryInline::FlatRead32((r31 + 1692));
    r6 = (r6 + r8);
    r8 = (r30 + 1);
    MemoryInline::FlatWrite32((r31 + 1692), r8);
    r31 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -14716));
    r8 = MemoryInline::FlatRead8(r30);
    r30 = MemoryInline::FlatRead32((r31 + 1692));
    r6 = (r6 + r8);
    r8 = (r30 + 1);
    MemoryInline::FlatWrite32((r31 + 1692), r8);
    r31 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -14716));
    r8 = MemoryInline::FlatRead8(r30);
    r30 = MemoryInline::FlatRead32((r31 + 1692));
    r6 = (r6 + r8);
    r8 = (r30 + 1);
    MemoryInline::FlatWrite32((r31 + 1692), r8);
    r31 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -14716));
    r8 = MemoryInline::FlatRead8(r30);
    r30 = MemoryInline::FlatRead32((r31 + 1692));
    r6 = (r6 + r8);
    r8 = (r30 + 1);
    MemoryInline::FlatWrite32((r31 + 1692), r8);
    r31 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -14716));
    r8 = MemoryInline::FlatRead8(r30);
    r30 = MemoryInline::FlatRead32((r31 + 1692));
    r6 = (r6 + r8);
    r8 = (r30 + 1);
    MemoryInline::FlatWrite32((r31 + 1692), r8);
    r31 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -14716));
    r8 = MemoryInline::FlatRead8(r30);
    r30 = MemoryInline::FlatRead32((r31 + 1692));
    r6 = (r6 + r8);
    r8 = (r30 + 1);
    MemoryInline::FlatWrite32((r31 + 1692), r8);
    r31 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -14716));
    r8 = MemoryInline::FlatRead8(r30);
    r30 = MemoryInline::FlatRead32((r31 + 1692));
    r6 = (r6 + r8);
    r8 = (r30 + 1);
    MemoryInline::FlatWrite32((r31 + 1692), r8);
    r8 = MemoryInline::FlatRead8(r30);
    r6 = (r6 + r8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804E2110;
    }
}

loc_804E21D8:
{
    r3 = (r4 * 224);
    r27 = MemoryInline::FlatRead32((r13 + -14716));
    r8 = (r6 & 65535);
    r31 = MemoryInline::FlatRead32((r27 + 1692));
    r28 = 0;
    r30 = (r27 + r3);
    MemoryInline::FlatWrite32((r30 + 832), r31);
    r29 = 1;
    r31 = MemoryInline::FlatRead32((r13 + -14716));
    r30 = MemoryInline::FlatRead32((r31 + 1692));
    r8 = (r30 + r8);
    MemoryInline::FlatWrite32((r31 + 1692), r8);
}

loc_804E2208:
{
    r8 = MemoryInline::FlatRead32((r13 + -14612));
    r8 = (r8 + r29);
    r30 = MemoryInline::FlatRead8((r8 + -1));
}

loc_804E2218:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_804E22A8;
    }
}

loc_804E221C:
{
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(29));
    r8 = (r8_rot_4 & 536870911);
}

loc_804E2220:
{
    ctr = r8;
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804E2294;
    }
}

loc_804E2228:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r13 + -14616), 0, 4u, true, false);
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -14616));
    r8_addr_4 = (r8 + r28);
    MemoryInline::FlatWrite8(r8_addr_4, static_cast<uint8_t>(r29));
    r28 = (r28 + 1);
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -14616));
    r8_addr_5 = (r8 + r28);
    MemoryInline::FlatWrite8(r8_addr_5, static_cast<uint8_t>(r29));
    r28 = (r28 + 1);
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -14616));
    r8_addr_6 = (r8 + r28);
    MemoryInline::FlatWrite8(r8_addr_6, static_cast<uint8_t>(r29));
    r28 = (r28 + 1);
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -14616));
    r8_addr_7 = (r8 + r28);
    MemoryInline::FlatWrite8(r8_addr_7, static_cast<uint8_t>(r29));
    r28 = (r28 + 1);
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -14616));
    r8_addr_8 = (r8 + r28);
    MemoryInline::FlatWrite8(r8_addr_8, static_cast<uint8_t>(r29));
    r28 = (r28 + 1);
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -14616));
    r8_addr_9 = (r8 + r28);
    MemoryInline::FlatWrite8(r8_addr_9, static_cast<uint8_t>(r29));
    r28 = (r28 + 1);
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -14616));
    r8_addr_10 = (r8 + r28);
    MemoryInline::FlatWrite8(r8_addr_10, static_cast<uint8_t>(r29));
    r28 = (r28 + 1);
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -14616));
    r8_addr_11 = (r8 + r28);
    MemoryInline::FlatWrite8(r8_addr_11, static_cast<uint8_t>(r29));
    r28 = (r28 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804E2228;
    }
}

loc_804E228C:
{
    r30 = (r30 & 7);
}

loc_804E2290:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_804E22A8;
    }
}

loc_804E2294:
{
    ctr = r30;
}

loc_804E2298:
{
    r8 = MemoryInline::FlatRead32((r13 + -14616));
    r8_addr_14 = (r8 + r28);
    MemoryInline::FlatWrite8(r8_addr_14, static_cast<uint8_t>(r29));
    r28 = (r28 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804E2298;
    }
}

loc_804E22A8:
{
    r29 = (r29 + 1);
}

loc_804E22B0:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(16))) {
        goto loc_804E2208;
    }
}

loc_804E22B4:
{
    r8 = MemoryInline::FlatRead32((r13 + -14616));
    r27 = 0;
    r29 = 0;
    r8_addr_16 = (r8 + r28);
    MemoryInline::FlatWrite8(r8_addr_16, static_cast<uint8_t>(r0));
    r30 = MemoryInline::FlatRead32((r13 + -14616));
    r28 = MemoryInline::FlatRead8(r30);
    goto loc_804E2308;
}

loc_804E22D0:
{
    r31 = (r28 & 255);
    goto loc_804E22EC;
}

loc_804E22D8:
{
    r30 = MemoryInline::FlatRead32((r13 + -14620));
    r8_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r8 = (r8_rot_8 & 131070);
    r27 = (r27 + 1);
    r30_addr_6 = (r30 + r8);
    MemoryInline::FlatWrite16(r30_addr_6, static_cast<uint16_t>(r29));
    r29 = (r29 + 1);
}

loc_804E22EC:
{
    r30 = MemoryInline::FlatRead32((r13 + -14616));
    r8 = (r27 & 65535);
    r30_addr_5 = (r30 + r8);
    r8 = MemoryInline::FlatRead8(r30_addr_5);
}

loc_804E22FC:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(r8))) {
        goto loc_804E22D8;
    }
}

loc_804E2300:
{
    r29_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(1));
    r29 = (r29_rot_3 & 65534);
    r28 = (r28 + 1);
}

loc_804E2308:
{
    r8 = (r27 & 65535);
    r30_addr_3 = (r30 + r8);
    r8 = MemoryInline::FlatRead8(r30_addr_3);
}

loc_804E2314:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_804E22D0;
    }
}

loc_804E2318:
{
    r8 = MemoryInline::FlatRead32((r13 + -14716));
    r28 = 0;
    r27 = 1;
    r31 = (r8 + r3);
    r29 = (r31 + 772);
    ctr = r9;
}

loc_804E2330:
{
    r3 = MemoryInline::FlatRead32((r13 + -14612));
    r3 = (r3 + r27);
    r3 = MemoryInline::FlatRead8((r3 + -1));
}

loc_804E2340:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804E2380;
    }
}

loc_804E2344:
{
    r8 = MemoryInline::FlatRead32((r13 + -14620));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & -2);
    r8_addr_18 = (r8 + r3);
    r3 = MemoryInline::FlatRead16(r8_addr_18);
    r3 = (r28 - r3);
    MemoryInline::FlatWrite32((r29 + 140), r3);
    r3 = MemoryInline::FlatRead32((r13 + -14612));
    r8 = MemoryInline::FlatRead32((r13 + -14620));
    r3 = (r3 + r27);
    r3 = MemoryInline::FlatRead8((r3 + -1));
    r28 = (r28 + r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & -2);
    r3 = (r8 + r3);
    r3 = MemoryInline::FlatRead16((r3 + -2));
    MemoryInline::FlatWrite32((r29 + 68), r3);
    goto loc_804E2388;
}

loc_804E2380:
{
    MemoryInline::FlatWrite32((r29 + 68), r12);
    MemoryInline::FlatWrite32((r29 + 140), r12);
}

loc_804E2388:
{
    r3 = MemoryInline::FlatRead32((r13 + -14612));
    r27 = (r27 + 1);
    r3 = (r3 + r27);
    r3 = MemoryInline::FlatRead8((r3 + -1));
}

loc_804E239C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804E23DC;
    }
}

loc_804E23A0:
{
    r8 = MemoryInline::FlatRead32((r13 + -14620));
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & -2);
    r8_addr_20 = (r8 + r3);
    r3 = MemoryInline::FlatRead16(r8_addr_20);
    r3 = (r28 - r3);
    MemoryInline::FlatWrite32((r29 + 144), r3);
    r3 = MemoryInline::FlatRead32((r13 + -14612));
    r8 = MemoryInline::FlatRead32((r13 + -14620));
    r3 = (r3 + r27);
    r3 = MemoryInline::FlatRead8((r3 + -1));
    r28 = (r28 + r3);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(1));
    r3 = (r3_rot_7 & -2);
    r3 = (r8 + r3);
    r3 = MemoryInline::FlatRead16((r3 + -2));
    MemoryInline::FlatWrite32((r29 + 72), r3);
    goto loc_804E23E4;
}

loc_804E23DC:
{
    MemoryInline::FlatWrite32((r29 + 72), r12);
    MemoryInline::FlatWrite32((r29 + 144), r12);
}

loc_804E23E4:
{
    r29 = (r29 + 8);
    r27 = (r27 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804E2330;
    }
}

loc_804E23F0:
{
    MemoryInline::FlatWrite32((r31 + 904), r11);
    r3 = (r6 + 17);
    r3 = (r5 - r3);
    r4 = PPC_Slw(static_cast<uint32_t>(r10), static_cast<uint32_t>(r4));
    r6 = MemoryInline::FlatRead32((r13 + -14716));
    r5 = (r3 & 65535);
}

loc_804E2408:
{
    r3 = MemoryInline::FlatRead8((r6 + 1704));
    r3 = (r3 | r4);
    MemoryInline::FlatWrite8((r6 + 1704), static_cast<uint8_t>(r3));
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804E20D4;
    }
}

loc_804E2418:
{
    r11 = (r1 + 32);
    r3 = 0;
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804E2070(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804E2070_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804E2070 func_804E2070 preserves=true fpr_mask=0x00000000
