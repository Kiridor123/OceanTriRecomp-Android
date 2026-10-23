#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802BCF50(CpuContext* ctx);
extern "C" uint64_t func_802BCF50_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_802BD0E0(CpuContext* ctx);
extern "C" uint64_t func_802BD0E0_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_802BD2C4(CpuContext* ctx);
extern "C" uint64_t func_802BD2C4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802BCA94_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_802BCF0C_loc_0 = 0;
    uint32_t addr_psqx_802BCF18_loc_0 = 0;
    uint32_t addr_psqx_802BCF24_loc_0 = 0;
    uint32_t addr_psqx_802BCF30_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword13 = 0;
    uint32_t stackword14 = 0;
    uint32_t stackword15 = 0;
    uint32_t stackword16 = 0;
    uint32_t stackword17 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    const uint32_t r22_entry = r22;
    const uint32_t r23_entry = r23;
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_802BCA94;

loc_802BCA94:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    r11 = (r1 + 64);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r23 = r3;
    r24 = r4;
    r0 = MemoryInline::FlatRead8((r4 + 65));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r4 + 65), static_cast<uint8_t>(r0));
    r28 = MemoryInline::FlatRead32((r4 + 124));
    r27 = 1;
    r29 = 0x805D0000u;
    r31 = 0;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    r22 = -1;
    f29.d = MemoryInline::FlatReadFloat64((r2 + -13688));
    r30 = 1127219200;
    f30.d = MemoryInline::FlatReadFloat32((r2 + -13488));
    f28.d = MemoryInline::FlatReadFloat32((r2 + -13492));
}

loc_802BCB04:
{
    r5 = r28;
    r26 = r28;
    r0 = MemoryInline::FlatRead8((r28 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r28 = (r28 + r0);
    r0 = MemoryInline::FlatRead8((r26 + 3));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802BCB28:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(43))) {
        goto loc_802BCED0;
    }
}

