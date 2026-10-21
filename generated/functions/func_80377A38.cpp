#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80377C10(CpuContext* ctx);
extern "C" uint32_t func_80377C10_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80427880(CpuContext* ctx);
extern "C" uint64_t func_80427880_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80427B6C(CpuContext* ctx);
extern "C" uint32_t func_80427B6C_ra0_0_8_0(CpuContext*);
extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_80377C10_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80377C10_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80377A38_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
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

    MKW_GUEST_ENTER(0x80377A38u);
    goto loc_80377A38;

loc_80377A38:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -160), 0, 168u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 164u, (r1 + 164), r0);
    r11 = (r1 + 160);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r28 = r3;
    r26 = r4;
    r27 = r5;
    r3 = (r1 + 8);
    ctx->lr = 0x80377A60u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80377C10u) && KnownTranslatedCpuCall<0x80377C10u>::kAvailable && !KnownTranslatedCpuCall<0x80377C10u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80377C10u>()) {
        const auto state_free_result_80377C10_B26 = func_80377C10_statefree_v0(r1, r3, r31, 0x80377A60u);
        r0 = static_cast<uint32_t>(state_free_result_80377C10_B26[0]);
        r1 = static_cast<uint32_t>(state_free_result_80377C10_B26[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
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
        InvokeDirectCpu<0x80377C10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
    }
    ctx->lr = 0x80377A64u;
    if constexpr (KnownRegArgsCpuCall<0x80427B6Cu>(&func_80427B6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_80427B6C_101B = func_80427B6C_ra0_0_8_0(ctx);
        r3 = regargs_result_80427B6C_101B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80427B6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80377A68:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80377BF8;
    }
}

loc_80377A6C:
{
    r30 = MemoryInline::FlatRead8((r28 + 10));
    r29 = MemoryInline::FlatRead16((r28 + 12));
    r0 = (r30 + -11);
}

loc_80377A7C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80377A90;
    }
}

loc_80377A80:
{
}

loc_80377A84:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80377A90;
    }
}

loc_80377A88:
{
    r30 = 0;
    r29 = 0;
}

loc_80377A90:
{
    r31 = (r1 + 8);
    r3 = r31;
    r4 = 0;
    r5 = 92;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    // inline leaf 0x803769CC (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + 1984);
    r3 = (r3 + 3);
    // end of inlined leaf 0x803769CC
    r4 = r3;
    r3 = (r1 + 12);
    r5 = 10;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r27 & 255);
}

loc_80377AC8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80377AE8;
    }
}

loc_80377ACC:
{
    r0 = 13;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r3 = (r31 + 20);
    r4 = (r26 + 4);
    r5 = 10;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_80377B04;
}

loc_80377AE8:
{
    r0 = 22;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    // inline leaf 0x803769CC (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + 1984);
    r3 = (r3 + 3);
    // end of inlined leaf 0x803769CC
    r4 = r3;
    r3 = (r31 + 20);
    r5 = 10;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80377B04:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 56), 0, 72u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 36u, (r1 + 92), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved16(guest_range_2, 34u, (r1 + 90), static_cast<uint16_t>(r29));
    guest_range_0 = MemoryInline::ResolveRangeHost((r28 + 22), 0, 2797u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 160u, (r28 + 182));
    MemoryInline::WriteResolved16(guest_range_2, 8u, (r1 + 64), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2794u, (r28 + 2816));
    MemoryInline::WriteResolved8(guest_range_2, 37u, (r1 + 93), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2795u, (r28 + 2817));
    MemoryInline::WriteResolved8(guest_range_2, 38u, (r1 + 94), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2796u, (r28 + 2818));
    MemoryInline::WriteResolved8(guest_range_2, 39u, (r1 + 95), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 146u, (r28 + 168));
    r0 = (r0 & 65535);
    MemoryInline::WriteResolved16(guest_range_2, 0u, (r1 + 56), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 38u, (r28 + 60));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 48u, (r1 + 104), f0.d);
    r0 = fctiwzword0;
    MemoryInline::WriteResolved16(guest_range_2, 2u, (r1 + 58), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 42u, (r28 + 64));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 56u, (r1 + 112), f0.d);
    r0 = fctiwzword1;
    MemoryInline::WriteResolved16(guest_range_2, 4u, (r1 + 60), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 46u, (r28 + 68));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 64u, (r1 + 120), f0.d);
    r0 = fctiwzword2;
    MemoryInline::WriteResolved16(guest_range_2, 6u, (r1 + 62), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r28 + 22));
    MemoryInline::WriteResolved8(guest_range_2, 40u, (r1 + 96), static_cast<uint8_t>(r0));
    r3 = (r31 + 62);
    r4 = (r28 + 2831);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045FBD4_245F = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_245F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead16((r28 + 1616));
    MemoryInline::FlatWriteRam16((r1 + 66), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 1618));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r1 + 68), static_cast<uint16_t>(r0));
    r0 = (r30 & 255);
}

loc_80377BA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80377BDC;
    }
}

loc_80377BA4:
{
}

loc_80377BA8:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(3))) {
        goto loc_80377BB4;
    }
}

loc_80377BAC:
{
}

loc_80377BB0:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(6))) {
        goto loc_80377BDC;
    }
}

loc_80377BB4:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 144));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 120), f0.d);
    r0 = fctiwzword3;
    MemoryInline::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 152));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f0.d);
    r0 = fctiwzword4;
    MemoryInline::FlatWriteRam16((r1 + 62), static_cast<uint16_t>(r0));
}

loc_80377BDC:
{
    r3 = (r31 + 72);
    r4 = (r28 + 2821);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045FBD4_2BF7 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_2BF7;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 0;
    r4 = r31;
    r5 = 92;
    ctx->lr = 0x80377BF8u;
    if constexpr (KnownRegArgsCpuCall<0x80427880u>(&func_80427880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_80427880_2EB4 = func_80427880_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80427880_2EB4);
        r4 = static_cast<uint32_t>(regargs_result_80427880_2EB4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
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
        InvokeDirectCpu<0x80427880u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
    }
}

loc_80377BF8:
{
    r11 = (r1 + 160);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80377A38(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80377A38_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80377A38 func_80377A38 preserves=true fpr_mask=0x00000000
