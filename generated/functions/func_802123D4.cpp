#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802120C4(CpuContext* ctx);
extern "C" uint64_t func_802120C4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802123D4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t ctr = ctx->ctr;

    goto loc_802123D4;

loc_802123D4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x802DE4E4 (11 guest instruction(s))
}

loc_inl0_0x802DE4E4:
{
    r3 = 0;
    r4 = 0x806C0000u;
    r0 = MemoryInline::FlatRead8((r4 + -376));
}

loc_inl0_0x802DE4F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x802DE4F8:
{
    r4 = (r4 + -376);
    r0 = MemoryInline::FlatRead8((r4 + 1));
}

loc_inl0_0x802DE504:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x802DE508:
{
    r3 = 1;
    goto loc_inl0_cont_802DE4E4;
}

loc_inl0_return:
{
}

loc_inl0_cont_802DE4E4:
{
    // end of inlined leaf 0x802DE4E4
}

loc_802123E8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802123F8;
    }
}

loc_802123EC:
{
    ctx->lr = 0x802123F0u;
    if constexpr (KnownRegArgsCpuCall<0x802120C4u>(&func_802120C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802120C4_7A8 = func_802120C4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802120C4_7A8);
        r4 = static_cast<uint32_t>(regargs_result_802120C4_7A8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802120C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802123F4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80212458;
    }
}

loc_802123F8:
{
    r0 = 0;
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 132), 0, 40u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r3 + 132), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 2u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r3 + 136), r0);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 134), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 6u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 140), r0);
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r3 + 138), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 142), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r3 + 146), r0);
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r3 + 144), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 18u, (r3 + 150), r0);
        MemoryInline::WriteResolved16(guest_range_0, 16u, (r3 + 148), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 20u, (r3 + 152), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 22u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 24u, (r3 + 156), r0);
        MemoryInline::WriteResolved16(guest_range_0, 22u, (r3 + 154), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 26u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 28u, (r3 + 160), r0);
        MemoryInline::WriteResolved16(guest_range_0, 26u, (r3 + 158), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 30u, (r3 + 162), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 34u, (r3 + 166), r0);
        MemoryInline::WriteResolved16(guest_range_0, 32u, (r3 + 164), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 36u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 38u, (r3 + 170), r0);
        MemoryInline::WriteResolved16(guest_range_0, 36u, (r3 + 168), r0);
    }
    goto loc_80212530;
}

loc_80212458:
{
    r9 = 0;
    r3 = 0x80660000u;
    r6 = (r3 + -18480);
    r3 = 0x806B0000u;
    r5 = (r3 + -12348);
    r0 = 2;
    ctr = r0;
}

loc_80212474:
{
    r0 = (r9 & 255);
    r3 = (r0 * 848);
    r7 = (r6 + r3);
    r3 = MemoryInline::FlatRead16((r7 + 708));
    r0 = (r0 * 10);
    r8 = (r5 + r0);
    MemoryInline::FlatWrite16((r8 + 132), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead16((r7 + 724));
    r0 = (r0 | r3);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r8 + 136), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r7 + 704));
    MemoryInline::FlatWrite16((r8 + 134), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead8((r7 + 735));
    r3 = MemoryInline::FlatRead8((r7 + 733));
    r0 = MemoryInline::FlatRead8((r7 + 734));
    r0 = (r3 & ~r0);
    r0 = (r4 | r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r8 + 140), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r7 + 716));
    MemoryInline::FlatWrite16((r8 + 138), static_cast<uint16_t>(r0));
    r9 = (r9 + 1);
    r0 = (r9 & 255);
    r3 = (r0 * 848);
    r7 = (r6 + r3);
    r3 = MemoryInline::FlatRead16((r7 + 708));
    r0 = (r0 * 10);
    r8 = (r5 + r0);
    MemoryInline::FlatWrite16((r8 + 132), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead16((r7 + 724));
    r0 = (r0 | r3);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r8 + 136), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r7 + 704));
    MemoryInline::FlatWrite16((r8 + 134), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead8((r7 + 735));
    r3 = MemoryInline::FlatRead8((r7 + 733));
    r0 = MemoryInline::FlatRead8((r7 + 734));
    r0 = (r3 & ~r0);
    r0 = (r4 | r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r8 + 140), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r7 + 716));
    MemoryInline::FlatWrite16((r8 + 138), static_cast<uint16_t>(r0));
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80212474;
    }
}

loc_80212530:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802123D4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802123D4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000023FB gpr_write=0x000003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802123D4 func_802123D4 preserves=true fpr_mask=0x00000000
