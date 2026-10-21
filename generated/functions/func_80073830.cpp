#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005D324(CpuContext* ctx);
extern "C" uint32_t func_8005D324_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800610CC(CpuContext* ctx);
extern "C" uint32_t func_800610CC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80071070(CpuContext* ctx);
extern "C" uint64_t func_80071070_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80073D44(CpuContext* ctx);
extern "C" uint64_t func_80073D44_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80073D98(CpuContext* ctx);
extern "C" uint64_t func_80073D98_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80073EF0(CpuContext* ctx);
extern "C" uint64_t func_80073EF0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80073F64(CpuContext* ctx);
extern "C" uint64_t func_80073F64_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800740B4(CpuContext* ctx);
extern "C" uint64_t func_800740B4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800740D8(CpuContext* ctx);
extern "C" uint64_t func_800740D8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80097DA4(CpuContext* ctx);
extern "C" uint64_t func_80097DA4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800D7D88(CpuContext* ctx);
extern "C" uint64_t func_800D7D88_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_80073830(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_80073D24_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r18_addr_0 = 0;
    uint32_t r18_addr_1 = 0;
    uint32_t r18_addr_2 = 0;
    uint32_t r18_addr_3 = 0;
    uint32_t r18_addr_4 = 0;
    uint32_t r18_addr_5 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
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
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x80073830u);
    goto loc_80073830;

loc_80073830:
{
    MemoryInline::FlatWriteRam32((r1 + -240), r1);
    r1 = (r1 + -240);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 244), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 224), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 224);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r17 = r3;
    r18 = r4;
    r19 = r5;
    r16 = r6;
    r20 = r7;
    r21 = r8;
    r22 = r9;
    r14 = r10;
    r3 = (r1 + 56);
    ctx->lr = 0x80073874u;
    if constexpr (KnownRegArgsCpuCall<0x800610CCu>(&func_800610CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800610CC_15A5 = func_800610CC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800610CC_15A5;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800610CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r31 = 0;
}

loc_8007387C:
{
    if ((static_cast<int32_t>(r19) != static_cast<int32_t>(0))) {
        goto loc_8007389C;
    }
}

loc_80073880:
{
    r3 = r20;
    r4 = 0x80590000u;
    r4 = (r4 + -5832);
    ctx->lr = 0x80073890u;
    if constexpr (KnownRegArgsCpuCall<0x80097DA4u>(&func_80097DA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80097DA4_1914 = func_80097DA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80097DA4_1914);
        r4 = static_cast<uint32_t>(regargs_result_80097DA4_1914 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80097DA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r19 = r3;
}

loc_80073898:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80073D20;
    }
}

loc_8007389C:
{
    r3 = r20;
    ctx->lr = 0x800738A4u;
    if constexpr (KnownRegArgsCpuCall<0x800740D8u>(&func_800740D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800740D8_1E9F = func_800740D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800740D8_1E9F);
        r4 = static_cast<uint32_t>(regargs_result_800740D8_1E9F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x800740D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    r3 = (r1 + 24);
    ctx->lr = 0x800738B0u;
    if constexpr (KnownRegArgsCpuCall<0x800740B4u>(&func_800740B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800740B4_2335 = func_800740B4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800740B4_2335);
        r4 = static_cast<uint32_t>(regargs_result_800740B4_2335 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x800740B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    MemoryInline::FlatWriteRam8((r1 + 132), static_cast<uint8_t>(r0));
    r3 = r14;
    // inline leaf 0x800740A0 (5 guest instruction(s))
    r3 = (r3 & 134217728);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x800740A0
    MemoryInline::FlatWriteRam32((r1 + 136), r3);
    // inline leaf 0x8005CF34 (3 guest instruction(s))
    r3 = 0x80670000u;
    r3 = (r3 + -11520);
    // end of inlined leaf 0x8005CF34
    r15 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31968));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    r3 = r17;
    r4 = r16;
    ctx->lr = 0x800738F0u;
    if constexpr (KnownRegArgsCpuCall<0x80071070u>(&func_80071070)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80071070_2B38 = func_80071070_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80071070_2B38);
        r4 = static_cast<uint32_t>(regargs_result_80071070_2B38 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x80071070u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    }
    // inline leaf 0x8005CF40 (4 guest instruction(s))
    r3 = 0x80670000u;
    r3 = (r3 + -11520);
    r3 = (r3 + 24576);
    // end of inlined leaf 0x8005CF40
    r30 = r3;
    r29 = 0;
    MemoryInline::FlatWrite32(r18, r14);
    r14 = (r1 + 56);
    goto loc_80073C70;
}

loc_80073908:
{
}

loc_8007390C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80073BE0;
    }
}

loc_80073910:
{
    r0 = MemoryInline::FlatRead8((r19 + 1));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_3 & -256);
    r0 = MemoryInline::FlatRead8((r19 + 2));
    r28 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r19 + 3));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_4 & -256);
    r0 = MemoryInline::FlatRead8((r19 + 4));
    r23 = (r3 + r0);
    r3 = r20;
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80097F7Cu>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r3 = (r1 + 28);
    r4 = (r1 + 20);
    ctx->lr = 0x8007394Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005D324u>(&func_8005D324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005D324_33C4 = func_8005D324_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8005D324_33C4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8005D324u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 28);
    ctx->lr = 0x80073954u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8006FE30u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r16 = r3;
}

