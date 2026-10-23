#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804753A0(CpuContext* ctx);
extern "C" uint64_t func_804753A0_ra68_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804CBD80(CpuContext* ctx);
extern "C" uint64_t func_804CBD80_ra68_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804CBE80(CpuContext* ctx);
extern "C" uint64_t func_804CBE80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804E9010(CpuContext* ctx);
extern "C" uint32_t func_804E9010_ra308_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804E91A0(CpuContext* ctx);
extern "C" uint64_t func_804E91A0_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_804EDC30(CpuContext* ctx);
extern "C" uint64_t func_804EDC30_ra380_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804EDC40(CpuContext* ctx);
extern "C" uint64_t func_804EDC40_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804EDC70(CpuContext* ctx);
extern "C" uint64_t func_804EDC70_ra68_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804EEF40(CpuContext* ctx);
extern "C" uint64_t func_804EEF40_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804EF6F0(CpuContext* ctx);
extern "C" uint64_t func_804EF6F0_ra0_0_18_0(CpuContext*);
extern "C" void func_804EF920(CpuContext* ctx);
extern "C" uint64_t func_804EF920_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804F15C0(CpuContext* ctx);
extern "C" uint32_t func_804F15C0_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" void func_80820C70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t fctiwzword6 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_31 = 0;
    uint32_t r0_rot_32 = 0;
    uint32_t r0_rot_33 = 0;
    uint32_t r0_rot_34 = 0;
    uint32_t r0_rot_35 = 0;
    uint32_t r0_rot_36 = 0;
    uint32_t r0_rot_37 = 0;
    uint32_t r0_rot_38 = 0;
    uint32_t r0_rot_39 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_40 = 0;
    uint32_t r0_rot_41 = 0;
    uint32_t r0_rot_42 = 0;
    uint32_t r0_rot_43 = 0;
    uint32_t r0_rot_44 = 0;
    uint32_t r0_rot_45 = 0;
    uint32_t r0_rot_46 = 0;
    uint32_t r0_rot_47 = 0;
    uint32_t r0_rot_48 = 0;
    uint32_t r0_rot_49 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_50 = 0;
    uint32_t r0_rot_51 = 0;
    uint32_t r0_rot_52 = 0;
    uint32_t r0_rot_53 = 0;
    uint32_t r0_rot_54 = 0;
    uint32_t r0_rot_55 = 0;
    uint32_t r0_rot_56 = 0;
    uint32_t r0_rot_57 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80820C70;

loc_80820C70:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 116u, (r1 + 116), r0);
    r11 = (r1 + 80);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 96u, (r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 80u, (r1 + 80), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r28 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 592));
    r0 = 1127219200;
    r30 = 0x80840000u;
    r12 = MemoryInline::FlatRead32(r3);
    r31 = 0x80840000u;
    r29 = r4;
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 16), r0);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    r30 = (r30 + 17656);
    MemoryInline::WriteResolved32(guest_range_2, 24u, (r1 + 24), r0);
    r31 = (r31 + 21768);
    ctr = r12;
    ctx->lr = 0x80820CCCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r25 = r28;
    r26 = 0;
    goto loc_80820CE8;
}

loc_80820CD8:
{
    r3 = MemoryInline::FlatRead32((r25 + 704));
    ctx->lr = 0x80820CE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081AC20u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r25 = (r25 + 4);
    r26 = (r26 + 1);
}

loc_80820CE8:
{
    r0 = MemoryInline::FlatRead32((r28 + 16));
}

loc_80820CF0:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r0))) {
        goto loc_80820CD8;
    }
}

loc_80820CF4:
{
    r25 = r28;
    r26 = 0;
}

loc_80820CFC:
{
    r3 = MemoryInline::FlatRead32((r25 + 1048));
    ctx->lr = 0x80820D04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081AC20u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r26 = (r26 + 1);
    r25 = (r25 + 4);
}

loc_80820D10:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(15))) {
        goto loc_80820CFC;
    }
}

loc_80820D14:
{
    r25 = r28;
    r26 = 0;
}

loc_80820D1C:
{
    r3 = MemoryInline::FlatRead32((r25 + 752));
    ctx->lr = 0x80820D24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081AC20u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r26 = (r26 + 1);
    r25 = (r25 + 4);
}

loc_80820D30:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(74))) {
        goto loc_80820D1C;
    }
}

loc_80820D34:
{
    f30.d = MemoryInline::FlatReadFloat32((r30 + 736));
    r25 = r28;
    f31.d = MemoryInline::FlatReadFloat32((r30 + 800));
    r26 = 0;
}

loc_80820D44:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 528));
    SetCRFloatResident(cr, 0, f1.d, f30.d);
}

loc_80820D4C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80820DCC;
    }
}

loc_80820D50:
{
    r3 = (r28 + r26);
    r0 = MemoryInline::FlatRead8((r3 + 128));
}

loc_80820D5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80820D70;
    }
}

loc_80820D60:
{
    r3 = MemoryInline::FlatRead32((r25 + 684));
    r0 = MemoryInline::FlatRead8((r3 + 28));
}

loc_80820D6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80820D90;
    }
}

loc_80820D70:
{
    MemoryInline::FlatWriteFloat32((r25 + 528), f30.d);
    MemoryInline::FlatWriteFloat32((r25 + 544), f30.d);
    r3 = MemoryInline::FlatRead32((r25 + 684));
    r0 = MemoryInline::FlatRead8((r3 + 28));
}

loc_80820D84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80820DF8;
    }
}

loc_80820D88:
{
    ctx->lr = 0x80820D8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081D160u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    goto loc_80820DF8;
}

loc_80820D90:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r25 + 528), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_80820DA4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80820DB8;
    }
}

loc_80820DAC:
{
    r0 = MemoryInline::FlatRead32((r28 + 20));
}

loc_80820DB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(17))) {
        goto loc_80820DF8;
    }
}

loc_80820DB8:
{
    r3 = MemoryInline::FlatRead32((r25 + 684));
    ctx->lr = 0x80820DC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081D160u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    MemoryInline::FlatWriteFloat32((r25 + 528), f30.d);
    MemoryInline::FlatWriteFloat32((r25 + 544), f31.d);
    goto loc_80820DF8;
}

loc_80820DCC:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 544));
    SetCRFloatResident(cr, 0, f1.d, f30.d);
}

loc_80820DD4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80820DF8;
    }
}

loc_80820DD8:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r25 + 544), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_80820DEC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80820DF8;
    }
}

loc_80820DF4:
{
    MemoryInline::FlatWriteFloat32((r25 + 544), f30.d);
}

loc_80820DF8:
{
    r26 = (r26 + 1);
    r25 = (r25 + 4);
}

loc_80820E04:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(4))) {
        goto loc_80820D44;
    }
}

loc_80820E08:
{
    r0 = MemoryInline::FlatRead32((r28 + 20));
}

loc_80820E10:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(19))) {
        goto loc_808225DC;
    }
}

loc_80820E14:
{
    r3 = 0x80840000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + 24680);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80820E2Cu:
        goto loc_80820E2C;
        break;
    case 0x80820FF8u:
        goto loc_80820FF8;
        break;
    case 0x808225DCu:
        goto loc_808225DC;
        break;
    case 0x80821268u:
        goto loc_80821268;
        break;
    case 0x80821360u:
        goto loc_80821360;
        break;
    case 0x80821480u:
        goto loc_80821480;
        break;
    case 0x80821748u:
        goto loc_80821748;
        break;
    case 0x8082180Cu:
        goto loc_8082180C;
        break;
    case 0x808219C4u:
        goto loc_808219C4;
        break;
    case 0x80821A18u:
        goto loc_80821A18;
        break;
    case 0x80821B10u:
        goto loc_80821B10;
        break;
    case 0x80821B54u:
        goto loc_80821B54;
        break;
    case 0x80821B8Cu:
        goto loc_80821B8C;
        break;
    case 0x80821C84u:
        goto loc_80821C84;
        break;
    case 0x80821E14u:
        goto loc_80821E14;
        break;
    case 0x80821E98u:
        goto loc_80821E98;
        break;
    case 0x80821F48u:
        goto loc_80821F48;
        break;
    case 0x808221C4u:
        goto loc_808221C4;
        break;
    case 0x808221D0u:
        goto loc_808221D0;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80820E2C:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_80820E38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80820F00;
    }
}

loc_80820E3C:
{
    r0 = 37;
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
    // nop
}

loc_80820E50:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80820E58:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80820E6C;
    }
}

loc_80820E5C:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80820E64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80820E6C;
    }
}

loc_80820E68:
{
    goto loc_80820E9C;
}

loc_80820E6C:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80820E78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80820E8C;
    }
}

loc_80820E7C:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80820E84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80820E8C;
    }
}

loc_80820E88:
{
    goto loc_80820E9C;
}

loc_80820E8C:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80820E50;
    }
}

loc_80820E98:
{
    r3 = -1;
}

loc_80820E9C:
{
    MemoryInline::FlatWrite32((r28 + 24), r3);
    r4 = (r31 + 2896);
    r3 = MemoryInline::FlatRead32((r28 + 568));
    r5 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80820EC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r4 = (r31 + 2904);
    r5 = 1;
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 568));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80820EECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 254);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    goto loc_80820FBC;
}

