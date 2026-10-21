#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804EF160(CpuContext* ctx);
extern "C" uint64_t func_804EF160_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804EF1F0(CpuContext* ctx);
extern "C" uint64_t func_804EF1F0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_8081C910(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    MKW_GUEST_ENTER(0x8081C910u);
    goto loc_8081C910;

loc_8081C910:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r3 = 0;
    // inline leaf 0x804F3640 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r13 + -14144), r3);
    // end of inlined leaf 0x804F3640
    r4 = 0x80820000u;
    r3 = MemoryInline::FlatRead32(r30);
    r4 = (r4 + -15040);
    ctx->lr = 0x8081C940u;
    if constexpr (KnownRegArgsCpuCall<0x804EF160u>(&func_804EF160)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804EF160_674 = func_804EF160_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804EF160_674);
        r4 = static_cast<uint32_t>(regargs_result_804EF160_674 >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804EF160u>(ctx);
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
    }
    MemoryInline::FlatWrite32((r30 + 36), r3);
    r3 = 1;
    // inline leaf 0x804F3640 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r13 + -14144), r3);
    // end of inlined leaf 0x804F3640
    r4 = 0x80820000u;
    r3 = MemoryInline::FlatRead32(r30);
    r4 = (r4 + -14768);
    ctx->lr = 0x8081C95Cu;
    if constexpr (KnownRegArgsCpuCall<0x804EF1F0u>(&func_804EF1F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804EF1F0_C57 = func_804EF1F0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804EF1F0_C57);
        r4 = static_cast<uint32_t>(regargs_result_804EF1F0_C57 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804EF1F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite32((r30 + 40), r3);
    r31 = 1;
    r3 = MemoryInline::FlatRead32(r30);
    r4 = (r1 + 8);
    MemoryInline::FlatWrite8((r30 + 68), static_cast<uint8_t>(r31));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804EF040u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8081C978:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081C988;
    }
}

loc_8081C97C:
{
}

loc_8081C980:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_8081C990;
    }
}

loc_8081C984:
{
    goto loc_8081C998;
}

loc_8081C988:
{
    MemoryInline::FlatWrite8((r30 + 64), static_cast<uint8_t>(r31));
    goto loc_8081C998;
}

loc_8081C990:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 64), static_cast<uint8_t>(r0));
}

loc_8081C998:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000027EF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8081C910 func_8081C910 preserves=true fpr_mask=0x00000000
