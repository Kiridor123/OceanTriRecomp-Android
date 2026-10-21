#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DB590(CpuContext* ctx);
extern "C" uint64_t func_800DB590_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800DC89C(CpuContext* ctx);
extern "C" uint64_t func_800DC89C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800FC2B4(CpuContext* ctx);
extern "C" uint64_t func_800FC2B4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80112240(CpuContext* ctx);
extern "C" uint64_t func_80112240_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_801126C8(CpuContext* ctx);
extern "C" uint64_t func_801126C8_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_8012DA3C(CpuContext* ctx);
extern "C" uint64_t func_8012DA3C_ra38_a_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_8012DAFC(CpuContext* ctx);
extern "C" uint64_t func_8012DAFC_ra38_a_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_8012DC00(CpuContext* ctx);
extern "C" uint64_t func_8012DC00_ra38_a_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_8012DD18(CpuContext* ctx);
extern "C" uint64_t func_8012DD18_ra38_a_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_80144644(CpuContext* ctx);
extern "C" uint64_t func_80144644_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802AB080(CpuContext* ctx);
extern "C" uint64_t func_802AB080_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_802AB24C(CpuContext* ctx);
extern "C" uint64_t func_802AB24C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_802AB534(CpuContext* ctx);
extern "C" uint64_t func_802AB534_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802AB72C(CpuContext* ctx);
extern "C" uint64_t func_802AB72C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802AB870(CpuContext* ctx);
extern "C" uint64_t func_802AB870_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802B0164(CpuContext* ctx);
extern "C" uint64_t func_802B0164_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802EBBBC(CpuContext* ctx);
extern "C" uint64_t func_802EBBBC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_809ECE64(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_809ECFA0_loc_0 = 0;
    uint32_t addr_lfsx_809ED044_loc_0 = 0;
    uint32_t addr_lfsx_809ED120_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;

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

    MKW_GUEST_ENTER(0x809ECE64u);
    goto loc_809ECE64;

loc_809ECE64:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r30 = r3;
    r3 = (r1 + 48);
    // inline leaf 0x809EA85C (1 guest instruction(s))
    // end of inlined leaf 0x809EA85C
    r3 = (r1 + 36);
    // inline leaf 0x809EA85C (1 guest instruction(s))
    // end of inlined leaf 0x809EA85C
    r3 = (r1 + 24);
    // inline leaf 0x809EA85C (1 guest instruction(s))
    // end of inlined leaf 0x809EA85C
    r3 = (r1 + 64);
    // inline leaf 0x809ED8C4 (1 guest instruction(s))
    // end of inlined leaf 0x809ED8C4
    r31 = 0;
    r3 = (r1 + 12);
    r4 = (r30 + 24);
    r5 = MemoryInline::FlatRead8((r30 + 8));
    ctx->lr = 0x809ECEB4u;
    if constexpr (KnownRegArgsCpuCall<0x802B0164u>(&func_802B0164)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_802B0164_12DF = func_802B0164_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802B0164_12DF);
        r4 = static_cast<uint32_t>(regargs_result_802B0164_12DF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802B0164u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r1 + 24);
    r4 = (r1 + 12);
    ctx->lr = 0x809ECEC0u;
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
    r0 = MemoryInline::FlatRead8((r30 + 2));
}

loc_809ECEC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809ECED8;
    }
}

loc_809ECECC:
{
}

loc_809ECED0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809ECEE8;
    }
}

loc_809ECED4:
{
    goto loc_809ECEF4;
}

loc_809ECED8:
{
    r3 = (r1 + 24);
    r4 = 0;
    ctx->lr = 0x809ECEE4u;
    if constexpr (KnownRegArgsCpuCall<0x802EBBBCu>(&func_802EBBBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_802EBBBC_19C1 = func_802EBBBC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802EBBBC_19C1);
        r4 = static_cast<uint32_t>(regargs_result_802EBBBC_19C1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x802EBBBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
    }
    goto loc_809ECEF4;
}

loc_809ECEE8:
{
    r3 = (r1 + 24);
    r4 = 1;
    ctx->lr = 0x809ECEF4u;
    if constexpr (KnownRegArgsCpuCall<0x802EBBBCu>(&func_802EBBBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_802EBBBC_1D80 = func_802EBBBC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802EBBBC_1D80);
        r4 = static_cast<uint32_t>(regargs_result_802EBBBC_1D80 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x802EBBBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
    }
}

loc_809ECEF4:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r4 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 16), r4);
    r5 = MemoryInline::FlatRead8((r30 + 5));
}

loc_809ECF08:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_809ECF40;
    }
}

loc_809ECF0C:
{
}

loc_809ECF10:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_809ED174;
    }
}

loc_809ECF14:
{
}

loc_809ECF18:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(2))) {
        goto loc_809ED1D0;
    }
}

loc_809ECF1C:
{
}

loc_809ECF20:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(3))) {
        goto loc_809ED290;
    }
}

loc_809ECF24:
{
}

loc_809ECF28:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(4))) {
        goto loc_809ED4DC;
    }
}

loc_809ECF2C:
{
}

loc_809ECF30:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(5))) {
        goto loc_809ED560;
    }
}

