#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005001C(CpuContext* ctx);
extern "C" double func_8005001C_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80050F10(CpuContext* ctx);
extern "C" uint64_t func_80050F10_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800DE360(CpuContext* ctx);
extern "C" uint64_t func_800DE360_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_8027A230(CpuContext* ctx);
extern "C" uint64_t func_8027A230_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_80366850(CpuContext* ctx);
extern "C" uint64_t func_80366850_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803683D8_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t addr_psqx_80368A74_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r22_rot_0 = 0;
    uint32_t r22_rot_1 = 0;
    uint32_t r22_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t stackword16 = 0;
    uint32_t stackword17 = 0;
    uint32_t stackword18 = 0;
    uint32_t stackword19 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[4].d = arg_f4;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_803683D8;

loc_803683D8:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 112);
    // inline leaf 0x80457464 (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    // end of inlined leaf 0x80457464
    r27 = r3;
    r28 = r4;
    r31 = MemoryInline::FlatRead32((r3 + 56));
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r30 = 0;
    r22 = 0;
    r29 = 0;
    r3 = 2;
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
    r20 = r3;
    r3 = 2;
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
    r25 = r3;
    r21 = 0;
    r24 = (r1 + 12);
    r23 = (r31 + r28);
    r18 = 1;
    r26 = 0;
    r19 = (r3 & 65535);
    goto loc_803684C0;
}

loc_80368448:
{
    MemoryInline::FlatWrite8(r24, static_cast<uint8_t>(r26));
    r0 = MemoryInline::FlatRead8(r20);
}

loc_80368454:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803684B4;
    }
}

loc_80368458:
{
    r0 = MemoryInline::FlatRead8((r20 + 1));
}

loc_80368460:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803684B4;
    }
}

loc_80368464:
{
    r3 = MemoryInline::FlatRead8((r20 + 22));
    r0 = MemoryInline::FlatRead8((r27 + 68));
}

loc_80368470:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803684B4;
    }
}

loc_80368474:
{
    r3 = r20;
    r4 = 2;
    ctx->lr = 0x80368480u;
    if constexpr (KnownRegArgsCpuCall<0x8027A230u>(&func_8027A230)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8027A230_1BBD = func_8027A230_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8027A230_1BBD);
        r4 = static_cast<uint32_t>(regargs_result_8027A230_1BBD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8027A230u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_80368484:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803684B4;
    }
}

loc_80368488:
{
    r0 = MemoryInline::FlatRead16((r20 + 182));
    r3 = (r0 & 255);
    r0 = MemoryInline::FlatRead8((r23 + 53));
}

loc_80368498:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_803684B4;
    }
}

loc_8036849C:
{
    MemoryInline::FlatWrite8(r24, static_cast<uint8_t>(r18));
    r3 = r20;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_803684AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803684B4;
    }
}

loc_803684B0:
{
    r22 = 1;
}

loc_803684B4:
{
    r24 = (r24 + 1);
    r21 = (r21 + 1);
    r20 = (r20 + 2848);
}

loc_803684C0:
{
}

loc_803684C4:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(r19))) {
        goto loc_80368448;
    }
}

loc_803684C8:
{
}

loc_803684CC:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_80368614;
    }
}

loc_803684D0:
{
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl4_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl4_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x800CFB10;
    }
}

loc_inl4_0x800CFB08:
{
    r3 = 0;
    goto loc_inl4_cont_800CFAF4;
}

loc_inl4_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl4_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl4_0x800CFB24;
    }
}

loc_inl4_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl4_cont_800CFAF4;
}

loc_inl4_0x800CFB24:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl4_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r20 = r3;
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r0 * 2848);
    r21 = (r20 + r0);
    r22_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r22 = (r22_rot_0 & -4);
    r3 = (r31 + r22);
    r24 = (r3 + 4);
    r3 = MemoryInline::FlatRead32(r24);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r21 + 64));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    r3 = MemoryInline::FlatRead32(r24);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    r3 = (r21 + 60);
    r4 = (r1 + 20);
    ctx->lr = 0x80368524u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F10u>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -8904));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8036852C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_803687B0;
    }
}

loc_80368534:
{
    r29 = (r31 + r22);
    r0 = MemoryInline::FlatRead32((r21 + 88));
    r3 = (r0 & 65535);
    r0 = MemoryInline::FlatRead32((r29 + 64));
    r0 = (r0 & 65535);
}

loc_8036854C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80368590;
    }
}

loc_80368550:
{
    r3 = (r31 + r28);
    r0 = MemoryInline::FlatRead8((r3 + 96));
}

loc_8036855C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80368590;
    }
}

