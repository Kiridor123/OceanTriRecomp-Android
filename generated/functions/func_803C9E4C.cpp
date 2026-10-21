#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803C9E4C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x803C9E4Cu);
    goto loc_803C9E4C;

loc_803C9E4C:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r5 & 65535);
    r3 = (r3 + r0);
    r5 = 0;
    r0 = (r6 & 65535);
}

loc_803C9E64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803C9E68:
{
    r7 = (r6 + 65536);
    r7 = (r7 + -8);
}

loc_803C9E74:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_803C9F1C;
    }
}

loc_803C9E78:
{
    r7 = (r7 & 65535);
    r0 = (r7 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_803C9E8C:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(0))) {
        goto loc_803C9F1C;
    }
}

loc_803C9E90:
{
    r7 = MemoryInline::FlatRead8(r3);
    r0 = (r7 ^ r4);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8((r3 + 1));
    r0 = (r4 ^ r7);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r7 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r7 ^ r4);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8((r3 + 3));
    r0 = (r4 ^ r7);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    r7 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r7 ^ r4);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8((r3 + 5));
    r0 = (r4 ^ r7);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    r7 = MemoryInline::FlatRead8((r3 + 6));
    r0 = (r7 ^ r4);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8((r3 + 7));
    r0 = (r4 ^ r7);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r0));
    r3 = (r3 + 8);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803C9E90;
    }
}

loc_803C9F1C:
{
    r6 = (r6 & 65535);
    r7 = (r5 & 65535);
    r0 = (r6 - r7);
    ctr = r0;
}

loc_803C9F30:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r6))) {
        goto loc_return;
    }
}

loc_803C9F34:
{
    r6 = MemoryInline::FlatRead8(r3);
    r0 = (r6 ^ r4);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r4 = r6;
    r5 = (r5 + 1);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803C9F34;
    }
}

loc_803C9F54:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803C9E4C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803C9E4C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803C9E4C func_803C9E4C preserves=true fpr_mask=0x00000000
