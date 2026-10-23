#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8025E2A8(CpuContext* ctx);
extern "C" uint32_t func_8025E2A8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8025E2FC(CpuContext* ctx);
extern "C" uint64_t func_8025E2FC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8025E390(CpuContext* ctx);
extern "C" uint64_t func_8025E390_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027BCAC(CpuContext* ctx);
extern "C" uint32_t func_8027BCAC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8027BD44(CpuContext* ctx);
extern "C" uint64_t func_8027BD44_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027D9CC(CpuContext* ctx);
extern "C" uint64_t func_8027D9CC_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_8028E554(CpuContext* ctx);
extern "C" uint32_t func_8028E554_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_8025E2A8_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8025E2A8_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_8025E4AC_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;

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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8025E4AC;

loc_8025E4AC:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r29 = r3;
    r3 = (r1 + 40);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8025E4E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8025E4F4;
    }
}

loc_8025E4E4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 996), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 999), static_cast<uint8_t>(r0));
    goto loc_8025EC34;
}

loc_8025E4F4:
{
    r3 = MemoryInline::FlatRead8((r29 + 999));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_8025E500:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8025E50C;
    }
}

loc_8025E504:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r29 + 999), static_cast<uint8_t>(r0));
}

loc_8025E50C:
{
    r0 = MemoryInline::FlatRead8((r29 + 997));
    MemoryInline::FlatWrite8((r29 + 998), static_cast<uint8_t>(r0));
    r31 = 0;
    r30 = 0;
    r28 = 0;
    MemoryInline::FlatWrite8((r29 + 1000), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r29 + 1001), static_cast<uint8_t>(r28));
    r3 = MemoryInline::FlatRead8((r29 + 10));
    r0 = (r3 + -5);
}

loc_8025E534:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4))) {
        goto loc_8025E540;
    }
}

loc_8025E538:
{
}

loc_8025E53C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(11))) {
        goto loc_8025E578;
    }
}

loc_8025E540:
{
    r0 = MemoryInline::FlatRead8((r29 + 776));
}

loc_8025E548:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8025E568;
    }
}

loc_8025E54C:
{
    r0 = 7;
    MemoryInline::FlatWrite8((r29 + 997), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 996), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 999), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 1000), static_cast<uint8_t>(r0));
    goto loc_8025EC34;
}

loc_8025E568:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 996), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 999), static_cast<uint8_t>(r0));
    goto loc_8025EC34;
}

loc_8025E578:
{
    r0 = MemoryInline::FlatRead8((r29 + 24));
}

loc_8025E580:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8025E5E0;
    }
}

loc_8025E584:
{
    r0 = MemoryInline::FlatRead8((r29 + 2));
}

loc_8025E58C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8025E5A4;
    }
}

loc_8025E590:
{
    MemoryInline::FlatWrite8((r29 + 996), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r29 + 999), static_cast<uint8_t>(r28));
    r3 = r29;
    ctx->lr = 0x8025E5A0u;
    if constexpr (KnownRegArgsCpuCall<0x8025E390u>(&func_8025E390)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_8025E390_1813 = func_8025E390_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E390_1813);
        r4 = static_cast<uint32_t>(regargs_result_8025E390_1813 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8025E390u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_8025EC34;
}

loc_8025E5A4:
{
    r3 = r29;
    ctx->lr = 0x8025E5ACu;
    if constexpr (KnownRegArgsCpuCall<0x8025E390u>(&func_8025E390)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_8025E390_1D81 = func_8025E390_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E390_1D81);
        r4 = static_cast<uint32_t>(regargs_result_8025E390_1D81 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8025E390u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_8025E5B0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025EC34;
    }
}

loc_8025E5B4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 1000), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 776));
}

loc_8025E5C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8025E668;
    }
}

loc_8025E5C8:
{
    r0 = 7;
    MemoryInline::FlatWrite8((r29 + 997), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 996), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 999), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r29 + 1000), static_cast<uint8_t>(r28));
    goto loc_8025EC34;
}

loc_8025E5E0:
{
    r3 = r29;
    // inline leaf 0x8027A1FC (13 guest instruction(s))
}

loc_inl1_0x8027A1FC:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_inl1_0x8027A204:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x8027A228;
    }
}

loc_inl1_0x8027A208:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r3 + -68);
}

