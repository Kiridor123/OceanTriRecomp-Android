#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CA720(CpuContext* ctx);
extern "C" uint32_t func_804CA720_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_804B0A70_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_10 = 0;
    uint32_t r6_rot_11 = 0;
    uint32_t r6_rot_12 = 0;
    uint32_t r6_rot_13 = 0;
    uint32_t r6_rot_14 = 0;
    uint32_t r6_rot_15 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r6_rot_9 = 0;
    uint32_t r6_subfic_ra_0 = 0;
    uint32_t r6_subfic_ra_1 = 0;
    uint32_t r6_subfic_ra_10 = 0;
    uint32_t r6_subfic_ra_11 = 0;
    uint32_t r6_subfic_ra_12 = 0;
    uint32_t r6_subfic_ra_2 = 0;
    uint32_t r6_subfic_ra_3 = 0;
    uint32_t r6_subfic_ra_4 = 0;
    uint32_t r6_subfic_ra_5 = 0;
    uint32_t r6_subfic_ra_6 = 0;
    uint32_t r6_subfic_ra_7 = 0;
    uint32_t r6_subfic_ra_8 = 0;
    uint32_t r6_subfic_ra_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_804B0A70;

loc_804B0A70:
{
    MemoryHw::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryHw::FlatWriteRam32((r1 + 36), r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(6));
    r0 = (r0_rot_0 & -64);
    r4 = 0x80750000u;
    r4 = (r4 + -28640);
    r31 = (r4 + r0);
    r29 = 0;
    r30 = (r3 * 20);
    r0 = -855638016;
    r3 = (r0 + r30);
    goto loc_804B0CBC;
}

loc_804B0AB0:
{
    r0 = MemoryHw::FlatRead32((r3 + 26636));
    r0 = (r0 & 1);
}

loc_804B0AB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804B0CBC;
    }
}

loc_804B0ABC:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x804D12F0
    r28 = r3;
    r0 = MemoryHw::FlatRead32((r31 + 12));
    r0 = (r0 & 4);
}

loc_804B0ACC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B0CB0;
    }
}

loc_804B0AD0:
{
    r0 = MemoryHw::FlatRead32((r31 + 12));
    r0 = (r0 & 3);
}

loc_804B0AD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B0C2C;
    }
}

loc_804B0ADC:
{
    r0 = MemoryHw::FlatRead32((r31 + 12));
    r0 = (r0 & 2);
}

loc_804B0AE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B0C20;
    }
}

loc_804B0AE8:
{
    r5 = MemoryHw::FlatRead32((r31 + 16));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_804B0AF0:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_804B0C20;
    }
}

loc_804B0AF4:
{
    r4 = MemoryHw::FlatRead32((r31 + 20));
    r0 = -855638016;
    r3 = (r0 + r30);
    r0 = MemoryHw::FlatRead32((r3 + 26640));
    r3 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_804B0C20;
    }
}

loc_804B0B0C:
{
    r7 = (r5 + -8);
}

loc_804B0B14:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(8))) {
        goto loc_804B0BF4;
    }
}

loc_804B0B18:
{
    r8 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_804B0B34;
    }
}

loc_804B0B20:
{
    r6 = 0x80000000u;
    r6 = (r6 + -2);
}

loc_804B0B2C:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r6))) {
        goto loc_804B0B34;
    }
}

loc_804B0B30:
{
    r8 = 1;
}

loc_804B0B34:
{
}

loc_804B0B38:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804B0BF4;
    }
}

loc_804B0B3C:
{
    r6 = (r7 + 7);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r6 = (r6_rot_1 & 536870911);
    ctr = r6;
}

loc_804B0B4C:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_804B0BF4;
    }
}

