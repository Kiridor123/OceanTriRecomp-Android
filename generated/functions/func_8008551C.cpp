#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8007AFD0(CpuContext* ctx);
extern "C" uint64_t func_8007AFD0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8007B104(CpuContext* ctx);
extern "C" uint64_t func_8007B104_ra38_40_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8008551C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8008551Cu);
    goto loc_8008551C;

loc_8008551C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r29 = r3;
    r30 = r4;
    ctx->lr = 0x8008553Cu;
    if constexpr (KnownRegArgsCpuCall<0x8007AFD0u>(&func_8007AFD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8007AFD0_856 = func_8007AFD0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007AFD0_856);
        r4 = static_cast<uint32_t>(regargs_result_8007AFD0_856 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x8007AFD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
}

loc_80085540:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80085560;
    }
}

loc_80085544:
{
    r3 = 0x80590000u;
    r3 = (r3 + -240);
    r4 = 1281;
    r5 = 0x80590000u;
    r5 = (r5 + -172);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80085560u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_80085560:
{
    // inline leaf 0x80088380 (8 guest instruction(s))
}

loc_inl1_0x80088380:
{
    r3 = 0x80690000u;
    r3 = (r3 + -29292);
}

loc_inl1_0x8008838C:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    r3 = (r3 + 52);
}

loc_inl1_cont_80088380:
{
    // end of inlined leaf 0x80088380
    r31 = r3;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_8008558C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800855A4;
    }
}

loc_80085590:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8008559C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800855A4;
    }
}

loc_800855A0:
{
    r10 = 0;
}

loc_800855A4:
{
}

loc_800855A8:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800855C0;
    }
}

loc_800855AC:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_800855B8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800855C0;
    }
}

loc_800855BC:
{
    r9 = 0;
}

loc_800855C0:
{
}

loc_800855C4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800855D8;
    }
}

loc_800855C8:
{
    r0 = (r11 + 1073741824);
}

loc_800855D0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800855D8;
    }
}

loc_800855D4:
{
    r8 = 0;
}

loc_800855D8:
{
}

loc_800855DC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800855F4;
    }
}

loc_800855E0:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800855EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800855F4;
    }
}

loc_800855F0:
{
    r7 = 0;
}

loc_800855F4:
{
}

loc_800855F8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80085610;
    }
}

loc_800855FC:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_80085608:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80085610;
    }
}

loc_8008560C:
{
    r6 = 0;
}

loc_80085610:
{
}

loc_80085614:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8008562C;
    }
}

loc_80085618:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_80085624:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008562C;
    }
}

loc_80085628:
{
    r5 = 0;
}

loc_8008562C:
{
}

loc_80085630:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80085654;
    }
}

loc_80085634:
{
    r3 = 0x80590000u;
    r3 = (r3 + -240);
    r4 = 1284;
    r5 = 0x80590000u;
    r5 = (r5 + -140);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80085654u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_80085654:
{
    r3 = r30;
    // inline leaf 0x80065244 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16(r3);
    // end of inlined leaf 0x80065244
    r5 = r3;
    r3 = r29;
    r4 = r31;
    ctx->lr = 0x8008566Cu;
    if constexpr (KnownRegArgsCpuCall<0x8007B104u>(&func_8007B104)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8007B104_1D62 = func_8007B104_ra38_40_18_0(ctx, r3, r4, r5, f6.d);
        r3 = static_cast<uint32_t>(regargs_result_8007B104_1D62);
        r4 = static_cast<uint32_t>(regargs_result_8007B104_1D62 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f6 = ctx->fpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x8007B104u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f6 = ctx->fpr[6];
        cr = ctx->cr;
    }
    r3 = r29;
    // inline leaf 0x800854DC (16 guest instruction(s))
    r4 = -1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 16), 0, 28u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 16), r4);
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 24), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 32), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r3 + 43), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 26u, (r3 + 42), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 25u, (r3 + 41), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r3 + 40), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r3 + 39), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r3 + 38), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r3 + 37), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r3 + 36), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x800854DC
    r3 = r29;
    // inline leaf 0x80065244 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16(r3);
    // end of inlined leaf 0x80065244
    r31 = r3;
    r27 = 0;
    r26 = 0;
    r28 = 0;
    r30 = 1;
    goto loc_800856D8;
}

loc_80085694:
{
    r3 = r29;
    // inline leaf 0x80065218 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80065218
    r25 = (r3 + r28);
    r3 = r25;
    // inline leaf 0x800651F0 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r0 & 4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x800651F0
}

loc_800856AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800856D0;
    }
}

loc_800856B0:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    r3 = (r29 + r27);
    MemoryInline::FlatWrite8((r3 + 36), static_cast<uint8_t>(r0));
    r3 = r25;
    // inline leaf 0x80085700 (2 guest instruction(s))
    r3 = (r3 + 4);
    // end of inlined leaf 0x80085700
    r4 = PPC_Slw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r27));
    ctx->lr = 0x800856CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B82C0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    r27 = (r27 + 1);
}

loc_800856D0:
{
    r28 = (r28 + 68);
    r26 = (r26 + 1);
}

loc_800856D8:
{
}

loc_800856DC:
{
    if ((static_cast<uint32_t>(r27) >= static_cast<uint32_t>(8))) {
        goto loc_800856E8;
    }
}

loc_800856E0:
{
}

loc_800856E4:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(r31))) {
        goto loc_80085694;
    }
}

loc_800856E8:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8008551C func_8008551C preserves=true fpr_mask=0x00000000
