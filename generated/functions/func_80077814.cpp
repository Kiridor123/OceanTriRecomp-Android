#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005D27C(CpuContext* ctx);
extern "C" uint64_t func_8005D27C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8005D324(CpuContext* ctx);
extern "C" uint32_t func_8005D324_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8006FF2C(CpuContext* ctx);
extern "C" uint64_t func_8006FF2C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80071070(CpuContext* ctx);
extern "C" uint64_t func_80071070_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800740D8(CpuContext* ctx);
extern "C" uint64_t func_800740D8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800769A4(CpuContext* ctx);
extern "C" uint64_t func_800769A4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800775F4(CpuContext* ctx);
extern "C" uint32_t func_800775F4_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80077DC8(CpuContext* ctx);
extern "C" uint32_t func_80077DC8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80077E20(CpuContext* ctx);
extern "C" double func_80077E20_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80077E98(CpuContext* ctx);
extern "C" uint32_t func_80077E98_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80087F6C(CpuContext* ctx);
extern "C" uint64_t func_80087F6C_ra28_fe_18_0(CpuContext*, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_800882C4(CpuContext* ctx);
extern "C" uint64_t func_800882C4_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800940F8(CpuContext* ctx);
extern "C" uint64_t func_800940F8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80095B40(CpuContext* ctx);
extern "C" uint64_t func_80095B40_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_80077E98_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" void func_80077814(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_80077D78_loc_0 = 0;
    uint32_t addr_psqx_80077D84_loc_0 = 0;
    uint32_t addr_psqx_80077D90_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x80077814u);
    goto loc_80077814;

loc_80077814:
{
    MemoryInline::FlatWriteRam32((r1 + -352), r1);
    r1 = (r1 + -352);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 356), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 336), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 344);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 320), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 328);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 304), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 312);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r11 = (r1 + 304);
    // inline leaf 0x80457468 (14 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    // end of inlined leaf 0x80457468
    r23 = r3;
    r24 = r4;
    r25 = r5;
    // inline leaf 0x8005AA94 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8005AA94
}

loc_80077854:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80077868;
    }
}

loc_80077858:
{
    r3 = r25;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80077744u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80077864:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80077870;
    }
}

loc_80077868:
{
    r3 = 0;
    goto loc_80077D74;
}

loc_80077870:
{
    r3 = r23;
    ctx->lr = 0x80077878u;
    if constexpr (KnownRegArgsCpuCall<0x800769A4u>(&func_800769A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800769A4_1903 = func_800769A4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800769A4_1903);
        r4 = static_cast<uint32_t>(regargs_result_800769A4_1903 >> 32);
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
        InvokeDirectCpu<0x800769A4u>(ctx);
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
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    r3 = (r1 + 52);
    r4 = (r1 + 36);
    ctx->lr = 0x80077888u;
    if constexpr (KnownRegArgsCpuCall<0x800775F4u>(&func_800775F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800775F4_1D63 = func_800775F4_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800775F4_1D63;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800775F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 52);
    r4 = 1;
    r5 = (r1 + 140);
    r6 = (r1 + 48);
    ctx->lr = 0x8007789Cu;
    if constexpr (KnownRegArgsCpuCall<0x80095B40u>(&func_80095B40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80095B40_201D = func_80095B40_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80095B40_201D);
        r4 = static_cast<uint32_t>(regargs_result_80095B40_201D >> 32);
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
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80095B40u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 52);
    r4 = 2;
    r5 = (r1 + 144);
    r6 = (r1 + 49);
    ctx->lr = 0x800778B0u;
    if constexpr (KnownRegArgsCpuCall<0x80095B40u>(&func_80095B40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80095B40_241B = func_80095B40_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80095B40_241B);
        r4 = static_cast<uint32_t>(regargs_result_80095B40_241B >> 32);
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
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80095B40u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 52);
    r4 = 3;
    r5 = (r1 + 148);
    r6 = (r1 + 50);
    ctx->lr = 0x800778C4u;
    if constexpr (KnownRegArgsCpuCall<0x80095B40u>(&func_80095B40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80095B40_2819 = func_80095B40_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80095B40_2819);
        r4 = static_cast<uint32_t>(regargs_result_80095B40_2819 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80095B40u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryInline::FlatRead32((r1 + 140));
}

loc_800778CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800778F0;
    }
}

loc_800778D0:
{
    r0 = MemoryInline::FlatRead32((r1 + 144));
}

loc_800778D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800778F0;
    }
}

loc_800778DC:
{
    r0 = MemoryInline::FlatRead32((r1 + 148));
}

loc_800778E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800778F0;
    }
}

