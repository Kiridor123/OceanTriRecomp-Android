#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804E80B0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r9_rot_0 = 0;
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
    uint32_t r31 = ctx->gpr[31];

    goto loc_804E80B0;

loc_804E80B0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 10), 0, 66u, true, false);
    r8 = MemoryInline::ReadResolved8(guest_range_0, 34u, (r3 + 44));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 14));
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(5));
    r31 = (r31_rot_0 & -32);
    r11 = MemoryInline::ReadResolved32(guest_range_0, 22u, (r3 + 32));
    r8 = (r31 * r0);
    r9 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r3 + 22));
    r10 = MemoryInline::ReadResolved32(guest_range_0, 38u, (r3 + 48));
}

loc_804E80D8:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -32);
    r12 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 10));
    r0 = (r10 + r0);
    r9 = (r8 + r0);
    MemoryInline::FlatWrite32(r4, r9);
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_804E80F4;
    }
}

loc_804E80F0:
{
    goto loc_804E80F8;
}

loc_804E80F4:
{
    r9 = (r9 + r31);
}

loc_804E80F8:
{
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
    r8 = (r8_rot_0 & 1);
    r0 = (r12 & 1);
    r0 = (r0 ^ r8);
    MemoryInline::FlatWrite32(r5, r9);
    r0 = (r0 - r8);
}

loc_804E8110:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_804E8120;
    }
}

loc_804E8114:
{
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r4, r9);
    MemoryInline::FlatWrite32(r5, r0);
}

loc_804E8120:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 & 1073741823);
    MemoryInline::FlatWrite32(r4, r0);
    r0 = MemoryInline::FlatRead32(r5);
    r0 = (r0 & 1073741823);
    MemoryInline::FlatWrite32(r5, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 58u, (r3 + 68));
}

loc_804E8140:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E81C4;
    }
}

loc_804E8144:
{
    r8 = MemoryInline::ReadResolved8(guest_range_0, 34u, (r3 + 44));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 14));
    r31_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(5));
    r31 = (r31_rot_1 & -32);
    r11 = MemoryInline::ReadResolved32(guest_range_0, 22u, (r3 + 32));
    r8 = (r31 * r0);
    r9 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r3 + 22));
    r10 = MemoryInline::ReadResolved32(guest_range_0, 62u, (r3 + 72));
}

loc_804E8164:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -32);
    r12 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 10));
    r0 = (r10 + r0);
    r9 = (r8 + r0);
    MemoryInline::FlatWrite32(r6, r9);
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_804E8180;
    }
}

loc_804E817C:
{
    goto loc_804E8184;
}

loc_804E8180:
{
    r9 = (r9 + r31);
}

loc_804E8184:
{
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
    r8 = (r8_rot_1 & 1);
    r0 = (r12 & 1);
    r0 = (r0 ^ r8);
    MemoryInline::FlatWrite32(r7, r9);
    r0 = (r0 - r8);
}

loc_804E819C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_804E81AC;
    }
}

loc_804E81A0:
{
    r0 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32(r6, r9);
    MemoryInline::FlatWrite32(r7, r0);
}

loc_804E81AC:
{
    r0 = MemoryInline::FlatRead32(r6);
    r0 = (r0 & 1073741823);
    MemoryInline::FlatWrite32(r6, r0);
    r0 = MemoryInline::FlatRead32(r7);
    r0 = (r0 & 1073741823);
    MemoryInline::FlatWrite32(r7, r0);
}

loc_804E81C4:
{
    r0 = MemoryInline::FlatRead32(r4);
    r8 = 16777216;
}

loc_804E81D0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r8))) {
        goto loc_804E8200;
    }
}

loc_804E81D4:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_804E81DC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r8))) {
        goto loc_804E8200;
    }
}

loc_804E81E0:
{
    r0 = MemoryInline::FlatRead32(r6);
}

loc_804E81E8:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r8))) {
        goto loc_804E8200;
    }
}

loc_804E81EC:
{
    r0 = MemoryInline::FlatRead32(r7);
}

loc_804E81F4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r8))) {
        goto loc_804E8200;
    }
}

loc_804E81F8:
{
    r10 = 0;
    goto loc_804E8204;
}

loc_804E8200:
{
    r10 = 1;
}

loc_804E8204:
{
}

loc_804E8208:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_804E823C;
    }
}

