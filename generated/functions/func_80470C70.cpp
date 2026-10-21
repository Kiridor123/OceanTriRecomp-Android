#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80470C70_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    MKW_GUEST_ENTER(0x80470C70u);
    goto loc_80470C70;

loc_80470C70:
{
    r6 = 954466304;
    r7 = MemoryInline::FlatRead32(r3);
    r0 = (r6 + -29127);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r7))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 2);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r6 = (r6_rot_0 & 1);
    r0 = (r0 + r6);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80470CC8;
    }
}

loc_80470C90:
{
}

loc_80470C94:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(20))) {
        goto loc_80470C9C;
    }
}

loc_80470C98:
{
    r0 = 20;
}

loc_80470C9C:
{
}

loc_80470CA0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(-20))) {
        goto loc_80470CA8;
    }
}

loc_80470CA4:
{
    r0 = -20;
}

loc_80470CA8:
{
    MemoryInline::FlatWrite32(r4, r7);
    r6 = (r0 * 18);
    r0 = (0 - r0);
    r4 = MemoryInline::FlatRead32(r3);
    r4 = (r4 - r6);
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r4;
}

loc_80470CC8:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32(r4, r0);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r4;
}

}

extern "C" void func_80470C70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80470C70_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000000B9 gpr_write=0x000000D1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80470C70 func_80470C70 preserves=true fpr_mask=0x00000000
