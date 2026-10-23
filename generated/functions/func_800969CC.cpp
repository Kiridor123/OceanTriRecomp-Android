#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80091F18(CpuContext* ctx);
extern "C" uint32_t func_80091F18_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80094600(CpuContext* ctx);
extern "C" uint64_t func_80094600_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800969CC_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;

    goto loc_800969CC;

loc_800969CC:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    ctx->lr = 0x80096A04u;
    if constexpr (KnownRegArgsCpuCall<0x80094600u>(&func_80094600)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80094600_952 = func_80094600_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80094600_952);
        r4 = static_cast<uint32_t>(regargs_result_80094600_952 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80094600u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_80096A08:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(1))) {
        goto loc_80096A20;
    }
}

loc_80096A0C:
{
}

loc_80096A10:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(2))) {
        goto loc_80096A28;
    }
}

loc_80096A14:
{
}

loc_80096A18:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(3))) {
        goto loc_80096A30;
    }
}

loc_80096A1C:
{
    goto loc_80096A38;
}

loc_80096A20:
{
    r29 = (r3 + 10);
    goto loc_80096A5C;
}

loc_80096A28:
{
    r29 = (r3 + 32);
    goto loc_80096A5C;
}

loc_80096A30:
{
    r29 = (r3 + 47);
    goto loc_80096A5C;
}

loc_80096A38:
{
    r3 = 0x80590000u;
    r3 = (r3 + 5432);
    r4 = 1910;
    r5 = 0x80590000u;
    r5 = (r5 + 5940);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80096A54u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    r3 = 0;
    goto loc_80096BF4;
}

loc_80096A5C:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80096A64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80096A70;
    }
}

loc_80096A68:
{
    r3 = 0;
    goto loc_80096BF4;
}

loc_80096A70:
{
    r3 = r29;
    r4 = (r1 + 16);
    ctx->lr = 0x80096A7Cu;
    if constexpr (KnownRegArgsCpuCall<0x80091F18u>(&func_80091F18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80091F18_1356 = func_80091F18_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80091F18_1356;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80091F18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r29 + 5);
    r4 = (r1 + 12);
    ctx->lr = 0x80096A88u;
    if constexpr (KnownRegArgsCpuCall<0x80091F18u>(&func_80091F18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80091F18_15D3 = func_80091F18_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80091F18_15D3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80091F18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r29 + 10);
    r4 = (r1 + 8);
    ctx->lr = 0x80096A94u;
    if constexpr (KnownRegArgsCpuCall<0x80091F18u>(&func_80091F18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80091F18_1850 = func_80091F18_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80091F18_1850;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80091F18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
    r0 = (r0_rot_1 & 3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r4 = (r4_rot_1 & -16);
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
    r3 = (r3_rot_1 & 3);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
    r0 = (r0_rot_2 & 3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r0 = (r3 | r0);
    r3 = (r4 | r0);
}

loc_80096AC0:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80096AD0;
    }
}

loc_80096AC4:
{
    r0 = (r3 + -17);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
}

loc_80096AD0:
{
}

loc_80096AD4:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80096BF0;
    }
}

loc_80096AD8:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r0 & 2047);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_4 & -2097152);
    r0 = (static_cast<int32_t>(r0) >> 21);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -31592));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31600));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r30, f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r0 & 2047);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_5 & -2097152);
    r0 = (static_cast<int32_t>(r0) >> 21);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r30 + 4), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r0 & 2047);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_6 & -2097152);
    r0 = (static_cast<int32_t>(r0) >> 21);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r30 + 8), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31632));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r30 + 12), f1.d);
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_7 & 2047);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_8 & -2097152);
    r0 = (static_cast<int32_t>(r0) >> 21);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r30 + 16), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_9 & 2047);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_10 & -2097152);
    r0 = (static_cast<int32_t>(r0) >> 21);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r30 + 20), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_11 & 2047);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_12 & -2097152);
    r0 = (static_cast<int32_t>(r0) >> 21);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r30 + 24), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r30 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r30 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r30 + 36), f1.d);
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31628));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r30 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r30 + 44), f1.d);
    }
}

loc_80096BF0:
{
    r3 = 1;
}

loc_80096BF4:
{
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
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800969CC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800969CC_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FF gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800969CC func_800969CC preserves=true fpr_mask=0x00000000