loc_8007395C:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(2048))) {
        goto loc_8007397C;
    }
}

loc_80073960:
{
    r3 = 0x80590000u;
    r3 = (r3 + -5820);
    r4 = 137;
    r5 = 0x80590000u;
    r5 = (r5 + -5800);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8007397Cu;
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
    mkw_gqr0 = ctx->gqr[0];
}

loc_8007397C:
{
    r0 = r29;
    r29 = (r29 + 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r30_addr_2 = (r30 + r0);
    MemoryInline::FlatWrite32(r30_addr_2, r16);
    r0 = (r16 * 48);
    r27 = (r17 + r0);
    r0 = (r16 * 12);
    r26 = (r15 + r0);
    r0 = (r23 * 48);
    r25 = (r17 + r0);
    r0 = (r23 * 12);
    r24 = (r15 + r0);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r18_addr_2 = (r18 + r0);
    r23 = MemoryInline::FlatRead32(r18_addr_2);
}

loc_800739B8:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_800739E4;
    }
}

loc_800739BC:
{
    r3 = (r1 + 28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8005D0B4u>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    r5 = r3;
    r3 = r21;
    r4 = (r1 + 56);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 56));
    ctr = r12;
    ctx->lr = 0x800739E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r31 = r3;
}

loc_800739E4:
{
}

loc_800739E8:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_800739F8;
    }
}

loc_800739EC:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_800739F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80073A10;
    }
}

loc_800739F8:
{
    r3 = (r1 + 28);
    r4 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80098FD0u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r31 = (r1 + 56);
    r3 = 1;
    goto loc_80073A14;
}

loc_80073A10:
{
    r3 = 0;
}

loc_80073A14:
{
}

loc_80073A18:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80073AA0;
    }
}

loc_80073A1C:
{
    r0 = MemoryInline::FlatRead32((r1 + 136));
}

loc_80073A24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80073AA0;
    }
}

loc_80073A28:
{
}

loc_80073A2C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80073AA0;
    }
}

loc_80073A30:
{
    r3 = (r1 + 44);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
}

loc_80073A44:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(r14))) {
        goto loc_80073A58;
    }
}

