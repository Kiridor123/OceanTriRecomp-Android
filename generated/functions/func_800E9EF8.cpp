#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E4EDC(CpuContext* ctx);
extern "C" uint32_t func_800E4EDC_ra0_0_8_0(CpuContext*);
extern "C" void func_800E4F08(CpuContext* ctx);
extern "C" uint64_t func_800E4F08_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800E9D64(CpuContext* ctx);
extern "C" uint32_t func_800E9D64_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80457360(CpuContext* ctx);
extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);

extern "C" uint64_t func_800E9EF8_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t addr_psqx_800EA458_loc_0 = 0;
    uint32_t addr_psqx_800EA464_loc_0 = 0;
    uint32_t addr_psqx_800EA470_loc_0 = 0;
    uint32_t addr_psqx_800EA47C_loc_0 = 0;
    uint32_t addr_psqx_800EA488_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x800E9EF8u);
    goto loc_800E9EF8;

loc_800E9EF8:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -144), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 148u, (r1 + 148), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 128u, (r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 112u, (r1 + 112), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 96u, (r1 + 96), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 80u, (r1 + 80), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 64u, (r1 + 64), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 64);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r0 = 1127219200;
    stackword8 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 8), r0);
    r0 = 1127219200;
    stackword9 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 16), r0);
    r0 = MemoryInline::FlatRead8((r4 + 4));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 76), 0, 61u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 60u, (r3 + 136), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 8));
    MemoryInline::WriteResolved16(guest_range_0, 44u, (r3 + 120), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r3 + 76), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 9));
    MemoryInline::WriteResolved16(guest_range_0, 46u, (r3 + 122), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 10));
    MemoryInline::WriteResolved16(guest_range_0, 48u, (r3 + 124), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 11));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_0, 50u, (r3 + 126), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 12));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30056));
    stackword10 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 12), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword8), static_cast<uint32_t>(stackword10));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30072));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30076));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30080));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 24u, (r1 + 24), f0.d);
    r0 = fctiwzword0;
    MemoryInline::WriteResolved16(guest_range_0, 52u, (r3 + 128), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_800E9FC8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_800E9FD4;
    }
}

loc_800E9FCC:
{
    r0 = 1;
    MemoryInline::WriteResolved16(guest_range_0, 52u, (r3 + 128), static_cast<uint16_t>(r0));
}

loc_800E9FD4:
{
    r3 = MemoryInline::FlatRead32((r4 + 20));
    r0 = (r3 + 65536);
}

loc_800E9FE0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_800EA000;
    }
}

loc_800E9FE4:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30056));
    stackword11 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword11));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30068));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_80457360_1D4D = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_1D4D;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
}

loc_800EA000:
{
    MemoryInline::FlatWrite32((r28 + 104), r3);
    r3 = MemoryInline::FlatRead32((r29 + 24));
    r0 = (r3 + 65536);
}

loc_800EA010:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_800EA034;
    }
}

loc_800EA014:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30056));
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30068));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_80457360_2336 = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_2336;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    goto loc_800EA038;
}

loc_800EA034:
{
    r3 = 0;
}

loc_800EA038:
{
    MemoryInline::FlatWrite32((r28 + 108), r3);
    r3 = MemoryInline::FlatRead32((r29 + 28));
    r0 = (r3 + 65536);
}

loc_800EA048:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_800EA068;
    }
}

loc_800EA04C:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30056));
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30068));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_80457360_2956 = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_2956;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
}

loc_800EA068:
{
    MemoryInline::FlatWrite32((r28 + 112), r3);
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 116), r0);
    MemoryInline::FlatWrite8((r28 + 130), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 76));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30048));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -30064));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    r0 = MemoryInline::FlatRead16((r29 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    r0 = MemoryInline::FlatRead8((r30 + 6));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30056));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E88C0u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30048));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30064));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    ctx->lr = 0x800EA0F0u;
    if constexpr (KnownRegArgsCpuCall<0x800E4EDCu>(&func_800E4EDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E4EDC_34A4 = func_800E4EDC_ra0_0_8_0(ctx);
        r3 = regargs_result_800E4EDC_34A4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800E4EDCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30048));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30064));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r3 = r31;
    ctx->lr = 0x800EA118u;
    if constexpr (KnownRegArgsCpuCall<0x800E4F08u>(&func_800E4F08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E4F08_3890 = func_800E4F08_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800E4F08_3890);
        r4 = static_cast<uint32_t>(regargs_result_800E4F08_3890 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E4F08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30048));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30064));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PpcFmulsInline(f31.d, f30.d);
    f0.d = PpcFmulsInline(f29.d, f0.d);
    f0.d = PpcFmulsInline(f28.d, f0.d);
    f0.d = PpcFmulsInline(f27.d, f0.d);
    f27.d = PpcFmulsInline(f1.d, f0.d);
    r3 = 0;
    r27 = MemoryInline::FlatRead8((r29 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
}

loc_800EA15C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_800EA180;
    }
}