loc_809ECF34:
{
}

loc_809ECF38:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(6))) {
        goto loc_809ED7B4;
    }
}

loc_809ECF3C:
{
    goto loc_809ED854;
}

loc_809ECF40:
{
    r6 = MemoryInline::FlatRead8((r30 + 2));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = 0x80A20000u;
    r3 = (r3 + 31088);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_2);
}

loc_809ECF58:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_809ED0D4;
    }
}

loc_809ECF5C:
{
    r0 = (r5 + 1);
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 16), r0);
}

loc_809ECF70:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_809ECF80;
    }
}

loc_809ECF74:
{
}

loc_809ECF78:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(1))) {
        goto loc_809ED018;
    }
}

loc_809ECF7C:
{
    goto loc_809ED854;
}

loc_809ECF80:
{
    r3 = (r1 + 48);
    r4 = (r30 + 24);
    ctx->lr = 0x809ECF8Cu;
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
    r0 = MemoryInline::FlatRead8((r30 + 2));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = 0x80A20000u;
    r3 = (r3 + 31064);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    addr_lfsx_809ECFA0_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_809ECFA0_loc_0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    r3 = (r1 + 48);
    r4 = MemoryInline::FlatRead8((r30 + 8));
    r5 = 7;
    ctx->lr = 0x809ECFBCu;
    if constexpr (KnownRegArgsCpuCall<0x80112240u>(&func_80112240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        const auto regargs_result_80112240_2CA5 = func_80112240_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80112240_2CA5);
        r4 = static_cast<uint32_t>(regargs_result_80112240_2CA5 >> 32);
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
        InvokeDirectCpu<0x80112240u>(ctx);
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
    }
    r3 = (r1 + 48);
    r4 = (r30 + 24);
    ctx->lr = 0x809ECFC8u;
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
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -6688));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    r3 = (r1 + 48);
    r4 = (r30 + 36);
    r5 = MemoryInline::FlatRead8((r30 + 8));
    r6 = 48;
    r7 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r7 + -6684));
    ctx->lr = 0x809ECFF8u;
    if constexpr (KnownRegArgsCpuCall<0x801126C8u>(&func_801126C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        const auto regargs_result_801126C8_3595 = func_801126C8_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801126C8_3595);
        r4 = static_cast<uint32_t>(regargs_result_801126C8_3595 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
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
        InvokeDirectCpu<0x801126C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
    }
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 8));
}

loc_809ED008:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_809ED854;
    }
}

loc_809ED00C:
{
    r3 = (r1 + 48);
    ctx->lr = 0x809ED014u;
    if constexpr (KnownRegArgsCpuCall<0x800DC89Cu>(&func_800DC89C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DC89C_3BC9 = func_800DC89C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800DC89C_3BC9);
        r4 = static_cast<uint32_t>(regargs_result_800DC89C_3BC9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DC89Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
    }
    goto loc_809ED854;
}

loc_809ED018:
{
    r0 = MemoryInline::FlatRead8((r30 + 6));
}

loc_809ED020:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809ED088;
    }
}

loc_809ED024:
{
    r3 = (r1 + 48);
    r4 = (r30 + 24);
    ctx->lr = 0x809ED030u;
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
    r0 = MemoryInline::FlatRead8((r30 + 2));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = 0x80A20000u;
    r3 = (r3 + 31064);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    addr_lfsx_809ED044_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_809ED044_loc_0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    r3 = (r1 + 48);
    r4 = MemoryInline::FlatRead8((r30 + 8));
    r5 = 7;
    ctx->lr = 0x809ED060u;
    if constexpr (KnownRegArgsCpuCall<0x80112240u>(&func_80112240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        const auto regargs_result_80112240_43CC = func_80112240_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80112240_43CC);
        r4 = static_cast<uint32_t>(regargs_result_80112240_43CC >> 32);
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
        InvokeDirectCpu<0x80112240u>(ctx);
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
    }
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 8));
}

loc_809ED070:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_809ED0AC;
    }
}

loc_809ED074:
{
    r3 = 0;
    r4 = 3;
    r5 = (r30 + 24);
    ctx->lr = 0x809ED084u;
    if constexpr (KnownRegArgsCpuCall<0x800DB590u>(&func_800DB590)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DB590_4B3D = func_800DB590_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DB590_4B3D);
        r4 = static_cast<uint32_t>(regargs_result_800DB590_4B3D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DB590u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
    }
    goto loc_809ED0AC;
}

loc_809ED088:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 8));
}

loc_809ED098:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_809ED0AC;
    }
}

loc_809ED09C:
{
    r3 = 0;
    r4 = 3;
    r5 = (r30 + 24);
    ctx->lr = 0x809ED0ACu;
    if constexpr (KnownRegArgsCpuCall<0x800DB590u>(&func_800DB590)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DB590_505C = func_800DB590_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DB590_505C);
        r4 = static_cast<uint32_t>(regargs_result_800DB590_505C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DB590u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
    }
}

