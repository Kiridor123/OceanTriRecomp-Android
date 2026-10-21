#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804DF880(CpuContext* ctx);
extern "C" uint64_t func_804DF880_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804DFE00(CpuContext* ctx);
extern "C" uint64_t func_804DFE00_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804E15A0(CpuContext* ctx);
extern "C" uint64_t func_804E15A0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804E00E0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    MKW_GUEST_ENTER(0x804E00E0u);
    goto loc_804E00E0;

loc_804E00E0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = MemoryInline::FlatRead8(r4);
    r5 = MemoryInline::FlatRead8((r4 + 1));
    r6 = (static_cast<int32_t>(r0) >> 4);
    r7 = (r0 & 15);
}

loc_804E0104:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(8))) {
        goto loc_804E0130;
    }
}

loc_804E0108:
{
    r0 = (r6 & 255);
}

loc_804E0110:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_804E0184;
    }
}

loc_804E0114:
{
}

loc_804E0118:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(11))) {
        goto loc_804E0194;
    }
}

loc_804E011C:
{
}

loc_804E0120:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_804E01A4;
    }
}

loc_804E0124:
{
}

loc_804E0128:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(14))) {
        goto loc_804E01E4;
    }
}

loc_804E012C:
{
    goto loc_804E024C;
}

loc_804E0130:
{
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(9));
    r4 = (r4_rot_4 & 130560);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 1020);
    r4 = (r3 + r4);
    r31 = (r4 + r0);
    r5 = MemoryInline::FlatRead32((r31 + 4404));
}

loc_804E0148:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804E024C;
    }
}

loc_804E014C:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(7));
    r0 = (r0_rot_4 & 32640);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 184));
}

loc_804E015C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(64))) {
        goto loc_804E016C;
    }
}

loc_804E0160:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r5 + 36), r0);
    goto loc_804E024C;
}

loc_804E016C:
{
    r4 = MemoryInline::FlatRead32((r3 + 48));
    r3 = r5;
    ctx->lr = 0x804E0178u;
    if constexpr (KnownRegArgsCpuCall<0x804E15A0u>(&func_804E15A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804E15A0_10B2 = func_804E15A0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804E15A0_10B2);
        r4 = static_cast<uint32_t>(regargs_result_804E15A0_10B2 >> 32);
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
        InvokeDirectCpu<0x804E15A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4404), r0);
    goto loc_804E024C;
}

loc_804E0184:
{
    r6 = MemoryInline::FlatRead8((r4 + 2));
    r4 = r7;
    ctx->lr = 0x804E0190u;
    if constexpr (KnownRegArgsCpuCall<0x804DFE00u>(&func_804DFE00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        const auto regargs_result_804DFE00_1549 = func_804DFE00_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804DFE00_1549);
        r4 = static_cast<uint32_t>(regargs_result_804DFE00_1549 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804DFE00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_804E024C;
}

loc_804E0194:
{
    r6 = MemoryInline::FlatRead8((r4 + 2));
    r4 = r7;
    ctx->lr = 0x804E01A0u;
    if constexpr (KnownRegArgsCpuCall<0x804DF880u>(&func_804DF880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804DF880_1C79 = func_804DF880_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804DF880_1C79);
        r4 = static_cast<uint32_t>(regargs_result_804DF880_1C79 >> 32);
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804DF880u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_804E024C;
}

loc_804E01A4:
{
}

loc_804E01A8:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(9))) {
        goto loc_804E01C0;
    }
}

loc_804E01AC:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & 1020);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r4 = (r3 + r4);
    MemoryInline::FlatWrite32((r4 + 52), r0);
    r4 = (r4 + 52);
    goto loc_804E01D0;
}

loc_804E01C0:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r4 = (r4_rot_2 & 1020);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r4 = (r3 + r4);
    MemoryInline::FlatWrite32((r4 + 52), r0);
    r4 = (r4 + 52);
}

loc_804E01D0:
{
    r3 = MemoryInline::FlatRead32(r4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & 65280);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_804E024C;
}

loc_804E01E4:
{
    r0 = MemoryInline::FlatRead8((r4 + 2));
    r4 = 1127219200;
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r6 = (r6_rot_1 & 1020);
    stackword3 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r0 = (r0_rot_1 & -128);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -1864));
    r5 = (r5 + r0);
    r3 = (r3 + r6);
    r5 = (r5 + -8192);
    r0 = MemoryInline::FlatRead32((r3 + 2216));
    r5 = (r5 ^ -2147483648);
    stackword4 = r5;
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    r0 = (r0 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1872));
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword4));
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    stackword6 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword5));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite32((r3 + 2280), r0);
}

loc_804E024C:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
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

extern "C" void func_804E00E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804E00E0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804E00E0 func_804E00E0 preserves=true fpr_mask=0x00000000
