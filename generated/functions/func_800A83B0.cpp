#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A8284(CpuContext* ctx);
extern "C" uint64_t func_800A8284_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800A89A8(CpuContext* ctx);
extern "C" uint64_t func_800A89A8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800A8A68(CpuContext* ctx);
extern "C" uint64_t func_800A8A68_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_800A8A6C(CpuContext* ctx);
extern "C" uint32_t func_800A8A6C_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_800AEE70(CpuContext* ctx);
extern "C" uint32_t func_800AEE70_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8035B9FC(CpuContext* ctx);
extern "C" uint64_t func_8035B9FC_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800AEE70_statefree(uint32_t, uint32_t);
extern "C" void func_800AEE70_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_800A83B0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_800A8980_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
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
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x800A83B0u);
    goto loc_800A83B0;

loc_800A83B0:
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
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_2, 120u, (r1 + 120), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_2, 128u, (r1 + 128), r0);
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800A8414:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A842C;
    }
}

loc_800A8418:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800A8424:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A842C;
    }
}

loc_800A8428:
{
    r10 = 0;
}

loc_800A842C:
{
}

loc_800A8430:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800A8448;
    }
}

loc_800A8434:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800A8440:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A8448;
    }
}

loc_800A8444:
{
    r9 = 0;
}

loc_800A8448:
{
}

loc_800A844C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A8460;
    }
}

loc_800A8450:
{
    r0 = (r11 + 1073741824);
}

loc_800A8458:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A8460;
    }
}

loc_800A845C:
{
    r8 = 0;
}

loc_800A8460:
{
}

loc_800A8464:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A847C;
    }
}

loc_800A8468:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800A8474:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A847C;
    }
}

loc_800A8478:
{
    r7 = 0;
}

loc_800A847C:
{
}

loc_800A8480:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A8498;
    }
}

loc_800A8484:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800A8490:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A8498;
    }
}

loc_800A8494:
{
    r6 = 0;
}

loc_800A8498:
{
}

loc_800A849C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A84B4;
    }
}

loc_800A84A0:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A84AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A84B4;
    }
}

loc_800A84B0:
{
    r5 = 0;
}

loc_800A84B4:
{
}

loc_800A84B8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A84DC;
    }
}

loc_800A84BC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 12304);
    r4 = 768;
    r5 = 0x80590000u;
    r5 = (r5 + 12792);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A84DCu;
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

loc_800A84DC:
{
    r3 = MemoryInline::FlatRead16((r28 + 224));
}

loc_800A84E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800A84F4;
    }
}

loc_800A84E8:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r28 + 224), static_cast<uint16_t>(r0));
    goto loc_800A897C;
}

loc_800A84F4:
{
    r0 = MemoryInline::FlatRead16((r28 + 48));
    MemoryInline::FlatWrite16((r28 + 224), static_cast<uint16_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31388));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 52));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800A8508:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A8558;
    }
}

loc_800A850C:
{
    r3 = (r28 + 236);
    ctx->lr = 0x800A8514u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_1DED = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_1DED;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800A8A6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r0 = MemoryInline::FlatRead16((r28 + 48));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31384));
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 120));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 52));
    f2.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31364));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->lr = 0x800A8540u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A68u>(&func_800A8A68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_800A8A68_2395 = func_800A8A68_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_800A8A68_2395);
        r4 = static_cast<uint32_t>(regargs_result_800A8A68_2395 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x800A8A68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    }
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 136), f0.d);
    r3 = fctiwzword0;
    r0 = MemoryInline::FlatRead16((r28 + 224));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite16((r28 + 224), static_cast<uint16_t>(r0));
}

loc_800A8558:
{
    r0 = MemoryInline::FlatRead32((r28 + 36));
    r0 = (r0 & 131072);
}

loc_800A8564:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A8584;
    }
}

loc_800A8568:
{
    r0 = MemoryInline::FlatRead16((r28 + 50));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31384));
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 128));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r28 + 56), f0.d);
    goto loc_800A8678;
}

loc_800A8584:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31388));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 44));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800A8590:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A859C;
    }
}

loc_800A8594:
{
    f31.d = MemoryInline::FlatReadFloat32((r28 + 40));
    goto loc_800A85C8;
}

loc_800A859C:
{
    r3 = (r28 + 236);
    ctx->lr = 0x800A85A4u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_2DC0 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_2DC0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800A8A6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31360));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31364));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 44));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
}

loc_800A85C8:
{
    r0 = MemoryInline::FlatRead32((r28 + 36));
    r0 = (r0 & 256);
}

loc_800A85D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A8640;
    }
}