loc_inl1_0x8027A214:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl1_0x8027A220;
    }
}

loc_inl1_0x8027A218:
{
}

loc_inl1_0x8027A21C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(71))) {
        goto loc_inl1_0x8027A228;
    }
}

loc_inl1_0x8027A220:
{
    r3 = 1;
    goto loc_inl1_cont_8027A1FC;
}

loc_inl1_0x8027A228:
{
    r3 = 0;
}

loc_inl1_cont_8027A1FC:
{
    // end of inlined leaf 0x8027A1FC
}

loc_8025E5EC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025E5FC;
    }
}

loc_8025E5F0:
{
    MemoryInline::FlatWrite8((r29 + 996), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r29 + 999), static_cast<uint8_t>(r28));
    goto loc_8025EC34;
}

loc_8025E5FC:
{
    r0 = MemoryInline::FlatRead8((r29 + 2));
}

loc_8025E604:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8025E668;
    }
}

loc_8025E608:
{
    r3 = r29;
    ctx->lr = 0x8025E610u;
    if constexpr (KnownRegArgsCpuCall<0x8025E390u>(&func_8025E390)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_8025E390_2B4D = func_8025E390_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E390_2B4D);
        r4 = static_cast<uint32_t>(regargs_result_8025E390_2B4D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8025E390u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_8025E614:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025EC34;
    }
}

loc_8025E618:
{
    r0 = MemoryInline::FlatRead8((r29 + 296));
}

loc_8025E620:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8025E668;
    }
}

loc_8025E624:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 272));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15084));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8025E630:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8025E668;
    }
}

loc_8025E638:
{
    r0 = MemoryInline::FlatRead8((r29 + 776));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8025E640:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8025E668;
    }
}

loc_8025E644:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 1001), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8025E668;
    }
}

loc_8025E650:
{
    r0 = 7;
    MemoryInline::FlatWrite8((r29 + 997), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 996), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 999), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r29 + 1000), static_cast<uint8_t>(r28));
    goto loc_8025EC34;
}

loc_8025E668:
{
    r0 = MemoryInline::FlatRead8((r29 + 1000));
}

loc_8025E670:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8025E684;
    }
}

loc_8025E674:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 996), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 999), static_cast<uint8_t>(r0));
    goto loc_8025EC34;
}

loc_8025E684:
{
    r3 = r29;
    ctx->lr = 0x8025E68Cu;
    if constexpr (KnownRegArgsCpuCall<0x8025E390u>(&func_8025E390)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_8025E390_3818 = func_8025E390_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E390_3818);
        r4 = static_cast<uint32_t>(regargs_result_8025E390_3818 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8025E390u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_8025E690:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025EC34;
    }
}

loc_8025E694:
{
    ctx->lr = 0x8025E698u;
    if constexpr (KnownRegArgsCpuCall<0x8028E554u>(&func_8028E554)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_8028E554_3D8C = func_8028E554_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8028E554_3D8C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8028E554u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8025E6A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8025E6DC;
    }
}

loc_8025E6A4:
{
    r3 = r29;
    r4 = 0;
    r5 = 175;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8025E2FC_415A = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_415A);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_415A >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8025E6B8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025E6D4;
    }
}

loc_8025E6BC:
{
    r3 = r29;
    r4 = 12;
    r5 = 13;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8025E2FC_4620 = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_4620);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_4620 >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8025E6D0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025E6DC;
    }
}

loc_8025E6D4:
{
    r30 = 14;
    r31 = 14;
}

loc_8025E6DC:
{
    r3 = r29;
    r4 = (r1 + 40);
    r5 = (r1 + 16);
    r6 = (r1 + 12);
    ctx->lr = 0x8025E6F0u;
    if constexpr (KnownRegArgsCpuCall<0x8027D9CCu>(&func_8027D9CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8027D9CC_4B73 = func_8027D9CC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_8027D9CC_4B73);
        r4 = static_cast<uint32_t>(regargs_result_8027D9CC_4B73 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8027D9CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r28 = r3;
}

loc_8025E6F8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_8025E710;
    }
}

loc_8025E6FC:
{
}

loc_8025E700:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_8025E710;
    }
}

loc_8025E704:
{
}

loc_8025E708:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_8025E750;
    }
}

