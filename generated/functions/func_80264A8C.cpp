#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802649C0(CpuContext* ctx);
extern "C" uint64_t func_802649C0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80276BBC(CpuContext* ctx);
extern "C" uint64_t func_80276BBC_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" uint64_t func_80264A8C_ra18_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80264A8C;

loc_80264A8C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    ctx->lr = 0x80264AA4u;
    if constexpr (KnownRegArgsCpuCall<0x802649C0u>(&func_802649C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802649C0_495 = func_802649C0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802649C0_495);
        r4 = static_cast<uint32_t>(regargs_result_802649C0_495 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802649C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_80264AAC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(40))) {
        goto loc_80264AB8;
    }
}

loc_80264AB0:
{
    r0 = -360;
    goto loc_80264AC8;
}

loc_80264AB8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
}

loc_80264ABC:
{
    r0 = -150;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80264AC8;
    }
}

loc_80264AC4:
{
    r0 = -200;
}

loc_80264AC8:
{
    r3 = r31;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    ctx->lr = 0x80264AD4u;
    if constexpr (KnownRegArgsCpuCall<0x80276BBCu>(&func_80276BBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80276BBC_9F6 = func_80276BBC_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80276BBC_9F6);
        r4 = static_cast<uint32_t>(regargs_result_80276BBC_9F6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80276BBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80264A8C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80264A8C_ra18_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80264A8C func_80264A8C preserves=true fpr_mask=0x00000000
