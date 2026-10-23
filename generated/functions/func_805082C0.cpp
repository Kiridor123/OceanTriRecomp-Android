#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_805082C0_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
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
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r7_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_10 = nullptr;
    uint8_t* guest_range_11 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    uint32_t ctr = ctx->ctr;

    goto loc_805082C0;

loc_805082C0:
{
}

loc_805082C4:
{
    r7 = r3;
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(32))) {
        goto loc_8050842C;
    }
}

loc_805082CC:
{
    r6 = (r3 ^ r4);
    r0 = (r6 & 1);
}

loc_805082D4:
{
    r6 = (r6 & 15);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8050845C;
    }
}

loc_805082DC:
{
    r0 = (r6 & 2);
}

loc_805082E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8050830C;
    }
}

loc_805082E4:
{
    r0 = (r3 & 1);
    r0_subfic_ra_0 = r0;
    r0 = (2 - r0_subfic_ra_0);
}

loc_805082F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80508460;
    }
}

loc_805082F4:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
    r5 = (r5 + -1);
    goto loc_80508460;
}

loc_8050830C:
{
    r0 = (r6 & 4);
}

loc_80508310:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80508370;
    }
}

loc_80508314:
{
    r0 = (r3 & 3);
    r6 = (4 - r0);
}

loc_80508320:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_80508338;
    }
}

loc_80508324:
{
}

loc_80508328:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(2))) {
        goto loc_80508348;
    }
}

loc_8050832C:
{
}

loc_80508330:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(1))) {
        goto loc_80508358;
    }
}

loc_80508334:
{
    goto loc_8050874C;
}

loc_80508338:
{
    r0 = MemoryInline::FlatRead8(r4);
    r7 = (r3 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
}

loc_80508348:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    r7 = (r7 + 1);
}

loc_80508358:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    r3 = (r7 + 1);
    r5 = (r5 - r6);
    goto loc_8050874C;
}

loc_80508370:
{
    r0 = (r3 & 7);
    r6 = (8 - r0);
}

loc_8050837C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(7))) {
        goto loc_805083B4;
    }
}

loc_80508380:
{
}

loc_80508384:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(6))) {
        goto loc_805083C4;
    }
}

loc_80508388:
{
}

loc_8050838C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(5))) {
        goto loc_805083D4;
    }
}

loc_80508390:
{
}

loc_80508394:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(4))) {
        goto loc_805083E4;
    }
}

loc_80508398:
{
}

loc_8050839C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_805083F4;
    }
}

loc_805083A0:
{
}

loc_805083A4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(2))) {
        goto loc_80508404;
    }
}

loc_805083A8:
{
}

loc_805083AC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(1))) {
        goto loc_80508414;
    }
}

loc_805083B0:
{
    goto loc_8050894C;
}

loc_805083B4:
{
    r0 = MemoryInline::FlatRead8(r4);
    r7 = (r3 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
}

loc_805083C4:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    r7 = (r7 + 1);
}

loc_805083D4:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    r7 = (r7 + 1);
}

loc_805083E4:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    r7 = (r7 + 1);
}

loc_805083F4:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    r7 = (r7 + 1);
}

loc_80508404:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    r7 = (r7 + 1);
}

loc_80508414:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    r3 = (r7 + 1);
    r5 = (r5 - r6);
    goto loc_8050894C;
}

loc_8050842C:
{
    r0 = (r3 & 7);
}

loc_80508430:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8050843C;
    }
}

loc_80508434:
{
    r0 = (r4 & 7);
}

loc_80508438:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8050894C;
    }
}

loc_8050843C:
{
    r0 = (r3 & 3);
}

loc_80508440:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8050844C;
    }
}

loc_80508444:
{
    r0 = (r4 & 3);
}

loc_80508448:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8050874C;
    }
}

loc_8050844C:
{
    r0 = (r3 & 1);
}

loc_80508450:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8050845C;
    }
}

loc_80508454:
{
    r0 = (r4 & 1);
}

loc_80508458:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80508460;
    }
}

