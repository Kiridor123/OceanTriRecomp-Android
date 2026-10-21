#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082EC50(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x8082EC50u);
    goto loc_8082EC50;

loc_8082EC50:
{
    r3 = MemoryInline::FlatRead32((r3 + 88));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
    r0 = (r0_rot_0 & 8160);
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 32u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, r5);
    r4 = 0;
    r3 = (r3 + r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r6);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r5 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r5 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r5 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r5 + 20));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 16), r6);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r5 + 24));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r5 + 28));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 24), r6);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 28), r0);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x804B8A40u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FBE gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8082EC50 func_8082EC50 preserves=true fpr_mask=0x00000000
