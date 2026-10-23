#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8039739C(CpuContext* ctx);
extern "C" uint64_t func_8039739C_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);

extern "C" void func_8039D174(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r27_addr_4 = 0;
    uint32_t r27_addr_5 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8039D174;

loc_8039D174:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r30 = r3;
    r26 = r4;
    r31 = 0;
    // inline leaf 0x8004D1A4 (3 guest instruction(s))
    r3 = 0x80670000u;
    r3 = (r3 + -14744);
    // end of inlined leaf 0x8004D1A4
    r29 = r3;
    MemoryInline::FlatWrite32((r30 + 12272), r26);
    r5 = 0;
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r5));
    r4 = 0x80660000u;
    r4 = (r4 + -19268);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -6048));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 20));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 8u, (r1 + 8), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite32((r30 + 12276), r0);
    MemoryInline::FlatWrite8((r30 + 12280), static_cast<uint8_t>(r5));
}

loc_8039D1D4:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(1))) {
        goto loc_8039D1EC;
    }
}

loc_8039D1D8:
{
}

loc_8039D1DC:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(8))) {
        goto loc_8039D2A0;
    }
}

loc_8039D1E0:
{
}

loc_8039D1E4:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(9))) {
        goto loc_8039D2AC;
    }
}

loc_8039D1E8:
{
    goto loc_8039D2C4;
}

loc_8039D1EC:
{
    r26 = 0;
    r28 = (r30 + 13276);
    r3 = MemoryInline::FlatRead16((r3 + 480));
    r0 = (r3 + -9000);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r27_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r27 = (r27_rot_1 & -4);
    goto loc_8039D260;
}

loc_8039D208:
{
    r3 = r28;
    r4 = (r26 & 255);
    // inline leaf 0x8039D12C (18 guest instruction(s))
    r5 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 16u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r3, static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r3 + 1), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 2), static_cast<uint8_t>(r5));
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r3 + 4), static_cast<uint8_t>(r5));
    r0 = 4;
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r3 + 6), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r3 + 5), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r3 + 7), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r3 + 14), static_cast<uint16_t>(r5));
    r0 = -1;
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r3 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r3 + 9), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r3 + 10), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r3 + 12), static_cast<uint16_t>(r5));
    // end of inlined leaf 0x8039D12C
    r3 = r26;
    // inline leaf 0x8004D1B0 (12 guest instruction(s))
}

loc_inl3_0x8004D1B0:
{
}

loc_inl3_0x8004D1B4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_inl3_0x8004D1C0;
    }
}

loc_inl3_0x8004D1B8:
{
    r3 = 0;
    goto loc_inl3_cont_8004D1B0;
}

loc_inl3_0x8004D1C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_inl3_0x8004D1C4:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r4 = (r4_rot_2 & -256);
    r3 = 0x80670000u;
    r0 = (r3 + -13664);
    r3 = (r0 + r4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8004D1D8:
{
    r3 = 0;
    goto loc_inl3_cont_8004D1B0;
}

loc_inl3_return:
{
}

loc_inl3_cont_8004D1B0:
{
    // end of inlined leaf 0x8004D1B0
    r0 = MemoryInline::FlatRead8((r30 + 7));
}

loc_8039D224:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8039D230;
    }
}

loc_8039D228:
{
    r3 = (r3 + 108);
    goto loc_8039D234;
}

loc_8039D230:
{
    r3 = (r3 + 148);
}

loc_8039D234:
{
    r27_addr_2 = (r27 + r3);
    r4 = MemoryInline::FlatRead32(r27_addr_2);
}

loc_8039D23C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8039D24C;
    }
}

loc_8039D240:
{
    r0 = MemoryInline::FlatRead32((r29 + 328));
}

loc_8039D248:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_8039D258;
    }
}

loc_8039D24C:
{
    r0 = MemoryInline::FlatRead32((r29 + 328));
    r27_addr_3 = (r27 + r3);
    MemoryInline::FlatWrite32(r27_addr_3, r0);
    r31 = 1;
}

loc_8039D258:
{
    r28 = (r28 + 24);
    r26 = (r26 + 1);
}

loc_8039D260:
{
    r0 = MemoryInline::FlatRead8((r30 + 7));
}

loc_8039D268:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r0))) {
        goto loc_8039D208;
    }
}

loc_8039D26C:
{
}

loc_8039D270:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(1))) {
        goto loc_8039D2C4;
    }
}

loc_8039D274:
{
    r5 = 0;
    r4 = r30;
    r3 = 0;
    goto loc_8039D290;
}

loc_8039D284:
{
    MemoryInline::FlatWrite8((r4 + 13284), static_cast<uint8_t>(r3));
    r4 = (r4 + 24);
    r5 = (r5 + 1);
}

loc_8039D290:
{
    r0 = MemoryInline::FlatRead8((r30 + 7));
}

loc_8039D298:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_8039D284;
    }
}

loc_8039D29C:
{
    goto loc_8039D2C4;
}

loc_8039D2A0:
{
    r3 = r30;
    ctx->lr = 0x8039D2A8u;
    if constexpr (KnownRegArgsCpuCall<0x8039739Cu>(&func_8039739C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_8039739C_1FC4 = func_8039739C_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8039739C_1FC4);
        r4 = static_cast<uint32_t>(regargs_result_8039739C_1FC4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8039739Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_8039D2C4;
}

loc_8039D2AC:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r30 + 13268), r0);
    MemoryInline::FlatWrite32((r30 + 13272), r5);
    r0 = 4;
    MemoryInline::FlatWrite8((r30 + 13279), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 13278), static_cast<uint8_t>(r5));
}

loc_8039D2C4:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003E3F gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FF8 fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8039D174 func_8039D174 preserves=true fpr_mask=0x00000000
