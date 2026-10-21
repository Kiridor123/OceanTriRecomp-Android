#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802D7350_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t addr_lhax_802D74A0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x802D7350u);
    goto loc_802D7350;

loc_802D7350:
{
    r4 = 0x806C0000u;
    r5 = (r4 + -2080);
    r0 = MemoryInline::FlatRead8((r4 + -2080));
}

loc_802D7360:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802D736C;
    }
}

loc_802D7364:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802D736C:
{
    r4 = (r3 & 65535);
    r0 = (r4 + -26);
}

loc_802D7378:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_802D739C;
    }
}

loc_802D737C:
{
    r0 = (r4 + -30);
}

loc_802D7384:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_802D739C;
    }
}

loc_802D7388:
{
    r0 = (r4 + -239);
}

loc_802D7390:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_802D739C;
    }
}

loc_802D7394:
{
}

loc_802D7398:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(45))) {
        goto loc_802D73A4;
    }
}

loc_802D739C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802D73A4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 826), 0, 234u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 230u, (r5 + 1056));
}

loc_802D73AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_802D73BC;
    }
}

loc_802D73B0:
{
}

loc_802D73B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802D742C;
    }
}

loc_802D73B8:
{
    goto loc_802D74C0;
}

loc_802D73BC:
{
}

loc_802D73C0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(29))) {
        goto loc_802D74C0;
    }
}

loc_802D73C4:
{
    r3 = 10;
    r0 = MemoryInline::ReadResolved16(guest_range_0, 118u, (r5 + 944));
}

loc_802D73D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(29))) {
        goto loc_802D73E0;
    }
}

loc_802D73D4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 120u, (r5 + 946));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_subfic_ra_1 = r0;
    r0 = (10 - r0_subfic_ra_1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802D73E0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 122u, (r5 + 948));
}

loc_802D73E8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(29))) {
        goto loc_802D73F8;
    }
}

loc_802D73EC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 124u, (r5 + 950));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 - r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802D73F8:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 126u, (r5 + 952));
}

loc_802D7400:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(29))) {
        goto loc_802D7410;
    }
}

loc_802D7404:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 128u, (r5 + 954));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 - r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802D7410:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 130u, (r5 + 956));
}

loc_802D7418:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(29))) {
        goto loc_return;
    }
}

loc_802D741C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 132u, (r5 + 958));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 - r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802D742C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 232u, (r5 + 1058));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802D7434:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802D7440;
    }
}

loc_802D7438:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802D7440:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r5 + 826));
    r0 = (r4 + 1);
    r6 = (r0 & 255);
}

loc_802D7450:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(4))) {
        goto loc_802D7458;
    }
}

loc_802D7454:
{
    r6 = 4;
}

loc_802D7458:
{
    r5 = 0;
    r3 = (r3 & 65535);
    r4 = 0x805D0000u;
    r4 = (r4 + 19944);
    r0 = (r6 + 1);
    ctr = r0;
}

loc_802D7474:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(0))) {
        goto loc_802D74C0;
    }
}

loc_802D7478:
{
    r0 = (r5 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4_addr_2 = (r4 + r0);
    r6 = MemoryInline::FlatRead32(r4_addr_2);
    goto loc_802D74AC;
}

loc_802D7488:
{
}

loc_802D748C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_802D74A8;
    }
}

loc_802D7490:
{
    r0 = (r5 & 255);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3 = 0x805D0000u;
    r3 = (r3 + 19968);
    addr_lhax_802D74A0_loc_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(addr_lhax_802D74A0_loc_0);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802D74A8:
{
    r6 = (r6 + 2);
}

loc_802D74AC:
{
    r0 = MemoryInline::FlatRead16(r6);
}

loc_802D74B4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_802D7488;
    }
}

loc_802D74B8:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802D7478;
    }
}

loc_802D74C0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802D7350(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802D7350_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802D7350 func_802D7350 preserves=true fpr_mask=0x00000000
