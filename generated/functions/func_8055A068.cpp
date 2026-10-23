#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8055A068_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8055A068;

loc_8055A068:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r5;
    r29 = r4;
    r28 = r3;
    r31 = MemoryInline::FlatRead32((r3 + 40));
}

loc_8055A098:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(r5))) {
        goto loc_8055A100;
    }
}

loc_8055A09C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 204));
    ctr = r12;
    ctx->lr = 0x8055A0ACu;
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
}

loc_8055A0B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8055A0D0;
    }
}

loc_8055A0B4:
{
}

loc_8055A0B8:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8055A0D0;
    }
}

loc_8055A0BC:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 212));
    ctr = r12;
    ctx->lr = 0x8055A0D0u;
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
}

loc_8055A0D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(2));
}

loc_8055A0D4:
{
    MemoryInline::FlatWrite32((r28 + 40), r30);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055A0F8;
    }
}

loc_8055A0DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8055A100;
    }
}

loc_8055A0E0:
{
}

loc_8055A0E4:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(1))) {
        goto loc_8055A0EC;
    }
}

loc_8055A0E8:
{
    goto loc_8055A100;
}

loc_8055A0EC:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r28 + 56), r0);
    goto loc_8055A100;
}

loc_8055A0F8:
{
    r0 = 8;
    MemoryInline::FlatWrite32((r28 + 56), r0);
}

loc_8055A100:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r4 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x8055A118u;
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
    r0 = MemoryInline::FlatRead32((r28 + 40));
}

loc_8055A120:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r31))) {
        goto loc_8055A18C;
    }
}

loc_8055A124:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 204));
    ctr = r12;
    ctx->lr = 0x8055A138u;
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
}

loc_8055A13C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8055A15C;
    }
}

loc_8055A140:
{
}

loc_8055A144:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8055A15C;
    }
}

loc_8055A148:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 212));
    ctr = r12;
    ctx->lr = 0x8055A15Cu;
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
}

loc_8055A15C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_8055A160:
{
    MemoryInline::FlatWrite32((r28 + 40), r31);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055A184;
    }
}

loc_8055A168:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8055A18C;
    }
}

loc_8055A16C:
{
}

loc_8055A170:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(1))) {
        goto loc_8055A178;
    }
}

loc_8055A174:
{
    goto loc_8055A18C;
}

loc_8055A178:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r28 + 56), r0);
    goto loc_8055A18C;
}

loc_8055A184:
{
    r0 = 8;
    MemoryInline::FlatWrite32((r28 + 56), r0);
}

loc_8055A18C:
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

extern "C" void func_8055A068(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8055A068_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8055A068 func_8055A068 preserves=true fpr_mask=0x00000000
