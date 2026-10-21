#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CD110_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x804CD110u);
    goto loc_804CD110;

loc_804CD110:
{
    r4 = ctx->hid2;
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r4 = (r4_rot_0 & 15);
}

loc_804CD11C:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r3))) {
        goto loc_804CD110;
    }
}

loc_804CD120:
{
    ctx->gpr[4] = r4;
    return;
}

}

extern "C" void func_804CD110(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_804CD110_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000010 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CD110 func_804CD110 preserves=true fpr_mask=0x00000000