loc_800EA160:
{
    if constexpr (KnownRegArgsCpuCall<0x800E9D64u>(&func_800E9D64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800E9D64_3ED0 = func_800E9D64_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800E9D64_3ED0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E9D64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r4 = (r3 & 255);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & -2);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
    r0 = (r0 - r27);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_800EA180:
{
    r0 = (r3 + 127);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30048));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f27.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite16((r28 + 72), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 152));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r0 = fctiwzword2;
    MemoryInline::FlatWrite16((r28 + 78), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_800EA1E0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(127))) {
        goto loc_800EA1F0;
    }
}

loc_800EA1E4:
{
    r0 = 127;
    MemoryInline::FlatWrite16((r28 + 78), static_cast<uint16_t>(r0));
    goto loc_800EA200;
}

loc_800EA1F0:
{
}

loc_800EA1F4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_800EA200;
    }
}

loc_800EA1F8:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r28 + 78), static_cast<uint16_t>(r0));
}

loc_800EA200:
{
    r0 = MemoryInline::FlatRead16((r28 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r28 + 158), static_cast<uint16_t>(r0));
    r26 = MemoryInline::FlatRead16((r29 + 16));
    r26 = (r26 << 16);
    r26 = (static_cast<int32_t>(r26) >> 16);
    r4 = MemoryInline::FlatRead16((r30 + 4));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r0 * 100);
    r0 = (r26 + r4);
    r26 = (r3 + r0);
    r27 = MemoryInline::FlatRead16((r29 + 12));
    r27 = (r27 << 16);
    r27 = (static_cast<int32_t>(r27) >> 16);
}

loc_800EA228:
{
    if ((static_cast<int32_t>(r27) <= static_cast<int32_t>(0))) {
        goto loc_800EA250;
    }
}

loc_800EA22C:
{
    if constexpr (KnownRegArgsCpuCall<0x800E9D64u>(&func_800E9D64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800E9D64_4C6A = func_800E9D64_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800E9D64_4C6A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E9D64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r4 = (r4_rot_1 & -32);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & -2);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
    r0 = (r0 - r27);
    r26 = (r26 + r0);
}

loc_800EA250:
{
}

loc_800EA254:
{
    if ((static_cast<int32_t>(r26) <= static_cast<int32_t>(8192))) {
        goto loc_800EA260;
    }
}

loc_800EA258:
{
    r26 = 8192;
    goto loc_800EA26C;
}

loc_800EA260:
{
}

loc_800EA264:
{
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(-8192))) {
        goto loc_800EA26C;
    }
}

loc_800EA268:
{
    r26 = -8192;
}

loc_800EA26C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r26)));
    MemoryInline::FlatWrite16((r28 + 88), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead8((r29 + 8));
    r3 = (r3 + -64);
    r0 = MemoryInline::FlatRead8((r30 + 7));
    r3 = (r0 + r3);
}

loc_800EA288:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(127))) {
        goto loc_800EA294;
    }
}

loc_800EA28C:
{
    r3 = 127;
    goto loc_800EA2A0;
}

loc_800EA294:
{
}

loc_800EA298:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_800EA2A0;
    }
}

loc_800EA29C:
{
    r3 = 0;
}

loc_800EA2A0:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    MemoryInline::FlatWrite16((r28 + 90), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 13));
    MemoryInline::FlatWrite16((r28 + 92), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_800EA2B8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(127))) {
        goto loc_800EA2C8;
    }
}

loc_800EA2BC:
{
    r0 = 127;
    MemoryInline::FlatWrite16((r28 + 92), static_cast<uint16_t>(r0));
    goto loc_800EA2D8;
}

loc_800EA2C8:
{
}

loc_800EA2CC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_800EA2D8;
    }
}

loc_800EA2D0:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r28 + 92), static_cast<uint16_t>(r0));
}

loc_800EA2D8:
{
    r0 = MemoryInline::FlatRead8((r30 + 14));
    MemoryInline::FlatWrite16((r28 + 94), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_800EA2E8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(127))) {
        goto loc_800EA2F8;
    }
}

