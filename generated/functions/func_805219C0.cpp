#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805219C0_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t ctr = ctx->ctr;

    goto loc_805219C0;

loc_805219C0:
{
    r9 = r3;
    goto loc_805219D4;
}

loc_805219C8:
{
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r4));
    r9 = (r9 + 1);
    r5 = (r5 + -1);
}

loc_805219D4:
{
    r0 = (r9 & 3);
}

loc_805219D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805219E4;
    }
}

loc_805219DC:
{
}

loc_805219E0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_805219C8;
    }
}

loc_805219E4:
{
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r7 = (r7_rot_0 & -256);
}

loc_805219EC:
{
    r8 = (r4 | r7);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r6 = (r6_rot_0 & -16777216);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0 = (r0_rot_0 & -65536);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r7 = (r7_rot_1 & 1073741823);
    r0 = (r6 | r0);
    r8 = (r8 | r0);
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(3))) {
        goto loc_80521A60;
    }
}

loc_80521A08:
{
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(29));
    r6 = (r6_rot_1 & 536870911);
}

loc_80521A0C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r0 = (0 - r0);
    ctr = r6;
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80521A4C;
    }
}

loc_80521A1C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r9, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r9, r8);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r9 + 4), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r9 + 8), r8);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r9 + 12), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r9 + 16), r8);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r9 + 20), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r9 + 24), r8);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r9 + 28), r8);
    }
    r9 = (r9 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80521A1C;
    }
}

loc_80521A44:
{
    r7 = (r7 & 7);
}

loc_80521A48:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80521A5C;
    }
}

loc_80521A4C:
{
    ctr = r7;
}

loc_80521A50:
{
    MemoryInline::FlatWrite32(r9, r8);
    r9 = (r9 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80521A50;
    }
}

loc_80521A5C:
{
    r5 = (r5 + r0);
}

loc_80521A60:
{
}

loc_80521A64:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80521A68:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r0 = (r0_rot_3 & 536870911);
}

loc_80521A6C:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80521AA4;
    }
}

loc_80521A74:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r9, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r9, static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r9 + 1), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r9 + 2), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r9 + 3), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r9 + 4), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r9 + 5), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r9 + 6), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r9 + 7), static_cast<uint8_t>(r4));
    r9 = (r9 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80521A74;
    }
}

loc_80521A9C:
{
    r5 = (r5 & 7);
}

loc_80521AA0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80521AA4:
{
    ctr = r5;
}

loc_80521AA8:
{
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r4));
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80521AA8;
    }
}

loc_80521AB4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return;
}

}

extern "C" void func_805219C0(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_805219C0_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003E1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805219C0 func_805219C0 preserves=true fpr_mask=0x00000000
