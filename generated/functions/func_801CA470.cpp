#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801CA2BC(CpuContext* ctx);
extern "C" uint64_t func_801CA2BC_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_801CA470_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    PPC_FPR f1; f1.d = arg_f1;

    MKW_GUEST_ENTER(0x801CA470u);
    goto loc_801CA470;

loc_801CA470:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r4 & 255);
}

loc_801CA484:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801CA4AC;
    }
}

loc_801CA488:
{
}

loc_801CA48C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801CA4C0;
    }
}

loc_801CA490:
{
}

loc_801CA494:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801CA4D4;
    }
}

loc_801CA498:
{
}

loc_801CA49C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801CA4F4;
    }
}

loc_801CA4A0:
{
}

loc_801CA4A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801CA508;
    }
}

loc_801CA4A8:
{
    goto loc_801CA51C;
}

loc_801CA4AC:
{
    r0 = MemoryInline::FlatRead8((r3 + 572));
}

loc_801CA4B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801CA51C;
    }
}

loc_801CA4B8:
{
    r3 = 1;
    goto loc_801CA520;
}

loc_801CA4C0:
{
    r0 = MemoryInline::FlatRead16((r3 + 816));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801CA4C8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_801CA51C;
    }
}

loc_801CA4CC:
{
    r3 = 1;
    goto loc_801CA520;
}

loc_801CA4D4:
{
    ctx->lr = 0x801CA4D8u;
    if constexpr (KnownRegArgsCpuCall<0x801CA2BCu>(&func_801CA2BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801CA2BC_8C8 = func_801CA2BC_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801CA2BC_8C8);
        r4 = static_cast<uint32_t>(regargs_result_801CA2BC_8C8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801CA2BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r4 = r3;
    r0 = (r3 & 255);
}

loc_801CA4E4:
{
    r3 = 255;
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_801CA520;
    }
}

loc_801CA4EC:
{
    r3 = r4;
    goto loc_801CA520;
}

loc_801CA4F4:
{
    r0 = MemoryInline::FlatRead16((r3 + 818));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801CA4FC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(300))) {
        goto loc_801CA51C;
    }
}

loc_801CA500:
{
    r3 = 1;
    goto loc_801CA520;
}

loc_801CA508:
{
    r0 = MemoryInline::FlatRead16((r3 + 820));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801CA510:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_801CA51C;
    }
}

loc_801CA514:
{
    r3 = 1;
    goto loc_801CA520;
}

loc_801CA51C:
{
    r3 = 0;
}

loc_801CA520:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801CA470(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801CA470_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x80000002 fpr_write=0x8000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801CA470 func_801CA470 preserves=true fpr_mask=0x00000000
