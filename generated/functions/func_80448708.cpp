#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CECC8(CpuContext* ctx);
extern "C" uint64_t func_800CECC8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80448A60(CpuContext* ctx);
extern "C" uint32_t func_80448A60_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_805357BC(CpuContext* ctx);
extern "C" uint64_t func_805357BC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_805357FC(CpuContext* ctx);
extern "C" uint64_t func_805357FC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80535868(CpuContext* ctx);
extern "C" uint64_t func_80535868_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80535968(CpuContext* ctx);
extern "C" uint64_t func_80535968_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80535A14(CpuContext* ctx);
extern "C" uint64_t func_80535A14_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_80535868_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80535868_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80448708_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
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
    const uint32_t r28_entry = r28;

    goto loc_80448708;

loc_80448708:
{
    MemoryInline::FlatWriteRam32((r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    r31 = r1;
    r0 = (r3 & 255);
}

loc_80448730:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804488B8;
    }
}

loc_80448734:
{
    r3 = 0x80610000u;
    r3 = (r3 + -5544);
    r4 = 0x90650000u;
    r4 = (r4 + -32768);
    r5 = 720896;
    r5 = (r5 + -24736);
    ctx->lr = 0x80448750u;
    if constexpr (KnownRegArgsCpuCall<0x800CECC8u>(&func_800CECC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[10] = r10;
        ctx->gpr[28] = r28;
        const auto regargs_result_800CECC8_C81 = func_800CECC8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CECC8_C81);
        r4 = static_cast<uint32_t>(regargs_result_800CECC8_C81 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r10 = ctx->gpr[10];
        r13 = ctx->gpr[13];
        r28 = ctx->gpr[28];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[10] = r10;
        ctx->gpr[28] = r28;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800CECC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r10 = ctx->gpr[10];
        r13 = ctx->gpr[13];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = 164;
    r4 = 0x906F0000u;
    r4 = (r4 + 26464);
    // inline leaf 0x8007B8D4 (2 guest instruction(s))
    r3 = r4;
    // end of inlined leaf 0x8007B8D4
    r29 = r3;
}

loc_80448768:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80448774;
    }
}

loc_8044876C:
{
    MemoryInline::FlatWriteRam32((r31 + 196), r1);
    ctx->lr = 0x80448774u;
    if constexpr (KnownRegArgsCpuCall<0x80448A60u>(&func_80448A60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80448A60_15B8 = func_80448A60_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80448A60_15B8;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80448A60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80448774:
{
    r3 = r29;
    r4 = 0x90650000u;
    r4 = (r4 + -32768);
    r5 = (r13 + -20964);
    ctx->lr = 0x80448788u;
    if constexpr (KnownRegArgsCpuCall<0x805357FCu>(&func_805357FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_805357FC_1876 = func_805357FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_805357FC_1876);
        r4 = static_cast<uint32_t>(regargs_result_805357FC_1876 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x805357FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = 28;
    r30 = 0x906F0000u;
    r4 = (r30 + 26656);
    // inline leaf 0x8007B8D4 (2 guest instruction(s))
    r3 = r4;
    // end of inlined leaf 0x8007B8D4
    r28 = r3;
}

loc_804487A0:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_804487CC;
    }
}

loc_804487A4:
{
    MemoryInline::FlatWriteRam32((r31 + 172), r1);
    ctx->lr = 0x804487ACu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80535868u) && KnownTranslatedCpuCall<0x80535868u>::kAvailable && !KnownTranslatedCpuCall<0x80535868u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80535868u>()) {
        const auto state_free_result_80535868_1DE9 = func_80535868_statefree_v0(r1, r3, r31, 0x804487ACu);
        r1 = static_cast<uint32_t>(state_free_result_80535868_1DE9[0]);
        ctx->lr = static_cast<uint32_t>(state_free_result_80535868_1DE9[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80535868u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r10 = ctx->gpr[10];
        r13 = ctx->gpr[13];
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

loc_804487CC:
{
    MemoryInline::FlatWrite32((r13 + -16472), r28);
    r3 = r28;
    r4 = r29;
    ctx->lr = 0x804487DCu;
    if constexpr (KnownRegArgsCpuCall<0x80535968u>(&func_80535968)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_80535968_241D = func_80535968_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80535968_241D);
        r4 = static_cast<uint32_t>(regargs_result_80535968_241D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80535968u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = 28;
    r30 = 0x906F0000u;
    r4 = (r30 + 26816);
    // inline leaf 0x8007B8D4 (2 guest instruction(s))
    r3 = r4;
    // end of inlined leaf 0x8007B8D4
    r28 = r3;
}

loc_804487F4:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80448820;
    }
}

loc_804487F8:
{
    MemoryInline::FlatWriteRam32((r31 + 148), r1);
    // inline leaf 0x80506C9C (21 guest instruction(s))
    r4 = 0x80630000u;
    r5 = 0x80630000u;
    r4 = (r4 + 992);
    r8 = 0x80630000u;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 26u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r4);
    r5 = (r5 + 1304);
    r4 = 0;
    r0 = 63;
    r8 = (r8 + 1288);
    r7 = MemoryInline::FlatRead32(r8);
    r6 = MemoryInline::FlatRead32((r8 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r7);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r6);
    }
    r6 = MemoryInline::FlatRead32((r8 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r6);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r5);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r4);
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r3 + 24), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r3 + 20), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r3 + 21), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r3 + 22), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80506C9C
}