loc_802BCB2C:
{
    r3 = (r29 + 9612);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x802BCB40u:
        goto loc_802BCB40;
        break;
    case 0x802BCB4Cu:
        goto loc_802BCB4C;
        break;
    case 0x802BCB60u:
        goto loc_802BCB60;
        break;
    case 0x802BCB80u:
        goto loc_802BCB80;
        break;
    case 0x802BCB94u:
        goto loc_802BCB94;
        break;
    case 0x802BCBB4u:
        goto loc_802BCBB4;
        break;
    case 0x802BCBC0u:
        goto loc_802BCBC0;
        break;
    case 0x802BCBCCu:
        goto loc_802BCBCC;
        break;
    case 0x802BCBD8u:
        goto loc_802BCBD8;
        break;
    case 0x802BCBE4u:
        goto loc_802BCBE4;
        break;
    case 0x802BCBF0u:
        goto loc_802BCBF0;
        break;
    case 0x802BCC14u:
        goto loc_802BCC14;
        break;
    case 0x802BCC38u:
        goto loc_802BCC38;
        break;
    case 0x802BCC44u:
        goto loc_802BCC44;
        break;
    case 0x802BCC50u:
        goto loc_802BCC50;
        break;
    case 0x802BCC5Cu:
        goto loc_802BCC5C;
        break;
    case 0x802BCC68u:
        goto loc_802BCC68;
        break;
    case 0x802BCC78u:
        goto loc_802BCC78;
        break;
    case 0x802BCC84u:
        goto loc_802BCC84;
        break;
    case 0x802BCC90u:
        goto loc_802BCC90;
        break;
    case 0x802BCC9Cu:
        goto loc_802BCC9C;
        break;
    case 0x802BCCA8u:
        goto loc_802BCCA8;
        break;
    case 0x802BCCB4u:
        goto loc_802BCCB4;
        break;
    case 0x802BCCC0u:
        goto loc_802BCCC0;
        break;
    case 0x802BCCCCu:
        goto loc_802BCCCC;
        break;
    case 0x802BCCD8u:
        goto loc_802BCCD8;
        break;
    case 0x802BCCE4u:
        goto loc_802BCCE4;
        break;
    case 0x802BCCF0u:
        goto loc_802BCCF0;
        break;
    case 0x802BCCFCu:
        goto loc_802BCCFC;
        break;
    case 0x802BCD08u:
        goto loc_802BCD08;
        break;
    case 0x802BCD14u:
        goto loc_802BCD14;
        break;
    case 0x802BCD20u:
        goto loc_802BCD20;
        break;
    case 0x802BCD2Cu:
        goto loc_802BCD2C;
        break;
    case 0x802BCD38u:
        goto loc_802BCD38;
        break;
    case 0x802BCD50u:
        goto loc_802BCD50;
        break;
    case 0x802BCD64u:
        goto loc_802BCD64;
        break;
    case 0x802BCD98u:
        goto loc_802BCD98;
        break;
    case 0x802BCDACu:
        goto loc_802BCDAC;
        break;
    case 0x802BCE78u:
        goto loc_802BCE78;
        break;
    case 0x802BCED0u:
        goto loc_802BCED0;
        break;
    case 0x802BCED8u:
        goto loc_802BCED8;
        break;
    case 0x802BCEA4u:
        goto loc_802BCEA4;
        break;
    case 0x802BCEBCu:
        goto loc_802BCEBC;
        break;
    case 0x802BCEB4u:
        goto loc_802BCEB4;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[22] = r22;
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
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_802BCB40:
{
    r0 = MemoryInline::FlatRead8((r26 + 1));
    MemoryInline::FlatWrite8((r24 + 132), static_cast<uint8_t>(r0));
    goto loc_802BCEE0;
}

loc_802BCB4C:
{
    r0 = MemoryInline::FlatRead8((r26 + 1));
    MemoryInline::FlatWrite8((r24 + 133), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8(r26);
    MemoryInline::FlatWrite8((r24 + 135), static_cast<uint8_t>(r0));
    goto loc_802BCEE0;
}

loc_802BCB60:
{
    r0 = MemoryInline::FlatRead8((r26 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 12);
    r3 = (r24 + r0);
    r3 = (r3 + 76);
    r4 = r24;
    ctx->lr = 0x802BCB7Cu;
    if constexpr (KnownRegArgsCpuCall<0x802BCF50u>(&func_802BCF50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        const auto regargs_result_802BCF50_29BB = func_802BCF50_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802BCF50_29BB);
        r4 = static_cast<uint32_t>(regargs_result_802BCF50_29BB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
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
        ctx->fpr[4] = f4;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x802BCF50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
    }
    goto loc_802BCEE0;
}

loc_802BCB80:
{
    r0 = MemoryInline::FlatRead8((r26 + 1));
    MemoryInline::FlatWrite8((r24 + 134), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8(r26);
    MemoryInline::FlatWrite8((r24 + 136), static_cast<uint8_t>(r0));
    goto loc_802BCEE0;
}

loc_802BCB94:
{
    r0 = MemoryInline::FlatRead8((r26 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 12);
    r3 = (r24 + r0);
    r3 = (r3 + 100);
    r4 = r24;
    ctx->lr = 0x802BCBB0u;
    if constexpr (KnownRegArgsCpuCall<0x802BD0E0u>(&func_802BD0E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        const auto regargs_result_802BD0E0_31FD = func_802BD0E0_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802BD0E0_31FD);
        r4 = static_cast<uint32_t>(regargs_result_802BD0E0_31FD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
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
        ctx->fpr[4] = f4;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x802BD0E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
    }
    goto loc_802BCEE0;
}

loc_802BCBB4:
{
    r0 = MemoryInline::FlatRead8((r26 + 1));
    MemoryInline::FlatWrite8((r24 + 137), static_cast<uint8_t>(r0));
    goto loc_802BCEE0;
}

loc_802BCBC0:
{
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r24 + 152), r0);
    goto loc_802BCEE0;
}

loc_802BCBCC:
{
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r24 + 160), r0);
    goto loc_802BCEE0;
}

loc_802BCBD8:
{
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r24 + 156), r0);
    goto loc_802BCEE0;
}

loc_802BCBE4:
{
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r24 + 164), r0);
    goto loc_802BCEE0;
}

loc_802BCBF0:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r0 ^ -2147483648);
    stackword12 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    stackword13 = r30;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword13), static_cast<uint32_t>(stackword12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f0.d = PpcFmulsInline(f28.d, f0.d);
    MemoryInline::FlatWriteFloat32((r24 + 144), f0.d);
    goto loc_802BCEE0;
}

loc_802BCC14:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r0 ^ -2147483648);
    stackword14 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    stackword15 = r30;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword15), static_cast<uint32_t>(stackword14));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f0.d = PpcFmulsInline(f28.d, f0.d);
    MemoryInline::FlatWriteFloat32((r24 + 148), f0.d);
    goto loc_802BCEE0;
}

