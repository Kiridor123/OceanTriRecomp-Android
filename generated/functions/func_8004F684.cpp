#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004F61C(CpuContext* ctx);
extern "C" uint64_t func_8004F61C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8004F628(CpuContext* ctx);
extern "C" uint64_t func_8004F628_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8004F634(CpuContext* ctx);
extern "C" uint64_t func_8004F634_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004F638(CpuContext* ctx);
extern "C" uint64_t func_8004F638_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800DBC94(CpuContext* ctx);
extern "C" uint64_t func_800DBC94_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_8037695C(CpuContext* ctx);
extern "C" uint32_t func_8037695C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8004F684_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    MKW_GUEST_ENTER(0x8004F684u);
    goto loc_8004F684;

loc_8004F684:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r29 = r4;
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    ctx->lr = 0x8004F6B0u;
    if constexpr (KnownRegArgsCpuCall<0x8037695Cu>(&func_8037695C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8037695C_9F7 = func_8037695C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8037695C_9F7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8037695Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_8004F6B4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8004F6C0;
    }
}

loc_8004F6B8:
{
    r31 = 0;
    goto loc_8004F6D8;
}

loc_8004F6C0:
{
    r3 = 0x80660000u;
    r3 = (r3 + -18480);
    r0 = (r30 & 255);
    r0 = (r0 * 848);
    r3 = (r3 + r0);
    r31 = MemoryInline::FlatRead16((r3 + 708));
}

loc_8004F6D8:
{
    r3 = (r30 & 255);
    // inline leaf 0x8004F0D8 (6 guest instruction(s))
    r0 = (r3 & 255);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r4 = (r4_rot_0 & -256);
    r3 = 0x80670000u;
    r0 = (r3 + -13664);
    r3 = (r0 + r4);
    // end of inlined leaf 0x8004F0D8
    r30 = r3;
    r0 = MemoryInline::FlatRead8((r13 + -17820));
}

loc_8004F6EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004F714;
    }
}

loc_8004F6F0:
{
}

loc_8004F6F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8004F83C;
    }
}

loc_8004F6F8:
{
}

loc_8004F6FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8004F8E0;
    }
}

loc_8004F700:
{
}

loc_8004F704:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8004F938;
    }
}

loc_8004F708:
{
}

loc_8004F70C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8004F9F4;
    }
}

loc_8004F710:
{
    goto loc_8004FA98;
}

loc_8004F714:
{
    r3 = MemoryInline::FlatRead8((r13 + -17802));
    r4 = (r1 + 8);
    ctx->lr = 0x8004F720u;
    if constexpr (KnownRegArgsCpuCall<0x8004F638u>(&func_8004F638)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8004F638_1272 = func_8004F638_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004F638_1272);
        r4 = static_cast<uint32_t>(regargs_result_8004F638_1272 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004F638u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8004F724:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8004F830;
    }
}

loc_8004F728:
{
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r3 = 0x80570000u;
    r6 = (r3 + -928);
    r4 = 0;
    r0 = 2;
    ctr = r0;
}

loc_8004F740:
{
    r3 = MemoryInline::FlatRead16(r5);
    r0 = MemoryInline::FlatRead16(r6);
}

loc_8004F74C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8004F7EC;
    }
}

loc_8004F750:
{
    r4 = (r4 + 1);
    r3 = MemoryInline::FlatRead16((r5 + 2));
    r0 = MemoryInline::FlatRead16((r6 + 2));
}

loc_8004F760:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8004F7EC;
    }
}

loc_8004F764:
{
    r4 = (r4 + 1);
    r3 = MemoryInline::FlatRead16((r5 + 4));
    r0 = MemoryInline::FlatRead16((r6 + 4));
}

loc_8004F774:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8004F7EC;
    }
}

loc_8004F778:
{
    r4 = (r4 + 1);
    r3 = MemoryInline::FlatRead16((r5 + 6));
    r0 = MemoryInline::FlatRead16((r6 + 6));
}

loc_8004F788:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8004F7EC;
    }
}

loc_8004F78C:
{
    r4 = (r4 + 1);
    r3 = MemoryInline::FlatRead16((r5 + 8));
    r0 = MemoryInline::FlatRead16((r6 + 8));
}

loc_8004F79C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8004F7EC;
    }
}

loc_8004F7A0:
{
    r4 = (r4 + 1);
    r3 = MemoryInline::FlatRead16((r5 + 10));
    r0 = MemoryInline::FlatRead16((r6 + 10));
}

loc_8004F7B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8004F7EC;
    }
}

loc_8004F7B4:
{
    r4 = (r4 + 1);
    r3 = MemoryInline::FlatRead16((r5 + 12));
    r0 = MemoryInline::FlatRead16((r6 + 12));
}