loc_80820F00:
{
    r0 = 37;
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
}

loc_80820F10:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80820F18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80820F2C;
    }
}

loc_80820F1C:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80820F24:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80820F2C;
    }
}

loc_80820F28:
{
    goto loc_80820F5C;
}

loc_80820F2C:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80820F38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80820F4C;
    }
}

loc_80820F3C:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80820F44:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80820F4C;
    }
}

loc_80820F48:
{
    goto loc_80820F5C;
}

loc_80820F4C:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80820F10;
    }
}

loc_80820F58:
{
    r3 = -1;
}

loc_80820F5C:
{
    MemoryInline::FlatWrite32((r28 + 24), r3);
    r4 = (r31 + 2896);
    r3 = MemoryInline::FlatRead32((r28 + 568));
    r5 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80820F80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r4 = (r31 + 2904);
    r5 = 1;
    r0 = (r0 & 254);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 568));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80820FB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
}

loc_80820FBC:
{
    r0 = MemoryInline::FlatRead32((r28 + 24));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r28 + r0);
    r27 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r27;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl1_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl1_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl1_0x8081AA24;
    }
}

loc_inl1_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl1_0x8081AA28;
}

loc_inl1_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl1_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl1_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
}

loc_80820FD8:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r27 + 20), r0);
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_808225DC;
    }
}

loc_80820FE4:
{
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r3 = r28;
    r4 = r29;
    ctx->lr = 0x80820FF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80820A00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_808225DC;
}

loc_80820FF8:
{
    r0 = MemoryInline::FlatRead32((r28 + 24));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 752));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80821010:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_808225DC;
    }
}

loc_80821014:
{
    r3 = r28;
    ctx->lr = 0x8082101Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80820480u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->lr = 0x80821020u;
    if constexpr (KnownRegArgsCpuCall<0x804EF6F0u>(&func_804EF6F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804EF6F0_7926 = func_804EF6F0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804EF6F0_7926);
        r4 = static_cast<uint32_t>(regargs_result_804EF6F0_7926 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804EF6F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
}

loc_8082102C:
{
    MemoryInline::FlatWrite8((r28 + 140), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082112C;
    }
}

loc_80821034:
{
    r0 = 37;
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
    // nop
}

loc_80821048:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80821050:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_80821064;
    }
}

loc_80821054:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8082105C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_80821064;
    }
}

loc_80821060:
{
    goto loc_80821094;
}

loc_80821064:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80821070:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_80821084;
    }
}

loc_80821074:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8082107C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_80821084;
    }
}

loc_80821080:
{
    goto loc_80821094;
}

loc_80821084:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80821048;
    }
}

loc_80821090:
{
    r3 = -1;
}

loc_80821094:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r28 + r0);
    r27 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r27;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl2_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl2_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl2_0x8081AA24;
    }
}

loc_inl2_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl2_0x8081AA28;
}

loc_inl2_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl2_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl2_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 37;
    r3 = 1;
    MemoryInline::FlatWrite32((r27 + 20), r3);
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
}

loc_808210C0:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_808210C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_808210DC;
    }
}

loc_808210CC:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_808210D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_808210DC;
    }
}

loc_808210D8:
{
    goto loc_8082110C;
}

loc_808210DC:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_808210E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_808210FC;
    }
}

loc_808210EC:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_808210F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_808210FC;
    }
}

loc_808210F8:
{
    goto loc_8082110C;
}

loc_808210FC:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808210C0;
    }
}

loc_80821108:
{
    r3 = -1;
}

loc_8082110C:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r28 + r0);
    r27 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r27;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl3_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl3_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl3_0x8081AA24;
    }
}

loc_inl3_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl3_0x8081AA28;
}

loc_inl3_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl3_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl3_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r27 + 20), r0);
    goto loc_80821220;
}

loc_8082112C:
{
    r0 = 37;
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
    // nop
}

loc_80821140:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80821148:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_8082115C;
    }
}

loc_8082114C:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80821154:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_8082115C;
    }
}

loc_80821158:
{
    goto loc_8082118C;
}

loc_8082115C:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80821168:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_8082117C;
    }
}

loc_8082116C:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80821174:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_8082117C;
    }
}

loc_80821178:
{
    goto loc_8082118C;
}

loc_8082117C:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80821140;
    }
}

loc_80821188:
{
    r3 = -1;
}

loc_8082118C:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r28 + r0);
    r27 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r27;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl4_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl4_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl4_0x8081AA24;
    }
}

loc_inl4_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl4_0x8081AA28;
}

loc_inl4_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl4_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl4_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 37;
    r3 = 1;
    MemoryInline::FlatWrite32((r27 + 20), r3);
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
}

loc_808211B8:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_808211C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_808211D4;
    }
}

loc_808211C4:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_808211CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_808211D4;
    }
}

loc_808211D0:
{
    goto loc_80821204;
}

loc_808211D4:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_808211E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_808211F4;
    }
}

loc_808211E4:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_808211EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_808211F4;
    }
}

loc_808211F0:
{
    goto loc_80821204;
}

loc_808211F4:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808211B8;
    }
}

loc_80821200:
{
    r3 = -1;
}

loc_80821204:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r28 + r0);
    r27 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r27;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl5_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl5_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl5_0x8081AA24;
    }
}

loc_inl5_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl5_0x8081AA28;
}

loc_inl5_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl5_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl5_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r27 + 20), r0);
}

loc_80821220:
{
    r3 = r28;
    ctx->lr = 0x80821228u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808208D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r28 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80821238:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8082124C;
    }
}

loc_8082123C:
{
    r3 = 5;
    r4 = 0;
    ctr = r12;
    ctx->lr = 0x8082124Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8082124C:
{
}

loc_80821250:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8082125C;
    }
}

loc_80821254:
{
    r3 = 0;
    ctx->lr = 0x8082125Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8082125C:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    goto loc_808225DC;
}

loc_80821268:
{
    r4 = MemoryInline::FlatRead32((r28 + 24));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 752));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80821280:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80821304;
    }
}

loc_80821284:
{
}

loc_80821288:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(5))) {
        goto loc_80821304;
    }
}

loc_8082128C:
{
    r25 = (r31 + 2800);
    r31 = 0;
}

loc_80821294:
{
    r26 = r25;
    r27 = 0;
}

loc_8082129C:
{
    r3 = MemoryInline::FlatRead32((r28 + 568));
    r5 = 1;
    r4 = MemoryInline::FlatRead32(r26);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x808212BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r27 = (r27 + 1);
}

loc_808212C8:
{
    r26 = (r26 + 4);
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(4))) {
        goto loc_8082129C;
    }
}

loc_808212D8:
{
    r31 = (r31 + 1);
    r25 = (r25 + 16);
}

loc_808212E4:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(4))) {
        goto loc_80821294;
    }
}

loc_808212E8:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r28 + 24), r0);
    r27 = MemoryInline::FlatRead32((r28 + 1068));
    r3 = r27;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl6_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl6_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl6_0x8081AA24;
    }
}

loc_inl6_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl6_0x8081AA28;
}

loc_inl6_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl6_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl6_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r27 + 20), r0);
}

loc_80821304:
{
    r3 = MemoryInline::FlatRead32((r28 + 560));
    r0 = (r3 + -1);
}

loc_8082130C:
{
    MemoryInline::FlatWrite32((r28 + 560), r0);
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_808225DC;
    }
}

loc_80821314:
{
    r25 = 0;
}

loc_80821318:
{
    r3 = r25;
    ctx->lr = 0x80821320u;
    if constexpr (KnownRegArgsCpuCall<0x804EEF40u>(&func_804EEF40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804EEF40_BC33 = func_804EEF40_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804EEF40_BC33);
        r4 = static_cast<uint32_t>(regargs_result_804EEF40_BC33 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804EEF40u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r25 = (r25 + 1);
}

loc_80821328:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(4))) {
        goto loc_80821318;
    }
}

loc_8082132C:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r3 = 0x80870000u;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 804));
    r3 = MemoryInline::FlatRead32((r3 + -32304));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite32((r28 + 564), r0);
    goto loc_808225DC;
}

loc_80821360:
{
    r0 = MemoryInline::FlatRead32((r28 + 24));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 752));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80821378:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_808225DC;
    }
}

loc_8082137C:
{
    r0 = MemoryInline::FlatRead32((r28 + 564));
}

loc_80821384:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_808213CC;
    }
}

loc_80821388:
{
    r25 = 0;
}

loc_8082138C:
{
    r3 = r25;
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804EF040u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8082139C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1))) {
        goto loc_808213AC;
    }
}

loc_808213A0:
{
    r25 = (r25 + 1);
}

loc_808213A8:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(4))) {
        goto loc_8082138C;
    }
}

loc_808213AC:
{
}

loc_808213B0:
{
    if ((static_cast<int32_t>(r25) >= static_cast<int32_t>(4))) {
        goto loc_808213C4;
    }
}

loc_808213B4:
{
    r3 = MemoryInline::FlatRead32((r28 + 564));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r28 + 564), r0);
    goto loc_808225DC;
}

loc_808213C4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 564), r0);
}

