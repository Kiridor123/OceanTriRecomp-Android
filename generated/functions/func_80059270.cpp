#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80059060(CpuContext* ctx);
extern "C" uint64_t func_80059060_ra38_60_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);

extern "C" void func_80059270(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80059270u);
    goto loc_80059270;

loc_80059270:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = 0x80670000u;
    r31 = (r3 + -11912);
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_8005929C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800592B4;
    }
}

loc_800592A0:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r0 = MemoryInline::FlatRead8((r3 + 300));
}

loc_800592B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_800593BC;
    }
}

loc_800592B4:
{
    ctx->lr = 0x800592B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8005AF80u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    ctr = ctx->ctr;
    // inline leaf 0x80046F70 (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 48));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80046F70
}

loc_800592C0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8005932C;
    }
}

loc_800592C4:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x800592D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80058870u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    ctr = ctx->ctr;
    r29 = 1;
    r30 = 1;
}

loc_800592D8:
{
    r3 = (r31 + r29);
    r4 = MemoryInline::FlatRead8((r3 + 4));
}

loc_800592E4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(2))) {
        goto loc_8005931C;
    }
}

loc_800592E8:
{
    r3 = MemoryInline::FlatRead8((r31 + 2));
    r0 = PPC_Slw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r4));
    r0 = (r3 & r0);
}

loc_800592F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8005931C;
    }
}

loc_800592FC:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r31 + r0);
    r12 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8005930C:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8005931C;
    }
}

loc_80059310:
{
    r3 = MemoryInline::FlatRead32((r3 + 36));
    ctr = r12;
    ctx->lr = 0x8005931Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    ctr = ctx->ctr;
}

loc_8005931C:
{
    r29 = (r29 + 1);
}

loc_80059324:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(6))) {
        goto loc_800592D8;
    }
}

loc_80059328:
{
    goto loc_800593AC;
}

loc_8005932C:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2153));
}

loc_8005933C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8005934C;
    }
}

loc_80059340:
{
    r0 = MemoryInline::FlatRead8((r3 + 2152));
}

loc_80059348:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_800593AC;
    }
}

loc_8005934C:
{
    r3 = r31;
    ctx->lr = 0x80059354u;
    if constexpr (KnownRegArgsCpuCall<0x80059060u>(&func_80059060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80059060_1488 = func_80059060_ra38_60_18_0(ctx, r3, r4, r5, f5.d, f6.d);
        r3 = static_cast<uint32_t>(regargs_result_80059060_1488);
        r4 = static_cast<uint32_t>(regargs_result_80059060_1488 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80059060u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        ctr = ctx->ctr;
    }
    r29 = 1;
    r30 = 1;
}

loc_8005935C:
{
    r3 = (r31 + r29);
    r4 = MemoryInline::FlatRead8((r3 + 4));
}

loc_80059368:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800593A0;
    }
}

loc_8005936C:
{
    r3 = MemoryInline::FlatRead8((r31 + 2));
    r0 = PPC_Slw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r4));
    r0 = (r3 & r0);
}

loc_8005937C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800593A0;
    }
}

loc_80059380:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r31 + r0);
    r12 = MemoryInline::FlatRead32((r3 + 12));
}

loc_80059390:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_800593A0;
    }
}

loc_80059394:
{
    r3 = MemoryInline::FlatRead32((r3 + 36));
    ctr = r12;
    ctx->lr = 0x800593A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    ctr = ctx->ctr;
}

loc_800593A0:
{
    r29 = (r29 + 1);
}

loc_800593A8:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(6))) {
        goto loc_8005935C;
    }
}

loc_800593AC:
{
    r3 = 2047;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800885F4u>(ctx);
    r3 = 0;
    ctx->lr = 0x800593BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804B9900u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    ctr = ctx->ctr;
}

loc_800593BC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80059270 func_80059270 preserves=true fpr_mask=0x00000000