loc_8025E70C:
{
    goto loc_8025E784;
}

loc_8025E710:
{
    r3 = r29;
    r4 = 128;
    r5 = 246;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8025E2FC_5296 = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_5296);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_5296 >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8025E724:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025E784;
    }
}

loc_8025E728:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 1001), static_cast<uint8_t>(r0));
}

loc_8025E734:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(2))) {
        goto loc_8025E744;
    }
}

loc_8025E738:
{
    r30 = 15;
    r31 = 15;
    goto loc_8025E784;
}

loc_8025E744:
{
    r30 = 17;
    r31 = 17;
    goto loc_8025E784;
}

loc_8025E750:
{
    r3 = r29;
    r4 = 12;
    r5 = 12;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8025E2FC_58DE = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_58DE);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_58DE >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8025E764:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025E784;
    }
}

loc_8025E768:
{
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x8027BD44u>(&func_8027BD44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8027BD44_5D86 = func_8027BD44_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027BD44_5D86);
        r4 = static_cast<uint32_t>(regargs_result_8027BD44_5D86 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8027BD44u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = (r3 & 65535);
}

loc_8025E778:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(381))) {
        goto loc_8025E784;
    }
}

loc_8025E77C:
{
    r30 = 18;
    r31 = 18;
}

loc_8025E784:
{
    r0 = MemoryInline::FlatRead8((r29 + 873));
}

loc_8025E78C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8025E800;
    }
}

loc_8025E790:
{
    r0 = MemoryInline::FlatRead8((r29 + 10));
}

loc_8025E798:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8025E7C8;
    }
}

loc_8025E79C:
{
    r3 = MemoryInline::FlatRead16((r29 + 12));
    r0 = (r3 + -10);
}

loc_8025E7A8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4))) {
        goto loc_8025E800;
    }
}

loc_8025E7AC:
{
    r0 = (r3 + -74);
}

loc_8025E7B4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4))) {
        goto loc_8025E800;
    }
}

loc_8025E7B8:
{
}

loc_8025E7BC:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(102))) {
        goto loc_8025E7C8;
    }
}

loc_8025E7C0:
{
}

loc_8025E7C4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(105))) {
        goto loc_8025E800;
    }
}

loc_8025E7C8:
{
    r3 = r29;
    r4 = 0;
    r5 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8025E2FC_66C8 = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_66C8);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_66C8 >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8025E7DC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025E7F8;
    }
}

loc_8025E7E0:
{
    r3 = r29;
    r4 = 0;
    r5 = 74;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8025E2FC_6B8D = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_6B8D);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_6B8D >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8025E7F4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025E800;
    }
}

loc_8025E7F8:
{
    r30 = 6;
    r31 = 6;
}

loc_8025E800:
{
    r3 = r29;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15352));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -15080));
    r4 = (r1 + 20);
    ctx->lr = 0x8025E814u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80277CF8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8025E818:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025E86C;
    }
}

loc_8025E81C:
{
    r3 = r29;
    r4 = 0;
    r5 = 5;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8025E2FC_746B = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_746B);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_746B >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8025E830:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025E864;
    }
}

loc_8025E834:
{
    r3 = r29;
    r4 = 0;
    r5 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8025E2FC_792F = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_792F);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_792F >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8025E848:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025E864;
    }
}

loc_8025E84C:
{
    r3 = r29;
    r4 = 2;
    r5 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8025E2FC_7DF3 = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_7DF3);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_7DF3 >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8025E860:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025E86C;
    }
}

loc_8025E864:
{
    r30 = 6;
    r31 = 6;
}

loc_8025E86C:
{
    r3 = MemoryInline::FlatRead8((r29 + 8));
    r4 = MemoryInline::FlatRead8((r29 + 22));
    r5 = (r29 + 60);
    r6 = (r1 + 8);
    r7 = (r1 + 40);
    r8 = (r1 + 28);
    r9 = (r1 + 24);
    ctx->lr = 0x8025E88Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x803BAA14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 & 65535);
}

loc_8025E894:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_8025EB80;
    }
}

loc_8025E898:
{
    r0 = MemoryInline::FlatRead16((r1 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8025E8A0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(17))) {
        goto loc_8025EB78;
    }
}

