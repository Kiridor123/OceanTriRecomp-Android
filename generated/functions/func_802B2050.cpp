#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802B0A1C(CpuContext* ctx);
extern "C" uint64_t func_802B0A1C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802B15BC(CpuContext* ctx);
extern "C" uint64_t func_802B15BC_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint32_t func_802B2050_ra70_e_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r5, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    ctx->gpr[6] = arg_r6;

    goto loc_802B2050;

loc_802B2050:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x806C0000u;
    r31 = (r3 + -21440);
    r3 = 12;
    r4 = 1;
    ctx->lr = 0x802B2074u;
    if constexpr (KnownRegArgsCpuCall<0x802B0A1Cu>(&func_802B0A1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802B0A1C_54F = func_802B0A1C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802B0A1C_54F);
        r4 = static_cast<uint32_t>(regargs_result_802B0A1C_54F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802B0A1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x802B2080u;
    if constexpr (KnownRegArgsCpuCall<0x802B15BCu>(&func_802B15BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802B15BC_88C = func_802B15BC_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802B15BC_88C);
        r4 = static_cast<uint32_t>(regargs_result_802B15BC_88C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x802B15BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r0 = 3;
    r3 = 0;
    r3 = (r3 * 160);
    r4 = (r31 + r3);
    r3 = MemoryInline::FlatRead8((r4 + 11308));
}

loc_802B2098:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802B20A0;
    }
}

loc_802B209C:
{
    MemoryInline::FlatWrite8((r4 + 11308), static_cast<uint8_t>(r0));
}

loc_802B20A0:
{
    r3 = 1;
    r3 = (r3 * 160);
    r4 = (r31 + r3);
    r3 = MemoryInline::FlatRead8((r4 + 11308));
}

loc_802B20B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802B20BC;
    }
}

loc_802B20B8:
{
    MemoryInline::FlatWrite8((r4 + 11308), static_cast<uint8_t>(r0));
}

loc_802B20BC:
{
    r3 = 2;
    r3 = (r3 * 160);
    r4 = (r31 + r3);
    r3 = MemoryInline::FlatRead8((r4 + 11308));
}

loc_802B20D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802B20D8;
    }
}

loc_802B20D4:
{
    MemoryInline::FlatWrite8((r4 + 11308), static_cast<uint8_t>(r0));
}

loc_802B20D8:
{
    r3 = 3;
    r3 = (r3 * 160);
    r4 = (r31 + r3);
    r3 = MemoryInline::FlatRead8((r4 + 11308));
}

loc_802B20EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802B20F4;
    }
}

loc_802B20F0:
{
    MemoryInline::FlatWrite8((r4 + 11308), static_cast<uint8_t>(r0));
}

loc_802B20F4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return r4;
}

}

extern "C" void func_802B2050(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802B2050_ra70_e_10_0(ctx, ctx->gpr[4], ctx->gpr[5], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000007F7 gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x8000000F fpr_write=0x8000000F fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802B2050 func_802B2050 preserves=true fpr_mask=0x00000000
