#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804F62C0_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr1_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_10 = 0;
    uint32_t r0_mdest_11 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mdest_7 = 0;
    uint32_t r0_mdest_8 = 0;
    uint32_t r0_mdest_9 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_10 = 0;
    uint32_t r0_mrot_11 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_mrot_7 = 0;
    uint32_t r0_mrot_8 = 0;
    uint32_t r0_mrot_9 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_804F62C0;

loc_804F62C0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 4u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r7), static_cast<uint32_t>(21));
}

loc_804F62C8:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r6, 0, 21u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, r6);
    MemoryInline::FlatWrite8((r3 + 64), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r6 + 6));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r6 + 1));
    r0 = (static_cast<int32_t>(r0) >> 6);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0_mrot_0 = (r0_rot_0 & 1020);
    r0_mdest_0 = (r0 & -1021);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWrite16((r3 + 54), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r6 + 6));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r6 + 2));
    r5 = (static_cast<int32_t>(r0) >> 4);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 65532);
    r0_mrot_1 = (r5 & 3);
    r0_mdest_1 = (r0 & -4);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite16((r3 + 56), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r6 + 6));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r6 + 3));
    r5 = (static_cast<int32_t>(r0) >> 2);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 65532);
    r0_mrot_2 = (r5 & 3);
    r0_mdest_2 = (r0 & -4);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite16((r3 + 58), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r6 + 4));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r6 + 6));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 65532);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r0_mrot_3 = (r5 & 3);
    r0_mdest_3 = (r0 & -4);
    r0 = (r0_mdest_3 | r0_mrot_3);
    MemoryInline::FlatWrite16((r3 + 60), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r6 + 7));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r6 + 5));
    r0 = (static_cast<int32_t>(r0) >> 6);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0_mrot_4 = (r0_rot_4 & 1020);
    r0_mdest_4 = (r0 & -1021);
    r0 = (r0_mdest_4 | r0_mrot_4);
    MemoryInline::FlatWrite16((r3 + 62), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r6 + 8));
    MemoryInline::FlatWrite8((r3 + 52), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 14u, (r6 + 14));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r6 + 9));
    r0 = (static_cast<int32_t>(r0) >> 6);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0_mrot_5 = (r0_rot_5 & 1020);
    r0_mdest_5 = (r0 & -1021);
    r0 = (r0_mdest_5 | r0_mrot_5);
    MemoryInline::FlatWrite16((r3 + 42), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 14u, (r6 + 14));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r6 + 10));
    r5 = (static_cast<int32_t>(r0) >> 4);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & 65532);
    r0_mrot_6 = (r5 & 3);
    r0_mdest_6 = (r0 & -4);
    r0 = (r0_mdest_6 | r0_mrot_6);
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 14u, (r6 + 14));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r6 + 11));
    r5 = (static_cast<int32_t>(r0) >> 2);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & 65532);
    r0_mrot_7 = (r5 & 3);
    r0_mdest_7 = (r0 & -4);
    r0 = (r0_mdest_7 | r0_mrot_7);
    MemoryInline::FlatWrite16((r3 + 46), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 12u, (r6 + 12));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 14u, (r6 + 14));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & 65532);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r0_mrot_8 = (r5 & 3);
    r0_mdest_8 = (r0 & -4);
    r0 = (r0_mdest_8 | r0_mrot_8);
    MemoryInline::FlatWrite16((r3 + 48), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 15u, (r6 + 15));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 13u, (r6 + 13));
    r0 = (static_cast<int32_t>(r0) >> 6);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0_mrot_9 = (r0_rot_9 & 1020);
    r0_mdest_9 = (r0 & -1021);
    r0 = (r0_mdest_9 | r0_mrot_9);
    MemoryInline::FlatWrite16((r3 + 50), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r6 + 7));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 15u, (r6 + 15));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_10 & 65520);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r0 = (r0 & 62448);
}

loc_804F63F0:
{
    r5 = (static_cast<int32_t>(r5) >> 2);
    r0_mrot_10 = (r5 & 15);
    r0_mdest_10 = (r0 & -16);
    r0 = (r0_mdest_10 | r0_mrot_10);
    MemoryInline::FlatWrite16((r3 + 66), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 15u, (r6 + 15));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r0 = (r0 & 3);
    MemoryInline::FlatWrite8((r3 + 70), static_cast<uint8_t>(r0));
    if (((cr & 0x08000000u) == 0)) {
        goto loc_804F6438;
    }
}

loc_804F6410:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 68), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    MemoryInline::FlatWrite8((r3 + 71), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    MemoryInline::FlatWrite8((r3 + 72), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    MemoryInline::FlatWrite8((r3 + 73), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return r3;
}

loc_804F6438:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 17u, (r6 + 17));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 16u, (r6 + 16));
    r0 = (static_cast<int32_t>(r0) >> 6);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0_mrot_11 = (r0_rot_11 & 1020);
    r0_mdest_11 = (r0 & -1021);
    r0 = (r0_mdest_11 | r0_mrot_11);
    MemoryInline::FlatWrite16((r3 + 68), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 18u, (r6 + 18));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r0 = (r0 & 7);
    MemoryInline::FlatWrite8((r3 + 71), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 19u, (r6 + 19));
    MemoryInline::FlatWrite8((r3 + 72), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 20u, (r6 + 20));
    MemoryInline::FlatWrite8((r3 + 73), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_804F62C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804F62C0_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000A9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x02 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804F62C0 func_804F62C0 preserves=true fpr_mask=0x00000000
