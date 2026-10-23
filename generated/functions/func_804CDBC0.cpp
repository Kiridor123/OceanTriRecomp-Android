#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CD3C0(CpuContext* ctx);
extern "C" double func_804CD3C0_ra30_1fe_0_2(CpuContext*, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804CD4F0(CpuContext* ctx);
extern "C" void func_804CD4F0_ra20_1fe_0_0(CpuContext*, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint32_t func_804CDBC0_ra30_1fe_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_mtcrf_preserve_0 = 0;
    uint32_t r3_mtcrf_src_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
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

    goto loc_804CDBC0;

loc_804CDBC0:
{
    r5 = ctx->msr;
    r5 = (r5 | 8192);
    ctx->msr = r5;
    // isync @ 0x804CDBCC (no-op)
    r5 = MemoryInline::FlatRead32((r4 + 412));
    r5 = (r5 | 8192);
    ctx->srr1 = r5;
    r3 = 0x80000000u;
    r5 = MemoryInline::FlatRead32((r3 + 216));
    MemoryInline::FlatWriteRam32((r3 + 216), r4);
}

loc_804CDBEC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(r4))) {
        goto loc_804CDC00;
    }
}

loc_804CDBF0:
{
}

loc_804CDBF4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804CDBFC;
    }
}

loc_804CDBF8:
{
    if constexpr (KnownRegArgsCpuCall<0x804CD4F0u>(&func_804CD4F0)) {
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->xer = xer;
        func_804CD4F0_ra20_1fe_0_0(ctx, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[3] = r3;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x804CD4F0u>(ctx);
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_804CDBFC:
{
    if constexpr (KnownRegArgsCpuCall<0x804CD3C0u>(&func_804CD3C0)) {
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804CD3C0_AE2 = func_804CD3C0_ra30_1fe_0_2(ctx, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        f1.d = regargs_result_804CD3C0_AE2;
        r5 = ctx->gpr[5];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
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
        ctx->xer = xer;
        InvokeDirectCpu<0x804CD3C0u>(ctx);
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
    }
}

loc_804CDC00:
{
    r3 = MemoryInline::FlatRead32((r4 + 128));
    r3_mtcrf_src_0 = (r3 & -1);
    r3_mtcrf_preserve_0 = (cr & 0);
    cr = (r3_mtcrf_preserve_0 | r3_mtcrf_src_0);
    r3 = MemoryInline::FlatRead32((r4 + 132));
    ctx->lr = r3;
    r3 = MemoryInline::FlatRead32((r4 + 408));
    ctx->srr0 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 136));
    ctr = r3;
    r3 = MemoryInline::FlatRead32((r4 + 140));
    xer = r3;
    r3 = MemoryInline::FlatRead16((r4 + 418));
    r3 = (r3 & -3);
    MemoryInline::FlatWrite16((r4 + 418), static_cast<uint16_t>(r3));
    r5 = MemoryInline::FlatRead32((r4 + 20));
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r4 = MemoryInline::FlatRead32((r4 + 16));
    ctx->gpr[3] = r3;
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
    ctx->xer = xer;
    return r4;
}

}

extern "C" void func_804CDBC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804CDBC0_ra30_1fe_10_0(ctx, ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000030 gpr_write=0x00000038 gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804CDBC0 func_804CDBC0 preserves=true fpr_mask=0x00000000
