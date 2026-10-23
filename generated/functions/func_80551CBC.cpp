#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80551CBC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[5] = arg_r5;
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

    goto loc_80551CBC;

loc_80551CBC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = 0x80650000u;
    r31 = (r31 + 6176);
    r30 = 0;
    r28 = r3;
}

loc_80551CE8:
{
    r12 = MemoryInline::FlatRead32((r28 + 6132));
    r3 = (r28 + 6132);
    r4 = (r31 + 4);
    r12 = MemoryInline::FlatRead32((r12 + 92));
    ctr = r12;
    ctx->lr = 0x80551D00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80551D04:
{
    r29 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80551E2C;
    }
}

loc_80551D0C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x80551D1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80551D20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80551D40;
    }
}

loc_80551D24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80551D34;
    }
}

loc_80551D28:
{
}

loc_80551D2C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_80551D90;
    }
}

loc_80551D30:
{
    goto loc_80551E2C;
}

loc_80551D34:
{
}

loc_80551D38:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(3))) {
        goto loc_80551E2C;
    }
}

loc_80551D3C:
{
    goto loc_80551DE0;
}

loc_80551D40:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x80551D54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_80551D58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80551E2C;
    }
}

loc_80551D5C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80551D6C;
    }
}

loc_80551D60:
{
}

loc_80551D64:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(1))) {
        goto loc_80551D74;
    }
}

loc_80551D68:
{
    goto loc_80551E2C;
}

loc_80551D6C:
{
}

loc_80551D70:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(5))) {
        goto loc_80551E2C;
    }
}

loc_80551D74:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = 2;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80551D8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80551E2C;
}

loc_80551D90:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x80551DA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_80551DA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80551E2C;
    }
}

loc_80551DAC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80551DBC;
    }
}

loc_80551DB0:
{
}

loc_80551DB4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(1))) {
        goto loc_80551DC4;
    }
}

loc_80551DB8:
{
    goto loc_80551E2C;
}

loc_80551DBC:
{
}

loc_80551DC0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(4))) {
        goto loc_80551E2C;
    }
}

loc_80551DC4:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = 2;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80551DDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80551E2C;
}

loc_80551DE0:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x80551DF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_80551DF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80551E2C;
    }
}

loc_80551DFC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80551E0C;
    }
}

loc_80551E00:
{
}

loc_80551E04:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(1))) {
        goto loc_80551E14;
    }
}

loc_80551E08:
{
    goto loc_80551E2C;
}

loc_80551E0C:
{
}

loc_80551E10:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(4))) {
        goto loc_80551E2C;
    }
}

loc_80551E14:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = 2;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80551E2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80551E2C:
{
    r30 = (r30 + 1);
    r31 = (r31 + 64);
}

loc_80551E38:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(26))) {
        goto loc_80551CE8;
    }
}

loc_80551E3C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80551CBC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80551CBC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80551CBC func_80551CBC preserves=true fpr_mask=0x00000000