loc_800778E8:
{
    r3 = 0;
    goto loc_80077D74;
}

loc_800778F0:
{
    r29 = 0;
    r3 = (r1 + 200);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    // inline leaf 0x800880AC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -31704));
    // end of inlined leaf 0x800880AC
    r27 = r3;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80077914u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r28 = 0;
    r31 = (r1 + 140);
    r30 = (r1 + 48);
    r21 = 0x80590000u;
    r22 = 0x80590000u;
    f29.d = MemoryInline::FlatReadFloat32((r2 + -31876));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -31872));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -31880));
    r19 = 0x80590000u;
}

loc_80077938:
{
    r26 = (r28 + 1);
    r0 = MemoryInline::FlatRead32(r31);
}

loc_80077944:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80077D5C;
    }
}

loc_80077948:
{
}

loc_8007794C:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_80077BB4;
    }
}

loc_80077950:
{
    r29 = 1;
    r3 = r25;
    // inline leaf 0x80077460 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80077460
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80077964:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80077BA4;
    }
}

loc_80077968:
{
    r3 = r24;
    ctx->lr = 0x80077970u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8006FE30u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r20 = r3;
    r3 = r25;
    // inline leaf 0x80077460 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80077460
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80077984:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r20))) {
        goto loc_800779E4;
    }
}

loc_80077988:
{
    r3 = r25;
    // inline leaf 0x80077460 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80077460
    r3 = MemoryInline::FlatRead32((r3 + 8));
    ctx->lr = 0x80077998u;
    if constexpr (KnownRegArgsCpuCall<0x80087F6Cu>(&func_80087F6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->cr = cr;
        const auto regargs_result_80087F6C_3EB4 = func_80087F6C_ra28_fe_18_0(ctx, r3, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d);
        r3 = static_cast<uint32_t>(regargs_result_80087F6C_3EB4);
        r4 = static_cast<uint32_t>(regargs_result_80087F6C_3EB4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->cr = cr;
        InvokeDirectCpu<0x80087F6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 36u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, r3);
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 200), 0, 44u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r1 + 200), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r3 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r1 + 204), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r3 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r1 + 208), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r3 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r1 + 216), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r3 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r1 + 220), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r3 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r1 + 224), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r3 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r1 + 232), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 28u, (r3 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r1 + 236), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r3 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r1 + 240), f0.d);
    goto loc_80077AEC;
}

