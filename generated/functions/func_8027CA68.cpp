#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8027CA68_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t xer = ctx->xer;

    goto loc_8027CA68;

loc_8027CA68:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_8027CA70:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_8027CA7C;
    }
}

loc_8027CA74:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8027CA7C:
{
    r0 = MemoryInline::FlatRead16((r3 + 1128));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8027CA84:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8027CA90;
    }
}

loc_8027CA88:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8027CA90:
{
    r5 = MemoryInline::FlatRead16((r3 + 900));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
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
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8027CA68(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027CA68_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8027CA68 func_8027CA68 preserves=true fpr_mask=0x00000000
