#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80547574_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_80547574;

loc_80547574:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 160), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    r11 = (r1 + 112);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r0 = MemoryInline::FlatRead8((r3 + 6481));
    f28.d = f1.d;
    r30 = r3;
    r31 = r4;
}

loc_805475BC:
{
    r22 = r5;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805475CC;
    }
}

loc_805475C4:
{
    r3 = 0;
    goto loc_80547898;
}

loc_805475CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 6540));
}

loc_805475D4:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_805475E0;
    }
}

loc_805475D8:
{
    r3 = 0;
    goto loc_80547898;
}

loc_805475E0:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
    // inline leaf 0x8055FE2C (2 guest instruction(s))
    r3 = 1;
    // end of inlined leaf 0x8055FE2C
}

loc_805475F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80547600;
    }
}

loc_805475F4:
{
    MemoryInline::FlatWrite32((r30 + 6540), r22);
    r3 = 0;
    goto loc_80547898;
}

loc_80547600:
{
    r26 = MemoryInline::FlatRead32((r30 + 6540));
    r25 = 0;
}

loc_8054760C:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_80547654;
    }
}

loc_80547610:
{
    r12 = MemoryInline::FlatRead32((r30 + 92));
    r3 = (r30 + 16);
    r12 = MemoryInline::FlatRead32((r12 + 140));
    ctr = r12;
    ctx->lr = 0x80547624u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_80547628:
{
    if ((static_cast<uint32_t>(r26) == static_cast<uint32_t>(r3))) {
        goto loc_80547654;
    }
}

loc_8054762C:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead16((r3 + -2));
}

loc_8054763C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(45))) {
        goto loc_80547648;
    }
}

loc_80547640:
{
    r25 = 1;
    goto loc_80547654;
}

loc_80547648:
{
}

loc_8054764C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(32))) {
        goto loc_80547654;
    }
}

loc_80547650:
{
    r25 = 2;
}

loc_80547654:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -1144));
    r23 = 0;
    r26 = MemoryInline::FlatRead32((r30 + 6540));
    r22 = 0;
    f30.d = f31.d;
    r29 = 1;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r24 = r26;
    r27 = (r31 + r0);
}

loc_80547678:
{
    r0 = MemoryInline::FlatRead16(r27);
}

loc_80547680:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(32))) {
        goto loc_80547794;
    }
}

loc_80547684:
{
}

loc_80547688:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(10))) {
        goto loc_80547794;
    }
}

loc_8054768C:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f30.d);
    r3 = (r30 + 16);
    r4 = (r1 + 48);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f30.d);
    MemoryInline::FlatWriteRam16((r1 + 64), static_cast<uint16_t>(r0));
    r12 = MemoryInline::FlatRead32((r30 + 92));
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x805476B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 56));
    r3 = r30;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    r28 = 0;
    r12 = MemoryInline::FlatRead32(r30);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r12 = MemoryInline::FlatRead32((r12 + 396));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    ctr = r12;
    ctx->lr = 0x805476E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    MemoryInline::FlatWriteRam32((r1 + 40), r3);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 44), r4);
    SetCRFloatResident(cr, 0, f28.d, f0.d);
}

loc_805476F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8054775C;
    }
}

loc_805476F4:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 396));
    ctr = r12;
    ctx->lr = 0x80547708u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r12 = MemoryInline::FlatRead32(r30);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 6400));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 6392));
    r12 = MemoryInline::FlatRead32((r12 + 396));
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r3 = r30;
    MemoryInline::FlatWriteRam32((r1 + 28), r4);
    ctr = r12;
    ctx->lr = 0x80547730u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f0.d = PpcFmulsInline(f29.d, f0.d);
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    f1.d = PpcFmulsInline(f31.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f28.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80547750:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8054775C;
    }
}

loc_80547758:
{
    r28 = 1;
}

loc_8054775C:
{
}

loc_80547760:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80547768;
    }
}

loc_80547764:
{
    r22 = 1;
}

loc_80547768:
{
}

loc_8054776C:
{
    if ((static_cast<uint32_t>(r24) == static_cast<uint32_t>(r26))) {
        goto loc_80547784;
    }
}

loc_80547770:
{
    r0 = MemoryInline::FlatRead16(r27);
}

loc_80547778:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(45))) {
        goto loc_80547784;
    }
}

loc_8054777C:
{
    r23 = r24;
    MemoryInline::FlatWrite8((r13 + -18499), static_cast<uint8_t>(r29));
}

loc_80547784:
{
    r27 = (r27 + 2);
    r0 = MemoryInline::FlatRead16(r27);
    r24 = (r24 + 1);
}

loc_80547790:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80547678;
    }
}

loc_80547794:
{
}

loc_80547798:
{
    if ((static_cast<uint32_t>(r24) != static_cast<uint32_t>(r26))) {
        goto loc_805477A4;
    }
}

loc_8054779C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r13 + -18499), static_cast<uint8_t>(r0));
}

loc_805477A4:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 396));
    ctr = r12;
    ctx->lr = 0x805477B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r12 = MemoryInline::FlatRead32(r30);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 6400));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 6392));
    r12 = MemoryInline::FlatRead32((r12 + 396));
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r3 = r30;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    ctr = r12;
    ctx->lr = 0x805477E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = PpcFmulsInline(f29.d, f0.d);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f1.d = PpcFmulsInline(f31.d, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805477FC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80547824;
    }
}

loc_80547804:
{
    r0 = MemoryInline::FlatRead8((r13 + -18499));
    r22 = 0;
}

loc_80547810:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80547818;
    }
}

loc_80547814:
{
    r22 = 1;
}

loc_80547818:
{
}

loc_8054781C:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(1))) {
        goto loc_80547824;
    }
}

loc_80547820:
{
    r22 = 1;
}

loc_80547824:
{
}

loc_80547828:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_80547884;
    }
}

loc_8054782C:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r6 = r31;
    r7 = r26;
    r12 = MemoryInline::FlatRead32((r12 + 288));
    r8 = r24;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    ctx->lr = 0x80547854u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_80547858:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8054788C;
    }
}

loc_8054785C:
{
}

loc_80547860:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_8054787C;
    }
}

loc_80547864:
{
    r3 = 0;
    r0 = (r24 + 1);
    MemoryInline::FlatWrite8((r13 + -18499), static_cast<uint8_t>(r3));
    r3 = 1;
    MemoryInline::FlatWrite32((r30 + 6540), r0);
    goto loc_80547898;
}

loc_8054787C:
{
    r24 = r23;
    goto loc_8054788C;
}

loc_80547884:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r13 + -18499), static_cast<uint8_t>(r0));
}

loc_8054788C:
{
    r0 = (r24 + 1);
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 6540), r0);
}

loc_80547898:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 112);
    f28.d = MemoryInline::FlatReadFloat64((r1 + 112));
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80547574(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80547574_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80547574 func_80547574 preserves=true fpr_mask=0x00000000
