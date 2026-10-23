#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005D27C(CpuContext* ctx);
extern "C" uint64_t func_8005D27C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8005D324(CpuContext* ctx);
extern "C" uint32_t func_8005D324_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8006FF2C(CpuContext* ctx);
extern "C" uint64_t func_8006FF2C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80070084(CpuContext* ctx);
extern "C" uint64_t func_80070084_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80071070(CpuContext* ctx);
extern "C" uint64_t func_80071070_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800710C8(CpuContext* ctx);
extern "C" uint64_t func_800710C8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80071194(CpuContext* ctx);
extern "C" uint64_t func_80071194_ra38_3e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);
extern "C" void func_80071BD4(CpuContext* ctx);
extern "C" uint32_t func_80071BD4_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80071C38(CpuContext* ctx);
extern "C" uint32_t func_80071C38_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80071C9C(CpuContext* ctx);
extern "C" void func_80071C9C_ra8_0_0_0(CpuContext*, uint32_t);
extern "C" void func_80071CA0(CpuContext* ctx);
extern "C" uint64_t func_80071CA0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80072734(CpuContext* ctx);
extern "C" uint64_t func_80072734_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80502E80(CpuContext* ctx);
extern "C" uint32_t func_80502E80_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80502E88(CpuContext* ctx);
extern "C" uint32_t func_80502E88_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80071BD4_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80502E80_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80502E88_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" void func_80071CAC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_80072714_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;
    uint32_t r9_addr_3 = 0;
    uint32_t r9_addr_4 = 0;
    uint32_t r9_addr_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
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
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f31 = ctx->fpr[31];
    const uint32_t r14_entry = r14;
    const uint32_t r15_entry = r15;
    const uint32_t r16_entry = r16;
    const uint32_t r17_entry = r17;
    const uint32_t r18_entry = r18;
    const uint32_t r19_entry = r19;
    const uint32_t r20_entry = r20;
    const uint32_t r21_entry = r21;
    const uint32_t r22_entry = r22;
    const uint32_t r23_entry = r23;
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80071CAC;

loc_80071CAC:
{
    MemoryAlias::FlatWriteRam32((r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    MemoryAlias::FlatWriteRam32((r1 + 276), r0);
    MemoryAlias::FlatWriteRamFloat64((r1 + 256), f31.d);
    // psq_store w=0 quant=0 (using MemoryAlias::PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 264);
    MemoryAlias::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 256);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryAlias::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    MemoryAlias::FlatWriteRam32((r1 + 8), r3);
    MemoryAlias::FlatWriteRam32((r1 + 12), r4);
    r15 = r5;
    MemoryAlias::FlatWriteRam32((r1 + 16), r6);
    MemoryAlias::FlatWriteRam32((r1 + 20), r7);
    r16 = r8;
    r17 = r9;
    r18 = r10;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_80071D0C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071D24;
    }
}

loc_80071D10:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_80071D1C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071D24;
    }
}

loc_80071D20:
{
    r10 = 0;
}

loc_80071D24:
{
}

loc_80071D28:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_80071D40;
    }
}

loc_80071D2C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_80071D38:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071D40;
    }
}

loc_80071D3C:
{
    r9 = 0;
}

loc_80071D40:
{
}

loc_80071D44:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80071D58;
    }
}

loc_80071D48:
{
    r0 = (r11 + 1073741824);
}

loc_80071D50:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071D58;
    }
}

loc_80071D54:
{
    r8 = 0;
}

loc_80071D58:
{
}

loc_80071D5C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80071D74;
    }
}

loc_80071D60:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_80071D6C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071D74;
    }
}

loc_80071D70:
{
    r7 = 0;
}

loc_80071D74:
{
}

loc_80071D78:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80071D90;
    }
}

loc_80071D7C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_80071D88:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071D90;
    }
}

loc_80071D8C:
{
    r6 = 0;
}

loc_80071D90:
{
}

loc_80071D94:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80071DAC;
    }
}

loc_80071D98:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_80071DA4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071DAC;
    }
}

loc_80071DA8:
{
    r5 = 0;
}

loc_80071DAC:
{
}

loc_80071DB0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80071DD4;
    }
}

loc_80071DB4:
{
    r3 = 0x80590000u;
    r3 = (r3 + -7944);
    r4 = 1491;
    r5 = 0x80590000u;
    r5 = (r5 + -7572);
    r6 = MemoryAlias::FlatRead32((r1 + 8));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80071DD4u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80071DD4:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r15 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_80071DF8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071E10;
    }
}

loc_80071DFC:
{
    r3 = (r15 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_80071E08:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071E10;
    }
}

loc_80071E0C:
{
    r9 = 0;
}

loc_80071E10:
{
}

loc_80071E14:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80071E2C;
    }
}

loc_80071E18:
{
    r3 = (r15 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_80071E24:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071E2C;
    }
}

loc_80071E28:
{
    r8 = 0;
}

loc_80071E2C:
{
}

loc_80071E30:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80071E44;
    }
}