loc_809ED0AC:
{
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x809ED0B8u;
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
    InvokeDirectCpu<0x809EE734u>(ctx);
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
    r3 = r30;
    r4 = 0;
    r5 = 1;
    ctx->lr = 0x809ED0C8u;
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
    InvokeDirectCpu<0x809EE608u>(ctx);
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
    r3 = r30;
    ctx->lr = 0x809ED0D0u;
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
    InvokeDirectCpu<0x809EE7A0u>(ctx);
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
    goto loc_809ED854;
}

loc_809ED0D4:
{
}

loc_809ED0D8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(1))) {
        goto loc_809ED0F4;
    }
}

loc_809ED0DC:
{
    r0 = MemoryInline::FlatRead8((r30 + 6));
}

loc_809ED0E4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_809ED0F4;
    }
}

loc_809ED0E8:
{
    r3 = r30;
    ctx->lr = 0x809ED0F0u;
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
    InvokeDirectCpu<0x809EE7A0u>(ctx);
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
    goto loc_809ED854;
}

loc_809ED0F4:
{
    r0 = (r4 & 1);
}

loc_809ED0FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809ED854;
    }
}

loc_809ED100:
{
    r3 = (r1 + 48);
    r4 = (r30 + 24);
    ctx->lr = 0x809ED10Cu;
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
    r0 = MemoryInline::FlatRead8((r30 + 2));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = 0x80A20000u;
    r3 = (r3 + 31064);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    addr_lfsx_809ED120_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_809ED120_loc_0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r0 = (r0 & 15);
}

loc_809ED138:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(15))) {
        goto loc_809ED160;
    }
}

loc_809ED13C:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 8));
}

loc_809ED14C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_809ED160;
    }
}

loc_809ED150:
{
    r3 = 0;
    r4 = 2;
    r5 = (r30 + 24);
    ctx->lr = 0x809ED160u;
    if constexpr (KnownRegArgsCpuCall<0x800DB590u>(&func_800DB590)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DB590_6629 = func_800DB590_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DB590_6629);
        r4 = static_cast<uint32_t>(regargs_result_800DB590_6629 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DB590u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
    }
}

loc_809ED160:
{
    r3 = (r1 + 48);
    r4 = MemoryInline::FlatRead8((r30 + 8));
    r5 = 7;
    ctx->lr = 0x809ED170u;
    if constexpr (KnownRegArgsCpuCall<0x80112240u>(&func_80112240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        const auto regargs_result_80112240_6A18 = func_80112240_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80112240_6A18);
        r4 = static_cast<uint32_t>(regargs_result_80112240_6A18 >> 32);
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
        InvokeDirectCpu<0x80112240u>(ctx);
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
    }
    goto loc_809ED854;
}

loc_809ED174:
{
    r6 = MemoryInline::FlatRead8((r30 + 2));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x80A20000u;
    r3 = (r3 + 31096);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_1);
}

loc_809ED18C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_809ED1A4;
    }
}

loc_809ED190:
{
    r0 = (r5 + 1);
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 16), r0);
    goto loc_809ED854;
}

loc_809ED1A4:
{
}

loc_809ED1A8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_809ED1B8;
    }
}

loc_809ED1AC:
{
}

loc_809ED1B0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(1))) {
        goto loc_809ED1C4;
    }
}

loc_809ED1B4:
{
    goto loc_809ED854;
}

loc_809ED1B8:
{
    r3 = r30;
    ctx->lr = 0x809ED1C0u;
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
    InvokeDirectCpu<0x809EE1C4u>(ctx);
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
    goto loc_809ED854;
}

loc_809ED1C4:
{
    r3 = r30;
    ctx->lr = 0x809ED1CCu;
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
    InvokeDirectCpu<0x809EE7A0u>(ctx);
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
    goto loc_809ED854;
}

loc_809ED1D0:
{
    r0 = MemoryInline::FlatRead8((r30 + 2));
}

loc_809ED1D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809ED1E8;
    }
}

loc_809ED1DC:
{
}

loc_809ED1E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809ED240;
    }
}

loc_809ED1E4:
{
    goto loc_809ED854;
}

loc_809ED1E8:
{
    r3 = r30;
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x809ED8E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r0 = (r3 & 255);
}

loc_809ED1FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_809ED854;
    }
}

loc_809ED200:
{
    r3 = MemoryInline::FlatRead8((r30 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r30 + 256));
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = 0x80A20000u;
    r4 = (r4 + 30684);
    r5 = 0x80A20000u;
    r5 = (r5 + 30680);
    r6 = MemoryInline::FlatRead8((r30 + 2));
    r7 = 2;
    r8 = 8;
    ctx->lr = 0x809ED23Cu;
    if constexpr (KnownRegArgsCpuCall<0x802AB080u>(&func_802AB080)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        const auto regargs_result_802AB080_7E1A = func_802AB080_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802AB080_7E1A);
        r4 = static_cast<uint32_t>(regargs_result_802AB080_7E1A >> 32);
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
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802AB080u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    goto loc_809ED854;
}

