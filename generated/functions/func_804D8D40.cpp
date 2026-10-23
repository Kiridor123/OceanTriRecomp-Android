#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804DEC70(CpuContext* ctx);
extern "C" uint64_t func_804DEC70_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804DED70(CpuContext* ctx);
extern "C" uint64_t func_804DED70_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804DEF30(CpuContext* ctx);
extern "C" uint64_t func_804DEF30_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804DF520(CpuContext* ctx);
extern "C" uint64_t func_804DF520_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804D8D40_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_804D8D40;

loc_804D8D40:
{
    MemoryHw::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryHw::FlatWriteRam32((r1 + 36), r0);
    r0 = (r4 & 15);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_804D8D50:
{
    r31 = 0x80000000u;
    r30 = 0x80750000u;
    r30 = (r30 + 2160);
    r28 = MemoryHw::FlatRead32((r13 + -20020));
    r3 = MemoryHw::FlatRead32((r13 + -14836));
    r29 = PPC_Srw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r28));
    r0 = (r3 & ~r29);
    MemoryHw::FlatWrite32((r13 + -14836), r0);
    r7 = (r3 & r29);
    r3 = 1;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804D8DD8;
    }
}

loc_804D8D8C:
{
    r5 = MemoryHw::FlatRead32((r13 + -14832));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r5));
    MemoryHw::FlatWrite32((r13 + -20020), r0);
}

loc_804D8D9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(32))) {
        goto loc_804D9040;
    }
}

loc_804D8DA0:
{
    r3 = (r0 * 12);
    r4 = PPC_Srw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
    r0 = (r30 + 0);
    r4 = (r5 & ~r4);
    MemoryHw::FlatWrite32((r13 + -14832), r4);
    r3 = (r0 + r3);
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r4 = 0x804E0000u;
    r3 = MemoryHw::FlatRead32((r13 + -20020));
    r4 = (r4 + -29376);
    ctx->lr = 0x804D8DD4u;
    if constexpr (KnownRegArgsCpuCall<0x804DF520u>(&func_804DF520)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        const auto regargs_result_804DF520_F2C = func_804DF520_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804DF520_F2C);
        r4 = static_cast<uint32_t>(regargs_result_804DF520_F2C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804DF520u>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_804D9040;
}

loc_804D8DD8:
{
    r5 = (r4 & 402653184);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r6 = (r6_rot_1 & -4);
    r0 = (r5 + -134217728);
    r4 = (r4 & -256);
    r5 = (r30 + 48);
}

loc_804D8DF0:
{
    r5_addr_1 = (r5 + r6);
    MemoryHw::FlatWrite32(r5_addr_1, r4);
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_804D8E00;
    }
}

loc_804D8DF8:
{
    r0 = (r4 & 16777216);
}

loc_804D8DFC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804D8E50;
    }
}

loc_804D8E00:
{
    r7 = MemoryHw::FlatRead32((r13 + -14832));
    r6 = PPC_CntlzwInline(static_cast<uint32_t>(r7));
    MemoryHw::FlatWrite32((r13 + -20020), r6);
}

loc_804D8E10:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(32))) {
        goto loc_804D9040;
    }
}

loc_804D8E14:
{
    r5 = 0x80000000u;
    r0 = (r30 + 0);
    r3 = (r6 * 12);
    r4 = 0;
    r6 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
    r5 = 12;
    r6 = (r7 & ~r6);
    MemoryHw::FlatWrite32((r13 + -14832), r6);
    r3 = (r0 + r3);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r4 = 0x804E0000u;
    r3 = MemoryHw::FlatRead32((r13 + -20020));
    r4 = (r4 + -29376);
    ctx->lr = 0x804D8E4Cu;
    if constexpr (KnownRegArgsCpuCall<0x804DF520u>(&func_804DF520)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        const auto regargs_result_804DF520_1D84 = func_804DF520_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804DF520_1D84);
        r4 = static_cast<uint32_t>(regargs_result_804DF520_1D84 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804DF520u>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_804D9040;
}

loc_804D8E50:
{
    r0 = MemoryHw::FlatRead32((r13 + -20008));
}

loc_804D8E58:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_804D8ED8;
    }
}