loc_8004F7C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8004F7EC;
    }
}

loc_8004F7C8:
{
    r4 = (r4 + 1);
    r3 = MemoryInline::FlatRead16((r5 + 14));
    r0 = MemoryInline::FlatRead16((r6 + 14));
}

loc_8004F7D8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8004F7EC;
    }
}

loc_8004F7DC:
{
    r5 = (r5 + 16);
    r6 = (r6 + 16);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8004F740;
    }
}

loc_8004F7EC:
{
}

loc_8004F7F0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(16))) {
        goto loc_8004F818;
    }
}

loc_8004F7F4:
{
    r0 = (r29 & 255);
}

loc_8004F7FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8004F80C;
    }
}

loc_8004F800:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r13 + -17820), static_cast<uint8_t>(r0));
    goto loc_8004FA98;
}

loc_8004F80C:
{
    r3 = 100;
    MemoryInline::FlatWrite32((r13 + -17816), r3);
    goto loc_8004F820;
}

loc_8004F818:
{
    r3 = 101;
    MemoryInline::FlatWrite32((r13 + -17816), r3);
}

loc_8004F820:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -17803), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r13 + -17820), static_cast<uint8_t>(r0));
    goto loc_8004FA9C;
}

loc_8004F830:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r13 + -17820), static_cast<uint8_t>(r0));
    goto loc_8004FA98;
}

loc_8004F83C:
{
    r0 = (r31 & 8);
}

loc_8004F844:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004F86C;
    }
}

loc_8004F848:
{
    r0 = MemoryInline::FlatRead8((r13 + -17803));
}

loc_8004F850:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8004F86C;
    }
}

loc_8004F854:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -17803), static_cast<uint8_t>(r0));
    r3 = 3;
    ctx->lr = 0x8004F864u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_2542 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_2542);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_2542 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    r3 = MemoryInline::FlatRead32((r13 + -17816));
    goto loc_8004FA9C;
}

loc_8004F86C:
{
    r0 = (r31 & 4);
}

loc_8004F874:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004F89C;
    }
}

loc_8004F878:
{
    r0 = MemoryInline::FlatRead8((r13 + -17803));
}

loc_8004F880:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8004F89C;
    }
}

loc_8004F884:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r13 + -17803), static_cast<uint8_t>(r0));
    r3 = 3;
    ctx->lr = 0x8004F894u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_2EE6 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_2EE6);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_2EE6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    r3 = MemoryInline::FlatRead32((r13 + -17816));
    goto loc_8004FA9C;
}

loc_8004F89C:
{
    r0 = (r31 & 16);
}

loc_8004F8A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004F8D8;
    }
}

loc_8004F8A8:
{
    r3 = 0;
    ctx->lr = 0x8004F8B0u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_377B = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_377B);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_377B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    r0 = MemoryInline::FlatRead8((r13 + -17803));
}

loc_8004F8B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8004F8C4;
    }
}

loc_8004F8BC:
{
    r3 = -100;
    goto loc_8004FA9C;
}

loc_8004F8C4:
{
    r3 = 0;
    MemoryInline::FlatWrite32((r13 + -17816), r3);
    r0 = 2;
    MemoryInline::FlatWrite8((r13 + -17820), static_cast<uint8_t>(r0));
    goto loc_8004FA98;
}

loc_8004F8D8:
{
    r3 = MemoryInline::FlatRead32((r13 + -17816));
    goto loc_8004FA9C;
}

loc_8004F8E0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r13 + -17804), static_cast<uint8_t>(r0));
    r3 = 0x80570000u;
    r3 = (r3 + -928);
    if constexpr (KnownRegArgsCpuCall<0x8004F634u>(&func_8004F634)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8004F634_4116 = func_8004F634_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004F634_4116);
        r4 = static_cast<uint32_t>(regargs_result_8004F634_4116 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8004F634u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = MemoryInline::FlatRead8((r13 + -17802));
    r4 = r30;
    r5 = 256;
    r6 = 0;
    r7 = 0x80050000u;
    r7 = (r7 + -2452);
    ctx->lr = 0x8004F910u;
    if constexpr (KnownRegArgsCpuCall<0x8004F628u>(&func_8004F628)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8004F628_4562 = func_8004F628_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8004F628_4562);
        r4 = static_cast<uint32_t>(regargs_result_8004F628_4562 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        InvokeDirectCpu<0x8004F628u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    r0 = (r3 + 2);
}

loc_8004F918:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8004F930;
    }
}

loc_8004F91C:
{
}

loc_8004F920:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8004FA98;
    }
}

