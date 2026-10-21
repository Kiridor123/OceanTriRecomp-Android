#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E31C8(CpuContext* ctx);
extern "C" uint64_t func_800E31C8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8011EA68(CpuContext* ctx);
extern "C" uint64_t func_8011EA68_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8012A688(CpuContext* ctx);
extern "C" uint32_t func_8012A688_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8013A894(CpuContext* ctx);
extern "C" uint64_t func_8013A894_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80135CC0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_80135E88_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x80135CC0u);
    goto loc_80135CC0;

loc_80135CC0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 64);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r3 = (r1 + 8);
    ctx->lr = 0x80135CF0u;
    if constexpr (KnownRegArgsCpuCall<0x8012A688u>(&func_8012A688)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012A688_AC6 = func_8012A688_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8012A688_AC6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8012A688u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = (r29 & 255);
    r0 = (r0 * 132);
    r31 = (r28 + r0);
    r0 = MemoryInline::FlatRead8((r31 + 1165));
}

loc_80135D04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80135D14;
    }
}

loc_80135D08:
{
}

loc_80135D0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80135D24;
    }
}

loc_80135D10:
{
    goto loc_80135E84;
}

loc_80135D14:
{
    r0 = MemoryInline::FlatRead16((r28 + 2102));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite16((r28 + 2102), static_cast<uint16_t>(r0));
    goto loc_80135D30;
}

loc_80135D24:
{
    r0 = MemoryInline::FlatRead16((r28 + 2102));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r28 + 2102), static_cast<uint16_t>(r0));
}

loc_80135D30:
{
    r0 = (r30 & 255);
    r3 = (r0 & 4);
}

loc_80135D3C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80135D4C;
    }
}

loc_80135D40:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 1167), static_cast<uint8_t>(r0));
    goto loc_80135D84;
}

loc_80135D4C:
{
    r0 = (r0 & 1);
}

loc_80135D54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80135D64;
    }
}

loc_80135D58:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 1167), static_cast<uint8_t>(r0));
    goto loc_80135D84;
}

loc_80135D64:
{
    r0 = MemoryInline::FlatRead8((r28 + 482));
}

loc_80135D6C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80135D7C;
    }
}

loc_80135D70:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 1167), static_cast<uint8_t>(r0));
    goto loc_80135D84;
}

loc_80135D7C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1167), static_cast<uint8_t>(r0));
}

loc_80135D84:
{
}

loc_80135D88:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80135E84;
    }
}

loc_80135D8C:
{
    r3 = r28;
    r4 = (r29 & 255);
    ctx->lr = 0x80135D98u;
    if constexpr (KnownRegArgsCpuCall<0x8013A894u>(&func_8013A894)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8013A894_14A0 = func_8013A894_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8013A894_14A0);
        r4 = static_cast<uint32_t>(regargs_result_8013A894_14A0 >> 32);
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
        InvokeDirectCpu<0x8013A894u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r29 = r3;
}

loc_80135DA0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80135E18;
    }
}

loc_80135DA4:
{
    r3 = r28;
    r4 = MemoryInline::FlatRead8((r29 + 16));
    ctx->lr = 0x80135DB0u;
    if constexpr (KnownRegArgsCpuCall<0x8011EA68u>(&func_8011EA68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8011EA68_1925 = func_8011EA68_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8011EA68_1925);
        r4 = static_cast<uint32_t>(regargs_result_8011EA68_1925 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8011EA68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
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
    r0 = MemoryInline::FlatRead8((r31 + 1167));
}

loc_80135DB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80135DC4;
    }
}

loc_80135DBC:
{
    f31.d = MemoryInline::FlatReadFloat32((r29 + 8));
    goto loc_80135DC8;
}

loc_80135DC4:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -28232));
}

loc_80135DC8:
{
    r27 = 0;
}

loc_80135DCC:
{
    r4 = MemoryInline::FlatRead32((r29 + 20));
    r0 = (r4 + 65536);
}

loc_80135DD8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80135E04;
    }
}

loc_80135DDC:
{
    r0 = MemoryInline::FlatRead8((r31 + 1167));
}

loc_80135DE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80135DF8;
    }
}

loc_80135DE8:
{
    r3 = (r28 + 36);
    r5 = 0;
    ctx->lr = 0x80135DF4u;
    if constexpr (KnownRegArgsCpuCall<0x800E31C8u>(&func_800E31C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800E31C8_23A4 = func_800E31C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E31C8_23A4);
        r4 = static_cast<uint32_t>(regargs_result_800E31C8_23A4 >> 32);
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
        InvokeDirectCpu<0x800E31C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80135E04;
}

loc_80135DF8:
{
    r3 = (r28 + 36);
    r5 = 1;
    ctx->lr = 0x80135E04u;
    if constexpr (KnownRegArgsCpuCall<0x800E31C8u>(&func_800E31C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800E31C8_2770 = func_800E31C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E31C8_2770);
        r4 = static_cast<uint32_t>(regargs_result_800E31C8_2770 >> 32);
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
        InvokeDirectCpu<0x800E31C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80135E04:
{
    r29 = (r29 + 4);
    r27 = (r27 + 1);
}

loc_80135E10:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(3))) {
        goto loc_80135DCC;
    }
}

loc_80135E14:
{
    goto loc_80135E1C;
}

loc_80135E18:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -28232));
}

loc_80135E1C:
{
    r0 = (r30 & 255);
    r0 = (r0 & 2);
}

loc_80135E28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80135E38;
    }
}

loc_80135E2C:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -28048));
    f31.d = (f31.d + f0.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d));
}

loc_80135E38:
{
    r3 = (r31 + 1192);
    r4 = (r28 + 392);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead8((r31 + 1167));
}

loc_80135E4C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80135E64;
    }
}

loc_80135E50:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1196));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 528));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80135E5C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80135E64;
    }
}

loc_80135E60:
{
    MemoryInline::FlatWriteFloat32((r31 + 1196), f0.d);
}

loc_80135E64:
{
    r3 = r28;
    // inline leaf 0x801359A4 (4 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 460));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 464));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    // end of inlined leaf 0x801359A4
    f1.d = PpcFmulsInline(f31.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1196));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 1196), f0.d);
    r0 = MemoryInline::FlatRead8((r28 + 481));
    MemoryInline::FlatWrite8((r31 + 1166), static_cast<uint8_t>(r0));
}

loc_80135E84:
{
    r0 = 72;
    addr_psqx_80135E88_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80135E88_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r11 = (r1 + 64);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80135CC0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80135CC0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x003FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80135CC0 func_80135CC0 preserves=true fpr_mask=0x00000000
