#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D51A0(CpuContext* ctx);
extern "C" uint64_t func_804D51A0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804D6130(CpuContext* ctx);
extern "C" uint64_t func_804D6130_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804EA200(CpuContext* ctx);
extern "C" uint64_t func_804EA200_ra608_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804EA240(CpuContext* ctx);
extern "C" uint64_t func_804EA240_ra600_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804EA2A0(CpuContext* ctx);
extern "C" uint64_t func_804EA2A0_ra600_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804EA310(CpuContext* ctx);
extern "C" uint64_t func_804EA310_ra400_0_18_0(CpuContext*, uint32_t);
extern "C" void func_804EA380(CpuContext* ctx);
extern "C" uint64_t func_804EA380_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804EB270(CpuContext* ctx);
extern "C" uint64_t func_804EB270_ra600_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804EB290(CpuContext* ctx);
extern "C" void func_804EB290_ra600_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804EB310(CpuContext* ctx);
extern "C" void func_804EB310_ra600_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804EB3B0(CpuContext* ctx);
extern "C" uint64_t func_804EB3B0_ra600_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_804E7290_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_804E7290;

loc_804E7290:
{
    r29 = r5;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl0_0x804D1330:
{
}

loc_inl0_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x804D1344;
    }
}

loc_inl0_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl0_0x804D1348;
}

loc_inl0_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl0_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
}

loc_inl0_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r0 = MemoryInline::FlatRead32((r13 + -19628));
}

loc_804E72A0:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(r0))) {
        goto loc_804E736C;
    }
}

loc_804E72A4:
{
}

loc_804E72A8:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(5))) {
        goto loc_804E72B8;
    }
}

loc_804E72AC:
{
    r3 = 1;
    ctx->lr = 0x804E72B4u;
    if constexpr (KnownRegArgsCpuCall<0x804EA200u>(&func_804EA200)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804EA200_112B = func_804EA200_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804EA200_112B);
        r4 = static_cast<uint32_t>(regargs_result_804EA200_112B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804EA200u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_804E72C0;
}

loc_804E72B8:
{
    r3 = 0;
    ctx->lr = 0x804E72C0u;
    if constexpr (KnownRegArgsCpuCall<0x804EA200u>(&func_804EA200)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804EA200_1676 = func_804EA200_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804EA200_1676);
        r4 = static_cast<uint32_t>(regargs_result_804EA200_1676 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804EA200u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_804E72C0:
{
}

loc_804E72C4:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(1))) {
        goto loc_804E7314;
    }
}

loc_804E72C8:
{
    r0 = MemoryInline::FlatRead32((r13 + -14256));
}

loc_804E72D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_804E72E0;
    }
}

loc_804E72D4:
{
}

loc_804E72D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_804E72EC;
    }
}

loc_804E72DC:
{
    goto loc_804E72FC;
}

loc_804E72E0:
{
    r0 = 30000;
    MemoryInline::FlatWrite32((r13 + -14388), r0);
    goto loc_804E7304;
}

loc_804E72EC:
{
    r3 = 65536;
    r0 = (r3 + -20536);
    MemoryInline::FlatWrite32((r13 + -14388), r0);
    goto loc_804E7304;
}

loc_804E72FC:
{
    r0 = 15000;
    MemoryInline::FlatWrite32((r13 + -14388), r0);
}

loc_804E7304:
{
    r3 = 65536;
    r0 = (r3 + 24464);
    MemoryInline::FlatWrite32((r13 + -14384), r0);
    goto loc_804E7360;
}

loc_804E7314:
{
    r0 = MemoryInline::FlatRead32((r13 + -14256));
}

loc_804E731C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_804E732C;
    }
}

loc_804E7320:
{
}

loc_804E7324:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_804E733C;
    }
}

loc_804E7328:
{
    goto loc_804E734C;
}

loc_804E732C:
{
    r3 = 65536;
    r0 = (r3 + -29536);
    MemoryInline::FlatWrite32((r13 + -14388), r0);
    goto loc_804E7354;
}

loc_804E733C:
{
    r3 = 65536;
    r0 = (r3 + -11536);
    MemoryInline::FlatWrite32((r13 + -14388), r0);
    goto loc_804E7354;
}

loc_804E734C:
{
    r0 = 18000;
    MemoryInline::FlatWrite32((r13 + -14388), r0);
}

