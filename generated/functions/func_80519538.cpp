#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80516C7C(CpuContext* ctx);
extern "C" uint64_t func_80516C7C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80518268(CpuContext* ctx);
extern "C" uint64_t func_80518268_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80518510(CpuContext* ctx);
extern "C" uint64_t func_80518510_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8051BD68(CpuContext* ctx);
extern "C" uint64_t func_8051BD68_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80519538_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
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

    goto loc_80519538;

loc_80519538:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    ctx->lr = 0x8051955Cu;
    if constexpr (KnownRegArgsCpuCall<0x8051BD68u>(&func_8051BD68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8051BD68_821 = func_8051BD68_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8051BD68_821);
        r4 = static_cast<uint32_t>(regargs_result_8051BD68_821 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8051BD68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r30 = r3;
    // inline leaf 0x8051BDD0 (1 guest instruction(s))
    // end of inlined leaf 0x8051BDD0
    r29 = r3;
    r3 = r30;
    // inline leaf 0x8051BDDC (2 guest instruction(s))
    r3 = (r3 + 2056);
    // end of inlined leaf 0x8051BDDC
    r31 = r3;
    r3 = r30;
    // inline leaf 0x8051BDEC (2 guest instruction(s))
    r3 = (r3 + 2060);
    // end of inlined leaf 0x8051BDEC
    r5 = MemoryInline::FlatRead32(r31);
    r4 = 10;
    r0 = 0;
    r30 = r3;
    r31 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWrite32((r28 + 816), r4);
    MemoryInline::FlatWrite32((r28 + 804), r0);
    r0 = MemoryInline::FlatRead32((r31 + 8));
}

loc_805195A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80519668;
    }
}

loc_805195A4:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
}

loc_805195AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80519668;
    }
}

loc_805195B0:
{
    r3 = r28;
    ctx->lr = 0x805195B8u;
    if constexpr (KnownRegArgsCpuCall<0x80518268u>(&func_80518268)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80518268_F17 = func_80518268_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80518268_F17);
        r4 = static_cast<uint32_t>(regargs_result_80518268_F17 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80518268u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_805195BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805195C4;
    }
}

loc_805195C0:
{
    goto loc_8051966C;
}

loc_805195C4:
{
    r3 = r28;
    ctx->lr = 0x805195CCu;
    if constexpr (KnownRegArgsCpuCall<0x80518510u>(&func_80518510)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80518510_162F = func_80518510_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80518510_162F);
        r4 = static_cast<uint32_t>(regargs_result_80518510_162F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80518510u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_805195D0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805195DC;
    }
}

loc_805195D4:
{
    r3 = 1;
    goto loc_8051966C;
}

loc_805195DC:
{
    r6 = MemoryInline::FlatRead32((r29 + 2000));
    r3 = r29;
    r4 = r30;
    r5 = r31;
    ctx->lr = 0x805195F0u;
    if constexpr (KnownRegArgsCpuCall<0x80516C7Cu>(&func_80516C7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80516C7C_1DA7 = func_80516C7C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80516C7C_1DA7);
        r4 = static_cast<uint32_t>(regargs_result_80516C7C_1DA7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80516C7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_805195F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80519668;
    }
}

loc_805195F8:
{
}

loc_805195FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1004))) {
        goto loc_80519620;
    }
}

loc_80519600:
{
    r3 = r29;
    // inline leaf 0x80514D18 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2004));
    // end of inlined leaf 0x80514D18
}

loc_8051960C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80519618;
    }
}

loc_80519610:
{
    r0 = 16;
    MemoryInline::FlatWrite32((r28 + 816), r0);
}

loc_80519618:
{
    r3 = 1;
    goto loc_8051966C;
}

loc_80519620:
{
}

loc_80519624:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1005))) {
        goto loc_80519648;
    }
}

loc_80519628:
{
    r3 = r29;
    // inline leaf 0x80514D18 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2004));
    // end of inlined leaf 0x80514D18
}

loc_80519634:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80519640;
    }
}

loc_80519638:
{
    r0 = 17;
    MemoryInline::FlatWrite32((r28 + 816), r0);
}

loc_80519640:
{
    r3 = 1;
    goto loc_8051966C;
}

loc_80519648:
{
    r3 = r29;
    // inline leaf 0x80514D18 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2004));
    // end of inlined leaf 0x80514D18
}

loc_80519654:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80519660;
    }
}

loc_80519658:
{
    r0 = 14;
    MemoryInline::FlatWrite32((r28 + 816), r0);
}

loc_80519660:
{
    r3 = 1;
    goto loc_8051966C;
}

loc_80519668:
{
    r3 = 0;
}

loc_8051966C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80519538(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80519538_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x03FFFFFF gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80519538 func_80519538 preserves=true fpr_mask=0x00000000
