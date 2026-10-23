#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804579F8(CpuContext* ctx);
extern "C" uint64_t func_804579F8_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80459938(CpuContext* ctx);
extern "C" uint64_t func_80459938_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80459A14(CpuContext* ctx);
extern "C" uint32_t func_80459A14_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80459D88(CpuContext* ctx);
extern "C" uint64_t func_80459D88_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8045C0B8(CpuContext* ctx);
extern "C" uint32_t func_8045C0B8_ra0_2_8_0(CpuContext*, double);
extern "C" void func_8045C0D0(CpuContext* ctx);
extern "C" uint64_t func_8045C0D0_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_804681B0(CpuContext* ctx);
extern "C" uint32_t func_804681B0_ra38_2_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80468238(CpuContext* ctx);
extern "C" uint64_t func_80468238_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);

extern "C" MkwStateFreeResult2 func_8045C0B8_statefree(uint32_t, PPC_FPR);

extern "C" uint64_t func_8045A764_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

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
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8045A764;

loc_8045A764:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 136), f31.d);
    f31.d = f1.d;
    r30 = r3;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8045C0B8u) && KnownTranslatedCpuCall<0x8045C0B8u>::kAvailable && !KnownTranslatedCpuCall<0x8045C0B8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8045C0B8u>()) {
        const auto state_free_result_8045C0B8_B6F = func_8045C0B8_statefree(r1, f1);
        r1 = static_cast<uint32_t>(state_free_result_8045C0B8_B6F[0]);
        r3 = static_cast<uint32_t>(state_free_result_8045C0B8_B6F[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8045C0B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    f0.d = MemoryInline::FlatReadFloat64((r2 + -4344));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_8045A79C:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8045A7C4;
    }
}

loc_8045A7A8:
{
    r3 = 0;
    r0 = 1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r30 + 4), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r3));
    goto loc_8045A8A8;
}

loc_8045A7C4:
{
    f1.d = f31.d;
    if constexpr (KnownRegArgsCpuCall<0x8045C0D0u>(&func_8045C0D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8045C0D0_140B = func_8045C0D0_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8045C0D0_140B);
        r4 = static_cast<uint32_t>(regargs_result_8045C0D0_140B >> 32);
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

loc_8045A7D0:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(2))) {
        goto loc_8045A808;
    }
}

loc_8045A7D4:
{
    f1.d = f31.d;
    r3 = 0;
    r0 = 1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r30 + 4), static_cast<uint8_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x8045C0D0u>(&func_8045C0D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8045C0D0_18C3 = func_8045C0D0_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8045C0D0_18C3);
        r4 = static_cast<uint32_t>(regargs_result_8045C0D0_18C3 >> 32);
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

loc_8045A7F4:
{
    r0 = 73;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8045A800;
    }
}

loc_8045A7FC:
{
    r0 = 78;
}

loc_8045A800:
{
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    goto loc_8045A8A8;
}

loc_8045A808:
{
}

loc_8045A80C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8045A814;
    }
}

loc_8045A810:
{
    f31.d = (-(f31.d));
}

loc_8045A814:
{
    f1.d = f31.d;
    r3 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x804681B0u>(&func_804681B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_804681B0_1E4D = func_804681B0_ra38_2_10_0(ctx, r3, r4, r5, f1.d);
        r4 = regargs_result_804681B0_1E4D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
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
        InvokeDirectCpu<0x804681B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f1.d);
    f31.d = f1.d;
    r4 = MemoryInline::FlatRead32((r1 + 20));
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r4 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8045A838:
{
    r0 = (r0 & ~r4);
    r3 = (r3 | 1048576);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r4 = (32 - r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8045A860;
    }
}

loc_8045A84C:
{
    r0 = (r3 + -1);
    r0 = (r0 & ~r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3 = (32 - r0);
    r4 = (r3 + 32);
}

loc_8045A860:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r29 = (53 - r4);
    r3 = (r1 + 24);
    r4 = (r0 - r29);
    ctx->lr = 0x8045A874u;
    if constexpr (KnownRegArgsCpuCall<0x80459D88u>(&func_80459D88)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80459D88_25AF = func_80459D88_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80459D88_25AF);
        r4 = static_cast<uint32_t>(regargs_result_80459D88_25AF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80459D88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    f1.d = f31.d;
    r3 = r29;
    ctx->lr = 0x8045A880u;
    if constexpr (KnownRegArgsCpuCall<0x80468238u>(&func_80468238)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80468238_2B16 = func_80468238_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80468238_2B16);
        r4 = static_cast<uint32_t>(regargs_result_80468238_2B16 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80468238u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    if constexpr (KnownRegArgsCpuCall<0x804579F8u>(&func_804579F8)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_804579F8_2FD0 = func_804579F8_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_804579F8_2FD0);
        r4 = static_cast<uint32_t>(regargs_result_804579F8_2FD0 >> 32);
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x804579F8u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r5 = r3;
    r6 = r4;
    r3 = (r1 + 68);
    ctx->lr = 0x8045A894u;
    if constexpr (KnownRegArgsCpuCall<0x80459938u>(&func_80459938)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80459938_33EF = func_80459938_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80459938_33EF);
        r4 = static_cast<uint32_t>(regargs_result_80459938_33EF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80459938u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = (r1 + 68);
    r5 = (r1 + 24);
    if constexpr (KnownRegArgsCpuCall<0x80459A14u>(&func_80459A14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80459A14_382A = func_80459A14_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80459A14_382A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80459A14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r31));
}

loc_8045A8A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 148));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 136));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8045A764(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8045A764_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8045A764 func_8045A764 preserves=true fpr_mask=0x00000000