loc_80071E34:
{
    r0 = (r10 + 1073741824);
}

loc_80071E3C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071E44;
    }
}

loc_80071E40:
{
    r7 = 0;
}

loc_80071E44:
{
}

loc_80071E48:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80071E60;
    }
}

loc_80071E4C:
{
    r3 = (r15 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_80071E58:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071E60;
    }
}

loc_80071E5C:
{
    r6 = 0;
}

loc_80071E60:
{
}

loc_80071E64:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80071E7C;
    }
}

loc_80071E68:
{
    r3 = (r15 & -134217728);
    r0 = (r3 + 805306368);
}

loc_80071E74:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071E7C;
    }
}

loc_80071E78:
{
    r5 = 0;
}

loc_80071E7C:
{
}

loc_80071E80:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80071E98;
    }
}

loc_80071E84:
{
    r3 = (r15 & -16384);
    r0 = (r3 + 536870912);
}

loc_80071E90:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071E98;
    }
}

loc_80071E94:
{
    r4 = 0;
}

loc_80071E98:
{
}

loc_80071E9C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80071EC0;
    }
}

loc_80071EA0:
{
    r3 = 0x80590000u;
    r3 = (r3 + -7944);
    r4 = 1492;
    r5 = 0x80590000u;
    r5 = (r5 + -7512);
    r6 = r15;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80071EC0u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80071EC0:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r0 = MemoryAlias::FlatRead32((r1 + 16));
    r10 = (r0 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_80071EE8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071F04;
    }
}

loc_80071EEC:
{
    r0 = MemoryAlias::FlatRead32((r1 + 16));
    r3 = (r0 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_80071EFC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071F04;
    }
}

loc_80071F00:
{
    r9 = 0;
}

loc_80071F04:
{
}

loc_80071F08:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80071F24;
    }
}

loc_80071F0C:
{
    r0 = MemoryAlias::FlatRead32((r1 + 16));
    r3 = (r0 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_80071F1C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071F24;
    }
}

loc_80071F20:
{
    r8 = 0;
}

loc_80071F24:
{
}

loc_80071F28:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80071F3C;
    }
}

loc_80071F2C:
{
    r0 = (r10 + 1073741824);
}

loc_80071F34:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071F3C;
    }
}

loc_80071F38:
{
    r7 = 0;
}

loc_80071F3C:
{
}

loc_80071F40:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80071F5C;
    }
}

loc_80071F44:
{
    r0 = MemoryAlias::FlatRead32((r1 + 16));
    r3 = (r0 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_80071F54:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071F5C;
    }
}

loc_80071F58:
{
    r6 = 0;
}

loc_80071F5C:
{
}

loc_80071F60:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80071F7C;
    }
}

loc_80071F64:
{
    r0 = MemoryAlias::FlatRead32((r1 + 16));
    r3 = (r0 & -134217728);
    r0 = (r3 + 805306368);
}

loc_80071F74:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071F7C;
    }
}

loc_80071F78:
{
    r5 = 0;
}

loc_80071F7C:
{
}

loc_80071F80:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80071F9C;
    }
}

loc_80071F84:
{
    r0 = MemoryAlias::FlatRead32((r1 + 16));
    r3 = (r0 & -16384);
    r0 = (r3 + 536870912);
}

loc_80071F94:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80071F9C;
    }
}

loc_80071F98:
{
    r4 = 0;
}

loc_80071F9C:
{
}

loc_80071FA0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80071FC4;
    }
}

loc_80071FA4:
{
    r3 = 0x80590000u;
    r3 = (r3 + -7944);
    r4 = 1493;
    r5 = 0x80590000u;
    r5 = (r5 + -7448);
    r6 = MemoryAlias::FlatRead32((r1 + 16));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80071FC4u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80071FC4:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r16 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_80071FE8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80072000;
    }
}

loc_80071FEC:
{
    r3 = (r16 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_80071FF8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80072000;
    }
}

loc_80071FFC:
{
    r9 = 0;
}

loc_80072000:
{
}

loc_80072004:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8007201C;
    }
}

loc_80072008:
{
    r3 = (r16 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_80072014:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007201C;
    }
}

loc_80072018:
{
    r8 = 0;
}

loc_8007201C:
{
}

loc_80072020:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80072034;
    }
}

loc_80072024:
{
    r0 = (r10 + 1073741824);
}

loc_8007202C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80072034;
    }
}

loc_80072030:
{
    r7 = 0;
}

loc_80072034:
{
}

loc_80072038:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80072050;
    }
}

loc_8007203C:
{
    r3 = (r16 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_80072048:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80072050;
    }
}

loc_8007204C:
{
    r6 = 0;
}

loc_80072050:
{
}

loc_80072054:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8007206C;
    }
}

loc_80072058:
{
    r3 = (r16 & -134217728);
    r0 = (r3 + 805306368);
}

loc_80072064:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007206C;
    }
}

loc_80072068:
{
    r5 = 0;
}

loc_8007206C:
{
}

