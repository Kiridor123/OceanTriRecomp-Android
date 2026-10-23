#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046EB90(CpuContext* ctx);
extern "C" uint64_t func_8046EB90_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8046F470(CpuContext* ctx);
extern "C" uint64_t func_8046F470_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8046F9D0(CpuContext* ctx);
extern "C" uint64_t func_8046F9D0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80470CE0(CpuContext* ctx);
extern "C" uint64_t func_80470CE0_ra80_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80471590(CpuContext* ctx);
extern "C" uint64_t func_80471590_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_804704A0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_subfic_ra_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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

    goto loc_804704A0;

loc_804704A0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r31 = 0x80700000u;
    r31 = (r31 + -13056);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x804D53D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r5 = (r31 + 0);
    MemoryInline::FlatWriteRam32(r31, r3);
    MemoryInline::FlatWriteRam32((r5 + 4), r4);
    ctx->lr = 0x804704D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    InvokeDirectCpu<0x8046DBB0u>(ctx);
    r0 = ctx->gpr[0];
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r3 = (r3_rot_0 & 1073741823);
    r0 = MemoryInline::FlatRead32((r13 + -16072));
    r3_subfic_ra_0 = r3;
    r3 = (96 - r3_subfic_ra_0);
}

loc_804704E4:
{
    r30 = (r3 * 3797);
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804704F8;
    }
}

loc_804704EC:
{
    r3 = 0;
    ctx->lr = 0x804704F4u;
    if constexpr (KnownRegArgsCpuCall<0x80471590u>(&func_80471590)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80471590_1266 = func_80471590_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80471590_1266);
        r4 = static_cast<uint32_t>(regargs_result_80471590_1266 >> 32);
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80471590u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_80470500;
}

loc_804704F8:
{
    r3 = 24400;
    ctx->lr = 0x80470500u;
    if constexpr (KnownRegArgsCpuCall<0x80471590u>(&func_80471590)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80471590_19D1 = func_80471590_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80471590_19D1);
        r4 = static_cast<uint32_t>(regargs_result_80471590_19D1 >> 32);
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80471590u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_80470500:
{
    ctx->lr = 0x80470504u;
    if constexpr (KnownRegArgsCpuCall<0x80470CE0u>(&func_80470CE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80470CE0_20DB = func_80470CE0_ra80_0_18_0(ctx, r7);
        r3 = static_cast<uint32_t>(regargs_result_80470CE0_20DB);
        r4 = static_cast<uint32_t>(regargs_result_80470CE0_20DB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80470CE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    // inline leaf 0x8046F9A0 (12 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r13 + -16096));
    r4 = 0x80700000u;
    r4 = (r4 + -13312);
    r3 = (r5 + 1);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(7));
    r5 = (r5_rot_0 & -128);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(7));
    r0 = (r0_rot_0 & 128);
    r3 = (r3 & 1);
    MemoryInline::FlatWrite32((r13 + -16096), r3);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r13 + -16100), r0);
    r3 = (r4 + r5);
    // end of inlined leaf 0x8046F9A0
    r4 = -1161953280;
    r29 = r3;
    r3 = (r4 + 128);
    // inline leaf 0x804A55E0 (5 guest instruction(s))
    r4 = -872415232;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 65535);
    MemoryInline::FlatWrite16((r4 + 20480), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r4 + 20482), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x804A55E0
}

loc_80470518:
{
    // inline leaf 0x804A55A0 (4 guest instruction(s))
    r3 = -872415232;
    r0 = MemoryInline::FlatRead16((r3 + 20480));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x804A55A0
}

loc_80470520:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80470518;
    }
}

loc_80470524:
{
    r3 = r29;
    // inline leaf 0x804A55E0 (5 guest instruction(s))
    r4 = -872415232;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & 65535);
    MemoryInline::FlatWrite16((r4 + 20480), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r4 + 20482), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x804A55E0
}

loc_8047052C:
{
    // inline leaf 0x804A55A0 (4 guest instruction(s))
    r3 = -872415232;
    r0 = MemoryInline::FlatRead16((r3 + 20480));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x804A55A0
}

loc_80470534:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8047052C;
    }
}

loc_80470538:
{
    ctx->lr = 0x8047053Cu;
    if constexpr (KnownRegArgsCpuCall<0x8046EB90u>(&func_8046EB90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8046EB90_2F23 = func_8046EB90_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8046EB90_2F23);
        r4 = static_cast<uint32_t>(regargs_result_8046EB90_2F23 >> 32);
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
        InvokeDirectCpu<0x8046EB90u>(ctx);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x804D53D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r29 = (r31 + 0);
    MemoryInline::FlatWriteRam32((r29 + 12), r4);
    MemoryInline::FlatWriteRam32((r29 + 8), r3);
    ctx->lr = 0x80470550u;
    if constexpr (KnownRegArgsCpuCall<0x8046F470u>(&func_8046F470)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8046F470_3915 = func_8046F470_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8046F470_3915);
        r4 = static_cast<uint32_t>(regargs_result_8046F470_3915 >> 32);
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
        InvokeDirectCpu<0x8046F470u>(ctx);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x804D53D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r29 + 20), r4);
    MemoryInline::FlatWriteRam32((r29 + 16), r3);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x804D53D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r12 = MemoryInline::FlatRead32((r13 + -16044));
    MemoryInline::FlatWriteRam32((r29 + 28), r4);
}