loc_804B0B50:
{
    r6 = (3 - r3);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_3 & -8);
    r6 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    guest_range_0 = MemoryHw::ResolveRangeHost(r4, 0, 8u, false, true);
    MemoryHw::WriteResolved8(guest_range_0, 0u, r4, static_cast<uint8_t>(r6));
    r6 = (r3 + 1);
    r6_subfic_ra_2 = r6;
    r6 = (3 - r6_subfic_ra_2);
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_4 & -8);
    r6 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    MemoryHw::WriteResolved8(guest_range_0, 1u, (r4 + 1), static_cast<uint8_t>(r6));
    r6 = (r3 + 2);
    r6_subfic_ra_3 = r6;
    r6 = (3 - r6_subfic_ra_3);
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_5 & -8);
    r6 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    MemoryHw::WriteResolved8(guest_range_0, 2u, (r4 + 2), static_cast<uint8_t>(r6));
    r6 = (0 - r3);
    r6_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_6 & -8);
    r6 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    MemoryHw::WriteResolved8(guest_range_0, 3u, (r4 + 3), static_cast<uint8_t>(r6));
    r6 = (r3 + 4);
    r6_subfic_ra_4 = r6;
    r6 = (3 - r6_subfic_ra_4);
    r6_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_7 & -8);
    r6 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    MemoryHw::WriteResolved8(guest_range_0, 4u, (r4 + 4), static_cast<uint8_t>(r6));
    r6 = (r3 + 5);
    r6_subfic_ra_5 = r6;
    r6 = (3 - r6_subfic_ra_5);
    r6_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_8 & -8);
    r6 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    MemoryHw::WriteResolved8(guest_range_0, 5u, (r4 + 5), static_cast<uint8_t>(r6));
    r6 = (r3 + 6);
    r6_subfic_ra_6 = r6;
    r6 = (3 - r6_subfic_ra_6);
    r6_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_9 & -8);
    r6 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    MemoryHw::WriteResolved8(guest_range_0, 6u, (r4 + 6), static_cast<uint8_t>(r6));
    r6 = (r3 + 7);
    r6_subfic_ra_7 = r6;
    r6 = (3 - r6_subfic_ra_7);
    r6_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_10 & -8);
    r6 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    MemoryHw::WriteResolved8(guest_range_0, 7u, (r4 + 7), static_cast<uint8_t>(r6));
    r4 = (r4 + 8);
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804B0B50;
    }
}

loc_804B0BF4:
{
    r6 = (r5 - r3);
    ctr = r6;
}

loc_804B0C00:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r5))) {
        goto loc_804B0C20;
    }
}

loc_804B0C04:
{
    r5 = (3 - r3);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_2 & -8);
    r5 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    MemoryHw::FlatWrite8(r4, static_cast<uint8_t>(r5));
    r4 = (r4 + 1);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804B0C04;
    }
}

loc_804B0C20:
{
    r0 = MemoryHw::FlatRead32((r31 + 12));
    r0 = (r0 & -4);
    MemoryHw::FlatWrite32((r31 + 12), r0);
}

loc_804B0C2C:
{
    // inline leaf 0x804CB9F0 (4 guest instruction(s))
    r3 = -855638016;
    r0 = MemoryHw::FlatRead32((r3 + 24612));
    r3 = (r0 & 255);
    // end of inlined leaf 0x804CB9F0
}

loc_804B0C34:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(255))) {
        goto loc_804B0CAC;
    }
}

loc_804B0C38:
{
    ctx->lr = 0x804B0C3Cu;
    if constexpr (KnownRegArgsCpuCall<0x804CA720u>(&func_804CA720)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804CA720_24F0 = func_804CA720_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_804CA720_24F0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x804CA720u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r3 = (r3 & -268435456);
    r0 = (r3 + -536870912);
}

loc_804B0C48:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_804B0CAC;
    }
}

loc_804B0C4C:
{
    r0 = MemoryHw::FlatRead32((r31 + 16));
}

loc_804B0C54:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_804B0CAC;
    }
}

loc_804B0C58:
{
    r0 = -855638016;
    r4 = (r0 + r30);
    r0 = MemoryHw::FlatRead32((r4 + 26624));
    r0 = (r0 & 112);
}

loc_804B0C68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804B0CAC;
    }
}

loc_804B0C6C:
{
    r3 = MemoryHw::FlatRead32((r4 + 26640));
    r0 = (r3 + -16842752);
}

loc_804B0C78:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_804B0C9C;
    }
}

loc_804B0C7C:
{
    r3 = MemoryHw::FlatRead32((r4 + 26640));
    r0 = (r3 + -84344832);
}

loc_804B0C88:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_804B0C9C;
    }
}

loc_804B0C8C:
{
    r3 = MemoryHw::FlatRead32((r4 + 26640));
    r0 = (r3 + -69337088);
}

loc_804B0C98:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804B0CAC;
    }
}

loc_804B0C9C:
{
    r3 = 0x80000000u;
    r0 = MemoryHw::FlatRead16((r3 + 12518));
}

loc_804B0CA8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(33280))) {
        goto loc_804B0CB0;
    }
}

loc_804B0CAC:
{
    r29 = 1;
}

loc_804B0CB0:
{
    r3 = r28;
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
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
}

loc_inl2_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    goto loc_804B0CC8;
}

loc_804B0CBC:
{
    r0 = MemoryHw::FlatRead32((r31 + 12));
    r0 = (r0 & 4);
}

loc_804B0CC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804B0AB0;
    }
}

loc_804B0CC8:
{
    r3 = r29;
    r0 = MemoryHw::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804B0A70(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804B0A70_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B0A70 func_804B0A70 preserves=true fpr_mask=0x00000000
