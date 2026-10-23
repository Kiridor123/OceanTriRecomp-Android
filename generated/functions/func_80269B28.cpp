#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004F360(CpuContext* ctx);
extern "C" uint64_t func_8004F360_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80269E3C(CpuContext* ctx);
extern "C" uint32_t func_80269E3C_ra128_1fe_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80272A6C(CpuContext* ctx);
extern "C" uint64_t func_80272A6C_ra188_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802734E8(CpuContext* ctx);
extern "C" uint64_t func_802734E8_rac8_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80273570(CpuContext* ctx);
extern "C" uint64_t func_80273570_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027394C(CpuContext* ctx);
extern "C" uint64_t func_8027394C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80275590(CpuContext* ctx);
extern "C" uint64_t func_80275590_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8028F24C(CpuContext* ctx);
extern "C" uint64_t func_8028F24C_rac8_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803AB08C(CpuContext* ctx);
extern "C" uint32_t func_803AB08C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803AB0D4(CpuContext* ctx);
extern "C" uint32_t func_803AB0D4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8043CCD8(CpuContext* ctx);
extern "C" uint64_t func_8043CCD8_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_8043CFD4(CpuContext* ctx);
extern "C" uint64_t func_8043CFD4_ra188_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80451BC4(CpuContext* ctx);
extern "C" uint64_t func_80451BC4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80269B28_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
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
    uint32_t ctr = ctx->ctr;

    goto loc_80269B28;

loc_80269B28:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r29 = r4;
    r0 = (r4 & 255);
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r30 = 0;
    MemoryInline::FlatWrite8((r3 + 2820), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r3 + 615), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r3 + 11), static_cast<uint8_t>(r30));
    r3 = (r3 + 184);
    r4 = 0;
    r5 = 132;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite8((r31 + 1477), static_cast<uint8_t>(r30));
    // inline leaf 0x800CF27C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 37));
    // end of inlined leaf 0x800CF27C
    r0 = (r3 & 255);
}

loc_80269B88:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80269C68;
    }
}

loc_80269B8C:
{
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_80269B98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80269BB8;
    }
}

loc_80269B9C:
{
    r12 = MemoryInline::FlatRead32((r13 + -17136));
}

loc_80269BA4:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80269C7C;
    }
}

loc_80269BA8:
{
    r3 = r31;
    ctr = r12;
    ctx->lr = 0x80269BB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    ctr = ctx->ctr;
    goto loc_80269C7C;
}

loc_80269BB8:
{
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_80269BC4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80269BD4;
    }
}

loc_80269BC8:
{
    r3 = r31;
    ctx->lr = 0x80269BD0u;
    if constexpr (KnownRegArgsCpuCall<0x8043CCD8u>(&func_8043CCD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8043CCD8_1A18 = func_8043CCD8_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8043CCD8_1A18);
        r4 = static_cast<uint32_t>(regargs_result_8043CCD8_1A18 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8043CCD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    }
    goto loc_80269C7C;
}

loc_80269BD4:
{
    // inline leaf 0x8045169C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = MemoryInline::FlatRead8((r3 + 17));
    r0 = (r3 + -7);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x8045169C
}

loc_80269BDC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80269BEC;
    }
}

loc_80269BE0:
{
    // inline leaf 0x80451750 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = MemoryInline::FlatRead8((r3 + 16));
    r0 = (r3 + -3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    // end of inlined leaf 0x80451750
}

loc_80269BE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80269C5C;
    }
}

loc_80269BEC:
{
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80269BF8:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(r0))) {
        goto loc_80269C24;
    }
}

loc_80269BFC:
{
    r3 = r31;
    ctx->lr = 0x80269C04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80049FE0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    ctr = ctx->ctr;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2319));
}

loc_80269C14:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80269C7C;
    }
}

