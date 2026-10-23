#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802A9E84(CpuContext* ctx);
extern "C" uint32_t func_802A9E84_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8033AE34(CpuContext* ctx);
extern "C" uint64_t func_8033AE34_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8031B528_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8031B528;

loc_8031B528:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = (r3 + 492);
    r3 = r31;
    r4 = 1;
    r5 = r30;
    // inline leaf 0x8031C050 (12 guest instruction(s))
    r7 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r7)) << 16) | static_cast<uint16_t>(r7)))) {
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r3 + 6), r7);
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r3 + 4), r7);
    }
    r6 = 65536;
    r0 = (r6 + -1);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 10), r0);
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 8), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r3 + 22), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r7);
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r3 + 14), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r5);
    // end of inlined leaf 0x8031C050
    r0 = MemoryInline::FlatRead8((r30 + 418));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 24);
    r3 = (r30 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 114));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    // inline leaf 0x8031B334 (11 guest instruction(s))
}

loc_inl1_0x8031B334:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_inl1_0x8031B33C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(8))) {
        goto loc_inl1_0x8031B34C;
    }
}

loc_inl1_0x8031B340:
{
    r3 = 65536;
    r3 = (r3 + -1);
    goto loc_inl1_cont_8031B334;
}

loc_inl1_0x8031B34C:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 14754));
}

loc_inl1_cont_8031B334:
{
    // end of inlined leaf 0x8031B334
    r0 = (r3 & 65535);
}

loc_8031B574:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_8031B58C;
    }
}

loc_8031B578:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r31, r0);
    MemoryInline::FlatWrite16((r31 + 4), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 6), static_cast<uint16_t>(r0));
    goto loc_8031B5BC;
}

loc_8031B58C:
{
    r0 = MemoryInline::FlatRead8((r30 + 418));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 24);
    r3 = (r30 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 114));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    // inline leaf 0x8031B334 (11 guest instruction(s))
}

loc_inl2_0x8031B334:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_inl2_0x8031B33C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(8))) {
        goto loc_inl2_0x8031B34C;
    }
}

loc_inl2_0x8031B340:
{
    r3 = 65536;
    r3 = (r3 + -1);
    goto loc_inl2_cont_8031B334;
}

loc_inl2_0x8031B34C:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 14754));
}

loc_inl2_cont_8031B334:
{
    // end of inlined leaf 0x8031B334
    r3 = (r3 & 65535);
    r4 = (r31 + 4);
    r5 = (r31 + 6);
    r6 = 0;
    ctx->lr = 0x8031B5B8u;
    if constexpr (KnownRegArgsCpuCall<0x8033AE34u>(&func_8033AE34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8033AE34_142C = func_8033AE34_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8033AE34_142C);
        r4 = static_cast<uint32_t>(regargs_result_8033AE34_142C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8033AE34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite32(r31, r3);
}

loc_8031B5BC:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead16((r31 + 4));
    if constexpr (KnownRegArgsCpuCall<0x802A9E84u>(&func_802A9E84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_802A9E84_1803 = func_802A9E84_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_802A9E84_1803;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x802A9E84u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = (r3 & 255);
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r0));
}

loc_8031B5D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8031B5E4;
    }
}

loc_8031B5D8:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r0));
}

loc_8031B5E4:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead16((r31 + 6));
    if constexpr (KnownRegArgsCpuCall<0x802A9E84u>(&func_802A9E84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_802A9E84_1CE5 = func_802A9E84_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_802A9E84_1CE5;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x802A9E84u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = (r3 & 255);
    MemoryInline::FlatWrite16((r31 + 10), static_cast<uint16_t>(r0));
}

loc_8031B5FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8031B60C;
    }
}

loc_8031B600:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 10), static_cast<uint16_t>(r0));
}

loc_8031B60C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 17), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 24), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8031B528(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8031B528_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8031B528 func_8031B528 preserves=true fpr_mask=0x00000000