loc_8050845C:
{
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80508460:
{
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r6 = (r6_rot_0 & 2147483647);
}

loc_80508464:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80508734;
    }
}

loc_80508468:
{
    r7 = (static_cast<int32_t>(r6) >> 4);
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_80508620;
    }
}

loc_80508470:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
}

loc_80508474:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80508590;
    }
}

loc_8050847C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 64u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 64u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 2));
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r4 + 4));
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r4 + 6));
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r3 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 8));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r4 + 10));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r4 + 12));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r4 + 14));
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r4 + 16));
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r4 + 18));
    MemoryInline::WriteResolved16(guest_range_1, 18u, (r3 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r4 + 20));
    MemoryInline::WriteResolved16(guest_range_1, 20u, (r3 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r4 + 22));
    MemoryInline::WriteResolved16(guest_range_1, 22u, (r3 + 22), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 24u, (r4 + 24));
    MemoryInline::WriteResolved16(guest_range_1, 24u, (r3 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 26u, (r4 + 26));
    MemoryInline::WriteResolved16(guest_range_1, 26u, (r3 + 26), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 28u, (r4 + 28));
    MemoryInline::WriteResolved16(guest_range_1, 28u, (r3 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 30u, (r4 + 30));
    MemoryInline::WriteResolved16(guest_range_1, 30u, (r3 + 30), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 32u, (r4 + 32));
    MemoryInline::WriteResolved16(guest_range_1, 32u, (r3 + 32), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 34u, (r4 + 34));
    MemoryInline::WriteResolved16(guest_range_1, 34u, (r3 + 34), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 36u, (r4 + 36));
    MemoryInline::WriteResolved16(guest_range_1, 36u, (r3 + 36), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 38u, (r4 + 38));
    MemoryInline::WriteResolved16(guest_range_1, 38u, (r3 + 38), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 40u, (r4 + 40));
    MemoryInline::WriteResolved16(guest_range_1, 40u, (r3 + 40), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 42u, (r4 + 42));
    MemoryInline::WriteResolved16(guest_range_1, 42u, (r3 + 42), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 44u, (r4 + 44));
    MemoryInline::WriteResolved16(guest_range_1, 44u, (r3 + 44), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 46u, (r4 + 46));
    MemoryInline::WriteResolved16(guest_range_1, 46u, (r3 + 46), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 48u, (r4 + 48));
    MemoryInline::WriteResolved16(guest_range_1, 48u, (r3 + 48), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 50u, (r4 + 50));
    MemoryInline::WriteResolved16(guest_range_1, 50u, (r3 + 50), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 52u, (r4 + 52));
    MemoryInline::WriteResolved16(guest_range_1, 52u, (r3 + 52), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 54u, (r4 + 54));
    MemoryInline::WriteResolved16(guest_range_1, 54u, (r3 + 54), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 56u, (r4 + 56));
    MemoryInline::WriteResolved16(guest_range_1, 56u, (r3 + 56), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 58u, (r4 + 58));
    MemoryInline::WriteResolved16(guest_range_1, 58u, (r3 + 58), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 60u, (r4 + 60));
    MemoryInline::WriteResolved16(guest_range_1, 60u, (r3 + 60), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 62u, (r4 + 62));
    r4 = (r4 + 64);
    MemoryInline::WriteResolved16(guest_range_1, 62u, (r3 + 62), static_cast<uint16_t>(r0));
    r3 = (r3 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8050847C;
    }
}

loc_80508588:
{
    r7 = (r7 & 1);
}

loc_8050858C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80508620;
    }
}

loc_80508590:
{
    ctr = r7;
}

