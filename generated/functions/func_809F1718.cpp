#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802AA7C8(CpuContext* ctx);
extern "C" uint64_t func_802AA7C8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802AA8C8(CpuContext* ctx);
extern "C" uint64_t func_802AA8C8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802AA9E0(CpuContext* ctx);
extern "C" uint64_t func_802AA9E0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_809F1718(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    MKW_GUEST_ENTER(0x809F1718u);
    goto loc_809F1718;

loc_809F1718:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 100u, (r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r3 = (r1 + 24);
    // inline leaf 0x809ED8C4 (1 guest instruction(s))
    // end of inlined leaf 0x809ED8C4
    r3 = (r1 + 8);
    // inline leaf 0x809EA85C (1 guest instruction(s))
    // end of inlined leaf 0x809EA85C
    r3 = 60;
    ctx->lr = 0x809F1754u;
    if constexpr (KnownRegArgsCpuCall<0x802AA7C8u>(&func_802AA7C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AA7C8_9E2 = func_802AA7C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802AA7C8_9E2);
        r4 = static_cast<uint32_t>(regargs_result_802AA7C8_9E2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802AA7C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r31 = r3;
}

loc_809F175C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_809F1900;
    }
}

loc_809F1760:
{
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r28));
    r4 = 0x809F0000u;
    r0 = (r4 + 6424);
    MemoryInline::FlatWriteRam32((r3 + 252), r0);
    r4 = 0x809F0000u;
    r0 = (r4 + 6604);
    MemoryInline::FlatWriteRam32((r3 + 248), r0);
    r30 = MemoryInline::FlatRead32((r3 + 256));
    r4 = (r28 & 255);
    r3 = 0x80A30000u;
    r3 = (r3 + -29896);
    r3_addr_1 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    MemoryInline::FlatWrite32(r30, r0);
    r3 = 0x80A30000u;
    r3 = (r3 + -29860);
    r3_addr_2 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_2);
    MemoryInline::FlatWrite32((r30 + 12), r0);
    r3 = (r30 + 16);
    r4 = MemoryInline::FlatRead32((r30 + 12));
    ctx->lr = 0x809F17B0u;
    if constexpr (KnownRegArgsCpuCall<0x802AA9E0u>(&func_802AA9E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AA9E0_1085 = func_802AA9E0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802AA9E0_1085);
        r4 = static_cast<uint32_t>(regargs_result_802AA9E0_1085 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802AA9E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    r5 = MemoryInline::FlatRead32((r30 + 12));
}

loc_809F17B8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r5))) {
        goto loc_809F17C8;
    }
}

loc_809F17BC:
{
    r3 = r31;
    ctx->lr = 0x809F17C4u;
    if constexpr (KnownRegArgsCpuCall<0x802AA8C8u>(&func_802AA8C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_802AA8C8_1458 = func_802AA8C8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802AA8C8_1458);
        r4 = static_cast<uint32_t>(regargs_result_802AA8C8_1458 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x802AA8C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_809F1900;
}

loc_809F17C8:
{
    r3 = (r28 & 255);
    r0 = (r3 + -8);
}

loc_809F17D4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_809F17F4;
    }
}

loc_809F17D8:
{
    r0 = (r3 + -17);
}

loc_809F17E0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_809F17F4;
    }
}

loc_809F17E4:
{
}

loc_809F17E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_809F17F4;
    }
}

loc_809F17EC:
{
}

loc_809F17F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_809F1804;
    }
}

loc_809F17F4:
{
    r3 = (r30 + 24);
    r4 = 0;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_1 & -8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_809F1804:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 52), r0);
    MemoryInline::FlatWrite32((r30 + 40), r0);
    MemoryInline::FlatWrite32((r30 + 44), r0);
    MemoryInline::FlatWrite32((r30 + 48), r0);
    r3 = r31;
    r4 = r26;
    r5 = 1;
    // inline leaf 0x802AB270 (3 guest instruction(s))
    MemoryInline::FlatWriteRam32((r3 + 12), r4);
    MemoryInline::FlatWriteRam8((r3 + 9), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x802AB270
    r0 = MemoryInline::FlatRead8((r27 + 16));
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 3), 0, 45u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r31 + 6), static_cast<uint8_t>(r0));
    r0 = (r28 & 255);
}

loc_809F1838:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(13))) {
        goto loc_809F1850;
    }
}

loc_809F183C:
{
}

loc_809F1840:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(29))) {
        goto loc_809F186C;
    }
}

loc_809F1844:
{
}

loc_809F1848:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(30))) {
        goto loc_809F1888;
    }
}

loc_809F184C:
{
    goto loc_809F18A0;
}

loc_809F1850:
{
    r0 = MemoryInline::FlatRead16((r26 + 552));
    r0 = (r0 & 6);
}

loc_809F185C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809F18A0;
    }
}

loc_809F1860:
{
    r0 = 3;
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r31 + 7), static_cast<uint8_t>(r0));
    goto loc_809F18A0;
}

loc_809F186C:
{
    r0 = MemoryInline::FlatRead16((r26 + 552));
    r0 = (r0 & 6);
}

loc_809F1878:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809F18A0;
    }
}

loc_809F187C:
{
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r31 + 7), static_cast<uint8_t>(r0));
    goto loc_809F18A0;
}

loc_809F1888:
{
    r0 = MemoryInline::FlatRead16((r26 + 552));
    r0 = (r0 & 6);
}

loc_809F1894:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809F18A0;
    }
}

loc_809F1898:
{
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r31 + 7), static_cast<uint8_t>(r0));
}

loc_809F18A0:
{
    r0 = 5;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r31 + 3), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = 1;
    r5 = 0;
    // inline leaf 0x802AB3F8 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r3 + 10), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802AB3F8
    r3 = MemoryInline::FlatRead32((r26 + 444));
    r0 = MemoryInline::FlatRead16((r27 + 18));
    r0 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_0, 33u, (r31 + 36), r0);
    r3 = MemoryInline::FlatRead32((r26 + 448));
    r0 = MemoryInline::FlatRead16((r27 + 20));
    r0 = (r3 + r0);
    MemoryInline::WriteResolved32(guest_range_0, 37u, (r31 + 40), r0);
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 41u, (r31 + 44), r0);
    r0 = MemoryInline::FlatRead32(r27);
    MemoryInline::FlatWrite32((r30 + 56), r0);
    r3 = (r31 + 24);
    r4 = (r27 + 4);
    ctx->lr = 0x809F18F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r26 + 481));
    MemoryInline::FlatWriteRam8((r31 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r31 + 90), static_cast<uint16_t>(r29));
}

loc_809F1900:
{
    r11 = (r1 + 96);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809F1718 func_809F1718 preserves=true fpr_mask=0x00000000
