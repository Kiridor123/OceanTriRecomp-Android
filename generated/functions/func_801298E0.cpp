#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801268FC(CpuContext* ctx);
extern "C" uint32_t func_801268FC_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80129870(CpuContext* ctx);
extern "C" uint32_t func_80129870_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80130808(CpuContext* ctx);
extern "C" uint64_t func_80130808_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80130DC4(CpuContext* ctx);
extern "C" uint64_t func_80130DC4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801318AC(CpuContext* ctx);
extern "C" uint64_t func_801318AC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80131CFC(CpuContext* ctx);
extern "C" uint32_t func_80131CFC_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80131E7C(CpuContext* ctx);
extern "C" uint32_t func_80131E7C_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80131FB8(CpuContext* ctx);
extern "C" uint32_t func_80131FB8_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_801327CC(CpuContext* ctx);
extern "C" uint64_t func_801327CC_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_80133478(CpuContext* ctx);
extern "C" uint64_t func_80133478_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80133660(CpuContext* ctx);
extern "C" uint32_t func_80133660_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80133704(CpuContext* ctx);
extern "C" uint32_t func_80133704_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80133784(CpuContext* ctx);
extern "C" uint32_t func_80133784_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80136D84(CpuContext* ctx);
extern "C" uint32_t func_80136D84_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_80136D84_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80136D84_statefree_v0(uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801298E0_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801298E0;

loc_801298E0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    ctx->lr = 0x801298F8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x803C4878u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801298FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801299C4;
    }
}

loc_80129900:
{
    r0 = MemoryInline::FlatRead8((r31 + 1130));
}

loc_80129908:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801299C4;
    }
}

loc_8012990C:
{
    r3 = r31;
    ctx->lr = 0x80129914u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x801307C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80131CFCu>(&func_80131CFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80131CFC_FCF = func_80131CFC_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80131CFC_FCF;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80131CFCu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = r31;
    ctx->lr = 0x80129924u;
    if constexpr (KnownRegArgsCpuCall<0x80130808u>(&func_80130808)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80130808_12AB = func_80130808_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80130808_12AB);
        r4 = static_cast<uint32_t>(regargs_result_80130808_12AB >> 32);
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
        InvokeDirectCpu<0x80130808u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = r31;
    ctx->lr = 0x8012992Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80130B24u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    ctx->lr = 0x80129934u;
    if constexpr (KnownRegArgsCpuCall<0x80130DC4u>(&func_80130DC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80130DC4_1821 = func_80130DC4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80130DC4_1821);
        r4 = static_cast<uint32_t>(regargs_result_80130DC4_1821 >> 32);
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
        InvokeDirectCpu<0x80130DC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = r31;
    ctx->lr = 0x8012993Cu;
    if constexpr (KnownRegArgsCpuCall<0x80129870u>(&func_80129870)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80129870_1BB0 = func_80129870_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80129870_1BB0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80129870u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r3 = r31;
    ctx->lr = 0x80129944u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x801298C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    ctx->lr = 0x8012994Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80129A3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    ctx->lr = 0x80129954u;
    if constexpr (KnownRegArgsCpuCall<0x801318ACu>(&func_801318AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_801318AC_221C = func_801318AC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801318AC_221C);
        r4 = static_cast<uint32_t>(regargs_result_801318AC_221C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x801318ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = r31;
    ctx->lr = 0x8012995Cu;
    if constexpr (KnownRegArgsCpuCall<0x801327CCu>(&func_801327CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_801327CC_2556 = func_801327CC_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_801327CC_2556);
        r4 = static_cast<uint32_t>(regargs_result_801327CC_2556 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x801327CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r3 = r31;
    // inline leaf 0x8013234C (6 guest instruction(s))
}

loc_inl0_0x8013234C:
{
    r4 = MemoryInline::FlatRead16((r3 + 2384));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148737868);
}

loc_inl0_0x80132354:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80132358:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 2384), static_cast<uint16_t>(r0));
    goto loc_inl0_cont_8013234C;
}

loc_inl0_return:
{
}

loc_inl0_cont_8013234C:
{
    // end of inlined leaf 0x8013234C
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80131E7Cu>(&func_80131E7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80131E7C_2C53 = func_80131E7C_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_80131E7C_2C53;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80131E7Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80131EF0u>(ctx);
    r3 = r31;
    // inline leaf 0x80131F30 (9 guest instruction(s))
}

loc_inl1_0x80131F30:
{
    r0 = MemoryInline::FlatRead8((r3 + 489));
}

loc_inl1_0x80131F38:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80131F3C:
{
    r4 = MemoryInline::FlatRead16((r3 + 2076));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148736828);
}

loc_inl1_0x80131F44:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80131F48:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 2076), static_cast<uint16_t>(r0));
    goto loc_inl1_cont_80131F30;
}

loc_inl1_return:
{
}

loc_inl1_cont_80131F30:
{
    // end of inlined leaf 0x80131F30
    r3 = r31;
    // inline leaf 0x80131F60 (12 guest instruction(s))
}

loc_inl2_0x80131F60:
{
    r0 = MemoryInline::FlatRead8((r3 + 488));
}

loc_inl2_0x80131F68:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80131F6C:
{
    r0 = MemoryInline::FlatRead8((r3 + 489));
}

loc_inl2_0x80131F74:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80131F78:
{
    r4 = MemoryInline::FlatRead16((r3 + 2078));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148736888);
}

loc_inl2_0x80131F80:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80131F84:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 2078), static_cast<uint16_t>(r0));
    goto loc_inl2_cont_80131F60;
}

loc_inl2_return:
{
}

loc_inl2_cont_80131F60:
{
    // end of inlined leaf 0x80131F60
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80131FB8u>(&func_80131FB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80131FB8_36AF = func_80131FB8_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_80131FB8_36AF;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80131FB8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80133660u>(&func_80133660)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80133660_391C = func_80133660_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_80133660_391C;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80133660u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80133704u>(&func_80133704)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80133704_3B89 = func_80133704_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_80133704_3B89;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80133704u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80133784u>(&func_80133784)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80133784_3DF6 = func_80133784_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_80133784_3DF6;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80133784u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = r31;
    ctx->lr = 0x801299ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80133920u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    ctx->lr = 0x801299B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80133B64u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    ctx->lr = 0x801299BCu;
    if constexpr (KnownRegArgsCpuCall<0x80133478u>(&func_80133478)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80133478_4468 = func_80133478_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80133478_4468);
        r4 = static_cast<uint32_t>(regargs_result_80133478_4468 >> 32);
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
        InvokeDirectCpu<0x80133478u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x801268FCu>(&func_801268FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_801268FC_47D2 = func_801268FC_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_801268FC_47D2;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x801268FCu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_801299C4:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80131E24u>(ctx);
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80136D84u) && KnownTranslatedCpuCall<0x80136D84u>::kAvailable && !KnownTranslatedCpuCall<0x80136D84u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80136D84u>()) {
        const auto state_free_result_80136D84_4B1F = func_80136D84_statefree_v0(r3, cr, xer);
        r4 = static_cast<uint32_t>(state_free_result_80136D84_4B1F[0]);
        cr = static_cast<uint32_t>(state_free_result_80136D84_4B1F[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80136D84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801298E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801298E0_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801298E0 func_801298E0 preserves=true fpr_mask=0x00000000