loc_800A85D8:
{
    r3 = MemoryInline::FlatRead32((r28 + 188));
    r31 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r28;
    r4 = 0;
    ctx->lr = 0x800A85F4u;
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
    r4 = r3;
    r3 = (r1 + 32);
    r5 = (r28 + 144);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    r3 = (r1 + 32);
    r4 = (r31 + 65536);
    r4 = (r4 + -16352);
    r5 = (r31 + 65536);
    f1.d = MemoryInline::FlatReadFloat32((r5 + -16292));
    f2.d = MemoryInline::FlatReadFloat32((r5 + -16288));
    f3.d = MemoryInline::FlatReadFloat32((r28 + 68));
    f4.d = MemoryInline::FlatReadFloat32((r28 + 64));
    ctx->lr = 0x800A8628u;
    if constexpr (KnownRegArgsCpuCall<0x800A8284u>(&func_800A8284)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
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
        const auto regargs_result_800A8284_3BE0 = func_800A8284_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800A8284_3BE0);
        r4 = static_cast<uint32_t>(regargs_result_800A8284_3BE0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        InvokeDirectCpu<0x800A8284u>(ctx);
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
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31364));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 72));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f31.d = PpcFmulsInline(f31.d, f0.d);
}

loc_800A8640:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 56));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
    MemoryInline::FlatWriteFloat32((r28 + 56), f2.d);
    r0 = MemoryInline::FlatRead8((r28 + 220));
}

loc_800A8654:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A8678;
    }
}

loc_800A8658:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31388));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 40));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800A8664:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A8678;
    }
}

loc_800A8668:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31364));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_800A8670:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800A8678;
    }
}

loc_800A8674:
{
    MemoryInline::FlatWriteFloat32((r28 + 56), f0.d);
}

loc_800A8678:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31364));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800A8684:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A8968;
    }
}

loc_800A868C:
{
    // inline leaf 0x800B28DC (3 guest instruction(s))
    r3 = 0x80690000u;
    r3 = (r3 + 27160);
    // end of inlined leaf 0x800B28DC
    r3 = MemoryInline::FlatRead32((r28 + 184));
    // inline leaf 0x800A48C8 (2 guest instruction(s))
    r3 = (r3 + 8);
    // end of inlined leaf 0x800A48C8
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r28 + 240));
}

loc_800A86A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A893C;
    }
}

loc_800A86A8:
{
    r4 = 1;
    r5 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r6 = MemoryInline::FlatRead32((r28 + 188));
    r11 = (r6 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800A86D0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A86E8;
    }
}

loc_800A86D4:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800A86E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A86E8;
    }
}

loc_800A86E4:
{
    r10 = 0;
}

loc_800A86E8:
{
}

loc_800A86EC:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800A8704;
    }
}

loc_800A86F0:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800A86FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A8704;
    }
}

loc_800A8700:
{
    r9 = 0;
}

loc_800A8704:
{
}

loc_800A8708:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A871C;
    }
}

loc_800A870C:
{
    r0 = (r11 + 1073741824);
}

loc_800A8714:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A871C;
    }
}

loc_800A8718:
{
    r8 = 0;
}

loc_800A871C:
{
}

loc_800A8720:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A8738;
    }
}

loc_800A8724:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800A8730:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A8738;
    }
}

loc_800A8734:
{
    r7 = 0;
}

loc_800A8738:
{
}

loc_800A873C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A8754;
    }
}

loc_800A8740:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800A874C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A8754;
    }
}

loc_800A8750:
{
    r5 = 0;
}

loc_800A8754:
{
}

loc_800A8758:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A8770;
    }
}

loc_800A875C:
{
    r3 = (r6 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A8768:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A8770;
    }
}

loc_800A876C:
{
    r4 = 0;
}

loc_800A8770:
{
}

loc_800A8774:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800A8794;
    }
}

loc_800A8778:
{
    r3 = 0x80590000u;
    r3 = (r3 + 12304);
    r4 = 835;
    r5 = 0x80590000u;
    r5 = (r5 + 12844);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A8794u;
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

loc_800A8794:
{
    r3 = MemoryInline::FlatRead32((r28 + 188));
    r0 = MemoryInline::FlatRead32((r3 + 72));
}

loc_800A87A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A8894;
    }
}

