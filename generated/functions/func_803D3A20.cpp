#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803D2A84(CpuContext* ctx);
extern "C" uint64_t func_803D2A84_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803F8EEC(CpuContext* ctx);
extern "C" uint64_t func_803F8EEC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803FA6FC(CpuContext* ctx);
extern "C" uint64_t func_803FA6FC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_803D3A20_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_803D3CF0_loc_0 = 0;
    uint32_t addr_psqx_803D3CFC_loc_0 = 0;
    uint32_t addr_psqx_803D3D08_loc_0 = 0;
    uint32_t addr_psqx_803D3D14_loc_0 = 0;
    uint32_t addr_psqx_803D3D20_loc_0 = 0;
    uint32_t addr_psqx_803D3D2C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t stackword15 = 0;
    uint32_t stackword16 = 0;
    uint32_t stackword17 = 0;
    uint32_t stackword18 = 0;
    uint32_t stackword19 = 0;
    uint32_t stackword20 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_803D3A20;

loc_803D3A20:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -192), 0, 200u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 196u, (r1 + 196), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 176u, (r1 + 176), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 160u, (r1 + 160), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 144u, (r1 + 144), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 128u, (r1 + 128), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 112u, (r1 + 112), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 96u, (r1 + 96), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    r11 = (r1 + 96);
    // inline leaf 0x80457468 (14 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    // end of inlined leaf 0x80457468
    r22 = r3;
    r23 = r4;
    r24 = r5;
    r30 = r6;
    r26 = r7;
    r25 = r8;
}

loc_803D3A80:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_803D3CEC;
    }
}

loc_803D3A84:
{
}

loc_803D3A88:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(2))) {
        goto loc_803D3A90;
    }
}

loc_803D3A8C:
{
    goto loc_803D3CEC;
}

loc_803D3A90:
{
    r29 = 0;
    r27 = (r1 + 8);
    r28 = r22;
    r20 = 1;
    r31 = 0;
}

loc_803D3AA4:
{
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r31));
    r3 = (r28 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + 18516));
}

loc_803D3AB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803D3B54;
    }
}

loc_803D3AB8:
{
    r0 = MemoryInline::FlatRead8((r3 + 18652));
}

loc_803D3AC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803D3B54;
    }
}

loc_803D3AC4:
{
    r3 = r23;
    // inline leaf 0x803F97FC (7 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r3 = (r0 & 128);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x803F97FC
}

loc_803D3AD0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803D3AE4;
    }
}

loc_803D3AD4:
{
    r3 = (r28 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + 18496));
}

loc_803D3AE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803D3B54;
    }
}

loc_803D3AE4:
{
    r6 = 0;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    r5 = (r22 + 65536);
    r3 = r26;
    ctr = r30;
}

loc_803D3AFC:
{
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(0))) {
        goto loc_803D3B54;
    }
}

loc_803D3B00:
{
    r4 = MemoryInline::FlatRead8(r3);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_803D3B0C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(-1))) {
        goto loc_803D3B18;
    }
}

loc_803D3B10:
{
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r20));
    goto loc_803D3B54;
}

loc_803D3B18:
{
}

loc_803D3B1C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(-2))) {
        goto loc_803D3B38;
    }
}

loc_803D3B20:
{
    r4 = MemoryInline::FlatRead8((r5 + 18470));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_803D3B2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r4))) {
        goto loc_803D3B48;
    }
}

loc_803D3B30:
{
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r20));
    goto loc_803D3B54;
}

loc_803D3B38:
{
}

loc_803D3B3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r4))) {
        goto loc_803D3B48;
    }
}

loc_803D3B40:
{
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r20));
    goto loc_803D3B54;
}

loc_803D3B48:
{
    r6 = (r6 + 1);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803D3B00;
    }
}

loc_803D3B54:
{
    r27 = (r27 + 1);
    r28 = (r28 + 2340);
    r29 = (r29 + 1);
}

loc_803D3B64:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(4))) {
        goto loc_803D3AA4;
    }
}

loc_803D3B68:
{
    r26 = 0;
    r30 = (r1 + 8);
    r29 = r22;
    r28 = (r22 + 65536);
    r28 = (r28 + 18556);
    r27 = (r24 * 24);
    f31.d = MemoryInline::FlatReadFloat64((r2 + -4992));
    r31 = 1127219200;
    f30.d = MemoryInline::FlatReadFloat32((r2 + -4996));
    f29.d = MemoryInline::FlatReadFloat32((r2 + -5048));
    r20 = 0x80600000u;
    r21 = 0x80030000u;
    f27.d = MemoryInline::FlatReadFloat32((r2 + -4984));
    f28.d = MemoryInline::FlatReadFloat32((r2 + -4980));
}

loc_803D3BA0:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_803D3BA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803D3CD4;
    }
}

loc_803D3BAC:
{
}

loc_803D3BB0:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(1))) {
        goto loc_803D3C24;
    }
}

loc_803D3BB4:
{
    r0 = (r25 & 255);
}

loc_803D3BBC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(254))) {
        goto loc_803D3C24;
    }
}

