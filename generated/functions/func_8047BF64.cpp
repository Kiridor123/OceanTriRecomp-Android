#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80477E60(CpuContext* ctx);
extern "C" uint64_t func_80477E60_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8047B6F0(CpuContext* ctx);
extern "C" uint64_t func_8047B6F0_ra88_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8047B70C(CpuContext* ctx);
extern "C" uint64_t func_8047B70C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8047B72C(CpuContext* ctx);
extern "C" uint64_t func_8047B72C_ra48_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8047C9E0(CpuContext* ctx);
extern "C" uint64_t func_8047C9E0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804858AC(CpuContext* ctx);
extern "C" uint64_t func_804858AC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80488614(CpuContext* ctx);
extern "C" uint64_t func_80488614_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8047BF64_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
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

    goto loc_8047BF64;

loc_8047BF64:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x80740000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 0;
    r31 = (r4 + -18600);
    r30 = r3;
    r5 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::FlatWriteRam32((r4 + -18600), r5);
    r4 = 0x80480000u;
    r5 = MemoryInline::FlatRead32((r3 + 16));
    r3 = (r4 + -12924);
    MemoryInline::FlatWriteRam32((r31 + 8), r5);
    MemoryInline::FlatWriteRam32((r31 + 12), r5);
    MemoryInline::FlatWriteRam8((r31 + 112), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r31 + 16), r0);
    MemoryInline::FlatWriteRam8((r31 + 32), static_cast<uint8_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x80488614u>(&func_80488614)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80488614_BA4 = func_80488614_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80488614_BA4);
        r4 = static_cast<uint32_t>(regargs_result_80488614_BA4 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80488614u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r31 + 26);
    r4 = (r30 + 8);
    // inline leaf 0x8047B244 (13 guest instruction(s))
    r9 = MemoryInline::FlatRead8(r4);
    r8 = MemoryInline::FlatRead8((r4 + 1));
    r7 = MemoryInline::FlatRead8((r4 + 2));
    r6 = MemoryInline::FlatRead8((r4 + 3));
    r5 = MemoryInline::FlatRead8((r4 + 4));
    r0 = MemoryInline::FlatRead8((r4 + 5));
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 5), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8047B244
    r0 = MemoryInline::FlatRead32((r31 + 8));
}

loc_8047BFC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8047BFD8;
    }
}

loc_8047BFCC:
{
    r3 = (r31 + 26);
    ctx->lr = 0x8047BFD4u;
    if constexpr (KnownRegArgsCpuCall<0x8047C9E0u>(&func_8047C9E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_8047C9E0_1304 = func_8047C9E0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047C9E0_1304);
        r4 = static_cast<uint32_t>(regargs_result_8047C9E0_1304 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8047C9E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_8047C060;
}

loc_8047BFD8:
{
    r3 = 0x80740000u;
    r3 = (r3 + -17608);
    r4 = MemoryInline::FlatRead16((r3 + 1612));
}

loc_8047BFE8:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(30000))) {
        goto loc_8047BFFC;
    }
}

loc_8047BFEC:
{
    r5 = (r4 + 100);
    r3 = (r31 + 88);
    r4 = 517;
    ctx->lr = 0x8047BFFCu;
    if constexpr (KnownRegArgsCpuCall<0x8047B70Cu>(&func_8047B70C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8047B70C_1BC0 = func_8047B70C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8047B70C_1BC0);
        r4 = static_cast<uint32_t>(regargs_result_8047B70C_1BC0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x8047B70Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_8047BFFC:
{
    r31 = 0x80740000u;
    r4 = 0x80480000u;
    r31 = (r31 + -18600);
    r3 = (r31 + 26);
    r4 = (r4 + -12720);
    ctx->lr = 0x8047C014u;
    if constexpr (KnownRegArgsCpuCall<0x804858ACu>(&func_804858AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_804858AC_2082 = func_804858AC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804858AC_2082);
        r4 = static_cast<uint32_t>(regargs_result_804858AC_2082 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804858ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = (r3 & 255);
}

loc_8047C01C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8047C060;
    }
}

loc_8047C020:
{
    r3 = (r31 + 88);
    ctx->lr = 0x8047C028u;
    if constexpr (KnownRegArgsCpuCall<0x8047B72Cu>(&func_8047B72C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8047B72C_2880 = func_8047B72C_ra48_0_18_0(ctx, r3, r6);
        r3 = static_cast<uint32_t>(regargs_result_8047B72C_2880);
        r4 = static_cast<uint32_t>(regargs_result_8047B72C_2880 >> 32);
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
        InvokeDirectCpu<0x8047B72Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = 272;
    ctx->lr = 0x8047C030u;
    if constexpr (KnownRegArgsCpuCall<0x80477E60u>(&func_80477E60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80477E60_2C36 = func_80477E60_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80477E60_2C36);
        r4 = static_cast<uint32_t>(regargs_result_80477E60_2C36 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80477E60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_8047C034:
{
    r30 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8047C060;
    }
}

loc_8047C03C:
{
    r3 = (r3 + 8);
    r4 = (r31 + 26);
    // inline leaf 0x8047B244 (13 guest instruction(s))
    r9 = MemoryInline::FlatRead8(r4);
    r8 = MemoryInline::FlatRead8((r4 + 1));
    r7 = MemoryInline::FlatRead8((r4 + 2));
    r6 = MemoryInline::FlatRead8((r4 + 3));
    r5 = MemoryInline::FlatRead8((r4 + 4));
    r0 = MemoryInline::FlatRead8((r4 + 5));
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 5), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8047B244
    r3 = 0;
    r0 = 516;
    MemoryInline::FlatWriteRam8((r30 + 14), static_cast<uint8_t>(r3));
    r3 = r30;
    MemoryInline::FlatWriteRam16(r30, static_cast<uint16_t>(r0));
    ctx->lr = 0x8047C060u;
    if constexpr (KnownRegArgsCpuCall<0x8047B6F0u>(&func_8047B6F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_8047B6F0_34BA = func_8047B6F0_ra88_0_18_0(ctx, r3, r7);
        r3 = static_cast<uint32_t>(regargs_result_8047B6F0_34BA);
        r4 = static_cast<uint32_t>(regargs_result_8047B6F0_34BA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x8047B6F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_8047C060:
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8047BF64(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8047BF64_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8047BF64 func_8047BF64 preserves=true fpr_mask=0x00000000
