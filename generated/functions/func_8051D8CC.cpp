#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8051D8CC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_mdest_0 = 0;
    uint32_t r10_mdest_1 = 0;
    uint32_t r10_mdest_10 = 0;
    uint32_t r10_mdest_11 = 0;
    uint32_t r10_mdest_12 = 0;
    uint32_t r10_mdest_13 = 0;
    uint32_t r10_mdest_2 = 0;
    uint32_t r10_mdest_3 = 0;
    uint32_t r10_mdest_4 = 0;
    uint32_t r10_mdest_5 = 0;
    uint32_t r10_mdest_6 = 0;
    uint32_t r10_mdest_7 = 0;
    uint32_t r10_mdest_8 = 0;
    uint32_t r10_mdest_9 = 0;
    uint32_t r10_mrot_0 = 0;
    uint32_t r10_mrot_1 = 0;
    uint32_t r10_mrot_10 = 0;
    uint32_t r10_mrot_11 = 0;
    uint32_t r10_mrot_12 = 0;
    uint32_t r10_mrot_13 = 0;
    uint32_t r10_mrot_2 = 0;
    uint32_t r10_mrot_3 = 0;
    uint32_t r10_mrot_4 = 0;
    uint32_t r10_mrot_5 = 0;
    uint32_t r10_mrot_6 = 0;
    uint32_t r10_mrot_7 = 0;
    uint32_t r10_mrot_8 = 0;
    uint32_t r10_mrot_9 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_10 = 0;
    uint32_t r10_rot_11 = 0;
    uint32_t r10_rot_12 = 0;
    uint32_t r10_rot_13 = 0;
    uint32_t r10_rot_14 = 0;
    uint32_t r10_rot_15 = 0;
    uint32_t r10_rot_16 = 0;
    uint32_t r10_rot_17 = 0;
    uint32_t r10_rot_18 = 0;
    uint32_t r10_rot_19 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_20 = 0;
    uint32_t r10_rot_21 = 0;
    uint32_t r10_rot_22 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r10_rot_6 = 0;
    uint32_t r10_rot_7 = 0;
    uint32_t r10_rot_8 = 0;
    uint32_t r10_rot_9 = 0;
    uint32_t r10_subfic_ra_0 = 0;
    uint32_t r10_subfic_ra_1 = 0;
    uint32_t r10_subfic_ra_2 = 0;
    uint32_t r10_subfic_ra_3 = 0;
    uint32_t r10_subfic_ra_4 = 0;
    uint32_t r10_subfic_ra_5 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r6_addr_dcbz_0 = 0;
    uint32_t r6_addr_dcbz_1 = 0;
    uint32_t r6_addr_dcbz_10 = 0;
    uint32_t r6_addr_dcbz_11 = 0;
    uint32_t r6_addr_dcbz_12 = 0;
    uint32_t r6_addr_dcbz_2 = 0;
    uint32_t r6_addr_dcbz_3 = 0;
    uint32_t r6_addr_dcbz_4 = 0;
    uint32_t r6_addr_dcbz_5 = 0;
    uint32_t r6_addr_dcbz_6 = 0;
    uint32_t r6_addr_dcbz_7 = 0;
    uint32_t r6_addr_dcbz_8 = 0;
    uint32_t r6_addr_dcbz_9 = 0;
    uint32_t r6_addr_dcbz_al_0 = 0;
    uint32_t r6_addr_dcbz_al_1 = 0;
    uint32_t r6_addr_dcbz_al_10 = 0;
    uint32_t r6_addr_dcbz_al_11 = 0;
    uint32_t r6_addr_dcbz_al_12 = 0;
    uint32_t r6_addr_dcbz_al_2 = 0;
    uint32_t r6_addr_dcbz_al_3 = 0;
    uint32_t r6_addr_dcbz_al_4 = 0;
    uint32_t r6_addr_dcbz_al_5 = 0;
    uint32_t r6_addr_dcbz_al_6 = 0;
    uint32_t r6_addr_dcbz_al_7 = 0;
    uint32_t r6_addr_dcbz_al_8 = 0;
    uint32_t r6_addr_dcbz_al_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_stbu_ea_0 = 0;
    uint32_t r7_stbu_ea_1 = 0;
    uint32_t r7_stbu_ea_2 = 0;
    uint32_t r7_stbu_ea_3 = 0;
    uint32_t r7_stbu_ea_4 = 0;
    uint32_t r7_stbu_ea_5 = 0;
    uint32_t r8_mdest_0 = 0;
    uint32_t r8_mdest_1 = 0;
    uint32_t r8_mdest_10 = 0;
    uint32_t r8_mdest_11 = 0;
    uint32_t r8_mdest_12 = 0;
    uint32_t r8_mdest_13 = 0;
    uint32_t r8_mdest_14 = 0;
    uint32_t r8_mdest_15 = 0;
    uint32_t r8_mdest_16 = 0;
    uint32_t r8_mdest_17 = 0;
    uint32_t r8_mdest_18 = 0;
    uint32_t r8_mdest_19 = 0;
    uint32_t r8_mdest_2 = 0;
    uint32_t r8_mdest_3 = 0;
    uint32_t r8_mdest_4 = 0;
    uint32_t r8_mdest_5 = 0;
    uint32_t r8_mdest_6 = 0;
    uint32_t r8_mdest_7 = 0;
    uint32_t r8_mdest_8 = 0;
    uint32_t r8_mdest_9 = 0;
    uint32_t r8_mrot_0 = 0;
    uint32_t r8_mrot_1 = 0;
    uint32_t r8_mrot_10 = 0;
    uint32_t r8_mrot_11 = 0;
    uint32_t r8_mrot_12 = 0;
    uint32_t r8_mrot_13 = 0;
    uint32_t r8_mrot_14 = 0;
    uint32_t r8_mrot_15 = 0;
    uint32_t r8_mrot_16 = 0;
    uint32_t r8_mrot_17 = 0;
    uint32_t r8_mrot_18 = 0;
    uint32_t r8_mrot_19 = 0;
    uint32_t r8_mrot_2 = 0;
    uint32_t r8_mrot_3 = 0;
    uint32_t r8_mrot_4 = 0;
    uint32_t r8_mrot_5 = 0;
    uint32_t r8_mrot_6 = 0;
    uint32_t r8_mrot_7 = 0;
    uint32_t r8_mrot_8 = 0;
    uint32_t r8_mrot_9 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_10 = 0;
    uint32_t r8_rot_11 = 0;
    uint32_t r8_rot_12 = 0;
    uint32_t r8_rot_13 = 0;
    uint32_t r8_rot_14 = 0;
    uint32_t r8_rot_15 = 0;
    uint32_t r8_rot_16 = 0;
    uint32_t r8_rot_17 = 0;
    uint32_t r8_rot_18 = 0;
    uint32_t r8_rot_19 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_20 = 0;
    uint32_t r8_rot_21 = 0;
    uint32_t r8_rot_22 = 0;
    uint32_t r8_rot_23 = 0;
    uint32_t r8_rot_24 = 0;
    uint32_t r8_rot_25 = 0;
    uint32_t r8_rot_26 = 0;
    uint32_t r8_rot_27 = 0;
    uint32_t r8_rot_28 = 0;
    uint32_t r8_rot_29 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_30 = 0;
    uint32_t r8_rot_31 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r8_rot_8 = 0;
    uint32_t r8_rot_9 = 0;
    uint32_t r9_mdest_0 = 0;
    uint32_t r9_mdest_1 = 0;
    uint32_t r9_mdest_10 = 0;
    uint32_t r9_mdest_11 = 0;
    uint32_t r9_mdest_12 = 0;
    uint32_t r9_mdest_13 = 0;
    uint32_t r9_mdest_2 = 0;
    uint32_t r9_mdest_3 = 0;
    uint32_t r9_mdest_4 = 0;
    uint32_t r9_mdest_5 = 0;
    uint32_t r9_mdest_6 = 0;
    uint32_t r9_mdest_7 = 0;
    uint32_t r9_mdest_8 = 0;
    uint32_t r9_mdest_9 = 0;
    uint32_t r9_mrot_0 = 0;
    uint32_t r9_mrot_1 = 0;
    uint32_t r9_mrot_10 = 0;
    uint32_t r9_mrot_11 = 0;
    uint32_t r9_mrot_12 = 0;
    uint32_t r9_mrot_13 = 0;
    uint32_t r9_mrot_2 = 0;
    uint32_t r9_mrot_3 = 0;
    uint32_t r9_mrot_4 = 0;
    uint32_t r9_mrot_5 = 0;
    uint32_t r9_mrot_6 = 0;
    uint32_t r9_mrot_7 = 0;
    uint32_t r9_mrot_8 = 0;
    uint32_t r9_mrot_9 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_10 = 0;
    uint32_t r9_rot_11 = 0;
    uint32_t r9_rot_12 = 0;
    uint32_t r9_rot_13 = 0;
    uint32_t r9_rot_14 = 0;
    uint32_t r9_rot_15 = 0;
    uint32_t r9_rot_16 = 0;
    uint32_t r9_rot_17 = 0;
    uint32_t r9_rot_18 = 0;
    uint32_t r9_rot_19 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_20 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint32_t r9_rot_7 = 0;
    uint32_t r9_rot_8 = 0;
    uint32_t r9_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;

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
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8051D8CC;

