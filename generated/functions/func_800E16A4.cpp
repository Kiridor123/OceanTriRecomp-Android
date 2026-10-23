#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E1C90(CpuContext* ctx);
extern "C" uint64_t func_800E1C90_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800E16A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_800E16A4;

loc_800E16A4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30304));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 92), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 68));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30312));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800E16D8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800E1724;
    }
}

loc_800E16DC:
{
    r30 = 0;
    r31 = r29;
}

loc_800E16E4:
{
    r3 = r29;
    r4 = r30;
    ctx->lr = 0x800E16F0u;
    if constexpr (KnownRegArgsCpuCall<0x800E1C90u>(&func_800E1C90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800E1C90_6A0 = func_800E1C90_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E1C90_6A0);
        r4 = static_cast<uint32_t>(regargs_result_800E1C90_6A0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E1C90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_800E16F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E1714;
    }
}

loc_800E16F8:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 92));
    MemoryInline::FlatWriteFloat32((r31 + 92), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 92));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x800E1714u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_800E1714:
{
    r31 = (r31 + 4);
    r30 = (r30 + 1);
}

loc_800E1720:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(6))) {
        goto loc_800E16E4;
    }
}

loc_800E1724:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800E16A4 func_800E16A4 preserves=true fpr_mask=0x00000000
