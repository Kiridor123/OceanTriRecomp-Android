#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8029F7A0(CpuContext* ctx);
extern "C" uint64_t func_8029F7A0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803B211C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x803B211Cu);
    goto loc_803B211C;

loc_803B211C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r5 = r4;
    r3 = 0;
    r0 = 5;
    ctr = r0;
}

loc_803B2144:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 492), 0, 168u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 140u, (r5 + 632), r3);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 0u, (r5 + 492), r3);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r5 + 494), r3);
    }
    MemoryInline::WriteResolved32(guest_range_0, 144u, (r5 + 636), r3);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r5 + 496), r3);
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r5 + 498), r3);
    }
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r5 + 640), r3);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r5 + 500), r3);
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r5 + 502), r3);
    }
    MemoryInline::WriteResolved32(guest_range_0, 152u, (r5 + 644), r3);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r5 + 504), r3);
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r5 + 506), r3);
    }
    MemoryInline::WriteResolved32(guest_range_0, 156u, (r5 + 648), r3);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 16u, (r5 + 508), r3);
        MemoryInline::WriteResolved16(guest_range_0, 18u, (r5 + 510), r3);
    }
    MemoryInline::WriteResolved32(guest_range_0, 160u, (r5 + 652), r3);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 20u, (r5 + 512), r3);
        MemoryInline::WriteResolved16(guest_range_0, 22u, (r5 + 514), r3);
    }
    MemoryInline::WriteResolved32(guest_range_0, 164u, (r5 + 656), r3);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 24u, (r5 + 516), r3);
        MemoryInline::WriteResolved16(guest_range_0, 26u, (r5 + 518), r3);
    }
    r5 = (r5 + 28);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803B2144;
    }
}

loc_803B21A0:
{
    r28 = 0;
    r30 = (r4 + 492);
    r29 = r4;
    r31 = 0;
}

loc_803B21B0:
{
    r3 = MemoryInline::FlatRead16(r27);
}

loc_803B21B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B2224;
    }
}

loc_803B21BC:
{
    r0 = MemoryInline::FlatRead16((r27 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803B21C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B2224;
    }
}

loc_803B21C8:
{
    r4 = 1;
    ctx->lr = 0x803B21D0u;
    if constexpr (KnownRegArgsCpuCall<0x8029F7A0u>(&func_8029F7A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8029F7A0_1283 = func_8029F7A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8029F7A0_1283);
        r4 = static_cast<uint32_t>(regargs_result_8029F7A0_1283 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8029F7A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803B21D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B2208;
    }
}

loc_803B21D8:
{
    r3 = r30;
    r4 = r27;
    // inline leaf 0x8004A25C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A25C
    r3 = MemoryInline::FlatRead16(r27);
    // inline leaf 0x8029F740 (10 guest instruction(s))
}

loc_inl2_0x8029F740:
{
    r4 = 0x806B0000u;
    r4 = MemoryInline::FlatRead32((r4 + -4808));
    r0 = (r3 & 65535);
}

loc_inl2_0x8029F750:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl2_0x8029F758;
    }
}

loc_inl2_0x8029F754:
{
    r3 = 0;
}

loc_inl2_0x8029F758:
{
    r0 = (r3 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
}

loc_inl2_cont_8029F740:
{
    // end of inlined leaf 0x8029F740
    r0 = MemoryInline::FlatRead32((r3 + 16));
    MemoryInline::FlatWrite32((r29 + 632), r0);
    r30 = (r30 + 4);
    r29 = (r29 + 4);
    MemoryInline::FlatWrite16(r27, static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite16((r27 + 2), static_cast<uint16_t>(r31));
    goto loc_803B2224;
}

loc_803B2208:
{
    r3 = MemoryInline::FlatRead16(r27);
    r4 = 2;
    ctx->lr = 0x803B2214u;
    if constexpr (KnownRegArgsCpuCall<0x8029F7A0u>(&func_8029F7A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8029F7A0_1AE1 = func_8029F7A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8029F7A0_1AE1);
        r4 = static_cast<uint32_t>(regargs_result_8029F7A0_1AE1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8029F7A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803B2218:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B2224;
    }
}

loc_803B221C:
{
    MemoryInline::FlatWrite16(r27, static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite16((r27 + 2), static_cast<uint16_t>(r31));
}

loc_803B2224:
{
    r28 = (r28 + 1);
    r27 = (r27 + 4);
}

loc_803B2230:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(35))) {
        goto loc_803B21B0;
    }
}

loc_803B2234:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803B211C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B211C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803B211C func_803B211C preserves=true fpr_mask=0x00000000