loc_8051D8CC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
}

loc_8051D8D4:
{
    r0 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8051D8E4;
    }
}

loc_8051D8E0:
{
    goto loc_8051DC80;
}

loc_8051D8E4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8051D930;
    }
}

loc_8051D8E8:
{
    r6 = (r4 + r5);
}

loc_8051D8F0:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r6))) {
        goto loc_8051D930;
    }
}

loc_8051D8F4:
{
    r4 = (r5 & 3);
}

loc_8051D8F8:
{
    r7 = (r3 + r5);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r5 = (r5_rot_1 & 1073741823);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8051D914;
    }
}

loc_8051D904:
{
    ctr = r4;
}

loc_8051D908:
{
    r6 = (r6 + -1);
    r3 = MemoryInline::FlatRead8(r6);
    r7_stbu_ea_2 = (r7 + -1);
    MemoryInline::FlatWrite8(r7_stbu_ea_2, static_cast<uint8_t>(r3));
    r7 = r7_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8051D908;
    }
}

loc_8051D914:
{
}

loc_8051D918:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8051DC7C;
    }
}

loc_8051D91C:
{
    ctr = r5;
}

loc_8051D920:
{
    r6 = (r6 + -4);
    r3 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32((r7 + -4), r3);
    r7 = (r7 + -4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8051D920;
    }
}