loc_80073A48:
{
    r3 = r14;
    r4 = r31;
    // inline leaf 0x80074004 (39 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 76u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 76u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, r3, r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 4u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r3 + 4), r5);
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r3 + 8), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r3 + 12), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r4 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r4 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r3 + 16), r5);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r3 + 20), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_3, 24u, (r3 + 24), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 28u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r4 + 28));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r4 + 32));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r3 + 28), r5);
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r3 + 32), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 36u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r4 + 36));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r4 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r3 + 36), r5);
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r3 + 40), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 44u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r4 + 44));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r4 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r3 + 44), r5);
        MemoryInline::WriteResolved32(guest_range_3, 48u, (r3 + 48), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 52u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r4 + 52));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r4 + 56));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 52u, (r3 + 52), r5);
        MemoryInline::WriteResolved32(guest_range_3, 56u, (r3 + 56), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 60u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r4 + 60));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 64u, (r4 + 64));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 60u, (r3 + 60), r5);
        MemoryInline::WriteResolved32(guest_range_3, 64u, (r3 + 64), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 68u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 68u, (r4 + 68));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 72u, (r4 + 72));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 68u, (r3 + 68), r5);
        MemoryInline::WriteResolved32(guest_range_3, 72u, (r3 + 72), r0);
    }
    // end of inlined leaf 0x80074004
    r31 = r14;
}

loc_80073A58:
{
    r3 = (r1 + 56);
    r4 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8008E224u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryInline::FlatRead32((r1 + 56));
    r0 = (r0 | 512);
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    r3 = (r1 + 28);
    r4 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80098DC0u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 56);
    r4 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8008E224u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 32);
    r4 = (r1 + 44);
    ctx->lr = 0x80073A94u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = (r1 + 56);
    r4 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8008F1ACu>(ctx);
    mkw_gqr0 = ctx->gqr[0];
}

loc_80073AA0:
{
}

loc_80073AA4:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_80073ADC;
    }
}

loc_80073AA8:
{
}

loc_80073AAC:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(r14))) {
        goto loc_80073AC0;
    }
}

loc_80073AB0:
{
    r3 = r14;
    r4 = r31;
    // inline leaf 0x80074004 (39 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost(r4, 0, 76u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 0u, r4);
    guest_range_5 = MemoryInline::ResolveRangeHost(r3, 0, 76u, false, true);
    MemoryInline::WriteResolved32(guest_range_5, 0u, r3, r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 4u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r4 + 4));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r4 + 8));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 4u, (r3 + 4), r5);
        MemoryInline::WriteResolved32(guest_range_5, 8u, (r3 + 8), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_5, 12u, (r3 + 12), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r4 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r4 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 16u, (r3 + 16), r5);
        MemoryInline::WriteResolved32(guest_range_5, 20u, (r3 + 20), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_5, 24u, (r3 + 24), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 28u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r4 + 28));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r4 + 32));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 28u, (r3 + 28), r5);
        MemoryInline::WriteResolved32(guest_range_5, 32u, (r3 + 32), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 36u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r4 + 36));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r4 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 36u, (r3 + 36), r5);
        MemoryInline::WriteResolved32(guest_range_5, 40u, (r3 + 40), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 44u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r4 + 44));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 48u, (r4 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 44u, (r3 + 44), r5);
        MemoryInline::WriteResolved32(guest_range_5, 48u, (r3 + 48), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 52u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 52u, (r4 + 52));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 56u, (r4 + 56));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 52u, (r3 + 52), r5);
        MemoryInline::WriteResolved32(guest_range_5, 56u, (r3 + 56), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 60u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 60u, (r4 + 60));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 64u, (r4 + 64));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 60u, (r3 + 60), r5);
        MemoryInline::WriteResolved32(guest_range_5, 64u, (r3 + 64), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 68u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 68u, (r4 + 68));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 72u, (r4 + 72));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 68u, (r3 + 68), r5);
        MemoryInline::WriteResolved32(guest_range_5, 72u, (r3 + 72), r0);
    }
    // end of inlined leaf 0x80074004
    r31 = r14;
}

