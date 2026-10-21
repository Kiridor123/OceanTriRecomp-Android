#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800527C4_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x800527C4u);
    goto loc_800527C4;

loc_800527C4:
{
    r6 = 0;
    r3 = 0x80670000u;
    r4 = (r3 + -12896);
    r3 = 0;
    r0 = 2;
    ctr = r0;
}

loc_800527DC:
{
    r0 = (r6 & 65535);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r5 = (r4 + r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 600), 0, 164u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r5 + 600), r3);
    MemoryInline::WriteResolved32(guest_range_0, 132u, (r5 + 732), r3);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r5 + 604), r3);
    MemoryInline::WriteResolved32(guest_range_0, 136u, (r5 + 736), r3);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r5 + 608), r3);
    MemoryInline::WriteResolved32(guest_range_0, 140u, (r5 + 740), r3);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r5 + 612), r3);
    MemoryInline::WriteResolved32(guest_range_0, 144u, (r5 + 744), r3);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r5 + 616), r3);
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r5 + 748), r3);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r5 + 620), r3);
    MemoryInline::WriteResolved32(guest_range_0, 152u, (r5 + 752), r3);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r5 + 624), r3);
    MemoryInline::WriteResolved32(guest_range_0, 156u, (r5 + 756), r3);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r5 + 628), r3);
    MemoryInline::WriteResolved32(guest_range_0, 160u, (r5 + 760), r3);
    r6 = (r6 + 8);
    r0 = (r6 & 65535);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r5 = (r4 + r0);
    guest_range_1 = MemoryInline::ResolveRangeHost((r5 + 600), 0, 164u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r5 + 600), r3);
    MemoryInline::WriteResolved32(guest_range_1, 132u, (r5 + 732), r3);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r5 + 604), r3);
    MemoryInline::WriteResolved32(guest_range_1, 136u, (r5 + 736), r3);
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r5 + 608), r3);
    MemoryInline::WriteResolved32(guest_range_1, 140u, (r5 + 740), r3);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r5 + 612), r3);
    MemoryInline::WriteResolved32(guest_range_1, 144u, (r5 + 744), r3);
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r5 + 616), r3);
    MemoryInline::WriteResolved32(guest_range_1, 148u, (r5 + 748), r3);
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r5 + 620), r3);
    MemoryInline::WriteResolved32(guest_range_1, 152u, (r5 + 752), r3);
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r5 + 624), r3);
    MemoryInline::WriteResolved32(guest_range_1, 156u, (r5 + 756), r3);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r5 + 628), r3);
    MemoryInline::WriteResolved32(guest_range_1, 160u, (r5 + 760), r3);
    r6 = (r6 + 8);
    r0 = (r6 & 65535);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800527DC;
    }
}

loc_80052884:
{
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & -4);
    r0 = 0;
    r3 = 0x80670000u;
    r4 = (r3 + -12896);
    r3 = (r4 + r5);
    MemoryInline::FlatWrite32((r3 + 600), r0);
    MemoryInline::FlatWrite32((r3 + 732), r0);
    MemoryInline::FlatWriteRam8((r4 + 868), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800527C4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800527C4_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800527C4 func_800527C4 preserves=true fpr_mask=0x00000000
