#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8045FED8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];

    goto loc_8045FED8;

loc_8045FED8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = 0;
}

loc_8045FEE4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 8), r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 12), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 20), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 28), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 32), r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 36), r0);
    }
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045FF0C;
    }
}

loc_8045FF08:
{
    MemoryInline::FlatWrite32((r13 + -20780), r3);
}

loc_8045FF0C:
{
    r7 = (r4 + -1);
    r5 = (r1 + 8);
    r3 = 1;
    goto loc_8045FF38;
}

loc_8045FF1C:
{
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r6 = (r6_rot_2 & 31);
    r0 = (r0 & 7);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r5_addr_2 = (r5 + r6);
    r4 = MemoryInline::FlatRead8(r5_addr_2);
    r0 = (r0 & 255);
    r0 = (r4 | r0);
    r5_addr_3 = (r5 + r6);
    MemoryInline::FlatWrite8(r5_addr_3, static_cast<uint8_t>(r0));
}

loc_8045FF38:
{
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead8(r7);
}

loc_8045FF40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045FF1C;
    }
}

loc_8045FF44:
{
    r4 = MemoryInline::FlatRead32((r13 + -20780));
    r5 = (r1 + 8);
    r3 = 1;
    r7 = (r4 + -1);
    goto loc_8045FF74;
}

loc_8045FF58:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r4 = (r4_rot_2 & 31);
    r0 = (r6 & 7);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r5_addr_5 = (r5 + r4);
    r4 = MemoryInline::FlatRead8(r5_addr_5);
    r0 = (r0 & 255);
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045FF80;
    }
}

loc_8045FF74:
{
    r7 = (r7 + 1);
    r6 = MemoryInline::FlatRead8(r7);
}

loc_8045FF7C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8045FF58;
    }
}

loc_8045FF80:
{
}

loc_8045FF84:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8045FF98;
    }
}

loc_8045FF88:
{
    r0 = MemoryInline::FlatRead32((r13 + -20784));
    r3 = 0;
    MemoryInline::FlatWrite32((r13 + -20780), r0);
    goto loc_8045FFF4;
}

loc_8045FF98:
{
    r3 = r7;
    r6 = (r1 + 8);
    r4 = 1;
    goto loc_8045FFC4;
}

loc_8045FFA8:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r5 = (r5_rot_2 & 31);
    r0 = (r8 & 7);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r6_addr_2 = (r6 + r5);
    r5 = MemoryInline::FlatRead8(r6_addr_2);
    r0 = (r0 & 255);
    r0 = (r5 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045FFD0;
    }
}

loc_8045FFC4:
{
    r7 = (r7 + 1);
    r8 = MemoryInline::FlatRead8(r7);
}

loc_8045FFCC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8045FFA8;
    }
}

loc_8045FFD0:
{
}

loc_8045FFD4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8045FFE4;
    }
}

loc_8045FFD8:
{
    r0 = MemoryInline::FlatRead32((r13 + -20784));
    MemoryInline::FlatWrite32((r13 + -20780), r0);
    goto loc_8045FFF4;
}

loc_8045FFE4:
{
    r4 = (r7 + 1);
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -20780), r4);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
}

loc_8045FFF4:
{
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8045FED8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8045FED8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8045FED8 func_8045FED8 preserves=true fpr_mask=0x00000000
