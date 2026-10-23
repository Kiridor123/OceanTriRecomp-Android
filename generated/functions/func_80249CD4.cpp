#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026A288(CpuContext* ctx);
extern "C" uint64_t func_8026A288_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_8027714C(CpuContext* ctx);
extern "C" uint32_t func_8027714C_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80277204(CpuContext* ctx);
extern "C" uint64_t func_80277204_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80249CD4_ra38_1f8_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

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
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_80249CD4;

loc_80249CD4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 6), static_cast<uint8_t>(r0));
    r3 = r28;
    r4 = 1061;
    r5 = 4;
    r6 = 0;
    ctx->lr = 0x80249CF0u;
    if constexpr (KnownRegArgsCpuCall<0x8026A288u>(&func_8026A288)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8026A288_772 = func_8026A288_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A288_772);
        r4 = static_cast<uint32_t>(regargs_result_8026A288_772 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8026A288u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead32((r28 + 88));
    MemoryInline::FlatWrite32((r28 + 168), r0);
}

loc_80249E00:
{
    r0 = MemoryInline::FlatRead8((r28 + 2));
}

loc_80249E08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80249E28;
    }
}

loc_80249E0C:
{
}

loc_80249E10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80249E40;
    }
}

loc_80249E14:
{
}

loc_80249E18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80249E74;
    }
}

loc_80249E1C:
{
}

loc_80249E20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80249EA8;
    }
}

loc_80249E24:
{
    goto loc_8024A28C;
}

loc_80249E28:
{
}

loc_80249E2C:
{
    if ((static_cast<uint32_t>(r29) > static_cast<uint32_t>(1))) {
        goto loc_8024A28C;
    }
}

loc_80249E30:
{
    r3 = r28;
    r4 = 38;
    ctx->lr = 0x80249E3Cu;
    if constexpr (KnownRegArgsCpuCall<0x80277204u>(&func_80277204)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_80277204_10F9 = func_80277204_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80277204_10F9);
        r4 = static_cast<uint32_t>(regargs_result_80277204_10F9 >> 32);
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
        InvokeDirectCpu<0x80277204u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    goto loc_8024A28C;
}

loc_80249E40:
{
}

loc_80249E44:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80249E5C;
    }
}

loc_80249E48:
{
}

loc_80249E4C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(1))) {
        goto loc_80249E5C;
    }
}

loc_80249E50:
{
    r0 = (r29 + -6);
}

loc_80249E58:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8024A28C;
    }
}

loc_80249E5C:
{
    r3 = r28;
    r4 = 0x805D0000u;
    r4 = (r4 + -26408);
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8027714Cu>(&func_8027714C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8027714C_16B6 = func_8027714C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8027714C_16B6;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8027714Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    goto loc_8024A28C;
}

loc_80249E74:
{
}

loc_80249E78:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80249E90;
    }
}

loc_80249E7C:
{
}

loc_80249E80:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(1))) {
        goto loc_80249E90;
    }
}

loc_80249E84:
{
    r0 = (r29 + -6);
}

loc_80249E8C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8024A28C;
    }
}

loc_80249E90:
{
    r3 = r28;
    r4 = 0x805D0000u;
    r4 = (r4 + -19148);
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8027714Cu>(&func_8027714C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8027714C_1BC6 = func_8027714C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8027714C_1BC6;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8027714Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    goto loc_8024A28C;
}

loc_80249EA8:
{
}

loc_80249EAC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80249EC0;
    }
}

loc_80249EB0:
{
}

loc_80249EB4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(1))) {
        goto loc_80249EC0;
    }
}

loc_80249EB8:
{
}

loc_80249EBC:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(8))) {
        goto loc_8024A28C;
    }
}

loc_80249EC0:
{
}

loc_80249EC4:
{
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(1))) {
        goto loc_8024A28C;
    }
}

loc_80249EC8:
{
    r0 = (r31 & 255);
}

loc_80249ED0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80249F0C;
    }
}

loc_80249ED4:
{
    r3 = r28;
}

loc_80249EDC:
{
    r0 = 2;
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(8))) {
        goto loc_80249EE8;
    }
}

loc_80249EE4:
{
    r0 = (r29 & 255);
}

loc_80249EE8:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r0 = (r30 + r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4 = 0x805C0000u;
    r4 = (r4 + 20952);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8027714Cu>(&func_8027714C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8027714C_240E = func_8027714C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8027714C_240E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8027714Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    goto loc_8024A28C;
}

loc_80249F0C:
{
    r3 = r28;
    r4 = 0x805F0000u;
    r4 = (r4 + -16736);
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8027714Cu>(&func_8027714C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8027714C_274C = func_8027714C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8027714C_274C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8027714Cu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8024A28C:
{
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80249CD4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80249CD4_ra38_1f8_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xF0003C3F gpr_write=0xF0001FFB gpr_return=0x00000018 fpr_read=0xF0003FF8 fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80249CD4 func_80249CD4 preserves=true fpr_mask=0x00000000
