#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050778(CpuContext* ctx);
extern "C" uint64_t func_80050778_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80052098(CpuContext* ctx);
extern "C" uint64_t func_80052098_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_802B25D8_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t addr_psqx_802B272C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_802B25D8;

loc_802B25D8:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = 0;
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
}

loc_802B2620:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_802B262C;
    }
}

loc_802B2624:
{
    r3 = 0;
    goto loc_802B2728;
}

loc_802B262C:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -13836));
    goto loc_802B2718;
}

loc_802B2634:
{
    r0 = MemoryInline::FlatRead16((r28 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802B263C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B264C;
    }
}

loc_802B2640:
{
}

loc_802B2644:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802B26BC;
    }
}

loc_802B2648:
{
    goto loc_802B2700;
}

loc_802B264C:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f31.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_802B265C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802B2700;
    }
}

loc_802B2664:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_802B2670:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802B2700;
    }
}

loc_802B2674:
{
    f1.d = MemoryInline::FlatReadFloat32(r30);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->lr = 0x802B269Cu;
    if constexpr (KnownRegArgsCpuCall<0x80050778u>(&func_80050778)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80050778_10B1 = func_80050778_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80050778_10B1);
        r4 = static_cast<uint32_t>(regargs_result_80050778_10B1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80050778u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r28 + 16));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802B26A4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802B26B4;
    }
}

loc_802B26AC:
{
    r31 = 1;
    goto loc_802B2700;
}

loc_802B26B4:
{
    r31 = 0;
    goto loc_802B2700;
}

loc_802B26BC:
{
    r3 = (r1 + 20);
    guest_range_0 = MemoryInline::ResolveRangeHost((r28 + 4), 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r28 + 4));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r28 + 8));
        }
    }
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r28 + 12));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 8);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 20u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r28 + 24));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r28 + 28));
        }
    }
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r28 + 32));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r30;
    r4 = (r1 + 20);
    r5 = (r1 + 8);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 12u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r28 + 20));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r28 + 16));
        }
    }
    ctx->lr = 0x802B26FCu;
    if constexpr (KnownRegArgsCpuCall<0x80052098u>(&func_80052098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80052098_1FD5 = func_80052098_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80052098_1FD5);
        r4 = static_cast<uint32_t>(regargs_result_80052098_1FD5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80052098u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r31 = (r3 & 255);
}

loc_802B2700:
{
}

loc_802B2704:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_802B2714;
    }
}

loc_802B2708:
{
    MemoryInline::FlatWrite32(r29, r28);
    r3 = 1;
    goto loc_802B2728;
}

loc_802B2714:
{
    r28 = (r28 + 52);
}

loc_802B2718:
{
    r0 = MemoryInline::FlatRead8(r28);
}

loc_802B2720:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_802B2634;
    }
}

loc_802B2724:
{
    r3 = 0;
}

loc_802B2728:
{
    r0 = 56;
    addr_psqx_802B272C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802B272C_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802B25D8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802B25D8_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC000000F fpr_write=0xC000007F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802B25D8 func_802B25D8 preserves=true fpr_mask=0x00000000
