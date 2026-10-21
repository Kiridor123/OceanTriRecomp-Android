#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80552F38_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
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

    MKW_GUEST_ENTER(0x80552F38u);
    goto loc_80552F38;

loc_80552F38:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    r30 = r3;
    r5 = MemoryInline::FlatRead32((r3 + 464));
    r0 = MemoryInline::FlatRead32((r3 + 484));
}

loc_80552F60:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_80552F6C;
    }
}

loc_80552F64:
{
    r5 = -1;
    goto loc_80552FD8;
}

loc_80552F6C:
{
    r0 = MemoryInline::FlatRead32((r3 + 488));
}

loc_80552F74:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(r0))) {
        goto loc_80552F80;
    }
}

loc_80552F78:
{
    r5 = -1;
    goto loc_80552FD8;
}

loc_80552F80:
{
    r0 = MemoryInline::FlatRead32((r3 + 472));
}

loc_80552F88:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_80552F98;
    }
}

loc_80552F8C:
{
    r0 = (r0 - r5);
    r5 = (20 - r0);
    goto loc_80552F9C;
}

loc_80552F98:
{
    r5 = (r5 - r0);
}

loc_80552F9C:
{
    r4 = (19 - r5);
    r0 = 20;
    r4 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    ctr = r4;
}

loc_80552FB0:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_80552FBC;
    }
}

loc_80552FB4:
{
    r5 = (r5 + 20);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80552FB4;
    }
}

loc_80552FBC:
{
    r0 = 20;
    r0 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    ctr = r0;
}

loc_80552FCC:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(20))) {
        goto loc_80552FD8;
    }
}

loc_80552FD0:
{
    r5 = (r5 + -20);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80552FD0;
    }
}

loc_80552FD8:
{
}

loc_80552FDC:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_80553000;
    }
}

loc_80552FE0:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = 2;
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 224));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80553000u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_80553000:
{
    r0 = MemoryInline::FlatRead32((r30 + 484));
}

loc_80553008:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(r0))) {
        goto loc_80553014;
    }
}

loc_8055300C:
{
    r4 = -1;
    goto loc_80553080;
}

loc_80553014:
{
    r0 = MemoryInline::FlatRead32((r30 + 488));
}

loc_8055301C:
{
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(r0))) {
        goto loc_80553028;
    }
}

loc_80553020:
{
    r4 = -1;
    goto loc_80553080;
}

loc_80553028:
{
    r0 = MemoryInline::FlatRead32((r30 + 472));
}

loc_80553030:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(r0))) {
        goto loc_80553040;
    }
}

loc_80553034:
{
    r0 = (r0 - r31);
    r4 = (20 - r0);
    goto loc_80553044;
}

loc_80553040:
{
    r4 = (r31 - r0);
}

loc_80553044:
{
    r3 = (19 - r4);
    r0 = 20;
    r3 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    ctr = r3;
}

loc_80553058:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_80553064;
    }
}

loc_8055305C:
{
    r4 = (r4 + 20);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8055305C;
    }
}

loc_80553064:
{
    r0 = 20;
    r0 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    ctr = r0;
}

loc_80553074:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(20))) {
        goto loc_80553080;
    }
}

loc_80553078:
{
    r4 = (r4 + -20);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80553078;
    }
}

loc_80553080:
{
}

loc_80553084:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_805530A8;
    }
}

loc_80553088:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4 = 1;
    r3 = (r30 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 224));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x805530A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_805530A8:
{
    MemoryInline::FlatWrite32((r30 + 464), r31);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80552F38(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80552F38_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80552F38 func_80552F38 preserves=true fpr_mask=0x00000000