loc_802BCC38:
{
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r24 + 168), r0);
    goto loc_802BCEE0;
}

loc_802BCC44:
{
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r24 + 172), r0);
    goto loc_802BCEE0;
}

loc_802BCC50:
{
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r24 + 176), r0);
    goto loc_802BCEE0;
}

loc_802BCC5C:
{
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r24 + 180), r0);
    goto loc_802BCEE0;
}

loc_802BCC68:
{
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r24 + 70), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r24 + 68), static_cast<uint16_t>(r0));
    goto loc_802BCEE0;
}

loc_802BCC78:
{
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r24 + 184), r0);
    goto loc_802BCEE0;
}

loc_802BCC84:
{
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r24 + 188), r0);
    goto loc_802BCEE0;
}

loc_802BCC90:
{
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r24 + 192), static_cast<uint16_t>(r0));
    goto loc_802BCEE0;
}

loc_802BCC9C:
{
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r24 + 194), static_cast<uint16_t>(r0));
    goto loc_802BCEE0;
}

loc_802BCCA8:
{
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r24 + 196), r0);
    goto loc_802BCEE0;
}

loc_802BCCB4:
{
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r24 + 200), r0);
    goto loc_802BCEE0;
}

loc_802BCCC0:
{
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r24 + 204), static_cast<uint16_t>(r0));
    goto loc_802BCEE0;
}

loc_802BCCCC:
{
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r24 + 206), static_cast<uint16_t>(r0));
    goto loc_802BCEE0;
}

loc_802BCCD8:
{
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r24 + 208), r0);
    goto loc_802BCEE0;
}

loc_802BCCE4:
{
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r24 + 212), r0);
    goto loc_802BCEE0;
}

loc_802BCCF0:
{
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r24 + 216), r0);
    goto loc_802BCEE0;
}

loc_802BCCFC:
{
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r24 + 220), r0);
    goto loc_802BCEE0;
}

loc_802BCD08:
{
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r24 + 224), r0);
    goto loc_802BCEE0;
}

loc_802BCD14:
{
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r24 + 228), r0);
    goto loc_802BCEE0;
}

loc_802BCD20:
{
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r24 + 232), r0);
    goto loc_802BCEE0;
}

loc_802BCD2C:
{
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r24 + 236), r0);
    goto loc_802BCEE0;
}

loc_802BCD38:
{
    r4 = MemoryInline::FlatRead8(r26);
    r0 = MemoryInline::FlatRead8((r26 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r24 + r0);
    MemoryInline::FlatWrite8((r3 + 240), static_cast<uint8_t>(r4));
    goto loc_802BCEE0;
}

loc_802BCD50:
{
    r3 = r24;
    r4 = MemoryInline::FlatRead8((r26 + 1));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctx->lr = 0x802BCD60u;
    if constexpr (KnownRegArgsCpuCall<0x802BD2C4u>(&func_802BD2C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_802BD2C4_532E = func_802BD2C4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802BD2C4_532E);
        r4 = static_cast<uint32_t>(regargs_result_802BD2C4_532E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x802BD2C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
    }
    goto loc_802BCEE0;
}

loc_802BCD64:
{
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(18));
    r0 = (r0_rot_4 & 3);
    MemoryInline::FlatWrite8((r24 + 252), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 & 16383);
    r0 = (r0 ^ -2147483648);
    stackword16 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    stackword17 = r30;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword17), static_cast<uint32_t>(stackword16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f0.d = PpcFmulsInline(f30.d, f0.d);
    MemoryInline::FlatWriteFloat32((r24 + 248), f0.d);
    goto loc_802BCEE0;
}

loc_802BCD98:
{
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r24 + 70), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r24 + 68), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r24 + 128), r28);
    goto loc_802BCEE0;
}

loc_802BCDAC:
{
    r0 = MemoryInline::FlatRead8((r26 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802BCDB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802BCDC8;
    }
}

loc_802BCDBC:
{
    r3 = r23;
    r4 = r24;
    ctx->lr = 0x802BCDC8u;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x802BD3A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
}

loc_802BCDC8:
{
    r3 = MemoryInline::FlatRead16((r24 + 68));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2150354376);
    r3 = (r3 + -1);
    MemoryInline::FlatWrite16((r24 + 68), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead16((r24 + 70));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802BCDDC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802BCDEC;
    }
}

loc_802BCDE0:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_802BCDE8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_802BCDFC;
    }
}

loc_802BCDEC:
{
    r28 = MemoryInline::FlatRead32((r24 + 128));
    r27 = 0;
    r25 = 0;
    goto loc_802BCEE0;
}

