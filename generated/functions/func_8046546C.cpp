#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804651B8(CpuContext* ctx);
extern "C" uint64_t func_804651B8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8046546C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t stackword2 = 0;
    uint32_t stackword3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f31 = ctx->fpr[31];

    MKW_GUEST_ENTER(0x8046546Cu);
    goto loc_8046546C;

loc_8046546C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f31.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r0 = 1048576;
    r4 = 0;
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r3 = MemoryInline::FlatRead32((r1 + 12));
}

loc_80465494:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_804654F0;
    }
}

loc_80465498:
{
    r0 = (r5 & 2147483647);
    r0 = (r0 | r3);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804654BC;
    }
}

loc_804654A4:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -3720));
    r0 = 33;
    f0.d = MemoryInline::FlatReadFloat64((r13 + -16368));
    MemoryInline::FlatWrite32((r13 + -16408), r0);
    f1.d = (f1.d / f0.d);
    goto loc_8046556C;
}

loc_804654BC:
{
}

loc_804654C0:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_804654DC;
    }
}

loc_804654C4:
{
    f1.d = (f1.d - f1.d);
    f0.d = MemoryInline::FlatReadFloat64((r13 + -16368));
    r0 = 33;
    MemoryInline::FlatWrite32((r13 + -16408), r0);
    f1.d = (f1.d / f0.d);
    goto loc_8046556C;
}

loc_804654DC:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -3712));
    r4 = -54;
    f1.d = (f1.d * f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r5 = MemoryInline::FlatRead32((r1 + 8));
}

loc_804654F0:
{
    r0 = 2146435072;
}

loc_804654F8:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_80465504;
    }
}

loc_804654FC:
{
    f1.d = (f1.d + f1.d);
    goto loc_8046556C;
}

loc_80465504:
{
    r3 = (static_cast<int32_t>(r5) >> 20);
    r0 = 1127219200;
    r3 = (r4 + r3);
    stackword2 = r0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r4 = (r3 + -1023);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -3680));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r4 + r3);
    r0 = (r0 ^ -2147483648);
    stackword3 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (1023 - r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword3));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
    r0 = (r0_rot_1 & -1048576);
    r0_mrot_1 = (r5 & 1048575);
    r0_mdest_1 = (r0 & -1048576);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f31.d = (f0.d - f1.d);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    if constexpr (KnownRegArgsCpuCall<0x804651B8u>(&func_804651B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_804651B8_1119 = func_804651B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804651B8_1119);
        r4 = static_cast<uint32_t>(regargs_result_804651B8_1119 >> 32);
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
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804651B8u>(ctx);
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
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    f0.d = MemoryInline::FlatReadFloat64((r2 + -3696));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -3704));
    f3.d = (f0.d * f1.d);
    f0.d = MemoryInline::FlatReadFloat64((r2 + -3688));
    f1.d = (f2.d * f31.d);
    f0.d = (f0.d * f31.d);
    f1.d = (f1.d + f3.d);
    f1.d = (f1.d + f0.d);
}

loc_8046556C:
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8046546C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046546C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FF gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x80001FFF fpr_write=0x80001FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8046546C func_8046546C preserves=true fpr_mask=0x00000000
