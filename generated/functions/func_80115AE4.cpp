#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005001C(CpuContext* ctx);
extern "C" double func_8005001C_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800E0880(CpuContext* ctx);
extern "C" uint64_t func_800E0880_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027492C(CpuContext* ctx);
extern "C" uint64_t func_8027492C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_80115AE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_80115F9C_loc_0 = 0;
    uint32_t addr_psqx_80115FA8_loc_0 = 0;
    uint32_t addr_psqx_80115FB4_loc_0 = 0;
    uint32_t addr_psqx_80115FC0_loc_0 = 0;
    uint32_t addr_psqx_80115FCC_loc_0 = 0;
    uint32_t addr_psqx_80115FD8_loc_0 = 0;
    uint32_t addr_psqx_80115FE4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r0_subfic_ra_4 = 0;
    uint32_t r0_subfic_ra_5 = 0;
    uint32_t r0_subfic_ra_6 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t stackword18 = 0;
    uint32_t stackword19 = 0;
    uint32_t stackword20 = 0;
    uint32_t stackword21 = 0;
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
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
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
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80115AE4;

loc_80115AE4:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -304), 0, 312u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -304), r1);
    r1 = (r1 + -304);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 308u, (r1 + 308), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 288u, (r1 + 288), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 272u, (r1 + 272), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 256u, (r1 + 256), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 240u, (r1 + 240), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 224u, (r1 + 224), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 208u, (r1 + 208), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 192u, (r1 + 192), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    r11 = (r1 + 192);
    // inline leaf 0x8045745C (17 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, false, true);
    // end of inlined leaf 0x8045745C
    r19 = r3;
    r3 = (r1 + 16);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 32);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r20 = MemoryInline::FlatRead32((r19 + 56));
    r0 = MemoryInline::FlatRead8((r19 + 2));
}

loc_80115B50:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80115B70;
    }
}

loc_80115B54:
{
    r3 = MemoryInline::FlatRead32((r19 + 48));
}

loc_80115B5C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80115B70;
    }
}

loc_80115B60:
{
    r0 = MemoryInline::FlatRead8((r3 + 1630));
    MemoryInline::FlatWrite8((r19 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 22));
    MemoryInline::FlatWrite8((r19 + 68), static_cast<uint8_t>(r0));
}

loc_80115B70:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r19 + 12), r0);
    r21 = 0;
    r27 = r20;
    r26 = (r20 + 12);
    r25 = r20;
    r24 = (r20 + 4);
    f26.d = MemoryInline::FlatReadFloat64((r2 + -28752));
    r28 = 1127219200;
    f27.d = MemoryInline::FlatReadFloat32((r2 + -28776));
    f28.d = MemoryInline::FlatReadFloat32((r2 + -28772));
    r29 = 255;
    f29.d = MemoryInline::FlatReadFloat32((r2 + -28768));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -28764));
    r3 = 0x805A0000u;
    r30 = (r3 + 2604);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -28760));
    r3 = 0x805A0000u;
    r31 = (r3 + 2504);
    f25.d = MemoryInline::FlatReadFloat32((r2 + -28784));
    goto loc_80115F8C;
}

loc_80115BC4:
{
    r3 = MemoryInline::FlatRead8((r19 + 2));
    r0 = (r3 + -3);
}

loc_80115BD0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80115D28;
    }
}

loc_80115BD4:
{
    r3 = r19;
    r4 = 0;
    ctx->lr = 0x80115BE0u;
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
    InvokeDirectCpu<0x800F9358u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_80115BE4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80115C00;
    }
}

loc_80115BE8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r19 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r19 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r19 + 5), static_cast<uint8_t>(r0));
    goto loc_80115F98;
}

loc_80115C00:
{
    r17 = MemoryInline::FlatRead32((r19 + 48));
    r3 = r17;
    if constexpr (KnownRegArgsCpuCall<0x8027492Cu>(&func_8027492C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8027492C_2124 = func_8027492C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027492C_2124);
        r4 = static_cast<uint32_t>(regargs_result_8027492C_2124 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027492Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80115C14:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80115CD8;
    }
}

loc_80115C18:
{
    r3 = MemoryInline::FlatRead16((r17 + 900));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80115C20:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(60))) {
        goto loc_80115C2C;
    }
}

loc_80115C24:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28780));
    goto loc_80115C48;
}

loc_80115C2C:
{
    r0 = (r3 + -60);
    r0 = (r0 ^ -2147483648);
    stackword18 = r0;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    stackword19 = r28;
    MemoryInline::FlatWriteRam32((r1 + 80), r28);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword19), static_cast<uint32_t>(stackword18));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f27.d));
}

