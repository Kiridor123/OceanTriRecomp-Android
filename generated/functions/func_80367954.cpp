#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005001C(CpuContext* ctx);
extern "C" double func_8005001C_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80051278(CpuContext* ctx);
extern "C" uint64_t func_80051278_ra18_18_18_0(CpuContext*, uint32_t, uint32_t, double, double);

extern "C" uint32_t func_80367954_ra10_18_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, double arg_f3, double arg_f4)
{
    uint32_t addr_psqx_803683AC_loc_0 = 0;
    uint32_t addr_psqx_803683B8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80367954;

loc_80367954:
{
    r0 = MemoryInline::FlatRead8(r25);
}

loc_8036795C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803682EC;
    }
}

loc_80367960:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r31 + 96), static_cast<uint8_t>(r0));
}

loc_8036796C:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(1))) {
        goto loc_803679AC;
    }
}

loc_80367970:
{
}

loc_80367974:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(2))) {
        goto loc_803679B8;
    }
}

loc_80367978:
{
}

loc_8036797C:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(3))) {
        goto loc_803679C4;
    }
}

loc_80367980:
{
}

loc_80367984:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(4))) {
        goto loc_803679D0;
    }
}

loc_80367988:
{
}

loc_8036798C:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(5))) {
        goto loc_803679DC;
    }
}

loc_80367990:
{
}

loc_80367994:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(6))) {
        goto loc_803679E8;
    }
}

loc_80367998:
{
}

loc_8036799C:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(7))) {
        goto loc_803679F4;
    }
}

loc_803679A0:
{
    r0 = -30;
    MemoryInline::FlatWrite32((r30 + 64), r0);
    goto loc_803682EC;
}

loc_803679AC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 64), r0);
    goto loc_803682EC;
}

loc_803679B8:
{
    r0 = -6;
    MemoryInline::FlatWrite32((r30 + 64), r0);
    goto loc_803682EC;
}

loc_803679C4:
{
    r0 = -2;
    MemoryInline::FlatWrite32((r30 + 64), r0);
    goto loc_803682EC;
}

loc_803679D0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 64), r0);
    goto loc_803682EC;
}

loc_803679DC:
{
    r0 = -6;
    MemoryInline::FlatWrite32((r30 + 64), r0);
    goto loc_803682EC;
}

loc_803679E8:
{
    r0 = -2;
    MemoryInline::FlatWrite32((r30 + 64), r0);
    goto loc_803682EC;
}

loc_803679F4:
{
    r0 = -4;
    MemoryInline::FlatWrite32((r30 + 64), r0);
}

loc_803682EC:
{
    r3 = (r1 + 92);
    r4 = (r27 + r29);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 40);
    ctx->lr = 0x80368300u;
    if constexpr (KnownRegArgsCpuCall<0x80051278u>(&func_80051278)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80051278_104F = func_80051278_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80051278_104F);
        r4 = static_cast<uint32_t>(regargs_result_80051278_104F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80051278u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = (r1 + 92);
    // inline leaf 0x80050F40 (6 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80050F40
    f0.d = MemoryInline::FlatReadFloat32((r2 + -8908));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_80368310:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80368324;
    }
}

loc_80368314:
{
    r3 = (r1 + 92);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    goto loc_80368338;
}

loc_80368324:
{
    r3 = (r1 + 92);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -9056));
    f2.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -8976));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
}

loc_80368338:
{
    r23 = (r27 + r29);
    r3 = MemoryInline::FlatRead32((r23 + 4));
    r3 = (r3 + 4);
    r0 = MemoryInline::FlatRead8((r27 + 36));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = 0x805F0000u;
    r4 = (r4 + -6584);
    r4_addr_0 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_0);
    r0 = (r24 * 24);
    r4 = (r4 + r0);
    r4 = (r4 + 4);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_1CDA = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_1CDA;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r1 + 8);
    r4 = (r1 + 92);
    f1.d = f30.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = MemoryInline::FlatRead32((r23 + 4));
    r3 = (r3 + 4);
    r4 = (r1 + 8);
    ctx->lr = 0x80368388u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = (r1 + 80);
    r4 = MemoryInline::FlatRead32((r23 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 44));
    ctx->lr = 0x80368398u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r23 + 4));
    r3 = (r3 + 4);
    r4 = (r1 + 80);
    ctx->lr = 0x803683A8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r0 = 200;
    addr_psqx_803683AC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803683AC_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 192));
    r0 = 184;
    addr_psqx_803683B8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803683B8_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 176));
    r11 = (r1 + 176);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r11 + -4));
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 212));
    ctx->lr = r0;
    r1 = (r1 + 208);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[11] = r11;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return r4;
}

}

extern "C" void func_80367954(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80367954_ra10_18_10_0(ctx, ctx->gpr[4], ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0xEF003FF7 gpr_write=0xFF801FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80367954 func_80367954 preserves=false fpr_mask=0xC0000000
