#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80469048(CpuContext* ctx);
extern "C" uint32_t func_80469048_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80469B40_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80469B40;

loc_80469B40:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = 0x806F0000u;
    r0 = MemoryInline::FlatRead32((r30 + 31224));
}

loc_80469B64:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80469BB0;
    }
}

loc_80469B68:
{
    r31 = (r30 + 31224);
    r5 = 12;
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r0 * 12);
    r4 = (r31 + r0);
    r4 = (r4 + 8);
    if constexpr (KnownRegArgsCpuCall<0x80469048u>(&func_80469048)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80469048_58A = func_80469048_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80469048_58A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80469048u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = MemoryInline::FlatRead32((r30 + 31224));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r31 + 4), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80469B98:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWriteRam32((r30 + 31224), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80469BAC;
    }
}

loc_80469BA4:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r31 + 4), r0);
}

loc_80469BAC:
{
    r4 = 1;
}

loc_80469BB0:
{
    r3 = r4;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80469B40(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80469B40_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80469B40 func_80469B40 preserves=true fpr_mask=0x00000000
