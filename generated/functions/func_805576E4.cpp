#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_805576E4_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x805576E4u);
    goto loc_805576E4;

loc_805576E4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r3 = 0x80650000u;
    r3 = (r3 + 10648);
    r12 = (r3 + 784);
    r31 = (r3 + 16);
    r10 = (r3 + 880);
    r30 = MemoryInline::FlatRead32((r13 + -18424));
    guest_range_0 = MemoryInline::ResolveRangeHost((r12 + 32), 0, 56u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r12 + 32));
            r9 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r12 + 36));
        }
    }
    r8 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r12 + 40));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r12 + 64));
            r6 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r12 + 68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r12 + 72));
            r4 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r12 + 76));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 48u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r12 + 80));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r12 + 84));
        }
    }
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 92), 0, 516u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r31 + 92), r30);
    MemoryInline::WriteResolved32(guest_range_1, 64u, (r31 + 156), r30);
    MemoryInline::WriteResolved32(guest_range_1, 128u, (r31 + 220), r30);
    MemoryInline::WriteResolved32(guest_range_1, 192u, (r31 + 284), r30);
    MemoryInline::WriteResolved32(guest_range_1, 256u, (r31 + 348), r30);
    MemoryInline::WriteResolved32(guest_range_1, 320u, (r31 + 412), r30);
    MemoryInline::WriteResolved32(guest_range_1, 448u, (r31 + 540), r30);
    MemoryInline::WriteResolved32(guest_range_1, 512u, (r31 + 604), r30);
    guest_range_2 = MemoryInline::ResolveRangeHost((r10 + 4), 0, 68u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r10 + 4), r11);
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r10 + 12), r9);
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r10 + 20), r8);
    MemoryInline::WriteResolved32(guest_range_2, 24u, (r10 + 28), r7);
    MemoryInline::WriteResolved32(guest_range_2, 32u, (r10 + 36), r6);
    MemoryInline::WriteResolved32(guest_range_2, 40u, (r10 + 44), r5);
    MemoryInline::WriteResolved32(guest_range_2, 48u, (r10 + 52), r4);
    MemoryInline::WriteResolved32(guest_range_2, 56u, (r10 + 60), r3);
    MemoryInline::WriteResolved32(guest_range_2, 64u, (r10 + 68), r0);
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_805576E4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805576E4_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002002 gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805576E4 func_805576E4 preserves=true fpr_mask=0x00000000
