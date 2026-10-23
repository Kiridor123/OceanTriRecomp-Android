#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809D7C00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lhax_809D7C38_loc_0 = 0;
    uint32_t addr_lhax_809D7C68_loc_0 = 0;
    uint32_t addr_lhax_809D7C78_loc_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_809D7C00;

loc_809D7C00:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r1 + 8), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r1 + 10), static_cast<uint16_t>(r0));
    r0 = (r3 + 256);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r1 + 12), static_cast<uint16_t>(r0));
    r6 = (r5 & 255);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r5 = (r5_rot_0 & -2);
    r3 = 0x80A20000u;
    r3 = (r3 + 11520);
    addr_lhax_809D7C38_loc_0 = (r3 + r5);
    r0 = MemoryInline::FlatRead16(addr_lhax_809D7C38_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r4 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_0, 14u, (r1 + 14), static_cast<uint16_t>(r0));
    r0 = -1;
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r0);
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 20u, (r1 + 20), r0);
        MemoryInline::WriteResolved16(guest_range_0, 22u, (r1 + 22), r0);
    }
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3 = 0x80A20000u;
    r3 = (r3 + 11544);
    addr_lhax_809D7C68_loc_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_809D7C68_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r1 + 24), static_cast<uint16_t>(r0));
    r0 = (r5 + 1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    addr_lhax_809D7C78_loc_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_809D7C78_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_0, 26u, (r1 + 26), static_cast<uint16_t>(r0));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r3 = (r1 + 8);
    r4 = 0x80A80000u;
    r0 = (r4 + -31488);
    r5 = (r0 + r5);
    r4 = (r5 + 252);
    r5 = (r5 + 300);
    ctx->lr = 0x809D7CA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80053620u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FBE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809D7C00 func_809D7C00 preserves=true fpr_mask=0x00000000