loc_80072070:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80072088;
    }
}

loc_80072074:
{
    r3 = (r16 & -16384);
    r0 = (r3 + 536870912);
}

loc_80072080:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80072088;
    }
}

loc_80072084:
{
    r4 = 0;
}

loc_80072088:
{
}

loc_8007208C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800720B0;
    }
}

loc_80072090:
{
    r3 = 0x80590000u;
    r3 = (r3 + -7944);
    r4 = 1494;
    r5 = 0x80590000u;
    r5 = (r5 + -7380);
    r6 = r16;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800720B0u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800720B0:
{
    r0 = MemoryAlias::FlatRead32((r1 + 20));
}

loc_800720B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80072710;
    }
}

loc_800720BC:
{
    // inline leaf 0x80071CA4 (2 guest instruction(s))
    r3 = -536870912;
    // end of inlined leaf 0x80071CA4
    guest_range_2 = MemoryAlias::ResolveRangeHost((r1 + 60), 0, 32u, false, true);
    MemoryAlias::WriteResolved32(guest_range_2, 28u, (r1 + 88), r3);
    r0 = (r3 + 2048);
    MemoryAlias::WriteResolved32(guest_range_2, 24u, (r1 + 84), r0);
    r0 = (r3 + 4096);
    MemoryAlias::WriteResolved32(guest_range_2, 20u, (r1 + 80), r0);
    r0 = (r3 + 6144);
    MemoryAlias::WriteResolved32(guest_range_2, 16u, (r1 + 76), r0);
    r0 = (r3 + 8192);
    MemoryAlias::WriteResolved32(guest_range_2, 12u, (r1 + 72), r0);
    r0 = (r3 + 10240);
    MemoryAlias::WriteResolved32(guest_range_2, 8u, (r1 + 68), r0);
    r0 = (r3 + 12288);
    MemoryAlias::WriteResolved32(guest_range_2, 4u, (r1 + 64), r0);
    r0 = (r3 + 14336);
    MemoryAlias::WriteResolved32(guest_range_2, 0u, (r1 + 60), r0);
    r0 = MemoryAlias::FlatRead32((r1 + 20));
    r14 = (r0 * 48);
    r3 = r14;
    // inline leaf 0x800711F0 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x800711F0
    r4 = r3;
    r3 = MemoryAlias::FlatRead32((r1 + 8));
    if constexpr (KnownRegArgsCpuCall<0x80071CA0u>(&func_80071CA0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80071CA0_5504 = func_80071CA0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80071CA0_5504);
        r4 = static_cast<uint32_t>(regargs_result_80071CA0_5504 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80071CA0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = 1;
    MemoryAlias::FlatWriteRam32((r1 + 152), r0);
    r0 = MemoryAlias::FlatRead32((r1 + 12));
}

loc_80072128:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80072170;
    }
}

loc_8007212C:
{
    r0 = 2;
    MemoryAlias::FlatWriteRam32((r1 + 152), r0);
    r0 = MemoryAlias::FlatRead32((r1 + 20));
    r3 = (r0 * 36);
    // inline leaf 0x800711F0 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x800711F0
    r4 = r3;
    r3 = MemoryAlias::FlatRead32((r1 + 12));
    if constexpr (KnownRegArgsCpuCall<0x80071CA0u>(&func_80071CA0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80071CA0_5A8E = func_80071CA0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80071CA0_5A8E);
        r4 = static_cast<uint32_t>(regargs_result_80071CA0_5A8E >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80071CA0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_80072150:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_80072170;
    }
}

loc_80072154:
{
    r0 = 3;
    MemoryAlias::FlatWriteRam32((r1 + 152), r0);
    r3 = r14;
    // inline leaf 0x800711F0 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x800711F0
    r4 = r3;
    r3 = r18;
    if constexpr (KnownRegArgsCpuCall<0x80071CA0u>(&func_80071CA0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80071CA0_5F55 = func_80071CA0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80071CA0_5F55);
        r4 = static_cast<uint32_t>(regargs_result_80071CA0_5F55 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80071CA0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_80072170:
{
    // inline leaf 0x8005CF68 (3 guest instruction(s))
    r3 = 0x80670000u;
    r3 = (r3 + -11520);
    // end of inlined leaf 0x8005CF68
    r28 = r3;
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80071C9Cu>(&func_80071C9C)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        func_80071C9C_ra8_0_0_0(ctx, r3);
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80071C9Cu>(ctx);
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = MemoryAlias::FlatRead32((r1 + 20));
}

loc_80072188:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(40))) {
        goto loc_80072194;
    }
}

loc_8007218C:
{
    r5 = 60;
    goto loc_800721A0;
}

loc_80072194:
{
    r3 = r14;
    // inline leaf 0x800711F0 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x800711F0
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r5 = (r5_rot_1 & 134217727);
}

loc_800721A0:
{
    r3 = MemoryAlias::FlatRead32((r1 + 88));
    r4 = r15;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80502E80u) && KnownTranslatedCpuCall<0x80502E80u>::kAvailable && !KnownTranslatedCpuCall<0x80502E80u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80502E80u>()) {
        const auto state_free_result_80502E80_67D4 = func_80502E80_statefree(r3, r4, r5, 0x800721ACu);
        r4 = static_cast<uint32_t>(state_free_result_80502E80_67D4[0]);
        r6 = static_cast<uint32_t>(state_free_result_80502E80_67D4[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80502E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
    r0 = MemoryAlias::FlatRead32((r1 + 20));
}

loc_800721B4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(20))) {
        goto loc_800721C4;
    }
}

