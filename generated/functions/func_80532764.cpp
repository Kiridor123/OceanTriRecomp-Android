#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80532764_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80532764u);
    goto loc_80532764;

loc_80532764:
{
}

loc_80532768:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805327DC;
    }
}

loc_8053276C:
{
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r8 = 0;
    r9 = MemoryInline::FlatRead32((r3 + 60));
    r7 = 1;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r5 = (r5_rot_1 & 15);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & 15);
    r5 = (r5 * 20);
    r6 = MemoryInline::FlatRead32((r3 + 64));
    r11_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(12));
    r11 = (r11_rot_1 & 15);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(14));
    r10 = (r10_rot_1 & 60);
    r9 = (r0 * 28);
    r0 = (r4 - r11);
    r5 = (r6 + r5);
    r6 = 4;
    r9 = (r9 + r5);
    r5 = 60;
    r9 = (r10 + r9);
    ctr = r0;
}

loc_805327B8:
{
    if ((static_cast<uint32_t>(r11) >= static_cast<uint32_t>(r4))) {
        goto loc_805327DC;
    }
}

loc_805327BC:
{
}

loc_805327C0:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_805327D4;
    }
}

loc_805327C4:
{
    MemoryInline::FlatWrite8((r9 + 3), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r9 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r9 + 2), static_cast<uint8_t>(r5));
}

loc_805327D4:
{
    r9 = (r9 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805327BC;
    }
}

loc_805327DC:
{
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(20));
    r0_mrot_0 = (r0_rot_3 & 15728640);
    r0_mdest_0 = (r0 & -15728641);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWrite32((r3 + 60), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    return;
}

}

extern "C" void func_80532764(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80532764_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FE1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80532764 func_80532764 preserves=true fpr_mask=0x00000000
