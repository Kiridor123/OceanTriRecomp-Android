#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80259030(CpuContext* ctx);
extern "C" uint64_t func_80259030_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8026A288(CpuContext* ctx);
extern "C" uint64_t func_8026A288_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_8027714C(CpuContext* ctx);
extern "C" uint32_t func_8027714C_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80277CBC(CpuContext* ctx);
extern "C" uint32_t func_80277CBC_ra18_2_10_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" void func_802595A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    goto loc_802595A0;

loc_802595A0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r4;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = MemoryInline::FlatRead8((r30 + 5));
}

loc_802595CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802595DC;
    }
}

loc_802595D0:
{
}

loc_802595D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80259658;
    }
}

loc_802595D8:
{
    goto loc_802596D0;
}

loc_802595DC:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    r0 = 20;
    MemoryInline::FlatWrite32((r30 + 40), r0);
    r0 = 30;
    MemoryInline::FlatWrite8((r30 + 614), static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = 52;
    r5 = 4;
    r6 = 0;
    ctx->lr = 0x80259608u;
    if constexpr (KnownRegArgsCpuCall<0x8026A288u>(&func_8026A288)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_8026A288_A93 = func_8026A288_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A288_A93);
        r4 = static_cast<uint32_t>(regargs_result_8026A288_A93 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8026A288u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
    }
    r3 = r30;
    // inline leaf 0x8027AC70 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1467), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8027AC70
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x80277CBCu>(&func_80277CBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80277CBC_1116 = func_80277CBC_ra18_2_10_0(ctx, r3, r4, f1.d);
        r4 = regargs_result_80277CBC_1116;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80277CBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = r30;
    r4 = 0;
    r5 = 0;
    r6 = 1;
    ctx->lr = 0x8025962Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80275B68u>(ctx);
    r0 = ctx->gpr[0];
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
    r3 = r30;
    // inline leaf 0x8027D554 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 948), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8027D554
    r3 = r30;
    r4 = 64;
    // inline leaf 0x8026FF24 (12 guest instruction(s))
}

loc_inl3_0x8026FF24:
{
    r0 = (r4 & -2147483648);
}

loc_inl3_0x8026FF2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x8026FF40;
    }
}

loc_inl3_0x8026FF30:
{
    r0 = MemoryInline::FlatRead32((r3 + 860));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 860), r0);
    goto loc_inl3_cont_8026FF24;
}

loc_inl3_0x8026FF40:
{
    r5 = MemoryInline::FlatRead32((r3 + 864));
    r0 = (r4 & 2147483647);
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r3 + 864), r0);
}

loc_inl3_cont_8026FF24:
{
    // end of inlined leaf 0x8026FF24
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + 22300);
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8027714Cu>(&func_8027714C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8027714C_1A59 = func_8027714C_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8027714C_1A59;
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
    goto loc_802596D0;
}

loc_80259658:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15520));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15476));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r30 + 88));
    ctx->lr = 0x80259678u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
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
    f1.d = MemoryInline::FlatReadFloat32((r30 + 60));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 60), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 64), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 68));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 68), f0.d);
    r3 = MemoryInline::FlatRead32((r30 + 40));
}

loc_802596B0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802596BC;
    }
}

loc_802596B4:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r30 + 40), r0);
}

loc_802596BC:
{
    r3 = r30;
    r4 = 1;
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r6 = 0;
    ctx->lr = 0x802596D0u;
    if constexpr (KnownRegArgsCpuCall<0x80259030u>(&func_80259030)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_80259030_256D = func_80259030_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80259030_256D);
        r4 = static_cast<uint32_t>(regargs_result_80259030_256D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80259030u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
    }
}

loc_802596D0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802595A0 func_802595A0 preserves=true fpr_mask=0x00000000
