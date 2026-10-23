#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8042B2FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_8042B2FC;

loc_8042B2FC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = MemoryInline::FlatRead32((r13 + -16440));
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A358 (7 guest instruction(s))
}

loc_inl1_0x8041A358:
{
}

loc_inl1_0x8041A35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x8041A36C;
    }
}

loc_inl1_0x8041A360:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    goto loc_inl1_cont_8041A358;
}

loc_inl1_0x8041A36C:
{
    r3 = 0;
}

loc_inl1_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
}

loc_8042B320:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8042B32C;
    }
}

loc_8042B324:
{
    r3 = 0;
    goto loc_8042B3B4;
}

loc_8042B32C:
{
    r0 = MemoryInline::FlatRead32((r31 + 68));
}

loc_8042B334:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8042B340;
    }
}

loc_8042B338:
{
    r3 = 0;
    goto loc_8042B3B4;
}

loc_8042B340:
{
    r4 = (r31 + 65536);
    r0 = MemoryInline::FlatRead32((r4 + -32100));
}

loc_8042B34C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8042B358;
    }
}

loc_8042B350:
{
    r3 = 0;
    goto loc_8042B3B4;
}

loc_8042B358:
{
    r0 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + -32100), 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r4 + -32100), r0);
    r0 = 24;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r4 + -32096), r0);
    r3 = 0x80430000u;
    r0 = (r3 + -19748);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r4 + -32092), r0);
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r4 + -32088), r0);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + -32084), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + -32080), r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + -32076), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + -32072), r0);
    r3 = 24;
    // inline leaf 0x8042A1A4 (6 guest instruction(s))
    r5 = 0;
    r4 = MemoryInline::FlatRead32((r13 + -16440));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 120), r5);
    // end of inlined leaf 0x8042A1A4
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A358 (7 guest instruction(s))
}

loc_inl4_0x8041A358:
{
}

loc_inl4_0x8041A35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x8041A36C;
    }
}

loc_inl4_0x8041A360:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    goto loc_inl4_cont_8041A358;
}

loc_inl4_0x8041A36C:
{
    r3 = 0;
}

loc_inl4_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 196));
    ctr = r12;
    ctx->lr = 0x8042B3B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r3 = 1;
}

loc_8042B3B4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FF7 gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8042B2FC func_8042B2FC preserves=true fpr_mask=0x00000000