loc_808213CC:
{
    r27 = 0;
    r0 = 5;
    r3 = 0x80820000u;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r3 = (r3 + 12784);
    MemoryInline::FlatWrite32((r28 + 28), r27);
    MemoryInline::FlatWrite32((r28 + 156), r27);
    ctx->lr = 0x808213ECu;
    if constexpr (KnownRegArgsCpuCall<0x804EDC70u>(&func_804EDC70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        const auto regargs_result_804EDC70_CF46 = func_804EDC70_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804EDC70_CF46);
        r4 = static_cast<uint32_t>(regargs_result_804EDC70_CF46 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x804EDC70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite32((r28 + 524), r3);
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r28 + 684));
    MemoryInline::FlatWrite8((r28 + 146), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r28 + 147), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r3 + 68), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 688));
    MemoryInline::FlatWrite8((r3 + 68), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 692));
    MemoryInline::FlatWrite8((r3 + 68), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 696));
    MemoryInline::FlatWrite8((r3 + 68), static_cast<uint8_t>(r0));
    ctx->lr = 0x80821420u;
    if constexpr (KnownRegArgsCpuCall<0x804EDC30u>(&func_804EDC30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804EDC30_D6E0 = func_804EDC30_ra380_0_18_0(ctx, r7, r8, r9);
        r3 = static_cast<uint32_t>(regargs_result_804EDC30_D6E0);
        r4 = static_cast<uint32_t>(regargs_result_804EDC30_D6E0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804EDC30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_12 & 1);
}

loc_8082142C:
{
    MemoryInline::FlatWrite8((r28 + 145), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_808225DC;
    }
}

loc_80821434:
{
    r3 = (r28 + 1512);
    ctx->lr = 0x8082143Cu;
    if constexpr (KnownRegArgsCpuCall<0x804CBE80u>(&func_804CBE80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_804CBE80_DEAD = func_804CBE80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CBE80_DEAD);
        r4 = static_cast<uint32_t>(regargs_result_804CBE80_DEAD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804CBE80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r28 + 1512);
    r4 = 0;
    // inline leaf 0x804CC2B0 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 40), r4);
    // end of inlined leaf 0x804CC2B0
    r4 = 0x80000000u;
    r7 = 0x80820000u;
    r0 = MemoryInline::FlatRead32((r4 + 248));
    r3 = 274857984;
    r4 = (r3 + 19923);
    r7 = (r7 + 12576);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_13 & 1073741823);
    r3 = (r28 + 1512);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r0)) >> 32));
    r5 = 0;
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_14 & 67108863);
    r6 = (r0 * 100);
    ctx->lr = 0x8082147Cu;
    if constexpr (KnownRegArgsCpuCall<0x804CBD80u>(&func_804CBD80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CBD80_E6DF = func_804CBD80_ra68_0_18_0(ctx, r3, r5, r6);
        r3 = static_cast<uint32_t>(regargs_result_804CBD80_E6DF);
        r4 = static_cast<uint32_t>(regargs_result_804CBD80_E6DF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CBD80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_808225DC;
}

loc_80821480:
{
    r0 = MemoryInline::FlatRead8((r28 + 145));
}

loc_80821488:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808225DC;
    }
}

loc_8082148C:
{
    r0 = MemoryInline::FlatRead32((r28 + 24));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1048));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_808214A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_808225DC;
    }
}

loc_808214A8:
{
    r0 = MemoryInline::FlatRead32((r28 + 28));
}

loc_808214B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80821568;
    }
}

loc_808214B4:
{
    r25 = 0;
    r27 = 1;
    r31 = 37;
}

loc_808214C0:
{
    r5 = (r30 + 104);
    r3 = (r25 + 6);
    r4 = 0;
    ctr = r31;
}

loc_808214D0:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_808214D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_808214EC;
    }
}

loc_808214DC:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_808214E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_808214EC;
    }
}

loc_808214E8:
{
    goto loc_8082151C;
}

loc_808214EC:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r4 = (r4 + 1);
}

loc_808214F8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8082150C;
    }
}

loc_808214FC:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80821504:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_8082150C;
    }
}

loc_80821508:
{
    goto loc_8082151C;
}

loc_8082150C:
{
    r5 = (r5 + 16);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808214D0;
    }
}

loc_80821518:
{
    r4 = -1;
}

loc_8082151C:
{
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & -4);
    r3 = (r28 + r0);
    r26 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r26;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl8_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl8_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl8_0x8081AA24;
    }
}

loc_inl8_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl8_0x8081AA28;
}

loc_inl8_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl8_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl8_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r25 = (r25 + 1);
    MemoryInline::FlatWrite32((r26 + 20), r27);
}

loc_8082153C:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(5))) {
        goto loc_808214C0;
    }
}

loc_80821540:
{
    r3 = r28;
    ctx->lr = 0x80821548u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808273F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32((r28 + 1104));
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 24), r0);
    r25 = MemoryInline::FlatRead32((r28 + 1104));
    r3 = r25;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl9_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl9_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl9_0x8081AA24;
    }
}

loc_inl9_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl9_0x8081AA28;
}

loc_inl9_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl9_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl9_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r25 + 20), r0);
}

loc_80821568:
{
    r0 = MemoryInline::FlatRead8((r28 + 128));
    r3 = 0;
}

loc_80821574:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808215AC;
    }
}

loc_80821578:
{
    r0 = MemoryInline::FlatRead8((r28 + 129));
    r3 = 1;
}

loc_80821584:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808215AC;
    }
}

loc_80821588:
{
    r0 = MemoryInline::FlatRead8((r28 + 130));
    r3 = 2;
}

loc_80821594:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808215AC;
    }
}

loc_80821598:
{
    r0 = MemoryInline::FlatRead8((r28 + 131));
    r3 = 3;
}

loc_808215A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808215AC;
    }
}

loc_808215A8:
{
    r3 = 4;
}

loc_808215AC:
{
}

loc_808215B0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(4))) {
        goto loc_808215BC;
    }
}

loc_808215B4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 147), static_cast<uint8_t>(r0));
}

loc_808215BC:
{
    r0 = MemoryInline::FlatRead8((r28 + 147));
}

loc_808215C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808216C8;
    }
}

loc_808215C8:
{
    r0 = MemoryInline::FlatRead32((r28 + 20));
}

loc_808215D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_80821648;
    }
}

loc_808215D4:
{
    r0 = MemoryInline::FlatRead32((r28 + 136));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 684));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8081D0D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
}

loc_808215EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80821610;
    }
}

loc_808215F0:
{
    r0 = MemoryInline::FlatRead32((r28 + 136));
    r4 = 5;
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_20 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 684));
    ctx->lr = 0x80821608u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081CD00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8082160C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80821620;
    }
}

loc_80821610:
{
    r0 = MemoryInline::FlatRead32((r28 + 1568));
    r3 = 6;
    MemoryInline::FlatWrite32((r28 + 20), r3);
    MemoryInline::FlatWrite32((r28 + 28), r0);
}

loc_80821620:
{
    r4 = MemoryInline::FlatRead32((r28 + 156));
    r3 = MemoryInline::FlatRead32((r28 + 1568));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r28 + 156), r0);
}

loc_80821634:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r3))) {
        goto loc_808225DC;
    }
}

loc_80821638:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    MemoryInline::FlatWrite32((r28 + 28), r3);
    goto loc_808225DC;
}

loc_80821648:
{
    r3 = MemoryInline::FlatRead32((r28 + 28));
    r0 = MemoryInline::FlatRead32((r28 + 1564));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 28), r3);
}

loc_8082165C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_808225DC;
    }
}

loc_80821660:
{
    r0 = 7;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    ctx->lr = 0x8082166Cu;
    if constexpr (KnownRegArgsCpuCall<0x804EDC40u>(&func_804EDC40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_804EDC40_10D7D = func_804EDC40_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804EDC40_10D7D);
        r4 = static_cast<uint32_t>(regargs_result_804EDC40_10D7D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x804EDC40u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_80821670:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808216BC;
    }
}

loc_80821674:
{
    r3 = (r28 + 1512);
    ctx->lr = 0x8082167Cu;
    if constexpr (KnownRegArgsCpuCall<0x804CBE80u>(&func_804CBE80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_804CBE80_1129E = func_804CBE80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CBE80_1129E);
        r4 = static_cast<uint32_t>(regargs_result_804CBE80_1129E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804CBE80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r28 + 1512);
    r4 = 1;
    // inline leaf 0x804CC2B0 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 40), r4);
    // end of inlined leaf 0x804CC2B0
    r4 = 0x80000000u;
    r7 = 0x80820000u;
    r0 = MemoryInline::FlatRead32((r4 + 248));
    r3 = 274857984;
    r4 = (r3 + 19923);
    r7 = (r7 + 12576);
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_23 & 1073741823);
    r3 = (r28 + 1512);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r0)) >> 32));
    r5 = 0;
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_24 & 67108863);
    r6 = (r0 * 100);
    ctx->lr = 0x808216BCu;
    if constexpr (KnownRegArgsCpuCall<0x804CBD80u>(&func_804CBD80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CBD80_11AD3 = func_804CBD80_ra68_0_18_0(ctx, r3, r5, r6);
        r3 = static_cast<uint32_t>(regargs_result_804CBD80_11AD3);
        r4 = static_cast<uint32_t>(regargs_result_804CBD80_11AD3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CBD80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_808216BC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 146), static_cast<uint8_t>(r0));
    goto loc_808225DC;
}