loc_800EA2EC:
{
    r0 = 127;
    MemoryInline::FlatWrite16((r28 + 94), static_cast<uint16_t>(r0));
    goto loc_800EA308;
}

loc_800EA2F8:
{
}

loc_800EA2FC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_800EA308;
    }
}

loc_800EA300:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r28 + 94), static_cast<uint16_t>(r0));
}

loc_800EA308:
{
    r0 = MemoryInline::FlatRead8((r30 + 15));
    MemoryInline::FlatWrite16((r28 + 96), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_800EA318:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(127))) {
        goto loc_800EA328;
    }
}

loc_800EA31C:
{
    r0 = 127;
    MemoryInline::FlatWrite16((r28 + 96), static_cast<uint16_t>(r0));
    goto loc_800EA338;
}

loc_800EA328:
{
}

loc_800EA32C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_800EA338;
    }
}

loc_800EA330:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r28 + 96), static_cast<uint16_t>(r0));
}

loc_800EA338:
{
    r0 = MemoryInline::FlatRead8((r29 + 11));
    MemoryInline::FlatWrite16((r28 + 138), static_cast<uint16_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 168), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWrite8((r28 + 170), static_cast<uint8_t>(r0));
    r4 = 0;
    MemoryInline::FlatWrite8((r28 + 169), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r28 + 172), r4);
    r3 = MemoryInline::FlatRead32(r28);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_800EA368:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800EA374;
    }
}

loc_800EA36C:
{
    r0 = MemoryInline::FlatRead32((r28 + 64));
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r4 = (r4_rot_3 & 2147483647);
}

loc_800EA374:
{
    MemoryInline::FlatWrite32((r28 + 176), r4);
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 171), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r28 + 184), r0);
    r0 = 127;
    MemoryInline::FlatWrite16((r28 + 140), static_cast<uint16_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r28 + 137), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32(r28);
    r0 = MemoryInline::FlatRead32(r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_5 & 134217727);
    r0 = (r3 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r28 + 211), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 144));
}

loc_800EA3B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800EA3C8;
    }
}

loc_800EA3BC:
{
    r0 = (r3 + -2147483648);
    MemoryInline::FlatWrite32((r28 + 192), r0);
    MemoryInline::FlatWrite32((r28 + 196), r0);
}

loc_800EA3C8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 200), r0);
    MemoryInline::FlatWrite8((r28 + 216), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32(r28);
    r4 = MemoryInline::FlatRead32((r3 + 20));
}

loc_800EA3E0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800EA42C;
    }
}

loc_800EA3E4:
{
    r0 = MemoryInline::FlatRead8((r28 + 211));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_800EA3F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_800EA400;
    }
}

loc_800EA3F4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EE918u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32((r28 + 204), r3);
    goto loc_800EA408;
}

loc_800EA400:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EE964u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32((r28 + 204), r3);
}

loc_800EA408:
{
    r3 = MemoryInline::FlatRead32((r28 + 64));
    r0 = MemoryInline::FlatRead8((r28 + 211));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead32((r28 + 204));
}

loc_800EA420:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r3))) {
        goto loc_800EA430;
    }
}

loc_800EA424:
{
    MemoryInline::FlatWrite32((r28 + 204), r3);
    goto loc_800EA430;
}

loc_800EA42C:
{
    MemoryInline::FlatWrite32((r28 + 204), r0);
}

loc_800EA430:
{
    r3 = 0;
    MemoryInline::FlatWrite8((r28 + 208), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r28 + 209), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r28 + 210), static_cast<uint8_t>(r3));
    r0 = (r31 & 65535);
    MemoryInline::FlatWrite16((r28 + 212), static_cast<uint16_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 214), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r28 + 224), r3);
    r0 = 136;
    addr_psqx_800EA458_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800EA458_loc_0));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 40), 0, 112u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 88u, (r1 + 128));
    r0 = 120;
    addr_psqx_800EA464_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800EA464_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 72u, (r1 + 112));
    r0 = 104;
    addr_psqx_800EA470_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800EA470_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 56u, (r1 + 96));
    r0 = 88;
    addr_psqx_800EA47C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800EA47C_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 40u, (r1 + 80));
    r0 = 72;
    addr_psqx_800EA488_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800EA488_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 24u, (r1 + 64));
    r11 = (r1 + 64);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::ReadResolved32(guest_range_2, 108u, (r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800E9EF8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800E9EF8_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207F gpr_write=0x0000081B gpr_return=0x00000018 fpr_read=0xF800001F fpr_write=0xF800001F fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800E9EF8 func_800E9EF8 preserves=true fpr_mask=0x00000000
