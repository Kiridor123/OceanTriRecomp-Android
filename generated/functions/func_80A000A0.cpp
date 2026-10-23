#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050D7C(CpuContext* ctx);
extern "C" uint64_t func_80050D7C_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802AA7C8(CpuContext* ctx);
extern "C" uint64_t func_802AA7C8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802AA8C8(CpuContext* ctx);
extern "C" uint64_t func_802AA8C8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802AA9E0(CpuContext* ctx);
extern "C" uint64_t func_802AA9E0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_80A000A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_80A00278_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80A000A0;

loc_80A000A0:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 80);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r31 = r3;
    r3 = (r1 + 20);
    // inline leaf 0x809EA85C (1 guest instruction(s))
    // end of inlined leaf 0x809EA85C
    r0 = MemoryInline::FlatRead8((r31 + 480));
}

loc_80A000D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_80A000DC;
    }
}

loc_80A000D4:
{
}

loc_80A000D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(17))) {
        goto loc_80A00274;
    }
}

loc_80A000DC:
{
    r0 = MemoryInline::FlatRead8((r31 + 481));
}

loc_80A000E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80A000F4;
    }
}

loc_80A000E8:
{
}

loc_80A000EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80A00120;
    }
}

loc_80A000F0:
{
    goto loc_80A00274;
}

loc_80A000F4:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 392));
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -5796));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80A00104:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80A00114;
    }
}

loc_80A00108:
{
    r3 = 0x80A30000u;
    r21 = (r3 + -13480);
    goto loc_80A00134;
}

loc_80A00114:
{
    r3 = 0x80A30000u;
    r21 = (r3 + -13432);
    goto loc_80A00134;
}

loc_80A00120:
{
    r3 = 0x80A30000u;
    r21 = (r3 + -13384);
}

loc_80A00134:
{
}

loc_80A00138:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_80A00274;
    }
}

loc_80A0013C:
{
    r22 = 0;
    r3 = 0x80A00000u;
    r25 = (r3 + 724);
    r3 = 0x80A00000u;
    r26 = (r3 + 664);
    r27 = 2;
    r28 = 15;
    r29 = 1;
    r30 = 0;
    r3 = 0x80A20000u;
    f31.d = MemoryInline::FlatReadFloat32((r3 + -5784));
}

loc_80A00168:
{
    r3 = 72;
    ctx->lr = 0x80A00170u;
    if constexpr (KnownRegArgsCpuCall<0x802AA7C8u>(&func_802AA7C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802AA7C8_1252 = func_802AA7C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802AA7C8_1252);
        r4 = static_cast<uint32_t>(regargs_result_802AA7C8_1252 >> 32);
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
        InvokeDirectCpu<0x802AA7C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r24 = r3;
}

loc_80A00178:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80A00274;
    }
}

loc_80A0017C:
{
    MemoryInline::FlatWriteRam32((r3 + 248), r25);
    MemoryInline::FlatWriteRam32((r3 + 252), r26);
    r23 = MemoryInline::FlatRead32((r3 + 256));
    MemoryInline::FlatWrite32(r23, r27);
    r3 = (r23 + 4);
    r4 = MemoryInline::FlatRead32(r23);
    ctx->lr = 0x80A00198u;
    if constexpr (KnownRegArgsCpuCall<0x802AA9E0u>(&func_802AA9E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_802AA9E0_17AB = func_802AA9E0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802AA9E0_17AB);
        r4 = static_cast<uint32_t>(regargs_result_802AA9E0_17AB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802AA9E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead32(r23);
}

loc_80A001A0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80A001B0;
    }
}

loc_80A001A4:
{
    r3 = r24;
    ctx->lr = 0x80A001ACu;
    if constexpr (KnownRegArgsCpuCall<0x802AA8C8u>(&func_802AA8C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802AA8C8_1C7E = func_802AA8C8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802AA8C8_1C7E);
        r4 = static_cast<uint32_t>(regargs_result_802AA8C8_1C7E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x802AA8C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80A00274;
}

loc_80A001B0:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r24 + 2), 0, 34u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r24 + 3), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r24 + 2), static_cast<uint8_t>(r29));
    r0 = MemoryInline::FlatRead8((r31 + 481));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r24 + 8), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 14u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_2, 18u, (r24 + 20), r30);
        MemoryInline::WriteResolved32(guest_range_2, 14u, (r24 + 16), r30);
    }
    r3 = (r24 + 24);
    f1.d = MemoryInline::FlatReadFloat32(r21);
    f2.d = MemoryInline::FlatReadFloat32((r21 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r21 + 8));
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 22u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 22u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 26u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 30u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 8);
    r4 = (r31 + 392);
    r5 = (r24 + 24);
    ctx->lr = 0x80A001ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x809EF924u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r3 = (r1 + 20);
    r4 = (r1 + 8);
    ctx->lr = 0x80A001F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    r3 = (r1 + 20);
    r4 = (r24 + 36);
    r5 = (r24 + 40);
    ctx->lr = 0x80A00208u;
    if constexpr (KnownRegArgsCpuCall<0x80050D7Cu>(&func_80050D7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80050D7C_2C92 = func_80050D7C_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050D7C_2C92);
        r4 = static_cast<uint32_t>(regargs_result_80050D7C_2C92 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80050D7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWriteRam32((r24 + 44), r30);
    r3 = (r23 + 48);
    r4 = (r24 + 24);
    ctx->lr = 0x80A00218u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    r4 = r3;
    r3 = (r23 + 12);
    ctx->lr = 0x80A00224u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    MemoryInline::FlatWriteFloat32((r23 + 24), f31.d);
    MemoryInline::FlatWrite32((r23 + 28), r30);
    MemoryInline::FlatWrite32((r23 + 32), r30);
    MemoryInline::FlatWrite32((r23 + 36), r30);
    MemoryInline::FlatWrite32((r23 + 40), r31);
    r0 = (r22 & 255);
    MemoryInline::FlatWrite16((r23 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r24 + 1), static_cast<uint8_t>(r29));
    r3 = r24;
    r4 = 0;
    r5 = 3;
    // inline leaf 0x802AB270 (3 guest instruction(s))
    MemoryInline::FlatWriteRam32((r3 + 12), r4);
    MemoryInline::FlatWriteRam8((r3 + 9), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x802AB270
    r3 = r24;
    r4 = 1;
    r5 = 0;
    // inline leaf 0x802AB3F8 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r3 + 10), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802AB3F8
    r22 = (r22 + 1);
    r21 = (r21 + 12);
}

loc_80A00270:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(4))) {
        goto loc_80A00168;
    }
}

loc_80A00274:
{
    r0 = 88;
    addr_psqx_80A00278_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80A00278_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r11 = (r1 + 80);
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80A000A0 func_80A000A0 preserves=true fpr_mask=0x00000000
