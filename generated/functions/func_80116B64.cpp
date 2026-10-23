#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E0C44(CpuContext* ctx);
extern "C" uint64_t func_800E0C44_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80464560(CpuContext* ctx);
extern "C" uint64_t func_80464560_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_80116B64(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_80116D8C_loc_0 = 0;
    uint32_t addr_psqx_80116D98_loc_0 = 0;
    uint32_t addr_psqx_80116DA4_loc_0 = 0;
    uint32_t addr_psqx_80116DB0_loc_0 = 0;
    uint32_t addr_psqx_80116DBC_loc_0 = 0;
    uint32_t addr_psqx_80116DC8_loc_0 = 0;
    uint32_t addr_psqx_80116DD4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword13 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80116B64;

loc_80116B64:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -176), 0, 184u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 180u, (r1 + 180), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 160u, (r1 + 160), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 144u, (r1 + 144), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 128u, (r1 + 128), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 112u, (r1 + 112), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 96u, (r1 + 96), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 80u, (r1 + 80), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 64u, (r1 + 64), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    r11 = (r1 + 64);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r25 = r3;
    r26 = MemoryInline::FlatRead32((r3 + 56));
    r27 = 0;
    r30 = r26;
    r29 = r26;
    r28 = (r26 + 4);
    f25.d = MemoryInline::FlatReadFloat64((r2 + -28712));
    r31 = 1127219200;
    f26.d = MemoryInline::FlatReadFloat32((r2 + -28732));
    f27.d = MemoryInline::FlatReadFloat32((r2 + -28728));
    f28.d = MemoryInline::FlatReadFloat32((r2 + -28736));
    r24 = 0;
    f29.d = MemoryInline::FlatReadFloat32((r2 + -28724));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -28716));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -28720));
    goto loc_80116D7C;
}

loc_80116BF0:
{
    r3 = MemoryInline::FlatRead16((r30 + 34));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 34), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r29 + 56));
    r5 = MemoryInline::FlatRead8((r4 + 16));
    r3 = MemoryInline::FlatRead16((r30 + 34));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead8((r4 + 17));
    r0 = (r5 + r0);
}

loc_80116C14:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_80116C1C;
    }
}

loc_80116C18:
{
    MemoryInline::FlatWrite16((r30 + 34), static_cast<uint16_t>(r5));
}

loc_80116C1C:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    ctx->lr = 0x80116C24u;
    if constexpr (KnownRegArgsCpuCall<0x800E0C44u>(&func_800E0C44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800E0C44_1925 = func_800E0C44_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E0C44_1925);
        r4 = static_cast<uint32_t>(regargs_result_800E0C44_1925 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E0C44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r23 = r3;
    r22 = 0;
    goto loc_80116C64;
}

loc_80116C30:
{
    r0 = MemoryInline::FlatRead16((r30 + 34));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80116C38:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(r0))) {
        goto loc_80116C50;
    }
}

loc_80116C3C:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = r22;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80116C60;
}

loc_80116C50:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = r22;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
}

loc_80116C60:
{
    r22 = (r22 + 1);
}

loc_80116C64:
{
}

loc_80116C68:
{
    if ((static_cast<uint32_t>(r22) < static_cast<uint32_t>(r23))) {
        goto loc_80116C30;
    }
}

loc_80116C6C:
{
    r3 = MemoryInline::FlatRead32((r25 + 16));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r25 + 16), r0);
    r3 = MemoryInline::FlatRead16((r30 + 24));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 24), static_cast<uint16_t>(r0));
    r23 = MemoryInline::FlatRead32((r29 + 56));
    r3 = MemoryInline::FlatRead16((r30 + 24));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead8((r23 + 24));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r0 & 65535);
    r0 = (r0 ^ -2147483648);
    stackword12 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    stackword13 = r31;
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword13), static_cast<uint32_t>(stackword12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f25.d));
    f0.d = PpcFmulsInline(f26.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f27.d));
    ctx->lr = 0x80116CB8u;
    if constexpr (KnownRegArgsCpuCall<0x80464560u>(&func_80464560)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[25] = f25;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80464560_2722 = func_80464560_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80464560_2722);
        r4 = static_cast<uint32_t>(regargs_result_80464560_2722 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        f25 = ctx->fpr[25];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[25] = f25;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80464560u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        f25 = ctx->fpr[25];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    SetCRFloatResident(cr, 0, f1.d, f28.d);
}

loc_80116CBC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80116CD0;
    }
}

loc_80116CC4:
{
    SetCRFloatResident(cr, 0, f1.d, f29.d);
}

loc_80116CC8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80116D10;
    }
}

loc_80116CD0:
{
    r0 = MemoryInline::FlatRead16((r23 + 26));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80116CD8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80116D10;
    }
}

loc_80116CDC:
{
    r3 = MemoryInline::FlatRead16((r30 + 44));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead16((r30 + 44));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = MemoryInline::FlatRead32((r29 + 56));
    r0 = MemoryInline::FlatRead16((r3 + 26));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80116CF8:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_80116D04;
    }
}

loc_80116CFC:
{
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r24));
    goto loc_80116D10;
}

loc_80116D04:
{
    r3 = MemoryInline::FlatRead16((r30 + 24));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r30 + 24), static_cast<uint16_t>(r0));
}

loc_80116D10:
{
    r4 = MemoryInline::FlatRead32((r29 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 20));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PpcFmulsInline(f27.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f30.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r0 = fctiwzword0;
    r3 = (r0 & 65535);
    r0 = MemoryInline::FlatRead16((r4 + 18));
    r0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite32((r3 + 44), r0);
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = 0;
    ctx->lr = 0x80116D54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E078Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = r25;
    r4 = r28;
    r5 = 2;
    r6 = 1;
    r7 = 0;
    ctx->lr = 0x80116D6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    r30 = (r30 + 2);
    r29 = (r29 + 4);
    r28 = (r28 + 4);
    r27 = (r27 + 1);
}

loc_80116D7C:
{
    r0 = MemoryInline::FlatRead32(r26);
}

loc_80116D84:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r0))) {
        goto loc_80116BF0;
    }
}

loc_80116D88:
{
    r0 = 168;
    addr_psqx_80116D8C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80116D8C_loc_0));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 64), 0, 120u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 96u, (r1 + 160));
    r0 = 152;
    addr_psqx_80116D98_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80116D98_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 80u, (r1 + 144));
    r0 = 136;
    addr_psqx_80116DA4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80116DA4_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 64u, (r1 + 128));
    r0 = 120;
    addr_psqx_80116DB0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80116DB0_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 48u, (r1 + 112));
    r0 = 104;
    addr_psqx_80116DBC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80116DBC_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 32u, (r1 + 96));
    r0 = 88;
    addr_psqx_80116DC8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80116DC8_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 16u, (r1 + 80));
    r0 = 72;
    addr_psqx_80116DD4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80116DD4_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 0u, (r1 + 64));
    r11 = (r1 + 64);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::ReadResolved32(guest_range_3, 116u, (r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80116B64 func_80116B64 preserves=true fpr_mask=0x00000000
