#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80469184_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r0_subfic_ra_4 = 0;
    uint32_t r0_subfic_ra_5 = 0;
    uint32_t r0_subfic_ra_6 = 0;
    uint32_t r0_subfic_ra_7 = 0;
    uint32_t r0_subfic_ra_8 = 0;
    uint32_t r0_subfic_ra_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80469184u);
    goto loc_80469184;

loc_80469184:
{
}

loc_80469188:
{
    r8 = (r4 & 255);
    r7 = r3;
    r6 = 255;
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80469198:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & 1073741823);
}

loc_8046919C:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80469270;
    }
}

loc_804691A4:
{
    r10 = (r7 & -4);
    r0 = (r7 - r10);
    r4 = MemoryInline::FlatRead32(r10);
    r0_subfic_ra_2 = r0;
    r0 = (3 - r0_subfic_ra_2);
    r7 = (r7 + 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r9 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    r0 = PPC_Slw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r0));
    r4 = (r4 & ~r9);
    r0 = (r9 & r0);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32(r10, r0);
    r10 = (r7 & -4);
    r0 = (r7 - r10);
    r4 = MemoryInline::FlatRead32(r10);
    r0_subfic_ra_3 = r0;
    r0 = (3 - r0_subfic_ra_3);
    r7 = (r7 + 1);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & -8);
    r9 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    r0 = PPC_Slw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r0));
    r4 = (r4 & ~r9);
    r0 = (r9 & r0);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32(r10, r0);
    r10 = (r7 & -4);
    r0 = (r7 - r10);
    r4 = MemoryInline::FlatRead32(r10);
    r0_subfic_ra_4 = r0;
    r0 = (3 - r0_subfic_ra_4);
    r7 = (r7 + 1);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & -8);
    r9 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    r0 = PPC_Slw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r0));
    r4 = (r4 & ~r9);
    r0 = (r9 & r0);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32(r10, r0);
    r10 = (r7 & -4);
    r0 = (r7 - r10);
    r4 = MemoryInline::FlatRead32(r10);
    r0_subfic_ra_5 = r0;
    r0 = (3 - r0_subfic_ra_5);
    r7 = (r7 + 1);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & -8);
    r9 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    r0 = PPC_Slw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r0));
    r4 = (r4 & ~r9);
    r0 = (r9 & r0);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32(r10, r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804691A4;
    }
}

loc_80469268:
{
    r5 = (r5 & 3);
}

loc_8046926C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80469270:
{
    ctr = r5;
}

loc_80469274:
{
    r10 = (r7 & -4);
    r0 = (r7 - r10);
    r4 = MemoryInline::FlatRead32(r10);
    r0_subfic_ra_8 = r0;
    r0 = (3 - r0_subfic_ra_8);
    r7 = (r7 + 1);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_9 & -8);
    r9 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    r0 = PPC_Slw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r0));
    r4 = (r4 & ~r9);
    r0 = (r9 & r0);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32(r10, r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80469274;
    }
}

loc_804692A8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->ctr = ctr;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->ctr = ctr;
    return r4;
}

}

extern "C" void func_80469184(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80469184_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80469184 func_80469184 preserves=true fpr_mask=0x00000000
