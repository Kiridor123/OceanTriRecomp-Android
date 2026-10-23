#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804C7DD0(CpuContext* ctx);
extern "C" uint64_t func_804C7DD0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804C7EC0(CpuContext* ctx);
extern "C" uint64_t func_804C7EC0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804C7F40(CpuContext* ctx);
extern "C" uint64_t func_804C7F40_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804C8B10(CpuContext* ctx);
extern "C" uint64_t func_804C8B10_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804C8D00(CpuContext* ctx);
extern "C" uint64_t func_804C8D00_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804CBD80(CpuContext* ctx);
extern "C" uint64_t func_804CBD80_ra68_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804D6500_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;

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

    goto loc_804D6500;

loc_804D6500:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -20048), r0);
}

loc_804D66F0:
{
    r0 = MemoryInline::FlatRead32((r13 + -20048));
    r29 = 0;
    MemoryInline::FlatWrite32((r13 + -14912), r29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_804D6700:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804D67A0;
    }
}

loc_804D6704:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804D6720;
    }
}

loc_804D6708:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_804D670C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804D6758;
    }
}

loc_804D6710:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804D677C;
    }
}

loc_804D6714:
{
}

loc_804D6718:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_804D6730;
    }
}

loc_804D671C:
{
    goto loc_804D6850;
}

loc_804D6720:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_804D6724:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804D6838;
    }
}

loc_804D6728:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804D6850;
    }
}

loc_804D672C:
{
    goto loc_804D67DC;
}

loc_804D6730:
{
    r3 = 0x80630000u;
    r6 = 0x804D0000u;
    r3 = (r3 + -24928);
    r4 = (r31 + 176);
    r6 = (r6 + 25744);
    r7 = (r31 + 316);
    r5 = 3;
    ctx->lr = 0x804D6750u;
    if constexpr (KnownRegArgsCpuCall<0x804C8B10u>(&func_804C8B10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804C8B10_10A4 = func_804C8B10_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804C8B10_10A4);
        r4 = static_cast<uint32_t>(regargs_result_804C8B10_10A4 >> 32);
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
        InvokeDirectCpu<0x804C8B10u>(ctx);
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
    r30 = r3;
    goto loc_804D6850;
}

loc_804D6758:
{
    r6 = 0x804D0000u;
    r3 = (r31 + 176);
    r4 = (r31 + 0);
    r7 = (r31 + 316);
    r6 = (r6 + 25744);
    r5 = 128;
    ctx->lr = 0x804D6774u;
    if constexpr (KnownRegArgsCpuCall<0x804C7DD0u>(&func_804C7DD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804C7DD0_190B = func_804C7DD0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804C7DD0_190B);
        r4 = static_cast<uint32_t>(regargs_result_804C7DD0_190B >> 32);
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
        InvokeDirectCpu<0x804C7DD0u>(ctx);
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
    r30 = r3;
    goto loc_804D6850;
}

loc_804D677C:
{
    r6 = 0x804D0000u;
    r3 = (r31 + 176);
    r6 = (r6 + 25744);
    r7 = (r31 + 316);
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x804D6798u;
    if constexpr (KnownRegArgsCpuCall<0x804C7F40u>(&func_804C7F40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804C7F40_2168 = func_804C7F40_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804C7F40_2168);
        r4 = static_cast<uint32_t>(regargs_result_804C7F40_2168 >> 32);
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
        InvokeDirectCpu<0x804C7F40u>(ctx);
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
    r30 = r3;
    goto loc_804D6850;
}

loc_804D67A0:
{
    r3 = (r31 + 128);
    // inline leaf 0x804CBB20 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x804CBB20
    r3 = 0x80000000u;
    r0 = 60;
    r3 = MemoryInline::FlatRead32((r3 + 248));
    r7 = 0x804D0000u;
    r4 = (r29 * r0);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r5 = (r5_rot_1 & 1073741823);
    r3 = (r31 + 128);
    r7 = (r7 + 25728);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r5) * static_cast<uint64_t>(r0)) >> 32));
    r6 = (r5 * 60);
    r5 = (r0 + r4);
    ctx->lr = 0x804D67D8u;
    if constexpr (KnownRegArgsCpuCall<0x804CBD80u>(&func_804CBD80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CBD80_2BC3 = func_804CBD80_ra68_0_18_0(ctx, r3, r5, r6);
        r3 = static_cast<uint32_t>(regargs_result_804CBD80_2BC3);
        r4 = static_cast<uint32_t>(regargs_result_804CBD80_2BC3 >> 32);
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
        InvokeDirectCpu<0x804CBD80u>(ctx);
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
    goto loc_804D6850;
}

loc_804D67DC:
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
    r5 = (r31 + 0);
    r0 = 31;
    MemoryInline::FlatWrite32((r5 + 100), r4);
    r6 = (r5 + 4);
    r4 = 0;
    MemoryInline::FlatWrite32((r5 + 96), r3);
    ctr = r0;
    // nop
}

loc_804D6800:
{
    r0 = MemoryInline::FlatRead32(r6);
    r6 = (r6 + 4);
    r4 = (r4 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804D6800;
    }
}

