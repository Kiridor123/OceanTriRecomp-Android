#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80468848(CpuContext* ctx);
extern "C" uint64_t func_80468848_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_804BEA00_ra38_7e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6)
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
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_804BEA00;

loc_804BEA00:
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
    f30.d = MemoryInline::FlatReadFloat32((r13 + -32608));
    r25 = r3;
    f29.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    r29 = (r3 + 240);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    r31 = (r3 + 276);
}

loc_804BEA54:
{
    r0 = MemoryInline::FlatRead8((r29 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BEB54;
    }
}

loc_804BEA60:
{
    r28 = (r29 + 12);
    r30 = (r25 + 276);
}

loc_804BEA68:
{
    r0 = MemoryInline::FlatRead8((r28 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BEB48;
    }
}

loc_804BEA74:
{
    f3.d = MemoryInline::FlatReadFloat32(r28);
    f2.d = MemoryInline::FlatReadFloat32(r29);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f27.d, f27.d);
    f0.d = PpcFmulsInline(f28.d, f28.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468848_12D4 = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_12D4);
        r4 = static_cast<uint32_t>(regargs_result_80468848_12D4 >> 32);
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
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f5.d = MemoryInline::FlatReadFloat32((r25 + 220));
    f2.d = MemoryInline::FlatReadFloat32((r25 + 224));
    f1.d = MemoryInline::FlatReadFloat32((r25 + 1348));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f31.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 1352));
    f27.d = PpcFmulsInline(f27.d, f3.d);
    f28.d = PpcFmulsInline(f28.d, f3.d);
    f6.d = PpcFmulsInline(f1.d, f3.d);
    f4.d = PpcFmulsInline(f5.d, f27.d);
    f3.d = PpcFmulsInline(f2.d, f28.d);
    f2.d = PpcFmulsInline(f2.d, f27.d);
    f1.d = PpcFmulsInline(f5.d, f28.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    SetCRFloatResident(cr, 0, f6.d, f0.d);
}

loc_804BEAD8:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804BEB48;
    }
}

loc_804BEAEC:
{
    f0.d = MemoryInline::FlatReadFloat32((r13 + -32616));
    SetCRFloatResident(cr, 0, f6.d, f0.d);
}

loc_804BEAF4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804BEB48;
    }
}

loc_804BEAFC:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 1260));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 1264));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f29.d);
}

loc_804BEB14:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804BEB34;
    }
}

loc_804BEB18:
{
    f0.d = (-(f0.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_804BEB20:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804BEB48;
    }
}

loc_804BEB24:
{
    f30.d = f0.d;
    r27 = r28;
    r26 = r29;
    goto loc_804BEB48;
}

loc_804BEB34:
{
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_804BEB38:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804BEB48;
    }
}

loc_804BEB3C:
{
    f30.d = f0.d;
    r27 = r29;
    r26 = r28;
}

loc_804BEB48:
{
    r28 = (r28 + 12);
}

loc_804BEB50:
{
    if ((static_cast<uint32_t>(r28) <= static_cast<uint32_t>(r30))) {
        goto loc_804BEA68;
    }
}

loc_804BEB54:
{
    r29 = (r29 + 12);
}

loc_804BEB5C:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r31))) {
        goto loc_804BEA54;
    }
}

loc_804BEB60:
{
    f0.d = MemoryInline::FlatReadFloat32((r13 + -32608));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_804BEB68:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804BEB74;
    }
}

loc_804BEB6C:
{
    r3 = 0;
    goto loc_804BEBA8;
}

loc_804BEB74:
{
    r4 = MemoryInline::FlatRead32(r27);
    r3 = 2;
    r0 = MemoryInline::FlatRead32((r27 + 4));
    MemoryInline::FlatWrite32((r25 + 292), r0);
    MemoryInline::FlatWrite32((r25 + 288), r4);
    r0 = MemoryInline::FlatRead32((r27 + 8));
    MemoryInline::FlatWrite32((r25 + 296), r0);
    r4 = MemoryInline::FlatRead32(r26);
    r0 = MemoryInline::FlatRead32((r26 + 4));
    MemoryInline::FlatWrite32((r25 + 304), r0);
    MemoryInline::FlatWrite32((r25 + 300), r4);
    r0 = MemoryInline::FlatRead32((r26 + 8));
    MemoryInline::FlatWrite32((r25 + 308), r0);
}

loc_804BEBA8:
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804BEA00(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804BEA00_ra38_7e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF800007F fpr_write=0xF800007F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804BEA00 func_804BEA00 preserves=true fpr_mask=0x00000000
