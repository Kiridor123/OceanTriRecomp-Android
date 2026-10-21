#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80044290_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r6_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80044290u);
    goto loc_80044290;

loc_80044290:
{
    r0 = (r3 & 255);
    r5 = (r0 * 848);
    r3 = 0x80660000u;
    r0 = (r3 + -18480);
    r3 = (r0 + r5);
    r3 = (r3 + 704);
    r5 = 0;
    r0 = 2;
    ctr = r0;
}

loc_800442B4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 8u, true, false);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 0u, r4);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 116), 0, 1u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r3 + 116));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r6 = (r6_rot_2 & -16);
    r0 = (r5 + r3);
    r6 = (r6 + r0);
    MemoryInline::FlatWrite8((r6 + 36), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 1));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r3 + 116));
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r6 = (r6_rot_3 & -16);
    r6 = (r6 + r0);
    MemoryInline::FlatWrite8((r6 + 37), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 2));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r3 + 116));
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r6 = (r6_rot_4 & -16);
    r6 = (r6 + r0);
    MemoryInline::FlatWrite8((r6 + 38), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 3));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r3 + 116));
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r6 = (r6_rot_5 & -16);
    r6 = (r6 + r0);
    MemoryInline::FlatWrite8((r6 + 39), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 4));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r3 + 116));
    r6_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r6 = (r6_rot_6 & -16);
    r6 = (r6 + r0);
    MemoryInline::FlatWrite8((r6 + 40), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 5));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r3 + 116));
    r6_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r6 = (r6_rot_7 & -16);
    r6 = (r6 + r0);
    MemoryInline::FlatWrite8((r6 + 41), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 6));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r3 + 116));
    r6_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r6 = (r6_rot_8 & -16);
    r6 = (r6 + r0);
    MemoryInline::FlatWrite8((r6 + 42), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r4 + 7));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r3 + 116));
    r6_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r6 = (r6_rot_9 & -16);
    r6 = (r6 + r0);
    MemoryInline::FlatWrite8((r6 + 43), static_cast<uint8_t>(r7));
    r4 = (r4 + 8);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800442B4;
    }
}

loc_80044364:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_80044290(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80044290_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80044290 func_80044290 preserves=true fpr_mask=0x00000000
