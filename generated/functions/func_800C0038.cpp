#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C03F4(CpuContext* ctx);
extern "C" uint64_t func_800C03F4_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_800C05D8(CpuContext* ctx);
extern "C" uint64_t func_800C05D8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800C0038_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_800C0038;

loc_800C0038:
{
    MemoryInline::FlatWriteRam32((r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 216), f31.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 208), f30.d);
    r11 = (r1 + 208);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r23 = r3;
    r24 = r4;
    r25 = r5;
    r26 = r6;
    r27 = r7;
    r28 = r8;
    r29 = r9;
    r30 = r10;
    r31 = MemoryInline::FlatRead32((r1 + 232));
    f30.d = f1.d;
    f31.d = f2.d;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800C00A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C00BC;
    }
}

loc_800C00A8:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800C00B4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C00BC;
    }
}

loc_800C00B8:
{
    r10 = 0;
}

loc_800C00BC:
{
}

loc_800C00C0:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800C00D8;
    }
}

loc_800C00C4:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800C00D0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C00D8;
    }
}

loc_800C00D4:
{
    r9 = 0;
}

loc_800C00D8:
{
}

loc_800C00DC:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800C00F0;
    }
}

loc_800C00E0:
{
    r0 = (r11 + 1073741824);
}

loc_800C00E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C00F0;
    }
}

loc_800C00EC:
{
    r8 = 0;
}

loc_800C00F0:
{
}

loc_800C00F4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800C010C;
    }
}

loc_800C00F8:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800C0104:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C010C;
    }
}

loc_800C0108:
{
    r7 = 0;
}

loc_800C010C:
{
}

loc_800C0110:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800C0128;
    }
}

loc_800C0114:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800C0120:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C0128;
    }
}

loc_800C0124:
{
    r6 = 0;
}

loc_800C0128:
{
}

loc_800C012C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800C0144;
    }
}

loc_800C0130:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800C013C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C0144;
    }
}

loc_800C0140:
{
    r5 = 0;
}

loc_800C0144:
{
}

loc_800C0148:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800C016C;
    }
}

loc_800C014C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 19616);
    r4 = 208;
    r5 = 0x80590000u;
    r5 = (r5 + 19648);
    r6 = r24;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800C016Cu;
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
}

loc_800C016C:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r25 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800C0190:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C01A8;
    }
}

loc_800C0194:
{
    r3 = (r25 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800C01A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C01A8;
    }
}

loc_800C01A4:
{
    r9 = 0;
}

loc_800C01A8:
{
}

loc_800C01AC:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800C01C4;
    }
}

loc_800C01B0:
{
    r3 = (r25 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800C01BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C01C4;
    }
}

loc_800C01C0:
{
    r8 = 0;
}

loc_800C01C4:
{
}

loc_800C01C8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800C01DC;
    }
}

loc_800C01CC:
{
    r0 = (r10 + 1073741824);
}

loc_800C01D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C01DC;
    }
}

loc_800C01D8:
{
    r7 = 0;
}

loc_800C01DC:
{
}

loc_800C01E0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800C01F8;
    }
}

loc_800C01E4:
{
    r3 = (r25 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800C01F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C01F8;
    }
}

loc_800C01F4:
{
    r6 = 0;
}

loc_800C01F8:
{
}

loc_800C01FC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800C0214;
    }
}

loc_800C0200:
{
    r3 = (r25 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800C020C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C0214;
    }
}

loc_800C0210:
{
    r5 = 0;
}

loc_800C0214:
{
}

loc_800C0218:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800C0230;
    }
}

loc_800C021C:
{
    r3 = (r25 & -16384);
    r0 = (r3 + 536870912);
}

loc_800C0228:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C0230;
    }
}

loc_800C022C:
{
    r4 = 0;
}

loc_800C0230:
{
}

loc_800C0234:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800C0258;
    }
}

loc_800C0238:
{
    r3 = 0x80590000u;
    r3 = (r3 + 19616);
    r4 = 209;
    r5 = 0x80590000u;
    r5 = (r5 + 19700);
    r6 = r25;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800C0258u;
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
}

loc_800C0258:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r27 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800C027C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C0294;
    }
}

loc_800C0280:
{
    r3 = (r27 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800C028C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C0294;
    }
}

loc_800C0290:
{
    r9 = 0;
}

loc_800C0294:
{
}

loc_800C0298:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800C02B0;
    }
}

loc_800C029C:
{
    r3 = (r27 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800C02A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C02B0;
    }
}

loc_800C02AC:
{
    r8 = 0;
}

loc_800C02B0:
{
}

loc_800C02B4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800C02C8;
    }
}

loc_800C02B8:
{
    r0 = (r10 + 1073741824);
}

loc_800C02C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C02C8;
    }
}

loc_800C02C4:
{
    r7 = 0;
}

loc_800C02C8:
{
}

loc_800C02CC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800C02E4;
    }
}

loc_800C02D0:
{
    r3 = (r27 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800C02DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C02E4;
    }
}

loc_800C02E0:
{
    r6 = 0;
}

loc_800C02E4:
{
}

loc_800C02E8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800C0300;
    }
}

loc_800C02EC:
{
    r3 = (r27 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800C02F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C0300;
    }
}

loc_800C02FC:
{
    r5 = 0;
}

loc_800C0300:
{
}

loc_800C0304:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800C031C;
    }
}

loc_800C0308:
{
    r3 = (r27 & -16384);
    r0 = (r3 + 536870912);
}

loc_800C0314:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C031C;
    }
}

loc_800C0318:
{
    r4 = 0;
}

loc_800C031C:
{
}

loc_800C0320:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800C0344;
    }
}

loc_800C0324:
{
    r3 = 0x80590000u;
    r3 = (r3 + 19616);
    r4 = 210;
    r5 = 0x80590000u;
    r5 = (r5 + 19756);
    r6 = r27;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800C0344u;
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
}

loc_800C0344:
{
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 120);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 8);
    r4 = r25;
    r5 = r27;
    r12 = r28;
    ctr = r12;
    ctx->lr = 0x800C036Cu;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = (r1 + 72);
    r4 = r23;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = (r1 + 8);
    r9 = r29;
    ctx->lr = 0x800C038Cu;
    if constexpr (KnownRegArgsCpuCall<0x800C05D8u>(&func_800C05D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800C05D8_36B9 = func_800C05D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800C05D8_36B9);
        r4 = static_cast<uint32_t>(regargs_result_800C05D8_36B9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800C05D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = (r1 + 24);
    r4 = r23;
    r5 = r27;
    f1.d = f30.d;
    ctx->lr = 0x800C03A0u;
    if constexpr (KnownRegArgsCpuCall<0x800C03F4u>(&func_800C03F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800C03F4_3E14 = func_800C03F4_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_800C03F4_3E14);
        r4 = static_cast<uint32_t>(regargs_result_800C03F4_3E14 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800C03F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = (r1 + 120);
    r4 = (r1 + 72);
    r5 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    r3 = r24;
    r4 = (r1 + 120);
    r5 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    r3 = (r24 + 12);
    r4 = (r1 + 120);
    r5 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    MemoryInline::FlatWriteFloat32((r24 + 24), f31.d);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 216));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 208));
    r11 = (r1 + 208);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 228));
    ctx->lr = r0;
    r1 = (r1 + 224);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800C0038(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800C0038_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800C0038 func_800C0038 preserves=true fpr_mask=0x00000000
