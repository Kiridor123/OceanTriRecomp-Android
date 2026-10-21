#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802753F8(CpuContext* ctx);
extern "C" uint32_t func_802753F8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802A0368(CpuContext* ctx);
extern "C" uint64_t func_802A0368_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_802753F8_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_802753F8_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_8026A9B8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8026A9B8u);
    goto loc_8026A9B8;

loc_8026A9B8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    ctx->lr = 0x8026A9E0u;
    if constexpr (KnownRegArgsCpuCall<0x802A0368u>(&func_802A0368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802A0368_5E2 = func_802A0368_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802A0368_5E2);
        r4 = static_cast<uint32_t>(regargs_result_802A0368_5E2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802A0368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8026A9E4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8026AA1C;
    }
}

loc_8026A9E8:
{
    r0 = MemoryInline::FlatRead8((r28 + 1468));
}

loc_8026A9F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026AA1C;
    }
}

loc_8026A9F4:
{
    r0 = MemoryInline::FlatRead8((r28 + 1469));
}

loc_8026A9FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026AA1C;
    }
}

loc_8026AA00:
{
    r0 = MemoryInline::FlatRead8((r28 + 1470));
}

loc_8026AA08:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026AA1C;
    }
}

loc_8026AA0C:
{
    r3 = r28;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802753F8u) && KnownTranslatedCpuCall<0x802753F8u>::kAvailable && !KnownTranslatedCpuCall<0x802753F8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802753F8u>()) {
        const auto state_free_result_802753F8_BBB = func_802753F8_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_802753F8_BBB[0]);
        r3 = static_cast<uint32_t>(state_free_result_802753F8_BBB[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x802753F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        xer = ctx->xer;
    }
}

loc_8026AA18:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026AAE0;
    }
}

loc_8026AA1C:
{
    r31 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 125u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 120u, (r29 + 120), r31);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15008));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r29 + 84), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r29 + 88), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r29 + 92), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 124u, (r29 + 124), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 0u, r29, r31);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r29 + 2), r31);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r29 + 4), r31);
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r29 + 6), r31);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r29 + 8), r31);
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r29 + 10), r31);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r29 + 12), r31);
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r29 + 14), r31);
    }
    r0 = MemoryInline::FlatRead16((r29 + 16));
    r0 = (r0 & 65475);
}

loc_8026AA60:
{
    MemoryInline::FlatWrite16((r29 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 18));
    r0 = (r0 & 65475);
}

loc_8026AA6C:
{
    MemoryInline::FlatWrite16((r29 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 20));
    r0 = (r0 & 65475);
}

loc_8026AA78:
{
    MemoryInline::FlatWrite16((r29 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 22));
    r0 = (r0 & 65475);
}

loc_8026AA84:
{
    MemoryInline::FlatWrite16((r29 + 22), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r29 + 26), static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite16((r29 + 30), static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite16((r29 + 34), static_cast<uint16_t>(r31));
    r3 = r28;
    r4 = 11;
    // inline leaf 0x8026A77C (8 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = ~(r0 | r0);
    r0 = (r6 & r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A77C
    r3 = r28;
    r4 = 9;
    // inline leaf 0x8026A77C (8 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 220));
    r5 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = ~(r0 | r0);
    r0 = (r6 & r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    // end of inlined leaf 0x8026A77C
    r30 = 0;
}

loc_8026AAB0:
{
}

loc_8026AAB4:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(6))) {
        goto loc_8026AAC8;
    }
}

loc_8026AAB8:
{
    r3 = r28;
    ctx->lr = 0x8026AAC0u;
    if constexpr (KnownRegArgsCpuCall<0x802A0368u>(&func_802A0368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802A0368_1E43 = func_802A0368_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802A0368_1E43);
        r4 = static_cast<uint32_t>(regargs_result_802A0368_1E43 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802A0368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8026AAC4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8026AAD4;
    }
}

loc_8026AAC8:
{
    r3 = (r29 + r30);
    MemoryInline::FlatWrite8((r3 + 96), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r3 + 104), static_cast<uint8_t>(r31));
}

loc_8026AAD4:
{
    r30 = (r30 + 1);
}

loc_8026AADC:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(8))) {
        goto loc_8026AAB0;
    }
}

loc_8026AAE0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8026A9B8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8026A9B8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8026A9B8 func_8026A9B8 preserves=true fpr_mask=0x00000000