loc_802BCDFC:
{
    r3 = (r24 + 76);
    r4 = r24;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r24 + 100);
    r4 = (r24 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    guest_range_2 = MemoryInline::ResolveRangeHost((r24 + 160), 0, 80u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r24 + 160));
    guest_range_3 = MemoryInline::ResolveRangeHost((r24 + 68), 0, 185u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 84u, (r24 + 152), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r24 + 164));
    MemoryInline::WriteResolved32(guest_range_3, 88u, (r24 + 156), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r24 + 172));
    MemoryInline::WriteResolved32(guest_range_3, 100u, (r24 + 168), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r24 + 180));
    MemoryInline::WriteResolved32(guest_range_3, 108u, (r24 + 176), r0);
    MemoryInline::WriteResolved32(guest_range_3, 120u, (r24 + 188), r31);
    MemoryInline::WriteResolved32(guest_range_3, 132u, (r24 + 200), r31);
    MemoryInline::WriteResolved32(guest_range_3, 144u, (r24 + 212), r31);
    MemoryInline::WriteResolved32(guest_range_3, 160u, (r24 + 228), r31);
    r0 = MemoryInline::ReadResolved16(guest_range_2, 34u, (r24 + 194));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_3, 124u, (r24 + 192), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 46u, (r24 + 206));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_3, 136u, (r24 + 204), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r24 + 220));
    MemoryInline::WriteResolved32(guest_range_3, 148u, (r24 + 216), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 76u, (r24 + 236));
    MemoryInline::WriteResolved32(guest_range_3, 164u, (r24 + 232), r0);
    MemoryInline::WriteResolved8(guest_range_3, 184u, (r24 + 252), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 180u, (r24 + 248), f31.d);
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r22)) << 16) | static_cast<uint16_t>(r22)))) {
        MemoryInline::WriteResolved16(guest_range_3, 0u, (r24 + 68), r22);
        MemoryInline::WriteResolved16(guest_range_3, 2u, (r24 + 70), r22);
    }
    goto loc_802BCEE0;
}

loc_802BCE78:
{
    r3 = r23;
    r4 = r24;
    ctx->lr = 0x802BCE84u;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x802BD3A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryInline::FlatRead8((r26 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802BCE90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802BCEE0;
    }
}

loc_802BCE94:
{
    r28 = MemoryInline::FlatRead32((r24 + 128));
    r27 = 0;
    r25 = 0;
    goto loc_802BCEE0;
}

loc_802BCEA4:
{
    r0 = MemoryInline::FlatRead8((r24 + 65));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r24 + 65), static_cast<uint8_t>(r0));
    goto loc_802BCEE0;
}

loc_802BCEB4:
{
    MemoryInline::FlatWrite32((r24 + 244), r28);
    goto loc_802BCEE0;
}

loc_802BCEBC:
{
    r0 = MemoryInline::FlatRead32((r24 + 244));
}

loc_802BCEC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802BCEE0;
    }
}

loc_802BCEC8:
{
    r28 = r0;
    goto loc_802BCEE0;
}

loc_802BCED0:
{
    r3 = 1;
    goto loc_802BCF08;
}

loc_802BCED8:
{
    r27 = 0;
    r25 = -1;
}

loc_802BCEE0:
{
    r0 = MemoryInline::FlatRead8((r24 + 65));
    r0 = (r0 & 1);
}

loc_802BCEEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802BCEF8;
    }
}

loc_802BCEF0:
{
    r3 = 1;
    goto loc_802BCF08;
}

loc_802BCEF8:
{
    MemoryInline::FlatWrite32((r24 + 124), r28);
}

loc_802BCF00:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_802BCB04;
    }
}

loc_802BCF04:
{
    r3 = r25;
}

loc_802BCF08:
{
    r0 = 120;
    addr_psqx_802BCF0C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802BCF0C_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 112));
    r0 = 104;
    addr_psqx_802BCF18_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802BCF18_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 96));
    r0 = 88;
    addr_psqx_802BCF24_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802BCF24_loc_0));
    f29.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r0 = 72;
    addr_psqx_802BCF30_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802BCF30_loc_0));
    f28.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r11 = (r1 + 64);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 132));
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    ctx->gpr[22] = r22_entry;
    ctx->gpr[23] = r23_entry;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802BCA94(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802BCA94_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802BCA94 func_802BCA94 preserves=true fpr_mask=0x00000000