loc_800721B8:
{
    r3 = 0;
    ctx->lr = 0x800721C0u;
    if constexpr (KnownRegArgsCpuCall<0x80072734u>(&func_80072734)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80072734_71AF = func_80072734_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80072734_71AF);
        r4 = static_cast<uint32_t>(regargs_result_80072734_71AF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80072734u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r14 = ctx->gpr[14];
        r15 = ctx->gpr[15];
        r16 = ctx->gpr[16];
        r17 = ctx->gpr[17];
        r18 = ctx->gpr[18];
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
        r21 = ctx->gpr[21];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
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
    goto loc_800721CC;
}

loc_800721C4:
{
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80071C9Cu>(&func_80071C9C)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        func_80071C9C_ra8_0_0_0(ctx, r3);
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80071C9Cu>(ctx);
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_800721CC:
{
    r23 = 0;
    r0 = 0;
    MemoryAlias::FlatWriteRam32((r1 + 172), r0);
    r0 = 0;
    MemoryAlias::FlatWriteRam32((r1 + 168), r0);
    r0 = 0;
    MemoryAlias::FlatWriteRam32((r1 + 164), r0);
    r0 = MemoryAlias::FlatRead32((r1 + 12));
    MemoryAlias::FlatWriteRam32((r1 + 160), r0);
    MemoryAlias::FlatWriteRam32((r1 + 156), r18);
    f31.d = MemoryAlias::FlatReadFloat32((r2 + -31992));
    r30 = 0x80590000u;
    r31 = 0x80590000u;
    r14 = 0x80590000u;
    goto loc_80072704;
}

loc_80072208:
{
    r0 = MemoryAlias::FlatRead32((r1 + 20));
    r19 = (r0 - r23);
    r22 = r19;
}

loc_80072218:
{
    if ((static_cast<uint32_t>(r19) <= static_cast<uint32_t>(40))) {
        goto loc_80072234;
    }
}

loc_8007221C:
{
    r22 = 40;
    r0 = 60;
    MemoryAlias::FlatWriteRam32((r1 + 148), r0);
    r0 = 45;
    MemoryAlias::FlatWriteRam32((r1 + 144), r0);
    goto loc_80072254;
}

loc_80072234:
{
    r3 = (r19 * 48);
    // inline leaf 0x800711F0 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x800711F0
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    MemoryAlias::FlatWriteRam32((r1 + 148), r0);
    r3 = (r19 * 36);
    // inline leaf 0x800711F0 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x800711F0
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 134217727);
    MemoryAlias::FlatWriteRam32((r1 + 144), r0);
}

loc_80072254:
{
    r3 = MemoryAlias::FlatRead32((r1 + 152));
    if constexpr (KnownRegArgsCpuCall<0x80071C9Cu>(&func_80071C9C)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        func_80071C9C_ra8_0_0_0(ctx, r3);
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80071C9Cu>(ctx);
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = (r23 + 40);
    r0 = MemoryAlias::FlatRead32((r1 + 20));
}

loc_80072268:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_800722A0;
    }
}

loc_8007226C:
{
    r0 = (r19 + -40);
}

loc_80072274:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(40))) {
        goto loc_80072280;
    }
}

loc_80072278:
{
    r5 = 60;
    goto loc_8007228C;
}

loc_80072280:
{
    r3 = (r0 * 48);
    // inline leaf 0x800711F0 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x800711F0
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r5 = (r5_rot_4 & 134217727);
}

