#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D1740(CpuContext* ctx);
extern "C" uint64_t func_804D1740_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_804B0640_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_10 = 0;
    uint32_t r5_rot_11 = 0;
    uint32_t r5_rot_12 = 0;
    uint32_t r5_rot_13 = 0;
    uint32_t r5_rot_14 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
    uint32_t r5_subfic_ra_0 = 0;
    uint32_t r5_subfic_ra_1 = 0;
    uint32_t r5_subfic_ra_10 = 0;
    uint32_t r5_subfic_ra_11 = 0;
    uint32_t r5_subfic_ra_2 = 0;
    uint32_t r5_subfic_ra_3 = 0;
    uint32_t r5_subfic_ra_4 = 0;
    uint32_t r5_subfic_ra_5 = 0;
    uint32_t r5_subfic_ra_6 = 0;
    uint32_t r5_subfic_ra_7 = 0;
    uint32_t r5_subfic_ra_8 = 0;
    uint32_t r5_subfic_ra_9 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_804B0640;

loc_804B0640:
{
    guest_range_1 = MemoryHw::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryHw::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryHw::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r25 = r7;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(6));
    r0 = (r0_rot_0 & -64);
    r3 = 0x80750000u;
    r3 = (r3 + -28640);
    r31 = (r3 + r0);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r30 = r3;
    r0 = MemoryHw::FlatRead32((r31 + 12));
    r0 = (r0 & 3);
}

loc_804B0688:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804B0698;
    }
}

loc_804B068C:
{
    r0 = MemoryHw::FlatRead32((r31 + 12));
    r0 = (r0 & 4);
}

loc_804B0694:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804B06A8;
    }
}

loc_804B0698:
{
    r3 = r30;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl2_0x804D1330:
{
}

loc_inl2_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x804D1344;
    }
}

loc_inl2_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl2_0x804D1348;
}

loc_inl2_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl2_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_6 & 1);
}

loc_inl2_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = 0;
    goto loc_804B08A4;
}

loc_804B06A8:
{
    MemoryHw::FlatWrite32((r31 + 4), r25);
}

loc_804B06B0:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_804B06E4;
    }
}

loc_804B06B4:
{
    r3 = (r26 * 20);
    r0 = -855638016;
    r3 = (r0 + r3);
    r0 = MemoryHw::FlatRead32((r3 + 26624));
    r0 = (r0 & 2037);
}

loc_804B06C8:
{
    r0 = (r0 | 8);
    MemoryHw::FlatWrite32((r3 + 26624), r0);
    r3 = 2097152;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r0 = (r0 - r26);
    r3 = PPC_Srw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    ctx->lr = 0x804B06E4u;
    if constexpr (KnownRegArgsCpuCall<0x804D1740u>(&func_804D1740)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804D1740_14B8 = func_804D1740_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804D1740_14B8);
        r4 = static_cast<uint32_t>(regargs_result_804D1740_14B8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804D1740u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_804B06E4:
{
    r0 = MemoryHw::FlatRead32((r31 + 12));
    r0 = (r0 | 2);
    MemoryHw::FlatWrite32((r31 + 12), r0);
}

loc_804B06F4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_804B0858;
    }
}

loc_804B06F8:
{
    r0 = 0;
    r4 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_804B0704:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_804B0848;
    }
}

loc_804B0708:
{
    r6 = (r28 + -8);
}

loc_804B0710:
{
    if ((static_cast<int32_t>(r28) <= static_cast<int32_t>(8))) {
        goto loc_804B0814;
    }
}

loc_804B0714:
{
    r5 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_804B0730;
    }
}

loc_804B071C:
{
    r3 = 0x80000000u;
    r3 = (r3 + -2);
}

loc_804B0728:
{
    if ((static_cast<int32_t>(r28) > static_cast<int32_t>(r3))) {
        goto loc_804B0730;
    }
}

loc_804B072C:
{
    r5 = 1;
}

loc_804B0730:
{
}

loc_804B0734:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804B0814;
    }
}

loc_804B0738:
{
    r3 = r27;
    r5 = (r6 + 7);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r5 = (r5_rot_1 & 536870911);
    ctr = r5;
}

loc_804B074C:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(0))) {
        goto loc_804B0814;
    }
}

