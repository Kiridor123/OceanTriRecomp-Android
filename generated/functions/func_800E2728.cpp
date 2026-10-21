#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8007B3AC(CpuContext* ctx);
extern "C" uint64_t func_8007B3AC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_800E2728_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
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
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x800E2728u);
    goto loc_800E2728;

loc_800E2728:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 352));
}

loc_800E2750:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E2838;
    }
}

loc_800E2754:
{
    r29 = 0;
    r30 = 0;
    r31 = 2;
}

loc_800E2760:
{
    r3 = MemoryInline::FlatRead32((r28 + 352));
    r4 = r29;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 64));
    ctr = r12;
    ctx->lr = 0x800E2778u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    ctr = ctx->ctr;
}

loc_800E277C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E281C;
    }
}

loc_800E2780:
{
    r5 = 0;
    r4 = r28;
    ctr = r31;
}

loc_800E278C:
{
    r0 = MemoryInline::FlatRead32((r4 + 284));
}

loc_800E2794:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_800E279C;
    }
}

loc_800E2798:
{
    MemoryInline::FlatWrite32((r4 + 284), r30);
}

loc_800E279C:
{
    r0 = MemoryInline::FlatRead32((r4 + 288));
}

loc_800E27A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_800E27AC;
    }
}

loc_800E27A8:
{
    MemoryInline::FlatWrite32((r4 + 288), r30);
}

loc_800E27AC:
{
    r0 = MemoryInline::FlatRead32((r4 + 292));
}

loc_800E27B4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_800E27BC;
    }
}

loc_800E27B8:
{
    MemoryInline::FlatWrite32((r4 + 292), r30);
}

loc_800E27BC:
{
    r0 = MemoryInline::FlatRead32((r4 + 296));
}

loc_800E27C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_800E27CC;
    }
}

loc_800E27C8:
{
    MemoryInline::FlatWrite32((r4 + 296), r30);
}

loc_800E27CC:
{
    r0 = MemoryInline::FlatRead32((r4 + 300));
}

loc_800E27D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_800E27DC;
    }
}

loc_800E27D8:
{
    MemoryInline::FlatWrite32((r4 + 300), r30);
}

loc_800E27DC:
{
    r0 = MemoryInline::FlatRead32((r4 + 304));
}

loc_800E27E4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_800E27EC;
    }
}

loc_800E27E8:
{
    MemoryInline::FlatWrite32((r4 + 304), r30);
}

loc_800E27EC:
{
    r0 = MemoryInline::FlatRead32((r4 + 308));
}

loc_800E27F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_800E27FC;
    }
}

loc_800E27F8:
{
    MemoryInline::FlatWrite32((r4 + 308), r30);
}

loc_800E27FC:
{
    r0 = MemoryInline::FlatRead32((r4 + 312));
}

loc_800E2804:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_800E280C;
    }
}

loc_800E2808:
{
    MemoryInline::FlatWrite32((r4 + 312), r30);
}

loc_800E280C:
{
    r4 = (r4 + 32);
    r5 = (r5 + 7);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800E278C;
    }
}

loc_800E2818:
{
    ctx->lr = 0x800E281Cu;
    if constexpr (KnownRegArgsCpuCall<0x8007B3ACu>(&func_8007B3AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_8007B3AC_1477 = func_8007B3AC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8007B3AC_1477);
        r4 = static_cast<uint32_t>(regargs_result_8007B3AC_1477 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8007B3ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
        ctr = ctx->ctr;
    }
}

loc_800E281C:
{
    r29 = (r29 + 1);
}

loc_800E2824:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(3))) {
        goto loc_800E2760;
    }
}

loc_800E2828:
{
    r3 = MemoryInline::FlatRead32((r28 + 352));
    ctx->lr = 0x800E2830u;
    if constexpr (KnownRegArgsCpuCall<0x8007B3ACu>(&func_8007B3AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_8007B3AC_1C3E = func_8007B3AC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8007B3AC_1C3E);
        r4 = static_cast<uint32_t>(regargs_result_8007B3AC_1C3E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8007B3ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
        ctr = ctx->ctr;
    }
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 352), r0);
}

loc_800E2838:
{
    r31 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30312));
    guest_range_0 = MemoryInline::ResolveRangeHost((r28 + 80), 0, 188u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r28 + 80), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r28 + 92), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r28 + 116), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r28 + 140), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r28 + 164), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 108u, (r28 + 188), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 132u, (r28 + 212), f0.d);
    MemoryInline::WriteResolved32(guest_range_0, 164u, (r28 + 244), r31);
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r28 + 82), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r28 + 96), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r28 + 120), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r28 + 144), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r28 + 168), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 112u, (r28 + 192), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 136u, (r28 + 216), f0.d);
    MemoryInline::WriteResolved32(guest_range_0, 168u, (r28 + 248), r31);
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r28 + 84), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r28 + 100), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r28 + 124), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r28 + 148), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r28 + 172), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 116u, (r28 + 196), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 140u, (r28 + 220), f0.d);
    MemoryInline::WriteResolved32(guest_range_0, 172u, (r28 + 252), r31);
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r28 + 86), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r28 + 104), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r28 + 128), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r28 + 152), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 96u, (r28 + 176), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 120u, (r28 + 200), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 144u, (r28 + 224), f0.d);
    MemoryInline::WriteResolved32(guest_range_0, 176u, (r28 + 256), r31);
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r28 + 88), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r28 + 108), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r28 + 132), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r28 + 156), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 100u, (r28 + 180), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 124u, (r28 + 204), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 148u, (r28 + 228), f0.d);
    MemoryInline::WriteResolved32(guest_range_0, 180u, (r28 + 260), r31);
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r28 + 90), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r28 + 112), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r28 + 136), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r28 + 160), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 104u, (r28 + 184), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 128u, (r28 + 208), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 152u, (r28 + 232), f0.d);
    MemoryInline::WriteResolved32(guest_range_0, 184u, (r28 + 264), r31);
    r30 = 0;
}

loc_800E2904:
{
    r3 = MemoryInline::FlatRead32((r28 + 284));
}

loc_800E290C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E2918;
    }
}

loc_800E2910:
{
    ctx->lr = 0x800E2914u;
    if constexpr (KnownRegArgsCpuCall<0x8007B3ACu>(&func_8007B3AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_8007B3AC_3401 = func_8007B3AC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8007B3AC_3401);
        r4 = static_cast<uint32_t>(regargs_result_8007B3AC_3401 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8007B3ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite32((r28 + 284), r31);
}

loc_800E2918:
{
    r28 = (r28 + 4);
    r30 = (r30 + 1);
}

loc_800E2924:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(16))) {
        goto loc_800E2904;
    }
}

loc_800E2928:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800E2728(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800E2728_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800E2728 func_800E2728 preserves=true fpr_mask=0x00000000