loc_803D3BC0:
{
    // inline leaf 0x803F98DC (2 guest instruction(s))
    r3 = 23;
    // end of inlined leaf 0x803F98DC
    r0 = (r3 & 65535);
    stackword15 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    stackword16 = r31;
    MemoryInline::FlatWriteRam32((r1 + 16), r31);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword16), static_cast<uint32_t>(stackword15));
    f26.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    // inline leaf 0x803FA1C0 (2 guest instruction(s))
    r3 = 22;
    // end of inlined leaf 0x803FA1C0
    r0 = (r3 & 65535);
    stackword17 = r0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    stackword18 = r31;
    MemoryInline::FlatWriteRam32((r1 + 24), r31);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword18), static_cast<uint32_t>(stackword17));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    r3 = (r29 + 65536);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 18740));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    f0.d = PpcFmulsInline(f27.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f28.d));
    r0 = (r25 & 255);
    stackword19 = r0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    stackword20 = r31;
    MemoryInline::FlatWriteRam32((r1 + 32), r31);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword20), static_cast<uint32_t>(stackword19));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_803D3C20:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_803D3CD4;
    }
}

loc_803D3C24:
{
    r3 = (r29 + 65536);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 18656));
    SetCRFloatResident(cr, 0, f29.d, f1.d);
}

loc_803D3C30:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803D3C50;
    }
}

loc_803D3C34:
{
    r3 = r23;
    r4 = (r22 + 65536);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 27868));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = PpcFmulsInline(f30.d, f0.d);
    ctx->lr = 0x803D3C4Cu;
    if constexpr (KnownRegArgsCpuCall<0x803F8EECu>(&func_803F8EEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803F8EEC_30AF = func_803F8EEC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803F8EEC_30AF);
        r4 = static_cast<uint32_t>(regargs_result_803F8EEC_30AF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803F8EECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_803D3C5C;
}

loc_803D3C50:
{
    r3 = r23;
    f1.d = f29.d;
    ctx->lr = 0x803D3C5Cu;
    if constexpr (KnownRegArgsCpuCall<0x803F8EECu>(&func_803F8EEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803F8EEC_3AC7 = func_803F8EEC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803F8EEC_3AC7);
        r4 = static_cast<uint32_t>(regargs_result_803F8EEC_3AC7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803F8EECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_803D3C5C:
{
    r3 = (r28 + r27);
    r4 = r23;
    r5 = 255;
    ctx->lr = 0x803D3C6Cu;
    if constexpr (KnownRegArgsCpuCall<0x803FA6FCu>(&func_803FA6FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803FA6FC_44BD = func_803FA6FC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803FA6FC_44BD);
        r4 = static_cast<uint32_t>(regargs_result_803FA6FC_44BD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803FA6FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r19 = r3;
}

loc_803D3C74:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(0))) {
        goto loc_803D3CD4;
    }
}

loc_803D3C78:
{
}

loc_803D3C7C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_803D3CC4;
    }
}

loc_803D3C80:
{
    // inline leaf 0x803C99D8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16736));
    // end of inlined leaf 0x803C99D8
    r4 = (r20 + -21284);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    r6 = r19;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x803D3CA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = r22;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    r5 = (r21 + 50);
    r6 = r19;
    r7 = 0x80000000u;
    r8 = 1;
    if constexpr (KnownRegArgsCpuCall<0x803D2A84u>(&func_803D2A84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_803D2A84_5544 = func_803D2A84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803D2A84_5544);
        r4 = static_cast<uint32_t>(regargs_result_803D2A84_5544 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        InvokeDirectCpu<0x803D2A84u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    goto loc_803D3CD4;
}

loc_803D3CC4:
{
    r3 = (r22 + 65536);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 27868));
    r3 = (r29 + 65536);
    MemoryInline::FlatWriteFloat32((r3 + 18748), f0.d);
}

loc_803D3CD4:
{
    r30 = (r30 + 1);
    r29 = (r29 + 2340);
    r28 = (r28 + 2340);
    r26 = (r26 + 1);
}

loc_803D3CE8:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(4))) {
        goto loc_803D3BA0;
    }
}

loc_803D3CEC:
{
    r0 = 184;
    addr_psqx_803D3CF0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803D3CF0_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 176));
    r0 = 168;
    addr_psqx_803D3CFC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803D3CFC_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 160));
    r0 = 152;
    addr_psqx_803D3D08_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803D3D08_loc_0));
    f29.d = MemoryInline::FlatReadFloat64((r1 + 144));
    r0 = 136;
    addr_psqx_803D3D14_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803D3D14_loc_0));
    f28.d = MemoryInline::FlatReadFloat64((r1 + 128));
    r0 = 120;
    addr_psqx_803D3D20_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803D3D20_loc_0));
    f27.d = MemoryInline::FlatReadFloat64((r1 + 112));
    r0 = 104;
    addr_psqx_803D3D2C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803D3D2C_loc_0));
    f26.d = MemoryInline::FlatReadFloat64((r1 + 96));
    r11 = (r1 + 96);
    // inline leaf 0x804574B4 (14 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
    // end of inlined leaf 0x804574B4
    r0 = MemoryInline::FlatRead32((r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803D3A20(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803D3A20_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803D3A20 func_803D3A20 preserves=true fpr_mask=0x00000000
