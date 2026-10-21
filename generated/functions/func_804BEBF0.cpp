#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80468848(CpuContext* ctx);
extern "C" uint64_t func_80468848_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_804BEBF0_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x804BEBF0u);
    goto loc_804BEBF0;

loc_804BEBF0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -128), 0, 136u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 132u, (r1 + 132), r0);
    r11 = (r1 + 48);
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
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    f31.d = MemoryInline::FlatReadFloat32((r2 + -2184));
    r31 = r3;
    f29.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    r28 = (r3 + 240);
    f30.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    r30 = (r3 + 276);
}

loc_804BEC44:
{
    r0 = MemoryInline::FlatRead8((r28 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BED84;
    }
}

loc_804BEC50:
{
    r27 = (r28 + 12);
    r29 = (r31 + 276);
}

loc_804BEC58:
{
    r0 = MemoryInline::FlatRead8((r27 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BED78;
    }
}

loc_804BEC64:
{
    f3.d = MemoryInline::FlatReadFloat32(r27);
    f2.d = MemoryInline::FlatReadFloat32(r28);
    f1.d = MemoryInline::FlatReadFloat32((r27 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f28.d, f28.d);
    f0.d = PpcFmulsInline(f27.d, f27.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468848_1216 = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_1216);
        r4 = static_cast<uint32_t>(regargs_result_80468848_1216 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80468848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1348));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1352));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f30.d / f2.d));
    f3.d = PpcFmulsInline(f28.d, f4.d);
    f2.d = PpcFmulsInline(f27.d, f4.d);
    f4.d = PpcFmulsInline(f4.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_804BECB4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804BED78;
    }
}

loc_804BECBC:
{
    f0.d = MemoryInline::FlatReadFloat32((r13 + -32616));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_804BECC4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804BED78;
    }
}

loc_804BECCC:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1232));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    SetCRFloatResident(cr, 0, f4.d, f29.d);
}

loc_804BECD8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804BECE8;
    }
}

loc_804BECDC:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1340));
    f4.d = PpcFmulsInline(f4.d, f0.d);
    goto loc_804BECF0;
}

loc_804BECE8:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1336));
    f4.d = PpcFmulsInline(f4.d, f0.d);
}

loc_804BECF0:
{
    SetCRFloatResident(cr, 0, f4.d, f30.d);
}

loc_804BECF4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804BED78;
    }
}

loc_804BECFC:
{
    f3.d = MemoryInline::FlatReadFloat32((r31 + 1224));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1228));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f1.d, f29.d);
}

loc_804BED1C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804BED2C;
    }
}

loc_804BED20:
{
    f1.d = (-(f1.d));
    r0 = 1;
    goto loc_804BED30;
}

loc_804BED2C:
{
    r0 = 0;
}

loc_804BED30:
{
    f0.d = MemoryInline::FlatReadFloat32((r13 + -32604));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804BED38:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804BED78;
    }
}

loc_804BED40:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    SetCRFloatResident(cr, 0, f4.d, f31.d);
}

loc_804BED54:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804BED78;
    }
}

loc_804BED58:
{
    f31.d = f4.d;
}

loc_804BED60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804BED70;
    }
}

loc_804BED64:
{
    r26 = r27;
    r25 = r28;
    goto loc_804BED78;
}

loc_804BED70:
{
    r26 = r28;
    r25 = r27;
}

loc_804BED78:
{
    r27 = (r27 + 12);
}

loc_804BED80:
{
    if ((static_cast<uint32_t>(r27) <= static_cast<uint32_t>(r29))) {
        goto loc_804BEC58;
    }
}

loc_804BED84:
{
    r28 = (r28 + 12);
}

loc_804BED8C:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r30))) {
        goto loc_804BEC44;
    }
}

loc_804BED90:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2184));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_804BED98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804BEDA4;
    }
}

loc_804BED9C:
{
    r3 = 0;
    goto loc_804BEDD8;
}

loc_804BEDA4:
{
    r4 = MemoryInline::FlatRead32(r26);
    r3 = 2;
    r0 = MemoryInline::FlatRead32((r26 + 4));
    MemoryInline::FlatWrite32((r31 + 292), r0);
    MemoryInline::FlatWrite32((r31 + 288), r4);
    r0 = MemoryInline::FlatRead32((r26 + 8));
    MemoryInline::FlatWrite32((r31 + 296), r0);
    r4 = MemoryInline::FlatRead32(r25);
    r0 = MemoryInline::FlatRead32((r25 + 4));
    MemoryInline::FlatWrite32((r31 + 304), r0);
    MemoryInline::FlatWrite32((r31 + 300), r4);
    r0 = MemoryInline::FlatRead32((r25 + 8));
    MemoryInline::FlatWrite32((r31 + 308), r0);
}

loc_804BEDD8:
{
    r11 = (r1 + 48);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 116u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 92u, (r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 76u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 60u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 44u, (r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 28u, (r1 + 48));
    // inline leaf 0x804574CC (8 guest instruction(s))
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 112u, (r1 + 132));
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
    ctx->fpr[4] = f4;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804BEBF0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804BEBF0_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF800001F fpr_write=0xF800001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804BEBF0 func_804BEBF0 preserves=true fpr_mask=0x00000000
