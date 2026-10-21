#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004A2A4(CpuContext* ctx);
extern "C" uint64_t func_8004A2A4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8043CAA4(CpuContext* ctx);
extern "C" uint64_t func_8043CAA4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8043CFD4_ra188_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r7, uint32_t arg_r8)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[7] = arg_r7;
    ctx->gpr[8] = arg_r8;

    MKW_GUEST_ENTER(0x8043CFD4u);
    goto loc_8043CFD4;

loc_8043CFD4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 8), 0, 2840u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 8));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r5 = (r5_rot_0 & -256);
    r4 = 0x806E0000u;
    r0 = (r4 + -32080);
    r4 = (r0 + r5);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 20));
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 20u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r4, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 601u, (r3 + 609));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 21u, (r3 + 29));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r4 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 600u, (r3 + 608));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r4 + 3), static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 595u, (r3 + 603));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 594u, (r3 + 602));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & -256);
    r6 = (r5 | r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 592u, (r3 + 600));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r5 = (r5_rot_1 & -16777216);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 593u, (r3 + 601));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & -65536);
    r0 = (r5 | r0);
    r0 = (r6 | r0);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r4 + 4), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r3 + 28));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r4 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2836u, (r3 + 2844));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r4 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2837u, (r3 + 2845));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r4 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 602u, (r3 + 610));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r4 + 11), static_cast<uint8_t>(r0));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 599u, (r3 + 607));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 598u, (r3 + 606));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & -256);
    r6 = (r5 | r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 596u, (r3 + 604));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r5 = (r5_rot_2 & -16777216);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 597u, (r3 + 605));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_3 & -65536);
    r0 = (r5 | r0);
    r0 = (r6 | r0);
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r4 + 16), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2838u, (r3 + 2846));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r4 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2839u, (r3 + 2847));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r4 + 13), static_cast<uint8_t>(r0));
    r0 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 632), 0, 136u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 0u, (r3 + 632), r0);
        MemoryInline::WriteResolved16(guest_range_2, 2u, (r3 + 634), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 4u, (r3 + 636), r0);
        MemoryInline::WriteResolved16(guest_range_2, 6u, (r3 + 638), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 8u, (r3 + 640), r0);
        MemoryInline::WriteResolved16(guest_range_2, 10u, (r3 + 642), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 12u, (r3 + 644), r0);
        MemoryInline::WriteResolved16(guest_range_2, 14u, (r3 + 646), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 16u, (r3 + 648), r0);
        MemoryInline::WriteResolved16(guest_range_2, 18u, (r3 + 650), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 20u, (r3 + 652), r0);
        MemoryInline::WriteResolved16(guest_range_2, 22u, (r3 + 654), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 24u, (r3 + 656), r0);
        MemoryInline::WriteResolved16(guest_range_2, 26u, (r3 + 658), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 28u, (r3 + 660), r0);
        MemoryInline::WriteResolved16(guest_range_2, 30u, (r3 + 662), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 32u, (r3 + 664), r0);
        MemoryInline::WriteResolved16(guest_range_2, 34u, (r3 + 666), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 36u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 36u, (r3 + 668), r0);
        MemoryInline::WriteResolved16(guest_range_2, 38u, (r3 + 670), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 40u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 40u, (r3 + 672), r0);
        MemoryInline::WriteResolved16(guest_range_2, 42u, (r3 + 674), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 44u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 44u, (r3 + 676), r0);
        MemoryInline::WriteResolved16(guest_range_2, 46u, (r3 + 678), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 48u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 48u, (r3 + 680), r0);
        MemoryInline::WriteResolved16(guest_range_2, 50u, (r3 + 682), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 52u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 52u, (r3 + 684), r0);
        MemoryInline::WriteResolved16(guest_range_2, 54u, (r3 + 686), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 56u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 56u, (r3 + 688), r0);
        MemoryInline::WriteResolved16(guest_range_2, 58u, (r3 + 690), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 60u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 60u, (r3 + 692), r0);
        MemoryInline::WriteResolved16(guest_range_2, 62u, (r3 + 694), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 64u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 64u, (r3 + 696), r0);
        MemoryInline::WriteResolved16(guest_range_2, 66u, (r3 + 698), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 68u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 68u, (r3 + 700), r0);
        MemoryInline::WriteResolved16(guest_range_2, 70u, (r3 + 702), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 72u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 72u, (r3 + 704), r0);
        MemoryInline::WriteResolved16(guest_range_2, 74u, (r3 + 706), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 76u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 76u, (r3 + 708), r0);
        MemoryInline::WriteResolved16(guest_range_2, 78u, (r3 + 710), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 80u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 80u, (r3 + 712), r0);
        MemoryInline::WriteResolved16(guest_range_2, 82u, (r3 + 714), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 84u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 84u, (r3 + 716), r0);
        MemoryInline::WriteResolved16(guest_range_2, 86u, (r3 + 718), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 88u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 88u, (r3 + 720), r0);
        MemoryInline::WriteResolved16(guest_range_2, 90u, (r3 + 722), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 92u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 92u, (r3 + 724), r0);
        MemoryInline::WriteResolved16(guest_range_2, 94u, (r3 + 726), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 104u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 104u, (r3 + 736), r0);
        MemoryInline::WriteResolved16(guest_range_2, 106u, (r3 + 738), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 108u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 108u, (r3 + 740), r0);
        MemoryInline::WriteResolved16(guest_range_2, 110u, (r3 + 742), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 112u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 112u, (r3 + 744), r0);
        MemoryInline::WriteResolved16(guest_range_2, 114u, (r3 + 746), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 116u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 116u, (r3 + 748), r0);
        MemoryInline::WriteResolved16(guest_range_2, 118u, (r3 + 750), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 120u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 120u, (r3 + 752), r0);
        MemoryInline::WriteResolved16(guest_range_2, 122u, (r3 + 754), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 124u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 124u, (r3 + 756), r0);
        MemoryInline::WriteResolved16(guest_range_2, 126u, (r3 + 758), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 128u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 128u, (r3 + 760), r0);
        MemoryInline::WriteResolved16(guest_range_2, 130u, (r3 + 762), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 132u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 132u, (r3 + 764), r0);
        MemoryInline::WriteResolved16(guest_range_2, 134u, (r3 + 766), r0);
    }
    r3 = r4;
    r4 = r31;
    ctx->lr = 0x8043D1B4u;
    if constexpr (KnownRegArgsCpuCall<0x8004A2A4u>(&func_8004A2A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8004A2A4_3AF6 = func_8004A2A4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004A2A4_3AF6);
        r4 = static_cast<uint32_t>(regargs_result_8004A2A4_3AF6 >> 32);
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
        InvokeDirectCpu<0x8004A2A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = r31;
    ctx->lr = 0x8043D1BCu;
    if constexpr (KnownRegArgsCpuCall<0x8043CAA4u>(&func_8043CAA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8043CAA4_3E5F = func_8043CAA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8043CAA4_3E5F);
        r4 = static_cast<uint32_t>(regargs_result_8043CAA4_3E5F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8043CAA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8043CFD4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8043CFD4_ra188_0_18_0(ctx, ctx->gpr[3], ctx->gpr[7], ctx->gpr[8]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000218A gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8043CFD4 func_8043CFD4 preserves=true fpr_mask=0x00000000
