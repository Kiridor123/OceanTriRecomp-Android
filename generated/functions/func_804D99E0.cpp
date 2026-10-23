#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D99E0_ra70_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r5, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mdest_3 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_mrot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = arg_r6;
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_804D99E0;

loc_804D99E0:
{
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 7u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, r4, static_cast<uint16_t>(r0));
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 8u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r5);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(13));
    r3 = (r3_rot_0 & 1);
    r7 = (0 - r3);
    r3 = (r7 & 256);
    MemoryInline::WriteResolved16(guest_range_1, 0u, r4, static_cast<uint16_t>(r3));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r5);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(11));
    r3 = (r3_rot_1 & 1);
    r3 = (0 - r3);
    r6 = (r3 & 512);
    r6_mrot_0 = (r7 & 256);
    r6_mdest_0 = (r6 & -257);
    r6 = (r6_mdest_0 | r6_mrot_0);
    MemoryInline::WriteResolved16(guest_range_1, 0u, r4, static_cast<uint16_t>(r6));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r5);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_2 & 1);
    r3 = (0 - r3);
    r6_mrot_1 = (r3 & 1024);
    r6_mdest_1 = (r6 & -1025);
    r6 = (r6_mdest_1 | r6_mrot_1);
    MemoryInline::WriteResolved16(guest_range_1, 0u, r4, static_cast<uint16_t>(r6));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r5);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r3 = (r3_rot_3 & 1);
    r3 = (0 - r3);
    r6_mrot_2 = (r3 & 2048);
    r6_mdest_2 = (r6 & -2049);
    r6 = (r6_mdest_2 | r6_mrot_2);
    MemoryInline::WriteResolved16(guest_range_1, 0u, r4, static_cast<uint16_t>(r6));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r5);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(12));
    r3 = (r3_rot_4 & 1);
    r3 = (0 - r3);
    r6_mrot_3 = (r3 & 4096);
    r6_mdest_3 = (r6 & -4097);
    r6 = (r6_mdest_3 | r6_mrot_3);
    MemoryInline::WriteResolved16(guest_range_1, 0u, r4, static_cast<uint16_t>(r6));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r3 = (r3_rot_5 & 65535);
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r4 + 2), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_6 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r4 + 3), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r4 + 4), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r3 = (r3_rot_7 & 16777215);
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r4 + 5), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r5);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r3 = (r3_rot_8 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r4 + 6), static_cast<uint8_t>(r3));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(170));
}

loc_804D9A8C:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r5);
    MemoryInline::FlatWrite8((r4 + 7), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 9), static_cast<uint8_t>(r0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_804D9AAC;
    }
}

loc_804D9AA0:
{
    r0 = (r6 & 65535);
    r0 = (r0 | 64);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
}

loc_804D9AAC:
{
    r0 = MemoryInline::FlatRead8((r4 + 7));
}

loc_804D9AB4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(170))) {
        goto loc_804D9AC4;
    }
}

loc_804D9AB8:
{
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 | 32);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
}

loc_804D9AC4:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
    r6 = MemoryInline::FlatRead8((r4 + 3));
    r0 = (r3 + -128);
    r5 = MemoryInline::FlatRead8((r4 + 4));
    r3 = MemoryInline::FlatRead8((r4 + 5));
    r6 = (r6 + -128);
    r5 = (r5 + -128);
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    r0 = (r3 + -128);
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

extern "C" void func_804D99E0(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_804D99E0_ra70_0_0_0(ctx, ctx->gpr[4], ctx->gpr[5], ctx->gpr[6]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000071 gpr_write=0x000000E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804D99E0 func_804D99E0 preserves=true fpr_mask=0x00000000
