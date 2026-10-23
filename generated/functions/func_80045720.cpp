#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800441E4(CpuContext* ctx);
extern "C" double func_800441E4_ra0_6_0_2(CpuContext*, double, double);
extern "C" void func_800453B0(CpuContext* ctx);
extern "C" double func_800453B0_ra18_e_0_2(CpuContext*, uint32_t, uint32_t, double, double, double);
extern "C" void func_80045464(CpuContext* ctx);
extern "C" uint64_t func_80045464_ra38_7e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_800455F8(CpuContext* ctx);
extern "C" uint64_t func_800455F8_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_80045720_ra68_68_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, uint32_t arg_r6, double arg_f3, double arg_f5, double arg_f6)
{
    uint32_t stackword10 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    ctx->gpr[6] = arg_r6;

    goto loc_80045720;

loc_80045720:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r29 = r3;
    r4 = 0x80660000u;
    r30 = (r4 + -11504);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (0 - r0);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32688));
    r0 = (r0 ^ -2147483648);
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r31 = 1127219200;
    stackword6 = r31;
    MemoryInline::FlatWriteRam32((r1 + 24), r31);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword5));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 376));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r13 + -32588));
    if constexpr (KnownRegArgsCpuCall<0x800441E4u>(&func_800441E4)) {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800441E4_ADD = func_800441E4_ra0_6_0_2(ctx, f1.d, f2.d);
        f1.d = regargs_result_800441E4_ADD;
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x800441E4u>(ctx);
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    MemoryInline::FlatWriteRamFloat32((r30 + 336), f1.d);
    r0 = MemoryInline::FlatRead16((r29 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (0 - r0);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32688));
    r0 = (r0 ^ -2147483648);
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    stackword8 = r31;
    MemoryInline::FlatWriteRam32((r1 + 32), r31);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword8), static_cast<uint32_t>(stackword7));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 384));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r13 + -32588));
    if constexpr (KnownRegArgsCpuCall<0x800441E4u>(&func_800441E4)) {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800441E4_FDB = func_800441E4_ra0_6_0_2(ctx, f1.d, f2.d);
        f1.d = regargs_result_800441E4_FDB;
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x800441E4u>(ctx);
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    MemoryInline::FlatWriteRamFloat32((r30 + 340), f1.d);
    r0 = MemoryInline::FlatRead16((r29 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32688));
    r0 = (r0 ^ -2147483648);
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    stackword10 = r31;
    MemoryInline::FlatWriteRam32((r1 + 40), r31);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword10), static_cast<uint32_t>(stackword9));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 380));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r13 + -32588));
    if constexpr (KnownRegArgsCpuCall<0x800441E4u>(&func_800441E4)) {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800441E4_14C7 = func_800441E4_ra0_6_0_2(ctx, f1.d, f2.d);
        f1.d = regargs_result_800441E4_14C7;
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x800441E4u>(ctx);
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    MemoryInline::FlatWriteRamFloat32((r30 + 344), f1.d);
    r3 = (r1 + 8);
    r4 = (r30 + 12);
    // inline leaf 0x80045394 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80045394
    r3 = r30;
    r4 = (r30 + 12);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 336));
    if constexpr (KnownRegArgsCpuCall<0x800453B0u>(&func_800453B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800453B0_1944 = func_800453B0_ra18_e_0_2(ctx, r3, r4, f1.d, f2.d, f3.d);
        f1.d = regargs_result_800453B0_1944;
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x800453B0u>(ctx);
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = r30;
    r4 = (r30 + 16);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 340));
    if constexpr (KnownRegArgsCpuCall<0x800453B0u>(&func_800453B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800453B0_1CDF = func_800453B0_ra18_e_0_2(ctx, r3, r4, f1.d, f2.d, f3.d);
        f1.d = regargs_result_800453B0_1CDF;
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x800453B0u>(ctx);
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = r30;
    r4 = (r30 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 344));
    if constexpr (KnownRegArgsCpuCall<0x800453B0u>(&func_800453B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800453B0_207A = func_800453B0_ra18_e_0_2(ctx, r3, r4, f1.d, f2.d, f3.d);
        f1.d = regargs_result_800453B0_207A;
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x800453B0u>(ctx);
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x804645F4u>(ctx);
    f1 = ctx->fpr[1];
    MemoryInline::FlatWriteRamFloat32((r30 + 24), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f4.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f3.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = PpcFmulsInline(f4.d, f4.d);
    f0.d = PpcFmulsInline(f3.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x804645F4u>(ctx);
    f1 = ctx->fpr[1];
    MemoryInline::FlatWriteRamFloat32((r30 + 28), f1.d);
    r3 = r30;
    ctx->lr = 0x80045898u;
    if constexpr (KnownRegArgsCpuCall<0x80045464u>(&func_80045464)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80045464_2AB5 = func_80045464_ra38_7e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d);
        r3 = static_cast<uint32_t>(regargs_result_80045464_2AB5);
        r4 = static_cast<uint32_t>(regargs_result_80045464_2AB5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        InvokeDirectCpu<0x80045464u>(ctx);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
    }
    r3 = r30;
    ctx->lr = 0x800458A0u;
    if constexpr (KnownRegArgsCpuCall<0x800455F8u>(&func_800455F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800455F8_305F = func_800455F8_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_800455F8_305F);
        r4 = static_cast<uint32_t>(regargs_result_800455F8_305F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x800455F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80045720(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80045720_ra68_68_18_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->gpr[6], ctx->fpr[3].d, ctx->fpr[5].d, ctx->fpr[6].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FEE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0000068 fpr_write=0xE000007F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80045720 func_80045720 preserves=true fpr_mask=0x00000000