loc_80508594:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_2, 0u, r4);
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 32u, false, true);
    MemoryInline::WriteResolved16(guest_range_3, 0u, r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 2u, (r4 + 2));
    MemoryInline::WriteResolved16(guest_range_3, 2u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r4 + 4));
    MemoryInline::WriteResolved16(guest_range_3, 4u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 6u, (r4 + 6));
    MemoryInline::WriteResolved16(guest_range_3, 6u, (r3 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved16(guest_range_3, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 10u, (r4 + 10));
    MemoryInline::WriteResolved16(guest_range_3, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 12u, (r4 + 12));
    MemoryInline::WriteResolved16(guest_range_3, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 14u, (r4 + 14));
    MemoryInline::WriteResolved16(guest_range_3, 14u, (r3 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 16u, (r4 + 16));
    MemoryInline::WriteResolved16(guest_range_3, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 18u, (r4 + 18));
    MemoryInline::WriteResolved16(guest_range_3, 18u, (r3 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 20u, (r4 + 20));
    MemoryInline::WriteResolved16(guest_range_3, 20u, (r3 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 22u, (r4 + 22));
    MemoryInline::WriteResolved16(guest_range_3, 22u, (r3 + 22), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 24u, (r4 + 24));
    MemoryInline::WriteResolved16(guest_range_3, 24u, (r3 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 26u, (r4 + 26));
    MemoryInline::WriteResolved16(guest_range_3, 26u, (r3 + 26), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 28u, (r4 + 28));
    MemoryInline::WriteResolved16(guest_range_3, 28u, (r3 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 30u, (r4 + 30));
    r4 = (r4 + 32);
    MemoryInline::WriteResolved16(guest_range_3, 30u, (r3 + 30), static_cast<uint16_t>(r0));
    r3 = (r3 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80508594;
    }
}

loc_80508620:
{
    r0 = (r6 & 15);
}

loc_80508628:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(15))) {
        goto loc_80508734;
    }
}

loc_8050862C:
{
    r6 = 0x80630000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r6 = (r6 + 2128);
    r6_addr_1 = (r6 + r0);
    r6 = MemoryInline::FlatRead32(r6_addr_1);
    ctr = r6;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80508734u:
        goto loc_80508734;
        break;
    case 0x80508724u:
        goto loc_80508724;
        break;
    case 0x80508714u:
        goto loc_80508714;
        break;
    case 0x80508704u:
        goto loc_80508704;
        break;
    case 0x805086F4u:
        goto loc_805086F4;
        break;
    case 0x805086E4u:
        goto loc_805086E4;
        break;
    case 0x805086D4u:
        goto loc_805086D4;
        break;
    case 0x805086C4u:
        goto loc_805086C4;
        break;
    case 0x805086B4u:
        goto loc_805086B4;
        break;
    case 0x805086A4u:
        goto loc_805086A4;
        break;
    case 0x80508694u:
        goto loc_80508694;
        break;
    case 0x80508684u:
        goto loc_80508684;
        break;
    case 0x80508674u:
        goto loc_80508674;
        break;
    case 0x80508664u:
        goto loc_80508664;
        break;
    case 0x80508654u:
        goto loc_80508654;
        break;
    case 0x80508644u:
        goto loc_80508644;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80508644:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
}

loc_80508654:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
}

loc_80508664:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
}

loc_80508674:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
}

loc_80508684:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
}

loc_80508694:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
}

loc_805086A4:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
}

loc_805086B4:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
}

loc_805086C4:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
}

loc_805086D4:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
}

loc_805086E4:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
}

loc_805086F4:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
}

loc_80508704:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
}

loc_80508714:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
}

loc_80508724:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
}

loc_80508734:
{
    r0 = (r5 & 1);
}

loc_8050873C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_return;
    }
}

loc_80508740:
{
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8050874C:
{
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r6 = (r6_rot_1 & 1073741823);
}

loc_80508750:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_805088FC;
    }
}

loc_80508754:
{
    r7 = (static_cast<int32_t>(r6) >> 3);
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_8050884C;
    }
}

loc_8050875C:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
}

loc_80508760:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805087FC;
    }
}