loc_808216C8:
{
    r3 = MemoryInline::FlatRead32((r28 + 28));
    r0 = MemoryInline::FlatRead32((r28 + 1564));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 28), r3);
}

loc_808216DC:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_808225DC;
    }
}

loc_808216E0:
{
    r0 = 7;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    ctx->lr = 0x808216ECu;
    if constexpr (KnownRegArgsCpuCall<0x804EDC40u>(&func_804EDC40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_804EDC40_1230B = func_804EDC40_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804EDC40_1230B);
        r4 = static_cast<uint32_t>(regargs_result_804EDC40_1230B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x804EDC40u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_808216F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8082173C;
    }
}

loc_808216F4:
{
    r3 = (r28 + 1512);
    ctx->lr = 0x808216FCu;
    if constexpr (KnownRegArgsCpuCall<0x804CBE80u>(&func_804CBE80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_804CBE80_1282C = func_804CBE80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CBE80_1282C);
        r4 = static_cast<uint32_t>(regargs_result_804CBE80_1282C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804CBE80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r28 + 1512);
    r4 = 1;
    // inline leaf 0x804CC2B0 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 40), r4);
    // end of inlined leaf 0x804CC2B0
    r4 = 0x80000000u;
    r7 = 0x80820000u;
    r0 = MemoryInline::FlatRead32((r4 + 248));
    r3 = 274857984;
    r4 = (r3 + 19923);
    r7 = (r7 + 12576);
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_26 & 1073741823);
    r3 = (r28 + 1512);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r0)) >> 32));
    r5 = 0;
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_27 & 67108863);
    r6 = (r0 * 100);
    ctx->lr = 0x8082173Cu;
    if constexpr (KnownRegArgsCpuCall<0x804CBD80u>(&func_804CBD80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CBD80_13061 = func_804CBD80_ra68_0_18_0(ctx, r3, r5, r6);
        r3 = static_cast<uint32_t>(regargs_result_804CBD80_13061);
        r4 = static_cast<uint32_t>(regargs_result_804CBD80_13061 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CBD80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_8082173C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 146), static_cast<uint8_t>(r0));
    goto loc_808225DC;
}

loc_80821748:
{
    r0 = MemoryInline::FlatRead8((r28 + 146));
}

loc_80821750:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808225DC;
    }
}

loc_80821754:
{
    r3 = MemoryInline::FlatRead32((r28 + 524));
    ctx->lr = 0x8082175Cu;
    if constexpr (KnownRegArgsCpuCall<0x804EDC70u>(&func_804EDC70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        const auto regargs_result_804EDC70_1384E = func_804EDC70_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804EDC70_1384E);
        r4 = static_cast<uint32_t>(regargs_result_804EDC70_1384E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x804EDC70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead32((r28 + 700));
    // inline leaf 0x8081D590 (11 guest instruction(s))
    r4 = 0;
    r0 = -1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 80), 0, 324u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 80), r4);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 88), r0);
    MemoryInline::WriteResolved32(guest_range_0, 104u, (r3 + 184), r4);
    MemoryInline::WriteResolved32(guest_range_0, 112u, (r3 + 192), r0);
    MemoryInline::WriteResolved32(guest_range_0, 208u, (r3 + 288), r4);
    MemoryInline::WriteResolved32(guest_range_0, 216u, (r3 + 296), r0);
    MemoryInline::WriteResolved32(guest_range_0, 312u, (r3 + 392), r4);
    MemoryInline::WriteResolved32(guest_range_0, 320u, (r3 + 400), r0);
    // end of inlined leaf 0x8081D590
    r25 = 0;
}

loc_80821768:
{
    r3 = MemoryInline::FlatRead32((r28 + 592));
    r4 = r25;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 764));
    r5 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r6 = 0;
    f2.d = f1.d;
    r7 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 48));
    r8 = 0;
    ctr = r12;
    ctx->lr = 0x80821798u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r25 = (r25 + 1);
}

loc_808217A0:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(8))) {
        goto loc_80821768;
    }
}

loc_808217A4:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r28 + 24), r0);
    r25 = MemoryInline::FlatRead32((r28 + 1072));
    r3 = r25;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl13_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl13_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl13_0x8081AA24;
    }
}

loc_inl13_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl13_0x8081AA28;
}

loc_inl13_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl13_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl13_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r25 + 20), r0);
    r3 = 8;
    MemoryInline::FlatWrite32((r28 + 20), r3);
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r28 + 1104));
    r3 = 0;
    MemoryInline::FlatWrite32((r4 + 24), r0);
    r4 = MemoryInline::FlatRead32((r28 + 4));
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_808217E4:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_808217F8;
    }
}

loc_808217E8:
{
    r3 = 5;
    r4 = 21;
    ctr = r12;
    ctx->lr = 0x808217F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_808217F8:
{
}

loc_808217FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808225DC;
    }
}

loc_80821800:
{
    r3 = 21;
    ctx->lr = 0x80821808u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_808225DC;
}

loc_8082180C:
{
    r4 = MemoryInline::FlatRead32((r28 + 24));
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_29 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1048));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80821824:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_808225DC;
    }
}

loc_80821828:
{
}

loc_8082182C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(13))) {
        goto loc_80821954;
    }
}

loc_80821830:
{
    r0 = 37;
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
}

loc_80821840:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80821848:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(17))) {
        goto loc_8082185C;
    }
}

loc_8082184C:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80821854:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_8082185C;
    }
}

loc_80821858:
{
    goto loc_8082188C;
}

loc_8082185C:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80821868:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(17))) {
        goto loc_8082187C;
    }
}

loc_8082186C:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80821874:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_8082187C;
    }
}

loc_80821878:
{
    goto loc_8082188C;
}

loc_8082187C:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80821840;
    }
}

loc_80821888:
{
    r3 = -1;
}

loc_8082188C:
{
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_30 & -4);
    r3 = (r28 + r0);
    r25 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r25;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl14_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl14_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl14_0x8081AA24;
    }
}

loc_inl14_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl14_0x8081AA28;
}

loc_inl14_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl14_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl14_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 37;
    r3 = 1;
    MemoryInline::FlatWrite32((r25 + 20), r3);
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
}

loc_808218B8:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_808218C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(18))) {
        goto loc_808218D4;
    }
}

loc_808218C4:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_808218CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_808218D4;
    }
}

loc_808218D0:
{
    goto loc_80821904;
}

loc_808218D4:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_808218E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(18))) {
        goto loc_808218F4;
    }
}

loc_808218E4:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_808218EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_808218F4;
    }
}

loc_808218F0:
{
    goto loc_80821904;
}

loc_808218F4:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808218B8;
    }
}

loc_80821900:
{
    r3 = -1;
}

loc_80821904:
{
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_31 & -4);
    r3 = (r28 + r0);
    r25 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r25;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl15_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl15_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl15_0x8081AA24;
    }
}

loc_inl15_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl15_0x8081AA28;
}

loc_inl15_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl15_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl15_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r25 + 20), r0);
    r3 = (r31 + 2532);
    r5 = 1;
    r6 = MemoryInline::FlatRead32((r28 + 568));
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r6 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80821944u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    goto loc_808219B8;
}

loc_80821954:
{
}

loc_80821958:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(6))) {
        goto loc_808219B8;
    }
}

loc_8082195C:
{
    r3 = MemoryInline::FlatRead32((r28 + 568));
    r5 = 1;
    r4 = MemoryInline::FlatRead32((r31 + 2532));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x8082197Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r4 = (r31 + 2532);
    r5 = 1;
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 568));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x808219ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
}

loc_808219B8:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    goto loc_808225DC;
}

loc_808219C4:
{
    r0 = MemoryInline::FlatRead32((r28 + 24));
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_33 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 752));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_808219DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_808225DC;
    }
}

loc_808219E0:
{
    r0 = MemoryInline::FlatRead8((r28 + 140));
}

loc_808219E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80821A0C;
    }
}

loc_808219EC:
{
    r25 = r28;
    r26 = 0;
}

loc_808219F4:
{
    r3 = MemoryInline::FlatRead32((r25 + 684));
    ctx->lr = 0x808219FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081D160u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r26 = (r26 + 1);
    r25 = (r25 + 4);
}

loc_80821A08:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(4))) {
        goto loc_808219F4;
    }
}

loc_80821A0C:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    goto loc_808225DC;
}

loc_80821A18:
{
    r0 = MemoryInline::FlatRead32((r28 + 24));
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_34 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1048));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80821A30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_808225DC;
    }
}

loc_80821A34:
{
    r0 = MemoryInline::FlatRead32(r28);
    r3 = 0;
    MemoryInline::FlatWrite32((r28 + 108), r3);
}

loc_80821A44:
{
    MemoryInline::FlatWrite32((r28 + 112), r3);
    MemoryInline::FlatWrite32((r28 + 116), r3);
    MemoryInline::FlatWrite32((r28 + 120), r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80821AA8;
    }
}

loc_80821A54:
{
    r3 = (r31 + 2456);
    r26 = 2;
    r25 = (r3 + 8);
}

loc_80821A60:
{
    r3 = MemoryInline::FlatRead32((r28 + 568));
    r5 = 1;
    r4 = MemoryInline::FlatRead32(r25);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80821A80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r26 = (r26 + 1);
}

