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
extern "C" void func_802AB61C(CpuContext* ctx);
extern "C" uint64_t func_802AB61C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_80A02DEC(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r25 = ctx->gpr[25];
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

    goto loc_80A02DEC;

loc_80A02DEC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 40u, (r1 + 40), f31.d);
    r11 = (r1 + 40);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r25 = r3;
    r26 = r4;
    r27 = r5;
    f31.d = f1.d;
    r28 = r6;
    r3 = 36;
    ctx->lr = 0x80A02E20u;
    if constexpr (KnownRegArgsCpuCall<0x802AA7C8u>(&func_802AA7C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AA7C8_996 = func_802AA7C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802AA7C8_996);
        r4 = static_cast<uint32_t>(regargs_result_802AA7C8_996 >> 32);
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

loc_80A02E28:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80A02EFC;
    }
}

loc_80A02E2C:
{
    r29 = MemoryInline::FlatRead32((r3 + 256));
    r31 = 1;
    MemoryInline::FlatWrite32(r29, r31);
    r3 = (r29 + 4);
    r4 = MemoryInline::FlatRead32(r29);
    ctx->lr = 0x80A02E44u;
    if constexpr (KnownRegArgsCpuCall<0x802AA9E0u>(&func_802AA9E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AA9E0_E36 = func_802AA9E0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802AA9E0_E36);
        r4 = static_cast<uint32_t>(regargs_result_802AA9E0_E36 >> 32);
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
    r0 = MemoryInline::FlatRead32(r29);
}

loc_80A02E4C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80A02E5C;
    }
}

loc_80A02E50:
{
    r3 = r30;
    ctx->lr = 0x80A02E58u;
    if constexpr (KnownRegArgsCpuCall<0x802AA8C8u>(&func_802AA8C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_802AA8C8_1223 = func_802AA8C8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802AA8C8_1223);
        r4 = static_cast<uint32_t>(regargs_result_802AA8C8_1223 >> 32);
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
    goto loc_80A02EFC;
}

loc_80A02E5C:
{
    r0 = 19;
    MemoryInline::FlatWriteRam8((r30 + 3), static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = 1;
    r5 = 0;
    // inline leaf 0x802AB3F8 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r3 + 10), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802AB3F8
    r0 = MemoryInline::FlatRead8((r25 + 481));
    MemoryInline::FlatWriteRam8((r30 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r26));
    r0 = (r26 & 255);
}

loc_80A02E88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80A02EA0;
    }
}

loc_80A02E8C:
{
    r3 = r30;
    r4 = 5;
    r5 = MemoryInline::FlatRead8((r25 + 502));
    ctx->lr = 0x80A02E9Cu;
    if constexpr (KnownRegArgsCpuCall<0x802AB61Cu>(&func_802AB61C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_802AB61C_1B06 = func_802AB61C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802AB61C_1B06);
        r4 = static_cast<uint32_t>(regargs_result_802AB61C_1B06 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x802AB61Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    MemoryInline::FlatWriteRam8((r30 + 264), static_cast<uint8_t>(r31));
}

loc_80A02EA0:
{
    r3 = (r30 + 24);
    r4 = r27;
    ctx->lr = 0x80A02EACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r3 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 1), 0, 255u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 35u, (r30 + 36), r3);
    r0 = MemoryInline::FlatRead32((r25 + 448));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 39u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 39u, (r30 + 40), r0);
        MemoryInline::WriteResolved32(guest_range_0, 43u, (r30 + 44), r3);
    }
    MemoryInline::WriteResolved32(guest_range_0, 15u, (r30 + 16), r28);
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r30 + 1), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 19u, (r30 + 20), r3);
    MemoryInline::FlatWriteFloat32((r29 + 28), f31.d);
    r3 = r30;
    r4 = r25;
    r5 = 1;
    // inline leaf 0x802AB270 (3 guest instruction(s))
    MemoryInline::FlatWriteRam32((r3 + 12), r4);
    MemoryInline::FlatWriteRam8((r3 + 9), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x802AB270
    r3 = 0x80A00000u;
    r0 = (r3 + 12212);
    MemoryInline::WriteResolved32(guest_range_0, 247u, (r30 + 248), r0);
    r3 = 0x80A00000u;
    r0 = (r3 + 12056);
    MemoryInline::WriteResolved32(guest_range_0, 251u, (r30 + 252), r0);
}

loc_80A02EFC:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 44u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 28u, (r1 + 40));
    r11 = (r1 + 40);
    // inline leaf 0x804574CC (8 guest instruction(s))
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80A02DEC func_80A02DEC preserves=true fpr_mask=0x00000000
