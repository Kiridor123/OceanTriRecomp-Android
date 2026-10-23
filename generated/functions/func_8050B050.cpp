#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80456C40(CpuContext* ctx);
extern "C" uint64_t func_80456C40_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80507F70(CpuContext* ctx);
extern "C" uint64_t func_80507F70_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_805090F0(CpuContext* ctx);
extern "C" uint64_t func_805090F0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8050B050_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t ctr = ctx->ctr;

    goto loc_8050B050;

loc_8050B050:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80509800u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
}

loc_8050B068:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8050B150;
    }
}

loc_8050B06C:
{
    // inline leaf 0x80509850 (6 guest instruction(s))
    r3 = 0x80760000u;
    r3 = MemoryInline::FlatRead32((r3 + 13248));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x80509850
}

loc_8050B074:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8050B0E0;
    }
}

loc_8050B078:
{
    r31 = MemoryInline::FlatRead32((r13 + -13856));
}

loc_8050B080:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8050B0B4;
    }
}

loc_8050B084:
{
    // inline leaf 0x80509880 (3 guest instruction(s))
    r3 = 0x80760000u;
    r3 = (r3 + 13712);
    // end of inlined leaf 0x80509880
    r0 = 46;
    r5 = (r31 + -4);
    r4 = (r3 + -4);
    ctr = r0;
}

loc_8050B098:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8050B098;
    }
}

loc_8050B0AC:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r5 + 4), r0);
}

loc_8050B0B4:
{
    r3 = (r31 + 69);
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80456C40_E3E = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_E3E);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_E3E >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8050B0C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8050B0D8;
    }
}

loc_8050B0C4:
{
    r3 = 15;
    r4 = -24101;
    // inline leaf 0x80507B10 (6 guest instruction(s))
}

loc_inl2_0x80507B10:
{
    r0 = MemoryInline::FlatRead32((r13 + -13936));
}

loc_inl2_0x80507B18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80507B1C:
{
    MemoryInline::FlatWrite32((r13 + -13936), r3);
    MemoryInline::FlatWrite32((r13 + -13932), r4);
    goto loc_inl2_cont_80507B10;
}

loc_inl2_return:
{
}

loc_inl2_cont_80507B10:
{
    // end of inlined leaf 0x80507B10
    r3 = 4;
    goto loc_8050B158;
}

loc_8050B0D8:
{
    r3 = 3;
    goto loc_8050B158;
}

loc_8050B0E0:
{
    // inline leaf 0x80509870 (3 guest instruction(s))
    r3 = 0x80760000u;
    r3 = MemoryInline::FlatRead32((r3 + 13248));
    // end of inlined leaf 0x80509870
    r0 = (r3 + 20110);
    r31 = r3;
}

loc_8050B0F0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(10))) {
        goto loc_8050B0FC;
    }
}

loc_8050B0F4:
{
    r31 = (r3 + -4000);
    goto loc_8050B13C;
}

loc_8050B0FC:
{
    r0 = (r3 + 20999);
}

loc_8050B104:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(888))) {
        goto loc_8050B110;
    }
}

loc_8050B108:
{
    r31 = (r3 + -4000);
    goto loc_8050B13C;
}

loc_8050B110:
{
    r0 = (r3 + 23999);
}

loc_8050B118:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(999))) {
        goto loc_8050B124;
    }
}

loc_8050B11C:
{
    r31 = (r3 + -2000);
    goto loc_8050B13C;
}

loc_8050B124:
{
    r4 = 0x80630000u;
    r5 = r31;
    r4 = (r4 + 4328);
    r3 = 16777216;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8050B13Cu;
    if constexpr (KnownRegArgsCpuCall<0x80507F70u>(&func_80507F70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80507F70_1903 = func_80507F70_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80507F70_1903);
        r4 = static_cast<uint32_t>(regargs_result_80507F70_1903 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80507F70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
    }
}

loc_8050B13C:
{
    r4 = r31;
    r3 = 15;
    // inline leaf 0x80507B10 (6 guest instruction(s))
}

loc_inl4_0x80507B10:
{
    r0 = MemoryInline::FlatRead32((r13 + -13936));
}

loc_inl4_0x80507B18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x80507B1C:
{
    MemoryInline::FlatWrite32((r13 + -13936), r3);
    MemoryInline::FlatWrite32((r13 + -13932), r4);
    goto loc_inl4_cont_80507B10;
}

loc_inl4_return:
{
}

loc_inl4_cont_80507B10:
{
    // end of inlined leaf 0x80507B10
    r3 = 4;
    goto loc_8050B158;
}

loc_8050B150:
{
    ctx->lr = 0x8050B154u;
    if constexpr (KnownRegArgsCpuCall<0x805090F0u>(&func_805090F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_805090F0_222B = func_805090F0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_805090F0_222B);
        r4 = static_cast<uint32_t>(regargs_result_805090F0_222B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805090F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
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
    }
    r3 = 2;
}

loc_8050B158:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8050B050(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8050B050_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x0FFFFFFF gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8050B050 func_8050B050 preserves=true fpr_mask=0x00000000
