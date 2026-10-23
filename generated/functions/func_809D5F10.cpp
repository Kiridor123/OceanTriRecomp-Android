#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800413D0(CpuContext* ctx);
extern "C" uint64_t func_800413D0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800CECC8(CpuContext* ctx);
extern "C" uint64_t func_800CECC8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_809D5F10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
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

    goto loc_809D5F10;

loc_809D5F10:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r31 = MemoryInline::FlatRead32((r3 + 2636));
    r3 = (r1 + 8);
    r4 = 0x80A20000u;
    r4 = (r4 + 10104);
    ctx->lr = 0x809D5F3Cu;
    if constexpr (KnownRegArgsCpuCall<0x800413D0u>(&func_800413D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_800413D0_6F4 = func_800413D0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800413D0_6F4);
        r4 = static_cast<uint32_t>(regargs_result_800413D0_6F4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800413D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
    }
    r3 = (r1 + 8);
    r4 = r31;
    r5 = 23040;
    ctx->lr = 0x809D5F4Cu;
    if constexpr (KnownRegArgsCpuCall<0x800CECC8u>(&func_800CECC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->ctr = ctr;
        const auto regargs_result_800CECC8_C0C = func_800CECC8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CECC8_C0C);
        r4 = static_cast<uint32_t>(regargs_result_800CECC8_C0C >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800CECC8u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r6 = (r31 + 8);
    r7 = 0;
    r3 = 0x80A70000u;
    r4 = (r3 + 31696);
    r3 = 0x80A20000u;
    r5 = (r3 + 10092);
    ctr = r0;
}

loc_809D5F70:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_809D5FD4;
    }
}

loc_809D5F74:
{
}

loc_809D5F78:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(11))) {
        goto loc_809D5FD4;
    }
}

loc_809D5F7C:
{
    r0 = MemoryInline::FlatRead32(r6);
    r6 = (r6 + 8);
    r0 = (r0 + r31);
    MemoryInline::FlatWrite32(r4, r0);
    r9 = MemoryInline::FlatRead32(r4);
    r8 = 0;
    goto loc_809D5FB8;
}

loc_809D5F98:
{
    r3 = MemoryInline::FlatRead32((r9 + 4));
}

loc_809D5FA0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_809D5FB0;
    }
}

loc_809D5FA4:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r9 + 4), r0);
}

loc_809D5FB0:
{
    r9 = (r9 + 8);
    r8 = (r8 + 1);
}

loc_809D5FB8:
{
    r0 = MemoryInline::FlatRead8(r5);
}

loc_809D5FC0:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(r0))) {
        goto loc_809D5F98;
    }
}

loc_809D5FC4:
{
    r4 = (r4 + 4);
    r5 = (r5 + 1);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_809D5F74;
    }
}

loc_809D5FD4:
{
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x1FFFFFFF gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809D5F10 func_809D5F10 preserves=true fpr_mask=0x00000000
