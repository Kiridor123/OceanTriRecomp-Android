#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004A270(CpuContext* ctx);
extern "C" void func_8004A270_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8004ACD0(CpuContext* ctx);
extern "C" uint64_t func_8004ACD0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8004A270_statefree(uint32_t, uint32_t);
extern "C" void func_8004A270_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_8004A494_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8004A494;

loc_8004A494:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    ctx->lr = 0x8004A4B4u;
    if constexpr (KnownRegArgsCpuCall<0x8004ACD0u>(&func_8004ACD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004ACD0_61F = func_8004ACD0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004ACD0_61F);
        r4 = static_cast<uint32_t>(regargs_result_8004ACD0_61F >> 32);
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
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 2), 0, 154u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 147u, (r30 + 149));
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 20), 0, 2828u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r31 + 20), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 148u, (r30 + 150));
    MemoryInline::WriteResolved8(guest_range_1, 589u, (r31 + 609), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 149u, (r30 + 151));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r31 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r30 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 588u, (r31 + 608), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 6u, (r30 + 8));
    r0 = (r0 & -16777216);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 580u, (r31 + 600), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 6u, (r30 + 8));
    r0 = (r0 & 16711680);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 65535);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 581u, (r31 + 601), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 6u, (r30 + 8));
    r0 = (r0 & 65280);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_2 & 16777215);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 582u, (r31 + 602), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 6u, (r30 + 8));
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 583u, (r31 + 603), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 10u, (r30 + 12));
    r0 = (r0 & -16777216);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 584u, (r31 + 604), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 10u, (r30 + 12));
    r0 = (r0 & 16711680);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & 65535);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 585u, (r31 + 605), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 10u, (r30 + 12));
    r0 = (r0 & 65280);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_5 & 16777215);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 586u, (r31 + 606), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 10u, (r30 + 12));
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 587u, (r31 + 607), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r30 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r31 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 152u, (r30 + 154));
    MemoryInline::WriteResolved8(guest_range_1, 2824u, (r31 + 2844), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 153u, (r30 + 155));
    MemoryInline::WriteResolved8(guest_range_1, 2825u, (r31 + 2845), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 150u, (r30 + 152));
    MemoryInline::WriteResolved8(guest_range_1, 2826u, (r31 + 2846), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 151u, (r30 + 153));
    MemoryInline::WriteResolved8(guest_range_1, 2827u, (r31 + 2847), static_cast<uint8_t>(r0));
    r3 = (r31 + 464);
    r4 = (r30 + 16);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 48u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, r4);
    guest_range_3 = MemoryInline::ResolveRangeHost((r3 + -96), 0, 144u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 96u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r4 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 97u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 2u, (r4 + 2));
    MemoryInline::WriteResolved16(guest_range_3, 98u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r4 + 4));
    MemoryInline::WriteResolved16(guest_range_3, 100u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 6u, (r4 + 6));
    MemoryInline::WriteResolved32(guest_range_3, 102u, (r3 + 6), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_2, 10u, (r4 + 10));
    MemoryInline::WriteResolved16(guest_range_3, 106u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r31 + 488);
    r4 = (r30 + 28);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::ReadResolved8(guest_range_2, 12u, r4);
    MemoryInline::WriteResolved8(guest_range_3, 120u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 13u, (r4 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 121u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 14u, (r4 + 2));
    MemoryInline::WriteResolved16(guest_range_3, 122u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 16u, (r4 + 4));
    MemoryInline::WriteResolved16(guest_range_3, 124u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 18u, (r4 + 6));
    MemoryInline::WriteResolved32(guest_range_3, 126u, (r3 + 6), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_2, 22u, (r4 + 10));
    MemoryInline::WriteResolved16(guest_range_3, 130u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r31 + 500);
    r4 = (r30 + 40);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::ReadResolved8(guest_range_2, 24u, r4);
    MemoryInline::WriteResolved8(guest_range_3, 132u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 25u, (r4 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 133u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 26u, (r4 + 2));
    MemoryInline::WriteResolved16(guest_range_3, 134u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 28u, (r4 + 4));
    MemoryInline::WriteResolved16(guest_range_3, 136u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 30u, (r4 + 6));
    MemoryInline::WriteResolved32(guest_range_3, 138u, (r3 + 6), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_2, 34u, (r4 + 10));
    MemoryInline::WriteResolved16(guest_range_3, 142u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r31 + 368);
    r4 = (r30 + 52);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::ReadResolved8(guest_range_2, 36u, r4);
    MemoryInline::WriteResolved8(guest_range_3, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 37u, (r4 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 38u, (r4 + 2));
    MemoryInline::WriteResolved16(guest_range_3, 2u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 40u, (r4 + 4));
    MemoryInline::WriteResolved16(guest_range_3, 4u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 42u, (r4 + 6));
    MemoryInline::WriteResolved32(guest_range_3, 6u, (r3 + 6), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_2, 46u, (r4 + 10));
    MemoryInline::WriteResolved16(guest_range_3, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r31 + 320);
    r4 = (r30 + 64);
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
    }
    r3 = (r31 + 344);
    r4 = (r30 + 76);
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
    }
    r3 = (r31 + 332);
    r4 = (r30 + 88);
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
    }
    r3 = (r31 + 356);
    r4 = (r30 + 100);
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
    }
    r3 = (r31 + 380);
    r4 = (r30 + 112);
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
    }
    r0 = MemoryInline::FlatRead8((r30 + 4));
    MemoryInline::FlatWrite8((r31 + 610), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004A494(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004A494_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FA gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8004A494 func_8004A494 preserves=true fpr_mask=0x00000000