loc_8025E8A4:
{
    r3 = 0x805C0000u;
    r3 = (r3 + 24160);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8025E988u:
        goto loc_8025E988;
        break;
    case 0x8025EB78u:
        goto loc_8025EB78;
        break;
    case 0x8025E908u:
        goto loc_8025E908;
        break;
    case 0x8025E8BCu:
        goto loc_8025E8BC;
        break;
    case 0x8025E93Cu:
        goto loc_8025E93C;
        break;
    case 0x8025E9BCu:
        goto loc_8025E9BC;
        break;
    case 0x8025EA68u:
        goto loc_8025EA68;
        break;
    case 0x8025EB6Cu:
        goto loc_8025EB6C;
        break;
    case 0x8025EA10u:
        goto loc_8025EA10;
        break;
    case 0x8025EAC4u:
        goto loc_8025EAC4;
        break;
    case 0x8025EB54u:
        goto loc_8025EB54;
        break;
    case 0x8025EB60u:
        goto loc_8025EB60;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8025E8BC:
{
    r30 = 2;
    r3 = r29;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8025E2A8u) && KnownTranslatedCpuCall<0x8025E2A8u>::kAvailable && !KnownTranslatedCpuCall<0x8025E2A8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8025E2A8u>()) {
        const auto state_free_result_8025E2A8_8F10 = func_8025E2A8_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_8025E2A8_8F10[0]);
        r3 = static_cast<uint32_t>(state_free_result_8025E2A8_8F10[1]);
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8025E2A8u>(ctx);
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8025E8CC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025E900;
    }
}

loc_8025E8D0:
{
    r3 = r29;
    r4 = 128;
    r5 = 254;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8025E2FC_94E6 = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_94E6);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_94E6 >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8025E8E4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025E900;
    }
}

loc_8025E8E8:
{
    r3 = r29;
    r4 = 128;
    r5 = 253;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8025E2FC_99AE = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_99AE);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_99AE >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8025E8FC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025EB80;
    }
}

loc_8025E900:
{
    r31 = 2;
    goto loc_8025EB80;
}

loc_8025E908:
{
    r30 = 10;
    r3 = r29;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8025E2A8u) && KnownTranslatedCpuCall<0x8025E2A8u>::kAvailable && !KnownTranslatedCpuCall<0x8025E2A8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8025E2A8u>()) {
        const auto state_free_result_8025E2A8_9ED2 = func_8025E2A8_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_8025E2A8_9ED2[0]);
        r3 = static_cast<uint32_t>(state_free_result_8025E2A8_9ED2[1]);
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8025E2A8u>(ctx);
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8025E918:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025E934;
    }
}

loc_8025E91C:
{
    r3 = r29;
    r4 = 128;
    r5 = 254;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8025E2FC_A4A8 = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_A4A8);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_A4A8 >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8025E930:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025EB80;
    }
}

loc_8025E934:
{
    r31 = 10;
    goto loc_8025EB80;
}

loc_8025E93C:
{
    r30 = 3;
    r3 = r29;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8025E2A8u) && KnownTranslatedCpuCall<0x8025E2A8u>::kAvailable && !KnownTranslatedCpuCall<0x8025E2A8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8025E2A8u>()) {
        const auto state_free_result_8025E2A8_A9CC = func_8025E2A8_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_8025E2A8_A9CC[0]);
        r3 = static_cast<uint32_t>(state_free_result_8025E2A8_A9CC[1]);
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8025E2A8u>(ctx);
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8025E94C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025E980;
    }
}

loc_8025E950:
{
    r3 = r29;
    r4 = 128;
    r5 = 254;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8025E2FC_AFA2 = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_AFA2);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_AFA2 >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8025E964:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025E980;
    }
}

loc_8025E968:
{
    r3 = r29;
    r4 = 128;
    r5 = 253;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8025E2FC_B46A = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_B46A);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_B46A >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8025E97C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025EB80;
    }
}

loc_8025E980:
{
    r31 = 3;
    goto loc_8025EB80;
}

loc_8025E988:
{
    r30 = 1;
    r3 = r29;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8025E2A8u) && KnownTranslatedCpuCall<0x8025E2A8u>::kAvailable && !KnownTranslatedCpuCall<0x8025E2A8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8025E2A8u>()) {
        const auto state_free_result_8025E2A8_B98D = func_8025E2A8_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_8025E2A8_B98D[0]);
        r3 = static_cast<uint32_t>(state_free_result_8025E2A8_B98D[1]);
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8025E2A8u>(ctx);
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8025E998:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025E9B4;
    }
}