loc_80821A8C:
{
    r25 = (r25 + 4);
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(7))) {
        goto loc_80821A60;
    }
}

loc_80821A9C:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    goto loc_80821B04;
}

loc_80821AA8:
{
    r0 = 10;
    MemoryInline::FlatWrite32((r28 + 24), r0);
    r25 = MemoryInline::FlatRead32((r28 + 1088));
    r3 = r25;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl16_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl16_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl16_0x8081AA24;
    }
}

loc_inl16_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl16_0x8081AA28;
}

loc_inl16_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl16_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl16_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r25 + 20), r0);
    r3 = 0;
    MemoryInline::FlatWrite32((r28 + 24), r0);
    r4 = MemoryInline::FlatRead32((r28 + 4));
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80821AD8:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80821AEC;
    }
}

loc_80821ADC:
{
    r3 = 5;
    r4 = 7;
    ctr = r12;
    ctx->lr = 0x80821AECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80821AEC:
{
}

loc_80821AF0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80821AFC;
    }
}

loc_80821AF4:
{
    r3 = 7;
    ctx->lr = 0x80821AFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80821AFC:
{
    r0 = 8;
    MemoryInline::FlatWrite32((r28 + 20), r0);
}

loc_80821B04:
{
    r3 = r28;
    ctx->lr = 0x80821B0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808245B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_808225DC;
}

loc_80821B10:
{
    r0 = MemoryInline::FlatRead32((r28 + 24));
    r0_rot_35 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_35 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 704));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80821B28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_808225DC;
    }
}

loc_80821B2C:
{
    r0 = 7;
    MemoryInline::FlatWrite32((r28 + 24), r0);
    r25 = MemoryInline::FlatRead32((r28 + 1076));
    r3 = r25;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl17_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl17_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl17_0x8081AA24;
    }
}

loc_inl17_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl17_0x8081AA28;
}

loc_inl17_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl17_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl17_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r25 + 20), r0);
    r0 = 12;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    goto loc_808225DC;
}

loc_80821B54:
{
    r0 = MemoryInline::FlatRead32((r28 + 24));
    r0_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_36 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1048));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80821B6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_808225DC;
    }
}

loc_80821B70:
{
    r3 = r28;
    ctx->lr = 0x80821B78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808245B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r28;
    ctx->lr = 0x80821B80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808273F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = 2;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    goto loc_808225DC;
}

loc_80821B8C:
{
    r0 = MemoryInline::FlatRead32((r28 + 24));
    r0_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_37 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 752));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80821BA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_808225DC;
    }
}

loc_80821BA8:
{
    r5 = MemoryInline::FlatRead32((r28 + 184));
}

loc_80821BB0:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_80821C14;
    }
}

loc_80821BB4:
{
    r0 = MemoryInline::FlatRead32((r28 + 1112));
    r4 = 1;
    r3 = 19;
    f1.d = MemoryInline::FlatReadFloat64((r30 + 784));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(3));
}

loc_80821BD0:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWrite32((r28 + 1116), r4);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWrite32((r28 + 20), r3);
    MemoryInline::FlatWriteFloat32((r28 + 1948), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80821C40;
    }
}

loc_80821BE8:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r12 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80821BF4:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80821C40;
    }
}

loc_80821BF8:
{
    f0.d = PPC_Fctiwz(f0.d);
    r3 = 3;
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r4 = fctiwzword1;
    ctr = r12;
    ctx->lr = 0x80821C10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80821C40;
}

loc_80821C14:
{
    r3 = r28;
    ctx->lr = 0x80821C1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808245B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 13;
    MemoryInline::FlatWrite32((r28 + 24), r0);
    r25 = MemoryInline::FlatRead32((r28 + 1100));
    r3 = r25;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl18_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl18_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl18_0x8081AA24;
    }
}

loc_inl18_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl18_0x8081AA28;
}

loc_inl18_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl18_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl18_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r25 + 20), r0);
    r0 = 8;
    MemoryInline::FlatWrite32((r28 + 20), r0);
}

loc_80821C40:
{
    r25 = 0;
}

loc_80821C44:
{
    r3 = MemoryInline::FlatRead32((r28 + 592));
    r4 = r25;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 764));
    r5 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r6 = 0;
    f2.d = f1.d;
    r7 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 48));
    r8 = 0;
    ctr = r12;
    ctx->lr = 0x80821C74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r25 = (r25 + 1);
}

loc_80821C7C:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(8))) {
        goto loc_80821C44;
    }
}

loc_80821C80:
{
    goto loc_808225DC;
}

loc_80821C84:
{
    r0 = MemoryInline::FlatRead32((r28 + 24));
    r0_rot_38 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_38 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1048));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80821C9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_808225DC;
    }
}

loc_80821CA0:
{
    r6 = MemoryInline::FlatRead32((r28 + 568));
    r3 = (r31 + 2532);
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r5 = 1;
    r3 = MemoryInline::FlatRead32((r6 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80821CC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_80821CDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80821D44;
    }
}

loc_80821CE0:
{
    r0 = 37;
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
}

loc_80821CF0:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80821CF8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_80821D0C;
    }
}

loc_80821CFC:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80821D04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80821D0C;
    }
}

loc_80821D08:
{
    goto loc_80821D3C;
}

loc_80821D0C:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80821D18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_80821D2C;
    }
}

loc_80821D1C:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80821D24:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80821D2C;
    }
}

loc_80821D28:
{
    goto loc_80821D3C;
}

loc_80821D2C:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80821CF0;
    }
}

loc_80821D38:
{
    r3 = -1;
}

loc_80821D3C:
{
    MemoryInline::FlatWrite32((r28 + 24), r3);
    goto loc_80821DA8;
}

loc_80821D44:
{
    r0 = 37;
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
    // nop
}

loc_80821D58:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80821D60:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80821D74;
    }
}

loc_80821D64:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80821D6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80821D74;
    }
}

loc_80821D70:
{
    goto loc_80821DA4;
}

loc_80821D74:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80821D80:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80821D94;
    }
}

loc_80821D84:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80821D8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80821D94;
    }
}

loc_80821D90:
{
    goto loc_80821DA4;
}

loc_80821D94:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80821D58;
    }
}

loc_80821DA0:
{
    r3 = -1;
}

loc_80821DA4:
{
    MemoryInline::FlatWrite32((r28 + 24), r3);
}

loc_80821DA8:
{
    r0 = MemoryInline::FlatRead32((r28 + 24));
    r0_rot_39 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_39 & -4);
    r3 = (r28 + r0);
    r25 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r25;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl19_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl19_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl19_0x8081AA24;
    }
}

loc_inl19_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl19_0x8081AA28;
}

loc_inl19_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl19_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl19_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r25 + 20), r0);
    r3 = 16;
    r0 = MemoryInline::FlatRead32((r28 + 24));
    MemoryInline::FlatWrite32((r28 + 20), r3);
    r0_rot_40 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_40 & -4);
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r4 = (r28 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 752));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r28 + 1948), f0.d);
    r12 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80821DF4:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_808225DC;
    }
}

loc_80821DF8:
{
    f0.d = PPC_Fctiwz(f0.d);
    r3 = 2;
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r4 = fctiwzword2;
    ctr = r12;
    ctx->lr = 0x80821E10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_808225DC;
}

loc_80821E14:
{
    r0 = MemoryInline::FlatRead32((r28 + 24));
    r0_rot_41 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_41 & -4);
    r3 = (r28 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 704));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80821E2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_808225DC;
    }
}

loc_80821E30:
{
    r3 = MemoryInline::FlatRead32((r28 + 1112));
    r5 = 1;
    r0 = MemoryInline::FlatRead32((r28 + 184));
    r4 = 19;
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    f1.d = MemoryInline::FlatReadFloat64((r30 + 784));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80821E50:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    MemoryInline::FlatWrite32((r28 + 1116), r5);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWrite8((r28 + 154), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r28 + 20), r4);
    MemoryInline::FlatWriteFloat32((r28 + 1948), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808225DC;
    }
}

loc_80821E6C:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r12 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80821E78:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_808225DC;
    }
}

loc_80821E7C:
{
    f0.d = PPC_Fctiwz(f0.d);
    r3 = 3;
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r4 = fctiwzword3;
    ctr = r12;
    ctx->lr = 0x80821E94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_808225DC;
}

loc_80821E98:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_80821EA0:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(2))) {
        goto loc_80821EB4;
    }
}

loc_80821EA4:
{
    r0 = MemoryInline::FlatRead32((r28 + 24));
    r0_rot_42 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_42 & -4);
    r3 = (r28 + r0);
    r31 = MemoryInline::FlatRead32((r3 + 752));
}

loc_80821EB4:
{
    r0 = MemoryInline::FlatRead32((r31 + 20));
}

loc_80821EBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80821EF4;
    }
}

loc_80821EC0:
{
    r0 = MemoryInline::FlatRead32((r28 + 184));
    r3 = 17;
    MemoryInline::FlatWrite32((r28 + 20), r3);
}

loc_80821ED0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_808225DC;
    }
}

loc_80821ED4:
{
    r0 = MemoryInline::FlatRead8((r28 + 151));
}

loc_80821EDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80821EE8;
    }
}

loc_80821EE0:
{
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80470470u>(ctx);
}

