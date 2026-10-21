#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80537150_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r12 = ctx->gpr[12];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80537150u);
    goto loc_80537150;

loc_80537150:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_80537154:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805371E8;
    }
}

loc_80537158:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8053716C;
    }
}

loc_8053715C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80537160:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80537178;
    }
}

loc_80537164:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805371AC;
    }
}

loc_80537168:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8053716C:
{
}

loc_80537170:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(4))) {
        goto loc_return;
    }
}

loc_80537174:
{
    goto loc_80537224;
}

loc_80537178:
{
    r4 = MemoryInline::FlatRead32((r3 + 40));
    r0 = (r4 & -16);
}

loc_80537180:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80537184:
{
    r5 = MemoryInline::FlatRead32((r3 + 60));
    r0 = (r4 & 15);
    MemoryInline::FlatWrite32((r3 + 40), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80537194:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80537198:
{
    r12 = MemoryInline::FlatRead32(r5);
    r3 = r5;
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}

loc_805371AC:
{
    r4 = MemoryInline::FlatRead32((r3 + 40));
    r0 = (r4 & -16);
}

loc_805371B8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(64))) {
        goto loc_return;
    }
}

loc_805371BC:
{
    r5 = MemoryInline::FlatRead32((r3 + 60));
    r0 = (r4 & 15);
    r0 = (r0 | 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_805371CC:
{
    MemoryInline::FlatWrite32((r3 + 40), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_805371D4:
{
    r12 = MemoryInline::FlatRead32(r5);
    r3 = r5;
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}

loc_805371E8:
{
    r4 = MemoryInline::FlatRead32((r3 + 40));
    r0 = (r4 & -16);
}

loc_805371F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(128))) {
        goto loc_return;
    }
}

loc_805371F8:
{
    r5 = MemoryInline::FlatRead32((r3 + 60));
    r0 = (r4 & 15);
    r0 = (r0 | 128);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80537208:
{
    MemoryInline::FlatWrite32((r3 + 40), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80537210:
{
    r12 = MemoryInline::FlatRead32(r5);
    r3 = r5;
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}

loc_80537224:
{
    r4 = MemoryInline::FlatRead32((r3 + 40));
    r0 = (r4 & -16);
}

loc_80537230:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(192))) {
        goto loc_return;
    }
}

loc_80537234:
{
    r5 = MemoryInline::FlatRead32((r3 + 60));
    r0 = (r4 & 15);
    r0 = (r0 | 192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80537244:
{
    MemoryInline::FlatWrite32((r3 + 40), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8053724C:
{
    r12 = MemoryInline::FlatRead32(r5);
    r3 = r5;
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80537150(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80537150_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80537150 func_80537150 preserves=true fpr_mask=0x00000000