loc_80508768:
{
    guest_range_4 = MemoryInline::ResolveRangeHost(r4, 0, 64u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 0u, r4);
    guest_range_5 = MemoryInline::ResolveRangeHost(r3, 0, 64u, false, true);
    MemoryInline::WriteResolved32(guest_range_5, 0u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_5, 4u, (r3 + 4), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_5, 8u, (r3 + 8), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_5, 12u, (r3 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r4 + 16));
    MemoryInline::WriteResolved32(guest_range_5, 16u, (r3 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r4 + 20));
    MemoryInline::WriteResolved32(guest_range_5, 20u, (r3 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_5, 24u, (r3 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r4 + 28));
    MemoryInline::WriteResolved32(guest_range_5, 28u, (r3 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_5, 32u, (r3 + 32), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r4 + 36));
    MemoryInline::WriteResolved32(guest_range_5, 36u, (r3 + 36), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r4 + 40));
    MemoryInline::WriteResolved32(guest_range_5, 40u, (r3 + 40), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r4 + 44));
    MemoryInline::WriteResolved32(guest_range_5, 44u, (r3 + 44), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 48u, (r4 + 48));
    MemoryInline::WriteResolved32(guest_range_5, 48u, (r3 + 48), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 52u, (r4 + 52));
    MemoryInline::WriteResolved32(guest_range_5, 52u, (r3 + 52), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 56u, (r4 + 56));
    MemoryInline::WriteResolved32(guest_range_5, 56u, (r3 + 56), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 60u, (r4 + 60));
    r4 = (r4 + 64);
    MemoryInline::WriteResolved32(guest_range_5, 60u, (r3 + 60), r0);
    r3 = (r3 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80508768;
    }
}

loc_805087F4:
{
    r7 = (r7 & 1);
}

loc_805087F8:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8050884C;
    }
}

loc_805087FC:
{
    ctr = r7;
}

loc_80508800:
{
    guest_range_6 = MemoryInline::ResolveRangeHost(r4, 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 0u, r4);
    guest_range_7 = MemoryInline::ResolveRangeHost(r3, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_7, 0u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_7, 4u, (r3 + 4), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_7, 8u, (r3 + 8), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 12u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_7, 12u, (r3 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 16u, (r4 + 16));
    MemoryInline::WriteResolved32(guest_range_7, 16u, (r3 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 20u, (r4 + 20));
    MemoryInline::WriteResolved32(guest_range_7, 20u, (r3 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 24u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_7, 24u, (r3 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 28u, (r4 + 28));
    r4 = (r4 + 32);
    MemoryInline::WriteResolved32(guest_range_7, 28u, (r3 + 28), r0);
    r3 = (r3 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80508800;
    }
}

loc_8050884C:
{
    r0 = (r6 & 7);
}

loc_80508854:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_8050888C;
    }
}

loc_80508858:
{
}

loc_8050885C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_8050889C;
    }
}

loc_80508860:
{
}

loc_80508864:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_805088AC;
    }
}

loc_80508868:
{
}

loc_8050886C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_805088BC;
    }
}

loc_80508870:
{
}

loc_80508874:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_805088CC;
    }
}

loc_80508878:
{
}

loc_8050887C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_805088DC;
    }
}

loc_80508880:
{
}

loc_80508884:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_805088EC;
    }
}

loc_80508888:
{
    goto loc_805088FC;
}

loc_8050888C:
{
    r0 = MemoryInline::FlatRead32(r4);
    r4 = (r4 + 4);
    MemoryInline::FlatWrite32(r3, r0);
    r3 = (r3 + 4);
}

loc_8050889C:
{
    r0 = MemoryInline::FlatRead32(r4);
    r4 = (r4 + 4);
    MemoryInline::FlatWrite32(r3, r0);
    r3 = (r3 + 4);
}

loc_805088AC:
{
    r0 = MemoryInline::FlatRead32(r4);
    r4 = (r4 + 4);
    MemoryInline::FlatWrite32(r3, r0);
    r3 = (r3 + 4);
}

loc_805088BC:
{
    r0 = MemoryInline::FlatRead32(r4);
    r4 = (r4 + 4);
    MemoryInline::FlatWrite32(r3, r0);
    r3 = (r3 + 4);
}

loc_805088CC:
{
    r0 = MemoryInline::FlatRead32(r4);
    r4 = (r4 + 4);
    MemoryInline::FlatWrite32(r3, r0);
    r3 = (r3 + 4);
}

