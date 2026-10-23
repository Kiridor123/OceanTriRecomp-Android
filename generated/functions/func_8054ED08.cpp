#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8054ED08_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_8054ED08;

loc_8054ED08:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -176), 0, 184u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 180u, (r1 + 180), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 160u, (r1 + 160), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 144u, (r1 + 144), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 128u, (r1 + 128), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 112u, (r1 + 112), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    r11 = (r1 + 112);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r0 = MemoryInline::FlatRead16(r5);
    r28 = r5;
    r26 = r3;
    r27 = r4;
}

loc_8054ED50:
{
    r31 = r28;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8054ED60;
    }
}

loc_8054ED58:
{
    r3 = 0;
    goto loc_8054EFAC;
}

loc_8054ED60:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 396));
    ctr = r12;
    ctx->lr = 0x8054ED70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r12 = MemoryInline::FlatRead32(r26);
    MemoryInline::FlatWriteRam32((r1 + 40), r3);
    r3 = r26;
    r12 = MemoryInline::FlatRead32((r12 + 396));
    MemoryInline::FlatWriteRam32((r1 + 44), r4);
    f31.d = MemoryInline::FlatReadFloat32((r1 + 40));
    ctr = r12;
    ctx->lr = 0x8054ED90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r29 = 0;
    MemoryInline::FlatWriteRam32((r1 + 48), r3);
    f29.d = MemoryInline::FlatReadFloat32((r2 + -1144));
    r30 = 0;
    MemoryInline::FlatWrite32((r26 + 6540), r29);
    f30.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    MemoryInline::FlatWriteRam32((r1 + 52), r4);
    MemoryInline::FlatWrite8((r13 + -18499), static_cast<uint8_t>(r29));
    goto loc_8054EF9C;
}

loc_8054EDBC:
{
    r0 = MemoryInline::FlatRead16(r31);
    r3 = (r26 + 16);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f29.d);
    r4 = (r1 + 56);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f29.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f29.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f29.d);
    MemoryInline::FlatWriteRam16((r1 + 72), static_cast<uint16_t>(r0));
    r12 = MemoryInline::FlatRead32((r26 + 92));
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x8054EDECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f1.d = f31.d;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    r3 = r26;
    r12 = MemoryInline::FlatRead32(r26);
    r4 = r28;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    r12 = MemoryInline::FlatRead32((r12 + 372));
    r5 = r29;
    f0.d = PpcFmulsInline(f30.d, f0.d);
    f28.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    ctr = r12;
    ctx->lr = 0x8054EE20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_8054EE24:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8054EED4;
    }
}

loc_8054EE28:
{
    r30 = (r30 + 1);
}

loc_8054EE30:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r27))) {
        goto loc_8054EEB0;
    }
}

loc_8054EE34:
{
    f30.d = MemoryInline::FlatReadFloat32((r1 + 48));
    goto loc_8054EE9C;
}

loc_8054EE3C:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r26 + 6400));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 6392));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f30.d, f2.d);
    f0.d = PpcFmulsInline(f30.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8054EE64:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8054EE74;
    }
}

loc_8054EE6C:
{
    r3 = r29;
    goto loc_8054EFAC;
}

loc_8054EE74:
{
    r31 = (r31 + 2);
    r0 = MemoryInline::FlatRead16(r31);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f1.d));
    r3 = (r26 + 16);
    r4 = (r1 + 56);
    MemoryInline::FlatWriteRam16((r1 + 72), static_cast<uint16_t>(r0));
    r12 = MemoryInline::FlatRead32((r26 + 92));
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x8054EE98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r29 = (r29 + 1);
}

loc_8054EE9C:
{
    r3 = MemoryInline::FlatRead32((r26 + 6540));
}

loc_8054EEA4:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r3))) {
        goto loc_8054EE3C;
    }
}

loc_8054EEA8:
{
    r3 = (r3 + -1);
    goto loc_8054EFAC;
}

loc_8054EEB0:
{
    r12 = MemoryInline::FlatRead32(r26);
    r3 = r26;
    r12 = MemoryInline::FlatRead32((r12 + 396));
    ctr = r12;
    ctx->lr = 0x8054EEC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    MemoryInline::FlatWriteRam32((r1 + 28), r4);
    f31.d = MemoryInline::FlatReadFloat32((r1 + 24));
    goto loc_8054EF28;
}

loc_8054EED4:
{
    f2.d = MemoryInline::FlatReadFloat32((r26 + 6400));
    f1.d = MemoryInline::FlatReadFloat32((r26 + 6392));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    SetCRFloatResident(cr, 0, f28.d, f0.d);
}

loc_8054EEEC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8054EF28;
    }
}

loc_8054EEF4:
{
    r12 = MemoryInline::FlatRead32(r26);
    r3 = r26;
    r12 = MemoryInline::FlatRead32((r12 + 396));
    ctr = r12;
    ctx->lr = 0x8054EF08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r30 = (r30 + 1);
}

loc_8054EF14:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f31.d = MemoryInline::FlatReadFloat32((r1 + 16));
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r27))) {
        goto loc_8054EF28;
    }
}

loc_8054EF20:
{
    r3 = r29;
    goto loc_8054EFAC;
}

loc_8054EF28:
{
    r0 = MemoryInline::FlatRead16(r31);
}

loc_8054EF30:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_8054EF7C;
    }
}

loc_8054EF34:
{
    r12 = MemoryInline::FlatRead32(r26);
    r3 = r26;
    r12 = MemoryInline::FlatRead32((r12 + 396));
    ctr = r12;
    ctx->lr = 0x8054EF48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r30 = (r30 + 1);
}

loc_8054EF54:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f31.d = MemoryInline::FlatReadFloat32((r1 + 8));
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r27))) {
        goto loc_8054EF68;
    }
}

loc_8054EF60:
{
    r3 = r29;
    goto loc_8054EFAC;
}

loc_8054EF68:
{
    r0 = MemoryInline::FlatRead16((r31 + 2));
}

loc_8054EF70:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8054EF94;
    }
}

loc_8054EF74:
{
    r3 = 0;
    goto loc_8054EFAC;
}

loc_8054EF7C:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
}

loc_8054EF94:
{
    r29 = (r29 + 1);
    r31 = (r31 + 2);
}

loc_8054EF9C:
{
    r0 = MemoryInline::FlatRead16(r31);
}

loc_8054EFA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8054EDBC;
    }
}

loc_8054EFA8:
{
    r3 = 0;
}

loc_8054EFAC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 88), 0, 96u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 72u, (r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 56u, (r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 40u, (r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 112);
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 24u, (r1 + 112));
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::ReadResolved32(guest_range_1, 92u, (r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8054ED08(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8054ED08_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8054ED08 func_8054ED08 preserves=true fpr_mask=0x00000000