loc_804D8E5C:
{
    r0 = MemoryHw::FlatRead32((r13 + -14828));
    r3 = r28;
    r4 = (r1 + 8);
    r0 = (r0 | r29);
    MemoryHw::FlatWrite32((r13 + -14828), r0);
    ctx->lr = 0x804D8E74u;
    if constexpr (KnownRegArgsCpuCall<0x804DED70u>(&func_804DED70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_804DED70_273F = func_804DED70_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804DED70_273F);
        r4 = static_cast<uint32_t>(regargs_result_804DED70_273F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x804DED70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = MemoryHw::FlatRead32((r13 + -20012));
    r3 = r28;
    r4 = (r0 | 4194304);
    // inline leaf 0x804DEBF0 (5 guest instruction(s))
    r3 = (r3 * 12);
    r0 = -855638016;
    r3 = (r0 + r3);
    MemoryHw::FlatWrite32((r3 + 25600), r4);
    // end of inlined leaf 0x804DEBF0
    r3 = MemoryHw::FlatRead32((r13 + -14828));
    ctx->lr = 0x804D8E8Cu;
    if constexpr (KnownRegArgsCpuCall<0x804DEC70u>(&func_804DEC70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_804DEC70_2CF5 = func_804DEC70_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804DEC70_2CF5);
        r4 = static_cast<uint32_t>(regargs_result_804DEC70_2CF5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x804DEC70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    }
    r5 = MemoryHw::FlatRead32((r13 + -14832));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r5));
    MemoryHw::FlatWrite32((r13 + -20020), r0);
}

loc_804D8E9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(32))) {
        goto loc_804D9040;
    }
}

loc_804D8EA0:
{
    r3 = (r0 * 12);
    r4 = PPC_Srw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
    r0 = (r30 + 0);
    r4 = (r5 & ~r4);
    MemoryHw::FlatWrite32((r13 + -14832), r4);
    r3 = (r0 + r3);
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r4 = 0x804E0000u;
    r3 = MemoryHw::FlatRead32((r13 + -20020));
    r4 = (r4 + -29376);
    ctx->lr = 0x804D8ED4u;
    if constexpr (KnownRegArgsCpuCall<0x804DF520u>(&func_804DF520)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        const auto regargs_result_804DF520_3511 = func_804DF520_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804DF520_3511);
        r4 = static_cast<uint32_t>(regargs_result_804DF520_3511 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804DF520u>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_804D9040;
}

loc_804D8ED8:
{
    r0 = (r4 & -2147483648);
}

loc_804D8EDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D8EE8;
    }
}

loc_804D8EE0:
{
    r0 = (r4 & 67108864);
}

loc_804D8EE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D8F58;
    }
}

loc_804D8EE8:
{
}

loc_804D8EEC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804D8F24;
    }
}

loc_804D8EF0:
{
    r3 = MemoryHw::FlatRead32((r13 + -20020));
    r8 = 0x804E0000u;
    r0 = (r30 + 0);
    r4 = (r13 + -19996);
    r6 = (r3 * 12);
    r8 = (r8 + -30000);
    r5 = 3;
    r7 = 10;
    r6 = (r0 + r6);
    r10 = 0;
    r9 = 0;
    ctx->lr = 0x804D8F20u;
    if constexpr (KnownRegArgsCpuCall<0x804DEF30u>(&func_804DEF30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        const auto regargs_result_804DEF30_40B5 = func_804DEF30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804DEF30_40B5);
        r4 = static_cast<uint32_t>(regargs_result_804DEF30_40B5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        InvokeDirectCpu<0x804DEF30u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_804D8FE0;
}

loc_804D8F24:
{
    r3 = MemoryHw::FlatRead32((r13 + -20020));
    r8 = 0x804E0000u;
    r0 = (r30 + 0);
    r4 = (r13 + -20000);
    r6 = (r3 * 12);
    r8 = (r8 + -30000);
    r5 = 1;
    r7 = 10;
    r6 = (r0 + r6);
    r10 = 0;
    r9 = 0;
    ctx->lr = 0x804D8F54u;
    if constexpr (KnownRegArgsCpuCall<0x804DEF30u>(&func_804DEF30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        const auto regargs_result_804DEF30_47AD = func_804DEF30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804DEF30_47AD);
        r4 = static_cast<uint32_t>(regargs_result_804DEF30_47AD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        InvokeDirectCpu<0x804DEF30u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_804D8FE0;
}

loc_804D8F58:
{
    r0 = (r4 & 1048576);
}

loc_804D8F5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D8FE0;
    }
}

loc_804D8F60:
{
    r0 = (r4 & 524288);
}

loc_804D8F64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804D8FE0;
    }
}

