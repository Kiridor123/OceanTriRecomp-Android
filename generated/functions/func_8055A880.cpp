#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8055A880_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8055A880;

loc_8055A880:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_8055A89C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8055A8A8;
    }
}

loc_8055A8A0:
{
    r3 = 0;
    goto loc_8055A948;
}

loc_8055A8A8:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x8055A8B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 & 65535);
}

loc_8055A8C0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1))) {
        goto loc_8055A8CC;
    }
}

loc_8055A8C4:
{
    r3 = 0;
    goto loc_8055A948;
}

loc_8055A8CC:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = (r1 + 12);
    r5 = (r1 + 8);
    r12 = MemoryInline::FlatRead32((r12 + 152));
    ctr = r12;
    ctx->lr = 0x8055A8E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_8055A8F4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8055A900;
    }
}

loc_8055A8F8:
{
    r3 = 0;
    goto loc_8055A948;
}

loc_8055A900:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 156));
    ctr = r12;
    ctx->lr = 0x8055A914u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(46));
}

loc_8055A91C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055A93C;
    }
}

loc_8055A920:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8055A930;
    }
}

loc_8055A924:
{
}

loc_8055A928:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(33))) {
        goto loc_8055A93C;
    }
}

loc_8055A92C:
{
    goto loc_8055A944;
}

loc_8055A930:
{
}

loc_8055A934:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(63))) {
        goto loc_8055A93C;
    }
}

loc_8055A938:
{
    goto loc_8055A944;
}

loc_8055A93C:
{
    r3 = 1;
    goto loc_8055A948;
}

loc_8055A944:
{
    r3 = 0;
}

loc_8055A948:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8055A880(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8055A880_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8055A880 func_8055A880 preserves=true fpr_mask=0x00000000