loc_800779E4:
{
    r3 = r23;
    ctx->lr = 0x800779ECu;
    if constexpr (KnownRegArgsCpuCall<0x800940F8u>(&func_800940F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800940F8_4CD6 = func_800940F8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800940F8_4CD6);
        r4 = static_cast<uint32_t>(regargs_result_800940F8_4CD6 >> 32);
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
        InvokeDirectCpu<0x800940F8u>(ctx);
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
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    r3 = (r1 + 44);
    r4 = (r1 + 32);
    ctx->lr = 0x800779FCu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80077E98u) && KnownTranslatedCpuCall<0x80077E98u>::kAvailable && !KnownTranslatedCpuCall<0x80077E98u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80077E98u>()) {
        const auto state_free_result_80077E98_51B2 = func_80077E98_statefree(r1, r3, r4, 0x800779FCu);
        r0 = static_cast<uint32_t>(state_free_result_80077E98_51B2[0]);
        r1 = static_cast<uint32_t>(state_free_result_80077E98_51B2[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80077E98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = (r1 + 44);
    ctx->lr = 0x80077A04u;
    if constexpr (KnownRegArgsCpuCall<0x800740D8u>(&func_800740D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800740D8_5968 = func_800740D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800740D8_5968);
        r4 = static_cast<uint32_t>(regargs_result_800740D8_5968 >> 32);
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
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    r3 = r25;
    // inline leaf 0x80077460 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80077460
    r4 = r3;
    r3 = (r1 + 28);
    r4 = MemoryInline::FlatRead32((r4 + 8));
    ctx->lr = 0x80077A20u;
    if constexpr (KnownRegArgsCpuCall<0x8006FF2Cu>(&func_8006FF2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8006FF2C_5ECA = func_8006FF2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006FF2C_5ECA);
        r4 = static_cast<uint32_t>(regargs_result_8006FF2C_5ECA >> 32);
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
        InvokeDirectCpu<0x8006FF2Cu>(ctx);
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
    r20 = r3;
}

loc_80077A28:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_80077A40;
    }
}

loc_80077A2C:
{
    r3 = (r21 + -4032);
    r4 = 100;
    r5 = (r19 + -4016);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80077A40u;
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

loc_80077A40:
{
    r3 = (r1 + 44);
    r4 = r20;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80097F14u>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    r3 = (r1 + 40);
    r4 = (r1 + 24);
    ctx->lr = 0x80077A5Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005D324u>(&func_8005D324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005D324_66C9 = func_8005D324_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8005D324_66C9;
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
    r3 = r24;
    ctx->lr = 0x80077A64u;
    if constexpr (KnownRegArgsCpuCall<0x8005D27Cu>(&func_8005D27C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8005D27C_6962 = func_8005D27C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005D27C_6962);
        r4 = static_cast<uint32_t>(regargs_result_8005D27C_6962 >> 32);
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
        InvokeDirectCpu<0x8005D27Cu>(ctx);
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
    r20 = r3;
    r3 = (r1 + 40);
    ctx->lr = 0x80077A70u;
    if constexpr (KnownRegArgsCpuCall<0x8005D27Cu>(&func_8005D27C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8005D27C_6DD5 = func_8005D27C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005D27C_6DD5);
        r4 = static_cast<uint32_t>(regargs_result_8005D27C_6DD5 >> 32);
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
        InvokeDirectCpu<0x8005D27Cu>(ctx);
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
    r4 = r3;
    r3 = (r1 + 200);
    r4 = (r4 + 160);
    r5 = (r20 + 112);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    r3 = r25;
    // inline leaf 0x80077460 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80077460
    r3 = MemoryInline::FlatRead32((r3 + 8));
    ctx->lr = 0x80077A94u;
    if constexpr (KnownRegArgsCpuCall<0x80087F6Cu>(&func_80087F6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->cr = cr;
        const auto regargs_result_80087F6C_741F = func_80087F6C_ra28_fe_18_0(ctx, r3, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d);
        r3 = static_cast<uint32_t>(regargs_result_80087F6C_741F);
        r4 = static_cast<uint32_t>(regargs_result_80087F6C_741F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->cr = cr;
        InvokeDirectCpu<0x80087F6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r4 = r3;
    guest_range_4 = MemoryInline::ResolveRangeHost(r3, 0, 36u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 24u, (r3 + 24));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 28u, (r3 + 28));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 32u, (r3 + 32));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f31.d);
    r3 = (r1 + 152);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 0u, r4);
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 4u, (r4 + 4));
        }
    }
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 8u, (r4 + 8));
    f4.d = f31.d;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 12u);
        if (resolved_pair.valid) {
            f5.d = PpcBitCastToFloatInline(resolved_pair.first);
            f6.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 12u, (r4 + 12));
            f6.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 16u, (r4 + 16));
        }
    }
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 20u, (r4 + 20));
    f8.d = f31.d;
    // inline leaf 0x80077E54 (17 guest instruction(s))
    f11.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f10.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f9.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 16), f5.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 20), f6.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 24), f7.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 28), f8.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 32), f11.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 36), f10.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 40), f9.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f0.d);
    // end of inlined leaf 0x80077E54
    r3 = (r1 + 200);
    r4 = (r1 + 152);
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
}

loc_80077AEC:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 244), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 228), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 212), f31.d);
    r3 = (r1 + 128);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 200));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 216));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 232));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = (r1 + 128);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 128));
    MemoryInline::FlatWriteRamFloat32((r1 + 200), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 132));
    MemoryInline::FlatWriteRamFloat32((r1 + 216), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 136));
    MemoryInline::FlatWriteRamFloat32((r1 + 232), f0.d);
    r3 = (r1 + 116);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 204));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 220));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 236));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = (r1 + 116);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 116));
    MemoryInline::FlatWriteRamFloat32((r1 + 204), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 120));
    MemoryInline::FlatWriteRamFloat32((r1 + 220), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 124));
    MemoryInline::FlatWriteRamFloat32((r1 + 236), f0.d);
    r3 = (r1 + 104);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 208));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 224));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 240));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = (r1 + 104);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 104));
    MemoryInline::FlatWriteRamFloat32((r1 + 208), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 108));
    MemoryInline::FlatWriteRamFloat32((r1 + 224), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 112));
    MemoryInline::FlatWriteRamFloat32((r1 + 240), f0.d);
    goto loc_80077BB4;
}

loc_80077BA4:
{
    // inline leaf 0x80088380 (8 guest instruction(s))
}

loc_inl13_0x80088380:
{
    r3 = 0x80690000u;
    r3 = (r3 + -29292);
}

loc_inl13_0x8008838C:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    r3 = (r3 + 52);
}

loc_inl13_cont_80088380:
{
    // end of inlined leaf 0x80088380
    r4 = r3;
    r3 = (r1 + 200);
    ctx->lr = 0x80077BB4u;
    if constexpr (KnownRegArgsCpuCall<0x80071070u>(&func_80071070)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        const auto regargs_result_80071070_9454 = func_80071070_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80071070_9454);
        r4 = static_cast<uint32_t>(regargs_result_80071070_9454 >> 32);
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
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
}

