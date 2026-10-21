#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800580A8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r7_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];

    MKW_GUEST_ENTER(0x800580A8u);
    goto loc_800580A8;

loc_800580A8:
{
    r5 = 0x80670000u;
    r7 = (r5 + -12024);
    r6 = (r4 * 24);
    r5 = 0x80590000u;
    r0 = (r5 + -18120);
    r9 = (r0 + r6);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r6 = (r6_rot_0 & -4);
    r5 = (r7 + r6);
    MemoryInline::FlatWrite32((r5 + 64), r4);
    r0 = MemoryInline::FlatRead32((r9 + 4));
    r7_addr_0 = (r7 + r6);
    MemoryInline::FlatWrite32(r7_addr_0, r0);
    r3 = MemoryInline::FlatRead32((r9 + 8));
    r0 = MemoryInline::FlatRead32((r9 + 12));
    r8 = (r0 - r3);
}

loc_800580E4:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(0))) {
        goto loc_800580FC;
    }
}

loc_800580E8:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r8 = (r8 - r0);
    r0 = 2;
    MemoryInline::FlatWrite32((r5 + 16), r0);
    goto loc_80058104;
}

loc_800580FC:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r5 + 16), r0);
}

loc_80058104:
{
    r4 = (r7 + r6);
    r0 = MemoryInline::FlatRead32((r9 + 16));
    MemoryInline::FlatWrite32((r4 + 96), r0);
    r5 = MemoryInline::FlatRead32((r4 + 96));
    r3 = (static_cast<int32_t>(r5) >> 31);
    r0 = (r3 ^ r5);
    r5 = (r0 - r3);
    r0 = PPC_Divw(static_cast<int32_t>(r8), static_cast<int32_t>(r5));
    MemoryInline::FlatWrite32((r4 + 48), r0);
    r3 = MemoryInline::FlatRead32((r4 + 48));
    r0 = (r5 * r3);
}

loc_80058134:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(r0))) {
        goto loc_80058140;
    }
}

loc_80058138:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 48), r0);
}

loc_80058140:
{
    r0 = MemoryInline::FlatRead32((r9 + 12));
    r3 = (r7 + r6);
    MemoryInline::FlatWrite32((r3 + 80), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800580A8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800580A8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800580A8 func_800580A8 preserves=true fpr_mask=0x00000000