loc_800A87A4:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r28 + 36), 0, 156u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 20u, (r28 + 56));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 136), f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r28 + 36));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 40u, (r28 + 76));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 44u, (r28 + 80));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 48u, (r28 + 84));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 52u, (r28 + 88));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 56u, (r28 + 92));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 60u, (r28 + 96));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    r0 = MemoryInline::FlatRead16((r31 + 10));
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 12));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31376));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 120));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31392));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    r3 = (r1 + 72);
    r4 = r30;
    // inline leaf 0x800A8A04 (25 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 4));
        }
    }
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r5);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r5);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 16), r5);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 20), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 24), r5);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 28), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r4 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r4 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + 32), r5);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r3 + 36), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r4 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r4 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + 40), r5);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r3 + 44), r0);
    }
    // end of inlined leaf 0x800A8A04
    r3 = r28;
    r4 = r29;
    r5 = (r1 + 28);
    r6 = (r1 + 24);
    r7 = (r1 + 48);
    r8 = (r1 + 8);
    r9 = (r1 + 20);
    r10 = (r1 + 72);
    r11 = MemoryInline::ReadResolved32(guest_range_3, 152u, (r28 + 188));
    r12 = MemoryInline::FlatRead32((r11 + 72));
    ctr = r12;
    ctx->lr = 0x800A885Cu;
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
    r3 = MemoryInline::FlatRead32((r28 + 240));
    r4 = r28;
    r5 = r29;
    r6 = MemoryInline::FlatRead32((r1 + 28));
    r7 = MemoryInline::FlatRead32((r1 + 24));
    r8 = (r1 + 48);
    r9 = MemoryInline::FlatRead16((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r10 = (r1 + 72);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x800A8890u;
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
    goto loc_800A88F4;
}

loc_800A8894:
{
    r3 = MemoryInline::FlatRead32((r28 + 240));
    r4 = r28;
    r5 = r29;
    f0.d = MemoryInline::FlatReadFloat32((r28 + 56));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 136), f0.d);
    r6 = fctiwzword2;
    r7 = MemoryInline::FlatRead32((r28 + 36));
    r8 = (r28 + 76);
    r9 = MemoryInline::FlatRead16((r31 + 10));
    r0 = MemoryInline::FlatRead8((r31 + 12));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31376));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 128));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31392));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r10 = r30;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x800A88F4u;
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
}

loc_800A88F4:
{
    r3 = (r1 + 16);
    r4 = 0;
    // inline leaf 0x800A89FC (2 guest instruction(s))
    MemoryInline::FlatWriteRam32(r3, r4);
    // end of inlined leaf 0x800A89FC
    r3 = (r1 + 12);
    r4 = r29;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800AEE70u) && KnownTranslatedCpuCall<0x800AEE70u>::kAvailable && !KnownTranslatedCpuCall<0x800AEE70u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800AEE70u>()) {
        func_800AEE70_statefree_v0(r3, r4);
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
        InvokeDirectCpu<0x800AEE70u>(ctx);
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
    r3 = (r1 + 16);
    r4 = (r1 + 12);
    // inline leaf 0x800A89F0 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x800A89F0
    r3 = (r1 + 16);
    ctx->lr = 0x800A8920u;
    if constexpr (KnownRegArgsCpuCall<0x800A89A8u>(&func_800A89A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800A89A8_8FD9 = func_800A89A8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800A89A8_8FD9);
        r4 = static_cast<uint32_t>(regargs_result_800A89A8_8FD9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x800A89A8u>(ctx);
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
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryInline::FlatRead8((r3 + 3));
    r0 = (r0 & 32);
}

loc_800A892C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A893C;
    }
}

loc_800A8930:
{
    r3 = MemoryInline::FlatRead32((r28 + 188));
    r3 = MemoryInline::FlatRead32((r3 + 68));
    ctx->lr = 0x800A893Cu;
    if constexpr (KnownRegArgsCpuCall<0x8035B9FCu>(&func_8035B9FC)) {
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
        ctx->ctr = ctr;
        const auto regargs_result_8035B9FC_9732 = func_8035B9FC_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8035B9FC_9732);
        r4 = static_cast<uint32_t>(regargs_result_8035B9FC_9732 >> 32);
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8035B9FCu>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_800A893C:
{
    f2.d = MemoryInline::FlatReadFloat32((r28 + 56));
    f0.d = PPC_Fctiwz(f2.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword3;
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31376));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 120));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 56), f0.d);
}

loc_800A8968:
{
    r0 = MemoryInline::FlatRead8((r28 + 220));
}

loc_800A8970:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A897C;
    }
}

loc_800A8974:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 220), static_cast<uint8_t>(r0));
}

loc_800A897C:
{
    r0 = 168;
    addr_psqx_800A8980_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800A8980_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 160));
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800A83B0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800A83B0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800A83B0 func_800A83B0 preserves=true fpr_mask=0x00000000
