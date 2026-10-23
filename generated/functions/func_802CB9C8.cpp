#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050F10(CpuContext* ctx);
extern "C" uint64_t func_80050F10_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8012F368(CpuContext* ctx);
extern "C" uint64_t func_8012F368_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8012F400(CpuContext* ctx);
extern "C" uint32_t func_8012F400_ra8_4_8_0(CpuContext*, uint32_t, double);

extern "C" uint64_t func_802CB9C8_ra38_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t addr_psqx_802CBBF4_loc_0 = 0;
    uint32_t addr_psqx_802CBC00_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_802CB9C8;

loc_802CB9C8:
{
    MemoryInline::FlatWriteRam32((r1 + -480), r1);
    r1 = (r1 + -480);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 484), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 464), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 472);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 448), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 456);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 448);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r23 = r3;
    r29 = r4;
    r24 = r5;
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl1_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB10;
    }
}

loc_inl1_0x800CFB08:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB24;
    }
}

loc_inl1_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl1_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r27 = r3;
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl2_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB50;
    }
}

loc_inl2_0x800CFB48:
{
    r3 = 0;
    goto loc_inl2_cont_800CFB34;
}

loc_inl2_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB64;
    }
}

loc_inl2_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFB34;
}

loc_inl2_0x800CFB64:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl2_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r26 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r28 = (r1 + 24);
    r25 = (r1 + 408);
}

loc_802CBA18:
{
    r3 = r28;
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r28 = (r28 + 12);
}

loc_802CBA28:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r25))) {
        goto loc_802CBA18;
    }
}

loc_802CBA2C:
{
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    f30.d = MemoryInline::FlatReadFloat32((r2 + -13360));
    r25 = 0;
    r0 = (r29 & 255);
    r0 = (r0 & 8);
}

loc_802CBA48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802CBA60;
    }
}

loc_802CBA4C:
{
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r23 + 364));
    r4 = (r4 + 60);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_802CBA6C;
}

loc_802CBA60:
{
    r3 = (r1 + 8);
    r4 = (r23 + 376);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_802CBA6C:
{
    r28 = 0;
    r0 = (r29 & 255);
    r31 = (r0 & 16);
    r30 = (r0 & 2);
    r29 = (r0 & 4);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -13360));
    goto loc_802CBBE0;
}

loc_802CBA88:
{
    r0 = MemoryInline::FlatRead8(r27);
}

loc_802CBA90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802CBBD8;
    }
}

loc_802CBA94:
{
    r3 = MemoryInline::FlatRead8((r27 + 481));
    r0 = MemoryInline::FlatRead8((r23 + 420));
}

loc_802CBAA0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_802CBBD8;
    }
}

loc_802CBAA4:
{
    r0 = MemoryInline::FlatRead8((r27 + 3));
}

loc_802CBAAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(40))) {
        goto loc_802CBBD8;
    }
}

loc_802CBAB0:
{
    r3 = r27;
    r4 = 1;
    ctx->lr = 0x802CBABCu;
    if constexpr (KnownRegArgsCpuCall<0x8012F368u>(&func_8012F368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012F368_1BCF = func_8012F368_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012F368_1BCF);
        r4 = static_cast<uint32_t>(regargs_result_8012F368_1BCF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_802CBAC0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802CBBD8;
    }
}

loc_802CBAC4:
{
    r3 = r27;
    // inline leaf 0x80132214 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2221));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x80132214
}

loc_802CBAD0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802CBBD8;
    }
}

loc_802CBAD4:
{
    r0 = MemoryInline::FlatRead8((r27 + 482));
}

loc_802CBADC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_802CBAF0;
    }
}

loc_802CBAE0:
{
    r3 = r27;
    ctx->lr = 0x802CBAE8u;
    if constexpr (KnownRegArgsCpuCall<0x8012F400u>(&func_8012F400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_8012F400_2280 = func_8012F400_ra8_4_8_0(ctx, r3, f2.d);
        r3 = regargs_result_8012F400_2280;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    }
}

loc_802CBAEC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802CBBD8;
    }
}

