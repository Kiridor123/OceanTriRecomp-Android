#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045C0D0(CpuContext* ctx);
extern "C" uint64_t func_8045C0D0_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_80467F6C(CpuContext* ctx);
extern "C" uint32_t func_80467F6C_ra0_6_8_0(CpuContext*, double, double);

extern "C" uint64_t func_80468238_ra38_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x80468238u);
    goto loc_80468238;

loc_80468238:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f31.d);
    f31.d = f1.d;
    r31 = r3;
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    if constexpr (KnownRegArgsCpuCall<0x8045C0D0u>(&func_8045C0D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8045C0D0_6B4 = func_8045C0D0_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8045C0D0_6B4);
        r4 = static_cast<uint32_t>(regargs_result_8045C0D0_6B4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045C0D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_80468260:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(2))) {
        goto loc_80468270;
    }
}

loc_80468264:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -2976));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_8046826C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80468278;
    }
}

loc_80468270:
{
    f1.d = f31.d;
    goto loc_8046838C;
}

loc_80468278:
{
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(12));
    r4 = (r4_rot_0 & 2047);
}

loc_80468284:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804682D0;
    }
}

loc_80468288:
{
    r0 = (r5 & 2147483647);
    r0 = (r3 | r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8046829C;
    }
}

loc_80468294:
{
    f1.d = f31.d;
    goto loc_8046838C;
}

loc_8046829C:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -2968));
    r3 = -65536;
    r0 = (r3 + 15536);
    f31.d = (f31.d * f0.d);
}

loc_804682B0:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f31.d);
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(12));
    r3 = (r3_rot_1 & 2047);
    r4 = (r3 + -54);
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(r0))) {
        goto loc_804682D0;
    }
}

loc_804682C4:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -2960));
    f1.d = (f0.d * f31.d);
    goto loc_8046838C;
}

loc_804682D0:
{
}

loc_804682D4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2047))) {
        goto loc_804682E0;
    }
}

loc_804682D8:
{
    f1.d = (f31.d + f31.d);
    goto loc_8046838C;
}

loc_804682E0:
{
    r4 = (r4 + r31);
}

loc_804682E8:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(2046))) {
        goto loc_80468304;
    }
}

loc_804682EC:
{
    f2.d = f31.d;
    f1.d = MemoryInline::FlatReadFloat64((r2 + -2952));
    if constexpr (KnownRegArgsCpuCall<0x80467F6Cu>(&func_80467F6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80467F6C_11A7 = func_80467F6C_ra0_6_8_0(ctx, f1.d, f2.d);
        r3 = regargs_result_80467F6C_11A7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x80467F6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
    }
    f0.d = MemoryInline::FlatReadFloat64((r2 + -2952));
    f1.d = (f0.d * f1.d);
    goto loc_8046838C;
}

loc_80468304:
{
}

loc_80468308:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_80468324;
    }
}

loc_8046830C:
{
    r3 = (r5 & -2146435073);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(20));
    r0 = (r0_rot_1 & -1048576);
    r0 = (r3 | r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    goto loc_8046838C;
}

loc_80468324:
{
}

loc_80468328:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(-54))) {
        goto loc_8046836C;
    }
}

loc_8046832C:
{
    r3 = 65536;
    r0 = (r3 + -15536);
}

loc_80468338:
{
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(r0))) {
        goto loc_80468354;
    }
}

loc_8046833C:
{
    f2.d = f31.d;
    f1.d = MemoryInline::FlatReadFloat64((r2 + -2952));
    if constexpr (KnownRegArgsCpuCall<0x80467F6Cu>(&func_80467F6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80467F6C_17DC = func_80467F6C_ra0_6_8_0(ctx, f1.d, f2.d);
        r3 = regargs_result_80467F6C_17DC;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x80467F6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
    }
    f0.d = MemoryInline::FlatReadFloat64((r2 + -2952));
    f1.d = (f0.d * f1.d);
    goto loc_8046838C;
}

loc_80468354:
{
    f2.d = f31.d;
    f1.d = MemoryInline::FlatReadFloat64((r2 + -2960));
    if constexpr (KnownRegArgsCpuCall<0x80467F6Cu>(&func_80467F6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80467F6C_1B19 = func_80467F6C_ra0_6_8_0(ctx, f1.d, f2.d);
        r3 = regargs_result_80467F6C_1B19;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x80467F6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
    }
    f0.d = MemoryInline::FlatReadFloat64((r2 + -2960));
    f1.d = (f0.d * f1.d);
    goto loc_8046838C;
}

loc_8046836C:
{
    r0 = (r4 + 54);
    r3 = (r5 & -2146435073);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
    r0 = (r0_rot_2 & -1048576);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -2944));
    r0 = (r3 | r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = (f1.d * f0.d);
}

loc_8046838C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80468238(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80468238_ra38_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x80000007 fpr_write=0x80000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80468238 func_80468238 preserves=true fpr_mask=0x00000000
