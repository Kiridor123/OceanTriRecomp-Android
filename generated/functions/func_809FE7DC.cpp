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

extern "C" void func_809FE7DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_809FE7DC;

loc_809FE7DC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 40u, (r1 + 40), f31.d);
    r11 = (r1 + 40);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r29 = r4;
    r27 = r5;
    f31.d = f1.d;
    r28 = r6;
    r3 = 32;
    ctx->lr = 0x809FE810u;
    if constexpr (KnownRegArgsCpuCall<0x802AA7C8u>(&func_802AA7C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AA7C8_8E8 = func_802AA7C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802AA7C8_8E8);
        r4 = static_cast<uint32_t>(regargs_result_802AA7C8_8E8 >> 32);
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
    r30 = r3;
}

loc_809FE818:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_809FE8E8;
    }
}

loc_809FE81C:
{
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r29));
    r4 = 0x80A00000u;
    r0 = (r4 + -5824);
    MemoryInline::FlatWriteRam32((r3 + 248), r0);
    r4 = 0x80A00000u;
    r0 = (r4 + -5884);
    MemoryInline::FlatWriteRam32((r3 + 252), r0);
    r29 = MemoryInline::FlatRead32((r3 + 256));
    r31 = 1;
    MemoryInline::FlatWrite32(r29, r31);
    r3 = (r29 + 4);
    r4 = MemoryInline::FlatRead32(r29);
    ctx->lr = 0x809FE850u;
    if constexpr (KnownRegArgsCpuCall<0x802AA9E0u>(&func_802AA9E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        const auto regargs_result_802AA9E0_EAE = func_802AA9E0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802AA9E0_EAE);
        r4 = static_cast<uint32_t>(regargs_result_802AA9E0_EAE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802AA9E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    r0 = MemoryInline::FlatRead32(r29);
}

loc_809FE858:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_809FE868;
    }
}

loc_809FE85C:
{
    r3 = r30;
    ctx->lr = 0x809FE864u;
    if constexpr (KnownRegArgsCpuCall<0x802AA8C8u>(&func_802AA8C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_802AA8C8_12B6 = func_802AA8C8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802AA8C8_12B6);
        r4 = static_cast<uint32_t>(regargs_result_802AA8C8_12B6 >> 32);
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
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
    goto loc_809FE8E8;
}

loc_809FE868:
{
    r0 = 13;
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 1), 0, 91u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r30 + 3), static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = 1;
    r5 = 0;
    // inline leaf 0x802AB3F8 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r3 + 10), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802AB3F8
    r0 = MemoryInline::FlatRead8((r26 + 481));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r30 + 8), static_cast<uint8_t>(r0));
    r3 = (r30 + 36);
    r4 = (r26 + 444);
    // inline leaf 0x809EAAD4 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::WriteResolved32(guest_range_1, 35u, r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 39u, (r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 43u, (r3 + 8), r0);
    // end of inlined leaf 0x809EAAD4
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r30 + 1), static_cast<uint8_t>(r31));
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 19u, (r30 + 20), r0);
    MemoryInline::WriteResolved16(guest_range_1, 89u, (r30 + 90), static_cast<uint16_t>(r28));
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r3 = (r29 + 16);
    f1.d = f31.d;
    f2.d = f31.d;
    f3.d = f31.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r26;
    // inline leaf 0x8012F960 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 116));
    // end of inlined leaf 0x8012F960
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r3));
    r3 = r30;
    r4 = r26;
    r5 = 1;
    // inline leaf 0x802AB270 (3 guest instruction(s))
    MemoryInline::WriteResolved32(guest_range_1, 11u, (r3 + 12), r4);
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r3 + 9), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x802AB270
    ctx->lr = 0x809FE8DCu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x803C4878u>(ctx);
    r3 = ctx->gpr[3];
}

loc_809FE8E0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809FE8E8;
    }
}

loc_809FE8E4:
{
    MemoryInline::FlatWriteRam8((r30 + 7), static_cast<uint8_t>(r31));
}

loc_809FE8E8:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 40u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 24u, (r1 + 40));
    r11 = (r1 + 40);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809FE7DC func_809FE7DC preserves=true fpr_mask=0x00000000
