#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80498B78_ra98_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r7)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = arg_r7;
    uint32_t r8 = ctx->gpr[8];

    MKW_GUEST_ENTER(0x80498B78u);
    goto loc_80498B78;

loc_80498B78:
{
    r7 = 0x80740000u;
    r7 = (r7 + -5120);
    r8 = MemoryInline::FlatRead32((r7 + 1968));
}

loc_80498B88:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80498B94;
    }
}

loc_80498B8C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80498B94:
{
    r0 = (r7 + 376);
    r4 = 0x84210000u;
    r0 = (r8 - r0);
    r6 = MemoryInline::FlatRead32((r8 + 8));
    r4 = (r4 + 2115);
    r5 = 1;
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    MemoryInline::FlatWriteRam32((r7 + 1968), r6);
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r5));
    r0 = (r4 + r0);
    r0 = (static_cast<int32_t>(r0) >> 6);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r0 = (r0 + r4);
    r4 = (r0 & 65535);
    r0 = (r4 + 64);
    MemoryInline::FlatWrite16((r8 + 20), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r8 + 16), r3);
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80498BE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80498BFC;
    }
}

loc_80498BE4:
{
    MemoryInline::FlatWrite32((r3 + 12), r8);
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 8), r8);
    MemoryInline::FlatWrite32((r8 + 8), r0);
    MemoryInline::FlatWrite32((r8 + 12), r0);
    goto loc_80498C18;
}

loc_80498BFC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r8 + 8), r0);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    MemoryInline::FlatWrite32((r8 + 12), r0);
    r4 = MemoryInline::FlatRead32((r3 + 12));
    MemoryInline::FlatWrite32((r4 + 8), r8);
    MemoryInline::FlatWrite32((r3 + 12), r8);
}

loc_80498C18:
{
    r3 = 65536;
    r6 = 672;
    r0 = (r3 + -1);
    r5 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r8 + 4), 0, 108u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 56u, (r8 + 60), static_cast<uint16_t>(r0));
    r4 = 0;
    r0 = -1;
    r3 = r8;
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 52u, ((static_cast<uint32_t>(static_cast<uint16_t>(r6)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_0, 54u, (r8 + 58), r6);
        MemoryInline::WriteResolved16(guest_range_0, 52u, (r8 + 56), r6);
    }
    MemoryInline::WriteResolved8(guest_range_0, 85u, (r8 + 89), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 61u, (r8 + 65), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 88u, (r8 + 92), r4);
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r8 + 68), r4);
    MemoryInline::WriteResolved32(guest_range_0, 92u, (r8 + 96), r4);
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r8 + 72), r4);
    MemoryInline::WriteResolved32(guest_range_0, 96u, (r8 + 100), r4);
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r8 + 76), r4);
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r8 + 104), r0);
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r8 + 80), r0);
    MemoryInline::WriteResolved32(guest_range_0, 104u, (r8 + 108), r0);
    MemoryInline::WriteResolved32(guest_range_0, 80u, (r8 + 84), r0);
    MemoryInline::WriteResolved8(guest_range_0, 48u, (r8 + 52), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r8 + 4), r4);
    MemoryInline::WriteResolved8(guest_range_0, 51u, (r8 + 55), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r8 + 40), r8);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80498B78(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80498B78_ra98_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000198 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80498B78 func_80498B78 preserves=true fpr_mask=0x00000000
