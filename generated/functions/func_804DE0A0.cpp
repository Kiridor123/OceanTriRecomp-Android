#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D5400(CpuContext* ctx);
extern "C" uint64_t func_804D5400_ra0_0_18_0(CpuContext*);

extern "C" uint64_t func_804DE0A0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_subfic_ra_0 = 0;
    uint32_t r6_subfic_ra_1 = 0;
    uint32_t r6_subfic_ra_2 = 0;
    uint32_t r6_subfic_ra_3 = 0;
    uint32_t r6_subfic_ra_4 = 0;
    uint32_t r6_subfic_ra_5 = 0;
    uint32_t r6_subfic_ra_6 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_subfic_ra_0 = 0;
    uint32_t r7_subfic_ra_1 = 0;
    uint32_t r7_subfic_ra_2 = 0;
    uint32_t r7_subfic_ra_3 = 0;
    uint32_t r7_subfic_ra_4 = 0;
    uint32_t r7_subfic_ra_5 = 0;
    uint32_t r7_subfic_ra_6 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r8_rot_8 = 0;
    uint32_t r8_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804DE0A0u);
    goto loc_804DE0A0;

loc_804DE0A0:
{
    MemoryHw::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryHw::FlatWriteRam32((r1 + 36), r0);
    r30 = 0x80630000u;
    r29 = -855638016;
    r31 = MemoryHw::FlatRead32((r29 + 25656));
    r0 = MemoryHw::FlatRead32((r29 + 25652));
    r0 = (r0 | -2147483648);
    r0 = (r0 & -2);
    MemoryHw::FlatWrite32((r29 + 25652), r0);
    r0 = MemoryHw::FlatRead32((r30 + -22368));
}

loc_804DE0DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_804DE374;
    }
}

loc_804DE0E0:
{
    ctx->lr = 0x804DE0E4u;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_804D5400_E9B = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_E9B);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_E9B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r7 = MemoryHw::FlatRead32((r30 + -22368));
    r6 = 0x80760000u;
    r5 = (r30 + -22368);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r7 = (r7_rot_1 & -8);
    r6 = (r6 + -25784);
    r0 = MemoryHw::FlatRead32((r5 + 8));
    r6 = (r6 + r7);
    MemoryHw::FlatWrite32((r6 + 4), r4);
    r7 = 0;
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r8 = (r8_rot_1 & 1073741823);
}

loc_804DE10C:
{
    r5 = MemoryHw::FlatRead32((r5 + 12));
    MemoryHw::FlatWrite32(r6, r3);
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804DE1C4;
    }
}

loc_804DE118:
{
}

loc_804DE11C:
{
    r3 = (r8 + -8);
    if ((static_cast<uint32_t>(r8) <= static_cast<uint32_t>(8))) {
        goto loc_804DE18C;
    }
}

loc_804DE124:
{
    r0 = (r3 + 7);
    r4 = (r29 + 25600);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_804DE138:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_804DE18C;
    }
}

loc_804DE13C:
{
    guest_range_0 = MemoryHw::ResolveRangeHost((r4 + 128), 0, 32u, true, false);
    r0 = MemoryHw::ReadResolved32(guest_range_0, 0u, (r4 + 128));
    r7 = (r7 + 8);
    guest_range_1 = MemoryHw::ResolveRangeHost(r5, 0, 32u, false, true);
    MemoryHw::WriteResolved32(guest_range_1, 0u, r5, r0);
    r0 = MemoryHw::ReadResolved32(guest_range_0, 4u, (r4 + 132));
    MemoryHw::WriteResolved32(guest_range_1, 4u, (r5 + 4), r0);
    r0 = MemoryHw::ReadResolved32(guest_range_0, 8u, (r4 + 136));
    MemoryHw::WriteResolved32(guest_range_1, 8u, (r5 + 8), r0);
    r0 = MemoryHw::ReadResolved32(guest_range_0, 12u, (r4 + 140));
    MemoryHw::WriteResolved32(guest_range_1, 12u, (r5 + 12), r0);
    r0 = MemoryHw::ReadResolved32(guest_range_0, 16u, (r4 + 144));
    MemoryHw::WriteResolved32(guest_range_1, 16u, (r5 + 16), r0);
    r0 = MemoryHw::ReadResolved32(guest_range_0, 20u, (r4 + 148));
    MemoryHw::WriteResolved32(guest_range_1, 20u, (r5 + 20), r0);
    r0 = MemoryHw::ReadResolved32(guest_range_0, 24u, (r4 + 152));
    MemoryHw::WriteResolved32(guest_range_1, 24u, (r5 + 24), r0);
    r0 = MemoryHw::ReadResolved32(guest_range_0, 28u, (r4 + 156));
    r4 = (r4 + 32);
    MemoryHw::WriteResolved32(guest_range_1, 28u, (r5 + 28), r0);
    r5 = (r5 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804DE13C;
    }
}

loc_804DE18C:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r0 = -855638016;
    r3 = (r0 + r3);
    r0 = (r8 - r7);
    r3 = (r3 + 25600);
    ctr = r0;
}

loc_804DE1A8:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r8))) {
        goto loc_804DE1C4;
    }
}

loc_804DE1AC:
{
    r0 = MemoryHw::FlatRead32((r3 + 128));
    r7 = (r7 + 1);
    MemoryHw::FlatWrite32(r5, r0);
    r5 = (r5 + 4);
    r3 = (r3 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804DE1AC;
    }
}

loc_804DE1C4:
{
    r3 = 0x80630000u;
    r3 = (r3 + -22368);
    r0 = MemoryHw::FlatRead32((r3 + 8));
    r3 = (r0 & 3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_804DE1D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804DE2E0;
    }
}

