#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800427F0(CpuContext* ctx);
extern "C" uint64_t func_800427F0_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80042890_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80042890;

loc_80042890:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = (r3 * 848);
    r4 = 0x80660000u;
    r0 = (r4 + -18480);
    r30 = (r0 + r5);
    r31 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 202), 0, 534u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 0u, (r30 + 202), r31);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r30 + 204), r31);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r30 + 206), r31);
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r30 + 208), r31);
    }
    MemoryInline::WriteResolved16(guest_range_0, 502u, (r30 + 704), static_cast<uint16_t>(r31));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 506u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 506u, (r30 + 708), r31);
        MemoryInline::WriteResolved16(guest_range_0, 508u, (r30 + 710), r31);
    }
    MemoryInline::WriteResolved16(guest_range_0, 522u, (r30 + 724), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved16(guest_range_0, 510u, (r30 + 712), static_cast<uint16_t>(r31));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 514u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 514u, (r30 + 716), r31);
        MemoryInline::WriteResolved16(guest_range_0, 516u, (r30 + 718), r31);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 518u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 518u, (r30 + 720), r31);
        MemoryInline::WriteResolved16(guest_range_0, 520u, (r30 + 722), r31);
    }
    MemoryInline::WriteResolved8(guest_range_0, 533u, (r30 + 735), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 526u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 526u, (r30 + 728), r31);
        MemoryInline::WriteResolved16(guest_range_0, 528u, (r30 + 730), r31);
    }
    MemoryInline::WriteResolved8(guest_range_0, 530u, (r30 + 732), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 531u, (r30 + 733), static_cast<uint8_t>(r31));
    if constexpr (KnownRegArgsCpuCall<0x800427F0u>(&func_800427F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800427F0_E26 = func_800427F0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800427F0_E26);
        r4 = static_cast<uint32_t>(regargs_result_800427F0_E26 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800427F0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite16((r30 + 218), static_cast<uint16_t>(r31));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80042890(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80042890_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80042890 func_80042890 preserves=true fpr_mask=0x00000000