loc_805088DC:
{
    r0 = MemoryInline::FlatRead32(r4);
    r4 = (r4 + 4);
    MemoryInline::FlatWrite32(r3, r0);
    r3 = (r3 + 4);
}

loc_805088EC:
{
    r0 = MemoryInline::FlatRead32(r4);
    r4 = (r4 + 4);
    MemoryInline::FlatWrite32(r3, r0);
    r3 = (r3 + 4);
}

loc_805088FC:
{
    r0 = (r5 & 3);
    r5 = r3;
}

loc_80508908:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80508920;
    }
}

loc_8050890C:
{
}

loc_80508910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80508930;
    }
}

loc_80508914:
{
}

loc_80508918:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80508940;
    }
}

loc_8050891C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80508920:
{
    r0 = MemoryInline::FlatRead8(r4);
    r5 = (r3 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
}

loc_80508930:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
}

loc_80508940:
{
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8050894C:
{
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r7 = (r7_rot_0 & 536870911);
}

loc_80508950:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80508BF4;
    }
}

loc_80508954:
{
    r8 = (static_cast<int32_t>(r7) >> 3);
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(0))) {
        goto loc_80508B0C;
    }
}

loc_8050895C:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(31));
    r0 = (r0_rot_8 & 2147483647);
}

loc_80508960:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80508A7C;
    }
}

loc_80508968:
{
    guest_range_8 = MemoryInline::ResolveRangeHost(r4, 0, 128u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 0u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_8, 4u, (r4 + 4));
        }
    }
    guest_range_9 = MemoryInline::ResolveRangeHost(r3, 0, 128u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_9, 4u, (r3 + 4), r6);
        MemoryInline::WriteResolved32(guest_range_9, 0u, r3, r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 8u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 8u, (r4 + 8));
            r6 = MemoryInline::ReadResolved32(guest_range_8, 12u, (r4 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_9, 12u, (r3 + 12), r6);
        MemoryInline::WriteResolved32(guest_range_9, 8u, (r3 + 8), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 16u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 16u, (r4 + 16));
            r6 = MemoryInline::ReadResolved32(guest_range_8, 20u, (r4 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_9, 20u, (r3 + 20), r6);
        MemoryInline::WriteResolved32(guest_range_9, 16u, (r3 + 16), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 24u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 24u, (r4 + 24));
            r6 = MemoryInline::ReadResolved32(guest_range_8, 28u, (r4 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_9, 28u, (r3 + 28), r6);
        MemoryInline::WriteResolved32(guest_range_9, 24u, (r3 + 24), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 32u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 32u, (r4 + 32));
            r6 = MemoryInline::ReadResolved32(guest_range_8, 36u, (r4 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_9, 36u, (r3 + 36), r6);
        MemoryInline::WriteResolved32(guest_range_9, 32u, (r3 + 32), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 40u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 40u, (r4 + 40));
            r6 = MemoryInline::ReadResolved32(guest_range_8, 44u, (r4 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_9, 44u, (r3 + 44), r6);
        MemoryInline::WriteResolved32(guest_range_9, 40u, (r3 + 40), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 48u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 48u, (r4 + 48));
            r6 = MemoryInline::ReadResolved32(guest_range_8, 52u, (r4 + 52));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_9, 52u, (r3 + 52), r6);
        MemoryInline::WriteResolved32(guest_range_9, 48u, (r3 + 48), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 56u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 56u, (r4 + 56));
            r6 = MemoryInline::ReadResolved32(guest_range_8, 60u, (r4 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_9, 60u, (r3 + 60), r6);
        MemoryInline::WriteResolved32(guest_range_9, 56u, (r3 + 56), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 64u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 64u, (r4 + 64));
            r6 = MemoryInline::ReadResolved32(guest_range_8, 68u, (r4 + 68));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_9, 68u, (r3 + 68), r6);
        MemoryInline::WriteResolved32(guest_range_9, 64u, (r3 + 64), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 72u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 72u, (r4 + 72));
            r6 = MemoryInline::ReadResolved32(guest_range_8, 76u, (r4 + 76));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_9, 76u, (r3 + 76), r6);
        MemoryInline::WriteResolved32(guest_range_9, 72u, (r3 + 72), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 80u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 80u, (r4 + 80));
            r6 = MemoryInline::ReadResolved32(guest_range_8, 84u, (r4 + 84));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_9, 84u, (r3 + 84), r6);
        MemoryInline::WriteResolved32(guest_range_9, 80u, (r3 + 80), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 88u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 88u, (r4 + 88));
            r6 = MemoryInline::ReadResolved32(guest_range_8, 92u, (r4 + 92));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_9, 92u, (r3 + 92), r6);
        MemoryInline::WriteResolved32(guest_range_9, 88u, (r3 + 88), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 96u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 96u, (r4 + 96));
            r6 = MemoryInline::ReadResolved32(guest_range_8, 100u, (r4 + 100));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_9, 100u, (r3 + 100), r6);
        MemoryInline::WriteResolved32(guest_range_9, 96u, (r3 + 96), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 104u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 104u, (r4 + 104));
            r6 = MemoryInline::ReadResolved32(guest_range_8, 108u, (r4 + 108));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_9, 108u, (r3 + 108), r6);
        MemoryInline::WriteResolved32(guest_range_9, 104u, (r3 + 104), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 112u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 112u, (r4 + 112));
            r6 = MemoryInline::ReadResolved32(guest_range_8, 116u, (r4 + 116));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_9, 116u, (r3 + 116), r6);
        MemoryInline::WriteResolved32(guest_range_9, 112u, (r3 + 112), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 120u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 120u, (r4 + 120));
            r6 = MemoryInline::ReadResolved32(guest_range_8, 124u, (r4 + 124));
        }
    }
    r4 = (r4 + 128);
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_9, 124u, (r3 + 124), r6);
        MemoryInline::WriteResolved32(guest_range_9, 120u, (r3 + 120), r0);
    }
    r3 = (r3 + 128);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80508968;
    }
}

