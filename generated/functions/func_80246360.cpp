#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80246254(CpuContext* ctx);
extern "C" uint64_t func_80246254_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_8025A844(CpuContext* ctx);
extern "C" void func_8025A844_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8025F5EC(CpuContext* ctx);
extern "C" uint64_t func_8025F5EC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8026FD70(CpuContext* ctx);
extern "C" uint64_t func_8026FD70_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_802747AC(CpuContext* ctx);
extern "C" uint32_t func_802747AC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80275B28(CpuContext* ctx);
extern "C" uint64_t func_80275B28_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80276228(CpuContext* ctx);
extern "C" uint64_t func_80276228_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80276234(CpuContext* ctx);
extern "C" uint64_t func_80276234_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802788C0(CpuContext* ctx);
extern "C" uint64_t func_802788C0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80278A50(CpuContext* ctx);
extern "C" uint64_t func_80278A50_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80278CE0(CpuContext* ctx);
extern "C" uint32_t func_80278CE0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80278D34(CpuContext* ctx);
extern "C" uint32_t func_80278D34_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802AC24C(CpuContext* ctx);
extern "C" uint32_t func_802AC24C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8033A984(CpuContext* ctx);
extern "C" uint64_t func_8033A984_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8025A844_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80278CE0_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80278D34_statefree(uint32_t, uint32_t, uint32_t);
extern "C" void func_8025A844_statefree_v0(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80278CE0_statefree_v0(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80278D34_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_80246360_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80246360u);
    goto loc_80246360;

loc_80246360:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r28 = r6;
    r9 = MemoryInline::FlatRead32((r3 + 316));
    r29 = (r9 + 4);
    r5 = (r5 & 65535);
    r6 = (r6 & 255);
    r7 = (r7 & 255);
    r8 = (r8 & 255);
    ctx->lr = 0x802463A0u;
    if constexpr (KnownRegArgsCpuCall<0x80246254u>(&func_80246254)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80246254_10E3 = func_80246254_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80246254_10E3);
        r4 = static_cast<uint32_t>(regargs_result_80246254_10E3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80246254u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        xer = ctx->xer;
    }
    r0 = 10;
    MemoryInline::FlatWrite16((r31 + 850), static_cast<uint16_t>(r0));
    r3 = r31;
    r4 = 30;
    // inline leaf 0x80277BA8 (2 guest instruction(s))
    MemoryInline::FlatWrite16((r3 + 918), static_cast<uint16_t>(r4));
    // end of inlined leaf 0x80277BA8
    r30 = 0;
    MemoryInline::FlatWrite32((r31 + 1140), r30);
    MemoryInline::FlatWrite16((r31 + 176), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r31 + 178), static_cast<uint16_t>(r30));
    r0 = MemoryInline::FlatRead8((r31 + 1628));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r31 + 1628), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 1629), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite16((r31 + 898), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r31 + 180), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite8((r31 + 996), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r31 + 997), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r31 + 998), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r31 + 999), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r31 + 1000), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r31 + 930), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r31 + 931), static_cast<uint8_t>(r30));
    r3 = r31;
    r4 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8025A844u) && KnownTranslatedCpuCall<0x8025A844u>::kAvailable && !KnownTranslatedCpuCall<0x8025A844u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8025A844u>()) {
        func_8025A844_statefree_v0(r3, r4);
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8025A844u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 616), 0, 1020u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 797u, (r31 + 1413), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved16(guest_range_1, 1018u, (r31 + 1634), static_cast<uint16_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 173u, (r31 + 789), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 258u, (r31 + 874), static_cast<uint8_t>(r30));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 324u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 324u, (r31 + 940), r30);
        MemoryInline::WriteResolved32(guest_range_1, 328u, (r31 + 944), r30);
    }
    MemoryInline::WriteResolved8(guest_range_1, 1015u, (r31 + 1631), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 289u, (r31 + 905), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 852u, (r31 + 1468), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 854u, (r31 + 1470), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 853u, (r31 + 1469), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r31 + 616), static_cast<uint8_t>(r30));
    r3 = r31;
    // inline leaf 0x8027D554 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_1, 332u, (r3 + 948), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8027D554
    r3 = r31;
    // inline leaf 0x802789F8 (22 guest instruction(s))
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 906), 0, 164u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r3 + 926), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r3 + 906), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 98u, (r3 + 1004), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 110u, (r3 + 1016), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 116u, (r3 + 1022), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 104u, (r3 + 1010), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 132u, (r3 + 1038), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 138u, (r3 + 1044), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 144u, (r3 + 1050), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 150u, (r3 + 1056), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 908), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 154u, (r3 + 1060), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r3 + 910), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 156u, (r3 + 1062), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r3 + 912), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 158u, (r3 + 1064), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 914), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 160u, (r3 + 1066), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 916), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 162u, (r3 + 1068), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x802789F8
    r3 = r31;
    // inline leaf 0x802734D0 (6 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 972u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 972u, (r3 + 1588), r0);
        MemoryInline::WriteResolved32(guest_range_1, 976u, (r3 + 1592), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 980u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 980u, (r3 + 1596), r0);
        MemoryInline::WriteResolved32(guest_range_1, 984u, (r3 + 1600), r0);
    }
    // end of inlined leaf 0x802734D0
    r3 = r31;
    // inline leaf 0x8027486C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 31));
    // end of inlined leaf 0x8027486C
    r30 = r3;
    r3 = (r3 & 255);
    r0 = (r3 + -2);
}

