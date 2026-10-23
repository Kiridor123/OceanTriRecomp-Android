#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802CBC20_ra28_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t xer = ctx->xer;

    goto loc_802CBC20;

loc_802CBC20:
{
    r5 = MemoryInline::FlatRead16((r3 + 980));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = MemoryInline::FlatRead16((r3 + 982));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802CBC2C:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_802CBC38;
    }
}

loc_802CBC30:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    return r3;
}

loc_802CBC38:
{
    r0 = MemoryInline::FlatRead16((r3 + 1044));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (static_cast<int32_t>(r5) >> 31);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r0_subfc_sub_0 = r0;
    r0 = (r5 - r0_subfc_sub_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0_subfc_sub_0) ? 1u : 0u) << 29);
    r3_adde_right_0 = r3;
    r3_ca_0 = (xer >> 29) & 1u;
    r3 = (r4 + r3_adde_right_0);
    r3 = (r3 + r3_ca_0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    return r3;
}

}

extern "C" void func_802CBC20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802CBC20_ra28_0_8_0(ctx, ctx->gpr[3], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000028 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802CBC20 func_802CBC20 preserves=true fpr_mask=0x00000000
