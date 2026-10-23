#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_805020E4(CpuContext* ctx);
extern "C" void func_805020E4_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80502274(CpuContext* ctx);
extern "C" uint32_t func_80502274_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800A4640(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    goto loc_800A4640;

loc_800A4640:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r4 = MemoryInline::FlatRead16((r3 + 8));
    r0 = MemoryInline::FlatRead16((r3 + 24));
}

loc_800A4668:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_800A4688;
    }
}

loc_800A466C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 11772);
    r4 = 134;
    r5 = 0x80590000u;
    r5 = (r5 + 11712);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A4688u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_800A4688:
{
    r3 = r30;
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80502274u>(&func_80502274)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80502274_859 = func_80502274_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80502274_859;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80502274u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = (r30 + 12);
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x805020E4u>(&func_805020E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        func_805020E4_ra18_0_0_0(ctx, r3, r4);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x805020E4u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007A gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800A4640 func_800A4640 preserves=true fpr_mask=0x00000000
