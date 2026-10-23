#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D1CF0(CpuContext* ctx);
extern "C" uint64_t func_804D1CF0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804D4B30(CpuContext* ctx);
extern "C" uint64_t func_804D4B30_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_8081E530(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    goto loc_8081E530;

loc_8081E530:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = 0x80870000u;
    r0 = MemoryInline::FlatRead32((r31 + -32328));
}

loc_8081E54C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081E5A4;
    }
}

loc_8081E550:
{
    ctx->lr = 0x8081E554u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8081E5D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r3 = MemoryInline::FlatRead32((r31 + -32328));
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead32((r3 + 17224));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80470BA0u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r31 + -32328));
    r4 = 8;
    r5 = 1;
    r3 = (r3 + 65536);
    r3 = (r3 + 18048);
    ctx->lr = 0x8081E57Cu;
    if constexpr (KnownRegArgsCpuCall<0x804D1CF0u>(&func_804D1CF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804D1CF0_8F8 = func_804D1CF0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D1CF0_8F8);
        r4 = static_cast<uint32_t>(regargs_result_804D1CF0_8F8 >> 32);
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
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804D1CF0u>(ctx);
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
    r3 = MemoryInline::FlatRead32((r31 + -32328));
    r4 = 0;
    r3 = (r3 + 65536);
    r3 = (r3 + 17256);
    ctx->lr = 0x8081E590u;
    if constexpr (KnownRegArgsCpuCall<0x804D4B30u>(&func_804D4B30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804D4B30_E6C = func_804D4B30_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D4B30_E6C);
        r4 = static_cast<uint32_t>(regargs_result_804D4B30_E6C >> 32);
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
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804D4B30u>(ctx);
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
    // inline leaf 0x80843FA0 (6 guest instruction(s))
    r4 = 0x80870000u;
    r3 = 0x80870000u;
    r0 = 0;
    MemoryInline::FlatWriteRam32((r4 + -29152), r0);
    MemoryInline::FlatWriteRam32((r3 + -29148), r0);
    // end of inlined leaf 0x80843FA0
    // inline leaf 0x80842330 (6 guest instruction(s))
    r4 = 0x80870000u;
    r3 = 0x80870000u;
    r0 = 0;
    MemoryInline::FlatWriteRam32((r4 + -30380), r0);
    MemoryInline::FlatWriteRam32((r3 + -29160), r0);
    // end of inlined leaf 0x80842330
    // inline leaf 0x80840AE0 (6 guest instruction(s))
    r4 = 0x80870000u;
    r3 = 0x80870000u;
    r0 = 0;
    MemoryInline::FlatWriteRam32((r4 + -31996), r0);
    MemoryInline::FlatWriteRam32((r3 + -30392), r0);
    // end of inlined leaf 0x80840AE0
    r0 = 0;
    MemoryInline::FlatWriteRam32((r31 + -32328), r0);
}

loc_8081E5A4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x1FFFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8081E530 func_8081E530 preserves=true fpr_mask=0x00000000
