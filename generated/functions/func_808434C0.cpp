#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808434C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r9_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];

    MKW_GUEST_ENTER(0x808434C0u);
    goto loc_808434C0;

loc_808434C0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 28u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 16));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 4));
    r5 = MemoryInline::FlatRead32((r6 + 8));
    r0 = MemoryInline::FlatRead32((r6 + 12));
    r0 = (r5 + r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80843600;
    }
}

loc_808434D8:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 32), r0);
    r5 = 613548032;
    r10 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 8));
    r0 = MemoryInline::FlatRead32((r6 + 8));
    r5 = (r5 + 18725);
    r7 = MemoryInline::FlatRead32((r6 + 12));
    r8 = 65536;
    r6 = (static_cast<uint32_t>((static_cast<uint64_t>(r5) * static_cast<uint64_t>(r0)) >> 32));
    r9 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 24));
    r7 = (r0 + r7);
    r10 = MemoryInline::FlatRead32((r10 + 36));
    r9 = MemoryInline::FlatRead32((r9 + 4));
    r11 = (r7 + -1);
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r5) * static_cast<uint64_t>(r11)) >> 32));
    r5 = (r0 - r6);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 28));
    r10 = (r10 + r9);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r5 = (r5_rot_0 & 2147483647);
    MemoryInline::FlatWrite32((r4 + 150), r8);
    r8 = (r5 + r6);
    r6 = (r11 - r7);
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r9 = (r9_rot_0 & 536870911);
    r5 = (r10 + 2);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(31));
    r6 = (r6_rot_0 & 2147483647);
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_0 & -16);
    r6 = (r6 + r7);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r7 = (r7_rot_0 & 536870911);
    r9 = (r9 * 14);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_1 & -16);
    r0 = (r0 - r9);
    r0 = (r0 + r10);
    r7 = (r7 * 14);
    r8 = (r0 + r8);
    r0 = (r11 - r7);
    r7 = (r8 + 2);
    MemoryInline::FlatWrite32((r4 + 154), r7);
    r0 = (r0 + r10);
    r6 = (r0 + r6);
    r0 = (r6 + 2);
    MemoryInline::FlatWrite32((r4 + 158), r0);
    MemoryInline::FlatWrite32((r4 + 162), r5);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 46u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, r3);
    MemoryInline::FlatWrite32((r4 + 166), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r3 + 4));
    MemoryInline::FlatWrite32((r4 + 170), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r3 + 8));
    MemoryInline::FlatWrite32((r4 + 174), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 12));
    MemoryInline::FlatWrite32((r4 + 178), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r3 + 16));
    MemoryInline::FlatWrite32((r4 + 182), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r3 + 20));
    MemoryInline::FlatWrite32((r4 + 186), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r3 + 24));
    MemoryInline::FlatWrite32((r4 + 190), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r3 + 28));
    MemoryInline::FlatWrite32((r4 + 194), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r3 + 32));
    MemoryInline::FlatWrite32((r4 + 198), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r3 + 36));
    MemoryInline::FlatWrite32((r4 + 202), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 40u, (r3 + 40));
    MemoryInline::FlatWrite16((r4 + 220), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 42u, (r3 + 42));
    MemoryInline::FlatWrite16((r4 + 222), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 44u, (r3 + 44));
    MemoryInline::FlatWrite16((r4 + 224), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 28));
    r0 = (r0 & -30721);
    r0 = (r0 | 262144);
    r0 = (r0 | 33792);
    MemoryInline::FlatWrite32((r4 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return;
}

loc_80843600:
{
    r7 = 0;
    MemoryInline::FlatWrite32((r3 + 32), r7);
    r5 = 613548032;
    r9 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 24));
    r0 = (r5 + 18725);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 8));
    r5 = MemoryInline::FlatRead32((r9 + 8));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 28));
    r8 = (r5 + -1);
    r5 = MemoryInline::FlatRead32((r6 + 36));
    r6 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r8)) >> 32));
    r0 = MemoryInline::FlatRead32((r9 + 4));
    r9 = (r5 + r0);
    MemoryInline::FlatWrite32((r4 + 150), r7);
    MemoryInline::FlatWrite32((r4 + 154), r9);
    r0 = (r9 + 2);
    r5 = (r8 - r6);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r5 = (r5_rot_1 & 2147483647);
    r6 = (r5 + r6);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r5 = (r5_rot_2 & 536870911);
    r7 = (r5 * 14);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & -16);
    r6 = (r8 - r7);
    r6 = (r6 + r9);
    r5 = (r6 + r5);
    r5 = (r5 + 2);
    MemoryInline::FlatWrite32((r4 + 158), r5);
    MemoryInline::FlatWrite32((r4 + 162), r0);
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 40u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, r3);
    MemoryInline::FlatWrite32((r4 + 166), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r3 + 4));
    MemoryInline::FlatWrite32((r4 + 170), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r3 + 8));
    MemoryInline::FlatWrite32((r4 + 174), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r3 + 12));
    MemoryInline::FlatWrite32((r4 + 178), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r3 + 16));
    MemoryInline::FlatWrite32((r4 + 182), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r3 + 20));
    MemoryInline::FlatWrite32((r4 + 186), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r3 + 24));
    MemoryInline::FlatWrite32((r4 + 190), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r3 + 28));
    MemoryInline::FlatWrite32((r4 + 194), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r3 + 32));
    MemoryInline::FlatWrite32((r4 + 198), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r3 + 36));
    MemoryInline::FlatWrite32((r4 + 202), r0);
    r0 = MemoryInline::FlatRead32((r4 + 28));
    r0 = (r0 & -30721);
    r0 = (r0 | 33792);
    MemoryInline::FlatWrite32((r4 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808434C0 func_808434C0 preserves=true fpr_mask=0x00000000
