#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80074B0C(CpuContext* ctx);
extern "C" uint64_t func_80074B0C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8007F7E0(CpuContext* ctx);
extern "C" uint64_t func_8007F7E0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80081778(CpuContext* ctx);
extern "C" uint64_t func_80081778_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802BE400(CpuContext* ctx);
extern "C" uint32_t func_802BE400_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802BE450(CpuContext* ctx);
extern "C" uint32_t func_802BE450_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" void func_800E3E80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_800E418C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f31 = ctx->fpr[31];
    const uint32_t r19_entry = r19;
    const uint32_t r20_entry = r20;
    const uint32_t r21_entry = r21;
    const uint32_t r22_entry = r22;
    const uint32_t r23_entry = r23;
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800E3E80;

loc_800E3E80:
{
    MemoryInline::FlatWriteRam32((r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 176), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 176);
    // inline leaf 0x80457468 (14 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    // end of inlined leaf 0x80457468
    r19 = r3;
    r20 = r4;
    r3 = (r1 + 64);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 16);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    ctx->lr = 0x800E3EB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804B61A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    r3 = r19;
    r4 = (r1 + 64);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800753F8u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = r19;
    // inline leaf 0x80047298 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80047298
    r27 = r3;
    // inline leaf 0x802AFF9C (8 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r0 = MemoryInline::FlatRead8((r3 + 3092));
    r3 = (r0 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x802AFF9C
    r28 = r3;
}

loc_800E3EDC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800E3EF8;
    }
}

loc_800E3EE0:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -30280));
    r3 = r19;
    r4 = 0;
    r5 = (r1 + 8);
    r6 = 0;
    ctx->lr = 0x800E3EF8u;
    if constexpr (KnownRegArgsCpuCall<0x80074B0Cu>(&func_80074B0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80074B0C_158F = func_80074B0C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80074B0C_158F);
        r4 = static_cast<uint32_t>(regargs_result_80074B0C_158F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x80074B0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800E3EF8:
{
    // inline leaf 0x802AFFBC (8 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r0 = MemoryInline::FlatRead8((r3 + 3092));
    r3 = (r0 & 2);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x802AFFBC
    r29 = r3;
    r23 = 0;
    r26 = (r13 + -17536);
    r25 = (r13 + -17528);
    r30 = 0;
    r31 = 1;
    r19 = 2;
}

loc_800E3F18:
{
    r24 = MemoryInline::FlatRead32(r26);
    r22 = 0;
    goto loc_800E4168;
}

loc_800E3F24:
{
    r0 = MemoryInline::FlatRead16((r24 + 30));
    r0 = (r0 & 512);
}

loc_800E3F30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800E3F44;
    }
}

loc_800E3F34:
{
    // inline leaf 0x800D0788 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2167));
    // end of inlined leaf 0x800D0788
    r0 = (r3 & 255);
}

loc_800E3F40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800E4160;
    }
}

loc_800E3F44:
{
    r0 = MemoryInline::FlatRead16((r24 + 30));
    r0 = (r0 & 3080);
}

loc_800E3F4C:
{
}

loc_800E3F50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E3FB0;
    }
}

loc_800E3F54:
{
    ctx->lr = 0x800E3F58u;
    if constexpr (KnownRegArgsCpuCall<0x802BE400u>(&func_802BE400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802BE400_1F48 = func_802BE400_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BE400_1F48;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BE400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_800E3F5C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800E3FB0;
    }
}

loc_800E3F60:
{
    r0 = MemoryInline::FlatRead16((r24 + 30));
    r0 = (r0 & 1024);
}

loc_800E3F6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E3F80;
    }
}

loc_800E3F70:
{
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_800E3F7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E4160;
    }
}

loc_800E3F80:
{
    r0 = MemoryInline::FlatRead16((r24 + 30));
    r0 = (r0 & 2048);
}

loc_800E3F8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E3FA0;
    }
}

loc_800E3F90:
{
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_800E3F9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800E4160;
    }
}

