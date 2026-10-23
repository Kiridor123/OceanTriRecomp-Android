#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008228C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8008228C;

loc_8008228C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r6 = MemoryInline::FlatRead32((r3 + 228));
}

loc_800822B8:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r6))) {
        goto loc_80082418;
    }
}

loc_800822BC:
{
    r0 = MemoryInline::FlatRead32((r3 + 224));
}

loc_800822C4:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0))) {
        goto loc_80082418;
    }
}

loc_800822C8:
{
}

loc_800822CC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80082418;
    }
}

loc_800822D0:
{
    r3 = r31;
    // inline leaf 0x80060124 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80060124
}

loc_800822DC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80082418;
    }
}

loc_800822E0:
{
    r3 = MemoryInline::FlatRead32((r29 + 228));
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r3), static_cast<uint32_t>(r30));
}

loc_800822E8:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_800823D4;
    }
}

loc_800822EC:
{
    r4 = (r30 + 8);
    r0 = (r3 - r30);
}

loc_800822F8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_800823A8;
    }
}

loc_800822FC:
{
    if (((cr & 0x08000000u) != 0)) {
        goto loc_800823A8;
    }
}

loc_80082300:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r0 = (r3 + 7);
    r0 = (r0 - r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_80082318:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r4))) {
        goto loc_800823A8;
    }
}

loc_8008231C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 220), 0, 4u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 220));
    r4 = (r0 + r5);
    r0 = MemoryInline::FlatRead32((r4 + -4));
    MemoryInline::FlatWrite32(r4, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 220));
    r4 = (r0 + r5);
    r0 = MemoryInline::FlatRead32((r4 + -8));
    MemoryInline::FlatWrite32((r4 + -4), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 220));
    r4 = (r0 + r5);
    r0 = MemoryInline::FlatRead32((r4 + -12));
    MemoryInline::FlatWrite32((r4 + -8), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 220));
    r4 = (r0 + r5);
    r0 = MemoryInline::FlatRead32((r4 + -16));
    MemoryInline::FlatWrite32((r4 + -12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 220));
    r4 = (r0 + r5);
    r0 = MemoryInline::FlatRead32((r4 + -20));
    MemoryInline::FlatWrite32((r4 + -16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 220));
    r4 = (r0 + r5);
    r0 = MemoryInline::FlatRead32((r4 + -24));
    MemoryInline::FlatWrite32((r4 + -20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 220));
    r4 = (r0 + r5);
    r0 = MemoryInline::FlatRead32((r4 + -28));
    MemoryInline::FlatWrite32((r4 + -24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 220));
    r4 = (r0 + r5);
    r0 = MemoryInline::FlatRead32((r4 + -32));
    MemoryInline::FlatWrite32((r4 + -28), r0);
    r5 = (r5 + -32);
    r3 = (r3 + -8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8008231C;
    }
}

loc_800823A8:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r0 = (r3 - r30);
    ctr = r0;
}

loc_800823B8:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r30))) {
        goto loc_800823D4;
    }
}

loc_800823BC:
{
    r0 = MemoryInline::FlatRead32((r29 + 220));
    r3 = (r0 + r4);
    r0 = MemoryInline::FlatRead32((r3 + -4));
    MemoryInline::FlatWrite32(r3, r0);
    r4 = (r4 + -4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800823BC;
    }
}

loc_800823D4:
{
    r3 = MemoryInline::FlatRead32((r29 + 220));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3_addr_0 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_0, r31);
    r3 = r31;
    r4 = 65536;
    r4 = (r4 + 2);
    r5 = 0;
    r6 = r29;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80082404u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r29 + 228));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 228), r0);
    r3 = 1;
    goto loc_8008241C;
}

loc_80082418:
{
    r3 = 0;
}

loc_8008241C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8008228C func_8008228C preserves=true fpr_mask=0x00000000