loc_80246464:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8024647C;
    }
}

loc_80246468:
{
}

loc_8024646C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_80246518;
    }
}

loc_80246470:
{
    r0 = MemoryInline::FlatRead16((r31 + 880));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80246478:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80246518;
    }
}

loc_8024647C:
{
    r3 = r31;
    r4 = 1;
    r5 = 0;
    ctx->lr = 0x8024648Cu;
    if constexpr (KnownRegArgsCpuCall<0x802788C0u>(&func_802788C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802788C0_34D9 = func_802788C0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802788C0_34D9);
        r4 = static_cast<uint32_t>(regargs_result_802788C0_34D9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802788C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x80246498u;
    if constexpr (KnownRegArgsCpuCall<0x80278A50u>(&func_80278A50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80278A50_3830 = func_80278A50_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80278A50_3830);
        r4 = static_cast<uint32_t>(regargs_result_80278A50_3830 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80278A50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r28 & 255);
}

loc_802464A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(6))) {
        goto loc_802464AC;
    }
}

loc_802464A4:
{
}

loc_802464A8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(17))) {
        goto loc_802464C4;
    }
}

loc_802464AC:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead8((r31 + 9));
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x802464C0u;
    if constexpr (KnownRegArgsCpuCall<0x80276234u>(&func_80276234)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_80276234_3CD1 = func_80276234_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80276234_3CD1);
        r4 = static_cast<uint32_t>(regargs_result_80276234_3CD1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80276234u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    goto loc_80246508;
}

loc_802464C4:
{
    // inline leaf 0x800CF27C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 37));
    // end of inlined leaf 0x800CF27C
    r0 = (r3 & 255);
}

loc_802464D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802464F4;
    }
}

loc_802464D4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 9), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = 9;
    r5 = 0;
    r6 = 14;
    ctx->lr = 0x802464F0u;
    if constexpr (KnownRegArgsCpuCall<0x80275B28u>(&func_80275B28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_80275B28_4653 = func_80275B28_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80275B28_4653);
        r4 = static_cast<uint32_t>(regargs_result_80275B28_4653 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80275B28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    goto loc_80246508;
}

loc_802464F4:
{
    r3 = r31;
    r4 = 9;
    r5 = 0;
    r6 = 14;
    ctx->lr = 0x80246508u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x80275754u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    xer = ctx->xer;
}

loc_80246508:
{
    r3 = r31;
    r4 = 300;
    // inline leaf 0x80277BA8 (2 guest instruction(s))
    MemoryInline::FlatWrite16((r3 + 918), static_cast<uint16_t>(r4));
    // end of inlined leaf 0x80277BA8
    goto loc_802465C0;
}

loc_80246518:
{
    r3 = r31;
    ctx->lr = 0x80246520u;
    if constexpr (KnownRegArgsCpuCall<0x8025F5ECu>(&func_8025F5EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_8025F5EC_5265 = func_8025F5EC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8025F5EC_5265);
        r4 = static_cast<uint32_t>(regargs_result_8025F5EC_5265 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8025F5ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
}

loc_80246524:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802465C0;
    }
}

loc_80246528:
{
    r3 = MemoryInline::FlatRead8((r31 + 1476));
    r0 = (r3 & 15);
}

loc_80246534:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8024655C;
    }
}

loc_80246538:
{
    r0 = (r3 & 240);
    r0 = (r0 | 5);
    MemoryInline::FlatWrite8((r31 + 1476), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = 12;
    r5 = 0;
    r6 = 14;
    ctx->lr = 0x80246558u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x80275754u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    xer = ctx->xer;
    goto loc_802465C0;
}

loc_8024655C:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80278CE0u) && KnownTranslatedCpuCall<0x80278CE0u>::kAvailable && !KnownTranslatedCpuCall<0x80278CE0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80278CE0u>()) {
        const auto state_free_result_80278CE0_5F37 = func_80278CE0_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_80278CE0_5F37[0]);
        r3 = static_cast<uint32_t>(state_free_result_80278CE0_5F37[1]);
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80278CE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
}

loc_80246568:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80246584;
    }
}

loc_8024656C:
{
    r3 = r31;
    r4 = 6;
    r5 = 44;
    r6 = 0;
    ctx->lr = 0x80246580u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x80275754u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    xer = ctx->xer;
    goto loc_802465C0;
}

loc_80246584:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80278D34u) && KnownTranslatedCpuCall<0x80278D34u>::kAvailable && !KnownTranslatedCpuCall<0x80278D34u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80278D34u>()) {
        const auto state_free_result_80278D34_6902 = func_80278D34_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_80278D34_6902[0]);
        r3 = static_cast<uint32_t>(state_free_result_80278D34_6902[1]);
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80278D34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
}

loc_80246590:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802465AC;
    }
}