loc_804B0750:
{
    guest_range_0 = MemoryHw::ResolveRangeHost(r3, 0, 8u, true, false);
    r6 = MemoryHw::ReadResolved8(guest_range_0, 0u, r3);
    r5 = (3 - r4);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_3 & -8);
    r5 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
    r0 = (r0 | r5);
    r6 = MemoryHw::ReadResolved8(guest_range_0, 1u, (r3 + 1));
    r5 = (r4 + 1);
    r5_subfic_ra_2 = r5;
    r5 = (3 - r5_subfic_ra_2);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_4 & -8);
    r5 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
    r0 = (r0 | r5);
    r6 = MemoryHw::ReadResolved8(guest_range_0, 2u, (r3 + 2));
    r5 = (r4 + 2);
    r5_subfic_ra_3 = r5;
    r5 = (3 - r5_subfic_ra_3);
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_5 & -8);
    r5 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
    r0 = (r0 | r5);
    r6 = MemoryHw::ReadResolved8(guest_range_0, 3u, (r3 + 3));
    r5 = (0 - r4);
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_6 & -8);
    r5 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
    r0 = (r0 | r5);
    r6 = MemoryHw::ReadResolved8(guest_range_0, 4u, (r3 + 4));
    r5 = (r4 + 4);
    r5_subfic_ra_4 = r5;
    r5 = (3 - r5_subfic_ra_4);
    r5_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_7 & -8);
    r5 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
    r0 = (r0 | r5);
    r6 = MemoryHw::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    r5 = (r4 + 5);
    r5_subfic_ra_5 = r5;
    r5 = (3 - r5_subfic_ra_5);
    r5_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_8 & -8);
    r5 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
    r0 = (r0 | r5);
    r6 = MemoryHw::ReadResolved8(guest_range_0, 6u, (r3 + 6));
    r5 = (r4 + 6);
    r5_subfic_ra_6 = r5;
    r5 = (3 - r5_subfic_ra_6);
    r5_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_9 & -8);
    r5 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
    r0 = (r0 | r5);
    r6 = MemoryHw::ReadResolved8(guest_range_0, 7u, (r3 + 7));
    r5 = (r4 + 7);
    r5_subfic_ra_7 = r5;
    r5 = (3 - r5_subfic_ra_7);
    r5_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_10 & -8);
    r5 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
    r0 = (r0 | r5);
    r3 = (r3 + 8);
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804B0750;
    }
}

loc_804B0814:
{
    r6 = (r27 + r4);
    r3 = (r28 - r4);
    ctr = r3;
}

loc_804B0824:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r28))) {
        goto loc_804B0848;
    }
}

loc_804B0828:
{
    r5 = MemoryHw::FlatRead8(r6);
    r3 = (3 - r4);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_2 & -8);
    r3 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
    r0 = (r0 | r3);
    r6 = (r6 + 1);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804B0828;
    }
}

loc_804B0848:
{
    r4 = -855638016;
    r3 = (r26 * 20);
    r3 = (r4 + r3);
    MemoryHw::FlatWrite32((r3 + 26640), r0);
}

loc_804B0858:
{
    MemoryHw::FlatWrite32((r31 + 20), r27);
    r3 = (r29 + -1);
    r0 = (1 - r29);
    r0 = (r3 | r0);
    r0 = (static_cast<int32_t>(r0) >> 31);
    r0 = (r28 & r0);
    MemoryHw::FlatWrite32((r31 + 16), r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r0 | 1);
    r0 = (r28 + -1);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & -16);
    r4 = (r3 | r0);
    r3 = -855638016;
    r0 = (r26 * 20);
    r3 = (r3 + r0);
    MemoryHw::FlatWrite32((r3 + 26636), r4);
    r3 = r30;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl3_0x804D1330:
{
}

loc_inl3_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x804D1344;
    }
}

loc_inl3_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl3_0x804D1348;
}

loc_inl3_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl3_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_5 & 1);
}

loc_inl3_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = 1;
}

loc_804B08A4:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_2 = MemoryHw::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryHw::ReadResolved32(guest_range_2, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804B0640(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804B0640_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B0640 func_804B0640 preserves=true fpr_mask=0x00000000
