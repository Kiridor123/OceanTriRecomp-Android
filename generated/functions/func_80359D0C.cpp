#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80359C44(CpuContext* ctx);
extern "C" uint32_t func_80359C44_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80359D0C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80359D0C;

loc_80359D0C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r3 = 0x806C0000u;
    r31 = (r3 + 6032);
    r3 = r31;
    r4 = 0;
    r5 = 88;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r31 + 56);
    r4 = r30;
    // inline leaf 0x80359DB0 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 32u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r5);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 16), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 20u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 20));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 24));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 20), r5);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 24), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 28));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 28), r0);
    // end of inlined leaf 0x80359DB0
    MemoryInline::FlatWriteRam32((r31 + 36), r28);
    MemoryInline::FlatWriteRam32((r31 + 40), r29);
    r3 = MemoryInline::FlatRead16(r30);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 * r0);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWriteRam16((r31 + 44), static_cast<uint16_t>(r4));
    r3 = r28;
    if constexpr (KnownRegArgsCpuCall<0x80359C44u>(&func_80359C44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80359C44_116F = func_80359C44_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80359C44_116F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80359C44u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam32((r31 + 28), r3);
}

loc_80359D84:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80359D90;
    }
}

loc_80359D88:
{
    r0 = 2;
    MemoryInline::FlatWriteRam8((r31 + 2), static_cast<uint8_t>(r0));
}

loc_80359D90:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80359D0C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80359D0C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003FB gpr_write=0x000003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80359D0C func_80359D0C preserves=true fpr_mask=0x00000000
