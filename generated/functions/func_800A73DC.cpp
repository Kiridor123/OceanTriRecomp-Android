#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A46B8(CpuContext* ctx);
extern "C" uint64_t func_800A46B8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_805011C4(CpuContext* ctx);
extern "C" uint64_t func_805011C4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_800A73DC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
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
    uint32_t cr = ctx->cr;

    goto loc_800A73DC;

loc_800A73DC:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -144), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 148u, (r1 + 148), r0);
    r11 = (r1 + 144);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r31 = r4;
    r27 = r5;
    r28 = r6;
    r29 = r7;
    r30 = r8;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800A742C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A7444;
    }
}

loc_800A7430:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800A743C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A7444;
    }
}

loc_800A7440:
{
    r10 = 0;
}

loc_800A7444:
{
}

loc_800A7448:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800A7460;
    }
}

loc_800A744C:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800A7458:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A7460;
    }
}

loc_800A745C:
{
    r9 = 0;
}

loc_800A7460:
{
}

loc_800A7464:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A7478;
    }
}

loc_800A7468:
{
    r0 = (r11 + 1073741824);
}

loc_800A7470:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A7478;
    }
}

loc_800A7474:
{
    r8 = 0;
}

loc_800A7478:
{
}

loc_800A747C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A7494;
    }
}

loc_800A7480:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800A748C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A7494;
    }
}

loc_800A7490:
{
    r7 = 0;
}

loc_800A7494:
{
}

loc_800A7498:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A74B0;
    }
}

loc_800A749C:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800A74A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A74B0;
    }
}

loc_800A74AC:
{
    r6 = 0;
}

loc_800A74B0:
{
}

loc_800A74B4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A74CC;
    }
}

loc_800A74B8:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A74C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A74CC;
    }
}

loc_800A74C8:
{
    r5 = 0;
}

loc_800A74CC:
{
}

loc_800A74D0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A74F4;
    }
}

loc_800A74D4:
{
    r3 = 0x80590000u;
    r3 = (r3 + 12304);
    r4 = 307;
    r5 = 0x80590000u;
    r5 = (r5 + 12564);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A74F4u;
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

loc_800A74F4:
{
    r3 = r31;
    // inline leaf 0x800A48C8 (2 guest instruction(s))
    r3 = (r3 + 8);
    // end of inlined leaf 0x800A48C8
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & 1073741824);
}

loc_800A7508:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A753C;
    }
}

loc_800A750C:
{
    r3 = r31;
    // inline leaf 0x800A48C0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800A48C0
    r6 = r3;
    r3 = 0x80590000u;
    r3 = (r3 + 12304);
    r4 = 311;
    r5 = 0x80590000u;
    r5 = (r5 + 12756);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A7534u;
    if constexpr (KnownRegArgsCpuCall<0x805011C4u>(&func_805011C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_805011C4_1AC3 = func_805011C4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_805011C4_1AC3);
        r4 = static_cast<uint32_t>(regargs_result_805011C4_1AC3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        InvokeDirectCpu<0x805011C4u>(ctx);
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
    }
    r3 = 0;
    goto loc_800A779C;
}

loc_800A753C:
{
    r3 = MemoryInline::FlatRead32((r26 + 188));
    r4 = r31;
    r5 = MemoryInline::FlatRead8((r27 + 5));
    r6 = 0;
    ctx->lr = 0x800A7550u;
    if constexpr (KnownRegArgsCpuCall<0x800A46B8u>(&func_800A46B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_800A46B8_24B8 = func_800A46B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800A46B8_24B8);
        r4 = static_cast<uint32_t>(regargs_result_800A46B8_24B8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        InvokeDirectCpu<0x800A46B8u>(ctx);
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
    }
    r31 = r3;
}

loc_800A7558:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800A7564;
    }
}

loc_800A755C:
{
    r3 = 0;
    goto loc_800A779C;
}

loc_800A7564:
{
    r0 = MemoryInline::FlatRead16((r3 + 232));
    r0 = (r0 + r29);
    MemoryInline::FlatWrite16((r3 + 232), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r3 + 244), r26);
    r3 = MemoryInline::FlatRead32((r3 + 244));
    // inline leaf 0x800A33E0 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    r3 = r0;
    // end of inlined leaf 0x800A33E0
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 100), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r26 + 32));
    r0 = (r0 & 128);
}

loc_800A7590:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A75A0;
    }
}

loc_800A7594:
{
    r0 = MemoryInline::FlatRead8((r31 + 100));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r31 + 100), static_cast<uint8_t>(r0));
}

loc_800A75A0:
{
    r0 = MemoryInline::FlatRead32((r26 + 32));
    r0 = (r0 & 256);
}

loc_800A75AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A75BC;
    }
}

loc_800A75B0:
{
    r0 = MemoryInline::FlatRead8((r31 + 100));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8((r31 + 100), static_cast<uint8_t>(r0));
}