loc_80115C48:
{
    SetCRFloatResident(cr, 0, f0.d, f28.d);
}

loc_80115C4C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80115C54;
    }
}

loc_80115C50:
{
    f0.d = f28.d;
}

loc_80115C54:
{
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r29));
    f0.d = PpcFmulsInline(f29.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 88), f0.d);
    r0 = fctiwzword0;
    r0_subfic_ra_2 = r0;
    r0 = (255 - r0_subfic_ra_2);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f0.d);
    r0 = fctiwzword1;
    r0_subfic_ra_3 = r0;
    r0 = (255 - r0_subfic_ra_3);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r0));
}

loc_80115C8C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(20))) {
        goto loc_80115C98;
    }
}

loc_80115C90:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28780));
    goto loc_80115CB4;
}

loc_80115C98:
{
    r0 = (r3 + -20);
    r0 = (r0 ^ -2147483648);
    stackword20 = r0;
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    stackword21 = r28;
    MemoryInline::FlatWriteRam32((r1 + 104), r28);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword21), static_cast<uint32_t>(stackword20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f30.d));
}

loc_80115CB4:
{
    SetCRFloatResident(cr, 0, f0.d, f28.d);
}

loc_80115CB8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80115CC0;
    }
}

loc_80115CBC:
{
    f0.d = f28.d;
}

loc_80115CC0:
{
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f0.d);
    r0 = fctiwzword2;
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    goto loc_80115D08;
}

loc_80115CD8:
{
    r0 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r30 + r0);
    r0 = MemoryInline::FlatRead8(r3);
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 2));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 3));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
}

loc_80115D08:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r4 = 1;
    r5 = 4;
    r6 = (r1 + 8);
    r7 = 0;
    ctx->lr = 0x80115D28u;
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
    InvokeDirectCpu<0x800E2950u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
}

loc_80115D28:
{
    r3 = r19;
    r4 = 0;
    ctx->lr = 0x80115D34u;
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
    InvokeDirectCpu<0x800F9358u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_80115D38:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80115D54;
    }
}

loc_80115D3C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r19 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r19 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r19 + 5), static_cast<uint8_t>(r0));
    goto loc_80115F98;
}

loc_80115D54:
{
    r23 = MemoryInline::FlatRead32((r19 + 48));
    r3 = MemoryInline::FlatRead8((r23 + 1630));
    r0 = (r3 + -3);
}

loc_80115D64:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80115DA0;
    }
}

loc_80115D68:
{
}

loc_80115D6C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80115D7C;
    }
}

loc_80115D70:
{
}

loc_80115D74:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80115DA0;
    }
}

loc_80115D78:
{
    goto loc_80115DC0;
}

loc_80115D7C:
{
    r3 = MemoryInline::FlatRead32((r20 + 4));
    r4 = 1;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryInline::FlatRead32((r20 + 4));
    r4 = 2;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80115DC0;
}

loc_80115DA0:
{
    r3 = MemoryInline::FlatRead32((r20 + 4));
    r4 = 1;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryInline::FlatRead32((r20 + 4));
    r4 = 2;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
}

loc_80115DC0:
{
    r3 = r23;
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    r0 = MemoryInline::FlatRead16((r23 + 1634));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80115DD0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80115DF0;
    }
}

loc_80115DD4:
{
    r0 = MemoryInline::FlatRead16((r23 + 1636));
    r3 = (r3 & 65535);
}

loc_80115DE0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_80115E3C;
    }
}

loc_80115DE4:
{
    r0 = MemoryInline::FlatRead16((r23 + 1638));
}

loc_80115DEC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_80115E3C;
    }
}

loc_80115DF0:
{
    r22 = 0;
    r3 = MemoryInline::FlatRead32((r23 + 316));
    r3 = (r3 + 4);
    r4 = 7;
    r5 = r26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0A78u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r16 = 0;
    r17 = r26;
    r18 = 0;
}

loc_80115E14:
{
    r3 = (r18 + r26);
    r3 = (r3 + 48);
    r4 = r17;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80053340u>(ctx);
    r17 = (r17 + 48);
    r18 = (r18 + 48);
    r16 = (r16 + 1);
}

loc_80115E34:
{
    if ((static_cast<int32_t>(r16) < static_cast<int32_t>(5))) {
        goto loc_80115E14;
    }
}

loc_80115E38:
{
    goto loc_80115E40;
}

loc_80115E3C:
{
    r22 = 1;
}

loc_80115E40:
{
    r16 = 5;
    r18 = 240;
    r17 = (r26 + 240);
}

loc_80115E4C:
{
    r3 = r17;
    r4 = (r18 + r26);
    r4 = (r4 + -48);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80053340u>(ctx);
    r18 = (r18 + -48);
    r17 = (r17 + -48);
    r16 = (r16 + -1);
}