loc_80073AC0:
{
    r0 = MemoryInline::FlatRead32(r20);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = r22;
    r4 = r28;
    r5 = (r1 + 56);
    r6 = (r1 + 16);
    ctx->lr = 0x80073ADCu;
    if constexpr (KnownRegArgsCpuCall<0x80073F64u>(&func_80073F64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80073F64_8170 = func_80073F64_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80073F64_8170);
        r4 = static_cast<uint32_t>(regargs_result_80073F64_8170 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80073F64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80073ADC:
{
    r0 = MemoryInline::FlatRead8((r1 + 132));
}

loc_80073AE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80073B14;
    }
}

loc_80073AE8:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r16 = (r18 + r0);
    r3 = r27;
    r4 = r26;
    r5 = r25;
    r6 = r24;
    r7 = r23;
    r8 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x800D7814u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32(r16, r3);
    goto loc_80073B94;
}

loc_80073B14:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 & 1024);
}

loc_80073B20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80073B6C;
    }
}

loc_80073B24:
{
    r3 = 0x80590000u;
    r3 = (r3 + -5820);
    r4 = 245;
    r5 = 0x80590000u;
    r5 = (r5 + -5728);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80073B40u;
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
    mkw_gqr0 = ctx->gqr[0];
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r16 = (r18 + r0);
    r3 = r27;
    r4 = r26;
    r5 = r25;
    r6 = r24;
    r7 = r23;
    r8 = r31;
    ctx->lr = 0x80073B64u;
    if constexpr (KnownRegArgsCpuCall<0x800D7D88u>(&func_800D7D88)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800D7D88_90C6 = func_800D7D88_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800D7D88_90C6);
        r4 = static_cast<uint32_t>(regargs_result_800D7D88_90C6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800D7D88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
    MemoryInline::FlatWrite32(r16, r3);
    goto loc_80073B94;
}

loc_80073B6C:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r16 = (r18 + r0);
    r3 = r27;
    r4 = r26;
    r5 = r25;
    r6 = r24;
    r7 = r23;
    r8 = r31;
    ctx->lr = 0x80073B90u;
    if constexpr (KnownRegArgsCpuCall<0x800D7D88u>(&func_800D7D88)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800D7D88_990F = func_800D7D88_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800D7D88_990F);
        r4 = static_cast<uint32_t>(regargs_result_800D7D88_990F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800D7D88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
    MemoryInline::FlatWrite32(r16, r3);
}

loc_80073B94:
{
    r3 = (r1 + 28);
    ctx->lr = 0x80073B9Cu;
    if constexpr (KnownRegArgsCpuCall<0x80073EF0u>(&func_80073EF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80073EF0_9FDB = func_80073EF0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80073EF0_9FDB);
        r4 = static_cast<uint32_t>(regargs_result_80073EF0_9FDB >> 32);
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
        InvokeDirectCpu<0x80073EF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r4 = r3;
    r3 = MemoryInline::FlatRead32(r16);
    // inline leaf 0x80073EE4 (3 guest instruction(s))
    r0 = (r3 & -256);
    r3 = (r0 | r4);
    // end of inlined leaf 0x80073EE4
    MemoryInline::FlatWrite32(r16, r3);
}

loc_80073BB0:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_80073BD8;
    }
}

loc_80073BB4:
{
    r0 = MemoryInline::FlatRead32(r20);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = r22;
    r4 = r28;
    r5 = r27;
    r6 = r26;
    r7 = r16;
    r8 = (r1 + 12);
    ctx->lr = 0x80073BD8u;
    if constexpr (KnownRegArgsCpuCall<0x80073D98u>(&func_80073D98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80073D98_A634 = func_80073D98_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80073D98_A634);
        r4 = static_cast<uint32_t>(regargs_result_80073D98_A634 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80073D98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80073BD8:
{
    r19 = (r19 + 5);
    goto loc_80073C70;
}

loc_80073BE0:
{
}

loc_80073BE4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(6))) {
        goto loc_80073C04;
    }
}

loc_80073BE8:
{
    r3 = 0x80590000u;
    r3 = (r3 + -5820);
    r4 = 273;
    r5 = 0x80590000u;
    r5 = (r5 + -5688);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80073C04u;
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
    mkw_gqr0 = ctx->gqr[0];
}

