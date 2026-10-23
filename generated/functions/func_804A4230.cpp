#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804A4230_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t ctr = ctx->ctr;

    goto loc_804A4230;

loc_804A4230:
{
}

loc_804A4234:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804A4248;
    }
}

loc_804A4238:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r0 = (r0 - r5);
    r7 = (r0 & 65535);
    goto loc_804A424C;
}

loc_804A4248:
{
    r7 = 5;
}

loc_804A424C:
{
}

loc_804A4250:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(255))) {
        goto loc_804A4270;
    }
}

loc_804A4254:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r0 = (r0_rot_3 & 255);
    r6 = 54;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r6));
    r6 = (r3 + 3);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r7));
    goto loc_804A4280;
}

loc_804A4270:
{
    r0 = 53;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r7));
    r6 = (r3 + 2);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
}

loc_804A4280:
{
}

loc_804A4284:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804A42B0;
    }
}

loc_804A4288:
{
    r0 = 10;
    r3 = 0;
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r6 + 4), static_cast<uint8_t>(r0));
    r6 = (r6 + 5);
    goto loc_804A43F8;
}

loc_804A42B0:
{
}

loc_804A42B4:
{
    r3 = 0;
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804A43F8;
    }
}

loc_804A42BC:
{
}

loc_804A42C0:
{
    r7 = (r5 + 65536);
    r7 = (r7 + -8);
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(8))) {
        goto loc_804A43B8;
    }
}

loc_804A42CC:
{
    r8 = (r7 & 65535);
    r0 = 9;
    r7 = (r8 + 7);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(29));
    r7 = (r7_rot_1 & 536870911);
    ctr = r7;
}

loc_804A42E4:
{
    if ((static_cast<uint32_t>(r8) <= static_cast<uint32_t>(0))) {
        goto loc_804A43B8;
    }
}

loc_804A42E8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r6, 0, 24u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r6, static_cast<uint8_t>(r0));
    r3 = (r3 + 8);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 16u, true, false);
    r7 = MemoryInline::ReadResolved16(guest_range_1, 0u, r4);
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r6 + 1), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 0u, r4);
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r6 + 2), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r6 + 3), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r4 + 2));
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r6 + 4), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r4 + 2));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r6 + 5), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r6 + 6), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r4 + 4));
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r6 + 7), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r4 + 4));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r6 + 8), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r6 + 9), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r4 + 6));
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r6 + 10), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r4 + 6));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r6 + 11), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r6 + 12), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r4 + 8));
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r6 + 13), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r6 + 14), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r6 + 15), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r4 + 10));
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r6 + 16), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r4 + 10));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r6 + 17), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r6 + 18), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r4 + 12));
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r6 + 19), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r4 + 12));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r6 + 20), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r6 + 21), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r4 + 14));
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r6 + 22), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r4 + 14));
    r4 = (r4 + 16);
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r6 + 23), static_cast<uint8_t>(r7));
    r6 = (r6 + 24);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804A42E8;
    }
}

loc_804A43B8:
{
    r7 = (r3 & 65535);
    r8 = 9;
    r0 = (r5 - r7);
    ctr = r0;
}

loc_804A43CC:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r5))) {
        goto loc_804A43F8;
    }
}

loc_804A43D0:
{
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r8));
    r3 = (r3 + 1);
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r0));
    r6 = (r6 + 3);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804A43D0;
    }
}

loc_804A43F8:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804A4230(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804A4230_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804A4230 func_804A4230 preserves=true fpr_mask=0x00000000
