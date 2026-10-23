#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80529910_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    goto loc_80529910;

loc_80529910:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r4 = MemoryInline::FlatRead32((r13 + -13336));
    r12 = MemoryInline::FlatRead32((r4 + 2728));
}

loc_80529930:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8052993C;
    }
}

loc_80529934:
{
    ctr = r12;
    ctx->lr = 0x8052993Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8052993C:
{
    r7 = MemoryInline::FlatRead8(r31);
    r3 = MemoryInline::FlatRead32((r13 + -13336));
    r0 = (r7 * 680);
    r3 = (r3 + r0);
    r6 = MemoryInline::FlatRead8((r3 + 597));
    r5 = MemoryInline::FlatRead8((r3 + 596));
}

loc_80529958:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r6))) {
        goto loc_80529A18;
    }
}

loc_8052995C:
{
    r4 = (r5 + 1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & -134217728);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r0 = (r0 - r4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_2 & -1);
    r0 = (r0 + r4);
    r0 = (r0 & 255);
}

loc_8052997C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r6))) {
        goto loc_805299D8;
    }
}

loc_80529980:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r4 = (r4_rot_2 & 4080);
    r6 = 255;
    r4 = (r3 + r4);
    r5 = 0;
    MemoryInline::FlatWrite8((r4 + 84), static_cast<uint8_t>(r7));
    r4 = MemoryInline::FlatRead8((r3 + 596));
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r4 = (r4_rot_3 & -16);
    r4 = (r3 + r4);
    MemoryInline::FlatWrite8((r4 + 85), static_cast<uint8_t>(r6));
    r4 = MemoryInline::FlatRead8((r3 + 596));
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r4 = (r4_rot_4 & -16);
    r4 = (r3 + r4);
    MemoryInline::FlatWrite32((r4 + 88), r5);
    r4 = MemoryInline::FlatRead8((r3 + 596));
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r4 = (r4_rot_5 & -16);
    r4 = (r3 + r4);
    MemoryInline::FlatWrite32((r4 + 92), r5);
    r4 = MemoryInline::FlatRead8((r3 + 596));
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r4 = (r4_rot_6 & -16);
    r4 = (r3 + r4);
    MemoryInline::FlatWrite16((r4 + 96), static_cast<uint16_t>(r5));
    goto loc_80529A14;
}

loc_805299D8:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r5 = (r5_rot_1 & 4080);
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r6 = (r3 + r5);
    r5 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite32((r6 + 84), r5);
    MemoryInline::FlatWrite32((r6 + 88), r4);
    r4 = MemoryInline::FlatRead32((r31 + 12));
    r5 = MemoryInline::FlatRead32((r31 + 8));
    MemoryInline::FlatWrite32((r6 + 92), r5);
    MemoryInline::FlatWrite32((r6 + 96), r4);
    r4 = MemoryInline::FlatRead8((r3 + 597));
}

loc_80529A08:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(32))) {
        goto loc_80529A14;
    }
}

loc_80529A0C:
{
    r4 = MemoryInline::FlatRead8((r3 + 596));
    MemoryInline::FlatWrite8((r3 + 597), static_cast<uint8_t>(r4));
}

loc_80529A14:
{
    MemoryInline::FlatWrite8((r3 + 596), static_cast<uint8_t>(r0));
}

loc_80529A18:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80529910(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80529910_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80529910 func_80529910 preserves=true fpr_mask=0x00000000
