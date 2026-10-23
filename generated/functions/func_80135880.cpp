#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80051E3C(CpuContext* ctx);
extern "C" uint64_t func_80051E3C_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80051F98(CpuContext* ctx);
extern "C" uint64_t func_80051F98_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_80135880_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t stackword2 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;

    goto loc_80135880;

loc_80135880:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r9 = (r7 & 65535);
    r0 = (r9 & 255);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -28216));
    r0 = (r0 ^ -2147483648);
    stackword2 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r8 = 1127219200;
    stackword3 = r8;
    MemoryInline::FlatWriteRam32((r1 + 8), r8);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword2));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28052));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    r0 = (r6 & 255);
}

loc_801358C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801358D4;
    }
}

loc_801358C8:
{
}

loc_801358CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801358FC;
    }
}

loc_801358D0:
{
    goto loc_80135924;
}

loc_801358D4:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(28));
    r0 = (r0_rot_2 & 255);
    r0 = (r0 ^ -2147483648);
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    stackword5 = r8;
    MemoryInline::FlatWriteRam32((r1 + 8), r8);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    r6 = (r7 & 65280);
    ctx->lr = 0x801358F8u;
    if constexpr (KnownRegArgsCpuCall<0x80051E3Cu>(&func_80051E3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_80051E3C_DB4 = func_80051E3C_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80051E3C_DB4);
        r4 = static_cast<uint32_t>(regargs_result_80051E3C_DB4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80051E3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    goto loc_80135924;
}

loc_801358FC:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(28));
    r0 = (r0_rot_1 & 255);
    r0 = (r0 ^ -2147483648);
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    stackword7 = r8;
    MemoryInline::FlatWriteRam32((r1 + 8), r8);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(8));
    r6 = (r6_rot_1 & 65280);
    r7 = (r7 & 65280);
    ctx->lr = 0x80135924u;
    if constexpr (KnownRegArgsCpuCall<0x80051F98u>(&func_80051F98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        const auto regargs_result_80051F98_15C8 = func_80051F98_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80051F98_15C8);
        r4 = static_cast<uint32_t>(regargs_result_80051F98_15C8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80051F98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
}

loc_80135924:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80135880(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80135880_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003FF gpr_write=0x00000BFB gpr_return=0x00000018 fpr_read=0xE000001F fpr_write=0xE000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80135880 func_80135880 preserves=true fpr_mask=0x00000000