loc_804D8F68:
{
    r0 = (r4 & 262144);
}

loc_804D8F6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804D8FE0;
    }
}

loc_804D8F70:
{
    r0 = (r4 & 1073741824);
}

loc_804D8F74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D8FAC;
    }
}

loc_804D8F78:
{
    r4 = (r28 * 12);
    r0 = (r30 + 0);
    r8 = 0x804E0000u;
    r3 = r28;
    r6 = (r0 + r4);
    r8 = (r8 + -30000);
    r4 = (r13 + -20000);
    r5 = 1;
    r7 = 10;
    r10 = 0;
    r9 = 0;
    ctx->lr = 0x804D8FA8u;
    if constexpr (KnownRegArgsCpuCall<0x804DEF30u>(&func_804DEF30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        const auto regargs_result_804DEF30_5136 = func_804DEF30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804DEF30_5136);
        r4 = static_cast<uint32_t>(regargs_result_804DEF30_5136 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        InvokeDirectCpu<0x804DEF30u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_804D8FE0;
}

loc_804D8FAC:
{
    r5 = (r28 * 12);
    r4 = (r30 + 64);
    r8 = 0x804E0000u;
    r0 = (r30 + 0);
    r4 = (r4 + r6);
    r3 = r28;
    r6 = (r0 + r5);
    r8 = (r8 + -29600);
    r5 = 3;
    r7 = 8;
    r10 = 0;
    r9 = 0;
    ctx->lr = 0x804D8FE0u;
    if constexpr (KnownRegArgsCpuCall<0x804DEF30u>(&func_804DEF30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        const auto regargs_result_804DEF30_581A = func_804DEF30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804DEF30_581A);
        r4 = static_cast<uint32_t>(regargs_result_804DEF30_581A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        InvokeDirectCpu<0x804DEF30u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_804D8FE0:
{
}

loc_804D8FE4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804D9040;
    }
}

loc_804D8FE8:
{
    r7 = MemoryHw::FlatRead32((r13 + -14832));
    r0 = MemoryHw::FlatRead32((r13 + -14848));
    r6 = PPC_CntlzwInline(static_cast<uint32_t>(r7));
    MemoryHw::FlatWrite32((r13 + -20020), r6);
}

loc_804D8FFC:
{
    r0 = (r0 | r29);
    MemoryHw::FlatWrite32((r13 + -14848), r0);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(32))) {
        goto loc_804D9040;
    }
}

loc_804D9008:
{
    r5 = 0x80000000u;
    r0 = (r30 + 0);
    r3 = (r6 * 12);
    r4 = 0;
    r6 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
    r5 = 12;
    r6 = (r7 & ~r6);
    MemoryHw::FlatWrite32((r13 + -14832), r6);
    r3 = (r0 + r3);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r4 = 0x804E0000u;
    r3 = MemoryHw::FlatRead32((r13 + -20020));
    r4 = (r4 + -29376);
    ctx->lr = 0x804D9040u;
    if constexpr (KnownRegArgsCpuCall<0x804DF520u>(&func_804DF520)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        const auto regargs_result_804DF520_624E = func_804DF520_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804DF520_624E);
        r4 = static_cast<uint32_t>(regargs_result_804DF520_624E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804DF520u>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_804D9040:
{
    r0 = MemoryHw::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804D8D40(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D8D40_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804D8D40 func_804D8D40 preserves=true fpr_mask=0x00000000
