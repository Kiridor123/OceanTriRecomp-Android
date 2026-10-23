#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804177D4_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_804177D4;

loc_804177D4:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_804177DC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_804177E8;
    }
}

loc_804177E0:
{
}

loc_804177E4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(4))) {
        goto loc_804177F0;
    }
}

loc_804177E8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

loc_804177F0:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 28080));
}

loc_80417800:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8041780C;
    }
}

loc_80417804:
{
    r3 = MemoryInline::FlatRead8((r3 + 28081));
    ctx->gpr[0] = r0;
    return r3;
}

loc_8041780C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_804177D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804177D4_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804177D4 func_804177D4 preserves=true fpr_mask=0x00000000