loc_8025E99C:
{
    r3 = r29;
    r4 = 128;
    r5 = 254;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8025E2FC_BF63 = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_BF63);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_BF63 >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8025E9B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025EB80;
    }
}

loc_8025E9B4:
{
    r31 = 1;
    goto loc_8025EB80;
}

loc_8025E9BC:
{
    r0 = MemoryInline::FlatRead8((r29 + 9));
}

loc_8025E9C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8025E9D4;
    }
}

loc_8025E9C8:
{
    r30 = 0;
    r31 = 0;
    goto loc_8025EB80;
}

loc_8025E9D4:
{
    r3 = r29;
    r4 = 128;
    r5 = 254;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8025E2FC_C576 = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_C576);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_C576 >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8025E9E8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025EA04;
    }
}

loc_8025E9EC:
{
    r3 = r29;
    r4 = 128;
    r5 = 253;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8025E2FC_CA3E = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_CA3E);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_CA3E >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8025EA00:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025EB80;
    }
}

loc_8025EA04:
{
    r30 = 4;
    r31 = 4;
    goto loc_8025EB80;
}

loc_8025EA10:
{
    r3 = r29;
    // inline leaf 0x8027AC7C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 1467));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8027AC7C
}

loc_8025EA1C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025EB78;
    }
}

loc_8025EA20:
{
    r0 = MemoryInline::FlatRead8((r29 + 10));
}

loc_8025EA28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8025EA44;
    }
}

loc_8025EA2C:
{
    r3 = MemoryInline::FlatRead16((r29 + 12));
    r0 = (r3 + -84);
}

loc_8025EA38:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8025EB78;
    }
}

loc_8025EA3C:
{
}

loc_8025EA40:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(70))) {
        goto loc_8025EB78;
    }
}

loc_8025EA44:
{
    r30 = 8;
    r3 = r29;
    r4 = 128;
    r5 = 254;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8025E2FC_D35C = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_D35C);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_D35C >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8025EA5C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025EB80;
    }
}

loc_8025EA60:
{
    r31 = 8;
    goto loc_8025EB80;
}

loc_8025EA68:
{
    // inline leaf 0x800CF27C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 37));
    // end of inlined leaf 0x800CF27C
    r0 = (r3 & 255);
}

loc_8025EA74:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8025EB78;
    }
}

loc_8025EA78:
{
    r3 = r29;
    // inline leaf 0x8027AC7C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 1467));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x8027AC7C
}

loc_8025EA84:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025EB78;
    }
}

loc_8025EA88:
{
    r3 = r29;
    r4 = 0;
    r5 = 87;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl5_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl5_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl5_0x8026FEF4;
    }
}

loc_inl5_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl5_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl5_0x8026FEF4;
    }
}

loc_inl5_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl5_cont_8026FECC;
}

loc_inl5_0x8026FEF4:
{
    r3 = 0;
}

loc_inl5_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_8025EA9C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025EB78;
    }
}

loc_8025EAA0:
{
    r30 = 5;
    r3 = r29;
    r4 = 128;
    r5 = 254;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8025E2FC_DF3C = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_DF3C);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_DF3C >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8025EAB8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025EB80;
    }
}

loc_8025EABC:
{
    r31 = 5;
    goto loc_8025EB80;
}

loc_8025EAC4:
{
    r3 = r29;
    // inline leaf 0x8027AC7C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 1467));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x8027AC7C
}

loc_8025EAD0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025EB78;
    }
}

loc_8025EAD4:
{
    r3 = 0;
    ctx->lr = 0x8025EADCu;
    if constexpr (KnownRegArgsCpuCall<0x8027BCACu>(&func_8027BCAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_8027BCAC_E5EE = func_8027BCAC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8027BCAC_E5EE;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027BCACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8025EAE0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025EB78;
    }
}

loc_8025EAE4:
{
    r3 = r29;
    r4 = 0;
    r5 = 88;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl7_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl7_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl7_0x8026FEF4;
    }
}

loc_inl7_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl7_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl7_0x8026FEF4;
    }
}