loc_80448820:
{
    MemoryInline::FlatWrite32((r13 + -16468), r28);
    r3 = r28;
    r4 = 0x80580000u;
    r4 = (r4 + 2072);
    r5 = 0x80660000u;
    r5 = (r5 + -21920);
    r5 = MemoryInline::FlatRead32((r5 + 2504));
    r6 = 512;
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r7 = 512;
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    ctx->lr = 0x80448850u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x80506D30u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r10 = ctx->gpr[10];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r3 = 140;
    r30 = 0x906F0000u;
    r4 = (r30 + 26944);
    // inline leaf 0x8007B8D4 (2 guest instruction(s))
    r3 = r4;
    // end of inlined leaf 0x8007B8D4
    r28 = r3;
}

loc_80448868:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80448894;
    }
}

loc_8044886C:
{
    MemoryInline::FlatWriteRam32((r31 + 124), r1);
    // inline leaf 0x805357A8 (5 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam32((r3 + 136), r0);
    // end of inlined leaf 0x805357A8
}

loc_80448894:
{
    r3 = r28;
    r4 = 0x80610000u;
    r4 = (r4 + -5524);
    r5 = MemoryInline::FlatRead32((r13 + -16468));
    ctx->lr = 0x804488A8u;
    if constexpr (KnownRegArgsCpuCall<0x805357BCu>(&func_805357BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_805357BC_36AF = func_805357BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_805357BC_36AF);
        r4 = static_cast<uint32_t>(regargs_result_805357BC_36AF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x805357BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r3 = MemoryInline::FlatRead32((r13 + -16472));
    r4 = r28;
    ctx->lr = 0x804488B4u;
    if constexpr (KnownRegArgsCpuCall<0x80535A14u>(&func_80535A14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_80535A14_3B3F = func_80535A14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80535A14_3B3F);
        r4 = static_cast<uint32_t>(regargs_result_80535A14_3B3F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80535A14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    goto loc_80448A38;
}

loc_804488B8:
{
    r3 = 0x80610000u;
    r3 = (r3 + -5544);
    r4 = 0x90350000u;
    r4 = (r4 + -32768);
    r5 = 720896;
    r5 = (r5 + -24736);
    ctx->lr = 0x804488D4u;
    if constexpr (KnownRegArgsCpuCall<0x800CECC8u>(&func_800CECC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[10] = r10;
        ctx->gpr[28] = r28;
        const auto regargs_result_800CECC8_3FF4 = func_800CECC8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CECC8_3FF4);
        r4 = static_cast<uint32_t>(regargs_result_800CECC8_3FF4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r10 = ctx->gpr[10];
        r13 = ctx->gpr[13];
        r28 = ctx->gpr[28];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[10] = r10;
        ctx->gpr[28] = r28;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800CECC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r10 = ctx->gpr[10];
        r13 = ctx->gpr[13];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = 164;
    r4 = 0x903F0000u;
    r4 = (r4 + 26464);
    // inline leaf 0x8007B8D4 (2 guest instruction(s))
    r3 = r4;
    // end of inlined leaf 0x8007B8D4
    r28 = r3;
}

loc_804488EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804488F8;
    }
}

loc_804488F0:
{
    MemoryInline::FlatWriteRam32((r31 + 100), r1);
    ctx->lr = 0x804488F8u;
    if constexpr (KnownRegArgsCpuCall<0x80448A60u>(&func_80448A60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80448A60_492E = func_80448A60_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80448A60_492E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80448A60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_804488F8:
{
    r3 = r28;
    r4 = 0x90350000u;
    r4 = (r4 + -32768);
    r5 = (r13 + -20964);
    ctx->lr = 0x8044890Cu;
    if constexpr (KnownRegArgsCpuCall<0x805357FCu>(&func_805357FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_805357FC_4BEC = func_805357FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_805357FC_4BEC);
        r4 = static_cast<uint32_t>(regargs_result_805357FC_4BEC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x805357FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = 28;
    r30 = 0x903F0000u;
    r4 = (r30 + 26656);
    // inline leaf 0x8007B8D4 (2 guest instruction(s))
    r3 = r4;
    // end of inlined leaf 0x8007B8D4
    r29 = r3;
}

loc_80448924:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80448950;
    }
}

loc_80448928:
{
    MemoryInline::FlatWriteRam32((r31 + 76), r1);
    ctx->lr = 0x80448930u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80535868u) && KnownTranslatedCpuCall<0x80535868u>::kAvailable && !KnownTranslatedCpuCall<0x80535868u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80535868u>()) {
        const auto state_free_result_80535868_515E = func_80535868_statefree_v0(r1, r3, r31, 0x80448930u);
        r1 = static_cast<uint32_t>(state_free_result_80535868_515E[0]);
        ctx->lr = static_cast<uint32_t>(state_free_result_80535868_515E[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80535868u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r10 = ctx->gpr[10];
        r13 = ctx->gpr[13];
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

loc_80448950:
{
    MemoryInline::FlatWrite32((r13 + -16472), r29);
    r3 = r29;
    r4 = r28;
    ctx->lr = 0x80448960u;
    if constexpr (KnownRegArgsCpuCall<0x80535968u>(&func_80535968)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_80535968_5792 = func_80535968_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80535968_5792);
        r4 = static_cast<uint32_t>(regargs_result_80535968_5792 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80535968u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = 28;
    r30 = 0x903F0000u;
    r4 = (r30 + 26816);
    // inline leaf 0x8007B8D4 (2 guest instruction(s))
    r3 = r4;
    // end of inlined leaf 0x8007B8D4
    r28 = r3;
}

loc_80448978:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_804489A4;
    }
}

loc_8044897C:
{
    MemoryInline::FlatWriteRam32((r31 + 52), r1);
    // inline leaf 0x80506C9C (21 guest instruction(s))
    r4 = 0x80630000u;
    r5 = 0x80630000u;
    r4 = (r4 + 992);
    r8 = 0x80630000u;
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 26u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r4);
    r5 = (r5 + 1304);
    r4 = 0;
    r0 = 63;
    r8 = (r8 + 1288);
    r7 = MemoryInline::FlatRead32(r8);
    r6 = MemoryInline::FlatRead32((r8 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r7);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r6);
    }
    r6 = MemoryInline::FlatRead32((r8 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r6);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r5);
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 16), r4);
    MemoryInline::WriteResolved16(guest_range_1, 24u, (r3 + 24), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r3 + 20), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r3 + 21), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r3 + 22), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80506C9C
}

loc_804489A4:
{
    MemoryInline::FlatWrite32((r13 + -16468), r28);
    r3 = r28;
    r4 = 0x80580000u;
    r4 = (r4 + 2072);
    r5 = 0x80660000u;
    r5 = (r5 + -21920);
    r5 = MemoryInline::FlatRead32((r5 + 2504));
    r6 = 512;
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r7 = 512;
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    ctx->lr = 0x804489D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x80506D30u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r10 = ctx->gpr[10];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r3 = 140;
    r30 = 0x903F0000u;
    r4 = (r30 + 26944);
    // inline leaf 0x8007B8D4 (2 guest instruction(s))
    r3 = r4;
    // end of inlined leaf 0x8007B8D4
    r28 = r3;
}

loc_804489EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80448A18;
    }
}