loc_8004F924:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r13 + -17820), static_cast<uint8_t>(r0));
    goto loc_8004FA98;
}

loc_8004F930:
{
    MemoryInline::FlatWrite32((r13 + -17816), r3);
    goto loc_8004FA9C;
}

loc_8004F938:
{
    r0 = MemoryInline::FlatRead8((r13 + -17804));
}

loc_8004F940:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004FA98;
    }
}

loc_8004F944:
{
    r5 = MemoryInline::FlatRead32((r13 + -17816));
    r0 = (r5 + 3);
}

loc_8004F950:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8004F9CC;
    }
}

loc_8004F954:
{
}

loc_8004F958:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8004FA98;
    }
}

loc_8004F95C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r13 + -17804), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r13 + -17802));
    r4 = 0x80670000u;
    r4 = (r4 + -13152);
    r5 = 256;
    r6 = 0;
    r7 = 0x80050000u;
    r7 = (r7 + -2452);
    ctx->lr = 0x8004F984u;
    if constexpr (KnownRegArgsCpuCall<0x8004F61Cu>(&func_8004F61C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8004F61C_51D6 = func_8004F61C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8004F61C_51D6);
        r4 = static_cast<uint32_t>(regargs_result_8004F61C_51D6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        InvokeDirectCpu<0x8004F61Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    r0 = (r3 + 2);
}

loc_8004F98C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8004F9B0;
    }
}

loc_8004F990:
{
    r0 = (r3 + 6);
}

loc_8004F998:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8004F9B0;
    }
}

loc_8004F99C:
{
}

loc_8004F9A0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8004FA98;
    }
}

loc_8004F9A4:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r13 + -17820), static_cast<uint8_t>(r0));
    goto loc_8004FA98;
}

loc_8004F9B0:
{
    r3 = MemoryInline::FlatRead32((r13 + -17808));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r13 + -17808), r0);
}

loc_8004F9C0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(3))) {
        goto loc_8004FA98;
    }
}

loc_8004F9C4:
{
    r3 = MemoryInline::FlatRead32((r13 + -17816));
    goto loc_8004FA9C;
}

loc_8004F9CC:
{
    r3 = MemoryInline::FlatRead32((r13 + -17812));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r13 + -17812), r0);
}

loc_8004F9DC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(3))) {
        goto loc_8004F9E8;
    }
}

loc_8004F9E0:
{
    r3 = r5;
    goto loc_8004FA9C;
}

loc_8004F9E8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r13 + -17820), static_cast<uint8_t>(r0));
    goto loc_8004FA98;
}

loc_8004F9F4:
{
    r0 = MemoryInline::FlatRead8((r13 + -17804));
}

loc_8004F9FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004FA98;
    }
}

loc_8004FA00:
{
    r5 = MemoryInline::FlatRead32((r13 + -17816));
    r0 = (r5 + 3);
}

loc_8004FA0C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8004F95C;
    }
}

loc_8004FA10:
{
    r0 = (r5 + 6);
}

loc_8004FA18:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8004F9CC;
    }
}

loc_8004FA1C:
{
}

loc_8004FA20:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8004FA98;
    }
}

loc_8004FA24:
{
    r4 = 0x80670000u;
    r4 = (r4 + -13152);
    r6 = 0;
    r4 = MemoryInline::FlatRead8(r4);
    r0 = 32;
    ctr = r0;
}

loc_8004FA3C:
{
    r0 = MemoryInline::FlatRead8(r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_8004FA44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8004FA88;
    }
}

loc_8004FA48:
{
    r6 = (r6 + 1);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8004FA88;
    }
}

loc_8004FA50:
{
    r6 = (r6 + 1);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8004FA88;
    }
}

loc_8004FA58:
{
    r6 = (r6 + 1);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8004FA88;
    }
}

loc_8004FA60:
{
    r6 = (r6 + 1);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8004FA88;
    }
}

loc_8004FA68:
{
    r6 = (r6 + 1);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8004FA88;
    }
}

loc_8004FA70:
{
    r6 = (r6 + 1);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8004FA88;
    }
}

loc_8004FA78:
{
    r6 = (r6 + 1);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8004FA88;
    }
}

loc_8004FA80:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8004FA3C;
    }
}

loc_8004FA88:
{
}

loc_8004FA8C:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(256))) {
        goto loc_8004F9CC;
    }
}

loc_8004FA90:
{
    r3 = 1;
    goto loc_8004FA9C;
}

loc_8004FA98:
{
    r3 = 0;
}

loc_8004FA9C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

extern "C" void func_8004F684(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004F684_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8004F684 func_8004F684 preserves=true fpr_mask=0x00000000