loc_800E3FA0:
{
    r0 = MemoryInline::FlatRead16((r24 + 30));
    r0 = (r0 & 8);
}

loc_800E3FAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800E4160;
    }
}

loc_800E3FB0:
{
    r0 = MemoryInline::FlatRead16((r24 + 30));
    r0 = (r0 & 32);
}

loc_800E3FBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E3FCC;
    }
}

loc_800E3FC0:
{
    ctx->lr = 0x800E3FC4u;
    if constexpr (KnownRegArgsCpuCall<0x802BE450u>(&func_802BE450)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802BE450_28E5 = func_802BE450_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BE450_28E5;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BE450u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_800E3FC8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_800E4160;
    }
}

loc_800E3FCC:
{
    MemoryInline::FlatWrite8((r24 + 8), static_cast<uint8_t>(r30));
    r0 = (r20 & 255);
}

loc_800E3FD8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_800E3FEC;
    }
}

loc_800E3FDC:
{
    r0 = MemoryInline::FlatRead16((r24 + 30));
    r0 = (r0 & 2);
}

loc_800E3FE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E4160;
    }
}

loc_800E3FEC:
{
    r0 = MemoryInline::FlatRead8((r24 + 28));
}

loc_800E3FF4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_800E405C;
    }
}

loc_800E3FF8:
{
    r21 = MemoryInline::FlatRead32((r24 + 24));
    r0 = MemoryInline::FlatRead8((r24 + 9));
}

loc_800E4004:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800E403C;
    }
}

loc_800E4008:
{
    r0 = MemoryInline::FlatRead16((r24 + 30));
    r0 = (r0 & 64);
}

loc_800E4014:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E4030;
    }
}

loc_800E4018:
{
    r12 = MemoryInline::FlatRead32((r24 + 32));
}

loc_800E4020:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_800E4030;
    }
}

loc_800E4024:
{
    r3 = r24;
    ctr = r12;
    ctx->lr = 0x800E4030u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
}

loc_800E4030:
{
    r3 = r21;
    ctx->lr = 0x800E4038u;
    if constexpr (KnownRegArgsCpuCall<0x8007F7E0u>(&func_8007F7E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8007F7E0_3614 = func_8007F7E0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8007F7E0_3614);
        r4 = static_cast<uint32_t>(regargs_result_8007F7E0_3614 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8007F7E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
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
    MemoryInline::FlatWrite8((r24 + 9), static_cast<uint8_t>(r31));
}

loc_800E403C:
{
    r3 = r21;
    r4 = 4;
    r5 = 0;
    r6 = (r1 + 64);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x800E405Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
}

loc_800E405C:
{
    r3 = r24;
    r4 = (r1 + 64);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E41ACu>(ctx);
    r3 = ctx->gpr[3];
}

loc_800E406C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E4160;
    }
}

loc_800E4070:
{
    r3 = MemoryInline::FlatRead8((r24 + 29));
    r0 = (r3 + -1);
}

loc_800E407C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_800E408C;
    }
}

loc_800E4080:
{
}

loc_800E4084:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E4128;
    }
}

loc_800E4088:
{
    goto loc_800E414C;
}

loc_800E408C:
{
    r0 = MemoryInline::FlatRead16((r24 + 30));
    r0 = (r0 & 1);
}

loc_800E4098:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E40A4;
    }
}

loc_800E409C:
{
    f1.d = MemoryInline::FlatReadFloat32((r24 + 16));
    goto loc_800E40E4;
}

loc_800E40A4:
{
    r0 = MemoryInline::FlatRead8((r24 + 28));
}

loc_800E40AC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_800E40C8;
    }
}

loc_800E40B0:
{
}

loc_800E40B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_800E40E0;
    }
}

loc_800E40B8:
{
    r3 = MemoryInline::FlatRead32((r24 + 24));
    // inline leaf 0x800A6124 (2 guest instruction(s))
    r3 = (r3 + 88);
    // end of inlined leaf 0x800A6124
    f1.d = MemoryInline::FlatReadFloat32((r3 + 28));
    goto loc_800E40E4;
}