loc_809ED240:
{
    r0 = (r5 + 1);
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = 1;
    r5 = 0;
    ctx->lr = 0x809ED258u;
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
    InvokeDirectCpu<0x809EE608u>(ctx);
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
    r3 = r30;
    r4 = 0x80A20000u;
    r4 = (r4 + 30684);
    r5 = 0x80A20000u;
    r5 = (r5 + 30680);
    r6 = MemoryInline::FlatRead8((r30 + 2));
    r7 = 2;
    r8 = 8;
    ctx->lr = 0x809ED27Cu;
    if constexpr (KnownRegArgsCpuCall<0x802AB080u>(&func_802AB080)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        const auto regargs_result_802AB080_8666 = func_802AB080_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802AB080_8666);
        r4 = static_cast<uint32_t>(regargs_result_802AB080_8666 >> 32);
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
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802AB080u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 20), r0);
    r3 = MemoryInline::FlatRead32((r30 + 256));
    MemoryInline::FlatWrite8((r3 + 45), static_cast<uint8_t>(r0));
    goto loc_809ED854;
}

loc_809ED290:
{
    r0 = MemoryInline::FlatRead8((r30 + 2));
}

loc_809ED298:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809ED2A8;
    }
}

loc_809ED29C:
{
}

loc_809ED2A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809ED31C;
    }
}

loc_809ED2A4:
{
    goto loc_809ED390;
}

loc_809ED2A8:
{
    r4 = MemoryInline::FlatRead32((r30 + 256));
    r3 = MemoryInline::FlatRead8((r4 + 13));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + 13), static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_809ED2C0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_809ED2D4;
    }
}

loc_809ED2C4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 13), static_cast<uint8_t>(r0));
    // inline leaf 0x8029F0B8 (12 guest instruction(s))
}

loc_inl8_0x8029F0B8:
{
    r3 = 0x806B0000u;
    r4 = (r3 + -4824);
    r3 = MemoryInline::FlatRead16((r4 + 12));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam16((r4 + 12), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_inl8_0x8029F0D4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(60000))) {
        goto loc_inl8_0x8029F0E0;
    }
}

loc_inl8_0x8029F0D8:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16((r4 + 12), static_cast<uint16_t>(r0));
}

loc_inl8_0x8029F0E0:
{
    r3 = MemoryInline::FlatRead16((r4 + 12));
}

loc_inl8_cont_8029F0B8:
{
    // end of inlined leaf 0x8029F0B8
    MemoryInline::FlatWrite16((r30 + 104), static_cast<uint16_t>(r3));
}

loc_809ED2D4:
{
    r3 = MemoryInline::FlatRead8((r30 + 8));
    r4 = (r30 + 24);
    r29 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r29 + -6680));
    r5 = 0;
    ctx->lr = 0x809ED2ECu;
    if constexpr (KnownRegArgsCpuCall<0x8012DAFCu>(&func_8012DAFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_8012DAFC_9232 = func_8012DAFC_ra38_a_18_0(ctx, r3, r4, r5, f1.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012DAFC_9232);
        r4 = static_cast<uint32_t>(regargs_result_8012DAFC_9232 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012DAFCu>(ctx);
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
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
}

loc_809ED2F4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_809ED314;
    }
}

loc_809ED2F8:
{
    r3 = MemoryInline::FlatRead8((r30 + 8));
    r4 = (r30 + 24);
    f1.d = MemoryInline::FlatReadFloat32((r29 + -6680));
    r5 = 0;
    ctx->lr = 0x809ED30Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012DD18u>(&func_8012DD18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_8012DD18_9844 = func_8012DD18_ra38_a_18_0(ctx, r3, r4, r5, f1.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012DD18_9844);
        r4 = static_cast<uint32_t>(regargs_result_8012DD18_9844 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012DD18u>(ctx);
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
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    goto loc_809ED398;
}

loc_809ED314:
{
    r31 = 1;
    goto loc_809ED398;
}

loc_809ED31C:
{
    r4 = MemoryInline::FlatRead32((r30 + 256));
    r3 = MemoryInline::FlatRead8((r4 + 45));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + 45), static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_809ED334:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_809ED348;
    }
}

loc_809ED338:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 45), static_cast<uint8_t>(r0));
    // inline leaf 0x8029F0B8 (12 guest instruction(s))
}

loc_inl9_0x8029F0B8:
{
    r3 = 0x806B0000u;
    r4 = (r3 + -4824);
    r3 = MemoryInline::FlatRead16((r4 + 12));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam16((r4 + 12), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_inl9_0x8029F0D4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(60000))) {
        goto loc_inl9_0x8029F0E0;
    }
}

loc_inl9_0x8029F0D8:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16((r4 + 12), static_cast<uint16_t>(r0));
}

loc_inl9_0x8029F0E0:
{
    r3 = MemoryInline::FlatRead16((r4 + 12));
}

loc_inl9_cont_8029F0B8:
{
    // end of inlined leaf 0x8029F0B8
    MemoryInline::FlatWrite16((r30 + 104), static_cast<uint16_t>(r3));
}

