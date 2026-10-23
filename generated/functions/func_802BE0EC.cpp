#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802BED34(CpuContext* ctx);
extern "C" uint32_t func_802BED34_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint32_t func_802BE0EC_ra28_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    ctx->gpr[5] = arg_r5;
    uint32_t cr = ctx->cr;

    goto loc_802BE0EC;

loc_802BE0EC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    ctx->lr = 0x802BE0FCu;
    if constexpr (KnownRegArgsCpuCall<0x802BED34u>(&func_802BED34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802BED34_3EE = func_802BED34_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BED34_3EE;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BED34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead16((r3 + 1268));
    r0 = (r3 & 2);
}

loc_802BE108:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802BE124;
    }
}

loc_802BE10C:
{
    r0 = (r3 & 1);
}

loc_802BE114:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802BE124;
    }
}

loc_802BE118:
{
    r0 = (r3 & 4);
}

loc_802BE120:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802BE144;
    }
}

loc_802BE124:
{
    r3 = (r1 + 8);
    ctx->lr = 0x802BE12Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x802BDD44u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802BE138:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802BE144;
    }
}

loc_802BE13C:
{
    r3 = 1;
    goto loc_802BE148;
}

loc_802BE144:
{
    r3 = 0;
}

loc_802BE148:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_802BE0EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802BE0EC_ra28_2_8_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802BE0EC func_802BE0EC preserves=true fpr_mask=0x00000000
