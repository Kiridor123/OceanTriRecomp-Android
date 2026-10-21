#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80536EAC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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

    MKW_GUEST_ENTER(0x80536EACu);
    goto loc_80536EAC;

loc_80536EAC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r0 = (r0 & 15);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80536ECC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80536EF4;
    }
}

loc_80536ED0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80536EE0;
    }
}

loc_80536ED4:
{
}

loc_80536ED8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80536EEC;
    }
}

loc_80536EDC:
{
    goto loc_80536F04;
}

loc_80536EE0:
{
}

loc_80536EE4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_80536F04;
    }
}

loc_80536EE8:
{
    goto loc_80536EFC;
}

loc_80536EEC:
{
    r0 = 0;
    goto loc_80536F08;
}

loc_80536EF4:
{
    r0 = 1;
    goto loc_80536F08;
}

loc_80536EFC:
{
    r0 = 2;
    goto loc_80536F08;
}

loc_80536F04:
{
    r0 = 0;
}

loc_80536F08:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = r31;
    r5 = (r1 + 16);
    r4 = 18;
    r12 = MemoryInline::FlatRead32(r31);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x80536F28u;
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
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 39;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x80536F44u;
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
    r0 = MemoryInline::FlatRead32((r31 + 44));
}

loc_80536F4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80536FE4;
    }
}

loc_80536F50:
{
    r0 = MemoryInline::FlatRead32((r31 + 40));
    r0 = (r0 & 15);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80536F5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80536F84;
    }
}

loc_80536F60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80536F70;
    }
}

loc_80536F64:
{
}

loc_80536F68:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80536F7C;
    }
}

loc_80536F6C:
{
    goto loc_80536F94;
}

loc_80536F70:
{
}

loc_80536F74:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_80536F94;
    }
}

loc_80536F78:
{
    goto loc_80536F8C;
}

loc_80536F7C:
{
    r0 = 0;
    goto loc_80536F98;
}

loc_80536F84:
{
    r0 = 1;
    goto loc_80536F98;
}

loc_80536F8C:
{
    r0 = 2;
    goto loc_80536F98;
}

loc_80536F94:
{
    r0 = 0;
}

loc_80536F98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80536F9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80536FBC;
    }
}

loc_80536FA0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8053708C;
    }
}

loc_80536FA4:
{
}

loc_80536FA8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_80536FB0;
    }
}

loc_80536FAC:
{
    goto loc_8053708C;
}

loc_80536FB0:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    goto loc_80536FC4;
}

loc_80536FBC:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
}

loc_80536FC4:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r5 = (r1 + 12);
    r4 = 19;
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x80536FE0u;
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
    goto loc_8053708C;
}

loc_80536FE4:
{
    r0 = MemoryInline::FlatRead32((r31 + 48));
    r0 = (r0 & 15);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80536FF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80537028;
    }
}

loc_80536FF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80537008;
    }
}

loc_80536FF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80536FFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80537018;
    }
}

loc_80537000:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80537020;
    }
}

loc_80537004:
{
    goto loc_80537040;
}

loc_80537008:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8053700C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80537038;
    }
}

loc_80537010:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80537040;
    }
}

loc_80537014:
{
    goto loc_80537030;
}

loc_80537018:
{
    r0 = 6;
    goto loc_80537044;
}

loc_80537020:
{
    r0 = 7;
    goto loc_80537044;
}

loc_80537028:
{
    r0 = 5;
    goto loc_80537044;
}

loc_80537030:
{
    r0 = 5;
    goto loc_80537044;
}

loc_80537038:
{
    r0 = 5;
    goto loc_80537044;
}

loc_80537040:
{
    r0 = 6;
}

loc_80537044:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_80537048:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80537068;
    }
}

loc_8053704C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8053708C;
    }
}

loc_80537050:
{
}

loc_80537054:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(6))) {
        goto loc_8053705C;
    }
}

loc_80537058:
{
    goto loc_8053708C;
}

loc_8053705C:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    goto loc_80537070;
}

loc_80537068:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
}

loc_80537070:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r5 = (r1 + 8);
    r4 = 19;
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8053708Cu;
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

loc_8053708C:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 140));
    ctr = r12;
    ctx->lr = 0x805370A0u;
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

extern "C" void func_80536EAC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80536EAC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80536EAC func_80536EAC preserves=true fpr_mask=0x00000000