loc_800E40C8:
{
    r3 = r21;
    r4 = 0;
    r5 = (r1 + 16);
    ctx->lr = 0x800E40D8u;
    if constexpr (KnownRegArgsCpuCall<0x80081778u>(&func_80081778)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_80081778_4C2E = func_80081778_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80081778_4C2E);
        r4 = static_cast<uint32_t>(regargs_result_80081778_4C2E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80081778u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    f1.d = MemoryInline::FlatReadFloat32((r1 + 44));
    goto loc_800E40E4;
}

loc_800E40E0:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30280));
}

loc_800E40E4:
{
}

loc_800E40E8:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(1))) {
        goto loc_800E414C;
    }
}

loc_800E40EC:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_800E40F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4110;
    }
}

loc_800E40F8:
{
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_800E40FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4108;
    }
}

loc_800E4100:
{
    MemoryInline::FlatWrite8((r24 + 8), static_cast<uint8_t>(r19));
    goto loc_800E414C;
}

loc_800E4108:
{
    MemoryInline::FlatWrite8((r24 + 8), static_cast<uint8_t>(r31));
    goto loc_800E414C;
}

loc_800E4110:
{
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_800E4114:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4120;
    }
}

loc_800E4118:
{
    MemoryInline::FlatWrite8((r24 + 8), static_cast<uint8_t>(r31));
    goto loc_800E414C;
}

loc_800E4120:
{
    MemoryInline::FlatWrite8((r24 + 8), static_cast<uint8_t>(r19));
    goto loc_800E414C;
}

loc_800E4128:
{
}

loc_800E412C:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(1))) {
        goto loc_800E414C;
    }
}

loc_800E4130:
{
    r0 = MemoryInline::FlatRead16((r24 + 30));
    r0 = (r0 & 4);
}

loc_800E413C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E4148;
    }
}

loc_800E4140:
{
    MemoryInline::FlatWrite8((r24 + 8), static_cast<uint8_t>(r19));
    goto loc_800E414C;
}

loc_800E4148:
{
    MemoryInline::FlatWrite8((r24 + 8), static_cast<uint8_t>(r31));
}

loc_800E414C:
{
    r3 = r24;
    r4 = MemoryInline::FlatRead8((r24 + 29));
    f1.d = MemoryInline::FlatReadFloat32((r27 + 180));
    f2.d = MemoryInline::FlatReadFloat32((r27 + 184));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x800E42E8u>(ctx);
}

loc_800E4160:
{
    r22 = (r22 + 1);
    r24 = (r24 + 52);
}

loc_800E4168:
{
    r0 = MemoryInline::FlatRead32(r25);
}

loc_800E4170:
{
    if ((static_cast<uint32_t>(r22) < static_cast<uint32_t>(r0))) {
        goto loc_800E3F24;
    }
}

loc_800E4174:
{
    r26 = (r26 + 4);
    r25 = (r25 + 4);
    r23 = (r23 + 1);
}

loc_800E4184:
{
    if ((static_cast<uint32_t>(r23) < static_cast<uint32_t>(2))) {
        goto loc_800E3F18;
    }
}

loc_800E4188:
{
    r0 = 184;
    addr_psqx_800E418C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800E418C_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 176));
    r11 = (r1 + 176);
    // inline leaf 0x804574B4 (14 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
    // end of inlined leaf 0x804574B4
    r0 = MemoryInline::FlatRead32((r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->gpr[19] = r19_entry;
    ctx->gpr[20] = r20_entry;
    ctx->gpr[21] = r21_entry;
    ctx->gpr[22] = r22_entry;
    ctx->gpr[23] = r23_entry;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x0007FFFF gpr_return=0x00000018 fpr_read=0xFC00FFFF fpr_write=0xFC00FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800E3E80 func_800E3E80 preserves=true fpr_mask=0x00000000