loc_80269C18:
{
    r3 = r31;
    ctx->lr = 0x80269C20u;
    if constexpr (KnownRegArgsCpuCall<0x8043CFD4u>(&func_8043CFD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_8043CFD4_2AB5 = func_8043CFD4_ra188_0_18_0(ctx, r3, r7, r8);
        r3 = static_cast<uint32_t>(regargs_result_8043CFD4_2AB5);
        r4 = static_cast<uint32_t>(regargs_result_8043CFD4_2AB5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8043CFD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    goto loc_80269C7C;
}

loc_80269C24:
{
    // inline leaf 0x8045169C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = MemoryInline::FlatRead8((r3 + 17));
    r0 = (r3 + -7);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_4 & 134217727);
    // end of inlined leaf 0x8045169C
}

loc_80269C2C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80269C7C;
    }
}

loc_80269C30:
{
    r3 = r31;
    r4 = (r29 & 255);
    ctx->lr = 0x80269C3Cu;
    if constexpr (KnownRegArgsCpuCall<0x80451BC4u>(&func_80451BC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_80451BC4_31BE = func_80451BC4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80451BC4_31BE);
        r4 = static_cast<uint32_t>(regargs_result_80451BC4_31BE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80451BC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2319));
}

loc_80269C4C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80269C7C;
    }
}