loc_8051D92C:
{
    goto loc_8051DC7C;
}

loc_8051D930:
{
    r6 = (r4 + -32);
}

loc_8051D938:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r6))) {
        goto loc_8051D944;
    }
}

loc_8051D93C:
{
}

loc_8051D940:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r4))) {
        goto loc_8051DC38;
    }
}

loc_8051D944:
{
}

loc_8051D948:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(64))) {
        goto loc_8051DC38;
    }
}

loc_8051D94C:
{
    r10 = (r3 & 31);
}

loc_8051D950:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_8051D9B0;
    }
}

loc_8051D954:
{
    r10_subfic_ra_1 = r10;
    r10 = (32 - r10_subfic_ra_1);
    r8 = r4;
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(30));
    r6 = (r6_rot_1 & 1073741823);
}

loc_8051D960:
{
    r9 = r3;
    r7 = (r10 & 3);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8051D984;
    }
}

loc_8051D96C:
{
    ctr = r6;
}

loc_8051D970:
{
    r6 = MemoryInline::FlatRead32(r8);
    r8 = (r8 + 4);
    MemoryInline::FlatWrite32(r9, r6);
    r9 = (r9 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8051D970;
    }
}

loc_8051D984:
{
}

loc_8051D988:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8051D9A4;
    }
}

