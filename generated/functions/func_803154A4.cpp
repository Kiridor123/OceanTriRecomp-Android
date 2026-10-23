#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803154A4_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t ctr = ctx->ctr;

    goto loc_803154A4;

loc_803154A4:
{
    r9 = 0;
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r7, 0, 24u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r7, r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r7 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r7 + 8), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r7 + 12), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r7 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r7 + 20), r0);
    }
}

loc_803154C8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803154D4;
    }
}

loc_803154CC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return r3;
}

loc_803154D4:
{
}

loc_803154D8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_803154E4;
    }
}

loc_803154DC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return r3;
}

loc_803154E4:
{
    r0 = MemoryInline::FlatRead8(r6);
    r0 = (r0 | 32);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8(r4);
}

loc_803154F8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(15))) {
        goto loc_8031558C;
    }
}

loc_803154FC:
{
    r8 = 0x805E0000u;
    r8 = (r8 + -10832);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r8_addr_1 = (r8 + r0);
    r8 = MemoryInline::FlatRead32(r8_addr_1);
    ctr = r8;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8031558Cu:
        goto loc_8031558C;
        break;
    case 0x80315554u:
        goto loc_80315554;
        break;
    case 0x8031555Cu:
        goto loc_8031555C;
        break;
    case 0x80315564u:
        goto loc_80315564;
        break;
    case 0x8031556Cu:
        goto loc_8031556C;
        break;
    case 0x80315574u:
        goto loc_80315574;
        break;
    case 0x8031557Cu:
        goto loc_8031557C;
        break;
    case 0x80315584u:
        goto loc_80315584;
        break;
    case 0x80315514u:
        goto loc_80315514;
        break;
    case 0x8031551Cu:
        goto loc_8031551C;
        break;
    case 0x80315538u:
        goto loc_80315538;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return ctx->gpr[3];
    }
}

loc_80315514:
{
    r3 = (r3 + 464);
    goto loc_80315590;
}

loc_8031551C:
{
    r0 = MemoryInline::FlatRead8((r3 + 464));
}

loc_80315524:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80315530;
    }
}

loc_80315528:
{
    r3 = (r3 + 488);
    goto loc_80315590;
}

loc_80315530:
{
    r3 = (r3 + 464);
    goto loc_80315590;
}

loc_80315538:
{
    r0 = MemoryInline::FlatRead8((r3 + 464));
}

loc_80315540:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_8031554C;
    }
}

loc_80315544:
{
    r3 = (r3 + 500);
    goto loc_80315590;
}

loc_8031554C:
{
    r3 = (r3 + 464);
    goto loc_80315590;
}

loc_80315554:
{
    r3 = (r3 + 320);
    goto loc_80315590;
}

loc_8031555C:
{
    r3 = (r3 + 332);
    goto loc_80315590;
}

loc_80315564:
{
    r3 = (r3 + 344);
    goto loc_80315590;
}

loc_8031556C:
{
    r3 = (r3 + 356);
    goto loc_80315590;
}

loc_80315574:
{
    r3 = (r3 + 368);
    goto loc_80315590;
}

loc_8031557C:
{
    r3 = (r3 + 380);
    goto loc_80315590;
}

loc_80315584:
{
    r3 = (r3 + 464);
    goto loc_80315590;
}

loc_8031558C:
{
    r9 = 1;
}

loc_80315590:
{
    r0 = MemoryInline::FlatRead8(r6);
    r0 = (r0 & 1);
}

loc_8031559C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803155C8;
    }
}

loc_803155A0:
{
    MemoryInline::WriteResolved32(guest_range_0, 0u, r7, r4);
    r0 = MemoryInline::FlatRead16((r3 + 2));
}

loc_803155AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803155DC;
    }
}

loc_803155B0:
{
}

loc_803155B4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_803155DC;
    }
}

loc_803155B8:
{
    r0 = MemoryInline::FlatRead8(r6);
    r0 = (r0 & 247);
}

loc_803155C0:
{
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    goto loc_803155DC;
}

loc_803155C8:
{
}

loc_803155CC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_803155D8;
    }
}

loc_803155D0:
{
    MemoryInline::WriteResolved32(guest_range_0, 0u, r7, r5);
    goto loc_803155DC;
}

loc_803155D8:
{
    MemoryInline::WriteResolved32(guest_range_0, 0u, r7, r3);
}

loc_803155DC:
{
}

loc_803155E0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80315614;
    }
}

loc_803155E4:
{
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r7 + 12), r5);
    r0 = MemoryInline::FlatRead16((r5 + 2));
}

loc_803155F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80315604;
    }
}

loc_803155F4:
{
    r0 = MemoryInline::FlatRead8(r6);
    r0 = (r0 | 16);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    goto loc_80315618;
}

loc_80315604:
{
    r0 = MemoryInline::FlatRead8(r6);
    r0 = (r0 & 247);
}

loc_8031560C:
{
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    goto loc_80315618;
}

loc_80315614:
{
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r7 + 12), r3);
}

loc_80315618:
{
    r3 = r9;
    ctx->gpr[0] = r0;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_803154A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803154A4_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x00000309 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803154A4 func_803154A4 preserves=true fpr_mask=0x00000000
