#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803E1978_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r7_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t ctr = ctx->ctr;

    goto loc_803E1978;

loc_803E1978:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r0 = (r0 + r7);
    r3 = (static_cast<int32_t>(r0) >> 1);
}

loc_803E1988:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r3))) {
        goto loc_803E1994;
    }
}

loc_803E198C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803E1994:
{
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(31));
    r7 = (r7_rot_0 & 2147483647);
}

loc_803E199C:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(0))) {
        goto loc_return;
    }
}

loc_803E19A0:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & 1073741823);
}

loc_803E19A8:
{
    ctr = r0;
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_803E1A44;
    }
}

loc_803E19B0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r6, 0, 16u, true, false);
    r5 = MemoryInline::ReadResolved16(guest_range_0, 0u, r6);
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r6 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5 = (r5 + r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
    r0 = (r0 + r5);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r5 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r6 + 4));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r6 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5 = (r5 + r0);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
    r0 = (r0 + r5);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    r5 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r6 + 8));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r6 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5 = (r5 + r0);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 1);
    r0 = (r0 + r5);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
    r5 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r6 + 12));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r6 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5 = (r5 + r0);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 1);
    r0 = (r0 + r5);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r4 + 6), static_cast<uint16_t>(r0));
    r6 = (r6 + 16);
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803E19B0;
    }
}

loc_803E1A3C:
{
    r7 = (r7 & 3);
}

loc_803E1A40:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803E1A44:
{
    ctr = r7;
}

loc_803E1A48:
{
    r5 = MemoryInline::FlatRead16(r6);
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = MemoryInline::FlatRead16((r6 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5 = (r5 + r0);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & 1);
    r0 = (r0 + r5);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r6 = (r6 + 4);
    r4 = (r4 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803E1A48;
    }
}

loc_803E1A74:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803E1978(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803E1978_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803E1978 func_803E1978 preserves=true fpr_mask=0x00000000
