#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005101C(CpuContext* ctx);
extern "C" uint64_t func_8005101C_ra18_18_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_800E0A50(CpuContext* ctx);
extern "C" uint64_t func_800E0A50_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_8026A3EC(CpuContext* ctx);
extern "C" uint64_t func_8026A3EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802AAEE0(CpuContext* ctx);
extern "C" uint64_t func_802AAEE0_ra38_1fc_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_802AB080(CpuContext* ctx);
extern "C" uint64_t func_802AB080_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_802AB2A4(CpuContext* ctx);
extern "C" uint64_t func_802AB2A4_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802D2BD4(CpuContext* ctx);
extern "C" uint64_t func_802D2BD4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_809EAB38(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_809EACC4_loc_0 = 0;
    uint32_t addr_lfsx_809EACD0_loc_0 = 0;
    uint32_t addr_lfsx_809EAD30_loc_0 = 0;
    uint32_t addr_lfsx_809EAD3C_loc_0 = 0;
    uint32_t addr_lfsx_809EAD78_loc_0 = 0;
    uint32_t addr_lfsx_809EAD84_loc_0 = 0;
    uint32_t addr_lfsx_809EAE5C_loc_0 = 0;
    uint32_t addr_lfsx_809EAE68_loc_0 = 0;
    uint32_t addr_psqx_809EB118_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r29 = ctx->gpr[29];
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
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_809EAB38;

loc_809EAB38:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r30 = r3;
    r31 = MemoryInline::FlatRead32((r3 + 256));
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead8((r30 + 2));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r4 = 0x80A20000u;
    r4 = (r4 + 24976);
    r4_addr_0 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_0);
    r5 = 0;
    ctx->lr = 0x809EAB8Cu;
    if constexpr (KnownRegArgsCpuCall<0x802AAEE0u>(&func_802AAEE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802AAEE0_129C = func_802AAEE0_ra38_1fc_18_0(ctx, r3, r4, r5, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802AAEE0_129C);
        r4 = static_cast<uint32_t>(regargs_result_802AAEE0_129C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802AAEE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_809EAB90:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_809EABA0;
    }
}

loc_809EAB94:
{
    r3 = r30;
    ctx->lr = 0x809EAB9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x809EB75Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_809EB114;
}

loc_809EABA0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 16), r0);
    r4 = 0x80A20000u;
    r3 = MemoryInline::FlatRead32(r31);
    f1.d = MemoryInline::FlatReadFloat32((r4 + -6836));
    ctx->lr = 0x809EABB8u;
    if constexpr (KnownRegArgsCpuCall<0x800E0A50u>(&func_800E0A50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_800E0A50_1EC5 = func_800E0A50_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800E0A50_1EC5);
        r4 = static_cast<uint32_t>(regargs_result_800E0A50_1EC5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E0A50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead8((r30 + 9));
}

loc_809EABC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809EABD0;
    }
}

loc_809EABC4:
{
}

loc_809EABC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_809EAC08;
    }
}

loc_809EABCC:
{
    goto loc_809EAC2C;
}

loc_809EABD0:
{
    r29 = MemoryInline::FlatRead32((r30 + 12));
    r3 = r29;
    r4 = 11;
    r5 = (r30 + 24);
    ctx->lr = 0x809EABE4u;
    if constexpr (KnownRegArgsCpuCall<0x8026A3ECu>(&func_8026A3EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A3EC_24B5 = func_8026A3EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026A3EC_24B5);
        r4 = static_cast<uint32_t>(regargs_result_8026A3EC_24B5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A3ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r30 + 48);
    r4 = (r30 + 24);
    ctx->lr = 0x809EABF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    r3 = (r30 + 36);
    r4 = (r29 + 84);
    // inline leaf 0x809EAAD4 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    // end of inlined leaf 0x809EAAD4
    r3 = r29;
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    goto loc_809EAC2C;
}

loc_809EAC08:
{
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r4 = 8;
    r5 = (r30 + 24);
    ctx->lr = 0x809EAC18u;
    if constexpr (KnownRegArgsCpuCall<0x802D2BD4u>(&func_802D2BD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802D2BD4_2E23 = func_802D2BD4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D2BD4_2E23);
        r4 = static_cast<uint32_t>(regargs_result_802D2BD4_2E23 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x802D2BD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r30 + 48);
    r4 = (r30 + 24);
    ctx->lr = 0x809EAC24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    r3 = 65536;
    r3 = (r3 + -1);
}

loc_809EAC2C:
{
    r0 = MemoryInline::FlatRead8((r30 + 6));
    r0 = (r0 & 32);
}

loc_809EAC38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809EAC48;
    }
}