loc_8007228C:
{
    r3 = MemoryAlias::FlatRead32((r1 + 72));
    r0 = MemoryAlias::FlatRead32((r1 + 164));
    r4 = (r0 + r15);
    r4 = (r4 + 1920);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80502E80u) && KnownTranslatedCpuCall<0x80502E80u>::kAvailable && !KnownTranslatedCpuCall<0x80502E80u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80502E80u>()) {
        const auto state_free_result_80502E80_8E0E = func_80502E80_statefree(r3, r4, r5, 0x800722A0u);
        r4 = static_cast<uint32_t>(state_free_result_80502E80_8E0E[0]);
        r6 = static_cast<uint32_t>(state_free_result_80502E80_8E0E[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80502E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
}

loc_800722A0:
{
}

loc_800722A4:
{
    if ((static_cast<uint32_t>(r22) <= static_cast<uint32_t>(1))) {
        goto loc_800722C0;
    }
}

loc_800722A8:
{
    r3 = MemoryAlias::FlatRead32((r1 + 84));
    r4 = r16;
    r5 = MemoryAlias::FlatRead32((r1 + 88));
    r6 = r22;
    ctx->lr = 0x800722BCu;
    if constexpr (KnownRegArgsCpuCall<0x80071194u>(&func_80071194)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_80071194_95CE = func_80071194_ra38_3e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_80071194_95CE);
        r4 = static_cast<uint32_t>(regargs_result_80071194_95CE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80071194u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    goto loc_800722D0;
}

loc_800722C0:
{
    r3 = MemoryAlias::FlatRead32((r1 + 84));
    r4 = r16;
    r5 = MemoryAlias::FlatRead32((r1 + 88));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
}

loc_800722D0:
{
    r21 = 0;
    r3 = MemoryAlias::FlatRead32((r1 + 16));
    r0 = MemoryAlias::FlatRead32((r1 + 168));
    r24 = (r3 + r0);
    r27 = r24;
    r26 = 0;
    r0 = MemoryAlias::FlatRead32((r1 + 172));
    r25 = (r28 + r0);
    goto loc_80072564;
}

loc_800722F4:
{
    r20 = MemoryAlias::FlatRead32(r27);
    r3 = r20;
    // inline leaf 0x80071118 (2 guest instruction(s))
    r3 = (r3 & 255);
    // end of inlined leaf 0x80071118
    r29 = r3;
}

loc_80072308:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80072488;
    }
}

loc_8007230C:
{
    r0 = MemoryAlias::FlatRead32((r1 + 84));
    r19 = (r0 + r26);
    r3 = r17;
    // inline leaf 0x8005D360 (5 guest instruction(s))
    r3 = MemoryAlias::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x8005D360
}

loc_80072320:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80072338;
    }
}

loc_80072324:
{
    r3 = (r30 + -7944);
    r4 = 1630;
    r5 = (r31 + -7328);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80072338u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80072338:
{
}

loc_8007233C:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(7))) {
        goto loc_80072354;
    }
}

loc_80072340:
{
    r3 = (r30 + -7944);
    r4 = 1631;
    r5 = (r14 + -7288);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80072354u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80072354:
{
    r0 = MemoryAlias::FlatRead32(r17);
    MemoryAlias::FlatWriteRam32((r1 + 48), r0);
    r3 = r20;
    // inline leaf 0x80071104 (5 guest instruction(s))
    r3 = (r3 & 536870912);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x80071104
    r5 = r3;
    r3 = r19;
    r4 = r15;
    r6 = r16;
    r7 = (r1 + 48);
    r8 = (r23 + r21);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r9 = 0x80570000u;
    r9 = (r9 + -520);
    r9_addr_3 = (r9 + r0);
    r12 = MemoryAlias::FlatRead32(r9_addr_3);
    ctr = r12;
    ctx->lr = 0x80072394u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
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
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    r3 = r17;
    ctx->lr = 0x8007239Cu;
    if constexpr (KnownRegArgsCpuCall<0x80070084u>(&func_80070084)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80070084_ADEB = func_80070084_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80070084_ADEB);
        r4 = static_cast<uint32_t>(regargs_result_80070084_ADEB >> 32);
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
        InvokeDirectCpu<0x80070084u>(ctx);
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
    MemoryAlias::FlatWriteRam32((r1 + 44), r3);
    r19 = (r23 + r21);
    r3 = (r1 + 44);
    r4 = r19;
    ctx->lr = 0x800723B0u;
    if constexpr (KnownRegArgsCpuCall<0x8006FF2Cu>(&func_8006FF2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8006FF2C_B2CE = func_8006FF2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006FF2C_B2CE);
        r4 = static_cast<uint32_t>(regargs_result_8006FF2C_B2CE >> 32);
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
        InvokeDirectCpu<0x8006FF2Cu>(ctx);
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
    r20 = r3;
}

loc_800723B8:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_800723D4;
    }
}

loc_800723BC:
{
    r3 = (r30 + -7944);
    r4 = 1641;
    r5 = 0x80590000u;
    r5 = (r5 + -7228);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800723D4u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800723D4:
{
    r3 = r17;
    r4 = r20;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80097F7Cu>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    MemoryAlias::FlatWriteRam32((r1 + 40), r3);
    r3 = (r1 + 56);
    r4 = (r1 + 40);
    ctx->lr = 0x800723F0u;
    if constexpr (KnownRegArgsCpuCall<0x8005D324u>(&func_8005D324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005D324_BB2A = func_8005D324_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8005D324_BB2A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8005D324u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r20 = 0;
    r3 = (r1 + 56);
    // inline leaf 0x8005AB50 (5 guest instruction(s))
    r3 = MemoryAlias::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x8005AB50
}

loc_80072400:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80072424;
    }
}

loc_80072404:
{
    r3 = (r1 + 56);
    ctx->lr = 0x8007240Cu;
    if constexpr (KnownRegArgsCpuCall<0x800710C8u>(&func_800710C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800710C8_BFB5 = func_800710C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800710C8_BFB5);
        r4 = static_cast<uint32_t>(regargs_result_800710C8_BFB5 >> 32);
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
        InvokeDirectCpu<0x800710C8u>(ctx);
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
    MemoryAlias::FlatWriteRam32((r1 + 36), r3);
    r3 = (r1 + 36);
    // inline leaf 0x8005AB50 (5 guest instruction(s))
    r3 = MemoryAlias::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    // end of inlined leaf 0x8005AB50
}

loc_8007241C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80072424;
    }
}