loc_80821EE8:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 736));
    ctx->lr = 0x80821EF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081E7A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_808225DC;
}

loc_80821EF4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r0 = MemoryInline::FlatRead32((r28 + 184));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 1948));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80821F0C:
{
    f30.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808225DC;
    }
}

loc_80821F14:
{
    r0 = MemoryInline::FlatRead8((r28 + 151));
}

loc_80821F1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80821F3C;
    }
}

loc_80821F20:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 808));
    f0.d = PpcFmulsInline(f0.d, f30.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r3 = fctiwzword4;
    r3 = (r3 & 65535);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80470470u>(ctx);
}

loc_80821F3C:
{
    f1.d = f30.d;
    ctx->lr = 0x80821F44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081E7A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_808225DC;
}

loc_80821F48:
{
    r0 = MemoryInline::FlatRead32((r28 + 184));
    r3 = 18;
    MemoryInline::FlatWrite32((r28 + 20), r3);
}

loc_80821F58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80821FAC;
    }
}

loc_80821F5C:
{
    ctx->lr = 0x80821F60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081E5D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead8((r28 + 151));
}

loc_80821F68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80821FA4;
    }
}

loc_80821F6C:
{
    r3 = (r28 + 1588);
    ctx->lr = 0x80821F74u;
    if constexpr (KnownRegArgsCpuCall<0x804753A0u>(&func_804753A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804753A0_1FB36 = func_804753A0_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804753A0_1FB36);
        r4 = static_cast<uint32_t>(regargs_result_804753A0_1FB36 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804753A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead32((r28 + 1940));
    r4 = MemoryInline::FlatRead32((r28 + 1944));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8046F820u>(ctx);
    r3 = MemoryInline::FlatRead32((r28 + 1580));
    r4 = MemoryInline::FlatRead32((r28 + 1584));
    // inline leaf 0x80477730 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r13 + -20728), r3);
    MemoryInline::FlatWrite32((r13 + -20724), r4);
    // end of inlined leaf 0x80477730
    r3 = MemoryInline::FlatRead16((r28 + 1572));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80470470u>(ctx);
    r3 = MemoryInline::FlatRead16((r28 + 1574));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80470480u>(ctx);
    r3 = MemoryInline::FlatRead16((r28 + 1576));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80470490u>(ctx);
}

loc_80821FA4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 151), static_cast<uint8_t>(r0));
}

loc_80821FAC:
{
    r0 = MemoryInline::FlatRead32((r28 + 132));
    f2.d = MemoryInline::FlatReadFloat64((r30 + 784));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 812));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword5 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r3 = fctiwzword5;
    r3 = (r3 & 255);
    ctx->lr = 0x80821FE0u;
    if constexpr (KnownRegArgsCpuCall<0x804F15C0u>(&func_804F15C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804F15C0_20A7E = func_804F15C0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_804F15C0_20A7E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804F15C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = 0;
    ctx->lr = 0x80821FE8u;
    if constexpr (KnownRegArgsCpuCall<0x804EF920u>(&func_804EF920)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804EF920_20F29 = func_804EF920_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804EF920_20F29);
        r4 = static_cast<uint32_t>(regargs_result_804EF920_20F29 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804EF920u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead32((r28 + 700));
    // inline leaf 0x8081D590 (11 guest instruction(s))
    r4 = 0;
    r0 = -1;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 80), 0, 324u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 80), r4);
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 88), r0);
    MemoryInline::WriteResolved32(guest_range_1, 104u, (r3 + 184), r4);
    MemoryInline::WriteResolved32(guest_range_1, 112u, (r3 + 192), r0);
    MemoryInline::WriteResolved32(guest_range_1, 208u, (r3 + 288), r4);
    MemoryInline::WriteResolved32(guest_range_1, 216u, (r3 + 296), r0);
    MemoryInline::WriteResolved32(guest_range_1, 312u, (r3 + 392), r4);
    MemoryInline::WriteResolved32(guest_range_1, 320u, (r3 + 400), r0);
    // end of inlined leaf 0x8081D590
    r3 = MemoryInline::FlatRead32((r28 + 700));
    ctx->lr = 0x80821FF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081D810u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r25 = r28;
    r26 = 0;
}

loc_80822000:
{
    r3 = MemoryInline::FlatRead32((r25 + 684));
    ctx->lr = 0x80822008u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081D160u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r25 + 684));
    ctx->lr = 0x80822010u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081C9B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r26 = (r26 + 1);
    r25 = (r25 + 4);
}

loc_8082201C:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(4))) {
        goto loc_80822000;
    }
}

loc_80822020:
{
    r0 = MemoryInline::FlatRead32((r28 + 184));
}

loc_80822028:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8082204C;
    }
}

loc_8082202C:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r12 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80822038:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8082204C;
    }
}

loc_8082203C:
{
    r3 = 4;
    r4 = 0;
    ctr = r12;
    ctx->lr = 0x8082204Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8082204C:
{
    r3 = 0;
    r8 = 0;
    r4 = 37;
    r0 = 37;
    r5 = 37;
}

loc_80822060:
{
    r10 = (r30 + 104);
    r7 = (r3 + 31);
    r9 = 0;
    ctr = r5;
}

loc_80822070:
{
    r6 = MemoryInline::FlatRead32(r10);
}

loc_80822078:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r6))) {
        goto loc_8082208C;
    }
}

loc_8082207C:
{
    r6 = MemoryInline::FlatRead32((r10 + 4));
}

loc_80822084:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(17))) {
        goto loc_8082208C;
    }
}

loc_80822088:
{
    goto loc_808220BC;
}

loc_8082208C:
{
    r6 = MemoryInline::FlatRead32((r10 + 8));
    r9 = (r9 + 1);
}

loc_80822098:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r6))) {
        goto loc_808220AC;
    }
}

loc_8082209C:
{
    r6 = MemoryInline::FlatRead32((r10 + 12));
}

loc_808220A4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(17))) {
        goto loc_808220AC;
    }
}

loc_808220A8:
{
    goto loc_808220BC;
}

loc_808220AC:
{
    r10 = (r10 + 16);
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80822070;
    }
}

loc_808220B8:
{
    r9 = -1;
}

loc_808220BC:
{
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & -4);
    r10 = (r30 + 104);
    r6 = (r28 + r6);
    r7 = (r3 + 31);
    r6 = MemoryInline::FlatRead32((r6 + 752));
    r9 = 0;
    MemoryInline::FlatWrite32((r6 + 20), r8);
    ctr = r4;
    // nop
}

loc_808220E0:
{
    r6 = MemoryInline::FlatRead32(r10);
}

loc_808220E8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r6))) {
        goto loc_808220FC;
    }
}

loc_808220EC:
{
    r6 = MemoryInline::FlatRead32((r10 + 4));
}

loc_808220F4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(18))) {
        goto loc_808220FC;
    }
}

loc_808220F8:
{
    goto loc_8082212C;
}

loc_808220FC:
{
    r6 = MemoryInline::FlatRead32((r10 + 8));
    r9 = (r9 + 1);
}

loc_80822108:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r6))) {
        goto loc_8082211C;
    }
}

loc_8082210C:
{
    r6 = MemoryInline::FlatRead32((r10 + 12));
}

loc_80822114:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(18))) {
        goto loc_8082211C;
    }
}

loc_80822118:
{
    goto loc_8082212C;
}

loc_8082211C:
{
    r10 = (r10 + 16);
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808220E0;
    }
}

loc_80822128:
{
    r9 = -1;
}

loc_8082212C:
{
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r6 = (r6_rot_3 & -4);
    r10 = (r30 + 104);
    r6 = (r28 + r6);
    r7 = (r3 + 31);
    r6 = MemoryInline::FlatRead32((r6 + 752));
    r9 = 0;
    MemoryInline::FlatWrite32((r6 + 20), r8);
    ctr = r0;
    // nop
}

loc_80822150:
{
    r6 = MemoryInline::FlatRead32(r10);
}

loc_80822158:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r6))) {
        goto loc_8082216C;
    }
}

loc_8082215C:
{
    r6 = MemoryInline::FlatRead32((r10 + 4));
}

loc_80822164:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(15))) {
        goto loc_8082216C;
    }
}

loc_80822168:
{
    goto loc_8082219C;
}

loc_8082216C:
{
    r6 = MemoryInline::FlatRead32((r10 + 8));
    r9 = (r9 + 1);
}

loc_80822178:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r6))) {
        goto loc_8082218C;
    }
}

loc_8082217C:
{
    r6 = MemoryInline::FlatRead32((r10 + 12));
}

loc_80822184:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(15))) {
        goto loc_8082218C;
    }
}

loc_80822188:
{
    goto loc_8082219C;
}

loc_8082218C:
{
    r10 = (r10 + 16);
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80822150;
    }
}

loc_80822198:
{
    r9 = -1;
}

loc_8082219C:
{
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r6 = (r6_rot_4 & -4);
    r3 = (r3 + 1);
    r6 = (r28 + r6);
    r6 = MemoryInline::FlatRead32((r6 + 752));
}

loc_808221B0:
{
    MemoryInline::FlatWrite32((r6 + 20), r8);
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(4))) {
        goto loc_80822060;
    }
}

loc_808221B8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 148), static_cast<uint8_t>(r0));
    goto loc_808225DC;
}