loc_80508A74:
{
    r8 = (r8 & 1);
}

loc_80508A78:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80508B0C;
    }
}

loc_80508A7C:
{
    ctr = r8;
}

loc_80508A80:
{
    guest_range_10 = MemoryInline::ResolveRangeHost(r4, 0, 64u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 0u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_10, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_10, 4u, (r4 + 4));
        }
    }
    guest_range_11 = MemoryInline::ResolveRangeHost(r3, 0, 64u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_11, 4u, (r3 + 4), r6);
        MemoryInline::WriteResolved32(guest_range_11, 0u, r3, r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 8u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_10, 8u, (r4 + 8));
            r6 = MemoryInline::ReadResolved32(guest_range_10, 12u, (r4 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_11, 12u, (r3 + 12), r6);
        MemoryInline::WriteResolved32(guest_range_11, 8u, (r3 + 8), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 16u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_10, 16u, (r4 + 16));
            r6 = MemoryInline::ReadResolved32(guest_range_10, 20u, (r4 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_11, 20u, (r3 + 20), r6);
        MemoryInline::WriteResolved32(guest_range_11, 16u, (r3 + 16), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 24u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_10, 24u, (r4 + 24));
            r6 = MemoryInline::ReadResolved32(guest_range_10, 28u, (r4 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_11, 28u, (r3 + 28), r6);
        MemoryInline::WriteResolved32(guest_range_11, 24u, (r3 + 24), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 32u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_10, 32u, (r4 + 32));
            r6 = MemoryInline::ReadResolved32(guest_range_10, 36u, (r4 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_11, 36u, (r3 + 36), r6);
        MemoryInline::WriteResolved32(guest_range_11, 32u, (r3 + 32), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 40u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_10, 40u, (r4 + 40));
            r6 = MemoryInline::ReadResolved32(guest_range_10, 44u, (r4 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_11, 44u, (r3 + 44), r6);
        MemoryInline::WriteResolved32(guest_range_11, 40u, (r3 + 40), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 48u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_10, 48u, (r4 + 48));
            r6 = MemoryInline::ReadResolved32(guest_range_10, 52u, (r4 + 52));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_11, 52u, (r3 + 52), r6);
        MemoryInline::WriteResolved32(guest_range_11, 48u, (r3 + 48), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 56u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_10, 56u, (r4 + 56));
            r6 = MemoryInline::ReadResolved32(guest_range_10, 60u, (r4 + 60));
        }
    }
    r4 = (r4 + 64);
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_11, 60u, (r3 + 60), r6);
        MemoryInline::WriteResolved32(guest_range_11, 56u, (r3 + 56), r0);
    }
    r3 = (r3 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80508A80;
    }
}

