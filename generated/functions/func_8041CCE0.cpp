#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8041CCE0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8041CCE0u);
    goto loc_8041CCE0;

loc_8041CCE0:
{
}

loc_8041CCE4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8041CCF0;
    }
}

loc_8041CCE8:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8041CCF0:
{
    r8 = 0;
    r7 = MemoryInline::FlatRead8((r3 + 40));
    ctr = r7;
}

loc_8041CD00:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(0))) {
        goto loc_8041CD24;
    }
}

loc_8041CD04:
{
    r0 = (r8 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r6 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r6 + 20));
}

loc_8041CD18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8041CD24;
    }
}

loc_8041CD1C:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8041CD04;
    }
}

loc_8041CD24:
{
    r0 = (r8 & 255);
}

loc_8041CD2C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r7))) {
        goto loc_8041CD38;
    }
}

loc_8041CD30:
{
    r3 = -2;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8041CD38:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r6 = (r3 + r0);
    MemoryInline::FlatWrite32((r6 + 20), r4);
    MemoryInline::FlatWrite32((r6 + 52), r5);
    r7 = 0;
    r6 = MemoryInline::FlatRead8((r3 + 40));
    ctr = r6;
}

loc_8041CD58:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(0))) {
        goto loc_8041CD7C;
    }
}

loc_8041CD5C:
{
    r0 = (r7 & 255);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 88));
}

loc_8041CD70:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_8041CD7C;
    }
}

loc_8041CD74:
{
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8041CD5C;
    }
}

loc_8041CD7C:
{
    r0 = (r7 & 255);
}

loc_8041CD84:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r6))) {
        goto loc_8041CDC4;
    }
}

loc_8041CD88:
{
    r7 = 0;
    ctr = r6;
}

loc_8041CD94:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(0))) {
        goto loc_8041CDC4;
    }
}

loc_8041CD98:
{
    r6 = (r7 & 255);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 68));
}

loc_8041CDAC:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8041CDBC;
    }
}

loc_8041CDB0:
{
    r3 = (r3 + r6);
    MemoryInline::FlatWrite8((r3 + 36), static_cast<uint8_t>(r8));
    goto loc_8041CDC4;
}

loc_8041CDBC:
{
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8041CD98;
    }
}

loc_8041CDC4:
{
    r3 = (r8 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8041CCE0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8041CCE0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8041CCE0 func_8041CCE0 preserves=true fpr_mask=0x00000000
