#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011ED9C(CpuContext* ctx);
extern "C" uint64_t func_8011ED9C_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_801266F4(CpuContext* ctx);
extern "C" uint64_t func_801266F4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80133830(CpuContext* ctx);
extern "C" uint64_t func_80133830_ra48_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8013383C(CpuContext* ctx);
extern "C" uint64_t func_8013383C_ra48_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80133848(CpuContext* ctx);
extern "C" uint64_t func_80133848_ra48_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80133854(CpuContext* ctx);
extern "C" uint64_t func_80133854_ra48_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8013398C(CpuContext* ctx);
extern "C" uint64_t func_8013398C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8011F020_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8011F020u);
    goto loc_8011F020;

loc_8011F020:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r27 = r4;
    r28 = r6;
    r29 = r7;
    r30 = r8;
    r4 = (r5 & 255);
}

loc_8011F050:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(8))) {
        goto loc_8011F074;
    }
}

loc_8011F054:
{
    r31 = (r4 + -9);
}

loc_8011F05C:
{
    if ((static_cast<uint32_t>(r31) <= static_cast<uint32_t>(3))) {
        goto loc_8011F0D4;
    }
}

loc_8011F060:
{
}

loc_8011F064:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(13))) {
        goto loc_8011F12C;
    }
}

loc_8011F068:
{
}

loc_8011F06C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(14))) {
        goto loc_8011F148;
    }
}

loc_8011F070:
{
    goto loc_8011F198;
}

loc_8011F074:
{
    ctx->lr = 0x8011F078u;
    if constexpr (KnownRegArgsCpuCall<0x801266F4u>(&func_801266F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_801266F4_DDE = func_801266F4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801266F4_DDE);
        r4 = static_cast<uint32_t>(regargs_result_801266F4_DDE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x801266F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r31 = r3;
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_8011F084:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(-1))) {
        goto loc_8011F198;
    }
}

loc_8011F088:
{
    r3 = r26;
    r0 = (r28 + r29);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = (r30 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8011F09C:
{
    r6 = 8;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011F0A8;
    }
}

loc_8011F0A4:
{
    r6 = 4;
}

loc_8011F0A8:
{
    ctx->lr = 0x8011F0ACu;
    if constexpr (KnownRegArgsCpuCall<0x8011ED9Cu>(&func_8011ED9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8011ED9C_139F = func_8011ED9C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8011ED9C_139F);
        r4 = static_cast<uint32_t>(regargs_result_8011ED9C_139F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8011ED9Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r4 = (r26 + r0);
    r0 = (r27 & 255);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r4 + 2010));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite16((r4 + 2010), static_cast<uint16_t>(r0));
    goto loc_8011F198;
}

loc_8011F0D4:
{
    // inline leaf 0x8012ECA0 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2207));
    r4 = (r3 + -2);
    r3 = 1;
    r0 = (1 - r4);
    r3 = (r3 | ~r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8012ECA0
}

loc_8011F0DC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8011F114;
    }
}

loc_8011F0E0:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -28304));
    r0 = (r0 ^ -2147483648);
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28296));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r29 = fctiwzword0;
}

loc_8011F114:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = (r26 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 2050));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r29);
    MemoryInline::FlatWrite16((r3 + 2050), static_cast<uint16_t>(r0));
    goto loc_8011F198;
}

loc_8011F12C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
}

loc_8011F134:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(150))) {
        goto loc_8011F140;
    }
}

loc_8011F138:
{
    // inline leaf 0x801339EC (9 guest instruction(s))
}

loc_inl2_0x801339EC:
{
    r0 = MemoryInline::FlatRead8((r3 + 3));
}

loc_inl2_0x801339F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(40))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x801339F8:
{
    r0 = 7200;
    MemoryInline::FlatWrite16((r3 + 2380), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 2798));
    r0 = (r0 | 64);
    MemoryInline::FlatWrite8((r3 + 2798), static_cast<uint8_t>(r0));
    goto loc_inl2_cont_801339EC;
}

loc_inl2_return:
{
}

loc_inl2_cont_801339EC:
{
    // end of inlined leaf 0x801339EC
    goto loc_8011F198;
}

loc_8011F140:
{
    ctx->lr = 0x8011F144u;
    if constexpr (KnownRegArgsCpuCall<0x8013398Cu>(&func_8013398C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8013398C_2448 = func_8013398C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013398C_2448);
        r4 = static_cast<uint32_t>(regargs_result_8013398C_2448 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8013398Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    goto loc_8011F198;
}

loc_8011F148:
{
    r4 = 2;
    // inline leaf 0x8011F294 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 2062));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite16((r3 + 2062), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8011F294
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
}

loc_8011F158:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(200))) {
        goto loc_8011F168;
    }
}

loc_8011F15C:
{
    r3 = r26;
    ctx->lr = 0x8011F164u;
    if constexpr (KnownRegArgsCpuCall<0x80133854u>(&func_80133854)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80133854_2A06 = func_80133854_ra48_0_18_0(ctx, r3, r6);
        r3 = static_cast<uint32_t>(regargs_result_80133854_2A06);
        r4 = static_cast<uint32_t>(regargs_result_80133854_2A06 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80133854u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    goto loc_8011F198;
}

loc_8011F168:
{
}

loc_8011F16C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(180))) {
        goto loc_8011F17C;
    }
}

loc_8011F170:
{
    r3 = r26;
    ctx->lr = 0x8011F178u;
    if constexpr (KnownRegArgsCpuCall<0x8013383Cu>(&func_8013383C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8013383C_2E90 = func_8013383C_ra48_0_18_0(ctx, r3, r6);
        r3 = static_cast<uint32_t>(regargs_result_8013383C_2E90);
        r4 = static_cast<uint32_t>(regargs_result_8013383C_2E90 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8013383Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    goto loc_8011F198;
}

loc_8011F17C:
{
}

loc_8011F180:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(150))) {
        goto loc_8011F190;
    }
}

loc_8011F184:
{
    r3 = r26;
    ctx->lr = 0x8011F18Cu;
    if constexpr (KnownRegArgsCpuCall<0x80133848u>(&func_80133848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80133848_331A = func_80133848_ra48_0_18_0(ctx, r3, r6);
        r3 = static_cast<uint32_t>(regargs_result_80133848_331A);
        r4 = static_cast<uint32_t>(regargs_result_80133848_331A >> 32);
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
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80133848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    goto loc_8011F198;
}

loc_8011F190:
{
    r3 = r26;
    ctx->lr = 0x8011F198u;
    if constexpr (KnownRegArgsCpuCall<0x80133830u>(&func_80133830)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80133830_371B = func_80133830_ra48_0_18_0(ctx, r3, r6);
        r3 = static_cast<uint32_t>(regargs_result_80133830_371B);
        r4 = static_cast<uint32_t>(regargs_result_80133830_371B >> 32);
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
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80133830u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8011F198:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8011F020(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8011F020_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FF gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8011F020 func_8011F020 preserves=true fpr_mask=0x00000000