loc_80368560:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r27 + 68));
}

loc_80368570:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80368590;
    }
}

loc_80368574:
{
    r3 = 0;
    r4 = MemoryInline::FlatRead32(r24);
    r4 = (r4 + 4);
    r5 = 18;
    r6 = (r31 + r28);
    r6 = MemoryInline::FlatRead8((r6 + 53));
    ctx->lr = 0x80368590u;
    if constexpr (KnownRegArgsCpuCall<0x800DE360u>(&func_800DE360)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DE360_3562 = func_800DE360_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DE360_3562);
        r4 = static_cast<uint32_t>(regargs_result_800DE360_3562 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DE360u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_80368590:
{
    r26 = (r31 + r22);
    r0 = MemoryInline::FlatRead8((r21 + 1411));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead32((r26 + 68));
}

loc_803685A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_803685E8;
    }
}

loc_803685A8:
{
    r3 = (r31 + r28);
    r0 = MemoryInline::FlatRead8((r3 + 96));
}

loc_803685B4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803685E8;
    }
}

loc_803685B8:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r27 + 68));
}

loc_803685C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_803685E8;
    }
}

loc_803685CC:
{
    r3 = 0;
    r4 = MemoryInline::FlatRead32(r24);
    r4 = (r4 + 4);
    r5 = 19;
    r6 = (r31 + r28);
    r6 = MemoryInline::FlatRead8((r6 + 53));
    ctx->lr = 0x803685E8u;
    if constexpr (KnownRegArgsCpuCall<0x800DE360u>(&func_800DE360)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DE360_3F59 = func_800DE360_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DE360_3F59);
        r4 = static_cast<uint32_t>(regargs_result_800DE360_3F59 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DE360u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_803685E8:
{
    r30 = MemoryInline::FlatRead8((r21 + 1411));
    r30 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    MemoryInline::FlatWrite32((r26 + 68), r30);
    r0 = MemoryInline::FlatRead32((r21 + 88));
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r29 + 64), r0);
    r0 = 1;
    r3 = (r31 + r28);
    MemoryInline::FlatWrite8((r3 + 96), static_cast<uint8_t>(r0));
    r29 = 1;
    goto loc_803687B0;
}

loc_80368614:
{
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl8_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl8_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl8_0x800CFB10;
    }
}

loc_inl8_0x800CFB08:
{
    r3 = 0;
    goto loc_inl8_cont_800CFAF4;
}

loc_inl8_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl8_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl8_0x800CFB24;
    }
}

loc_inl8_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl8_cont_800CFAF4;
}

loc_inl8_0x800CFB24:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl8_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r21 = r3;
    r20 = 0;
    r26 = (r1 + 12);
    r22_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r22 = (r22_rot_1 & -4);
    r24 = (r31 + r22);
    r24 = (r24 + 4);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -8904));
    r25 = (r25 & 65535);
    goto loc_803687A8;
}

loc_80368640:
{
    r0 = MemoryInline::FlatRead8(r21);
}

loc_80368648:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8036879C;
    }
}

loc_8036864C:
{
    r0 = MemoryInline::FlatRead8((r21 + 1));
}

loc_80368654:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8036879C;
    }
}

loc_80368658:
{
    r3 = MemoryInline::FlatRead8((r21 + 22));
    r0 = MemoryInline::FlatRead8((r27 + 68));
}

loc_80368664:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8036879C;
    }
}

loc_80368668:
{
    r3 = r21;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80368674:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8036879C;
    }
}

loc_80368678:
{
    r0 = MemoryInline::FlatRead8(r26);
}

loc_80368680:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8036879C;
    }
}

loc_80368684:
{
    r3 = MemoryInline::FlatRead32(r24);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r21 + 64));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    r3 = MemoryInline::FlatRead32(r24);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    r3 = (r21 + 60);
    r4 = (r1 + 20);
    ctx->lr = 0x803686B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F10u>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_803686B4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8036879C;
    }
}

loc_803686BC:
{
    r26 = (r31 + r22);
    r0 = MemoryInline::FlatRead32((r21 + 88));
    r3 = (r0 & 65535);
    r0 = MemoryInline::FlatRead32((r26 + 64));
    r0 = (r0 & 65535);
}

loc_803686D4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80368718;
    }
}

loc_803686D8:
{
    r3 = (r31 + r28);
    r0 = MemoryInline::FlatRead8((r3 + 96));
}

loc_803686E4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80368718;
    }
}

loc_803686E8:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r27 + 68));
}

loc_803686F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80368718;
    }
}