loc_808221C4:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r28 + 20), r0);
    goto loc_808225DC;
}

loc_808221D0:
{
    r0 = MemoryInline::FlatRead8((r28 + 149));
}

loc_808221D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808221F0;
    }
}

loc_808221DC:
{
    r3 = r28;
    r4 = r29;
    ctx->lr = 0x808221E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80820A00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 149), static_cast<uint8_t>(r0));
}

loc_808221F0:
{
    r0 = MemoryInline::FlatRead8((r28 + 150));
}

loc_808221F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80822410;
    }
}

loc_808221FC:
{
    r3 = r28;
    ctx->lr = 0x80822204u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80820480u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->lr = 0x80822208u;
    if constexpr (KnownRegArgsCpuCall<0x804EF6F0u>(&func_804EF6F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804EF6F0_24854 = func_804EF6F0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804EF6F0_24854);
        r4 = static_cast<uint32_t>(regargs_result_804EF6F0_24854 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804EF6F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_44 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_44 & 1);
}

loc_80822214:
{
    MemoryInline::FlatWrite8((r28 + 140), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80822314;
    }
}

loc_8082221C:
{
    r0 = 37;
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
    // nop
}

loc_80822230:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80822238:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_8082224C;
    }
}

loc_8082223C:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80822244:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_8082224C;
    }
}

loc_80822248:
{
    goto loc_8082227C;
}

loc_8082224C:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80822258:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_8082226C;
    }
}

loc_8082225C:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80822264:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_8082226C;
    }
}

loc_80822268:
{
    goto loc_8082227C;
}

loc_8082226C:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80822230;
    }
}

loc_80822278:
{
    r3 = -1;
}

loc_8082227C:
{
    r0_rot_45 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_45 & -4);
    r3 = (r28 + r0);
    r25 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r25;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl22_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl22_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl22_0x8081AA24;
    }
}

loc_inl22_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl22_0x8081AA28;
}

loc_inl22_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl22_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl22_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 37;
    r3 = 1;
    MemoryInline::FlatWrite32((r25 + 20), r3);
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
}

loc_808222A8:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_808222B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_808222C4;
    }
}

loc_808222B4:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_808222BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_808222C4;
    }
}

loc_808222C0:
{
    goto loc_808222F4;
}

loc_808222C4:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_808222D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_808222E4;
    }
}

loc_808222D4:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_808222DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_808222E4;
    }
}

loc_808222E0:
{
    goto loc_808222F4;
}

loc_808222E4:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808222A8;
    }
}

loc_808222F0:
{
    r3 = -1;
}

loc_808222F4:
{
    r0_rot_46 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_46 & -4);
    r3 = (r28 + r0);
    r25 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r25;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl23_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl23_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl23_0x8081AA24;
    }
}

loc_inl23_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl23_0x8081AA28;
}

loc_inl23_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl23_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl23_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r25 + 20), r0);
    goto loc_80822408;
}

loc_80822314:
{
    r0 = 37;
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
    // nop
}

loc_80822328:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80822330:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_80822344;
    }
}

loc_80822334:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8082233C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_80822344;
    }
}

loc_80822340:
{
    goto loc_80822374;
}

loc_80822344:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80822350:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_80822364;
    }
}

loc_80822354:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8082235C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_80822364;
    }
}

loc_80822360:
{
    goto loc_80822374;
}

loc_80822364:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80822328;
    }
}

loc_80822370:
{
    r3 = -1;
}

loc_80822374:
{
    r0_rot_47 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_47 & -4);
    r3 = (r28 + r0);
    r25 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r25;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl24_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl24_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl24_0x8081AA24;
    }
}

loc_inl24_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl24_0x8081AA28;
}

loc_inl24_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl24_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl24_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 37;
    r3 = 1;
    MemoryInline::FlatWrite32((r25 + 20), r3);
    r4 = (r30 + 104);
    r3 = 0;
    ctr = r0;
}

loc_808223A0:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_808223A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_808223BC;
    }
}

loc_808223AC:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_808223B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_808223BC;
    }
}

loc_808223B8:
{
    goto loc_808223EC;
}

loc_808223BC:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_808223C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(14))) {
        goto loc_808223DC;
    }
}

loc_808223CC:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_808223D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_808223DC;
    }
}

loc_808223D8:
{
    goto loc_808223EC;
}

loc_808223DC:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808223A0;
    }
}

loc_808223E8:
{
    r3 = -1;
}

loc_808223EC:
{
    r0_rot_48 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_48 & -4);
    r3 = (r28 + r0);
    r25 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r25;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl25_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl25_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl25_0x8081AA24;
    }
}

loc_inl25_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl25_0x8081AA28;
}

loc_inl25_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl25_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl25_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r25 + 20), r0);
}

loc_80822408:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 150), static_cast<uint8_t>(r0));
}

loc_80822410:
{
    r4 = MemoryInline::FlatRead32((r28 + 1116));
}

loc_80822418:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_80822434;
    }
}

loc_8082241C:
{
    r3 = MemoryInline::FlatRead32((r28 + 1108));
    r0 = MemoryInline::FlatRead32((r28 + 1112));
}

loc_80822428:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80822434;
    }
}

loc_8082242C:
{
    r0 = 1;
    goto loc_80822454;
}

loc_80822434:
{
}

loc_80822438:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_80822450;
    }
}

loc_8082243C:
{
    r0 = MemoryInline::FlatRead32((r28 + 1108));
}

loc_80822444:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80822450;
    }
}

loc_80822448:
{
    r0 = 1;
    goto loc_80822454;
}

loc_80822450:
{
    r0 = 0;
}

loc_80822454:
{
}

loc_80822458:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80822578;
    }
}

loc_8082245C:
{
    r0 = MemoryInline::FlatRead8((r28 + 152));
}

loc_80822464:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80822484;
    }
}

loc_80822468:
{
    r0 = MemoryInline::FlatRead8((r28 + 146));
}

loc_80822470:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808225DC;
    }
}

loc_80822474:
{
    r3 = MemoryInline::FlatRead32((r28 + 524));
    ctx->lr = 0x8082247Cu;
    if constexpr (KnownRegArgsCpuCall<0x804EDC70u>(&func_804EDC70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        const auto regargs_result_804EDC70_2746B = func_804EDC70_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804EDC70_2746B);
        r4 = static_cast<uint32_t>(regargs_result_804EDC70_2746B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x804EDC70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 152), static_cast<uint8_t>(r0));
}

loc_80822484:
{
    r0 = MemoryInline::FlatRead8((r28 + 153));
}

loc_8082248C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082251C;
    }
}

loc_80822490:
{
    r3 = MemoryInline::FlatRead32((r28 + 1068));
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl26_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl26_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl26_0x8081AA24;
    }
}

loc_inl26_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl26_0x8081AA28;
}

loc_inl26_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl26_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl26_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r3 = MemoryInline::FlatRead32((r28 + 1068));
    r27 = 0;
    r5 = 1;
    MemoryInline::FlatWrite32((r3 + 20), r27);
    r3 = MemoryInline::FlatRead32((r28 + 568));
    r4 = MemoryInline::FlatRead32((r31 + 2532));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x808224C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r4 = (r31 + 2532);
    r5 = 1;
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 568));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x808224F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 1104));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8082250C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8082251C;
    }
}

loc_80822510:
{
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl27_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl27_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl27_0x8081AA24;
    }
}

loc_inl27_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl27_0x8081AA28;
}

loc_inl27_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl27_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl27_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r3 = MemoryInline::FlatRead32((r28 + 1104));
    MemoryInline::FlatWrite32((r3 + 20), r27);
}

loc_8082251C:
{
    r0 = MemoryInline::FlatRead32((r28 + 1560));
    r3 = 17;
    MemoryInline::FlatWrite32((r28 + 20), r3);
    r3 = 0;
}

loc_80822530:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80822540;
    }
}

loc_80822534:
{
    r0 = MemoryInline::FlatRead8((r28 + 1120));
}

loc_8082253C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80822544;
    }
}

loc_80822540:
{
    r3 = 1;
}

loc_80822544:
{
    ctx->lr = 0x80822548u;
    if constexpr (KnownRegArgsCpuCall<0x804E91A0u>(&func_804E91A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        const auto regargs_result_804E91A0_28EC3 = func_804E91A0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804E91A0_28EC3);
        r4 = static_cast<uint32_t>(regargs_result_804E91A0_28EC3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        InvokeDirectCpu<0x804E91A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        cr = ctx->cr;
    }
    ctx->lr = 0x8082254Cu;
    if constexpr (KnownRegArgsCpuCall<0x804E9010u>(&func_804E9010)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_804E9010_294F6 = func_804E9010_ra308_0_8_0(ctx, r3, r8, r9);
        r3 = regargs_result_804E9010_294F6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x804E9010u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead32((r28 + 184));
}

loc_80822554:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_808225DC;
    }
}

loc_80822558:
{
    r0 = MemoryInline::FlatRead8((r28 + 151));
}

loc_80822560:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082256C;
    }
}

loc_80822564:
{
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80470470u>(ctx);
}

loc_8082256C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 736));
    ctx->lr = 0x80822574u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081E7A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_808225DC;
}

