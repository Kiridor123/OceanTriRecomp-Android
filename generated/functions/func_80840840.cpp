#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80840840(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lhax_80840868_loc_0 = 0;
    uint32_t addr_lhax_80840878_loc_0 = 0;
    uint32_t addr_lhax_80840890_loc_0 = 0;
    uint32_t addr_lhax_80840898_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r8_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80840840;

loc_80840840:
{
    r4 = 0x80870000u;
    r6 = 0x80840000u;
    r0 = MemoryInline::FlatRead32((r4 + -32000));
    r6 = (r6 + 32032);
    r5 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80840858:
{
    r4 = (127 - r5);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808408A4;
    }
}

loc_80840860:
{
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r8 = (r8_rot_0 & -2);
    r5 = (r6 + 2448);
    addr_lhax_80840868_loc_0 = (r5 + r8);
    r0 = MemoryInline::FlatRead16(addr_lhax_80840868_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r7 = (r7_rot_0 & -2);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    r4 = (r6 + 2704);
    addr_lhax_80840878_loc_0 = (r5 + r7);
    r0 = MemoryInline::FlatRead16(addr_lhax_80840878_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    r0 = MemoryInline::FlatRead16((r6 + 2448));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    r0 = MemoryInline::FlatRead16((r5 + 254));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 36), r0);
    addr_lhax_80840890_loc_0 = (r4 + r7);
    r0 = MemoryInline::FlatRead16(addr_lhax_80840890_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 40), r0);
    addr_lhax_80840898_loc_0 = (r4 + r8);
    r0 = MemoryInline::FlatRead16(addr_lhax_80840898_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 44), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_808408A4:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r5 = (r6 + 1936);
    r5_addr_0 = (r5 + r0);
    r0 = MemoryInline::FlatRead32(r5_addr_0);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    r0 = 0;
    r5_addr_1 = (r5 + r4);
    r4 = MemoryInline::FlatRead32(r5_addr_1);
    MemoryInline::FlatWrite32((r3 + 28), r4);
    r4 = MemoryInline::FlatRead32((r6 + 1936));
    MemoryInline::FlatWrite32((r3 + 32), r4);
    r4 = MemoryInline::FlatRead32((r5 + 508));
    MemoryInline::FlatWrite32((r3 + 36), r4);
    MemoryInline::FlatWrite32((r3 + 40), r0);
    MemoryInline::FlatWrite32((r3 + 44), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000068 gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80840840 func_80840840 preserves=true fpr_mask=0x00000000