loc_804E7354:
{
    r3 = 131072;
    r0 = (r3 + -23072);
    MemoryInline::FlatWrite32((r13 + -14384), r0);
}

loc_804E7360:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -14380), r0);
    MemoryInline::FlatWrite32((r13 + -14376), r0);
}

loc_804E736C:
{
    r0 = MemoryInline::FlatRead32((r13 + -14244));
    MemoryInline::FlatWrite32((r13 + -19628), r29);
}

loc_804E7378:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E7450;
    }
}

loc_804E737C:
{
    r29 = 1;
    goto loc_804E743C;
}

loc_804E7384:
{
    r0 = MemoryInline::FlatRead32((r13 + -14224));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_subfic_ra_2 = r0;
    r0 = (31 - r0_subfic_ra_2);
    r26 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r0));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(16));
}

loc_804E7398:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804E7414;
    }
}

loc_804E739C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804E73D0;
    }
}

loc_804E73A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(4));
}

loc_804E73A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804E7404;
    }
}

loc_804E73A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804E73C4;
    }
}

loc_804E73AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(2));
}

loc_804E73B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804E73FC;
    }
}

loc_804E73B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804E7430;
    }
}

loc_804E73B8:
{
}

loc_804E73BC:
{
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(1))) {
        goto loc_804E73F4;
    }
}

loc_804E73C0:
{
    goto loc_804E7430;
}

loc_804E73C4:
{
}

loc_804E73C8:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(8))) {
        goto loc_804E740C;
    }
}

loc_804E73CC:
{
    goto loc_804E7430;
}

loc_804E73D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(64));
}

loc_804E73D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804E7424;
    }
}

loc_804E73D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804E73E8;
    }
}

loc_804E73DC:
{
}

loc_804E73E0:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(32))) {
        goto loc_804E741C;
    }
}

loc_804E73E4:
{
    goto loc_804E7430;
}

loc_804E73E8:
{
}

loc_804E73EC:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(128))) {
        goto loc_804E742C;
    }
}

loc_804E73F0:
{
    goto loc_804E7430;
}