loc_8047056C:
{
    MemoryInline::FlatWriteRam32((r29 + 24), r3);
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8047057C;
    }
}

loc_80470574:
{
    ctr = r12;
    ctx->lr = 0x8047057Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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

loc_8047057C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x804D53D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r7 = MemoryInline::FlatRead32((r13 + -16080));
    r8 = (r31 + 0);
    r0 = MemoryInline::FlatRead32((r13 + -16076));
    r5 = (r31 + 64);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r6 = (r6_rot_0 & -2);
    r7 = (r7 + 18);
    r6 = (r5 + r6);
    MemoryInline::FlatWriteRam32((r8 + 36), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_804705A4:
{
    r5 = (r6 + 360);
    r4 = (r6 + 720);
    r0 = (r6 + 1080);
    MemoryInline::FlatWriteRam32((r8 + 32), r3);
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_804705CC;
    }
}

loc_804705C8:
{
    r7 = 0;
}

loc_804705CC:
{
    r4 = MemoryInline::FlatRead32((r13 + -16084));
    r3 = MemoryInline::FlatRead32((r13 + -16080));
}

loc_804705D8:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r3))) {
        goto loc_804705EC;
    }
}

loc_804705DC:
{
    r0 = (r3 + 18);
}

loc_804705E4:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_804705EC;
    }
}

loc_804705E8:
{
    MemoryInline::FlatWrite32((r13 + -16084), r7);
}

loc_804705EC:
{
    r0 = MemoryInline::FlatRead32((r13 + -16032));
    r29 = (r31 + 2272);
    MemoryInline::FlatWrite32((r13 + -16080), r7);
    r3 = (r31 + 1504);
    r0 = (r0 * 384);
    r5 = (r1 + 8);
    r4 = (r29 + r0);
    ctx->lr = 0x8047060Cu;
    if constexpr (KnownRegArgsCpuCall<0x8046F9D0u>(&func_8046F9D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8046F9D0_4FC4 = func_8046F9D0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8046F9D0_4FC4);
        r4 = static_cast<uint32_t>(regargs_result_8046F9D0_4FC4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8046F9D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead32((r13 + -16072));
    r3 = MemoryInline::FlatRead32((r13 + -16032));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80470618:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r13 + -16032), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80470648;
    }
}

loc_80470624:
{
    r3 = -1431633920;
    r4 = MemoryInline::FlatRead32((r13 + -16032));
    r0 = (r3 + -21845);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_3 & 2147483647);
    r0 = (r0 * 3);
    r0 = (r4 - r0);
    MemoryInline::FlatWrite32((r13 + -16032), r0);
    goto loc_80470668;
}

loc_80470648:
{
    r0 = MemoryInline::FlatRead32((r13 + -16032));
    r4 = 384;
    r0 = (r0 & 1);
    MemoryInline::FlatWrite32((r13 + -16032), r0);
    r0 = MemoryInline::FlatRead32((r13 + -16032));
    r0 = (r0 * 384);
    r3 = (r29 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8046DAF0u>(ctx);
}

loc_80470668:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x804D53D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r29 = (r31 + 0);
    MemoryInline::FlatWriteRam32((r29 + 44), r4);
    MemoryInline::FlatWriteRam32((r29 + 40), r3);
    // inline leaf 0x80471030 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -15928));
    // end of inlined leaf 0x80471030
    MemoryInline::FlatWriteRam32((r29 + 48), r3);
    // inline leaf 0x80471FE0 (16 guest instruction(s))
}

loc_inl6_0x80471FE0:
{
    r0 = MemoryInline::FlatRead32((r13 + -15912));
}

loc_inl6_0x80471FE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl6_0x80472018;
    }
}

loc_inl6_0x80471FEC:
{
    r5 = MemoryInline::FlatRead32((r13 + -15908));
    r3 = MemoryInline::FlatRead32((r13 + -15904));
    r4 = (r5 + 1);
    r6 = MemoryInline::FlatRead32((r13 + -15900));
    r0 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
    r0 = (r0 * r3);
    r3 = (r5 * 56);
    r0 = (r4 - r0);
    MemoryInline::FlatWrite32((r13 + -15908), r0);
    r3 = (r6 + r3);
    goto loc_inl6_cont_80471FE0;
}

loc_inl6_0x80472018:
{
    r3 = 0;
}

loc_inl6_cont_80471FE0:
{
    // end of inlined leaf 0x80471FE0
}

loc_80470688:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804706E0;
    }
}

loc_8047068C:
{
    r0 = 7;
    ctr = r0;
}

loc_80470694:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r29);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r29 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r29 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r29 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r29 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r29 + 5));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r29 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r3 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r29 + 7));
    r29 = (r29 + 8);
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r3 + 7), static_cast<uint8_t>(r0));
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80470694;
    }
}

loc_804706E0:
{
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804704A0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804704A0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804704A0 func_804704A0 preserves=true fpr_mask=0x00000000
