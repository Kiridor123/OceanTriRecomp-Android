#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8041E3A4(CpuContext* ctx);
extern "C" uint32_t func_8041E3A4_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8041F090(CpuContext* ctx);
extern "C" uint32_t func_8041F090_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8042038C(CpuContext* ctx);
extern "C" uint64_t func_8042038C_ra58_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_80423EE4_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;

    goto loc_80423EE4;

loc_80423EE4:
{
}

loc_80423EE8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(128))) {
        goto loc_80423F00;
    }
}

loc_80423EEC:
{
}

loc_80423EF0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(192))) {
        goto loc_80423F0C;
    }
}

loc_80423EF4:
{
}

loc_80423EF8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(256))) {
        goto loc_80423F18;
    }
}

loc_80423EFC:
{
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80423F00:
{
    r3 = r4;
    r4 = r5;
    if constexpr (KnownRegArgsCpuCall<0x8041E3A4u>(&func_8041E3A4)) {
        ctx->gpr[5] = r5;
        const auto regargs_result_8041E3A4_724 = func_8041E3A4_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8041E3A4_724;
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8041E3A4u>(ctx);
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80423F0C:
{
    r3 = r4;
    r4 = r5;
    if constexpr (KnownRegArgsCpuCall<0x8042038Cu>(&func_8042038C)) {
        ctx->gpr[5] = r5;
        const auto regargs_result_8042038C_9FD = func_8042038C_ra58_1e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8042038C_9FD);
        r4 = static_cast<uint32_t>(regargs_result_8042038C_9FD >> 32);
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x8042038Cu>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80423F18:
{
    r3 = r4;
    r4 = r5;
    if constexpr (KnownRegArgsCpuCall<0x8041F090u>(&func_8041F090)) {
        ctx->gpr[5] = r5;
        const auto regargs_result_8041F090_EB2 = func_8041F090_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8041F090_EB2;
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8041F090u>(ctx);
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80423EE4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80423EE4_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001F7A gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001E fpr_return=0x00000002 cr_read=0x23 cr_write=0x23 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80423EE4 func_80423EE4 preserves=true fpr_mask=0x00000000
