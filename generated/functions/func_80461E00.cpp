#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80461E00_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80461E00u);
    goto loc_80461E00;

loc_80461E00:
{
}

loc_80461E04:
{
    r6 = r3;
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80461E58;
    }
}

loc_80461E0C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
}

loc_80461E10:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80461E48;
    }
}

loc_80461E18:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 16u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 0u, r3, r4);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 2), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r3 + 4), r4);
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r3 + 6), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 8), r4);
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 10), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r3 + 12), r4);
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r3 + 14), r4);
    }
    r3 = (r3 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80461E18;
    }
}

loc_80461E40:
{
    r5 = (r5 & 7);
}

loc_80461E44:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80461E58;
    }
}

loc_80461E48:
{
    ctr = r5;
}

loc_80461E4C:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r4));
    r3 = (r3 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80461E4C;
    }
}

loc_80461E58:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_80461E00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80461E00_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80461E00 func_80461E00 preserves=true fpr_mask=0x00000000
