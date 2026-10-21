#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8044DFF4_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    MKW_GUEST_ENTER(0x8044DFF4u);
    goto loc_8044DFF4;

loc_8044DFF4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_8044E00C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_8044E030;
    }
}

loc_8044E010:
{
}

loc_8044E014:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8044E030;
    }
}

loc_8044E018:
{
    r0 = MemoryInline::FlatRead32(r7);
    MemoryInline::FlatWrite32((r31 + 332), r0);
    r0 = MemoryInline::FlatRead32((r7 + 4));
    MemoryInline::FlatWrite32((r31 + 336), r0);
    r0 = MemoryInline::FlatRead32((r7 + 8));
    MemoryInline::FlatWrite32((r31 + 340), r0);
}

loc_8044E030:
{
    r0 = (r3 + 0);
}

loc_8044E038:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(32768))) {
        goto loc_8044E060;
    }
}

loc_8044E03C:
{
}

loc_8044E040:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_8044E068;
    }
}

loc_8044E044:
{
}

loc_8044E048:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(32769))) {
        goto loc_8044E0B4;
    }
}

loc_8044E04C:
{
}

loc_8044E050:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8044E100;
    }
}

loc_8044E054:
{
}

loc_8044E058:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_8044E11C;
    }
}

loc_8044E05C:
{
    goto loc_8044E134;
}

loc_8044E060:
{
    MemoryInline::FlatWrite32((r31 + 372), r5);
    goto loc_8044E134;
}

loc_8044E068:
{
}

loc_8044E06C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_8044E078;
    }
}

loc_8044E070:
{
    MemoryInline::FlatWrite32((r31 + 372), r5);
    goto loc_8044E134;
}

loc_8044E078:
{
}

loc_8044E07C:
{
    r0 = 8;
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(8))) {
        goto loc_8044E088;
    }
}

loc_8044E084:
{
    r0 = r6;
}

loc_8044E088:
{
    MemoryInline::FlatWrite32((r31 + 376), r0);
    r0 = MemoryInline::FlatRead32((r31 + 376));
}

loc_8044E094:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044E0A8;
    }
}

loc_8044E098:
{
    r3 = (r31 + 380);
    r4 = r7;
    r5 = (r0 * 92);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8044E0A8:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 372), r0);
    goto loc_8044E134;
}

loc_8044E0B4:
{
}

loc_8044E0B8:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_8044E0C4;
    }
}

loc_8044E0BC:
{
    MemoryInline::FlatWrite32((r31 + 372), r5);
    goto loc_8044E134;
}

loc_8044E0C4:
{
}

loc_8044E0C8:
{
    r0 = 8;
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(8))) {
        goto loc_8044E0D4;
    }
}

loc_8044E0D0:
{
    r0 = r6;
}

loc_8044E0D4:
{
    MemoryInline::FlatWrite32((r31 + 1116), r0);
    r0 = MemoryInline::FlatRead32((r31 + 1116));
}

loc_8044E0E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044E0F4;
    }
}

loc_8044E0E4:
{
    r3 = (r31 + 1120);
    r4 = r7;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r5 = (r5_rot_1 & -64);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8044E0F4:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 372), r0);
    goto loc_8044E134;
}

loc_8044E100:
{
}

loc_8044E104:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_8044E110;
    }
}

loc_8044E108:
{
    MemoryInline::FlatWrite32((r31 + 372), r5);
    goto loc_8044E134;
}

loc_8044E110:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 372), r0);
    goto loc_8044E134;
}

loc_8044E11C:
{
}

loc_8044E120:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_8044E12C;
    }
}

loc_8044E124:
{
    MemoryInline::FlatWrite32((r31 + 372), r5);
    goto loc_8044E134;
}

loc_8044E12C:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 372), r0);
}

loc_8044E134:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8044DFF4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8044DFF4_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8044DFF4 func_8044DFF4 preserves=true fpr_mask=0x00000000
