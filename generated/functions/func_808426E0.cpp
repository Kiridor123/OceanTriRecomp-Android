#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808426E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
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
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x808426E0u);
    goto loc_808426E0;

loc_808426E0:
{
    r5 = 0x80850000u;
    r0 = 2;
    r4 = (r5 + -30032);
    r7 = MemoryInline::FlatRead32((r5 + -30032));
    r6 = MemoryInline::FlatRead32((r4 + 400));
    r9 = 0;
    r4 = 64;
    ctr = r0;
}

loc_80842700:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r5 = (r5_rot_2 & 1020);
    r0 = (r9 & 255);
    r8 = (r3 + r5);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 8), 0, 4u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 8));
    guest_range_1 = MemoryInline::ResolveRangeHost((r8 + 40), 0, 164u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r8 + 40), r5);
    r5 = (r3 + r0);
    r9 = (r9 + 8);
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r8 + 108), r6);
    guest_range_2 = MemoryInline::ResolveRangeHost((r5 + 236), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r5 + 236), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 132u, (r8 + 172), r7);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r8 + 44), r0);
    MemoryInline::WriteResolved32(guest_range_1, 72u, (r8 + 112), r6);
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r5 + 237), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 136u, (r8 + 176), r7);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r8 + 48), r0);
    MemoryInline::WriteResolved32(guest_range_1, 76u, (r8 + 116), r6);
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r5 + 238), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 140u, (r8 + 180), r7);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r8 + 52), r0);
    MemoryInline::WriteResolved32(guest_range_1, 80u, (r8 + 120), r6);
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r5 + 239), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 144u, (r8 + 184), r7);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r8 + 56), r0);
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r8 + 124), r6);
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r5 + 240), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 148u, (r8 + 188), r7);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r8 + 60), r0);
    MemoryInline::WriteResolved32(guest_range_1, 88u, (r8 + 128), r6);
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r5 + 241), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 152u, (r8 + 192), r7);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r8 + 64), r0);
    MemoryInline::WriteResolved32(guest_range_1, 92u, (r8 + 132), r6);
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r5 + 242), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 156u, (r8 + 196), r7);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r8 + 68), r0);
    MemoryInline::WriteResolved32(guest_range_1, 96u, (r8 + 136), r6);
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r5 + 243), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 160u, (r8 + 200), r7);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80842700;
    }
}

loc_808427B8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000D8 gpr_write=0x000003F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808426E0 func_808426E0 preserves=true fpr_mask=0x00000000
