#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8025A844(CpuContext* ctx);
extern "C" void func_8025A844_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802788C0(CpuContext* ctx);
extern "C" uint64_t func_802788C0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80278A50(CpuContext* ctx);
extern "C" uint64_t func_80278A50_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803BED2C(CpuContext* ctx);
extern "C" uint64_t func_803BED2C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8025A844_statefree(uint32_t, uint32_t);

extern "C" uint64_t func_8024603C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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

    goto loc_8024603C;

loc_8024603C:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_4, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r4 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 24), 0, 1606u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 24), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 1454u, (r3 + 1478), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_80246068:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_80246070;
    }
}

loc_8024606C:
{
    MemoryInline::WriteResolved8(guest_range_0, 1454u, (r3 + 1478), static_cast<uint8_t>(r4));
}

loc_80246070:
{
    r30 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 590u, (r3 + 614), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 849u, (r3 + 873), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 1604u, (r3 + 1628), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 1605u, (r3 + 1629), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved16(guest_range_0, 874u, (r3 + 898), static_cast<uint16_t>(r30));
    MemoryInline::WriteResolved16(guest_range_0, 156u, (r3 + 180), static_cast<uint16_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 1452u, (r3 + 1476), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 1389u, (r3 + 1413), static_cast<uint8_t>(r30));
    r3 = MemoryInline::FlatRead8((r3 + 8));
    r4 = 7;
    r5 = 1;
    ctx->lr = 0x802460A4u;
    if constexpr (KnownRegArgsCpuCall<0x803BED2Cu>(&func_803BED2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803BED2C_DC4 = func_803BED2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803BED2C_DC4);
        r4 = static_cast<uint32_t>(regargs_result_803BED2C_DC4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803BED2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_802460A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802460B8;
    }
}

loc_802460AC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r26 + 1477), static_cast<uint8_t>(r0));
    goto loc_802460BC;
}

loc_802460B8:
{
    MemoryInline::FlatWrite8((r26 + 1477), static_cast<uint8_t>(r30));
}

loc_802460BC:
{
    r30 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r26 + 789), 0, 355u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r26 + 789), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 85u, (r26 + 874), static_cast<uint8_t>(r30));
    r27 = 0;
    r29 = r26;
    r28 = (r26 + 1156);
    r31 = 255;
}

loc_802460D8:
{
    MemoryInline::FlatWrite8((r29 + 1161), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r29 + 1170), static_cast<uint8_t>(r31));
    r3 = r28;
    r4 = 0;
    r5 = r26;
    // inline leaf 0x8029F0A0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 16), r5);
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8029F0A0
    r3 = r28;
    r4 = 0;
    r5 = r26;
    // inline leaf 0x8029F0AC (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 20), r5);
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8029F0AC
    r29 = (r29 + 92);
    r28 = (r28 + 92);
    r27 = (r27 + 1);
}

loc_80246110:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(2))) {
        goto loc_802460D8;
    }
}

loc_80246114:
{
    r3 = (r26 + 1340);
    r4 = (r26 + 1380);
    // inline leaf 0x8029F1D4 (25 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = 65536;
    r0 = (r4 + -1);
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 0u, r3, r0);
        MemoryInline::WriteResolved16(guest_range_3, 2u, (r3 + 2), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 4u, (r3 + 4), r0);
        MemoryInline::WriteResolved16(guest_range_3, 6u, (r3 + 6), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 8u, (r3 + 8), r0);
        MemoryInline::WriteResolved16(guest_range_3, 10u, (r3 + 10), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 12u, (r3 + 12), r0);
        MemoryInline::WriteResolved16(guest_range_3, 14u, (r3 + 14), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 16u, (r3 + 16), r0);
        MemoryInline::WriteResolved16(guest_range_3, 18u, (r3 + 18), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 20u, (r3 + 20), r0);
        MemoryInline::WriteResolved16(guest_range_3, 22u, (r3 + 22), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 24u, (r3 + 24), r0);
        MemoryInline::WriteResolved16(guest_range_3, 26u, (r3 + 26), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 28u, (r3 + 28), r0);
        MemoryInline::WriteResolved16(guest_range_3, 30u, (r3 + 30), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 32u, (r3 + 32), r0);
        MemoryInline::WriteResolved16(guest_range_3, 34u, (r3 + 34), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 36u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 36u, (r3 + 36), r0);
        MemoryInline::WriteResolved16(guest_range_3, 38u, (r3 + 38), r0);
    }
    // end of inlined leaf 0x8029F1D4
    r31 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 351u, (r26 + 1140), r31);
    MemoryInline::WriteResolved8(guest_range_1, 207u, (r26 + 996), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 208u, (r26 + 997), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 209u, (r26 + 998), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 210u, (r26 + 999), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 211u, (r26 + 1000), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 212u, (r26 + 1001), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 141u, (r26 + 930), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 142u, (r26 + 931), static_cast<uint8_t>(r31));
    r3 = r26;
    r4 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8025A844u) && KnownTranslatedCpuCall<0x8025A844u>::kAvailable && !KnownTranslatedCpuCall<0x8025A844u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8025A844u>()) {
        const auto state_free_result_8025A844_287E = func_8025A844_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_8025A844_287E);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8025A844u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    MemoryInline::FlatWrite8((r26 + 1480), static_cast<uint8_t>(r31));
    r3 = r26;
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x80246168u;
    if constexpr (KnownRegArgsCpuCall<0x802788C0u>(&func_802788C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802788C0_2BAE = func_802788C0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802788C0_2BAE);
        r4 = static_cast<uint32_t>(regargs_result_802788C0_2BAE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
    }
    r3 = r26;
    r4 = 0;
    ctx->lr = 0x80246174u;
    if constexpr (KnownRegArgsCpuCall<0x80278A50u>(&func_80278A50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80278A50_2EEE = func_80278A50_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80278A50_2EEE);
        r4 = static_cast<uint32_t>(regargs_result_80278A50_2EEE >> 32);
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
    guest_range_2 = MemoryInline::ResolveRangeHost((r26 + 288), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r26 + 288), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r26 + 289), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r26 + 290), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r26 + 291), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r26 + 292), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r26 + 293), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r26 + 294), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r26 + 295), static_cast<uint8_t>(r31));
    r3 = r26;
    // inline leaf 0x8027A1E0 (5 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1510), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 1509), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r3 + 1512), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8027A1E0
    r3 = r26;
    // inline leaf 0x8027AC70 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1467), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8027AC70
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8024603C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8024603C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8024603C func_8024603C preserves=true fpr_mask=0x00000000