loc_800A75BC:
{
    r3 = MemoryInline::FlatRead32((r26 + 184));
    // inline leaf 0x800A48C8 (2 guest instruction(s))
    r3 = (r3 + 8);
    // end of inlined leaf 0x800A48C8
    r0 = MemoryInline::FlatRead8((r3 + 27));
    MemoryInline::FlatWrite8((r31 + 101), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r26 + 32));
    r0 = (r0 & 2048);
}

loc_800A75D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A75E8;
    }
}

loc_800A75DC:
{
    r0 = MemoryInline::FlatRead8((r31 + 100));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r31 + 100), static_cast<uint8_t>(r0));
}

loc_800A75E8:
{
    r3 = (r1 + 8);
    r4 = (r31 + 144);
    // inline leaf 0x800514F4 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32(r3, r5);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x800514F4
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31388));
    MemoryInline::FlatWriteFloat32((r31 + 144), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 148), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 152), f0.d);
    r3 = r31;
    ctx->lr = 0x800A760Cu;
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
    InvokeDirectCpu<0x800A963Cu>(ctx);
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
    r3 = (r1 + 72);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 24);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 72);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    r3 = (r1 + 72);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 168));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 172));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 176));
    ctx->lr = 0x800A7638u;
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
    InvokeDirectCpu<0x8009CA94u>(ctx);
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
    r3 = (r1 + 72);
    r4 = r3;
    r5 = (r31 + 156);
    ctx->lr = 0x800A7648u;
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
    InvokeDirectCpu<0x8009CC04u>(ctx);
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
    r3 = r31;
    r4 = (r1 + 24);
    ctx->lr = 0x800A7654u;
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
    InvokeDirectCpu<0x800A9508u>(ctx);
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
    r3 = (r1 + 24);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80088428u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r1 + 72);
    r4 = r3;
    r5 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
}

loc_800A7674:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_800A7694;
    }
}

loc_800A7678:
{
    r3 = MemoryInline::FlatRead32((r28 + 200));
    r4 = (r1 + 24);
    ctx->lr = 0x800A7684u;
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
    InvokeDirectCpu<0x800AE3C4u>(ctx);
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
    r3 = (r1 + 72);
    r4 = r3;
    r5 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
}

loc_800A7694:
{
}

loc_800A7698:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_800A76B8;
    }
}

loc_800A769C:
{
}

loc_800A76A0:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_800A76C8;
    }
}

loc_800A76A4:
{
    r3 = (r1 + 72);
    r4 = r3;
    r5 = (r28 + 172);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80501A10u>(ctx);
    goto loc_800A76C8;
}

loc_800A76B8:
{
    r3 = (r1 + 72);
    r4 = r3;
    r5 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80501A10u>(ctx);
}

loc_800A76C8:
{
    r3 = (r1 + 24);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 168));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 172));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 176));
    ctx->lr = 0x800A76DCu;
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
    InvokeDirectCpu<0x8009CA94u>(ctx);
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
    r3 = (r1 + 24);
    r4 = r3;
    r5 = (r31 + 156);
    ctx->lr = 0x800A76ECu;
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
    InvokeDirectCpu<0x8009CC04u>(ctx);
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
    r3 = (r1 + 24);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80088428u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r1 + 72);
    r4 = r3;
    r5 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 84));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 144), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 148), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 116));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 152), f0.d);
    r3 = r31;
    ctx->lr = 0x800A7740u;
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
    InvokeDirectCpu<0x800A963Cu>(ctx);
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
    r0 = MemoryInline::FlatRead16(r27);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800A7748:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A7780;
    }
}

loc_800A774C:
{
    r0 = MemoryInline::FlatRead8((r27 + 2));
}

loc_800A7754:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A7780;
    }
}

loc_800A7758:
{
    r0 = MemoryInline::FlatRead8((r27 + 3));
}

loc_800A7760:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A7780;
    }
}

loc_800A7764:
{
    r0 = MemoryInline::FlatRead8((r27 + 4));
}

loc_800A776C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A7780;
    }
}

loc_800A7770:
{
    r0 = MemoryInline::FlatRead8((r27 + 7));
    r0 = (r0 & 2);
}

loc_800A777C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A7798;
    }
}

loc_800A7780:
{
    MemoryInline::FlatWrite32((r31 + 248), r28);
    r3 = r28;
    // inline leaf 0x800A33E0 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    r3 = r0;
    // end of inlined leaf 0x800A33E0
    r3 = (r31 + 252);
    r4 = r27;
    // inline leaf 0x800A33F4 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 10u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 10u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 5));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r3 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r4 + 7));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r3 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r4 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r3 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r4 + 9));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r3 + 9), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800A33F4
}

loc_800A7798:
{
    r3 = r31;
}

loc_800A779C:
{
    r11 = (r1 + 144);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800A73DC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800A73DC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800A73DC func_800A73DC preserves=true fpr_mask=0x00000000
