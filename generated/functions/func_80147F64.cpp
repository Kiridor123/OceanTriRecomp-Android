#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012C284(CpuContext* ctx);
extern "C" uint64_t func_8012C284_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012C54C(CpuContext* ctx);
extern "C" uint64_t func_8012C54C_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);

extern "C" uint64_t func_80147F64_ra38_4_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f2)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2; f2.d = arg_f2;

    goto loc_80147F64;

loc_80147F64:
{
    r6 = r3;
    r3 = MemoryInline::FlatRead8((r3 + 3));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    r3 = (r3 + 1);
    r0 = (r4 & 255);
}

loc_80147F84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80147F94;
    }
}

loc_80147F88:
{
    r3 = (r3 & 255);
    r4 = MemoryInline::FlatRead8((r6 + 481));
    if constexpr (KnownRegArgsCpuCall<0x8012C284u>(&func_8012C284)) {
        ctx->gpr[0] = r0;
        ctx->gpr[6] = r6;
        const auto regargs_result_8012C284_60E = func_8012C284_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012C284_60E);
        r4 = static_cast<uint32_t>(regargs_result_8012C284_60E >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8012C284u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80147F94:
{
    r3 = (r3 & 255);
    r4 = MemoryInline::FlatRead8((r6 + 481));
    r5 = 100;
    r6 = (r6 + 392);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -27760));
    if constexpr (KnownRegArgsCpuCall<0x8012C54Cu>(&func_8012C54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[6] = r6;
        const auto regargs_result_8012C54C_A75 = func_8012C54C_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_8012C54C_A75);
        r4 = static_cast<uint32_t>(regargs_result_8012C54C_A75 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x8012C54Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80147F64(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80147F64_ra38_4_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0xC0000005 fpr_write=0xC0000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80147F64 func_80147F64 preserves=true fpr_mask=0x00000000