loc_809EAC3C:
{
    r4 = 0x80A20000u;
    f31.d = MemoryInline::FlatReadFloat32((r4 + -6832));
    goto loc_809EAC50;
}

loc_809EAC48:
{
    r4 = 0x80A20000u;
    f31.d = MemoryInline::FlatReadFloat32((r4 + -6836));
}

loc_809EAC50:
{
    r4 = MemoryInline::FlatRead8((r30 + 2));
    r0 = (r4 + -3);
}

loc_809EAC5C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4))) {
        goto loc_809EAC80;
    }
}

loc_809EAC60:
{
    r0 = (r4 + -11);
}

loc_809EAC68:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4))) {
        goto loc_809EACF0;
    }
}

loc_809EAC6C:
{
}

loc_809EAC70:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(9))) {
        goto loc_809EAC80;
    }
}

loc_809EAC74:
{
}

loc_809EAC78:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(16))) {
        goto loc_809EADBC;
    }
}

loc_809EAC7C:
{
    goto loc_809EAE18;
}

loc_809EAC80:
{
    r3 = (r30 + 72);
    r29 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r29 + -6828));
    r4 = 0x80A20000u;
    f2.d = MemoryInline::FlatReadFloat32((r4 + -6824));
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r0 = MemoryInline::FlatRead8((r30 + 7));
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r6 = (r6_rot_5 & -2);
    r3 = (r30 + 60);
    f1.d = MemoryInline::FlatReadFloat32((r29 + -6828));
    r0 = (r6 + 1);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r4 = 0x80A20000u;
    r5 = (r4 + 24928);
    r4 = 0x80A20000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + -6820));
    addr_lfsx_809EACC4_loc_0 = (r5 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_809EACC4_loc_0);
    f2.d = PpcFmulsInline(f3.d, f0.d);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    addr_lfsx_809EACD0_loc_0 = (r5 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_809EACD0_loc_0);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f3.d = PpcFmulsInline(f31.d, f0.d);
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r30 + 60);
    r4 = MemoryInline::FlatRead32((r30 + 36));
    ctx->lr = 0x809EACECu;
    if constexpr (KnownRegArgsCpuCall<0x8005101Cu>(&func_8005101C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8005101C_4042 = func_8005101C_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8005101C_4042);
        r4 = static_cast<uint32_t>(regargs_result_8005101C_4042 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8005101Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    goto loc_809EAE84;
}

loc_809EACF0:
{
    r0 = (r3 & 65535);
}

loc_809EACF8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(317))) {
        goto loc_809EAD04;
    }
}

loc_809EACFC:
{
}

loc_809EAD00:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(362))) {
        goto loc_809EAD4C;
    }
}

loc_809EAD04:
{
    r0 = MemoryInline::FlatRead8((r30 + 7));
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r6 = (r6_rot_3 & -2);
    r3 = (r30 + 60);
    r4 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + -6828));
    r0 = (r6 + 1);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r4 = 0x80A20000u;
    r5 = (r4 + 24952);
    r4 = 0x80A20000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + -6820));
    addr_lfsx_809EAD30_loc_0 = (r5 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_809EAD30_loc_0);
    f2.d = PpcFmulsInline(f3.d, f0.d);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    addr_lfsx_809EAD3C_loc_0 = (r5 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_809EAD3C_loc_0);
    f3.d = PpcFmulsInline(f3.d, f0.d);
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    goto loc_809EAD90;
}

loc_809EAD4C:
{
    r0 = MemoryInline::FlatRead8((r30 + 7));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r6 = (r6_rot_2 & -2);
    r3 = (r30 + 60);
    r4 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + -6828));
    r0 = (r6 + 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4 = 0x80A20000u;
    r5 = (r4 + 24904);
    r4 = 0x80A20000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + -6820));
    addr_lfsx_809EAD78_loc_0 = (r5 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_809EAD78_loc_0);
    f2.d = PpcFmulsInline(f3.d, f0.d);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    addr_lfsx_809EAD84_loc_0 = (r5 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_809EAD84_loc_0);
    f3.d = PpcFmulsInline(f3.d, f0.d);
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
}

