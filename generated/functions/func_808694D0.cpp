#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808694D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t ctr = ctx->ctr;

    goto loc_808694D0;

loc_808694D0:
{
    r6 = r4;
    r0 = MemoryInline::FlatRead32(r3);
    r8 = (r3 + 4);
    r3 = 0;
    goto loc_808695D4;
}

loc_808694E4:
{
    r5 = MemoryInline::FlatRead32(r6);
    r11 = MemoryInline::FlatRead32((r6 + 4));
    r6 = (r6 + 8);
}

loc_808694F4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_808695D0;
    }
}

loc_808694F8:
{
    r9 = MemoryInline::FlatRead32(r8);
    r8 = (r8 + 4);
}

loc_80869504:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_808694F8;
    }
}

loc_80869508:
{
    r7 = (r5 + r4);
    MemoryInline::FlatWrite32(r9, r7);
    r5 = 0;
}

loc_80869518:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_808695D0;
    }
}

loc_8086951C:
{
    r10 = (r11 + -8);
}

loc_80869524:
{
    if ((static_cast<uint32_t>(r11) <= static_cast<uint32_t>(8))) {
        goto loc_808695A8;
    }
}

loc_80869528:
{
    r9 = (r10 + 7);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r9 = (r9_rot_2 & 536870911);
    ctr = r9;
}

loc_80869538:
{
    if ((static_cast<uint32_t>(r10) <= static_cast<uint32_t>(0))) {
        goto loc_808695A8;
    }
}

loc_8086953C:
{
    r9 = MemoryInline::FlatRead32(r7);
    r9 = (r9 + r4);
    MemoryInline::FlatWrite32(r7, r9);
    r9 = MemoryInline::FlatRead32((r7 + 4));
    r9 = (r9 + r4);
    MemoryInline::FlatWrite32((r7 + 4), r9);
    r9 = MemoryInline::FlatRead32((r7 + 8));
    r9 = (r9 + r4);
    MemoryInline::FlatWrite32((r7 + 8), r9);
    r9 = MemoryInline::FlatRead32((r7 + 12));
    r9 = (r9 + r4);
    MemoryInline::FlatWrite32((r7 + 12), r9);
    r9 = MemoryInline::FlatRead32((r7 + 16));
    r9 = (r9 + r4);
    MemoryInline::FlatWrite32((r7 + 16), r9);
    r9 = MemoryInline::FlatRead32((r7 + 20));
    r9 = (r9 + r4);
    MemoryInline::FlatWrite32((r7 + 20), r9);
    r9 = MemoryInline::FlatRead32((r7 + 24));
    r9 = (r9 + r4);
    MemoryInline::FlatWrite32((r7 + 24), r9);
    r9 = MemoryInline::FlatRead32((r7 + 28));
    r9 = (r9 + r4);
    MemoryInline::FlatWrite32((r7 + 28), r9);
    r7 = (r7 + 32);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8086953C;
    }
}

loc_808695A8:
{
    r9 = (r11 - r5);
    ctr = r9;
}

loc_808695B4:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r11))) {
        goto loc_808695D0;
    }
}

loc_808695B8:
{
    r9 = MemoryInline::FlatRead32(r7);
    r9 = (r9 + r4);
    MemoryInline::FlatWrite32(r7, r9);
    r7 = (r7 + 4);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808695B8;
    }
}

loc_808695D0:
{
    r3 = (r3 + 1);
}

loc_808695D4:
{
}

loc_808695D8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_808694E4;
    }
}

loc_808695DC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
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

// RECOMP_GUEST_ABI gpr_read=0x00000FF8 gpr_write=0x00000FE9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808694D0 func_808694D0 preserves=true fpr_mask=0x00000000
