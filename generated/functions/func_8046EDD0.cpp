#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8046EDD0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r6_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    MKW_GUEST_ENTER(0x8046EDD0u);
    goto loc_8046EDD0;

loc_8046EDD0:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r5 = 0x80700000u;
    r4 = 0x80700000u;
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r6 = (r6_rot_0 & -4);
    r5 = (r5 + -26256);
    r4 = (r4 + -26128);
    r5_addr_0 = (r5 + r6);
    r0 = MemoryInline::FlatRead32(r5_addr_0);
    r4_addr_0 = (r4 + r6);
    r7 = MemoryInline::FlatRead32(r4_addr_0);
}

loc_8046EDF4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r7))) {
        goto loc_8046EE08;
    }
}

loc_8046EDF8:
{
    r0 = 0;
    r4_addr_1 = (r4 + r6);
    MemoryInline::FlatWrite32(r4_addr_1, r0);
    r5_addr_1 = (r5 + r6);
    MemoryInline::FlatWrite32(r5_addr_1, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8046EE08:
{
}

loc_8046EE0C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8046EE24;
    }
}

loc_8046EE10:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = 0;
    r5_addr_2 = (r5 + r6);
    MemoryInline::FlatWrite32(r5_addr_2, r3);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8046EE24:
{
}

loc_8046EE28:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r7))) {
        goto loc_8046EE40;
    }
}

loc_8046EE2C:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = 0;
    r4_addr_2 = (r4 + r6);
    MemoryInline::FlatWrite32(r4_addr_2, r3);
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8046EE40:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32(r4, r3);
    MemoryInline::FlatWrite32((r3 + 4), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8046EDD0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046EDD0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8046EDD0 func_8046EDD0 preserves=true fpr_mask=0x00000000
