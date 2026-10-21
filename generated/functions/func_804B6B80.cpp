#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CD630(CpuContext* ctx);
extern "C" void func_804CD630_ra8_0_0_0(CpuContext*, uint32_t);
extern "C" void func_804D51A0(CpuContext* ctx);
extern "C" uint64_t func_804D51A0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_804B6B80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804B6B80u);
    goto loc_804B6B80;

loc_804B6B80:
{
    MemoryInline::FlatWriteRam32((r1 + -736), r1);
    r1 = (r1 + -736);
    r0 = ctx->lr;
    r3 = 1;
    MemoryInline::FlatWriteRam32((r1 + 740), r0);
    r31 = r4;
    r5 = MemoryInline::FlatRead32((r13 + -15440));
    r0 = MemoryInline::FlatRead16((r5 + 10));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite16((r5 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r13 + -15364));
    MemoryInline::FlatWrite8((r13 + -15368), static_cast<uint8_t>(r3));
}

loc_804B6BB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B6BE4;
    }
}

loc_804B6BB8:
{
    r3 = (r1 + 8);
    // inline leaf 0x804CD870 (9 guest instruction(s))
}

loc_inl0_0x804CD870:
{
    r5 = 0;
    MemoryInline::FlatWriteRam16((r3 + 416), static_cast<uint16_t>(r5));
    r4 = 0x80000000u;
    MemoryInline::FlatWriteRam16((r3 + 418), static_cast<uint16_t>(r5));
    r0 = MemoryInline::FlatRead32((r4 + 216));
}

loc_inl0_0x804CD888:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x804CD88C:
{
    MemoryInline::FlatWriteRam32((r4 + 216), r5);
    goto loc_inl0_cont_804CD870;
}

loc_inl0_return:
{
}

loc_inl0_cont_804CD870:
{
    // end of inlined leaf 0x804CD870
    r3 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x804CD630u>(&func_804CD630)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        func_804CD630_ra8_0_0_0(ctx, r3);
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CD630u>(ctx);
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r12 = MemoryInline::FlatRead32((r13 + -15364));
    ctr = r12;
    ctx->lr = 0x804B6BD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    r3 = (r1 + 8);
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
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x804CD630u>(&func_804CD630)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        func_804CD630_ra8_0_0_0(ctx, r3);
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CD630u>(ctx);
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_804B6BE4:
{
    r3 = (r13 + -15376);
    ctx->lr = 0x804B6BECu;
    if constexpr (KnownRegArgsCpuCall<0x804D51A0u>(&func_804D51A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_804D51A0_12DE = func_804D51A0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D51A0_12DE);
        r4 = static_cast<uint32_t>(regargs_result_804D51A0_12DE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804D51A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead32((r1 + 740));
    ctx->lr = r0;
    r1 = (r1 + 736);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x3FFFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B6B80 func_804B6B80 preserves=true fpr_mask=0x00000000