loc_8051D98C:
{
    ctr = r7;
}

loc_8051D990:
{
    r6 = MemoryInline::FlatRead8(r8);
    r8 = (r8 + 1);
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r6));
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8051D990;
    }
}

loc_8051D9A4:
{
    r3 = (r3 + r10);
    r4 = (r4 + r10);
    r5 = (r5 - r10);
}

loc_8051D9B0:
{
    r8 = (r4 & 3);
    r7 = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(2));
}

loc_8051D9BC:
{
    r6 = r3;
    r31 = (r5 & -32);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r9 = (r9_rot_1 & 134217727);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051DAE8;
    }
}

loc_8051D9CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8051D9E0;
    }
}

loc_8051D9D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_8051D9D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051D9EC;
    }
}

loc_8051D9D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8051DA44;
    }
}

loc_8051D9DC:
{
    goto loc_8051DC2C;
}

loc_8051D9E0:
{
}

loc_8051D9E4:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(4))) {
        goto loc_8051DC2C;
    }
}

loc_8051D9E8:
{
    goto loc_8051DB8C;
}

loc_8051D9EC:
{
    ctr = r9;
}

loc_8051D9F0:
{
    r6_addr_dcbz_4 = r6;
    r6_addr_dcbz_al_4 = (r6_addr_dcbz_4 & -32);
    memset_zero_32(r6_addr_dcbz_al_4);
    guest_range_0 = MemoryInline::ResolveRangeHost(r7, 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r7);
            r11 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r7 + 4));
        }
    }
    guest_range_1 = MemoryInline::ResolveRangeHost(r6, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r6, r12);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r6 + 4), r11);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r7 + 8));
            r11 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r7 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r6 + 8), r12);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r6 + 12), r11);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r7 + 16));
            r11 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r7 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r6 + 16), r12);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r6 + 20), r11);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r7 + 24));
            r11 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r7 + 28));
        }
    }
    r7 = (r7 + 32);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r6 + 24), r12);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r6 + 28), r11);
    }
    r6 = (r6 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8051D9F0;
    }
}

loc_8051DA40:
{
    goto loc_8051DC2C;
}

loc_8051DA44:
{
    r10 = MemoryInline::FlatRead32((r4 + -1));
    ctr = r9;
    r7 = (r4 + 3);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(8));
    r10 = (r10_rot_1 & -256);
}

