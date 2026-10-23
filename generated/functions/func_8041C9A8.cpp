#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8041C9A8_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t ctr = ctx->ctr;

    goto loc_8041C9A8;

loc_8041C9A8:
{
    r0 = MemoryInline::FlatRead32((r3 + 104));
}

loc_8041C9B0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8041C9BC;
    }
}

loc_8041C9B4:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

loc_8041C9BC:
{
    r0 = MemoryInline::FlatRead32((r3 + 44));
}

loc_8041C9C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8041C9D0;
    }
}

loc_8041C9C8:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

loc_8041C9D0:
{
    r0 = MemoryInline::FlatRead32((r3 + 116));
}

loc_8041C9D8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8041C9E4;
    }
}

loc_8041C9DC:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

loc_8041C9E4:
{
    r0 = MemoryInline::FlatRead8((r3 + 288));
}

loc_8041C9EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8041CA38;
    }
}

loc_8041C9F0:
{
    r6 = 0;
    r5 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 40));
    ctr = r0;
}

loc_8041CA04:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8041CA30;
    }
}

loc_8041CA08:
{
    r0 = MemoryInline::FlatRead32((r5 + 88));
}

loc_8041CA10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8041CA24;
    }
}

loc_8041CA14:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 88), r4);
    goto loc_8041CA30;
}

loc_8041CA24:
{
    r5 = (r5 + 4);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8041CA08;
    }
}

loc_8041CA30:
{
    r3 = -2;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

loc_8041CA38:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_8041C9A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8041C9A8_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8041C9A8 func_8041C9A8 preserves=true fpr_mask=0x00000000
