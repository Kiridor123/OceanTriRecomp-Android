#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_801F382C_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_801F382C;

loc_801F382C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_801F3834:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-3))) {
        goto loc_801F3844;
    }
}

loc_801F3838:
{
}

loc_801F383C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-2))) {
        goto loc_return;
    }
}

loc_801F3840:
{
    goto loc_801F3850;
}

loc_801F3844:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    goto loc_801F3884;
}

loc_801F3850:
{
    r5 = (r0 * 10);
    r4 = 0x805C0000u;
    r0 = (r4 + -29132);
    r5 = (r0 + r5);
    r0 = MemoryInline::FlatRead8((r5 + 3));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r4 = (r4_rot_0 & -16777216);
    r0 = MemoryInline::FlatRead8((r5 + 4));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_0 & -65536);
    r4 = (r4 | r0);
    r0 = MemoryInline::FlatRead8((r5 + 5));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & -256);
    r0 = (r0 | 255);
    r0 = (r4 | r0);
}

loc_801F3884:
{
    MemoryInline::FlatWrite32((r3 + 24), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

}

extern "C" void func_801F382C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_801F382C_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F382C func_801F382C preserves=true fpr_mask=0x00000000
