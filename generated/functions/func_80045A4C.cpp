#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80045A4C_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t addr_psqx_80045C24_loc_0 = 0;
    uint32_t addr_psqx_80045C30_loc_0 = 0;
    uint32_t addr_psqx_80045C3C_loc_0 = 0;
    uint32_t addr_psqx_80045C48_loc_0 = 0;
    uint32_t addr_psqx_80045C54_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x80045A4Cu);
    goto loc_80045A4C;

loc_80045A4C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -128), 0, 136u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 132u, (r1 + 132), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 112u, (r1 + 112), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 96u, (r1 + 96), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r25 = r3;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -32636));
    r29 = (r3 + 240);
    f29.d = MemoryInline::FlatReadFloat32((r2 + -32696));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -32644));
    r31 = (r3 + 276);
}

loc_80045AA0:
{
    r0 = MemoryInline::FlatRead8((r29 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80045AAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80045BE4;
    }
}

loc_80045AB0:
{
    r28 = (r29 + 12);
    r30 = (r25 + 276);
}

loc_80045AB8:
{
    r0 = MemoryInline::FlatRead8((r28 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80045AC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80045BD8;
    }
}

loc_80045AC8:
{
    f1.d = MemoryInline::FlatReadFloat32(r28);
    f0.d = MemoryInline::FlatReadFloat32(r29);
    f28.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f28.d, f28.d);
    f0.d = PpcFmulsInline(f27.d, f27.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x804645F4u>(ctx);
    f1 = ctx->fpr[1];
    f3.d = static_cast<double>(PpcForceSingleValueInline(f30.d / f1.d));
    f0.d = PpcFmulsInline(f28.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f0.d = PpcFmulsInline(f27.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r25 + 416));
    f3.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r25 + 420));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_80045B14:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80045BD8;
    }
}

loc_80045B1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r13 + -32616));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_80045B24:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80045BD8;
    }
}

loc_80045B2C:
{
    f0.d = MemoryInline::FlatReadFloat32((r25 + 328));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    SetCRFloatResident(cr, 0, f3.d, f29.d);
}

loc_80045B38:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80045B48;
    }
}

loc_80045B3C:
{
    f0.d = MemoryInline::FlatReadFloat32((r25 + 408));
    f3.d = PpcFmulsInline(f3.d, f0.d);
    goto loc_80045B50;
}

loc_80045B48:
{
    f0.d = MemoryInline::FlatReadFloat32((r25 + 404));
    f3.d = PpcFmulsInline(f3.d, f0.d);
}

loc_80045B50:
{
    SetCRFloatResident(cr, 0, f3.d, f30.d);
}

loc_80045B54:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80045BD8;
    }
}

loc_80045B5C:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 320));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r25 + 324));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f1.d, f29.d);
}

loc_80045B7C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80045B8C;
    }
}

loc_80045B80:
{
    f1.d = (-(f1.d));
    r0 = 1;
    goto loc_80045B90;
}

loc_80045B8C:
{
    r0 = 0;
}

loc_80045B90:
{
    f0.d = MemoryInline::FlatReadFloat32((r13 + -32604));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80045B98:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80045BD8;
    }
}

loc_80045BA0:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    SetCRFloatResident(cr, 0, f3.d, f31.d);
}

loc_80045BB4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80045BD8;
    }
}

loc_80045BB8:
{
    f31.d = f3.d;
}

loc_80045BC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80045BD0;
    }
}

loc_80045BC4:
{
    r27 = r28;
    r26 = r29;
    goto loc_80045BD8;
}

loc_80045BD0:
{
    r27 = r29;
    r26 = r28;
}

loc_80045BD8:
{
    r28 = (r28 + 12);
}

loc_80045BE0:
{
    if ((static_cast<uint32_t>(r28) <= static_cast<uint32_t>(r30))) {
        goto loc_80045AB8;
    }
}

loc_80045BE4:
{
    r29 = (r29 + 12);
}

loc_80045BEC:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r31))) {
        goto loc_80045AA0;
    }
}

loc_80045BF0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32636));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_80045BF8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80045C04;
    }
}

loc_80045BFC:
{
    r3 = 0;
    goto loc_80045C20;
}

loc_80045C04:
{
    r3 = (r25 + 288);
    r4 = r27;
    // inline leaf 0x80045C74 (13 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 24u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r5);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r0);
    }
    r0 = MemoryInline::FlatRead8((r4 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r3 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 9));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r3 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 10));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r3 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 11));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r3 + 11), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80045C74
    r3 = (r25 + 300);
    r4 = r26;
    // inline leaf 0x80045C74 (13 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, r3, r5);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 4), r0);
    }
    r0 = MemoryInline::FlatRead8((r4 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r3 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 9));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r3 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 10));
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r3 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 11));
    MemoryInline::WriteResolved8(guest_range_1, 23u, (r3 + 11), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80045C74
    r3 = 2;
}

loc_80045C20:
{
    r0 = 120;
    addr_psqx_80045C24_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80045C24_loc_0));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 116u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 92u, (r1 + 112));
    r0 = 104;
    addr_psqx_80045C30_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80045C30_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 76u, (r1 + 96));
    r0 = 88;
    addr_psqx_80045C3C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80045C3C_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 60u, (r1 + 80));
    r0 = 72;
    addr_psqx_80045C48_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80045C48_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 44u, (r1 + 64));
    r0 = 56;
    addr_psqx_80045C54_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80045C54_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 28u, (r1 + 48));
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_2, 112u, (r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80045A4C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80045A4C_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203F gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0xF800000F fpr_write=0xF800000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80045A4C func_80045A4C preserves=true fpr_mask=0x00000000