loc_803686FC:
{
    r3 = 0;
    r4 = MemoryInline::FlatRead32(r24);
    r4 = (r4 + 4);
    r5 = 18;
    r6 = (r31 + r28);
    r6 = MemoryInline::FlatRead8((r6 + 53));
    ctx->lr = 0x80368718u;
    if constexpr (KnownRegArgsCpuCall<0x800DE360u>(&func_800DE360)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DE360_5912 = func_800DE360_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DE360_5912);
        r4 = static_cast<uint32_t>(regargs_result_800DE360_5912 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DE360u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_80368718:
{
    r29 = (r31 + r22);
    r0 = MemoryInline::FlatRead8((r21 + 1411));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead32((r29 + 68));
}

loc_8036872C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_80368770;
    }
}

loc_80368730:
{
    r3 = (r31 + r28);
    r0 = MemoryInline::FlatRead8((r3 + 96));
}

loc_8036873C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80368770;
    }
}

loc_80368740:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r27 + 68));
}

loc_80368750:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80368770;
    }
}

loc_80368754:
{
    r3 = 0;
    r4 = MemoryInline::FlatRead32(r24);
    r4 = (r4 + 4);
    r5 = 19;
    r6 = (r31 + r28);
    r6 = MemoryInline::FlatRead8((r6 + 53));
    ctx->lr = 0x80368770u;
    if constexpr (KnownRegArgsCpuCall<0x800DE360u>(&func_800DE360)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DE360_6309 = func_800DE360_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DE360_6309);
        r4 = static_cast<uint32_t>(regargs_result_800DE360_6309 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DE360u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_80368770:
{
    r30 = MemoryInline::FlatRead8((r21 + 1411));
    r30 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    MemoryInline::FlatWrite32((r29 + 68), r30);
    r0 = MemoryInline::FlatRead32((r21 + 88));
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r26 + 64), r0);
    r0 = 1;
    r3 = (r31 + r28);
    MemoryInline::FlatWrite8((r3 + 96), static_cast<uint8_t>(r0));
    r29 = 1;
    goto loc_803687B0;
}

loc_8036879C:
{
    r26 = (r26 + 1);
    r20 = (r20 + 1);
    r21 = (r21 + 2848);
}

loc_803687A8:
{
}

loc_803687AC:
{
    if ((static_cast<int32_t>(r20) < static_cast<int32_t>(r25))) {
        goto loc_80368640;
    }
}

loc_803687B0:
{
}

loc_803687B4:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(1))) {
        goto loc_80368970;
    }
}

loc_803687B8:
{
    r3 = (r1 + 8);
    r4 = (r1 + 16);
    ctx->lr = 0x803687C4u;
    if constexpr (KnownRegArgsCpuCall<0x80366850u>(&func_80366850)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80366850_6BC1 = func_80366850_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80366850_6BC1);
        r4 = static_cast<uint32_t>(regargs_result_80366850_6BC1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80366850u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_803687C8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80368840;
    }
}

loc_803687CC:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3 = 0x805F0000u;
    r3 = (r3 + -6584);
    r3_addr_1 = (r3 + r0);
    r6 = MemoryInline::FlatRead32(r3_addr_1);
    r5 = 0;
    r4 = r6;
    r0 = MemoryInline::FlatRead32((r1 + 16));
    ctr = r0;
}

loc_803687F4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80368840;
    }
}

loc_803687F8:
{
    r3 = MemoryInline::FlatRead8(r4);
    r0 = MemoryInline::FlatRead8((r23 + 45));
}

loc_80368804:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80368834;
    }
}

loc_80368808:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
    r0 = MemoryInline::FlatRead8((r23 + 53));
}

loc_80368814:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80368834;
    }
}

loc_80368818:
{
    r3 = MemoryInline::FlatRead32(r24);
    r3 = (r3 + 4);
    r0 = (r5 * 24);
    r4 = (r6 + r0);
    r4 = (r4 + 4);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_7413 = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_7413;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    goto loc_80368840;
}

loc_80368834:
{
    r4 = (r4 + 24);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803687F8;
    }
}

loc_80368840:
{
}

loc_80368844:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(0))) {
        goto loc_803688B0;
    }
}

loc_80368848:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -9008));
    r0 = (r30 ^ -2147483648);
    stackword16 = r0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 1127219200;
    stackword17 = r0;
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword17), static_cast<uint32_t>(stackword16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9040));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9044));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9048));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9036));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9052));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    r0 = fctiwzword0;
    r0 = (r0 & 65535);
    r0 = (0 - r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = MemoryInline::FlatRead32(r24);
    MemoryInline::FlatWrite32((r3 + 40), r0);
    goto loc_80368914;
}