loc_804489F0:
{
    MemoryInline::FlatWriteRam32((r31 + 28), r1);
    // inline leaf 0x805357A8 (5 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam32((r3 + 136), r0);
    // end of inlined leaf 0x805357A8
}

loc_80448A18:
{
    r3 = r28;
    r4 = 0x80610000u;
    r4 = (r4 + -5524);
    r5 = MemoryInline::FlatRead32((r13 + -16468));
    ctx->lr = 0x80448A2Cu;
    if constexpr (KnownRegArgsCpuCall<0x805357BCu>(&func_805357BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_805357BC_6A22 = func_805357BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_805357BC_6A22);
        r4 = static_cast<uint32_t>(regargs_result_805357BC_6A22 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x805357BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r3 = MemoryInline::FlatRead32((r13 + -16472));
    r4 = r28;
    ctx->lr = 0x80448A38u;
    if constexpr (KnownRegArgsCpuCall<0x80535A14u>(&func_80535A14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_80535A14_6EB2 = func_80535A14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80535A14_6EB2);
        r4 = static_cast<uint32_t>(regargs_result_80535A14_6EB2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80535A14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80448A38:
{
    r10 = r31;
    r10 = MemoryInline::FlatRead32(r1);
    r0 = MemoryInline::FlatRead32((r10 + 4));
    r1 = r10;
    ctx->lr = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->gpr[28] = r28_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80448708(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80448708_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x0FFFFFFF gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80448708 func_80448708 preserves=true fpr_mask=0x00000000
