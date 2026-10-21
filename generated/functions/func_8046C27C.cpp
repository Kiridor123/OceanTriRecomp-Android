#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046C27C(CpuContext* ctx);
extern "C" uint64_t func_8046C27C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8046C27C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    MKW_GUEST_ENTER(0x8046C27Cu);
    goto loc_8046C27C;

loc_8046C27C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = (r4 + r3);
    r6 = 1792;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = (r4 + -1);
}

loc_8046C29C:
{
    r30 = r5;
    if ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r3))) {
        goto loc_8046C2B0;
    }
}

loc_8046C2A8:
{
    r3 = 1792;
    goto loc_8046C35C;
}

loc_8046C2B0:
{
    r4 = 0x80570000u;
    r4 = (r4 + 15472);
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8046C2C0:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_8046C358;
    }
}

loc_8046C2C4:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8046C2CC:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(r0))) {
        goto loc_8046C358;
    }
}

loc_8046C2D0:
{
}

loc_8046C2D4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8046C2E4;
    }
}

loc_8046C2D8:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
}

loc_8046C2E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046C300;
    }
}

loc_8046C2E4:
{
}

loc_8046C2E8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_8046C308;
    }
}

loc_8046C2EC:
{
    r4 = 0x80570000u;
    r4 = (r4 + 15472);
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8046C2FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8046C308;
    }
}

loc_8046C300:
{
    r6 = 1792;
    goto loc_8046C358;
}

loc_8046C308:
{
    r4 = 0x80570000u;
    r6 = 0;
    r0 = MemoryInline::FlatRead32((r4 + 15472));
}

loc_8046C318:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_8046C32C;
    }
}

loc_8046C31C:
{
    r5 = r30;
    r4 = (r0 - r3);
    ctx->lr = 0x8046C328u;
    if constexpr (KnownRegArgsCpuCall<0x8046C27Cu>(&func_8046C27C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8046C27C_C44 = func_8046C27C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8046C27C_C44);
        r4 = static_cast<uint32_t>(regargs_result_8046C27C_C44 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8046C27Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r6 = r3;
}

loc_8046C32C:
{
}

loc_8046C330:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8046C358;
    }
}

loc_8046C334:
{
    r3 = 0x80570000u;
    r3 = (r3 + 15472);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8046C344:
{
    if ((static_cast<uint32_t>(r31) <= static_cast<uint32_t>(r3))) {
        goto loc_8046C358;
    }
}

loc_8046C348:
{
    r5 = r30;
    r4 = (r31 - r3);
    ctx->lr = 0x8046C354u;
    if constexpr (KnownRegArgsCpuCall<0x8046C27Cu>(&func_8046C27C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8046C27C_1269 = func_8046C27C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8046C27C_1269);
        r4 = static_cast<uint32_t>(regargs_result_8046C27C_1269 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8046C27Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r6 = r3;
}

loc_8046C358:
{
    r3 = r6;
}

loc_8046C35C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8046C27C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046C27C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00003FFE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8046C27C func_8046C27C preserves=true fpr_mask=0x00000000