loc_8051DA54:
{
    r6_addr_dcbz_2 = r6;
    r6_addr_dcbz_al_2 = (r6_addr_dcbz_2 & -32);
    memset_zero_32(r6_addr_dcbz_al_2);
    guest_range_2 = MemoryInline::ResolveRangeHost(r7, 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_2, 0u, r7);
            r11 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r7 + 4));
        }
    }
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(8));
    r10_mrot_2 = (r10_rot_3 & 255);
    r10_mdest_2 = (r10 & -256);
    r10 = (r10_mdest_2 | r10_mrot_2);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(8));
    r8 = (r8_rot_2 & -256);
    guest_range_3 = MemoryInline::ResolveRangeHost(r6, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, r6, r10);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(8));
    r8_mrot_2 = (r8_rot_3 & 255);
    r8_mdest_2 = (r8 & -256);
    r8 = (r8_mdest_2 | r8_mrot_2);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(8));
    r9 = (r9_rot_3 & -256);
    r12 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r7 + 8));
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r6 + 4), r8);
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(8));
    r9_mrot_2 = (r9_rot_4 & 255);
    r9_mdest_2 = (r9 & -256);
    r9 = (r9_mdest_2 | r9_mrot_2);
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(8));
    r8 = (r8_rot_4 & -256);
    r11 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r7 + 12));
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r6 + 8), r9);
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(8));
    r8_mrot_3 = (r8_rot_5 & 255);
    r8_mdest_3 = (r8 & -256);
    r8 = (r8_mdest_3 | r8_mrot_3);
    r10_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(8));
    r10 = (r10_rot_4 & -256);
    r12 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r7 + 16));
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r6 + 12), r8);
    r10_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(8));
    r10_mrot_3 = (r10_rot_5 & 255);
    r10_mdest_3 = (r10 & -256);
    r10 = (r10_mdest_3 | r10_mrot_3);
    r8_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(8));
    r8 = (r8_rot_6 & -256);
    r11 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r7 + 20));
    MemoryInline::WriteResolved32(guest_range_3, 16u, (r6 + 16), r10);
    r8_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(8));
    r8_mrot_4 = (r8_rot_7 & 255);
    r8_mdest_4 = (r8 & -256);
    r8 = (r8_mdest_4 | r8_mrot_4);
    r9_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(8));
    r9 = (r9_rot_5 & -256);
    r12 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r7 + 24));
    MemoryInline::WriteResolved32(guest_range_3, 20u, (r6 + 20), r8);
    r9_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(8));
    r9_mrot_3 = (r9_rot_6 & 255);
    r9_mdest_3 = (r9 & -256);
    r9 = (r9_mdest_3 | r9_mrot_3);
    r8_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(8));
    r8 = (r8_rot_8 & -256);
    r11 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r7 + 28));
    r7 = (r7 + 32);
    MemoryInline::WriteResolved32(guest_range_3, 24u, (r6 + 24), r9);
    r8_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(8));
    r8_mrot_5 = (r8_rot_9 & 255);
    r8_mdest_5 = (r8 & -256);
    r8 = (r8_mdest_5 | r8_mrot_5);
    r10_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(8));
    r10 = (r10_rot_6 & -256);
    MemoryInline::WriteResolved32(guest_range_3, 28u, (r6 + 28), r8);
    r6 = (r6 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8051DA54;
    }
}

loc_8051DAE4:
{
    goto loc_8051DC2C;
}

loc_8051DAE8:
{
    r10 = MemoryInline::FlatRead32((r4 + -2));
    ctr = r9;
    r7 = (r4 + 2);
    r10_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(16));
    r10 = (r10_rot_13 & -65536);
}