loc_809ED348:
{
    r3 = MemoryInline::FlatRead8((r30 + 8));
    r4 = (r30 + 24);
    r29 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r29 + -6680));
    r5 = 0;
    ctx->lr = 0x809ED360u;
    if constexpr (KnownRegArgsCpuCall<0x8012DD18u>(&func_8012DD18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_8012DD18_A304 = func_8012DD18_ra38_a_18_0(ctx, r3, r4, r5, f1.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012DD18_A304);
        r4 = static_cast<uint32_t>(regargs_result_8012DD18_A304 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012DD18u>(ctx);
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
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
}

loc_809ED368:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_809ED388;
    }
}

loc_809ED36C:
{
    r3 = MemoryInline::FlatRead8((r30 + 8));
    r4 = (r30 + 24);
    f1.d = MemoryInline::FlatReadFloat32((r29 + -6680));
    r5 = 0;
    ctx->lr = 0x809ED380u;
    if constexpr (KnownRegArgsCpuCall<0x8012DAFCu>(&func_8012DAFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_8012DAFC_A916 = func_8012DAFC_ra38_a_18_0(ctx, r3, r4, r5, f1.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012DAFC_A916);
        r4 = static_cast<uint32_t>(regargs_result_8012DAFC_A916 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012DAFCu>(ctx);
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
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    goto loc_809ED398;
}

loc_809ED388:
{
    r31 = 1;
    goto loc_809ED398;
}

loc_809ED390:
{
    r3 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
}

loc_809ED398:
{
}

loc_809ED39C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_809ED3B4;
    }
}

loc_809ED3A0:
{
    r3 = r30;
    r4 = 6;
    ctx->lr = 0x809ED3ACu;
    if constexpr (KnownRegArgsCpuCall<0x802AB870u>(&func_802AB870)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_802AB870_AF51 = func_802AB870_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802AB870_AF51);
        r4 = static_cast<uint32_t>(regargs_result_802AB870_AF51 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802AB870u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_809ED3B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_809ED414;
    }
}

loc_809ED3B4:
{
    r3 = MemoryInline::FlatRead8((r30 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 20), r0);
    r0 = MemoryInline::FlatRead8((r30 + 11));
}

loc_809ED3D0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_809ED4DC;
    }
}

loc_809ED3D4:
{
    r3 = r30;
    r4 = 6;
    ctx->lr = 0x809ED3E0u;
    if constexpr (KnownRegArgsCpuCall<0x802AB870u>(&func_802AB870)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_802AB870_B48E = func_802AB870_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802AB870_B48E);
        r4 = static_cast<uint32_t>(regargs_result_802AB870_B48E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802AB870u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_809ED3E4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_809ED404;
    }
}

loc_809ED3E8:
{
}

loc_809ED3EC:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_809ED404;
    }
}

loc_809ED3F0:
{
    r3 = r30;
    ctx->lr = 0x809ED3F8u;
    if constexpr (KnownRegArgsCpuCall<0x802AB534u>(&func_802AB534)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AB534_B8B6 = func_802AB534_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802AB534_B8B6);
        r4 = static_cast<uint32_t>(regargs_result_802AB534_B8B6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802AB534u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead16((r4 + 26));
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
}

loc_809ED404:
{
    r3 = r30;
    r4 = 6;
    ctx->lr = 0x809ED410u;
    if constexpr (KnownRegArgsCpuCall<0x802AB72Cu>(&func_802AB72C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        const auto regargs_result_802AB72C_BCA5 = func_802AB72C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802AB72C_BCA5);
        r4 = static_cast<uint32_t>(regargs_result_802AB72C_BCA5 >> 32);
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
        InvokeDirectCpu<0x802AB72Cu>(ctx);
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
    }
    goto loc_809ED4DC;
}

loc_809ED414:
{
    r0 = MemoryInline::FlatRead32((r30 + 20));
}

loc_809ED41C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809ED45C;
    }
}

loc_809ED420:
{
    r0 = MemoryInline::FlatRead32((r30 + 16));
}

loc_809ED428:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(9000))) {
        goto loc_809ED450;
    }
}

loc_809ED42C:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 20), r0);
    r0 = MemoryInline::FlatRead8((r30 + 11));
}

loc_809ED43C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_809ED45C;
    }
}

loc_809ED440:
{
    r3 = r30;
    r4 = 5;
    ctx->lr = 0x809ED44Cu;
    if constexpr (KnownRegArgsCpuCall<0x802AB72Cu>(&func_802AB72C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        const auto regargs_result_802AB72C_C5E7 = func_802AB72C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802AB72C_C5E7);
        r4 = static_cast<uint32_t>(regargs_result_802AB72C_C5E7 >> 32);
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
        InvokeDirectCpu<0x802AB72Cu>(ctx);
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
    }
    goto loc_809ED45C;
}

loc_809ED450:
{
    r0 = MemoryInline::FlatRead8((r30 + 11));
}

loc_809ED458:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_809ED4D0;
    }
}

loc_809ED45C:
{
    r0 = MemoryInline::FlatRead8((r30 + 11));
}

loc_809ED464:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_809ED47C;
    }
}

loc_809ED468:
{
    r3 = r30;
    r4 = 5;
    ctx->lr = 0x809ED474u;
    if constexpr (KnownRegArgsCpuCall<0x802AB870u>(&func_802AB870)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_802AB870_CDEA = func_802AB870_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802AB870_CDEA);
        r4 = static_cast<uint32_t>(regargs_result_802AB870_CDEA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802AB870u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_809ED478:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_809ED4D0;
    }
}

