#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D50D0(CpuContext* ctx);
extern "C" uint32_t func_800D50D0_rac8_1fe_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_809D8230(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    goto loc_809D8230;

loc_809D8230:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x80A80000u;
    r31 = (r3 + -31488);
    r3 = MemoryInline::FlatRead32((r31 + 100));
}

loc_809D8250:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_809D8260;
    }
}

loc_809D8254:
{
    // inline leaf 0x800D58C8 (19 guest instruction(s))
}

loc_inl0_0x800D58C8:
{
    r4 = MemoryInline::FlatRead32((r13 + -17584));
    r4 = (r4 + 65536);
    r0 = (r3 * 76);
    r4 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 24760));
}

loc_inl0_0x800D58E0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(1))) {
        goto loc_inl0_0x800D58F4;
    }
}

loc_inl0_0x800D58E4:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r4 + 24760), r0);
    r3 = -1;
    goto loc_inl0_cont_800D58C8;
}

loc_inl0_0x800D58F4:
{
    r3 = 0;
    MemoryInline::FlatWrite8((r4 + 24688), static_cast<uint8_t>(r3));
    r0 = -1;
    MemoryInline::FlatWrite32((r4 + 24752), r0);
    MemoryInline::FlatWrite32((r4 + 24756), r3);
    MemoryInline::FlatWrite32((r4 + 24760), r3);
    r3 = 0;
}

loc_inl0_cont_800D58C8:
{
    // end of inlined leaf 0x800D58C8
    r0 = -1;
    MemoryInline::FlatWriteRam32((r31 + 100), r0);
}

loc_809D8260:
{
    r3 = MemoryInline::FlatRead32((r31 + 96));
}

loc_809D8268:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_809D8278;
    }
}

loc_809D826C:
{
    ctx->lr = 0x809D8270u;
    if constexpr (KnownRegArgsCpuCall<0x800D50D0u>(&func_800D50D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800D50D0_AAC = func_800D50D0_rac8_1fe_8_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_800D50D0_AAC;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
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
        InvokeDirectCpu<0x800D50D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = -1;
    MemoryInline::FlatWriteRam32((r31 + 96), r0);
}

loc_809D8278:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002FDF gpr_write=0x1FFFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809D8230 func_809D8230 preserves=true fpr_mask=0x00000000
