#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80214608(CpuContext* ctx);
extern "C" uint64_t func_80214608_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_80214754(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80214754u);
    goto loc_80214754;

loc_80214754:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r4 = 0;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead16(r29);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    guest_range_0 = MemoryInline::ResolveRangeHost((r28 + 2), 0, 26u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r28 + 6), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead8((r29 + 2));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r28 + 8), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead16((r29 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r28 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r28 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r29 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 14u, (r28 + 16), r0);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 0u, (r28 + 2), r30);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r28 + 4), r31);
    }
    r0 = MemoryInline::FlatRead32((r29 + 12));
    MemoryInline::WriteResolved32(guest_range_0, 18u, (r28 + 20), r0);
    r0 = MemoryInline::FlatRead32((r29 + 16));
    MemoryInline::WriteResolved32(guest_range_0, 22u, (r28 + 24), r0);
}

loc_802147D0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(255))) {
        goto loc_802147DC;
    }
}

loc_802147D4:
{
    r3 = r28;
    ctx->lr = 0x802147DCu;
    if constexpr (KnownRegArgsCpuCall<0x80214608u>(&func_80214608)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80214608_B74 = func_80214608_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80214608_B74);
        r4 = static_cast<uint32_t>(regargs_result_80214608_B74 >> 32);
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
        InvokeDirectCpu<0x80214608u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_802147DC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80214754 func_80214754 preserves=true fpr_mask=0x00000000