loc_804E820C:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 134217727);
    MemoryInline::FlatWrite32(r4, r0);
    r0 = MemoryInline::FlatRead32(r5);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_4 & 134217727);
    MemoryInline::FlatWrite32(r5, r0);
    r0 = MemoryInline::FlatRead32(r6);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_5 & 134217727);
    MemoryInline::FlatWrite32(r6, r0);
    r0 = MemoryInline::FlatRead32(r7);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_6 & 134217727);
    MemoryInline::FlatWrite32(r7, r0);
}

loc_804E823C:
{
    r0 = MemoryInline::FlatRead32((r13 + -14352));
    r8 = 0x80760000u;
    r11 = MemoryInline::FlatRead32(r4);
    r8 = (r8 + -10680);
    r4 = MemoryInline::FlatRead32((r13 + -14348));
    r9 = (r0 | 65536);
    MemoryInline::FlatWrite32((r13 + -14348), r4);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(12));
    r4 = (r4_rot_0 & -4096);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(16));
    r0 = (r0_rot_8 & 65535);
    MemoryInline::FlatWrite32((r13 + -14352), r9);
    r10 = (r4 | r0);
    r0 = MemoryInline::FlatRead32((r13 + -14352));
    guest_range_1 = MemoryInline::ResolveRangeHost((r8 + 28), 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r8 + 30), static_cast<uint16_t>(r11));
    r4 = MemoryInline::FlatRead32((r13 + -14348));
    r0 = (r0 | 131072);
    r9 = MemoryInline::ReadResolved8(guest_range_0, 50u, (r3 + 60));
    MemoryInline::FlatWrite32((r13 + -14348), r4);
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(8));
    r9 = (r9_rot_0 & -256);
    r4 = (r10 | r9);
    MemoryInline::FlatWrite32((r13 + -14352), r0);
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r8 + 28), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead32((r13 + -14352));
    r5 = MemoryInline::FlatRead32(r5);
    r4 = MemoryInline::FlatRead32((r13 + -14348));
    r0 = (r0 | 4096);
    MemoryInline::FlatWrite32((r13 + -14348), r4);
    MemoryInline::FlatWrite32((r13 + -14352), r0);
    r0 = MemoryInline::FlatRead32((r13 + -14352));
    r4 = MemoryInline::FlatRead32((r13 + -14348));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r8 + 38), static_cast<uint16_t>(r5));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r5 = (r5_rot_0 & 65535);
    r0 = (r0 | 8192);
    MemoryInline::FlatWrite32((r13 + -14348), r4);
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r8 + 36), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite32((r13 + -14352), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 58u, (r3 + 68));
}

loc_804E82D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E834C;
    }
}

loc_804E82D4:
{
    r6 = MemoryInline::FlatRead32(r6);
    r3 = 65536;
    r4 = MemoryInline::FlatRead32((r13 + -14352));
    r0 = (r3 + -32768);
    r3 = MemoryInline::FlatRead32((r13 + -14348));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r5 = (r5_rot_1 & 65535);
    MemoryInline::FlatWrite32((r13 + -14348), r3);
    r3 = (r4 | 16384);
    MemoryInline::FlatWrite32((r13 + -14352), r3);
    r3 = MemoryInline::FlatRead32((r13 + -14352));
    r4 = MemoryInline::FlatRead32((r13 + -14348));
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r8 + 34), static_cast<uint16_t>(r6));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r13 + -14348), r4);
    MemoryInline::FlatWrite32((r13 + -14352), r0);
    r0 = MemoryInline::FlatRead32((r13 + -14352));
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r8 + 32), static_cast<uint16_t>(r5));
    r3 = MemoryInline::FlatRead32((r13 + -14348));
    r0 = (r0 | 1024);
    r4 = MemoryInline::FlatRead32(r7);
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r8 + 42), static_cast<uint16_t>(r4));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r4 = (r4_rot_1 & 65535);
    MemoryInline::FlatWrite32((r13 + -14348), r3);
    MemoryInline::FlatWrite32((r13 + -14352), r0);
    r0 = MemoryInline::FlatRead32((r13 + -14352));
    r3 = MemoryInline::FlatRead32((r13 + -14348));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r8 + 40), static_cast<uint16_t>(r4));
    r0 = (r0 | 2048);
    MemoryInline::FlatWrite32((r13 + -14348), r3);
    MemoryInline::FlatWrite32((r13 + -14352), r0);
}

loc_804E834C:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804E80B0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804E80B0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001F7B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804E80B0 func_804E80B0 preserves=true fpr_mask=0x00000000
