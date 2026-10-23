#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050D7C(CpuContext* ctx);
extern "C" uint64_t func_80050D7C_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_803AA480(CpuContext* ctx);
extern "C" uint32_t func_803AA480_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B890C(CpuContext* ctx);
extern "C" uint32_t func_803B890C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8032CA3C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
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
    uint32_t ctr = ctx->ctr;

    goto loc_8032CA3C;

loc_8032CA3C:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r29 = r3;
    r30 = r4;
    r31 = (r3 + 808);
}

loc_8032CA64:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8032CA70;
    }
}

loc_8032CA68:
{
    r3 = 0;
    goto loc_8032CC74;
}

loc_8032CA70:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_8032CA78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8032CA84;
    }
}

loc_8032CA7C:
{
    r3 = 0;
    goto loc_8032CC74;
}

loc_8032CA84:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8032CA90:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8032CA9C;
    }
}

loc_8032CA94:
{
    r3 = 0;
    goto loc_8032CC74;
}

loc_8032CA9C:
{
    r3 = 1;
    ctx->lr = 0x8032CAA4u;
    if constexpr (KnownRegArgsCpuCall<0x803AA480u>(&func_803AA480)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803AA480_A5B = func_803AA480_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803AA480_A5B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803AA480u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8032CAA8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8032CAB4;
    }
}

loc_8032CAAC:
{
    r3 = 0;
    goto loc_8032CC74;
}

loc_8032CAB4:
{
    ctx->lr = 0x8032CAB8u;
    if constexpr (KnownRegArgsCpuCall<0x803B890Cu>(&func_803B890C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B890C_DC7 = func_803B890C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B890C_DC7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B890Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8032CABC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8032CAC8;
    }
}

loc_8032CAC0:
{
    r3 = 0;
    goto loc_8032CC74;
}

loc_8032CAC8:
{
    r6 = 0;
    r5 = 0;
    r4 = MemoryInline::FlatRead32((r30 + 944));
    r3 = 1;
    r0 = 4;
    ctr = r0;
}

loc_8032CAE0:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
    r0 = (r4 & r0);
}

loc_8032CAEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8032CAF4;
    }
}

loc_8032CAF0:
{
    r6 = (r6 + 1);
}

loc_8032CAF4:
{
    r5 = (r5 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
    r0 = (r4 & r0);
}

loc_8032CB04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8032CB0C;
    }
}

loc_8032CB08:
{
    r6 = (r6 + 1);
}

loc_8032CB0C:
{
    r5 = (r5 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
    r0 = (r4 & r0);
}

loc_8032CB1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8032CB24;
    }
}

loc_8032CB20:
{
    r6 = (r6 + 1);
}

loc_8032CB24:
{
    r5 = (r5 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
    r0 = (r4 & r0);
}

loc_8032CB34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8032CB3C;
    }
}

loc_8032CB38:
{
    r6 = (r6 + 1);
}

loc_8032CB3C:
{
    r5 = (r5 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
    r0 = (r4 & r0);
}

loc_8032CB4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8032CB54;
    }
}

loc_8032CB50:
{
    r6 = (r6 + 1);
}

loc_8032CB54:
{
    r5 = (r5 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
    r0 = (r4 & r0);
}

loc_8032CB64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8032CB6C;
    }
}

loc_8032CB68:
{
    r6 = (r6 + 1);
}

loc_8032CB6C:
{
    r5 = (r5 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
    r0 = (r4 & r0);
}

loc_8032CB7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8032CB84;
    }
}

loc_8032CB80:
{
    r6 = (r6 + 1);
}

loc_8032CB84:
{
    r5 = (r5 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
    r0 = (r4 & r0);
}

loc_8032CB94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8032CB9C;
    }
}

loc_8032CB98:
{
    r6 = (r6 + 1);
}

loc_8032CB9C:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8032CAE0;
    }
}

loc_8032CBA4:
{
}

loc_8032CBA8:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(3))) {
        goto loc_8032CBB4;
    }
}

loc_8032CBAC:
{
    r3 = 0;
    goto loc_8032CC74;
}

loc_8032CBB4:
{
    r3 = (r1 + 52);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 40);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -10648));
    f2.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -10640));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 28);
    r4 = (r29 + 392);
    r5 = (r30 + 60);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 52);
    r4 = (r1 + 28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 52);
    r4 = (r1 + 12);
    r5 = (r1 + 8);
    ctx->lr = 0x8032CC08u;
    if constexpr (KnownRegArgsCpuCall<0x80050D7Cu>(&func_80050D7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_80050D7C_20F8 = func_80050D7C_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050D7C_20F8);
        r4 = static_cast<uint32_t>(regargs_result_80050D7C_20F8 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80050D7Cu>(ctx);
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
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r30 + 88));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r0 - r4);
    r4 = (r0 & 65535);
    ctx->lr = 0x8032CC20u;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
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
    ctr = ctx->ctr;
    r3 = (r1 + 16);
    r4 = (r30 + 60);
    r5 = (r29 + 392);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 52);
    r4 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 52);
    r4 = (r1 + 12);
    r5 = (r1 + 8);
    ctx->lr = 0x8032CC4Cu;
    if constexpr (KnownRegArgsCpuCall<0x80050D7Cu>(&func_80050D7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_80050D7C_2CE0 = func_80050D7C_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050D7C_2CE0);
        r4 = static_cast<uint32_t>(regargs_result_80050D7C_2CE0 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80050D7Cu>(ctx);
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
        ctr = ctx->ctr;
    }
    r3 = MemoryInline::FlatRead32((r30 + 88));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r0 - r3);
    MemoryInline::FlatWrite32((r29 + 448), r0);
    r0 = 3;
    MemoryInline::FlatWrite32((r31 + 12), r0);
    r3 = r30;
    r4 = MemoryInline::FlatRead8((r29 + 2));
    // inline leaf 0x8027D454 (7 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 940));
    r5 = 1;
    r0 = (r4 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 940), r0);
    // end of inlined leaf 0x8027D454
    r3 = 1;
}

loc_8032CC74:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8032CA3C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8032CA3C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8032CA3C func_8032CA3C preserves=true fpr_mask=0x00000000
