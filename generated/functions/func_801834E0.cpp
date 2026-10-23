#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80130FD8(CpuContext* ctx);
extern "C" uint64_t func_80130FD8_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_80135CC0(CpuContext* ctx);
extern "C" uint64_t func_80135CC0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80137718(CpuContext* ctx);
extern "C" uint32_t func_80137718_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_80141BEC(CpuContext* ctx);
extern "C" uint64_t func_80141BEC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_801834E0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

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

    goto loc_801834E0;

loc_801834E0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 3));
}

loc_80183500:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(16))) {
        goto loc_801836A0;
    }
}

loc_80183504:
{
    r0 = (r4 & 255);
}

loc_8018350C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8018352C;
    }
}

loc_80183510:
{
}

loc_80183514:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80183554;
    }
}

loc_80183518:
{
}

loc_8018351C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_801835D0;
    }
}

loc_80183520:
{
}

loc_80183524:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_80183678;
    }
}

loc_80183528:
{
    goto loc_80183764;
}

loc_8018352C:
{
    r0 = (r5 & 255);
}

loc_80183534:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80183544;
    }
}

loc_80183538:
{
}

loc_8018353C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_8018354C;
    }
}

loc_80183540:
{
    goto loc_80183764;
}

loc_80183544:
{
    if constexpr (KnownRegArgsCpuCall<0x80137718u>(&func_80137718)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80137718_D94 = func_80137718_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_80137718_D94;
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
        InvokeDirectCpu<0x80137718u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_80183764;
}

loc_8018354C:
{
    ctx->lr = 0x80183550u;
    if constexpr (KnownRegArgsCpuCall<0x80130FD8u>(&func_80130FD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80130FD8_1144 = func_80130FD8_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80130FD8_1144);
        r4 = static_cast<uint32_t>(regargs_result_80130FD8_1144 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80130FD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_80183764;
}

loc_80183554:
{
    r0 = (r5 & 255);
}

loc_8018355C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_80183764;
    }
}

loc_80183560:
{
    // inline leaf 0x8012D204 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 501));
    // end of inlined leaf 0x8012D204
}

loc_80183568:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80183764;
    }
}

loc_8018356C:
{
    r31 = 0;
    r3 = MemoryInline::FlatRead8((r30 + 480));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl1_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_2 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_2);
}

loc_inl1_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x802B06E4:
{
    r3 = r0;
    goto loc_inl1_cont_802B06CC;
}

loc_inl1_return:
{
}

loc_inl1_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_80183580:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80183594;
    }
}

loc_80183584:
{
    r0 = MemoryInline::FlatRead8((r30 + 481));
}

loc_8018358C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80183594;
    }
}

loc_80183590:
{
    r31 = 1;
}

loc_80183594:
{
    r0 = 255;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::FlatRead16((r30 + 26));
    r4 = 17;
    r5 = r31;
    r6 = MemoryInline::FlatRead8((r30 + 481));
    r7 = 255;
    r8 = 2;
    r9 = 2;
    r10 = 9;
    ctx->lr = 0x801835CCu;
    if constexpr (KnownRegArgsCpuCall<0x80141BECu>(&func_80141BEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        const auto regargs_result_80141BEC_1F0A = func_80141BEC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80141BEC_1F0A);
        r4 = static_cast<uint32_t>(regargs_result_80141BEC_1F0A >> 32);
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
        InvokeDirectCpu<0x80141BECu>(ctx);
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
    goto loc_80183764;
}

loc_801835D0:
{
    r4 = (r5 & 255);
    r0 = (r4 + -34);
}

loc_801835DC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80183608;
    }
}

loc_801835E0:
{
}

loc_801835E4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(22))) {
        goto loc_801835F4;
    }
}

loc_801835E8:
{
}

loc_801835EC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(23))) {
        goto loc_80183600;
    }
}

loc_801835F0:
{
    goto loc_80183764;
}

loc_801835F4:
{
    r0 = 900;
    MemoryInline::FlatWrite16((r3 + 860), static_cast<uint16_t>(r0));
    goto loc_80183764;
}

loc_80183600:
{
    if constexpr (KnownRegArgsCpuCall<0x80137718u>(&func_80137718)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80137718_29DC = func_80137718_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_80137718_29DC;
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
        InvokeDirectCpu<0x80137718u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_80183764;
}

loc_80183608:
{
    // inline leaf 0x8012D204 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 501));
    // end of inlined leaf 0x8012D204
}

loc_80183610:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80183764;
    }
}

