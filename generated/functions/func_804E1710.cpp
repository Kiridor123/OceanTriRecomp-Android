#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804E1710_ra48_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;

    MKW_GUEST_ENTER(0x804E1710u);
    goto loc_804E1710;

loc_804E1710:
{
    r0 = MemoryInline::FlatRead8((r3 + 12));
    r6 = MemoryInline::FlatRead32((r3 + 8));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    r0 = MemoryInline::FlatRead8((r3 + 13));
    r4 = (r6 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 52));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r4_addr_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(r4_addr_0);
}

loc_804E1734:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_804E1740;
    }
}

loc_804E1738:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

loc_804E1740:
{
    r0 = (r0 * 24);
    r4 = MemoryInline::FlatRead32((r6 + 12));
    r5 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 20), r5);
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r4 = MemoryInline::FlatRead32((r6 + 16));
    r0 = (r0 * 80);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    r0 = MemoryInline::FlatRead32((r5 + 20));
    r4 = MemoryInline::FlatRead32((r6 + 20));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 28), r4);
    r0 = MemoryInline::FlatRead16((r4 + 12));
    r4 = MemoryInline::FlatRead32((r6 + 24));
    r0 = (r0 * 46);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_804E1710(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804E1710_ra48_0_8_0(ctx, ctx->gpr[3], ctx->gpr[6]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000049 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804E1710 func_804E1710 preserves=true fpr_mask=0x00000000
