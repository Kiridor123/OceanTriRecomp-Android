#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8029F7A0(CpuContext* ctx);
extern "C" uint64_t func_8029F7A0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803B224C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
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

    goto loc_803B224C;

loc_803B224C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r5 = (r3 + 772);
    r4 = 0;
    r0 = 5;
    ctr = r0;
}

loc_803B2278:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 0u, r5, r4);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r5 + 2), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r5 + 4), r4);
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r5 + 6), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r5 + 8), r4);
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r5 + 10), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r5 + 12), r4);
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r5 + 14), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 16u, (r5 + 16), r4);
        MemoryInline::WriteResolved16(guest_range_0, 18u, (r5 + 18), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 20u, (r5 + 20), r4);
        MemoryInline::WriteResolved16(guest_range_0, 22u, (r5 + 22), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 24u, (r5 + 24), r4);
        MemoryInline::WriteResolved16(guest_range_0, 26u, (r5 + 26), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 28u, (r5 + 28), r4);
        MemoryInline::WriteResolved16(guest_range_0, 30u, (r5 + 30), r4);
    }
    r5 = (r5 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803B2278;
    }
}

loc_803B22C0:
{
    r31 = 0;
    MemoryInline::FlatWrite8((r3 + 932), static_cast<uint8_t>(r31));
    r30 = (r3 + 772);
    r29 = 0;
}

loc_803B22D0:
{
    r3 = MemoryInline::FlatRead16(r28);
}

loc_803B22D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B2320;
    }
}

loc_803B22DC:
{
    r0 = MemoryInline::FlatRead16((r28 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803B22E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B2320;
    }
}

loc_803B22E8:
{
    r4 = 16;
    ctx->lr = 0x803B22F0u;
    if constexpr (KnownRegArgsCpuCall<0x8029F7A0u>(&func_8029F7A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8029F7A0_124A = func_8029F7A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8029F7A0_124A);
        r4 = static_cast<uint32_t>(regargs_result_8029F7A0_124A >> 32);
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

loc_803B22F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B2320;
    }
}

loc_803B22F8:
{
    r0 = MemoryInline::FlatRead16(r28);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    r30 = (r30 + 4);
    r3 = MemoryInline::FlatRead8((r27 + 932));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r27 + 932), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite16((r28 + 2), static_cast<uint16_t>(r31));
}

loc_803B2320:
{
    r29 = (r29 + 1);
    r28 = (r28 + 4);
}

loc_803B232C:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(35))) {
        goto loc_803B22D0;
    }
}

loc_803B2330:
{
    r3 = MemoryInline::FlatRead8((r27 + 932));
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

extern "C" void func_803B224C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B224C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803B224C func_803B224C preserves=true fpr_mask=0x00000000