loc_809ED47C:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 4), static_cast<uint8_t>(r0));
    r3 = r30;
    // inline leaf 0x802AB258 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 97), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802AB258
    r0 = MemoryInline::FlatRead8((r30 + 2));
}

loc_809ED494:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_809ED8A8;
    }
}

loc_809ED498:
{
    r3 = (r30 + 24);
    r4 = MemoryInline::FlatRead8((r30 + 8));
    r5 = 28;
    ctx->lr = 0x809ED4A8u;
    if constexpr (KnownRegArgsCpuCall<0x80112240u>(&func_80112240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        const auto regargs_result_80112240_D3F0 = func_80112240_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80112240_D3F0);
        r4 = static_cast<uint32_t>(regargs_result_80112240_D3F0 >> 32);
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
        InvokeDirectCpu<0x80112240u>(ctx);
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
    }
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 8));
}

loc_809ED4B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_809ED8A8;
    }
}

loc_809ED4BC:
{
    r3 = MemoryInline::FlatRead8((r30 + 6));
    r4 = 5;
    r5 = (r30 + 24);
    ctx->lr = 0x809ED4CCu;
    if constexpr (KnownRegArgsCpuCall<0x800DB590u>(&func_800DB590)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DB590_DB82 = func_800DB590_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DB590_DB82);
        r4 = static_cast<uint32_t>(regargs_result_800DB590_DB82 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DB590u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
    }
    goto loc_809ED8A8;
}

loc_809ED4D0:
{
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x802AB24Cu>(&func_802AB24C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_802AB24C_DEFA = func_802AB24C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_802AB24C_DEFA);
        r4 = static_cast<uint32_t>(regargs_result_802AB24C_DEFA >> 32);
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
        InvokeDirectCpu<0x802AB24Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    goto loc_809ED854;
}

loc_809ED4DC:
{
    r0 = MemoryInline::FlatRead8((r30 + 11));
}

loc_809ED4E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_809ED4FC;
    }
}

loc_809ED4E8:
{
    r3 = r30;
    r4 = 6;
    ctx->lr = 0x809ED4F4u;
    if constexpr (KnownRegArgsCpuCall<0x802AB870u>(&func_802AB870)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_802AB870_E364 = func_802AB870_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802AB870_E364);
        r4 = static_cast<uint32_t>(regargs_result_802AB870_E364 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802AB870u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_809ED4F8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_809ED854;
    }
}

loc_809ED4FC:
{
    r3 = MemoryInline::FlatRead8((r30 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    r3 = r30;
    // inline leaf 0x802AB258 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 97), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802AB258
    r0 = 300;
    MemoryInline::FlatWrite32((r30 + 20), r0);
    r0 = MemoryInline::FlatRead8((r30 + 2));
}

loc_809ED520:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809ED530;
    }
}

loc_809ED524:
{
}

loc_809ED528:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809ED540;
    }
}

loc_809ED52C:
{
    goto loc_809ED854;
}

loc_809ED530:
{
    r3 = r30;
    r4 = 8;
    ctx->lr = 0x809ED53Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x809EE2B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    goto loc_809ED854;
}

loc_809ED540:
{
    r3 = (r30 + 24);
    r4 = 19;
    r5 = (r30 + 36);
    r6 = MemoryInline::FlatRead8((r30 + 8));
    r7 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r7 + -6692));
    ctx->lr = 0x809ED55Cu;
    if constexpr (KnownRegArgsCpuCall<0x800FC2B4u>(&func_800FC2B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        const auto regargs_result_800FC2B4_ECD6 = func_800FC2B4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800FC2B4_ECD6);
        r4 = static_cast<uint32_t>(regargs_result_800FC2B4_ECD6 >> 32);
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
        InvokeDirectCpu<0x800FC2B4u>(ctx);
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
    }
    goto loc_809ED854;
}

loc_809ED560:
{
    r0 = MemoryInline::FlatRead8((r30 + 2));
}

loc_809ED568:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809ED578;
    }
}

loc_809ED56C:
{
}

loc_809ED570:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809ED674;
    }
}

loc_809ED574:
{
    goto loc_809ED770;
}

loc_809ED578:
{
    r3 = MemoryInline::FlatRead8((r30 + 8));
    r4 = (r30 + 24);
    r31 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r31 + -6680));
    r5 = 0;
    ctx->lr = 0x809ED590u;
    if constexpr (KnownRegArgsCpuCall<0x8012DAFCu>(&func_8012DAFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_8012DAFC_F56A = func_8012DAFC_ra38_a_18_0(ctx, r3, r4, r5, f1.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012DAFC_F56A);
        r4 = static_cast<uint32_t>(regargs_result_8012DAFC_F56A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012DAFCu>(ctx);
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
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
}

loc_809ED598:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_809ED668;
    }
}

loc_809ED59C:
{
    r3 = r30;
    ctx->lr = 0x809ED5A4u;
    if constexpr (KnownRegArgsCpuCall<0x802AB534u>(&func_802AB534)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AB534_FACF = func_802AB534_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802AB534_FACF);
        r4 = static_cast<uint32_t>(regargs_result_802AB534_FACF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802AB534u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_809ED5A8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_809ED65C;
    }
}

