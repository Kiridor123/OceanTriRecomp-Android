#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804C1F20(CpuContext* ctx);
extern "C" uint64_t func_804C1F20_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_804C27A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    goto loc_804C27A0;

loc_804C27A0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = (r4 + r3);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r3 + 3);
    r6 = (r4 & -4);
    r31 = (r0 & -4);
}

loc_804C27C4:
{
    if ((static_cast<uint32_t>(r31) > static_cast<uint32_t>(r6))) {
        goto loc_804C27D4;
    }
}

loc_804C27C8:
{
    r0 = (r6 - r31);
}

loc_804C27D0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(100))) {
        goto loc_804C27DC;
    }
}

loc_804C27D4:
{
    r3 = 0;
    goto loc_804C283C;
}

loc_804C27DC:
{
    r4 = 1163395072;
    r7 = r5;
    r3 = r31;
    r5 = (r31 + 80);
    r4 = (r4 + 20552);
    ctx->lr = 0x804C27F4u;
    if constexpr (KnownRegArgsCpuCall<0x804C1F20u>(&func_804C1F20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804C1F20_762 = func_804C1F20_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804C1F20_762);
        r4 = static_cast<uint32_t>(regargs_result_804C1F20_762 >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804C1F20u>(ctx);
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
    }
    r5 = 0;
    MemoryInline::FlatWrite16((r31 + 76), static_cast<uint16_t>(r5));
    r4 = 18002;
    r3 = r31;
    MemoryInline::FlatWrite16((r31 + 78), static_cast<uint16_t>(r5));
    r6 = MemoryInline::FlatRead32((r31 + 24));
    r7 = MemoryInline::FlatRead32((r31 + 28));
    r0 = (r6 + 16);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r4));
    r0 = (r7 - r0);
    MemoryInline::FlatWrite16((r6 + 2), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite32((r6 + 4), r0);
    MemoryInline::FlatWrite32((r6 + 8), r5);
    MemoryInline::FlatWrite32((r6 + 12), r5);
    MemoryInline::FlatWrite32((r31 + 60), r6);
    MemoryInline::FlatWrite32((r31 + 64), r6);
    MemoryInline::FlatWrite32((r31 + 68), r5);
    MemoryInline::FlatWrite32((r31 + 72), r5);
}

loc_804C283C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x07FFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804C27A0 func_804C27A0 preserves=true fpr_mask=0x00000000