loc_80115E6C:
{
    if ((static_cast<int32_t>(r16) > static_cast<int32_t>(0))) {
        goto loc_80115E4C;
    }
}

loc_80115E70:
{
    r3 = MemoryInline::FlatRead32((r23 + 316));
    r3 = (r3 + 4);
    r4 = 7;
    r5 = r26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0A78u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryInline::FlatRead8((r23 + 1));
    MemoryInline::FlatWrite8((r19 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r23 + 84));
    MemoryInline::FlatWrite32((r19 + 36), r0);
    r0 = MemoryInline::FlatRead32((r23 + 88));
    MemoryInline::FlatWrite32((r19 + 40), r0);
    r0 = MemoryInline::FlatRead32((r23 + 92));
    MemoryInline::FlatWrite32((r19 + 44), r0);
    r3 = (r1 + 16);
    r0 = MemoryInline::FlatRead8((r19 + 2));
    r0 = (r0 * 12);
    r4 = (r31 + r0);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_8005001C_4BD6 = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_4BD6;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
    }
}

loc_80115EBC:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(1))) {
        goto loc_80115ECC;
    }
}

loc_80115EC0:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = PpcFmulsInline(f0.d, f25.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
}

loc_80115ECC:
{
    r3 = (r1 + 16);
    r4 = r26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r25 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r25 + 24), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r25 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r25 + 40), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r25 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r25 + 56), f0.d);
    r3 = r26;
    r4 = (r19 + 24);
    // inline leaf 0x80101470 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 44));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    // end of inlined leaf 0x80101470
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r3 = (r3 + 4);
    r4 = (r19 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead32((r19 + 36));
    r3 = MemoryInline::FlatRead32((r27 + 4));
    MemoryInline::FlatWrite32((r3 + 40), r0);
    r0 = MemoryInline::FlatRead32((r19 + 40));
    r3 = MemoryInline::FlatRead32((r27 + 4));
    MemoryInline::FlatWrite32((r3 + 44), r0);
    r0 = MemoryInline::FlatRead32((r19 + 44));
    r3 = MemoryInline::FlatRead32((r27 + 4));
    MemoryInline::FlatWrite32((r3 + 48), r0);
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r4 = r26;
    r5 = 0;
    ctx->lr = 0x80115F58u;
    if constexpr (KnownRegArgsCpuCall<0x800E0880u>(&func_800E0880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_800E0880_5774 = func_800E0880_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E0880_5774);
        r4 = static_cast<uint32_t>(regargs_result_800E0880_5774 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E0880u>(ctx);
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
        cr = ctx->cr;
    }
}

loc_80115F5C:
{
    if ((static_cast<uint32_t>(r22) != static_cast<uint32_t>(1))) {
        goto loc_80115F78;
    }
}

loc_80115F60:
{
    r3 = r19;
    r4 = r24;
    r5 = 2;
    r6 = 1;
    r7 = 0;
    ctx->lr = 0x80115F78u;
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
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
}

loc_80115F78:
{
    r27 = (r27 + 4);
    r26 = (r26 + 288);
    r25 = (r25 + 288);
    r24 = (r24 + 4);
    r21 = (r21 + 1);
}

loc_80115F8C:
{
    r0 = MemoryInline::FlatRead32(r20);
}

loc_80115F94:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(r0))) {
        goto loc_80115BC4;
    }
}

loc_80115F98:
{
    r0 = 296;
    addr_psqx_80115F9C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80115F9C_loc_0));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 192), 0, 120u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 96u, (r1 + 288));
    r0 = 280;
    addr_psqx_80115FA8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80115FA8_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 80u, (r1 + 272));
    r0 = 264;
    addr_psqx_80115FB4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80115FB4_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 64u, (r1 + 256));
    r0 = 248;
    addr_psqx_80115FC0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80115FC0_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 48u, (r1 + 240));
    r0 = 232;
    addr_psqx_80115FCC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80115FCC_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 32u, (r1 + 224));
    r0 = 216;
    addr_psqx_80115FD8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80115FD8_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 16u, (r1 + 208));
    r0 = 200;
    addr_psqx_80115FE4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80115FE4_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 0u, (r1 + 192));
    r11 = (r1 + 192);
    // inline leaf 0x804574A8 (17 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, true, false);
    // end of inlined leaf 0x804574A8
    r0 = MemoryInline::ReadResolved32(guest_range_3, 116u, (r1 + 308));
    ctx->lr = r0;
    r1 = (r1 + 304);
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

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFE003FFF fpr_write=0xFE003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80115AE4 func_80115AE4 preserves=true fpr_mask=0x00000000