loc_inl7_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl7_cont_8026FECC;
}

loc_inl7_0x8026FEF4:
{
    r3 = 0;
}

loc_inl7_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_8025EAF8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025EB78;
    }
}

loc_8025EAFC:
{
    r3 = r29;
    r4 = 12;
    r5 = 10;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl8_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl8_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl8_0x8026FEF4;
    }
}

loc_inl8_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl8_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl8_0x8026FEF4;
    }
}

loc_inl8_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl8_cont_8026FECC;
}

loc_inl8_0x8026FEF4:
{
    r3 = 0;
}

loc_inl8_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_8025EB10:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8025EB78;
    }
}

loc_8025EB14:
{
    r30 = 9;
    r3 = r29;
    r4 = 128;
    r5 = 254;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8025E2FC_F0EB = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_F0EB);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_F0EB >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8025EB2C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025EB34;
    }
}

loc_8025EB30:
{
    r31 = 9;
}

loc_8025EB34:
{
    r3 = r29;
    r4 = 12;
    r5 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8025E2FCu>(&func_8025E2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8025E2FC_F5D6 = func_8025E2FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025E2FC_F5D6);
        r4 = static_cast<uint32_t>(regargs_result_8025E2FC_F5D6 >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8025E2FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8025EB48:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025EB80;
    }
}

loc_8025EB4C:
{
    r31 = 9;
    goto loc_8025EB80;
}

loc_8025EB54:
{
    r30 = 11;
    r31 = 11;
    goto loc_8025EB80;
}

loc_8025EB60:
{
    r30 = 12;
    r31 = 12;
    goto loc_8025EB80;
}

loc_8025EB6C:
{
    r30 = 13;
    r31 = 13;
    goto loc_8025EB80;
}

loc_8025EB78:
{
    r30 = 0;
    r31 = 0;
}

loc_8025EB80:
{
    r0 = MemoryInline::FlatRead8((r29 + 776));
}

loc_8025EB88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8025EBA8;
    }
}

loc_8025EB8C:
{
    r0 = 7;
    MemoryInline::FlatWrite8((r29 + 997), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 996), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 999), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 1000), static_cast<uint8_t>(r0));
    goto loc_8025EC34;
}

loc_8025EBA8:
{
    MemoryInline::FlatWrite8((r29 + 997), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead8((r29 + 996));
}

loc_8025EBB4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r30))) {
        goto loc_8025EC34;
    }
}

loc_8025EBB8:
{
    r0 = MemoryInline::FlatRead8((r29 + 998));
}

loc_8025EBC0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r31))) {
        goto loc_8025EBE4;
    }
}

loc_8025EBC4:
{
    r0 = (r31 + -1);
}

loc_8025EBCC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_8025EBDC;
    }
}

loc_8025EBD0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 999), static_cast<uint8_t>(r0));
    goto loc_8025EBE4;
}

loc_8025EBDC:
{
    r0 = 6;
    MemoryInline::FlatWrite8((r29 + 999), static_cast<uint8_t>(r0));
}

loc_8025EBE4:
{
    r0 = MemoryInline::FlatRead8((r29 + 996));
}

loc_8025EBEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8025EC14;
    }
}

loc_8025EBF0:
{
}

loc_8025EBF4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8025EC14;
    }
}

loc_8025EBF8:
{
    r0 = MemoryInline::FlatRead8((r29 + 999));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8025EC04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8025EC34;
    }
}

loc_8025EC08:
{
    r0 = MemoryInline::FlatRead8((r29 + 997));
    MemoryInline::FlatWrite8((r29 + 996), static_cast<uint8_t>(r0));
    goto loc_8025EC34;
}

loc_8025EC14:
{
}

loc_8025EC18:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r31))) {
        goto loc_8025EC34;
    }
}

loc_8025EC1C:
{
    r0 = MemoryInline::FlatRead8((r29 + 999));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8025EC28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8025EC34;
    }
}

loc_8025EC2C:
{
    r0 = MemoryInline::FlatRead8((r29 + 997));
    MemoryInline::FlatWrite8((r29 + 996), static_cast<uint8_t>(r0));
}

loc_8025EC34:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8025E4AC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8025E4AC_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8025E4AC func_8025E4AC preserves=true fpr_mask=0x00000000
