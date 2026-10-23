#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804E0CD0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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

    goto loc_804E0CD0;

loc_804E0CD0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r5 = MemoryInline::FlatRead32((r31 + 96));
    r0 = MemoryInline::FlatRead32((r31 + 52));
    r4 = MemoryInline::FlatRead32((r31 + 60));
    r0 = (r5 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r4 + r0);
    r4 = (static_cast<int32_t>(r0) >> 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804C45B0u>(ctx);
    r0 = MemoryInline::FlatRead8((r31 + 12));
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 2472));
    r4 = (static_cast<int32_t>(r0) >> 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804C45E0u>(ctx);
    r0 = MemoryInline::FlatRead8((r31 + 12));
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 2536));
    r4 = (static_cast<int32_t>(r0) >> 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804C4610u>(ctx);
    r0 = MemoryInline::FlatRead8((r31 + 12));
    r5 = MemoryInline::FlatRead32((r31 + 8));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r5 + r0);
    r5 = MemoryInline::FlatRead32((r5 + 116));
    r0 = MemoryInline::FlatRead32((r4 + 2344));
    r4 = MemoryInline::FlatRead32((r4 + 2408));
    r0 = (r5 + r0);
    r0 = (r4 + r0);
    r4 = (static_cast<int32_t>(r0) >> 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804C4720u>(ctx);
    r0 = MemoryInline::FlatRead8((r31 + 12));
}

loc_804E0D7C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(9))) {
        goto loc_804E0D98;
    }
}

loc_804E0D80:
{
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r0 = (r0_rot_3 & 32640);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r4 + r0);
    r4 = MemoryInline::FlatRead8((r4 + 130));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804C4640u>(ctx);
}

loc_804E0D98:
{
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r12 = MemoryInline::FlatRead32((r4 + 12600));
}

loc_804E0DA4:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_804E0DB8;
    }
}

loc_804E0DA8:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r5 = MemoryInline::FlatRead8((r31 + 12));
    ctr = r12;
    ctx->lr = 0x804E0DB8u;
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

loc_804E0DB8:
{
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

extern "C" void func_804E0CD0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804E0CD0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804E0CD0 func_804E0CD0 preserves=true fpr_mask=0x00000000