loc_80077BB4:
{
    r3 = MemoryInline::FlatRead8(r30);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800882D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    if constexpr (KnownRegArgsCpuCall<0x800882C4u>(&func_800882C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800882C4_99F5 = func_800882C4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800882C4_99F5);
        r4 = static_cast<uint32_t>(regargs_result_800882C4_99F5 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x800882C4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r20 = r3;
}

loc_80077BD0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80077D38;
    }
}

loc_80077BD4:
{
    // inline leaf 0x800651F0 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r0 & 4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x800651F0
}

loc_80077BDC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80077D38;
    }
}

loc_80077BE0:
{
    r3 = (r1 + 92);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r20;
    // inline leaf 0x80077E3C (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r0 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x80077E3C
}

loc_80077BF4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80077C5C;
    }
}

loc_80077BF8:
{
    r3 = r20;
    r4 = (r1 + 92);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A848u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 92));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80077C0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80077D10;
    }
}

loc_80077C10:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 96));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80077C18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80077D10;
    }
}

loc_80077C1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 100));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80077C24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80077D10;
    }
}

loc_80077C28:
{
    r3 = r20;
    r4 = (r1 + 92);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A82Cu>(ctx);
    r3 = (r1 + 68);
    r4 = (r1 + 92);
    if constexpr (KnownRegArgsCpuCall<0x80077E20u>(&func_80077E20)) {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80077E20_A4F5 = func_80077E20_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_80077E20_A4F5;
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80077E20u>(ctx);
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r1 + 92);
    r4 = (r1 + 68);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 92);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    goto loc_80077D10;
}

loc_80077C5C:
{
    r3 = r20;
    ctx->lr = 0x80077C64u;
    if constexpr (KnownRegArgsCpuCall<0x80077DC8u>(&func_80077DC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80077DC8_A923 = func_80077DC8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80077DC8_A923;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80077DC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_80077C68:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80077CA0;
    }
}

loc_80077C6C:
{
    r3 = r20;
    r4 = (r1 + 92);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A82Cu>(ctx);
    r3 = (r1 + 56);
    r4 = (r1 + 92);
    if constexpr (KnownRegArgsCpuCall<0x80077E20u>(&func_80077E20)) {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80077E20_ACDB = func_80077E20_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_80077E20_ACDB;
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80077E20u>(ctx);
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r1 + 92);
    r4 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 92);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    goto loc_80077D10;
}

loc_80077CA0:
{
    r3 = (r1 + 80);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r20;
    // inline leaf 0x80077DB0 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r0 & 2);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x80077DB0
}

loc_80077CB4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80077CCC;
    }
}

loc_80077CB8:
{
    r3 = (r21 + -4032);
    r4 = 171;
    r5 = (r22 + -3976);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80077CCCu;
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

loc_80077CCC:
{
    r3 = r20;
    r4 = (r1 + 80);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A848u>(ctx);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 88));
    f1.d = PpcFmulsInline(f29.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 80));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 84));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f0.d);
    f0.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    r3 = (r1 + 92);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
}

loc_80077D10:
{
    r3 = r27;
    r4 = r26;
    r5 = (r1 + 92);
    r6 = (r1 + 200);
    r7 = MemoryInline::FlatRead32(r31);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80077D34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80077D5C;
}

loc_80077D38:
{
    r3 = r27;
    r4 = r26;
    r5 = 0;
    r6 = (r1 + 200);
    r7 = MemoryInline::FlatRead32(r31);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80077D5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
}

loc_80077D5C:
{
    r31 = (r31 + 4);
    r30 = (r30 + 1);
    r28 = (r28 + 1);
}

loc_80077D6C:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(3))) {
        goto loc_80077938;
    }
}

loc_80077D70:
{
    r3 = r27;
}

loc_80077D74:
{
    r0 = 344;
    addr_psqx_80077D78_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80077D78_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 336));
    r0 = 328;
    addr_psqx_80077D84_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80077D84_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 320));
    r0 = 312;
    addr_psqx_80077D90_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80077D90_loc_0));
    f29.d = MemoryInline::FlatReadFloat64((r1 + 304));
    r11 = (r1 + 304);
    // inline leaf 0x804574B4 (14 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
    // end of inlined leaf 0x804574B4
    r0 = MemoryInline::FlatRead32((r1 + 356));
    ctx->lr = r0;
    r1 = (r1 + 352);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80077814 func_80077814 preserves=true fpr_mask=0x00000000