loc_80072420:
{
    r20 = 1;
}

loc_80072424:
{
}

loc_80072428:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_80072554;
    }
}

loc_8007242C:
{
    r3 = (r1 + 96);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r19 = (r19 * 48);
    r3 = (r1 + 96);
    r4 = (r15 + r19);
    ctx->lr = 0x80072444u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80331064u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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

loc_80072448:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80072464;
    }
}

loc_8007244C:
{
    r3 = (r28 + r19);
    r0 = MemoryAlias::FlatRead32((r1 + 84));
    r4 = (r0 + r26);
    r5 = (r1 + 96);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    goto loc_80072554;
}

loc_80072464:
{
    r3 = (r28 + r19);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    f0.d = MemoryAlias::FlatReadFloat32((r16 + 12));
    MemoryAlias::FlatWriteFloat32((r25 + 12), f0.d);
    f0.d = MemoryAlias::FlatReadFloat32((r16 + 28));
    MemoryAlias::FlatWriteFloat32((r25 + 28), f0.d);
    f0.d = MemoryAlias::FlatReadFloat32((r16 + 44));
    MemoryAlias::FlatWriteFloat32((r25 + 44), f0.d);
    goto loc_80072554;
}

loc_80072488:
{
    r3 = r17;
    ctx->lr = 0x80072490u;
    if constexpr (KnownRegArgsCpuCall<0x80070084u>(&func_80070084)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80070084_CED9 = func_80070084_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80070084_CED9);
        r4 = static_cast<uint32_t>(regargs_result_80070084_CED9 >> 32);
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
        InvokeDirectCpu<0x80070084u>(ctx);
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
    MemoryAlias::FlatWriteRam32((r1 + 32), r3);
    r20 = (r23 + r21);
    r3 = (r1 + 32);
    r4 = r20;
    ctx->lr = 0x800724A4u;
    if constexpr (KnownRegArgsCpuCall<0x8006FF2Cu>(&func_8006FF2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8006FF2C_D3BC = func_8006FF2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006FF2C_D3BC);
        r4 = static_cast<uint32_t>(regargs_result_8006FF2C_D3BC >> 32);
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
        InvokeDirectCpu<0x8006FF2Cu>(ctx);
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
    r4 = r3;
}

loc_800724AC:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_80072554;
    }
}

loc_800724B0:
{
    r3 = r17;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80097F7Cu>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    MemoryAlias::FlatWriteRam32((r1 + 28), r3);
    r3 = (r1 + 52);
    r4 = (r1 + 28);
    ctx->lr = 0x800724C8u;
    if constexpr (KnownRegArgsCpuCall<0x8005D324u>(&func_8005D324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005D324_D990 = func_8005D324_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8005D324_D990;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8005D324u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 52);
    // inline leaf 0x8005AB50 (5 guest instruction(s))
    r3 = MemoryAlias::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & 1);
    // end of inlined leaf 0x8005AB50
}

loc_800724D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80072554;
    }
}

loc_800724D8:
{
    r3 = (r1 + 52);
    ctx->lr = 0x800724E0u;
    if constexpr (KnownRegArgsCpuCall<0x8005D27Cu>(&func_8005D27C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8005D27C_DE0D = func_8005D27C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005D27C_DE0D);
        r4 = static_cast<uint32_t>(regargs_result_8005D27C_DE0D >> 32);
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
        InvokeDirectCpu<0x8005D27Cu>(ctx);
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
    r0 = MemoryAlias::FlatRead32((r3 + 20));
    r0 = (r0 & 1024);
}

loc_800724EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80072554;
    }
}

loc_800724F0:
{
    r3 = (r1 + 52);
    ctx->lr = 0x800724F8u;
    if constexpr (KnownRegArgsCpuCall<0x8005D27Cu>(&func_8005D27C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8005D27C_E370 = func_8005D27C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005D27C_E370);
        r4 = static_cast<uint32_t>(regargs_result_8005D27C_E370 >> 32);
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
        InvokeDirectCpu<0x8005D27Cu>(ctx);
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
    r4 = r3;
    r3 = r17;
    r4 = MemoryAlias::FlatRead32((r4 + 28));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80097F7Cu>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    MemoryAlias::FlatWriteRam32((r1 + 24), r3);
    r3 = (r1 + 24);
    ctx->lr = 0x80072514u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8006FE30u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    r19 = r3;
}

loc_8007251C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r20))) {
        goto loc_80072538;
    }
}

