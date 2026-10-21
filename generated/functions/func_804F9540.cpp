#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804F9540_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r3_rot_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x804F9540u);
    goto loc_804F9540;

loc_804F9540:
{
    r4 = 0x80760000u;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & -4);
    r4 = (r4 + -10352);
    r0 = 0;
    r4_addr_0 = (r4 + r3);
    r3 = MemoryInline::FlatRead32(r4_addr_0);
    MemoryInline::FlatWrite32((r3 + 2456), r0);
    MemoryInline::FlatWrite32((r3 + 2460), r0);
    MemoryInline::FlatWrite16((r3 + 2464), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r3 + 2468), r0);
    MemoryInline::FlatWrite32((r3 + 2472), r0);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804F9540(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804F9540_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804F9540 func_804F9540 preserves=true fpr_mask=0x00000000