loc_8051DAF8:
{
    r6_addr_dcbz_8 = r6;
    r6_addr_dcbz_al_8 = (r6_addr_dcbz_8 & -32);
    memset_zero_32(r6_addr_dcbz_al_8);
    guest_range_4 = MemoryInline::ResolveRangeHost(r7, 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_4, 0u, r7);
            r11 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r7 + 4));
        }
    }
    r10_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(16));
    r10_mrot_8 = (r10_rot_15 & 65535);
    r10_mdest_8 = (r10 & -65536);
    r10 = (r10_mdest_8 | r10_mrot_8);
    r8_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(16));
    r8 = (r8_rot_20 & -65536);
    guest_range_5 = MemoryInline::ResolveRangeHost(r6, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_5, 0u, r6, r10);
    r8_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(16));
    r8_mrot_12 = (r8_rot_21 & 65535);
    r8_mdest_12 = (r8 & -65536);
    r8 = (r8_mdest_12 | r8_mrot_12);
    r9_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(16));
    r9 = (r9_rot_13 & -65536);
    r12 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r7 + 8));
    MemoryInline::WriteResolved32(guest_range_5, 4u, (r6 + 4), r8);
    r9_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(16));
    r9_mrot_8 = (r9_rot_14 & 65535);
    r9_mdest_8 = (r9 & -65536);
    r9 = (r9_mdest_8 | r9_mrot_8);
    r8_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(16));
    r8 = (r8_rot_22 & -65536);
    r11 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r7 + 12));
    MemoryInline::WriteResolved32(guest_range_5, 8u, (r6 + 8), r9);
    r8_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(16));
    r8_mrot_13 = (r8_rot_23 & 65535);
    r8_mdest_13 = (r8 & -65536);
    r8 = (r8_mdest_13 | r8_mrot_13);
    r10_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(16));
    r10 = (r10_rot_16 & -65536);
    r12 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r7 + 16));
    MemoryInline::WriteResolved32(guest_range_5, 12u, (r6 + 12), r8);
    r10_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(16));
    r10_mrot_9 = (r10_rot_17 & 65535);
    r10_mdest_9 = (r10 & -65536);
    r10 = (r10_mdest_9 | r10_mrot_9);
    r8_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(16));
    r8 = (r8_rot_24 & -65536);
    r11 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r7 + 20));
    MemoryInline::WriteResolved32(guest_range_5, 16u, (r6 + 16), r10);
    r8_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(16));
    r8_mrot_14 = (r8_rot_25 & 65535);
    r8_mdest_14 = (r8 & -65536);
    r8 = (r8_mdest_14 | r8_mrot_14);
    r9_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(16));
    r9 = (r9_rot_15 & -65536);
    r12 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r7 + 24));
    MemoryInline::WriteResolved32(guest_range_5, 20u, (r6 + 20), r8);
    r9_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(16));
    r9_mrot_9 = (r9_rot_16 & 65535);
    r9_mdest_9 = (r9 & -65536);
    r9 = (r9_mdest_9 | r9_mrot_9);
    r8_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(16));
    r8 = (r8_rot_26 & -65536);
    r11 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r7 + 28));
    r7 = (r7 + 32);
    MemoryInline::WriteResolved32(guest_range_5, 24u, (r6 + 24), r9);
    r8_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(16));
    r8_mrot_15 = (r8_rot_27 & 65535);
    r8_mdest_15 = (r8 & -65536);
    r8 = (r8_mdest_15 | r8_mrot_15);
    r10_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(16));
    r10 = (r10_rot_18 & -65536);
    MemoryInline::WriteResolved32(guest_range_5, 28u, (r6 + 28), r8);
    r6 = (r6 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8051DAF8;
    }
}

loc_8051DB88:
{
    goto loc_8051DC2C;
}

loc_8051DB8C:
{
    r10 = MemoryInline::FlatRead32((r4 + -3));
    ctr = r9;
    r7 = (r4 + 1);
    r10_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(24));
    r10 = (r10_rot_7 & -16777216);
}