loc_804D6810:
{
    r6 = 0x804D0000u;
    MemoryInline::FlatWrite32(r31, r4);
    r3 = (r31 + 176);
    r4 = (r31 + 0);
    r6 = (r6 + 25744);
    r7 = (r31 + 316);
    r5 = 128;
    ctx->lr = 0x804D6830u;
    if constexpr (KnownRegArgsCpuCall<0x804C7EC0u>(&func_804C7EC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804C7EC0_3407 = func_804C7EC0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804C7EC0_3407);
        r4 = static_cast<uint32_t>(regargs_result_804C7EC0_3407 >> 32);
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
        InvokeDirectCpu<0x804C7EC0u>(ctx);
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
    r30 = r3;
    goto loc_804D6850;
}

loc_804D6838:
{
    r4 = 0x804D0000u;
    r3 = (r31 + 176);
    r4 = (r4 + 25744);
    r5 = (r31 + 316);
    ctx->lr = 0x804D684Cu;
    if constexpr (KnownRegArgsCpuCall<0x804C8D00u>(&func_804C8D00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804C8D00_3C4A = func_804C8D00_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804C8D00_3C4A);
        r4 = static_cast<uint32_t>(regargs_result_804C8D00_3C4A >> 32);
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
        InvokeDirectCpu<0x804C8D00u>(ctx);
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
    r30 = r3;
}

loc_804D6850:
{
}

loc_804D6854:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_804D6924;
    }
}

loc_804D6858:
{
}

loc_804D685C:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(-3))) {
        goto loc_804D6894;
    }
}

loc_804D6860:
{
    r3 = (r31 + 128);
    // inline leaf 0x804CBB20 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x804CBB20
    r3 = 0x80000000u;
    r7 = 0x804D0000u;
    r0 = MemoryInline::FlatRead32((r3 + 248));
    r3 = (r31 + 128);
    r7 = (r7 + 25728);
    r5 = 0;
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r6 = (r6_rot_1 & 1073741823);
    ctx->lr = 0x804D6888u;
    if constexpr (KnownRegArgsCpuCall<0x804CBD80u>(&func_804CBD80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CBD80_4713 = func_804CBD80_ra68_0_18_0(ctx, r3, r5, r6);
        r3 = static_cast<uint32_t>(regargs_result_804CBD80_4713);
        r4 = static_cast<uint32_t>(regargs_result_804CBD80_4713 >> 32);
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
        InvokeDirectCpu<0x804CBD80u>(ctx);
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
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -14912), r0);
    goto loc_804D6924;
}

loc_804D6894:
{
    r0 = MemoryInline::FlatRead32((r13 + -20048));
    r3 = 1;
    MemoryInline::FlatWrite32((r13 + -14924), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_804D68A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804D691C;
    }
}

loc_804D68A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804D68B8;
    }
}

loc_804D68AC:
{
}

loc_804D68B0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(2))) {
        goto loc_804D68C0;
    }
}

loc_804D68B4:
{
    goto loc_804D691C;
}

loc_804D68B8:
{
}

loc_804D68BC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(6))) {
        goto loc_804D691C;
    }
}

loc_804D68C0:
{
    r0 = 6;
    r4 = 0x804D0000u;
    MemoryInline::FlatWrite32((r13 + -20048), r0);
    r3 = (r31 + 176);
    r4 = (r4 + 25744);
    r5 = (r31 + 316);
    ctx->lr = 0x804D68DCu;
    if constexpr (KnownRegArgsCpuCall<0x804C8D00u>(&func_804C8D00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804C8D00_5003 = func_804C8D00_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804C8D00_5003);
        r4 = static_cast<uint32_t>(regargs_result_804C8D00_5003 >> 32);
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
        InvokeDirectCpu<0x804C8D00u>(ctx);
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
}

loc_804D68E0:
{
    r30 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-3))) {
        goto loc_804D6924;
    }
}

loc_804D68E8:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -14912), r0);
    r3 = (r31 + 128);
    // inline leaf 0x804CBB20 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x804CBB20
    r3 = 0x80000000u;
    r7 = 0x804D0000u;
    r0 = MemoryInline::FlatRead32((r3 + 248));
    r3 = (r31 + 128);
    r7 = (r7 + 25728);
    r5 = 0;
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r6 = (r6_rot_2 & 1073741823);
    ctx->lr = 0x804D6918u;
    if constexpr (KnownRegArgsCpuCall<0x804CBD80u>(&func_804CBD80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CBD80_5A61 = func_804CBD80_ra68_0_18_0(ctx, r3, r5, r6);
        r3 = static_cast<uint32_t>(regargs_result_804CBD80_5A61);
        r4 = static_cast<uint32_t>(regargs_result_804CBD80_5A61 >> 32);
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
        InvokeDirectCpu<0x804CBD80u>(ctx);
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
    goto loc_804D6924;
}

loc_804D691C:
{
    r0 = 7;
    MemoryInline::FlatWrite32((r13 + -20048), r0);
}

loc_804D6924:
{
    MemoryInline::FlatWrite32((r13 + -14908), r30);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

extern "C" void func_804D6500(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D6500_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xE0003FFF gpr_write=0xE0001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804D6500 func_804D6500 preserves=true fpr_mask=0x00000000
