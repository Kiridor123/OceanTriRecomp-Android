#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80467F98(CpuContext* ctx);
extern "C" uint64_t func_80467F98_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80468848(CpuContext* ctx);
extern "C" uint64_t func_80468848_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" void func_80471F10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t fctiwzword0 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t stackword2 = 0;
    uint32_t stackword3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
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
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_80471F10;

loc_80471F10:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    f3.d = MemoryInline::FlatReadFloat64((r2 + -2880));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 1127219200;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -2896));
    stackword2 = r3;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2892));
    stackword3 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword2));
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    r31 = r5;
    r30 = r4;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    ctx->lr = 0x80471F60u;
    if constexpr (KnownRegArgsCpuCall<0x80467F98u>(&func_80467F98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        const auto regargs_result_80467F98_9FC = func_80467F98_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80467F98_9FC);
        r4 = static_cast<uint32_t>(regargs_result_80467F98_9FC >> 32);
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
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x80467F98u>(ctx);
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
        f31 = ctx->fpr[31];
    }
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -2900));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2888));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = PpcFmulsInline(f31.d, f31.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80468848_114D = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_114D);
        r4 = static_cast<uint32_t>(regargs_result_80468848_114D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80468848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2884));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f31.d));
    f1.d = (-(f1.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
    r0_subfic_ra_0 = r0;
    r0 = (32767 - r0_subfic_ra_0);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF8003F0 fpr_write=0xFF8003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80471F10 func_80471F10 preserves=true fpr_mask=0x00000000