loc_804E73F4:
{
    ctx->lr = 0x804E73F8u;
    if constexpr (KnownRegArgsCpuCall<0x804EA240u>(&func_804EA240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804EA240_2D8C = func_804EA240_ra600_0_18_0(ctx, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804EA240_2D8C);
        r4 = static_cast<uint32_t>(regargs_result_804EA240_2D8C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804EA240u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_804E7430;
}

loc_804E73FC:
{
    ctx->lr = 0x804E7400u;
    if constexpr (KnownRegArgsCpuCall<0x804EA2A0u>(&func_804EA2A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804EA2A0_32C6 = func_804EA2A0_ra600_0_18_0(ctx, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804EA2A0_32C6);
        r4 = static_cast<uint32_t>(regargs_result_804EA2A0_32C6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804EA2A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_804E7430;
}

loc_804E7404:
{
    ctx->lr = 0x804E7408u;
    if constexpr (KnownRegArgsCpuCall<0x804EA310u>(&func_804EA310)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804EA310_3800 = func_804EA310_ra400_0_18_0(ctx, r10);
        r3 = static_cast<uint32_t>(regargs_result_804EA310_3800);
        r4 = static_cast<uint32_t>(regargs_result_804EA310_3800 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804EA310u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_804E7430;
}

loc_804E740C:
{
    ctx->lr = 0x804E7410u;
    if constexpr (KnownRegArgsCpuCall<0x804EA380u>(&func_804EA380)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804EA380_3D55 = func_804EA380_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804EA380_3D55);
        r4 = static_cast<uint32_t>(regargs_result_804EA380_3D55 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804EA380u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_804E7430;
}

loc_804E7414:
{
    ctx->lr = 0x804E7418u;
    if constexpr (KnownRegArgsCpuCall<0x804EB270u>(&func_804EB270)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804EB270_433F = func_804EB270_ra600_0_18_0(ctx, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804EB270_433F);
        r4 = static_cast<uint32_t>(regargs_result_804EB270_433F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804EB270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_804E7430;
}

loc_804E741C:
{
    ctx->lr = 0x804E7420u;
    if constexpr (KnownRegArgsCpuCall<0x804EB290u>(&func_804EB290)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        func_804EB290_ra600_0_0_0(ctx, r9, r10);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804EB290u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_804E7430;
}

loc_804E7424:
{
    ctx->lr = 0x804E7428u;
    if constexpr (KnownRegArgsCpuCall<0x804EB310u>(&func_804EB310)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        func_804EB310_ra600_0_0_0(ctx, r9, r10);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804EB310u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_804E7430;
}

loc_804E742C:
{
    ctx->lr = 0x804E7430u;
    if constexpr (KnownRegArgsCpuCall<0x804EB3B0u>(&func_804EB3B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804EB3B0_5257 = func_804EB3B0_ra600_0_18_0(ctx, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804EB3B0_5257);
        r4 = static_cast<uint32_t>(regargs_result_804EB3B0_5257 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804EB3B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_804E7430:
{
    r0 = MemoryInline::FlatRead32((r13 + -14224));
    r0 = (r0 & ~r26);
    MemoryInline::FlatWrite32((r13 + -14224), r0);
}

loc_804E743C:
{
    r0 = MemoryInline::FlatRead32((r13 + -14224));
}

loc_804E7444:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E7384;
    }
}

loc_804E7448:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -14244), r0);
}

loc_804E7450:
{
    r0 = MemoryInline::FlatRead32((r13 + -14284));
}

loc_804E7458:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E7474;
    }
}

loc_804E745C:
{
    r3 = (r1 + 16);
    // inline leaf 0x804CD870 (9 guest instruction(s))
}

loc_inl1_0x804CD870:
{
    r5 = 0;
    MemoryInline::FlatWriteRam16((r3 + 416), static_cast<uint16_t>(r5));
    r4 = 0x80000000u;
    MemoryInline::FlatWriteRam16((r3 + 418), static_cast<uint16_t>(r5));
    r0 = MemoryInline::FlatRead32((r4 + 216));
}

loc_inl1_0x804CD888:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x804CD88C:
{
    MemoryInline::FlatWriteRam32((r4 + 216), r5);
    goto loc_inl1_cont_804CD870;
}

loc_inl1_return:
{
}

loc_inl1_cont_804CD870:
{
    // end of inlined leaf 0x804CD870
    r12 = MemoryInline::FlatRead32((r13 + -14284));
    r3 = MemoryInline::FlatRead32((r13 + -14236));
    ctr = r12;
    ctx->lr = 0x804E7474u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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

loc_804E7474:
{
    r3 = (r13 + -14272);
    ctx->lr = 0x804E747Cu;
    if constexpr (KnownRegArgsCpuCall<0x804D51A0u>(&func_804D51A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804D51A0_6187 = func_804D51A0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D51A0_6187);
        r4 = static_cast<uint32_t>(regargs_result_804D51A0_6187 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
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
        InvokeDirectCpu<0x804D51A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
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
    r3 = (r1 + 16);
    // inline leaf 0x804CD870 (9 guest instruction(s))
}

loc_inl2_0x804CD870:
{
    r5 = 0;
    MemoryInline::FlatWriteRam16((r3 + 416), static_cast<uint16_t>(r5));
    r4 = 0x80000000u;
    MemoryInline::FlatWriteRam16((r3 + 418), static_cast<uint16_t>(r5));
    r0 = MemoryInline::FlatRead32((r4 + 216));
}

loc_inl2_0x804CD888:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x804CD88C:
{
    MemoryInline::FlatWriteRam32((r4 + 216), r5);
    goto loc_inl2_cont_804CD870;
}

loc_inl2_return:
{
}

loc_inl2_cont_804CD870:
{
    // end of inlined leaf 0x804CD870
    r3 = r28;
    // inline leaf 0x804CD630 (23 guest instruction(s))
}

loc_inl3_0x804CD630:
{
    r4 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r4 + 212), r3);
    r5 = (r3 & 1073741823);
    MemoryInline::FlatWriteRam32((r4 + 192), r5);
    r5 = MemoryInline::FlatRead32((r4 + 216));
}

loc_inl3_0x804CD648:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r3))) {
        goto loc_inl3_0x804CD668;
    }
}

loc_inl3_0x804CD64C:
{
    r6 = MemoryInline::FlatRead32((r3 + 412));
    r6 = (r6 | 8192);
    MemoryInline::FlatWrite32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 | 2);
    ctx->msr = r6;
    goto loc_inl3_cont_804CD630;
}

loc_inl3_0x804CD668:
{
    r6 = MemoryInline::FlatRead32((r3 + 412));
    r6 = (r6 & -8193);
    MemoryInline::FlatWrite32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 & -8193);
    r6 = (r6 | 2);
    ctx->msr = r6;
    // isync @ 0x804CD684 (no-op)
}

loc_inl3_cont_804CD630:
{
    // end of inlined leaf 0x804CD630
    r0 = MemoryInline::FlatRead32((r13 + -14396));
}

loc_804E7494:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_804E74BC;
    }
}

loc_804E7498:
{
    r3 = 0;
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x804E74A8u;
    if constexpr (KnownRegArgsCpuCall<0x804D6130u>(&func_804D6130)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804D6130_7353 = func_804D6130_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D6130_7353);
        r4 = static_cast<uint32_t>(regargs_result_804D6130_7353 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        InvokeDirectCpu<0x804D6130u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
}

loc_804E74AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_804E74BC;
    }
}

loc_804E74B0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -14396), r0);
    MemoryInline::FlatWrite32((r13 + -14380), r0);
}