loc_809ED5AC:
{
    r3 = MemoryInline::FlatRead16((r3 + 8));
}

loc_809ED5B4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(65535))) {
        goto loc_809ED650;
    }
}

loc_809ED5B8:
{
    r4 = (r1 + 8);
    r5 = 0;
    ctx->lr = 0x809ED5C4u;
    if constexpr (KnownRegArgsCpuCall<0x80144644u>(&func_80144644)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80144644_FEEC = func_80144644_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80144644_FEEC);
        r4 = static_cast<uint32_t>(regargs_result_80144644_FEEC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80144644u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_809ED5CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_809ED644;
    }
}

loc_809ED5D0:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = MemoryInline::FlatRead8((r30 + 8));
    r5 = (r30 + 24);
    f1.d = MemoryInline::FlatReadFloat32((r31 + -6680));
    r6 = 1;
    ctx->lr = 0x809ED5E8u;
    if constexpr (KnownRegArgsCpuCall<0x8012DA3Cu>(&func_8012DA3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_8012DA3C_10380 = func_8012DA3C_ra38_a_18_0(ctx, r3, r4, r5, f1.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012DA3C_10380);
        r4 = static_cast<uint32_t>(regargs_result_8012DA3C_10380 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012DA3Cu>(ctx);
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
    }
}

loc_809ED5EC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809ED638;
    }
}

loc_809ED5F0:
{
    r31 = 0;
    MemoryInline::FlatWrite32((r30 + 20), r31);
    r0 = MemoryInline::FlatRead8((r30 + 9));
}

loc_809ED600:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809ED778;
    }
}

loc_809ED604:
{
    r29 = MemoryInline::FlatRead32((r30 + 12));
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_809ED614:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809ED778;
    }
}

loc_809ED618:
{
    r0 = MemoryInline::FlatRead8((r30 + 7));
}

loc_809ED620:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809ED778;
    }
}

loc_809ED624:
{
    r3 = MemoryInline::FlatRead8((r29 + 780));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r29 + 780), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 7), static_cast<uint8_t>(r31));
    goto loc_809ED778;
}

loc_809ED638:
{
    r3 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    goto loc_809ED778;
}

loc_809ED644:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_809ED778;
}

loc_809ED650:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_809ED778;
}

loc_809ED65C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_809ED778;
}

loc_809ED668:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_809ED778;
}

loc_809ED674:
{
    r3 = MemoryInline::FlatRead8((r30 + 8));
    r4 = (r30 + 24);
    r31 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r31 + -6680));
    r5 = 0;
    ctx->lr = 0x809ED68Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012DD18u>(&func_8012DD18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_8012DD18_10F46 = func_8012DD18_ra38_a_18_0(ctx, r3, r4, r5, f1.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012DD18_10F46);
        r4 = static_cast<uint32_t>(regargs_result_8012DD18_10F46 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012DD18u>(ctx);
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
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
}

loc_809ED694:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_809ED764;
    }
}

loc_809ED698:
{
    r3 = r30;
    ctx->lr = 0x809ED6A0u;
    if constexpr (KnownRegArgsCpuCall<0x802AB534u>(&func_802AB534)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AB534_114AE = func_802AB534_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802AB534_114AE);
        r4 = static_cast<uint32_t>(regargs_result_802AB534_114AE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802AB534u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_809ED6A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_809ED758;
    }
}

loc_809ED6A8:
{
    r3 = MemoryInline::FlatRead16((r3 + 8));
}

loc_809ED6B0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(65535))) {
        goto loc_809ED74C;
    }
}

loc_809ED6B4:
{
    r4 = (r1 + 8);
    r5 = 0;
    ctx->lr = 0x809ED6C0u;
    if constexpr (KnownRegArgsCpuCall<0x80144644u>(&func_80144644)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80144644_118CE = func_80144644_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80144644_118CE);
        r4 = static_cast<uint32_t>(regargs_result_80144644_118CE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80144644u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_809ED6C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_809ED740;
    }
}

loc_809ED6CC:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = MemoryInline::FlatRead8((r30 + 8));
    r5 = (r30 + 24);
    f1.d = MemoryInline::FlatReadFloat32((r31 + -6680));
    r6 = 1;
    ctx->lr = 0x809ED6E4u;
    if constexpr (KnownRegArgsCpuCall<0x8012DC00u>(&func_8012DC00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_8012DC00_11D65 = func_8012DC00_ra38_a_18_0(ctx, r3, r4, r5, f1.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012DC00_11D65);
        r4 = static_cast<uint32_t>(regargs_result_8012DC00_11D65 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012DC00u>(ctx);
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
    }
}

loc_809ED6E8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809ED734;
    }
}

loc_809ED6EC:
{
    r31 = 0;
    MemoryInline::FlatWrite32((r30 + 20), r31);
    r0 = MemoryInline::FlatRead8((r30 + 9));
}

loc_809ED6FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809ED778;
    }
}