loc_803688B0:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -9008));
    r0 = (r30 ^ -2147483648);
    stackword18 = r0;
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r0 = 1127219200;
    stackword19 = r0;
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword19), static_cast<uint32_t>(stackword18));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9032));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9044));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9048));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9036));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9052));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r0 = fctiwzword1;
    r0 = (r0 & 65535);
    r0 = (0 - r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = MemoryInline::FlatRead32(r24);
    MemoryInline::FlatWrite32((r3 + 40), r0);
}

loc_80368914:
{
    r20 = (r31 + r22);
    r0 = MemoryInline::FlatRead32((r20 + 64));
    r0 = (r0 & 65535);
    r3 = MemoryInline::FlatRead32((r20 + 4));
    MemoryInline::FlatWrite32((r3 + 44), r0);
    r3 = (r1 + 20);
    r4 = 0x805F0000u;
    r4 = (r4 + -6556);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_83AE = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_83AE;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r1 + 20);
    r4 = MemoryInline::FlatRead32((r20 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 44));
    ctx->lr = 0x80368948u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32((r20 + 4));
    r3 = (r3 + 4);
    r4 = (r1 + 20);
    ctx->lr = 0x80368958u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r0 = MemoryInline::FlatRead32((r20 + 64));
    r0 = (r0 & 65535);
    r3 = r20;
    r3 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite32((r3 + 44), r0);
    goto loc_80368A70;
}

loc_80368970:
{
    r3 = (r1 + 8);
    r4 = (r1 + 16);
    ctx->lr = 0x8036897Cu;
    if constexpr (KnownRegArgsCpuCall<0x80366850u>(&func_80366850)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80366850_8B44 = func_80366850_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80366850_8B44);
        r4 = static_cast<uint32_t>(regargs_result_80366850_8B44 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80366850u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_80368980:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80368A70;
    }
}

loc_80368984:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r3 = 0x805F0000u;
    r3 = (r3 + -6584);
    r3_addr_3 = (r3 + r0);
    r20 = MemoryInline::FlatRead32(r3_addr_3);
    r5 = 0;
    r4 = r20;
    r0 = MemoryInline::FlatRead32((r1 + 16));
    ctr = r0;
}

loc_803689AC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80368A70;
    }
}

loc_803689B0:
{
    r3 = MemoryInline::FlatRead8(r4);
    r0 = MemoryInline::FlatRead8((r23 + 45));
}

loc_803689BC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80368A64;
    }
}

loc_803689C0:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
    r0 = MemoryInline::FlatRead8((r23 + 53));
}

loc_803689CC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80368A64;
    }
}

loc_803689D0:
{
    r18 = (r5 * 24);
    r21 = (r31 + r22);
    r4 = (r20 + r18);
    r0 = MemoryInline::FlatRead16((r4 + 16));
    r3 = MemoryInline::FlatRead32((r21 + 4));
    MemoryInline::FlatWrite32((r3 + 40), r0);
    r0 = MemoryInline::FlatRead16((r4 + 18));
    r3 = MemoryInline::FlatRead32((r21 + 4));
    MemoryInline::FlatWrite32((r3 + 44), r0);
    r3 = MemoryInline::FlatRead32((r21 + 4));
    r3 = (r3 + 4);
    r4 = (r4 + 4);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_94D3 = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_94D3;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r1 + 20);
    r4 = 0x805F0000u;
    r4 = (r4 + -6556);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_97A1 = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_97A1;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r1 + 20);
    r4 = MemoryInline::FlatRead32((r21 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 44));
    ctx->lr = 0x80368A24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32((r21 + 4));
    r3 = (r3 + 4);
    r4 = (r1 + 20);
    ctx->lr = 0x80368A34u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r0 = 0;
    r3 = (r31 + r28);
    MemoryInline::FlatWrite8((r3 + 96), static_cast<uint8_t>(r0));
    r5 = r21;
    r4 = (r20 + r18);
    r0 = MemoryInline::FlatRead16((r4 + 40));
    r3 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32((r3 + 40), r0);
    r0 = MemoryInline::FlatRead16((r4 + 42));
    r3 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32((r3 + 44), r0);
    goto loc_80368A70;
}

loc_80368A64:
{
    r4 = (r4 + 24);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803689B0;
    }
}

loc_80368A70:
{
    r0 = 120;
    addr_psqx_80368A74_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80368A74_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 112));
    r11 = (r1 + 112);
    // inline leaf 0x804574B0 (15 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    // end of inlined leaf 0x804574B0
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803683D8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803683D8_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803683D8 func_803683D8 preserves=true fpr_mask=0x00000000