loc_804DE1D8:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r4 = -855638016;
    r6 = (r4 + r0);
    r0 = MemoryHw::FlatRead32((r6 + 25728));
    r4 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804DE2E0;
    }
}

loc_804DE1F0:
{
}

loc_804DE1F4:
{
    r7 = (r3 + -8);
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(8))) {
        goto loc_804DE2B4;
    }
}

loc_804DE1FC:
{
    r6 = (r7 + 7);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r6 = (r6_rot_1 & 536870911);
    ctr = r6;
}

loc_804DE20C:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(0))) {
        goto loc_804DE2B4;
    }
}

loc_804DE210:
{
    r6 = (3 - r4);
    r7 = (r4 + 1);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r8 = (r8_rot_3 & -8);
    r9 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r8));
    r7_subfic_ra_2 = r7;
    r7 = (3 - r7_subfic_ra_2);
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r8 = (r8_rot_4 & -8);
    guest_range_2 = MemoryHw::ResolveRangeHost(r5, 0, 8u, false, true);
    MemoryHw::WriteResolved8(guest_range_2, 0u, r5, static_cast<uint8_t>(r9));
    r7 = (r4 + 2);
    r6 = (0 - r4);
    r9 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r8));
    MemoryHw::WriteResolved8(guest_range_2, 1u, (r5 + 1), static_cast<uint8_t>(r9));
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r8 = (r8_rot_5 & -8);
    r7_subfic_ra_3 = r7;
    r7 = (3 - r7_subfic_ra_3);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r6 = (r6_rot_3 & -8);
    r9 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    MemoryHw::WriteResolved8(guest_range_2, 2u, (r5 + 2), static_cast<uint8_t>(r9));
    r6 = (r4 + 4);
    r8 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r8));
    r7 = (3 - r6);
    MemoryHw::WriteResolved8(guest_range_2, 3u, (r5 + 3), static_cast<uint8_t>(r8));
    r6 = (r4 + 5);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r7 = (r7_rot_3 & -8);
    r9 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r7));
    r6_subfic_ra_2 = r6;
    r6 = (3 - r6_subfic_ra_2);
    r8_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r8 = (r8_rot_6 & -8);
    MemoryHw::WriteResolved8(guest_range_2, 4u, (r5 + 4), static_cast<uint8_t>(r9));
    r6 = (r4 + 6);
    r7 = (3 - r6);
    r8 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r8));
    r6 = (r4 + 7);
    MemoryHw::WriteResolved8(guest_range_2, 5u, (r5 + 5), static_cast<uint8_t>(r8));
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r7 = (r7_rot_4 & -8);
    r4 = (r4 + 8);
    r6_subfic_ra_3 = r6;
    r6 = (3 - r6_subfic_ra_3);
    r7 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r7));
    MemoryHw::WriteResolved8(guest_range_2, 6u, (r5 + 6), static_cast<uint8_t>(r7));
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_4 & -8);
    r6 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    MemoryHw::WriteResolved8(guest_range_2, 7u, (r5 + 7), static_cast<uint8_t>(r6));
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804DE210;
    }
}

loc_804DE2B4:
{
    r6 = (r3 - r4);
    ctr = r6;
}

loc_804DE2C0:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3))) {
        goto loc_804DE2E0;
    }
}

loc_804DE2C4:
{
    r3 = (3 - r4);
    r4 = (r4 + 1);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_4 & -8);
    r3 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
    MemoryHw::FlatWrite8(r5, static_cast<uint8_t>(r3));
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804DE2C4;
    }
}

loc_804DE2E0:
{
    r3 = -855638016;
    r0 = MemoryHw::FlatRead32((r3 + 25652));
    r0 = (r0 & 536870912);
}

loc_804DE2EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DE340;
    }
}

loc_804DE2F0:
{
    r3 = 0x80630000u;
    r4 = MemoryHw::FlatRead32((r3 + -22368));
    r0 = (3 - r4);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & -8);
    r31 = PPC_Srw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
    r31 = (r31 & 15);
    r0 = (r31 & 8);
}

loc_804DE30C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DE330;
    }
}

loc_804DE310:
{
    r3 = 0x80630000u;
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r3 = (r3 + -22344);
    r3_addr_1 = (r3 + r4);
    r0 = MemoryHw::FlatRead32(r3_addr_1);
    r0 = (r0 & 128);
}

loc_804DE324:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804DE330;
    }
}

loc_804DE328:
{
    r0 = 8;
    r3_addr_2 = (r3 + r4);
    MemoryHw::FlatWrite32(r3_addr_2, r0);
}

loc_804DE330:
{
}

loc_804DE334:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_804DE368;
    }
}

loc_804DE338:
{
    r31 = 4;
    goto loc_804DE368;
}

loc_804DE340:
{
    ctx->lr = 0x804DE344u;
    if constexpr (KnownRegArgsCpuCall<0x804D5400u>(&func_804D5400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_804D5400_35AA = func_804D5400_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D5400_35AA);
        r4 = static_cast<uint32_t>(regargs_result_804D5400_35AA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x804D5400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r6 = 0x80630000u;
    r5 = 0x80760000u;
    r0 = MemoryHw::FlatRead32((r6 + -22368));
    r5 = (r5 + -25752);
    r31 = 0;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & -8);
    r5 = (r5 + r0);
    MemoryHw::FlatWrite32((r5 + 4), r4);
    MemoryHw::FlatWrite32(r5, r3);
}

loc_804DE368:
{
    r3 = 0x80630000u;
    r0 = -1;
    MemoryHw::FlatWriteRam32((r3 + -22368), r0);
}

loc_804DE374:
{
    r3 = r31;
    r0 = MemoryHw::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804DE0A0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804DE0A0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003FB gpr_write=0x000003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804DE0A0 func_804DE0A0 preserves=true fpr_mask=0x00000000