loc_80822578:
{
    r4 = MemoryInline::FlatRead32((r28 + 1108));
    r3 = MemoryInline::FlatRead32((r28 + 1112));
    r0 = MemoryInline::FlatRead32((r28 + 184));
    r3 = (r3 - r4);
    f2.d = MemoryInline::FlatReadFloat64((r30 + 784));
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 1948));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8082259C:
{
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808225DC;
    }
}

loc_808225AC:
{
    r0 = MemoryInline::FlatRead8((r28 + 151));
}

loc_808225B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808225D4;
    }
}

loc_808225B8:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 808));
    f0.d = PpcFmulsInline(f0.d, f30.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword6 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r3 = fctiwzword6;
    r3 = (r3 & 65535);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80470470u>(ctx);
}

loc_808225D4:
{
    f1.d = f30.d;
    ctx->lr = 0x808225DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081E7A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_808225DC:
{
    r5 = MemoryInline::FlatRead32((r28 + 108));
}

loc_808225E4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80822664;
    }
}

loc_808225E8:
{
    r0 = MemoryInline::FlatRead32((r28 + 20));
    r4 = 1;
}

loc_808225F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80822618;
    }
}

loc_808225F8:
{
    r3 = MemoryInline::FlatRead32((r28 + 1096));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80822604:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80822618;
    }
}

loc_80822608:
{
    r3 = MemoryInline::FlatRead32((r28 + 1060));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80822614:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8082261C;
    }
}

loc_80822618:
{
    r4 = 0;
}

loc_8082261C:
{
}

loc_80822620:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80822664;
    }
}

loc_80822624:
{
}

loc_80822628:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8082265C;
    }
}

loc_8082262C:
{
    r0 = MemoryInline::FlatRead32((r28 + 116));
}

loc_80822634:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(r0))) {
        goto loc_8082265C;
    }
}

loc_80822638:
{
    r0_rot_52 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_52 & -4);
    r3 = (r28 + r0);
    r25 = MemoryInline::FlatRead32((r3 + 1048));
    r3 = r25;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl28_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl28_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl28_0x8081AA24;
    }
}

loc_inl28_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl28_0x8081AA28;
}

loc_inl28_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl28_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl28_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r25 + 20), r0);
    r0 = MemoryInline::FlatRead32((r28 + 108));
    MemoryInline::FlatWrite32((r28 + 116), r0);
}

loc_8082265C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 108), r0);
}

loc_80822664:
{
    r3 = MemoryInline::FlatRead32((r28 + 112));
}

loc_8082266C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_808228AC;
    }
}

loc_80822670:
{
    r4 = 37;
    r5 = (r30 + 104);
    r0 = 1;
    r8 = 0;
    ctr = r4;
    // nop
}

loc_80822688:
{
    r4 = MemoryInline::FlatRead32(r5);
}

loc_80822690:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_808226A4;
    }
}

loc_80822694:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8082269C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_808226A4;
    }
}

loc_808226A0:
{
    goto loc_808226D4;
}

loc_808226A4:
{
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r8 = (r8 + 1);
}

loc_808226B0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_808226C4;
    }
}

loc_808226B4:
{
    r4 = MemoryInline::FlatRead32((r5 + 12));
}

loc_808226BC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_808226C4;
    }
}

loc_808226C0:
{
    goto loc_808226D4;
}

loc_808226C4:
{
    r5 = (r5 + 16);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80822688;
    }
}

loc_808226D0:
{
    r8 = -1;
}

loc_808226D4:
{
    r4 = 37;
    r5 = (r30 + 104);
    r7 = 0;
    ctr = r4;
    // nop
}

loc_808226E8:
{
    r4 = MemoryInline::FlatRead32(r5);
}

loc_808226F0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(5))) {
        goto loc_80822704;
    }
}

loc_808226F4:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
}

loc_808226FC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(3))) {
        goto loc_80822704;
    }
}

loc_80822700:
{
    goto loc_80822734;
}

loc_80822704:
{
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r7 = (r7 + 1);
}

loc_80822710:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(5))) {
        goto loc_80822724;
    }
}

loc_80822714:
{
    r4 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8082271C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(3))) {
        goto loc_80822724;
    }
}

loc_80822720:
{
    goto loc_80822734;
}

loc_80822724:
{
    r5 = (r5 + 16);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808226E8;
    }
}

loc_80822730:
{
    r7 = -1;
}

loc_80822734:
{
    r4 = 37;
    r5 = (r30 + 104);
    r6 = 0;
    ctr = r4;
    // nop
}

loc_80822748:
{
    r4 = MemoryInline::FlatRead32(r5);
}

loc_80822750:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_80822764;
    }
}

loc_80822754:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8082275C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(19))) {
        goto loc_80822764;
    }
}

loc_80822760:
{
    goto loc_80822794;
}

loc_80822764:
{
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r6 = (r6 + 1);
}

loc_80822770:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_80822784;
    }
}

loc_80822774:
{
    r4 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8082277C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(19))) {
        goto loc_80822784;
    }
}

loc_80822780:
{
    goto loc_80822794;
}

loc_80822784:
{
    r5 = (r5 + 16);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80822748;
    }
}

loc_80822790:
{
    r6 = -1;
}

loc_80822794:
{
    r4 = 37;
    r9 = (r30 + 104);
    r5 = 0;
    ctr = r4;
    // nop
}

loc_808227A8:
{
    r4 = MemoryInline::FlatRead32(r9);
}

loc_808227B0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(5))) {
        goto loc_808227C4;
    }
}

loc_808227B4:
{
    r4 = MemoryInline::FlatRead32((r9 + 4));
}

loc_808227BC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(20))) {
        goto loc_808227C4;
    }
}

loc_808227C0:
{
    goto loc_808227F4;
}

loc_808227C4:
{
    r4 = MemoryInline::FlatRead32((r9 + 8));
    r5 = (r5 + 1);
}

loc_808227D0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(5))) {
        goto loc_808227E4;
    }
}

loc_808227D4:
{
    r4 = MemoryInline::FlatRead32((r9 + 12));
}

loc_808227DC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(20))) {
        goto loc_808227E4;
    }
}

loc_808227E0:
{
    goto loc_808227F4;
}

loc_808227E4:
{
    r9 = (r9 + 16);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808227A8;
    }
}

loc_808227F0:
{
    r5 = -1;
}

loc_808227F4:
{
    r4 = MemoryInline::FlatRead32((r28 + 20));
}

loc_808227FC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_80822860;
    }
}

loc_80822800:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r4 = (r28 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 752));
    r4 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80822814:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_80822860;
    }
}

loc_80822818:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r4 = (r4_rot_2 & -4);
    r4 = (r28 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 752));
    r4 = MemoryInline::FlatRead32((r4 + 20));
}

loc_8082282C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_80822860;
    }
}

loc_80822830:
{
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r4 = (r4_rot_3 & -4);
    r4 = (r28 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 752));
    r4 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80822844:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_80822860;
    }
}

loc_80822848:
{
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r4 = (r4_rot_4 & -4);
    r4 = (r28 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 752));
    r4 = MemoryInline::FlatRead32((r4 + 20));
}

loc_8082285C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_80822864;
    }
}

loc_80822860:
{
    r0 = 0;
}

loc_80822864:
{
}

loc_80822868:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808228AC;
    }
}

loc_8082286C:
{
}

loc_80822870:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_808228A4;
    }
}

loc_80822874:
{
    r0 = MemoryInline::FlatRead32((r28 + 120));
}

loc_8082287C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_808228A4;
    }
}

loc_80822880:
{
    r0_rot_55 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_55 & -4);
    r3 = (r28 + r0);
    r25 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r25;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl29_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl29_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl29_0x8081AA24;
    }
}

loc_inl29_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl29_0x8081AA28;
}

loc_inl29_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl29_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl29_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r25 + 20), r0);
    r0 = MemoryInline::FlatRead32((r28 + 112));
    MemoryInline::FlatWrite32((r28 + 120), r0);
}

loc_808228A4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 112), r0);
}

loc_808228AC:
{
}

loc_808228B0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_808228C0;
    }
}

loc_808228B4:
{
    r3 = r28;
    r4 = r29;
    ctx->lr = 0x808228C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808232D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_808228C0:
{
    r3 = MemoryInline::FlatRead32((r28 + 568));
    r4 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 44));
    ctr = r12;
    ctx->lr = 0x808228D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r28 + 568));
    r4 = (r28 + 600);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x808228F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_808228FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80822930;
    }
}

loc_80822900:
{
    r25 = r28;
    r26 = 0;
}

loc_80822908:
{
    r3 = MemoryInline::FlatRead32((r25 + 572));
    r4 = (r28 + 600);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x80822920u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r26 = (r26 + 1);
    r25 = (r25 + 4);
}

loc_8082292C:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(4))) {
        goto loc_80822908;
    }
}

loc_80822930:
{
    r3 = MemoryInline::FlatRead32((r28 + 104));
}

loc_80822938:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(2))) {
        goto loc_80822944;
    }
}

loc_8082293C:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 104), r0);
}

loc_80822944:
{
    r11 = (r1 + 80);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 52), 0, 68u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 44u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 28u, (r1 + 80));
    // inline leaf 0x804574CC (8 guest instruction(s))
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_3, 64u, (r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x01FFFFFF gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80820C70 func_80820C70 preserves=true fpr_mask=0x00000000
