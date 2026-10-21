#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80546AEC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f31 = ctx->fpr[31];
    ctx->gpr[4] = arg_r4;
    ctx->gpr[5] = arg_r5;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80546AECu);
    goto loc_80546AEC;

loc_80546AEC:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r30 = r3;
    r12 = MemoryInline::FlatRead32((r3 + 6500));
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    r3 = (r3 + 6500);
    ctx->lr = 0x80546B20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_80546B24:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80546B48;
    }
}

loc_80546B28:
{
    r12 = MemoryInline::FlatRead32((r30 + 6500));
    r3 = (r30 + 6500);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80546B3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    cr = ctx->cr;
    ctr = ctx->ctr;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 6496), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 256), f0.d);
}

loc_80546B48:
{
    r12 = MemoryInline::FlatRead32((r30 + 6500));
    r3 = (r30 + 6500);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80546B5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_80546B60:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80546B78;
    }
}

loc_80546B64:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 368));
    ctr = r12;
    ctx->lr = 0x80546B78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_80546B78:
{
    r3 = MemoryInline::FlatRead32((r30 + 6460));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 132));
    ctr = r12;
    ctx->lr = 0x80546B8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_80546B90:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80546BA4;
    }
}

loc_80546B94:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1128));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 6532));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 6532), f0.d);
}

loc_80546BA4:
{
    r12 = MemoryInline::FlatRead32((r30 + 6500));
    r3 = (r30 + 6500);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80546BB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    cr = ctx->cr;
    ctr = ctx->ctr;
    f1.d = MemoryInline::FlatReadFloat32((r13 + -13236));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1120));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x805014B4u>(ctx);
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1112));
    r0 = 90;
    r3 = 2;
    r31 = 253;
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1116));
    MemoryInline::FlatWrite8((r30 + 6556), static_cast<uint8_t>(r3));
    f31.d = f1.d;
    r3 = MemoryInline::FlatRead32((r30 + 6460));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWrite8((r30 + 6557), static_cast<uint8_t>(r0));
    f0.d = PPC_Fctiwz(f0.d);
    MemoryInline::FlatWrite8((r30 + 6558), static_cast<uint8_t>(r31));
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite8((r30 + 6559), static_cast<uint8_t>(r0));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 132));
    ctr = r12;
    ctx->lr = 0x80546C18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_80546C1C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80546C58;
    }
}

loc_80546C20:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1104));
    r0 = 140;
    r3 = 52;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1108));
    f1.d = PpcFmulsInline(f1.d, f31.d);
    MemoryInline::FlatWrite8((r30 + 6557), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 6556), static_cast<uint8_t>(r3));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWrite8((r30 + 6558), static_cast<uint8_t>(r31));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite8((r30 + 6559), static_cast<uint8_t>(r0));
    goto loc_80546D44;
}

loc_80546C58:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 6532));
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -1144), 0, 64u, true, false);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r2 + -1108));
    SetCRFloatResident(cr, 0, f1.d, f5.d);
}

loc_80546C64:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80546D44;
    }
}

loc_80546C6C:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -1144));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r2 + -1100));
    f4.d = f2.d;
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r2 + -1096));
    f7.d = f2.d;
    // inline leaf 0x8055FE34 (20 guest instruction(s))
    f8.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f6.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f8.d / f0.d));
    f9.d = PpcFmulsInline(f1.d, f1.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f1.d));
    f0.d = PpcFmulsInline(f1.d, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f1.d));
    f2.d = PpcFmulsInline(f4.d, f1.d);
    f5.d = PpcFmulsInline(f5.d, f1.d);
    f1.d = PpcFmulsInline(f7.d, f1.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f9.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = PpcFmulsInline(f4.d, f6.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f0.d = PpcFmulsInline(f8.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    // end of inlined leaf 0x8055FE34
    f0.d = PPC_Fctiwz(f1.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -1144));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 6532));
    f4.d = f2.d;
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r2 + -1092));
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    f7.d = f2.d;
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r2 + -1108));
    r0 = fctiwzword2;
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r2 + -1088));
    MemoryInline::FlatWrite8((r30 + 6556), static_cast<uint8_t>(r0));
    // inline leaf 0x8055FE34 (20 guest instruction(s))
    f8.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f6.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f8.d / f0.d));
    f9.d = PpcFmulsInline(f1.d, f1.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f1.d));
    f0.d = PpcFmulsInline(f1.d, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f1.d));
    f2.d = PpcFmulsInline(f4.d, f1.d);
    f5.d = PpcFmulsInline(f5.d, f1.d);
    f1.d = PpcFmulsInline(f7.d, f1.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f9.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = PpcFmulsInline(f4.d, f6.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f0.d = PpcFmulsInline(f8.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    // end of inlined leaf 0x8055FE34
    f0.d = PPC_Fctiwz(f1.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -1144));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r2 + -1084));
    f4.d = f2.d;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 6532));
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    f6.d = f3.d;
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r2 + -1108));
    r0 = fctiwzword3;
    f7.d = f2.d;
    MemoryInline::FlatWrite8((r30 + 6557), static_cast<uint8_t>(r0));
    // inline leaf 0x8055FE34 (20 guest instruction(s))
    f8.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f6.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f8.d / f0.d));
    f9.d = PpcFmulsInline(f1.d, f1.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f1.d));
    f0.d = PpcFmulsInline(f1.d, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f1.d));
    f2.d = PpcFmulsInline(f4.d, f1.d);
    f5.d = PpcFmulsInline(f5.d, f1.d);
    f1.d = PpcFmulsInline(f7.d, f1.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f9.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = PpcFmulsInline(f4.d, f6.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f0.d = PpcFmulsInline(f8.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    // end of inlined leaf 0x8055FE34
    f1.d = PPC_Fctiwz(f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r13 + -13236));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -1120));
    fctiwzword4 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f1.d);
    f1.d = PpcFmulsInline(f0.d, f2.d);
    r0 = fctiwzword4;
    MemoryInline::FlatWrite8((r30 + 6558), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x805014B4u>(ctx);
    f1 = ctx->fpr[1];
    f2.d = MemoryInline::FlatReadFloat32((r2 + -1144));
    f31.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -1108));
    f4.d = f2.d;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 6532));
    f5.d = f3.d;
    f6.d = MemoryInline::FlatReadFloat32((r2 + -1116));
    f7.d = f2.d;
    // inline leaf 0x8055FE34 (20 guest instruction(s))
    f8.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f6.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f8.d / f0.d));
    f9.d = PpcFmulsInline(f1.d, f1.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f1.d));
    f0.d = PpcFmulsInline(f1.d, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f1.d));
    f2.d = PpcFmulsInline(f4.d, f1.d);
    f5.d = PpcFmulsInline(f5.d, f1.d);
    f1.d = PpcFmulsInline(f7.d, f1.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f9.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = PpcFmulsInline(f4.d, f6.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f0.d = PpcFmulsInline(f8.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    // end of inlined leaf 0x8055FE34
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1080));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword5 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword5;
    MemoryInline::FlatWrite8((r30 + 6559), static_cast<uint8_t>(r0));
}

loc_80546D44:
{
    r3 = MemoryInline::FlatRead32((r30 + 6656));
    f1.d = MemoryInline::FlatReadFloat32((r13 + -13236));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1096));
    r0 = (r3 + 8);
    MemoryInline::FlatWrite32((r30 + 6656), r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r13 + -13236), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | r3;
}

}

extern "C" void func_80546AEC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80546AEC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80546AEC func_80546AEC preserves=true fpr_mask=0x00000000