loc_80072520:
{
    r3 = (r30 + -7944);
    r4 = 1682;
    r5 = 0x80590000u;
    r5 = (r5 + -7192);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80072538u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80072538:
{
    r0 = MemoryAlias::FlatRead32((r1 + 84));
    r3 = (r0 + r26);
    r0 = (r19 * 48);
    r4 = (r28 + r0);
    r0 = (r20 * 48);
    r5 = (r15 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
}

loc_80072554:
{
    r27 = (r27 + 4);
    r26 = (r26 + 48);
    r25 = (r25 + 48);
    r21 = (r21 + 1);
}

loc_80072564:
{
}

loc_80072568:
{
    if ((static_cast<uint32_t>(r21) < static_cast<uint32_t>(r22))) {
        goto loc_800722F4;
    }
}

loc_8007256C:
{
    r3 = MemoryAlias::FlatRead32((r1 + 8));
    r4 = MemoryAlias::FlatRead32((r1 + 84));
    r5 = MemoryAlias::FlatRead32((r1 + 148));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80502E88u) && KnownTranslatedCpuCall<0x80502E88u>::kAvailable && !KnownTranslatedCpuCall<0x80502E88u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80502E88u>()) {
        const auto state_free_result_80502E88_F2C8 = func_80502E88_statefree(r3, r4, r5, 0x8007257Cu);
        r3 = static_cast<uint32_t>(state_free_result_80502E88_F2C8[0]);
        r6 = static_cast<uint32_t>(state_free_result_80502E88_F2C8[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80502E88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
    r0 = MemoryAlias::FlatRead32((r1 + 12));
}

loc_80072584:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80072654;
    }
}

loc_80072588:
{
    r21 = 0;
    r19 = 0;
    r20 = 0;
    goto loc_8007264C;
}

loc_80072598:
{
    r0 = MemoryAlias::FlatRead32((r1 + 84));
    r25 = (r0 + r19);
    r0 = MemoryAlias::FlatRead32((r1 + 80));
    r26 = (r0 + r20);
    r3 = MemoryAlias::FlatRead32(r24);
    // inline leaf 0x80071104 (5 guest instruction(s))
    r3 = (r3 & 536870912);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_11 & 1);
    // end of inlined leaf 0x80071104
}

loc_800725B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80072604;
    }
}

loc_800725B8:
{
}

loc_800725BC:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_800725F4;
    }
}

loc_800725C0:
{
    r0 = MemoryAlias::FlatRead32((r1 + 76));
    r3 = (r0 + r19);
    r4 = r25;
    ctx->lr = 0x800725D0u;
    if constexpr (KnownRegArgsCpuCall<0x80071070u>(&func_80071070)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80071070_FD6F = func_80071070_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80071070_FD6F);
        r4 = static_cast<uint32_t>(regargs_result_80071070_FD6F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x80071070u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    }
    r0 = MemoryAlias::FlatRead32((r1 + 76));
    r3 = (r0 + r19);
    MemoryAlias::FlatWriteFloat32((r3 + 44), f31.d);
    r0 = MemoryAlias::FlatRead32((r1 + 76));
    r3 = (r0 + r19);
    MemoryAlias::FlatWriteFloat32((r3 + 28), f31.d);
    r0 = MemoryAlias::FlatRead32((r1 + 76));
    r3 = (r0 + r19);
    MemoryAlias::FlatWriteFloat32((r3 + 12), f31.d);
}

loc_800725F4:
{
    r3 = r26;
    r4 = r25;
    ctx->lr = 0x80072600u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80501968u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    goto loc_8007263C;
}

loc_80072604:
{
}

loc_80072608:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_80072630;
    }
}

loc_8007260C:
{
    r0 = MemoryAlias::FlatRead32((r1 + 76));
    r3 = (r0 + r19);
    r4 = r25;
    ctx->lr = 0x8007261Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80330F5Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    r3 = r26;
    r0 = MemoryAlias::FlatRead32((r1 + 76));
    r4 = (r0 + r19);
    ctx->lr = 0x8007262Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80501968u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    goto loc_8007263C;
}

loc_80072630:
{
    r3 = r26;
    r4 = r25;
    ctx->lr = 0x8007263Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80330E78u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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

loc_8007263C:
{
    r19 = (r19 + 48);
    r20 = (r20 + 36);
    r24 = (r24 + 4);
    r21 = (r21 + 1);
}

loc_8007264C:
{
}

loc_80072650:
{
    if ((static_cast<uint32_t>(r21) < static_cast<uint32_t>(r22))) {
        goto loc_80072598;
    }
}

loc_80072654:
{
    r0 = MemoryAlias::FlatRead32((r1 + 12));
}

loc_8007265C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80072688;
    }
}

