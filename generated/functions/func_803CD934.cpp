#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803CE3A8(CpuContext* ctx);
extern "C" uint64_t func_803CE3A8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803CE5BC(CpuContext* ctx);
extern "C" uint64_t func_803CE5BC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803CE620(CpuContext* ctx);
extern "C" uint32_t func_803CE620_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803CE638(CpuContext* ctx);
extern "C" uint32_t func_803CE638_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803CE620_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_803CE638_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_803CE620_statefree_v0(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_803CE638_statefree_v0(uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803CD934_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_803CD934;

loc_803CD934:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r28 = r4;
    r29 = r5;
    r0 = MemoryInline::FlatRead32((r3 + 9256));
}

loc_803CD964:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803CD970;
    }
}

loc_803CD968:
{
    r3 = 0;
    goto loc_803CDAC8;
}

loc_803CD970:
{
}

loc_803CD974:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_803CD980;
    }
}

loc_803CD978:
{
    r3 = 0;
    goto loc_803CDAC8;
}

loc_803CD980:
{
}

loc_803CD984:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(0))) {
        goto loc_803CD990;
    }
}

loc_803CD988:
{
    r3 = 0;
    goto loc_803CDAC8;
}

loc_803CD990:
{
    r0 = (r5 + 2);
}

loc_803CD998:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1040))) {
        goto loc_803CD9B8;
    }
}

loc_803CD99C:
{
    r4 = 0x80030000u;
    r4 = (r4 + 33);
    r5 = 1040;
    r6 = 0x80000000u;
    // inline leaf 0x803CCF78 (7 guest instruction(s))
}

loc_inl0_0x803CCF78:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_0x803CCF80:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x803CCF84:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 8), r5);
    MemoryInline::FlatWrite32((r3 + 12), r6);
    goto loc_inl0_cont_803CCF78;
}

loc_inl0_return:
{
}

loc_inl0_cont_803CCF78:
{
    // end of inlined leaf 0x803CCF78
    r3 = -1;
    goto loc_803CDAC8;
}

loc_803CD9B8:
{
    r0 = MemoryInline::FlatRead32((r3 + 9244));
    r4 = (r5 + r0);
    r0 = (r4 + 2);
}

loc_803CD9C8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(9216))) {
        goto loc_803CD9E8;
    }
}

loc_803CD9CC:
{
    r4 = 0x80030000u;
    r4 = (r4 + 33);
    r5 = 9216;
    r6 = 0x80000000u;
    // inline leaf 0x803CCF78 (7 guest instruction(s))
}

loc_inl1_0x803CCF78:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_0x803CCF80:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x803CCF84:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 8), r5);
    MemoryInline::FlatWrite32((r3 + 12), r6);
    goto loc_inl1_cont_803CCF78;
}

loc_inl1_return:
{
}

loc_inl1_cont_803CCF78:
{
    // end of inlined leaf 0x803CCF78
    r3 = -1;
    goto loc_803CDAC8;
}

loc_803CD9E8:
{
    // inline leaf 0x803C99D8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16736));
    // end of inlined leaf 0x803C99D8
    r4 = (r29 & 65535);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 76));
    ctr = r12;
    ctx->lr = 0x803CDA00u;
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
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r3));
    r30 = 0x806D0000u;
    r3 = (r30 + 22208);
    r4 = (r1 + 8);
    r5 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 22208);
    r3 = (r3 + 2);
    r4 = r28;
    r5 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r31 + 16));
}

loc_803CDA34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803CDA48;
    }
}

loc_803CDA38:
{
    r3 = MemoryInline::FlatRead32((r31 + 9256));
    ctx->lr = 0x803CDA40u;
    if constexpr (KnownRegArgsCpuCall<0x803CE3A8u>(&func_803CE3A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803CE3A8_1B53 = func_803CE3A8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803CE3A8_1B53);
        r4 = static_cast<uint32_t>(regargs_result_803CE3A8_1B53 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        InvokeDirectCpu<0x803CE3A8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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

loc_803CDA44:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803CDA98;
    }
}

loc_803CDA48:
{
    r3 = MemoryInline::FlatRead32((r31 + 9256));
    r4 = 0x806D0000u;
    r4 = (r4 + 22208);
    r5 = (r29 + 2);
    ctx->lr = 0x803CDA5Cu;
    if constexpr (KnownRegArgsCpuCall<0x803CE5BCu>(&func_803CE5BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803CE5BC_23D6 = func_803CE5BC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803CE5BC_23D6);
        r4 = static_cast<uint32_t>(regargs_result_803CE5BC_23D6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        InvokeDirectCpu<0x803CE5BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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

loc_803CDA60:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_803CDA98;
    }
}

loc_803CDA64:
{
    r3 = MemoryInline::FlatRead32((r31 + 9256));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x803CE638u) && KnownTranslatedCpuCall<0x803CE638u>::kAvailable && !KnownTranslatedCpuCall<0x803CE638u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x803CE638u>()) {
        const auto state_free_result_803CE638_2C42 = func_803CE638_statefree_v0(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_803CE638_2C42[0]);
        cr = static_cast<uint32_t>(state_free_result_803CE638_2C42[1]);
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803CE638u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
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
        xer = ctx->xer;
    }
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r31 + 9256));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x803CE620u) && KnownTranslatedCpuCall<0x803CE620u>::kAvailable && !KnownTranslatedCpuCall<0x803CE620u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x803CE620u>()) {
        const auto state_free_result_803CE620_3271 = func_803CE620_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_803CE620_3271);
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803CE620u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
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
        xer = ctx->xer;
    }
    r5 = r3;
    r3 = r31;
    r4 = 0x80030000u;
    r4 = (r4 + 33);
    r6 = r30;
    // inline leaf 0x803CCF78 (7 guest instruction(s))
}

loc_inl3_0x803CCF78:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl3_0x803CCF80:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x803CCF84:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 8), r5);
    MemoryInline::FlatWrite32((r3 + 12), r6);
    goto loc_inl3_cont_803CCF78;
}

loc_inl3_return:
{
}

loc_inl3_cont_803CCF78:
{
    // end of inlined leaf 0x803CCF78
    r3 = -1;
    goto loc_803CDAC8;
}

loc_803CDA98:
{
    r0 = MemoryInline::FlatRead32((r31 + 9244));
    r3 = (r31 + r0);
    r3 = (r3 + 25);
    r4 = 0x806D0000u;
    r4 = (r4 + 22208);
    r5 = (r29 + 2);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r31 + 9244));
    r3 = (r29 + r0);
    r0 = (r3 + 2);
    MemoryInline::FlatWrite32((r31 + 9244), r0);
    r3 = (r29 + 2);
}

loc_803CDAC8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_803CD934(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803CD934_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803CD934 func_803CD934 preserves=true fpr_mask=0x00000000