loc_809EAD90:
{
    r3 = (r30 + 72);
    r4 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + -6828));
    r4 = 0x80A20000u;
    f2.d = MemoryInline::FlatReadFloat32((r4 + -6816));
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r30 + 60);
    r4 = MemoryInline::FlatRead32((r30 + 36));
    ctx->lr = 0x809EADB8u;
    if constexpr (KnownRegArgsCpuCall<0x8005101Cu>(&func_8005101C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8005101C_52BE = func_8005101C_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8005101C_52BE);
        r4 = static_cast<uint32_t>(regargs_result_8005101C_52BE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8005101Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    goto loc_809EAE84;
}

loc_809EADBC:
{
    r3 = (r30 + 72);
    r29 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r29 + -6828));
    r4 = 0x80A20000u;
    f2.d = MemoryInline::FlatReadFloat32((r4 + -6816));
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r30 + 60);
    f1.d = MemoryInline::FlatReadFloat32((r29 + -6828));
    r6 = 0x80A20000u;
    r5 = (r6 + 24904);
    r4 = 0x80A20000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + -6820));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f2.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 24904));
    f3.d = PpcFmulsInline(f3.d, f0.d);
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r30 + 60);
    r4 = MemoryInline::FlatRead32((r30 + 36));
    r4 = (r4 + -8192);
    ctx->lr = 0x809EAE14u;
    if constexpr (KnownRegArgsCpuCall<0x8005101Cu>(&func_8005101C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8005101C_5D09 = func_8005101C_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8005101C_5D09);
        r4 = static_cast<uint32_t>(regargs_result_8005101C_5D09 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8005101Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    goto loc_809EAE84;
}

loc_809EAE18:
{
    r3 = (r30 + 72);
    r29 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r29 + -6828));
    r4 = 0x80A20000u;
    f2.d = MemoryInline::FlatReadFloat32((r4 + -6816));
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r0 = MemoryInline::FlatRead8((r30 + 7));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r6 = (r6_rot_1 & -2);
    r3 = (r30 + 60);
    f1.d = MemoryInline::FlatReadFloat32((r29 + -6828));
    r0 = (r6 + 1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = 0x80A20000u;
    r5 = (r4 + 24904);
    r4 = 0x80A20000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + -6820));
    addr_lfsx_809EAE5C_loc_0 = (r5 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_809EAE5C_loc_0);
    f2.d = PpcFmulsInline(f3.d, f0.d);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    addr_lfsx_809EAE68_loc_0 = (r5 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_809EAE68_loc_0);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f3.d = PpcFmulsInline(f31.d, f0.d);
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r30 + 60);
    r4 = MemoryInline::FlatRead32((r30 + 36));
    ctx->lr = 0x809EAE84u;
    if constexpr (KnownRegArgsCpuCall<0x8005101Cu>(&func_8005101C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8005101C_696C = func_8005101C_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8005101C_696C);
        r4 = static_cast<uint32_t>(regargs_result_8005101C_696C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8005101Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_809EAE84:
{
    r3 = (r30 + 60);
    r4 = MemoryInline::FlatRead32((r30 + 40));
    ctx->lr = 0x809EAE90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead8((r30 + 2));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r4 = (r4_rot_1 & -8);
    r3 = 0x80A20000u;
    r0 = (r3 + 24976);
    r3 = (r0 + r4);
    r6 = MemoryInline::FlatRead32((r3 + 4));
}

loc_809EAEAC:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_809EAED0;
    }
}

loc_809EAEB0:
{
    r3 = r30;
    r4 = 0x80A20000u;
    r4 = (r4 + 24612);
    r5 = 0x80A20000u;
    r5 = (r5 + 24600);
    r7 = 15;
    r8 = 1;
    ctx->lr = 0x809EAED0u;
    if constexpr (KnownRegArgsCpuCall<0x802AB080u>(&func_802AB080)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802AB080_7457 = func_802AB080_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802AB080_7457);
        r4 = static_cast<uint32_t>(regargs_result_802AB080_7457 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802AB080u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_809EAED0:
{
    r3 = MemoryInline::FlatRead8((r30 + 2));
    r0 = (r3 + -4);
}

loc_809EAEDC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_809EAEF4;
    }
}

loc_809EAEE0:
{
}

loc_809EAEE4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(13))) {
        goto loc_809EAFE0;
    }
}

loc_809EAEE8:
{
}

loc_809EAEEC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(16))) {
        goto loc_809EAFE0;
    }
}

loc_809EAEF0:
{
    goto loc_809EAF00;
}

loc_809EAEF4:
{
    r3 = (r30 + 92);
    r4 = 2048;
    // inline leaf 0x8029F5A8 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    // end of inlined leaf 0x8029F5A8
}

loc_809EAF00:
{
    r4 = MemoryInline::FlatRead8((r30 + 6));
    r5 = (r4 & 1);
}

loc_809EAF0C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_809EAF28;
    }
}

loc_809EAF10:
{
    r0 = (r4 & 2);
}

loc_809EAF18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809EAF28;
    }
}

loc_809EAF1C:
{
    r0 = (r4 & 4);
}

loc_809EAF24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809EB030;
    }
}

loc_809EAF28:
{
    r6 = MemoryInline::FlatRead8((r30 + 166));
}

loc_809EAF30:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_809EB030;
    }
}

loc_809EAF34:
{
    r3 = 0x80A20000u;
    f2.d = MemoryInline::FlatReadFloat32((r3 + -6836));
}

