#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F44A8_ra68_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r6 = arg_r6;

    MKW_GUEST_ENTER(0x801F44A8u);
    goto loc_801F44A8;

loc_801F44A8:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
}

loc_801F44B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_801F44C8;
    }
}

loc_801F44B4:
{
}

loc_801F44B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-3))) {
        goto loc_801F44D4;
    }
}

loc_801F44BC:
{
}

loc_801F44C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-2))) {
        goto loc_return;
    }
}

loc_801F44C4:
{
    goto loc_801F44E0;
}

loc_801F44C8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 34), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

loc_801F44D4:
{
    r4 = MemoryInline::FlatRead16((r3 + 20));
    goto loc_801F4520;
}

loc_801F44E0:
{
    r5 = (r0 * 10);
    r4 = 0x805C0000u;
    r0 = (r4 + -29132);
    r6 = (r0 + r5);
    r0 = MemoryInline::FlatRead8((r6 + 5));
    r0 = (r0 & 248);
    r5 = (static_cast<int32_t>(r0) >> 3);
    r0 = MemoryInline::FlatRead8((r6 + 3));
    r0 = (r0 & 248);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r4 = (r4_rot_0 & -256);
    r0 = MemoryInline::FlatRead8((r6 + 4));
    r0 = (r0 & 252);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r0 = (r4 | r0);
    r0 = (r5 | r0);
    r4 = (r0 & 65535);
}

loc_801F4520:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 34), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r3 + 32), static_cast<uint16_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

extern "C" void func_801F44A8(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_801F44A8_ra68_0_0_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->gpr[6]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000069 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801F44A8 func_801F44A8 preserves=true fpr_mask=0x00000000
