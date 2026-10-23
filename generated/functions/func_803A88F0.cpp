#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803A880C(CpuContext* ctx);
extern "C" uint32_t func_803A880C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803A89F8(CpuContext* ctx);
extern "C" void func_803A89F8_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803B1F10(CpuContext* ctx);
extern "C" uint64_t func_803B1F10_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803A88F0_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;

    goto loc_803A88F0;

loc_803A88F0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r30 = r3;
    ctx->lr = 0x803A890Cu;
    if constexpr (KnownRegArgsCpuCall<0x803A880Cu>(&func_803A880C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803A880C_673 = func_803A880C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803A880C_673;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803A880Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
}

loc_803A8914:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803A89E0;
    }
}

loc_803A8918:
{
    r0 = MemoryInline::FlatRead32((r3 + 60));
}

loc_803A8920:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A89E0;
    }
}

loc_803A8924:
{
    r3 = (r30 & 65535);
    ctx->lr = 0x803A892Cu;
    if constexpr (KnownRegArgsCpuCall<0x803B1F10u>(&func_803B1F10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B1F10_A72 = func_803B1F10_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803B1F10_A72);
        r4 = static_cast<uint32_t>(regargs_result_803B1F10_A72 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803B1F10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r31 + 60));
    r4 = r30;
    if constexpr (KnownRegArgsCpuCall<0x803A89F8u>(&func_803A89F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        func_803A89F8_ra18_0_0_0(ctx, r3, r4);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803A89F8u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead16((r30 + 44));
    MemoryInline::FlatWrite16((r31 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 788));
    MemoryInline::FlatWrite8((r31 + 20), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 314));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -5664));
    r0 = (r0 ^ -2147483648);
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r4 = 1127219200;
    stackword5 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -5672));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite32((r31 + 28), r0);
    r0 = MemoryInline::FlatRead16((r30 + 314));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    stackword7 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite32((r31 + 36), r0);
    r0 = MemoryInline::FlatRead32((r30 + 844));
    MemoryInline::FlatWrite32((r31 + 48), r0);
    r0 = MemoryInline::FlatRead32((r30 + 856));
    MemoryInline::FlatWrite32((r31 + 52), r0);
    r0 = MemoryInline::FlatRead32((r30 + 784));
    MemoryInline::FlatWrite32((r31 + 56), r0);
}

loc_803A89E0:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803A88F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803A88F0_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207F gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803A88F0 func_803A88F0 preserves=true fpr_mask=0x00000000
