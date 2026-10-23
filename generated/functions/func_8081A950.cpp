#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081A950(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_8081A950;

loc_8081A950:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 2244), 0, 404u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 2244), r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 2248), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 2252), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 2256), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 2260), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 2264), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 2268), r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 2272), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 2276), r0);
    MemoryInline::WriteResolved32(guest_range_0, 400u, (r3 + 2644), r0);
    r3 = 0x80840000u;
    r31 = (r3 + 17428);
    goto loc_8081A9AC;
}

loc_8081A9A0:
{
    ctr = r12;
    ctx->lr = 0x8081A9A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r31 = (r31 + 4);
}

loc_8081A9AC:
{
    r12 = MemoryInline::FlatRead32(r31);
}

loc_8081A9B4:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_8081A9A0;
    }
}

loc_8081A9B8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8081A950 func_8081A950 preserves=true fpr_mask=0x00000000