loc_8051DB9C:
{
    r6_addr_dcbz_6 = r6;
    r6_addr_dcbz_al_6 = (r6_addr_dcbz_6 & -32);
    memset_zero_32(r6_addr_dcbz_al_6);
    guest_range_6 = MemoryInline::ResolveRangeHost(r7, 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 0u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_6, 0u, r7);
            r11 = MemoryInline::ReadResolved32(guest_range_6, 4u, (r7 + 4));
        }
    }
    r10_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(24));
    r10_mrot_5 = (r10_rot_9 & 16777215);
    r10_mdest_5 = (r10 & -16777216);
    r10 = (r10_mdest_5 | r10_mrot_5);
    r8_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(24));
    r8 = (r8_rot_11 & -16777216);
    guest_range_7 = MemoryInline::ResolveRangeHost(r6, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_7, 0u, r6, r10);
    r8_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(24));
    r8_mrot_7 = (r8_rot_12 & 16777215);
    r8_mdest_7 = (r8 & -16777216);
    r8 = (r8_mdest_7 | r8_mrot_7);
    r9_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(24));
    r9 = (r9_rot_8 & -16777216);
    r12 = MemoryInline::ReadResolved32(guest_range_6, 8u, (r7 + 8));
    MemoryInline::WriteResolved32(guest_range_7, 4u, (r6 + 4), r8);
    r9_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(24));
    r9_mrot_5 = (r9_rot_9 & 16777215);
    r9_mdest_5 = (r9 & -16777216);
    r9 = (r9_mdest_5 | r9_mrot_5);
    r8_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(24));
    r8 = (r8_rot_13 & -16777216);
    r11 = MemoryInline::ReadResolved32(guest_range_6, 12u, (r7 + 12));
    MemoryInline::WriteResolved32(guest_range_7, 8u, (r6 + 8), r9);
    r8_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(24));
    r8_mrot_8 = (r8_rot_14 & 16777215);
    r8_mdest_8 = (r8 & -16777216);
    r8 = (r8_mdest_8 | r8_mrot_8);
    r10_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(24));
    r10 = (r10_rot_10 & -16777216);
    r12 = MemoryInline::ReadResolved32(guest_range_6, 16u, (r7 + 16));
    MemoryInline::WriteResolved32(guest_range_7, 12u, (r6 + 12), r8);
    r10_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(24));
    r10_mrot_6 = (r10_rot_11 & 16777215);
    r10_mdest_6 = (r10 & -16777216);
    r10 = (r10_mdest_6 | r10_mrot_6);
    r8_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(24));
    r8 = (r8_rot_15 & -16777216);
    r11 = MemoryInline::ReadResolved32(guest_range_6, 20u, (r7 + 20));
    MemoryInline::WriteResolved32(guest_range_7, 16u, (r6 + 16), r10);
    r8_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(24));
    r8_mrot_9 = (r8_rot_16 & 16777215);
    r8_mdest_9 = (r8 & -16777216);
    r8 = (r8_mdest_9 | r8_mrot_9);
    r9_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(24));
    r9 = (r9_rot_10 & -16777216);
    r12 = MemoryInline::ReadResolved32(guest_range_6, 24u, (r7 + 24));
    MemoryInline::WriteResolved32(guest_range_7, 20u, (r6 + 20), r8);
    r9_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(24));
    r9_mrot_6 = (r9_rot_11 & 16777215);
    r9_mdest_6 = (r9 & -16777216);
    r9 = (r9_mdest_6 | r9_mrot_6);
    r8_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(24));
    r8 = (r8_rot_17 & -16777216);
    r11 = MemoryInline::ReadResolved32(guest_range_6, 28u, (r7 + 28));
    r7 = (r7 + 32);
    MemoryInline::WriteResolved32(guest_range_7, 24u, (r6 + 24), r9);
    r8_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(24));
    r8_mrot_10 = (r8_rot_18 & 16777215);
    r8_mdest_10 = (r8 & -16777216);
    r8 = (r8_mdest_10 | r8_mrot_10);
    r10_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(24));
    r10 = (r10_rot_12 & -16777216);
    MemoryInline::WriteResolved32(guest_range_7, 28u, (r6 + 28), r8);
    r6 = (r6 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8051DB9C;
    }
}

loc_8051DC2C:
{
    r3 = (r3 + r31);
    r4 = (r4 + r31);
    r5 = (r5 - r31);
}

loc_8051DC38:
{
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r7 = (r7_rot_1 & 1073741823);
}

loc_8051DC3C:
{
    r6 = (r5 & 3);
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8051DC5C;
    }
}

loc_8051DC44:
{
    ctr = r7;
}

loc_8051DC48:
{
    r5 = MemoryInline::FlatRead32(r4);
    r4 = (r4 + 4);
    MemoryInline::FlatWrite32(r3, r5);
    r3 = (r3 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8051DC48;
    }
}

loc_8051DC5C:
{
}

loc_8051DC60:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8051DC7C;
    }
}

loc_8051DC64:
{
    ctr = r6;
}

loc_8051DC68:
{
    r5 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r5));
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8051DC68;
    }
}

loc_8051DC7C:
{
    r3 = r0;
}

loc_8051DC80:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8051D8CC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8051D8CC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8051D8CC func_8051D8CC preserves=true fpr_mask=0x00000000