loc_80508B0C:
{
    r0 = (r7 & 7);
}

loc_80508B14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_80508B4C;
    }
}

loc_80508B18:
{
}

loc_80508B1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_80508B64;
    }
}

loc_80508B20:
{
}

loc_80508B24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80508B7C;
    }
}

loc_80508B28:
{
}

loc_80508B2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80508B94;
    }
}

loc_80508B30:
{
}

loc_80508B34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80508BAC;
    }
}

loc_80508B38:
{
}

loc_80508B3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80508BC4;
    }
}

loc_80508B40:
{
}

loc_80508B44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80508BDC;
    }
}

loc_80508B48:
{
    goto loc_80508BF4;
}

loc_80508B4C:
{
    r0 = MemoryInline::FlatRead32(r4);
    r6 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    MemoryInline::FlatWrite32((r3 + 4), r6);
    MemoryInline::FlatWrite32(r3, r0);
    r3 = (r3 + 8);
}

loc_80508B64:
{
    r0 = MemoryInline::FlatRead32(r4);
    r6 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    MemoryInline::FlatWrite32((r3 + 4), r6);
    MemoryInline::FlatWrite32(r3, r0);
    r3 = (r3 + 8);
}

loc_80508B7C:
{
    r0 = MemoryInline::FlatRead32(r4);
    r6 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    MemoryInline::FlatWrite32((r3 + 4), r6);
    MemoryInline::FlatWrite32(r3, r0);
    r3 = (r3 + 8);
}

loc_80508B94:
{
    r0 = MemoryInline::FlatRead32(r4);
    r6 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    MemoryInline::FlatWrite32((r3 + 4), r6);
    MemoryInline::FlatWrite32(r3, r0);
    r3 = (r3 + 8);
}

loc_80508BAC:
{
    r0 = MemoryInline::FlatRead32(r4);
    r6 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    MemoryInline::FlatWrite32((r3 + 4), r6);
    MemoryInline::FlatWrite32(r3, r0);
    r3 = (r3 + 8);
}

loc_80508BC4:
{
    r0 = MemoryInline::FlatRead32(r4);
    r6 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    MemoryInline::FlatWrite32((r3 + 4), r6);
    MemoryInline::FlatWrite32(r3, r0);
    r3 = (r3 + 8);
}

loc_80508BDC:
{
    r0 = MemoryInline::FlatRead32(r4);
    r6 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    MemoryInline::FlatWrite32((r3 + 4), r6);
    MemoryInline::FlatWrite32(r3, r0);
    r3 = (r3 + 8);
}

loc_80508BF4:
{
    r0 = (r5 & 7);
    r5 = r3;
}

loc_80508C00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_80508C38;
    }
}

loc_80508C04:
{
}

loc_80508C08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_80508C48;
    }
}

loc_80508C0C:
{
}

loc_80508C10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80508C58;
    }
}

loc_80508C14:
{
}

loc_80508C18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80508C68;
    }
}

loc_80508C1C:
{
}

loc_80508C20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80508C78;
    }
}

loc_80508C24:
{
}

loc_80508C28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80508C88;
    }
}

loc_80508C2C:
{
}

loc_80508C30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80508C98;
    }
}

loc_80508C34:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80508C38:
{
    r0 = MemoryInline::FlatRead8(r4);
    r5 = (r3 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
}

loc_80508C48:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
}

loc_80508C58:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
}

loc_80508C68:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
}

loc_80508C78:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
}

loc_80508C88:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
}

loc_80508C98:
{
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_805082C0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805082C0_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805082C0 func_805082C0 preserves=true fpr_mask=0x00000000
