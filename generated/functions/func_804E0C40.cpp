#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804E0C40_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x804E0C40u);
    goto loc_804E0C40;

loc_804E0C40:
{
    r0 = MemoryInline::FlatRead8((r3 + 12));
}

loc_804E0C48:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_804E0C5C;
    }
}

loc_804E0C4C:
{
    r4 = MemoryInline::FlatRead32((r3 + 24));
    r0 = MemoryInline::FlatRead32((r4 + 76));
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_804E0C5C:
{
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r0 = (r0_rot_0 & 32640);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 130));
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}

extern "C" void func_804E0C40(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_804E0C40_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804E0C40 func_804E0C40 preserves=true fpr_mask=0x00000000