loc_804E74BC:
{
    r0 = 10;
    r3 = (r30 + 328);
    ctr = r0;
}

loc_804E74C8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_804E74D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E74E0;
    }
}

loc_804E74D4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 328), r0);
    goto loc_804E74E8;
}

loc_804E74E0:
{
    r3 = (r3 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804E74C8;
    }
}

loc_804E74E8:
{
    r0 = MemoryInline::FlatRead32((r13 + -14260));
}

loc_804E74F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E7560;
    }
}

loc_804E74F4:
{
    r0 = MemoryInline::FlatRead32((r13 + -14264));
}

loc_804E74FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E7560;
    }
}

loc_804E7500:
{
    r0 = MemoryInline::FlatRead32((r30 + 328));
}

loc_804E7508:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E7560;
    }
}

loc_804E750C:
{
    r0 = MemoryInline::FlatRead32((r13 + -14248));
}

loc_804E7514:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_804E7534;
    }
}

loc_804E7518:
{
    r3 = MemoryInline::FlatRead32((r13 + -14380));
    r0 = -1;
}

loc_804E7524:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_804E7534;
    }
}

loc_804E7528:
{
    r3 = MemoryInline::FlatRead32((r13 + -14380));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r13 + -14380), r0);
}

loc_804E7534:
{
    r0 = MemoryInline::FlatRead32((r13 + -14252));
}

loc_804E753C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_804E75A0;
    }
}

loc_804E7540:
{
    r3 = MemoryInline::FlatRead32((r13 + -14376));
    r0 = -1;
}

loc_804E754C:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_804E75A0;
    }
}

loc_804E7550:
{
    r3 = MemoryInline::FlatRead32((r13 + -14376));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r13 + -14376), r0);
    goto loc_804E75A0;
}

loc_804E7560:
{
    r3 = MemoryInline::FlatRead32((r13 + -14380));
    r0 = MemoryInline::FlatRead32((r13 + -14392));
}

loc_804E756C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_804E7578;
    }
}

loc_804E7570:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -14312), r0);
}

loc_804E7578:
{
    r3 = MemoryInline::FlatRead32((r13 + -14376));
    r0 = MemoryInline::FlatRead32((r13 + -14384));
}

loc_804E7584:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_804E758C;
    }
}

loc_804E7588:
{
    // inline leaf 0x804AB6B0 (1 guest instruction(s))
    // end of inlined leaf 0x804AB6B0
}

loc_804E758C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -14380), r0);
    MemoryInline::FlatWrite32((r13 + -14376), r0);
    r0 = MemoryInline::FlatRead32((r13 + -14388));
    MemoryInline::FlatWrite32((r13 + -14392), r0);
}

loc_804E75A0:
{
    r3 = MemoryInline::FlatRead32((r13 + -19624));
    r0 = MemoryInline::FlatRead32((r13 + -14248));
}

loc_804E75AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_804E75E4;
    }
}

loc_804E75B0:
{
    r0 = MemoryInline::FlatRead32((r13 + -14248));
}

loc_804E75B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E75D4;
    }
}

loc_804E75BC:
{
    r3 = MemoryInline::FlatRead32((r13 + -14380));
    r0 = MemoryInline::FlatRead32((r13 + -14392));
}

loc_804E75C8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_804E75D4;
    }
}

loc_804E75CC:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -14312), r0);
}

loc_804E75D4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -14380), r0);
    r0 = MemoryInline::FlatRead32((r13 + -14388));
    MemoryInline::FlatWrite32((r13 + -14392), r0);
}