loc_80246594:
{
    r3 = r31;
    r4 = 6;
    r5 = 64;
    r6 = 0;
    ctx->lr = 0x802465A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x80275754u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    xer = ctx->xer;
    goto loc_802465C0;
}

loc_802465AC:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead8((r31 + 9));
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x802465C0u;
    if constexpr (KnownRegArgsCpuCall<0x80276228u>(&func_80276228)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_80276228_7319 = func_80276228_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80276228_7319);
        r4 = static_cast<uint32_t>(regargs_result_80276228_7319 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80276228u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
}

loc_802465C0:
{
    r3 = r31;
    ctx->lr = 0x802465C8u;
    if constexpr (KnownRegArgsCpuCall<0x8026FD70u>(&func_8026FD70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8026FD70_7A51 = func_8026FD70_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8026FD70_7A51);
        r4 = static_cast<uint32_t>(regargs_result_8026FD70_7A51 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8026FD70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = r29;
    ctx->lr = 0x802465D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x800E0978u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    xer = ctx->xer;
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x802AC24Cu>(&func_802AC24C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_802AC24C_804E = func_802AC24C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802AC24C_804E;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802AC24Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802465E4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8024668C;
    }
}

loc_802465E8:
{
    r0 = (r30 & 255);
}

loc_802465F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80246614;
    }
}

loc_802465F4:
{
    r3 = 17;
    ctx->lr = 0x802465FCu;
    if constexpr (KnownRegArgsCpuCall<0x8033A984u>(&func_8033A984)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8033A984_8450 = func_8033A984_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8033A984_8450);
        r4 = static_cast<uint32_t>(regargs_result_8033A984_8450 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8033A984u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
    r3 = 19;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80246608:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80246614;
    }
}

loc_8024660C:
{
    r3 = 8;
    ctx->lr = 0x80246614u;
    if constexpr (KnownRegArgsCpuCall<0x8033A984u>(&func_8033A984)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8033A984_88AD = func_8033A984_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8033A984_88AD);
        r4 = static_cast<uint32_t>(regargs_result_8033A984_88AD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8033A984u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
}

loc_80246614:
{
    r0 = MemoryInline::FlatRead8((r31 + 21));
}

loc_8024661C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80246628;
    }
}

loc_80246620:
{
}

loc_80246624:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_8024668C;
    }
}

loc_80246628:
{
    r0 = MemoryInline::FlatRead8((r31 + 22));
}

loc_80246630:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8024663C;
    }
}

loc_80246634:
{
    r3 = 26;
    ctx->lr = 0x8024663Cu;
    if constexpr (KnownRegArgsCpuCall<0x8033A984u>(&func_8033A984)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8033A984_8E19 = func_8033A984_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8033A984_8E19);
        r4 = static_cast<uint32_t>(regargs_result_8033A984_8E19 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8033A984u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
}

loc_8024663C:
{
    r0 = MemoryInline::FlatRead8((r31 + 22));
}

loc_80246644:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80246650;
    }
}

loc_80246648:
{
    r3 = 18;
    ctx->lr = 0x80246650u;
    if constexpr (KnownRegArgsCpuCall<0x8033A984u>(&func_8033A984)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8033A984_9244 = func_8033A984_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8033A984_9244);
        r4 = static_cast<uint32_t>(regargs_result_8033A984_9244 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8033A984u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
}

loc_80246650:
{
    r0 = MemoryInline::FlatRead8((r31 + 22));
}

loc_80246658:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80246664;
    }
}

loc_8024665C:
{
    r3 = 2;
    ctx->lr = 0x80246664u;
    if constexpr (KnownRegArgsCpuCall<0x8033A984u>(&func_8033A984)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8033A984_966E = func_8033A984_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8033A984_966E);
        r4 = static_cast<uint32_t>(regargs_result_8033A984_966E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8033A984u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
}

loc_80246664:
{
    r0 = MemoryInline::FlatRead8((r31 + 22));
}

loc_8024666C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80246678;
    }
}

loc_80246670:
{
    r3 = 3;
    ctx->lr = 0x80246678u;
    if constexpr (KnownRegArgsCpuCall<0x8033A984u>(&func_8033A984)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8033A984_9A99 = func_8033A984_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8033A984_9A99);
        r4 = static_cast<uint32_t>(regargs_result_8033A984_9A99 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8033A984u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
}

loc_80246678:
{
    r0 = MemoryInline::FlatRead8((r31 + 22));
}

loc_80246680:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_8024668C;
    }
}

loc_80246684:
{
    r3 = 27;
    ctx->lr = 0x8024668Cu;
    if constexpr (KnownRegArgsCpuCall<0x8033A984u>(&func_8033A984)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8033A984_9EC5 = func_8033A984_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8033A984_9EC5);
        r4 = static_cast<uint32_t>(regargs_result_8033A984_9EC5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8033A984u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
}

loc_8024668C:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x80246698u;
    if constexpr (KnownRegArgsCpuCall<0x802747ACu>(&func_802747AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802747AC_A22B = func_802747AC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_802747AC_A22B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802747ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80246360(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80246360_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80246360 func_80246360 preserves=true fpr_mask=0x00000000