loc_809EAF40:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_809EAF50;
    }
}

loc_809EAF44:
{
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -6812));
    f2.d = PpcFmulsInline(f2.d, f0.d);
}

loc_809EAF50:
{
    r0 = (r4 & 2);
}

loc_809EAF58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809EAF68;
    }
}

loc_809EAF5C:
{
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -6808));
    f2.d = PpcFmulsInline(f2.d, f0.d);
}

loc_809EAF68:
{
    r0 = (r4 & 4);
}

loc_809EAF70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809EAF80;
    }
}

loc_809EAF74:
{
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -6812));
    f2.d = PpcFmulsInline(f2.d, f0.d);
}

loc_809EAF80:
{
    r3 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat64((r3 + -6800));
    stackword5 = r6;
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    r0 = 1127219200;
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword5));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = PpcFmulsInline(f0.d, f2.d);
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -6804));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_809EAFAC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_809EAFB8;
    }
}

loc_809EAFB0:
{
    f1.d = f0.d;
    goto loc_809EAFCC;
}

loc_809EAFB8:
{
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -6836));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_809EAFC4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_809EAFCC;
    }
}

loc_809EAFC8:
{
    f1.d = f0.d;
}

loc_809EAFCC:
{
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite8((r30 + 166), static_cast<uint8_t>(r0));
    goto loc_809EB030;
}

loc_809EAFE0:
{
    r3 = MemoryInline::FlatRead8((r30 + 6));
    r4 = (r3 & 8);
}

loc_809EAFEC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_809EB008;
    }
}

loc_809EAFF0:
{
    r0 = (r3 & 16);
}

loc_809EAFF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809EB008;
    }
}

loc_809EAFFC:
{
    r0 = 200;
    MemoryInline::FlatWrite8((r30 + 166), static_cast<uint8_t>(r0));
    goto loc_809EB030;
}

loc_809EB008:
{
}

loc_809EB00C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_809EB01C;
    }
}

loc_809EB010:
{
    r0 = 180;
    MemoryInline::FlatWrite8((r30 + 166), static_cast<uint8_t>(r0));
    goto loc_809EB030;
}

loc_809EB01C:
{
    r0 = (r3 & 16);
}

loc_809EB024:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809EB030;
    }
}

loc_809EB028:
{
    r0 = 150;
    MemoryInline::FlatWrite8((r30 + 166), static_cast<uint8_t>(r0));
}

loc_809EB030:
{
    r0 = MemoryInline::FlatRead8((r30 + 6));
    r0 = (r0 & 32);
}

loc_809EB03C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809EB108;
    }
}

loc_809EB040:
{
    r0 = MemoryInline::FlatRead8((r30 + 2));
}

loc_809EB048:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_809EB064;
    }
}

loc_809EB04C:
{
}

loc_809EB050:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_809EB064;
    }
}

loc_809EB054:
{
}

loc_809EB058:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(13))) {
        goto loc_809EB064;
    }
}

loc_809EB05C:
{
}

loc_809EB060:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(16))) {
        goto loc_809EB108;
    }
}

loc_809EB064:
{
    r0 = MemoryInline::FlatRead16((r30 + 156));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_809EB06C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_809EB108;
    }
}

loc_809EB070:
{
    r3 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat64((r3 + -6792));
    r0 = (r0 ^ -2147483648);
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r4 = 1127219200;
    stackword8 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword8), static_cast<uint32_t>(stackword7));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -6820));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r0 = fctiwzword1;
    r0 = (r0 & 65535);
    r3 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat64((r3 + -6800));
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    stackword10 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword10), static_cast<uint32_t>(stackword9));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -6828));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_809EB0D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_809EB0E0;
    }
}

loc_809EB0D4:
{
    r3 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + -6836));
    goto loc_809EB0F4;
}

loc_809EB0E0:
{
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -6804));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_809EB0EC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_809EB0F4;
    }
}

loc_809EB0F0:
{
    f1.d = f0.d;
}

loc_809EB0F4:
{
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword2;
    r0 = (r0 & 255);
    MemoryInline::FlatWrite16((r30 + 156), static_cast<uint16_t>(r0));
}

loc_809EB108:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead32(r31);
    ctx->lr = 0x809EB114u;
    if constexpr (KnownRegArgsCpuCall<0x802AB2A4u>(&func_802AB2A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802AB2A4_9990 = func_802AB2A4_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802AB2A4_9990);
        r4 = static_cast<uint32_t>(regargs_result_802AB2A4_9990 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802AB2A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_809EB114:
{
    r0 = 56;
    addr_psqx_809EB118_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_809EB118_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809EAB38 func_809EAB38 preserves=true fpr_mask=0x00000000
