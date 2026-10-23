#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80051CD4(CpuContext* ctx);
extern "C" uint64_t func_80051CD4_ra38_1a_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_80051D78(CpuContext* ctx);
extern "C" uint64_t func_80051D78_ra38_1a_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_80135844_ra38_1a_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;

    goto loc_80135844;

loc_80135844:
{
    r0 = (r5 & 255);
}

loc_8013584C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013585C;
    }
}

loc_80135850:
{
}

loc_80135854:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80135864;
    }
}

loc_80135858:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8013585C:
{
    r5 = (r6 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x80051CD4u>(&func_80051CD4)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_80051CD4_65C = func_80051CD4_ra38_1a_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80051CD4_65C);
        r4 = static_cast<uint32_t>(regargs_result_80051CD4_65C >> 32);
        r0 = ctx->gpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80051CD4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80135864:
{
    r5 = (r6 & 65280);
    r0 = (r6 & 65535);
    r0 = (r0 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & -256);
    r6 = (r0 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x80051D78u>(&func_80051D78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[6] = r6;
        const auto regargs_result_80051D78_B86 = func_80051D78_ra38_1a_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80051D78_B86);
        r4 = static_cast<uint32_t>(regargs_result_80051D78_B86 >> 32);
        r0 = ctx->gpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80051D78u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80135844(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80135844_ra38_1a_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0xE000001A fpr_write=0xE000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80135844 func_80135844 preserves=true fpr_mask=0x00000000