loc_80073C04:
{
    r0 = MemoryInline::FlatRead8((r19 + 1));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_5 & -256);
    r0 = MemoryInline::FlatRead8((r19 + 2));
    r16 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r19 + 3));
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_6 & -256);
    r0 = MemoryInline::FlatRead8((r19 + 4));
    r23 = (r3 + r0);
    r0 = r29;
    r29 = (r29 + 1);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r30_addr_3 = (r30 + r0);
    MemoryInline::FlatWrite32(r30_addr_3, r16);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r18_addr_3 = (r18 + r0);
    r3 = MemoryInline::FlatRead32(r18_addr_3);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r18_addr_4 = (r18 + r0);
    MemoryInline::FlatWrite32(r18_addr_4, r3);
    r0 = (r16 * 48);
    r3 = (r17 + r0);
    r0 = (r23 * 48);
    r4 = (r17 + r0);
    ctx->lr = 0x80073C58u;
    if constexpr (KnownRegArgsCpuCall<0x80071070u>(&func_80071070)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80071070_B5E0 = func_80071070_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80071070_B5E0);
        r4 = static_cast<uint32_t>(regargs_result_80071070_B5E0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x80071070u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    }
    r0 = (r16 * 12);
    r3 = (r15 + r0);
    r0 = (r23 * 12);
    r4 = (r15 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r19 = (r19 + 5);
}

loc_80073C70:
{
    r0 = MemoryInline::FlatRead8(r19);
}

loc_80073C78:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80073908;
    }
}

loc_80073C7C:
{
    r18 = 0;
    r16 = 0x80590000u;
    r14 = 0x80590000u;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -31968));
    goto loc_80073CF8;
}

loc_80073C90:
{
    r19 = MemoryInline::FlatRead32(r30);
}

loc_80073C98:
{
    if ((static_cast<uint32_t>(r19) < static_cast<uint32_t>(2048))) {
        goto loc_80073CB0;
    }
}

loc_80073C9C:
{
    r3 = (r16 + -5820);
    r4 = 294;
    r5 = (r14 + -5632);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80073CB0u;
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
    mkw_gqr0 = ctx->gqr[0];
}

loc_80073CB0:
{
    r0 = (r19 * 12);
    r3 = (r15 + r0);
    f0.d = MemoryInline::FlatReadFloat32(r3);
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80073CC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80073CDC;
    }
}

loc_80073CC4:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80073CCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80073CDC;
    }
}

loc_80073CD0:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80073CD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80073CF0;
    }
}

loc_80073CDC:
{
    r3 = (r19 * 48);
    r3 = (r17 + r3);
    r4 = r3;
    r5 = (r15 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x805019BCu>(ctx);
}

loc_80073CF0:
{
    r30 = (r30 + 4);
    r18 = (r18 + 1);
}

loc_80073CF8:
{
}

loc_80073CFC:
{
    if ((static_cast<uint32_t>(r18) < static_cast<uint32_t>(r29))) {
        goto loc_80073C90;
    }
}

loc_80073D00:
{
}

loc_80073D04:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_80073D20;
    }
}

loc_80073D08:
{
    r0 = MemoryInline::FlatRead32(r20);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = r22;
    r4 = r17;
    r5 = (r1 + 8);
    ctx->lr = 0x80073D20u;
    if constexpr (KnownRegArgsCpuCall<0x80073D44u>(&func_80073D44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80073D44_C531 = func_80073D44_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80073D44_C531);
        r4 = static_cast<uint32_t>(regargs_result_80073D44_C531 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80073D44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80073D20:
{
    r0 = 232;
    addr_psqx_80073D24_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80073D24_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 224));
    r11 = (r1 + 224);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 244));
    ctx->lr = r0;
    r1 = (r1 + 240);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x8000FFFF fpr_write=0x8000FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80073830 func_80073830 preserves=true fpr_mask=0x00000000