loc_809ED700:
{
    r29 = MemoryInline::FlatRead32((r30 + 12));
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_809ED710:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809ED778;
    }
}

loc_809ED714:
{
    r0 = MemoryInline::FlatRead8((r30 + 7));
}

loc_809ED71C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809ED778;
    }
}

loc_809ED720:
{
    r3 = MemoryInline::FlatRead8((r29 + 780));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r29 + 780), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 7), static_cast<uint8_t>(r31));
    goto loc_809ED778;
}

loc_809ED734:
{
    r3 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    goto loc_809ED778;
}

loc_809ED740:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_809ED778;
}

loc_809ED74C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_809ED778;
}

loc_809ED758:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_809ED778;
}

loc_809ED764:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_809ED778;
}

loc_809ED770:
{
    r3 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
}

loc_809ED778:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
}

loc_809ED780:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_809ED790;
    }
}

loc_809ED784:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_809ED854;
}

loc_809ED790:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_809ED798:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809ED854;
    }
}

loc_809ED79C:
{
    r3 = MemoryInline::FlatRead8((r30 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_809ED854;
}

loc_809ED7B4:
{
    r0 = MemoryInline::FlatRead8((r30 + 2));
}

loc_809ED7BC:
{
    r4 = 30;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_809ED7C8;
    }
}

loc_809ED7C4:
{
    r4 = 4;
}

loc_809ED7C8:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 20), r0);
}

loc_809ED7D8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_809ED854;
    }
}

loc_809ED7DC:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 2));
}

loc_809ED7EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_809ED8A8;
    }
}

loc_809ED7F0:
{
    r0 = MemoryInline::FlatRead8((r30 + 6));
}

loc_809ED7F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809ED808;
    }
}

loc_809ED7FC:
{
}

loc_809ED800:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809ED81C;
    }
}

loc_809ED804:
{
    goto loc_809ED82C;
}

loc_809ED808:
{
    r3 = (r30 + 24);
    r4 = MemoryInline::FlatRead8((r30 + 8));
    r5 = 28;
    ctx->lr = 0x809ED818u;
    if constexpr (KnownRegArgsCpuCall<0x80112240u>(&func_80112240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        const auto regargs_result_80112240_13065 = func_80112240_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80112240_13065);
        r4 = static_cast<uint32_t>(regargs_result_80112240_13065 >> 32);
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
        InvokeDirectCpu<0x80112240u>(ctx);
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
    }
    goto loc_809ED82C;
}

loc_809ED81C:
{
    r3 = (r30 + 24);
    r4 = MemoryInline::FlatRead8((r30 + 8));
    r5 = 29;
    ctx->lr = 0x809ED82Cu;
    if constexpr (KnownRegArgsCpuCall<0x80112240u>(&func_80112240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        const auto regargs_result_80112240_136EC = func_80112240_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80112240_136EC);
        r4 = static_cast<uint32_t>(regargs_result_80112240_136EC >> 32);
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
        InvokeDirectCpu<0x80112240u>(ctx);
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
    }
}

loc_809ED82C:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 8));
}

loc_809ED83C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_809ED8A8;
    }
}

loc_809ED840:
{
    r3 = MemoryInline::FlatRead8((r30 + 6));
    r4 = 5;
    r5 = (r30 + 24);
    ctx->lr = 0x809ED850u;
    if constexpr (KnownRegArgsCpuCall<0x800DB590u>(&func_800DB590)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DB590_13E94 = func_800DB590_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DB590_13E94);
        r4 = static_cast<uint32_t>(regargs_result_800DB590_13E94 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DB590u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
    }
    goto loc_809ED8A8;
}

loc_809ED854:
{
    r0 = MemoryInline::FlatRead8((r30 + 2));
}

loc_809ED85C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809ED86C;
    }
}

loc_809ED860:
{
}

loc_809ED864:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809ED88C;
    }
}

loc_809ED868:
{
    goto loc_809ED8A8;
}

loc_809ED86C:
{
    r0 = MemoryInline::FlatRead8((r30 + 5));
}

loc_809ED874:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(4))) {
        goto loc_809ED880;
    }
}

loc_809ED878:
{
    r3 = r30;
    ctx->lr = 0x809ED880u;
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
    InvokeDirectCpu<0x809EDC40u>(ctx);
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
}

loc_809ED880:
{
    r3 = r30;
    ctx->lr = 0x809ED888u;
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
    InvokeDirectCpu<0x809EE080u>(ctx);
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
    goto loc_809ED8A8;
}

loc_809ED88C:
{
    r0 = MemoryInline::FlatRead8((r30 + 5));
}

loc_809ED894:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(3))) {
        goto loc_809ED8A0;
    }
}

loc_809ED898:
{
    r3 = r30;
    ctx->lr = 0x809ED8A0u;
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
    InvokeDirectCpu<0x809ED9C8u>(ctx);
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
}

loc_809ED8A0:
{
    r3 = r30;
    ctx->lr = 0x809ED8A8u;
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
    InvokeDirectCpu<0x809EE338u>(ctx);
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
}

loc_809ED8A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809ECE64 func_809ECE64 preserves=true fpr_mask=0x00000000
