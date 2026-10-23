#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081C7D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_8081C7D0;

loc_8081C7D0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = 0x80840000u;
}

loc_8081C7E0:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r7 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r6 + 17576));
    r0 = 1;
    r31 = 0x80870000u;
    r31 = (r31 + -32744);
    r29 = r4;
    r28 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 69u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r4);
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r3 + 28), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r5);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r7);
    }
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r7);
    MemoryInline::WriteResolved8(guest_range_0, 64u, (r3 + 64), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 65u, (r3 + 65), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 68u, (r3 + 68), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(4))) {
        goto loc_8081C868;
    }
}

loc_8081C838:
{
    r30 = (r4 * 48);
    r3 = (r31 + 0);
    r0 = (r31 + 8);
    r3_addr_1 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_1, static_cast<uint8_t>(r7));
    r3 = (r0 + r30);
    // inline leaf 0x804CBB20 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x804CBB20
    r0 = (r31 + 200);
    r3 = (r0 + r30);
    // inline leaf 0x804CBB20 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x804CBB20
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r31 + 392);
    r3_addr_2 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_2, r28);
}

loc_8081C868:
{
    r3 = r28;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x000000CB gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081C7D0 func_8081C7D0 preserves=true fpr_mask=0x00000000
