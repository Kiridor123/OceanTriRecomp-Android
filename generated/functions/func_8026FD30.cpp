#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8026FD30_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_8026FD30;

loc_8026FD30:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 212));
}

loc_8026FD40:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(50))) {
        goto loc_8026FD68;
    }
}

loc_8026FD44:
{
    r0 = MemoryInline::FlatRead16((r3 + 208));
    r0 = (r0 - r5);
    r3 = (r0 & 65535);
    r0 = (r6 - r5);
    r0 = (r0 & 65535);
}

loc_8026FD5C:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_8026FD68;
    }
}

loc_8026FD60:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8026FD68:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8026FD30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8026FD30_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8026FD30 func_8026FD30 preserves=true fpr_mask=0x00000000