loc_804E75E4:
{
    r3 = MemoryInline::FlatRead32((r13 + -14380));
    r0 = MemoryInline::FlatRead32((r13 + -14392));
}

loc_804E75F0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_804E75FC;
    }
}

loc_804E75F4:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -14316), r0);
}

loc_804E75FC:
{
    r0 = MemoryInline::FlatRead32((r13 + -14312));
}

loc_804E7604:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E762C;
    }
}

loc_804E7608:
{
    r3 = 0;
    r4 = 2;
    r5 = 2;
    ctx->lr = 0x804E7618u;
    if constexpr (KnownRegArgsCpuCall<0x804D6130u>(&func_804D6130)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804D6130_8F9B = func_804D6130_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D6130_8F9B);
        r4 = static_cast<uint32_t>(regargs_result_804D6130_8F9B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        InvokeDirectCpu<0x804D6130u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
}

loc_804E761C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_804E762C;
    }
}

loc_804E7620:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -14312), r0);
    MemoryInline::FlatWrite32((r13 + -14372), r0);
}

loc_804E762C:
{
    r0 = MemoryInline::FlatRead32((r13 + -14316));
}

loc_804E7634:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E7660;
    }
}

loc_804E7638:
{
    r3 = 1;
    r4 = 2;
    r5 = 2;
    ctx->lr = 0x804E7648u;
    if constexpr (KnownRegArgsCpuCall<0x804D6130u>(&func_804D6130)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804D6130_9A3C = func_804D6130_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D6130_9A3C);
        r4 = static_cast<uint32_t>(regargs_result_804D6130_9A3C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        InvokeDirectCpu<0x804D6130u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
}

loc_804E764C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_804E7660;
    }
}

loc_804E7650:
{
    r3 = 0;
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -14316), r3);
    MemoryInline::FlatWrite32((r13 + -14372), r0);
}

loc_804E7660:
{
    r3 = MemoryInline::FlatRead32((r13 + -19620));
    r0 = MemoryInline::FlatRead32((r13 + -14252));
}

loc_804E766C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_804E7698;
    }
}

loc_804E7670:
{
    r0 = MemoryInline::FlatRead32((r13 + -14252));
}

loc_804E7678:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E7690;
    }
}

loc_804E767C:
{
    r3 = MemoryInline::FlatRead32((r13 + -14376));
    r0 = MemoryInline::FlatRead32((r13 + -14384));
}

loc_804E7688:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_804E7690;
    }
}

loc_804E768C:
{
    // inline leaf 0x804AB6B0 (1 guest instruction(s))
    // end of inlined leaf 0x804AB6B0
}

loc_804E7690:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -14376), r0);
}

loc_804E7698:
{
    r3 = MemoryInline::FlatRead32((r13 + -14376));
    r0 = MemoryInline::FlatRead32((r13 + -14384));
}

loc_804E76A4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_804E76B8;
    }
}

loc_804E76A8:
{
    r3 = 0x80750000u;
    r4 = 0;
    r3 = (r3 + -29872);
    // inline leaf 0x804AB6A0 (2 guest instruction(s))
    r3 = 1;
    // end of inlined leaf 0x804AB6A0
}

loc_804E76B8:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -14260), r0);
    r3 = (r30 + 328);
    MemoryInline::FlatWrite32((r13 + -14264), r0);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r0);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r0);
    }
    r5 = MemoryInline::FlatRead32((r13 + -14248));
    r4 = MemoryInline::FlatRead32((r13 + -14252));
    r3 = MemoryInline::FlatRead32((r13 + -14388));
    r0 = MemoryInline::FlatRead32((r13 + -14380));
    MemoryInline::FlatWrite32((r13 + -19624), r5);
}

loc_804E7708:
{
    MemoryInline::FlatWrite32((r13 + -19620), r4);
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_804E7724;
    }
}

loc_804E7710:
{
    r0 = MemoryInline::FlatRead32((r13 + -14372));
}

loc_804E7718:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E7724;
    }
}

loc_804E771C:
{
    r0 = MemoryInline::FlatRead32((r13 + -14388));
    MemoryInline::FlatWrite32((r13 + -14392), r0);
}

loc_804E7724:
{
    r11 = (r1 + 752);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 756));
    ctx->lr = r0;
    r1 = (r1 + 752);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
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

extern "C" void func_804E7290(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804E7290_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x74003FFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804E7290 func_804E7290 preserves=true fpr_mask=0x00000000