loc_80183614:
{
    r31 = 1;
    r3 = MemoryInline::FlatRead8((r30 + 480));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl3_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
}

loc_inl3_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x802B06E4:
{
    r3 = r0;
    goto loc_inl3_cont_802B06CC;
}

loc_inl3_return:
{
}

loc_inl3_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_80183628:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8018363C;
    }
}

loc_8018362C:
{
    r0 = MemoryInline::FlatRead8((r30 + 481));
}

loc_80183634:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_8018363C;
    }
}

loc_80183638:
{
    r31 = 0;
}

loc_8018363C:
{
    r0 = 255;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::FlatRead16((r30 + 26));
    r4 = 17;
    r5 = r31;
    r6 = MemoryInline::FlatRead8((r30 + 481));
    r7 = 255;
    r8 = 2;
    r9 = 2;
    r10 = 9;
    ctx->lr = 0x80183674u;
    if constexpr (KnownRegArgsCpuCall<0x80141BECu>(&func_80141BEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        const auto regargs_result_80141BEC_33D5 = func_80141BEC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80141BEC_33D5);
        r4 = static_cast<uint32_t>(regargs_result_80141BEC_33D5 >> 32);
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
        InvokeDirectCpu<0x80141BECu>(ctx);
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
    goto loc_80183764;
}

loc_80183678:
{
    r0 = (r5 & 255);
}

loc_80183680:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(200))) {
        goto loc_8018368C;
    }
}

loc_80183684:
{
}

loc_80183688:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(208))) {
        goto loc_80183764;
    }
}

loc_8018368C:
{
    r3 = r30;
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x8018369Cu;
    if constexpr (KnownRegArgsCpuCall<0x80135CC0u>(&func_80135CC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        const auto regargs_result_80135CC0_3DFD = func_80135CC0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80135CC0_3DFD);
        r4 = static_cast<uint32_t>(regargs_result_80135CC0_3DFD >> 32);
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
        InvokeDirectCpu<0x80135CC0u>(ctx);
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
    goto loc_80183764;
}

loc_801836A0:
{
}

loc_801836A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(17))) {
        goto loc_801836CC;
    }
}

loc_801836A8:
{
    r0 = (r4 & 255);
}

loc_801836B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_801836C0;
    }
}

loc_801836B4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 808), static_cast<uint8_t>(r0));
    goto loc_80183764;
}

loc_801836C0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 808), static_cast<uint8_t>(r0));
    goto loc_80183764;
}

loc_801836CC:
{
}

loc_801836D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(21))) {
        goto loc_80183764;
    }
}

loc_801836D4:
{
    r0 = (r4 & 255);
}

loc_801836DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_80183764;
    }
}

loc_801836E0:
{
    r0 = (r5 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(151));
}

loc_801836E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80183744;
    }
}

loc_801836EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80183720;
    }
}

loc_801836F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(55));
}

loc_801836F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80183750;
    }
}

loc_801836F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80183714;
    }
}

loc_801836FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(52));
}

loc_80183700:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80183750;
    }
}

loc_80183704:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80183764;
    }
}

loc_80183708:
{
}

loc_8018370C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(35))) {
        goto loc_80183744;
    }
}

loc_80183710:
{
    goto loc_80183764;
}

loc_80183714:
{
}

loc_80183718:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(132))) {
        goto loc_80183744;
    }
}

loc_8018371C:
{
    goto loc_80183764;
}

loc_80183720:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(178));
}

loc_80183724:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8018375C;
    }
}

loc_80183728:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80183738;
    }
}

loc_8018372C:
{
}

loc_80183730:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(158))) {
        goto loc_80183744;
    }
}

loc_80183734:
{
    goto loc_80183764;
}

loc_80183738:
{
}

loc_8018373C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(181))) {
        goto loc_8018375C;
    }
}

loc_80183740:
{
    goto loc_80183764;
}

loc_80183744:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 32), r0);
    goto loc_80183764;
}

loc_80183750:
{
    r0 = 60;
    MemoryInline::FlatWrite32((r3 + 32), r0);
    goto loc_80183764;
}

loc_8018375C:
{
    r0 = 300;
    MemoryInline::FlatWrite32((r3 + 32), r0);
}

loc_80183764:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
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

extern "C" void func_801834E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801834E0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x003FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801834E0 func_801834E0 preserves=true fpr_mask=0x00000000