loc_80269C50:
{
    r3 = r31;
    ctx->lr = 0x80269C58u;
    if constexpr (KnownRegArgsCpuCall<0x8043CFD4u>(&func_8043CFD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_8043CFD4_3B0F = func_8043CFD4_ra188_0_18_0(ctx, r3, r7, r8);
        r3 = static_cast<uint32_t>(regargs_result_8043CFD4_3B0F);
        r4 = static_cast<uint32_t>(regargs_result_8043CFD4_3B0F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8043CFD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    goto loc_80269C7C;
}

loc_80269C5C:
{
    r3 = r31;
    ctx->lr = 0x80269C64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80049FE0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    ctr = ctx->ctr;
    goto loc_80269C7C;
}

loc_80269C68:
{
    r3 = r31;
    ctx->lr = 0x80269C70u;
    if constexpr (KnownRegArgsCpuCall<0x8028F24Cu>(&func_8028F24C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_8028F24C_4355 = func_8028F24C_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_8028F24C_4355);
        r4 = static_cast<uint32_t>(regargs_result_8028F24C_4355 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8028F24Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = (r29 & 255);
    ctx->lr = 0x80269C7Cu;
    if constexpr (KnownRegArgsCpuCall<0x8004F360u>(&func_8004F360)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004F360_47A7 = func_8004F360_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8004F360_47A7);
        r4 = static_cast<uint32_t>(regargs_result_8004F360_47A7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004F360u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80269C7C:
{
    r3 = 5472;
    ctx->lr = 0x80269C84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800404DCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    ctr = ctx->ctr;
    r30 = r3;
}

loc_80269C8C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80269C94;
    }
}

loc_80269C90:
{
    ctx->lr = 0x80269C94u;
    if constexpr (KnownRegArgsCpuCall<0x80269E3Cu>(&func_80269E3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        const auto regargs_result_80269E3C_4F2F = func_80269E3C_ra128_1fe_8_0(ctx, r3, r5, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_80269E3C_4F2F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80269E3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctr = ctx->ctr;
    }
}

loc_80269C94:
{
    MemoryInline::FlatWrite32((r31 + 316), r30);
    r0 = 223;
    MemoryInline::FlatWrite16((r31 + 728), static_cast<uint16_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite16((r31 + 730), static_cast<uint16_t>(r0));
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80269CB4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80269CE0;
    }
}

loc_80269CB8:
{
    ctx->lr = 0x80269CBCu;
    if constexpr (KnownRegArgsCpuCall<0x803AB08Cu>(&func_803AB08C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803AB08C_5899 = func_803AB08C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803AB08C_5899;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803AB08Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80269CC0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80269CE0;
    }
}

loc_80269CC4:
{
    ctx->lr = 0x80269CC8u;
    if constexpr (KnownRegArgsCpuCall<0x803AB0D4u>(&func_803AB0D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803AB0D4_5BCD = func_803AB0D4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803AB0D4_5BCD;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803AB0D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_80269CD0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_80269CE0;
    }
}

loc_80269CD4:
{
    r0 = 438;
    MemoryInline::FlatWrite16((r31 + 732), static_cast<uint16_t>(r0));
    goto loc_80269CE8;
}

loc_80269CE0:
{
    r0 = 439;
    MemoryInline::FlatWrite16((r31 + 732), static_cast<uint16_t>(r0));
}

loc_80269CE8:
{
    r3 = 1;
    MemoryInline::FlatWrite16((r31 + 734), static_cast<uint16_t>(r3));
    r0 = 53;
    MemoryInline::FlatWrite16((r31 + 768), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 770), static_cast<uint16_t>(r3));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15008));
    MemoryInline::FlatWriteFloat32((r31 + 60), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 64), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 68), f0.d);
    r3 = (r31 + 72);
    r4 = (r31 + 60);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15008));
    MemoryInline::FlatWriteFloat32((r31 + 104), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 108), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 112), f0.d);
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 84), r0);
    MemoryInline::FlatWrite32((r31 + 88), r0);
    MemoryInline::FlatWrite32((r31 + 92), r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15004));
    MemoryInline::FlatWriteFloat32((r31 + 852), f0.d);
    r3 = r31;
    ctx->lr = 0x80269D48u;
    if constexpr (KnownRegArgsCpuCall<0x802734E8u>(&func_802734E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_802734E8_6476 = func_802734E8_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_802734E8_6476);
        r4 = static_cast<uint32_t>(regargs_result_802734E8_6476 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802734E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = r31;
    r4 = (r31 + 320);
    ctx->lr = 0x80269D54u;
    if constexpr (KnownRegArgsCpuCall<0x8027394Cu>(&func_8027394C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8027394C_6862 = func_8027394C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027394C_6862);
        r4 = static_cast<uint32_t>(regargs_result_8027394C_6862 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8027394Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = r31;
    r4 = (r31 + 356);
    ctx->lr = 0x80269D60u;
    if constexpr (KnownRegArgsCpuCall<0x8027394Cu>(&func_8027394C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8027394C_6C18 = func_8027394C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027394C_6C18);
        r4 = static_cast<uint32_t>(regargs_result_8027394C_6C18 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8027394Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = r31;
    r4 = (r31 + 332);
    ctx->lr = 0x80269D6Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027394Cu>(&func_8027394C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8027394C_6FCE = func_8027394C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027394C_6FCE);
        r4 = static_cast<uint32_t>(regargs_result_8027394C_6FCE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8027394Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = r31;
    r4 = (r31 + 344);
    ctx->lr = 0x80269D78u;
    if constexpr (KnownRegArgsCpuCall<0x8027394Cu>(&func_8027394C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8027394C_7384 = func_8027394C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027394C_7384);
        r4 = static_cast<uint32_t>(regargs_result_8027394C_7384 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8027394Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = r31;
    r4 = (r31 + 368);
    ctx->lr = 0x80269D84u;
    if constexpr (KnownRegArgsCpuCall<0x8027394Cu>(&func_8027394C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8027394C_773A = func_8027394C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027394C_773A);
        r4 = static_cast<uint32_t>(regargs_result_8027394C_773A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8027394Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = r31;
    r4 = (r31 + 380);
    ctx->lr = 0x80269D90u;
    if constexpr (KnownRegArgsCpuCall<0x8027394Cu>(&func_8027394C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8027394C_7AF0 = func_8027394C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027394C_7AF0);
        r4 = static_cast<uint32_t>(regargs_result_8027394C_7AF0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8027394Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = r31;
    r4 = 5;
    r5 = MemoryInline::FlatRead8((r31 + 608));
    // inline leaf 0x802739FC (22 guest instruction(s))
}

loc_inl7_0x802739FC:
{
    r6 = (r4 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 536));
}

loc_inl7_0x80273A10:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_inl7_0x80273A34;
    }
}

loc_inl7_0x80273A14:
{
    r4 = MemoryInline::FlatRead16((r3 + 594));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r0 = ~(r0 | r0);
    r0 = (r0 & 65535);
    r0 = (r4 & r0);
    MemoryInline::FlatWrite16((r3 + 594), static_cast<uint16_t>(r0));
    goto loc_inl7_cont_802739FC;
}

loc_inl7_0x80273A34:
{
    MemoryInline::FlatWrite32((r4 + 564), r5);
    r4 = MemoryInline::FlatRead16((r3 + 594));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r0 = (r0 & 65535);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r3 + 594), static_cast<uint16_t>(r0));
}

loc_inl7_cont_802739FC:
{
    // end of inlined leaf 0x802739FC
    r3 = r31;
    r4 = 6;
    r5 = MemoryInline::FlatRead8((r31 + 609));
    // inline leaf 0x802739FC (22 guest instruction(s))
}

loc_inl8_0x802739FC:
{
    r6 = (r4 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 536));
}

loc_inl8_0x80273A10:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_inl8_0x80273A34;
    }
}

loc_inl8_0x80273A14:
{
    r4 = MemoryInline::FlatRead16((r3 + 594));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r0 = ~(r0 | r0);
    r0 = (r0 & 65535);
    r0 = (r4 & r0);
    MemoryInline::FlatWrite16((r3 + 594), static_cast<uint16_t>(r0));
    goto loc_inl8_cont_802739FC;
}

loc_inl8_0x80273A34:
{
    MemoryInline::FlatWrite32((r4 + 564), r5);
    r4 = MemoryInline::FlatRead16((r3 + 594));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r0 = (r0 & 65535);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r3 + 594), static_cast<uint16_t>(r0));
}

loc_inl8_cont_802739FC:
{
    // end of inlined leaf 0x802739FC
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_80269DBC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80269DF0;
    }
}

loc_80269DC0:
{
    r0 = MemoryInline::FlatRead16((r31 + 594));
    r0 = (r0 | 1);
    r0 = (r0 | 2);
    r0 = (r0 | 4);
    r0 = (r0 | 8);
    r0 = (r0 & 65535);
    r0 = (r0 | 16);
    r0 = (r0 | 32);
    r0 = (r0 | 64);
    MemoryInline::FlatWrite16((r31 + 594), static_cast<uint16_t>(r0));
    r3 = r31;
    ctx->lr = 0x80269DF0u;
    if constexpr (KnownRegArgsCpuCall<0x80273570u>(&func_80273570)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_80273570_8AE4 = func_80273570_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273570_8AE4);
        r4 = static_cast<uint32_t>(regargs_result_80273570_8AE4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80273570u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
}

loc_80269DF0:
{
    r3 = r31;
    // inline leaf 0x802734D0 (6 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 1588), r0);
    MemoryInline::FlatWrite32((r3 + 1592), r0);
    MemoryInline::FlatWrite32((r3 + 1596), r0);
    MemoryInline::FlatWrite32((r3 + 1600), r0);
    // end of inlined leaf 0x802734D0
    r3 = r31;
    ctx->lr = 0x80269E00u;
    if constexpr (KnownRegArgsCpuCall<0x80272A6Cu>(&func_80272A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80272A6C_90E1 = func_80272A6C_ra188_0_18_0(ctx, r3, r7, r8);
        r3 = static_cast<uint32_t>(regargs_result_80272A6C_90E1);
        r4 = static_cast<uint32_t>(regargs_result_80272A6C_90E1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r12 = ctx->gpr[12];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80272A6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r12 = ctx->gpr[12];
        ctr = ctx->ctr;
    }
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 2816), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 2817), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 2818), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 2819), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x80269E20u;
    if constexpr (KnownRegArgsCpuCall<0x80275590u>(&func_80275590)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_80275590_96DE = func_80275590_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80275590_96DE);
        r4 = static_cast<uint32_t>(regargs_result_80275590_96DE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80275590u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80269B28(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80269B28_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x0FFFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80269B28 func_80269B28 preserves=true fpr_mask=0x00000000