loc_80072660:
{
    r3 = MemoryAlias::FlatRead32((r1 + 160));
    r4 = MemoryAlias::FlatRead32((r1 + 80));
    r5 = MemoryAlias::FlatRead32((r1 + 144));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80502E88u) && KnownTranslatedCpuCall<0x80502E88u>::kAvailable && !KnownTranslatedCpuCall<0x80502E88u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80502E88u>()) {
        const auto state_free_result_80502E88_11629 = func_80502E88_statefree(r3, r4, r5, 0x80072670u);
        r3 = static_cast<uint32_t>(state_free_result_80502E88_11629[0]);
        r6 = static_cast<uint32_t>(state_free_result_80502E88_11629[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80502E88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
}

loc_80072674:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_80072688;
    }
}

loc_80072678:
{
    r3 = MemoryAlias::FlatRead32((r1 + 156));
    r4 = MemoryAlias::FlatRead32((r1 + 76));
    r5 = MemoryAlias::FlatRead32((r1 + 148));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80502E88u) && KnownTranslatedCpuCall<0x80502E88u>::kAvailable && !KnownTranslatedCpuCall<0x80502E88u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80502E88u>()) {
        const auto state_free_result_80502E88_11DD9 = func_80502E88_statefree(r3, r4, r5, 0x80072688u);
        r3 = static_cast<uint32_t>(state_free_result_80502E88_11DD9[0]);
        r6 = static_cast<uint32_t>(state_free_result_80502E88_11DD9[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80502E88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
}

loc_80072688:
{
    r3 = (r1 + 88);
    r4 = (r1 + 72);
    ctx->lr = 0x80072694u;
    if constexpr (KnownRegArgsCpuCall<0x80071C38u>(&func_80071C38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80071C38_12448 = func_80071C38_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80071C38_12448;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80071C38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 84);
    r4 = (r1 + 68);
    ctx->lr = 0x800726A0u;
    if constexpr (KnownRegArgsCpuCall<0x80071C38u>(&func_80071C38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80071C38_126C7 = func_80071C38_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80071C38_126C7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80071C38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 80);
    r4 = (r1 + 64);
    ctx->lr = 0x800726ACu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80071BD4u) && KnownTranslatedCpuCall<0x80071BD4u>::kAvailable && !KnownTranslatedCpuCall<0x80071BD4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80071BD4u>()) {
        const auto state_free_result_80071BD4_129C1 = func_80071BD4_statefree(r1, r3, r4, 0x800726ACu);
        r1 = static_cast<uint32_t>(state_free_result_80071BD4_129C1);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80071BD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
    r3 = (r1 + 76);
    r4 = (r1 + 60);
    ctx->lr = 0x800726B8u;
    if constexpr (KnownRegArgsCpuCall<0x80071C38u>(&func_80071C38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80071C38_12FCC = func_80071C38_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80071C38_12FCC;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80071C38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = MemoryAlias::FlatRead32((r1 + 164));
    r3 = (r3 + 1920);
    MemoryAlias::FlatWriteRam32((r1 + 164), r3);
    r3 = MemoryAlias::FlatRead32((r1 + 8));
    r3 = (r3 + 1920);
    MemoryAlias::FlatWriteRam32((r1 + 8), r3);
    r3 = MemoryAlias::FlatRead32((r1 + 160));
    r3 = (r3 + 1440);
    MemoryAlias::FlatWriteRam32((r1 + 160), r3);
    r3 = MemoryAlias::FlatRead32((r1 + 156));
    r3 = (r3 + 1920);
    MemoryAlias::FlatWriteRam32((r1 + 156), r3);
    r23 = (r23 + 40);
    r3 = MemoryAlias::FlatRead32((r1 + 172));
    r3 = (r3 + 1920);
    MemoryAlias::FlatWriteRam32((r1 + 172), r3);
    r3 = MemoryAlias::FlatRead32((r1 + 168));
    r3 = (r3 + 160);
    MemoryAlias::FlatWriteRam32((r1 + 168), r3);
}

loc_80072704:
{
    r0 = MemoryAlias::FlatRead32((r1 + 20));
}

loc_8007270C:
{
    if ((static_cast<uint32_t>(r23) < static_cast<uint32_t>(r0))) {
        goto loc_80072208;
    }
}

loc_80072710:
{
    r0 = 264;
    addr_psqx_80072714_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, MemoryAlias::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80072714_loc_0));
    f31.d = MemoryAlias::FlatReadFloat64((r1 + 256));
    r11 = (r1 + 256);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_1 = MemoryAlias::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryAlias::FlatRead32((r1 + 276));
    ctx->lr = r0;
    r1 = (r1 + 272);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->gpr[14] = r14_entry;
    ctx->gpr[15] = r15_entry;
    ctx->gpr[16] = r16_entry;
    ctx->gpr[17] = r17_entry;
    ctx->gpr[18] = r18_entry;
    ctx->gpr[19] = r19_entry;
    ctx->gpr[20] = r20_entry;
    ctx->gpr[21] = r21_entry;
    ctx->gpr[22] = r22_entry;
    ctx->gpr[23] = r23_entry;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00003FFF gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80071CAC func_80071CAC preserves=true fpr_mask=0x00000000
