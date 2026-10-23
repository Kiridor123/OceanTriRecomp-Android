#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004A270(CpuContext* ctx);
extern "C" void func_8004A270_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8004ACD0(CpuContext* ctx);
extern "C" uint64_t func_8004ACD0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027EF34(CpuContext* ctx);
extern "C" uint64_t func_8027EF34_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8004A270_statefree(uint32_t, uint32_t);
extern "C" void func_8004A270_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_8004A610_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    goto loc_8004A610;

loc_8004A610:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    // inline leaf 0x8004D184 (5 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead32((r3 + 2396));
    MemoryInline::FlatWrite32((r13 + -17824), r3);
    // end of inlined leaf 0x8004D184
    r31 = r3;
}

loc_8004A634:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8004A640;
    }
}

loc_8004A638:
{
    r3 = 0;
    goto loc_8004A810;
}

loc_8004A640:
{
    r3 = r30;
    r4 = 0;
    r5 = 256;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8(r31);
    guest_range_2 = MemoryInline::ResolveRangeHost((r30 + 2), 0, 154u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 147u, (r30 + 149), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 1));
    MemoryInline::WriteResolved8(guest_range_2, 148u, (r30 + 150), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 159));
    MemoryInline::WriteResolved8(guest_range_2, 149u, (r30 + 151), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 2));
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r30 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 20));
    MemoryInline::WriteResolved32(guest_range_2, 6u, (r30 + 8), r0);
    r0 = MemoryInline::FlatRead32((r31 + 14780));
    MemoryInline::WriteResolved32(guest_range_2, 10u, (r30 + 12), r0);
    r0 = MemoryInline::FlatRead8((r31 + 158));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r30 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 14752));
    MemoryInline::WriteResolved8(guest_range_2, 152u, (r30 + 154), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 14753));
    MemoryInline::WriteResolved8(guest_range_2, 153u, (r30 + 155), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 15846));
    MemoryInline::WriteResolved8(guest_range_2, 150u, (r30 + 152), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 15847));
    MemoryInline::WriteResolved8(guest_range_2, 151u, (r30 + 153), static_cast<uint8_t>(r0));
    r3 = (r30 + 16);
    r4 = (r31 + 32);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 60u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::WriteResolved16(guest_range_3, 2u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::WriteResolved16(guest_range_3, 4u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::WriteResolved32(guest_range_3, 6u, (r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::WriteResolved16(guest_range_3, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r30 + 28);
    r4 = (r31 + 44);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::WriteResolved8(guest_range_3, 12u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 13u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::WriteResolved16(guest_range_3, 14u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::WriteResolved16(guest_range_3, 16u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::WriteResolved32(guest_range_3, 18u, (r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::WriteResolved16(guest_range_3, 22u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r30 + 40);
    r4 = (r31 + 56);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::WriteResolved8(guest_range_3, 24u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 25u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::WriteResolved16(guest_range_3, 26u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::WriteResolved16(guest_range_3, 28u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::WriteResolved32(guest_range_3, 30u, (r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::WriteResolved16(guest_range_3, 34u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r30 + 52);
    r4 = (r31 + 116);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::WriteResolved8(guest_range_3, 36u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 37u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::WriteResolved16(guest_range_3, 38u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::WriteResolved16(guest_range_3, 40u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::WriteResolved32(guest_range_3, 42u, (r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::WriteResolved16(guest_range_3, 46u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r30 + 64);
    r4 = (r31 + 68);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::WriteResolved8(guest_range_3, 48u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 49u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::WriteResolved16(guest_range_3, 50u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::WriteResolved16(guest_range_3, 52u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::WriteResolved32(guest_range_3, 54u, (r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::WriteResolved16(guest_range_3, 58u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r30 + 76);
    r4 = (r31 + 92);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
    }
    r3 = (r30 + 88);
    r4 = (r31 + 80);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
    }
    r3 = (r30 + 100);
    r4 = (r31 + 104);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
    }
    r3 = (r30 + 112);
    r4 = (r31 + 128);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
    }
    r0 = MemoryInline::FlatRead16((r31 + 15844));
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r3 = (r31 + 32);
    r4 = (r31 + 44);
    ctx->lr = 0x8004A728u;
    if constexpr (KnownRegArgsCpuCall<0x8027EF34u>(&func_8027EF34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027EF34_2DDE = func_8027EF34_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027EF34_2DDE);
        r4 = static_cast<uint32_t>(regargs_result_8027EF34_2DDE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027EF34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead8((r31 + 14778));
    MemoryInline::FlatWrite8((r30 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 16138));
    MemoryInline::FlatWrite8((r30 + 146), static_cast<uint8_t>(r0));
    r3 = (r30 + 124);
    r4 = (r31 + 16636);
    r5 = 5;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 18491), 0, 19u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r31 + 18509));
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 129), 0, 20u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r30 + 147), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r31 + 18492));
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r30 + 129), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r31 + 18493));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r30 + 130), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r31 + 18494));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r30 + 131), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r31 + 18495));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r30 + 132), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r31 + 18496));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r30 + 133), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r31 + 18497));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r30 + 134), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r31 + 18498));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r30 + 135), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r31 + 18499));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r30 + 136), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r31 + 18500));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r30 + 137), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r31 + 18501));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r30 + 138), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r31 + 18502));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r30 + 139), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r31 + 18503));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r30 + 140), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r31 + 18504));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r30 + 141), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r31 + 18505));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r30 + 142), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r31 + 18506));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r30 + 143), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r31 + 18507));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r30 + 144), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 17u, (r31 + 18508));
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r30 + 145), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r31 + 18491));
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r30 + 148), static_cast<uint8_t>(r0));
    r3 = (r30 + 156);
    r4 = (r31 + 21132);
    r5 = 86;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r31 + 16139));
    MemoryInline::FlatWrite8((r30 + 242), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 16140));
    MemoryInline::FlatWrite8((r30 + 243), static_cast<uint8_t>(r0));
    r3 = r30;
    ctx->lr = 0x8004A80Cu;
    if constexpr (KnownRegArgsCpuCall<0x8004ACD0u>(&func_8004ACD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004ACD0_41F8 = func_8004ACD0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004ACD0_41F8);
        r4 = static_cast<uint32_t>(regargs_result_8004ACD0_41F8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004ACD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 1;
}

loc_8004A810:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004A610(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004A610_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8004A610 func_8004A610 preserves=true fpr_mask=0x00000000
