#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045C4F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8045C4F0;

loc_8045C4F0:
{
    r0 = MemoryInline::FlatRead8((r1 + 12));
}

loc_8045C4F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_8045C508;
    }
}

loc_8045C4FC:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    goto loc_8045C6D8;
}

loc_8045C508:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
}

loc_8045C510:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045C520;
    }
}

loc_8045C514:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    goto loc_8045C6D8;
}

loc_8045C520:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_8045C528:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8045C6D8;
    }
}

loc_8045C52C:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
}

loc_8045C6D8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 8));
    r3 = (r31 + 1);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r1 + 12));
            r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r1 + 16));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r1 + 20));
    MemoryInline::FlatWrite32(r30, r6);
    MemoryInline::FlatWrite32((r30 + 4), r5);
    MemoryInline::FlatWrite32((r30 + 8), r4);
    MemoryInline::FlatWrite32((r30 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r1 + 52));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r1 + 44));
            r30 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r1 + 40));
        }
    }
    r29 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0000003 gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8045C4F0 func_8045C4F0 preserves=true fpr_mask=0x00000000