loc_802CBAF0:
{
    r3 = MemoryInline::FlatRead8((r27 + 482));
}

loc_802CBAF8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802CBB08;
    }
}

loc_802CBAFC:
{
    r0 = MemoryInline::FlatRead8((r27 + 483));
}

loc_802CBB04:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_802CBBD8;
    }
}

loc_802CBB08:
{
}

loc_802CBB0C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802CBB1C;
    }
}

loc_802CBB10:
{
    r0 = MemoryInline::FlatRead8((r27 + 483));
}

loc_802CBB18:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_802CBBD8;
    }
}

loc_802CBB1C:
{
    r3 = MemoryInline::FlatRead8((r27 + 3));
    // inline leaf 0x802CB9B4 (5 guest instruction(s))
    r3 = (r3 & 255);
    r0 = (r3 + -34);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_3 & 134217727);
    // end of inlined leaf 0x802CB9B4
}

loc_802CBB28:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802CBB38;
    }
}

loc_802CBB2C:
{
    r0 = MemoryInline::FlatRead8((r23 + 899));
}

loc_802CBB34:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_802CBBD8;
    }
}

loc_802CBB38:
{
    r0 = MemoryInline::FlatRead8((r27 + 1085));
}

loc_802CBB40:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_802CBB50;
    }
}

loc_802CBB44:
{
    r0 = MemoryInline::FlatRead8((r23 + 899));
}

loc_802CBB4C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_802CBBD8;
    }
}

loc_802CBB50:
{
}

loc_802CBB54:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_802CBB68;
    }
}

loc_802CBB58:
{
    r0 = MemoryInline::FlatRead32((r27 + 456));
    r0 = (r0 & 1);
}

loc_802CBB64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802CBBD8;
    }
}

loc_802CBB68:
{
}

loc_802CBB6C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_802CBB80;
    }
}

loc_802CBB70:
{
    r0 = MemoryInline::FlatRead8((r27 + 485));
}

loc_802CBB78:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_802CBBD8;
    }
}

loc_802CBB7C:
{
    goto loc_802CBB94;
}

loc_802CBB80:
{
    r0 = MemoryInline::FlatRead8((r27 + 485));
}

loc_802CBB88:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_802CBBD8;
    }
}

loc_802CBB8C:
{
}

loc_802CBB90:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_802CBBD8;
    }
}

loc_802CBB94:
{
}

loc_802CBB98:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_802CBBCC;
    }
}

loc_802CBB9C:
{
    r3 = (r1 + 8);
    r4 = (r27 + 392);
    ctx->lr = 0x802CBBA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F10u>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    SetCRFloatResident(cr, 0, f31.d, f30.d);
}

loc_802CBBAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802CBBB4;
    }
}

loc_802CBBB0:
{
    f30.d = f1.d;
}

loc_802CBBB4:
{
    SetCRFloatResident(cr, 0, f1.d, f30.d);
}

loc_802CBBB8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802CBBD8;
    }
}

loc_802CBBC0:
{
    r25 = 1;
    MemoryInline::FlatWrite8(r24, static_cast<uint8_t>(r28));
    goto loc_802CBBD8;
}

loc_802CBBCC:
{
    MemoryInline::FlatWrite8(r24, static_cast<uint8_t>(r28));
    r25 = (r25 + 1);
    r24 = (r24 + 1);
}

loc_802CBBD8:
{
    r28 = (r28 + 1);
    r27 = (r27 + 2840);
}

loc_802CBBE0:
{
    r0 = (r28 & 255);
}

loc_802CBBE8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r26))) {
        goto loc_802CBA88;
    }
}

loc_802CBBEC:
{
    r3 = r25;
    r0 = 472;
    addr_psqx_802CBBF4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802CBBF4_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 464));
    r0 = 456;
    addr_psqx_802CBC00_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802CBC00_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 448));
    r11 = (r1 + 448);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 484));
    ctx->lr = r0;
    r1 = (r1 + 480);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802CB9C8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802CB9C8_ra38_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0xC0000007 fpr_write=0xC0000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802CB9C8 func_802CB9C8 preserves=true fpr_mask=0x00000000
