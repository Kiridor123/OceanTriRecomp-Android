#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050AF4(CpuContext* ctx);
extern "C" uint64_t func_80050AF4_ra38_1e0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80050F10(CpuContext* ctx);
extern "C" uint64_t func_80050F10_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802607E0(CpuContext* ctx);
extern "C" uint32_t func_802607E0_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80260828_ra38_1e2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_802609E0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x80260828u);
    goto loc_80260828;

loc_80260828:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 32u, (r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r31 = r3;
    r28 = 0;
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    r0 = (r3 & 65535);
}

loc_80260858:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(38))) {
        goto loc_802608E0;
    }
}

loc_8026085C:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -15056));
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl2_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB10;
    }
}

loc_inl2_0x800CFB08:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB24;
    }
}

loc_inl2_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl2_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r27 = r3;
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl3_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl3_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800CFB50;
    }
}

loc_inl3_0x800CFB48:
{
    r3 = 0;
    goto loc_inl3_cont_800CFB34;
}

loc_inl3_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl3_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl3_0x800CFB64;
    }
}

loc_inl3_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl3_cont_800CFB34;
}

loc_inl3_0x800CFB64:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl3_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r29 = (r3 & 65535);
    r30 = 0;
    goto loc_802608D8;
}

loc_80260880:
{
    r0 = MemoryInline::FlatRead8(r27);
}

loc_80260888:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802608D0;
    }
}

loc_8026088C:
{
    r0 = MemoryInline::FlatRead8((r27 + 1));
}

loc_80260894:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802608D0;
    }
}

loc_80260898:
{
    r3 = MemoryInline::FlatRead8((r31 + 22));
    r4 = MemoryInline::FlatRead8((r27 + 481));
    ctx->lr = 0x802608A4u;
    if constexpr (KnownRegArgsCpuCall<0x802607E0u>(&func_802607E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802607E0_15A1 = func_802607E0_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_802607E0_15A1;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802607E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_802608A8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802608D0;
    }
}

loc_802608AC:
{
    r3 = (r31 + 60);
    r4 = (r27 + 392);
    ctx->lr = 0x802608B8u;
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
    SetCRFloatResident(cr, 0, f31.d, f1.d);
}

loc_802608BC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802608D0;
    }
}

loc_802608C4:
{
    f31.d = f1.d;
    r26 = r27;
    r28 = 1;
}

loc_802608D0:
{
    r30 = (r30 + 1);
    r27 = (r27 + 2840);
}

loc_802608D8:
{
}

loc_802608DC:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r29))) {
        goto loc_80260880;
    }
}

loc_802608E0:
{
}

loc_802608E4:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_8026092C;
    }
}

loc_802608E8:
{
    r4 = MemoryInline::FlatRead16((r31 + 178));
}

loc_802608F0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802609DC;
    }
}

loc_802608F4:
{
    r3 = (r4 + 1024);
}

loc_802608FC:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(2048))) {
        goto loc_8026090C;
    }
}

loc_80260900:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 178), static_cast<uint16_t>(r0));
    goto loc_802609DC;
}

loc_8026090C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_80260914:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80260924;
    }
}

loc_80260918:
{
    r0 = (r4 + -1024);
    MemoryInline::FlatWrite16((r31 + 178), static_cast<uint16_t>(r0));
    goto loc_802609DC;
}

loc_80260924:
{
    MemoryInline::FlatWrite16((r31 + 178), static_cast<uint16_t>(r3));
    goto loc_802609DC;
}

loc_8026092C:
{
    r3 = (r31 + 60);
    r4 = (r26 + 392);
    ctx->lr = 0x80260938u;
    if constexpr (KnownRegArgsCpuCall<0x80050AF4u>(&func_80050AF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80050AF4_20FE = func_80050AF4_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050AF4_20FE);
        r4 = static_cast<uint32_t>(regargs_result_80050AF4_20FE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
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
        ctx->fpr[1] = f1;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80050AF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r3 = (r3 & 65535);
    r0 = MemoryInline::FlatRead32((r31 + 88));
    r3 = (r3 + 65536);
    r0 = (r3 - r0);
    r4 = (r0 & 65535);
}

loc_80260950:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(32768))) {
        goto loc_8026099C;
    }
}

loc_80260954:
{
}

loc_80260958:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(54614))) {
        goto loc_80260964;
    }
}

loc_8026095C:
{
    r3 = 65536;
    r4 = (r3 + -10922);
}

loc_80260964:
{
    r3 = MemoryInline::FlatRead16((r31 + 178));
}

loc_8026096C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(32768))) {
        goto loc_80260990;
    }
}

loc_80260970:
{
    r3 = (r3 + -2048);
    r0 = (r4 & 65535);
}

loc_8026097C:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r0))) {
        goto loc_80260988;
    }
}

loc_80260980:
{
    MemoryInline::FlatWrite16((r31 + 178), static_cast<uint16_t>(r4));
    goto loc_802609DC;
}

loc_80260988:
{
    MemoryInline::FlatWrite16((r31 + 178), static_cast<uint16_t>(r3));
    goto loc_802609DC;
}

loc_80260990:
{
    r0 = (r3 + -2048);
    MemoryInline::FlatWrite16((r31 + 178), static_cast<uint16_t>(r0));
    goto loc_802609DC;
}

loc_8026099C:
{
}

loc_802609A0:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(10923))) {
        goto loc_802609A8;
    }
}

loc_802609A4:
{
    r4 = 10923;
}

loc_802609A8:
{
    r3 = MemoryInline::FlatRead16((r31 + 178));
}

loc_802609B0:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(32768))) {
        goto loc_802609D4;
    }
}

loc_802609B4:
{
    r3 = (r3 + 2048);
    r0 = (r4 & 65535);
}

loc_802609C0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_802609CC;
    }
}

loc_802609C4:
{
    MemoryInline::FlatWrite16((r31 + 178), static_cast<uint16_t>(r4));
    goto loc_802609DC;
}

loc_802609CC:
{
    MemoryInline::FlatWrite16((r31 + 178), static_cast<uint16_t>(r3));
    goto loc_802609DC;
}

loc_802609D4:
{
    r0 = (r3 + 2048);
    MemoryInline::FlatWrite16((r31 + 178), static_cast<uint16_t>(r0));
}

loc_802609DC:
{
    r0 = 40;
    addr_psqx_802609E0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802609E0_loc_0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 24u, (r1 + 32));
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80260828(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80260828_ra38_1e2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003FF gpr_write=0x00000BFB gpr_return=0x00000018 fpr_read=0x80003FE3 fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80260828 func_80260828 preserves=true fpr_mask=0x00000000
