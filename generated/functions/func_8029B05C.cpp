#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80106E2C(CpuContext* ctx);
extern "C" uint64_t func_80106E2C_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80264CA0(CpuContext* ctx);
extern "C" uint64_t func_80264CA0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80272B14(CpuContext* ctx);
extern "C" uint64_t func_80272B14_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802791B8(CpuContext* ctx);
extern "C" uint32_t func_802791B8_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802791F8(CpuContext* ctx);
extern "C" uint64_t func_802791F8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8029AB14(CpuContext* ctx);
extern "C" uint64_t func_8029AB14_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_8029AD1C(CpuContext* ctx);
extern "C" uint64_t func_8029AD1C_ra38_1e0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_8029ADC8(CpuContext* ctx);
extern "C" uint64_t func_8029ADC8_ra38_1fc_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_8029AE5C(CpuContext* ctx);
extern "C" uint64_t func_8029AE5C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8029AF20(CpuContext* ctx);
extern "C" uint64_t func_8029AF20_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_8029AFBC(CpuContext* ctx);
extern "C" uint32_t func_8029AFBC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8029E3C0(CpuContext* ctx);
extern "C" uint64_t func_8029E3C0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8029B05C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_8029B800_loc_0 = 0;
    uint32_t addr_psqx_8029B80C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_addze_src_1 = 0;
    uint32_t r0_addze_src_2 = 0;
    uint32_t r0_addze_src_3 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword13 = 0;
    uint32_t stackword14 = 0;
    uint32_t stackword15 = 0;
    uint32_t stackword16 = 0;
    uint32_t stackword17 = 0;
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
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
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
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x8029B05Cu);
    goto loc_8029B05C;

loc_8029B05C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 100u, (r1 + 100), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 80u, (r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 64u, (r1 + 64), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 64);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r25 = r3;
    r26 = r4;
    r30 = r5;
    r28 = r6;
    r27 = r7;
    r0 = 2;
    MemoryInline::FlatWrite8((r4 + 14), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r4 + 44), r3);
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 48), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r4 + 40), r0);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 926), static_cast<uint8_t>(r0));
    r3 = r26;
    r4 = r28;
    r5 = r27;
    ctx->lr = 0x8029B0C4u;
    if constexpr (KnownRegArgsCpuCall<0x8029AD1Cu>(&func_8029AD1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->xer = xer;
        const auto regargs_result_8029AD1C_17E3 = func_8029AD1C_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8029AD1C_17E3);
        r4 = static_cast<uint32_t>(regargs_result_8029AD1C_17E3 >> 32);
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
        xer = ctx->xer;
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->xer = xer;
        InvokeDirectCpu<0x8029AD1Cu>(ctx);
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
        xer = ctx->xer;
    }
    r3 = (r3 + 65536);
    r0 = (r3 + -32768);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r25 + 920), static_cast<uint16_t>(r0));
    r3 = r26;
    r4 = r28;
    r5 = r27;
    ctx->lr = 0x8029B0E4u;
    if constexpr (KnownRegArgsCpuCall<0x8029ADC8u>(&func_8029ADC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->xer = xer;
        const auto regargs_result_8029ADC8_2083 = func_8029ADC8_ra38_1fc_18_0(ctx, r3, r4, r5, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8029ADC8_2083);
        r4 = static_cast<uint32_t>(regargs_result_8029ADC8_2083 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        xer = ctx->xer;
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->xer = xer;
        InvokeDirectCpu<0x8029ADC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWrite16((r25 + 924), static_cast<uint16_t>(r3));
    r3 = r26;
    r4 = r28;
    r5 = r27;
    ctx->lr = 0x8029B0F8u;
    if constexpr (KnownRegArgsCpuCall<0x8029AD1Cu>(&func_8029AD1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->xer = xer;
        const auto regargs_result_8029AD1C_29C9 = func_8029AD1C_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8029AD1C_29C9);
        r4 = static_cast<uint32_t>(regargs_result_8029AD1C_29C9 >> 32);
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
        xer = ctx->xer;
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->xer = xer;
        InvokeDirectCpu<0x8029AD1Cu>(ctx);
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
        xer = ctx->xer;
    }
    r3 = (r3 + 65536);
    r0 = (r3 + -32768);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r25 + 922), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 67));
    MemoryInline::FlatWrite8((r25 + 928), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 66));
    MemoryInline::FlatWrite8((r25 + 927), static_cast<uint8_t>(r0));
    r3 = r25;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8029B124:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029B158;
    }
}

loc_8029B128:
{
    r3 = MemoryInline::FlatRead8((r25 + 927));
    r0 = (r3 + 231);
    r0 = (r0 & 255);
}

loc_8029B138:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8029B158;
    }
}

loc_8029B13C:
{
    r0 = MemoryInline::FlatRead8((r26 + 6));
}

loc_8029B144:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8029B158;
    }
}

loc_8029B148:
{
    r3 = MemoryInline::FlatRead32((r26 + 16));
    r0 = MemoryInline::FlatRead16((r3 + 26));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r25 + 950), static_cast<uint8_t>(r0));
}

loc_8029B158:
{
    r0 = MemoryInline::FlatRead8((r26 + 69));
    MemoryInline::FlatWrite8((r25 + 929), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r25 + 920));
    r3 = MemoryInline::FlatRead32((r25 + 168));
    r3 = (r3 - r0);
    r0 = (r3 + 16384);
    r29 = (r0 & 65535);
    r3 = r25;
    r4 = r29;
    ctx->lr = 0x8029B180u;
    if constexpr (KnownRegArgsCpuCall<0x80264CA0u>(&func_80264CA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        const auto regargs_result_80264CA0_3749 = func_80264CA0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80264CA0_3749);
        r4 = static_cast<uint32_t>(regargs_result_80264CA0_3749 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        InvokeDirectCpu<0x80264CA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        xer = ctx->xer;
    }
}

loc_8029B184:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029B1D0;
    }
}

loc_8029B188:
{
    r0 = MemoryInline::FlatRead8((r26 + 76));
}

loc_8029B190:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029B218;
    }
}

loc_8029B194:
{
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    r3 = r26;
    r4 = r28;
    r5 = r27;
    ctx->lr = 0x8029B1ACu;
    if constexpr (KnownRegArgsCpuCall<0x8029AD1Cu>(&func_8029AD1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->xer = xer;
        const auto regargs_result_8029AD1C_3DCA = func_8029AD1C_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8029AD1C_3DCA);
        r4 = static_cast<uint32_t>(regargs_result_8029AD1C_3DCA >> 32);
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
        xer = ctx->xer;
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->xer = xer;
        InvokeDirectCpu<0x8029AD1Cu>(ctx);
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
        xer = ctx->xer;
    }
    r0 = (r3 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteRam32((r1 + 16), r31);
    r3 = r30;
    r4 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14076));
    r5 = r26;
    ctx->lr = 0x8029B1CCu;
    if constexpr (KnownRegArgsCpuCall<0x80106E2Cu>(&func_80106E2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->xer = xer;
        const auto regargs_result_80106E2C_465F = func_80106E2C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80106E2C_465F);
        r4 = static_cast<uint32_t>(regargs_result_80106E2C_465F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
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
        ctx->fpr[31] = f31;
        ctx->xer = xer;
        InvokeDirectCpu<0x80106E2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
    }
    goto loc_8029B218;
}

loc_8029B1D0:
{
    r0 = MemoryInline::FlatRead8((r25 + 9));
}

loc_8029B1D8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8029B1FC;
    }
}

loc_8029B1DC:
{
    r3 = r26;
    r4 = r30;
    r5 = r28;
    r6 = r27;
    f1.d = MemoryInline::FlatReadFloat32((r25 + 100));
    r7 = 0;
    ctx->lr = 0x8029B1F8u;
    if constexpr (KnownRegArgsCpuCall<0x8029E3C0u>(&func_8029E3C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->xer = xer;
        const auto regargs_result_8029E3C0_4D44 = func_8029E3C0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8029E3C0_4D44);
        r4 = static_cast<uint32_t>(regargs_result_8029E3C0_4D44 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        xer = ctx->xer;
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->xer = xer;
        InvokeDirectCpu<0x8029E3C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_8029B218;
}

loc_8029B1FC:
{
    r3 = r26;
    r4 = r30;
    r5 = r28;
    r6 = r27;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14072));
    r7 = 0;
    ctx->lr = 0x8029B218u;
    if constexpr (KnownRegArgsCpuCall<0x8029E3C0u>(&func_8029E3C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->xer = xer;
        const auto regargs_result_8029E3C0_5696 = func_8029E3C0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8029E3C0_5696);
        r4 = static_cast<uint32_t>(regargs_result_8029E3C0_5696 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        xer = ctx->xer;
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->xer = xer;
        InvokeDirectCpu<0x8029E3C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_8029B218:
{
    r3 = (r25 + 1340);
    r4 = (r25 + 1380);
    r5 = MemoryInline::FlatRead16((r26 + 12));
    // inline leaf 0x8029F238 (12 guest instruction(s))
}

loc_inl1_0x8029F238:
{
    r0 = MemoryInline::FlatRead8(r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3_addr_0 = (r3 + r0);
    MemoryInline::FlatWrite16(r3_addr_0, static_cast<uint16_t>(r5));
    r3 = MemoryInline::FlatRead8(r4);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
}

loc_inl1_0x8029F258:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(20))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8029F25C:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_inl1_cont_8029F238;
}

loc_inl1_return:
{
}

loc_inl1_cont_8029F238:
{
    // end of inlined leaf 0x8029F238
    r3 = r26;
    ctx->lr = 0x8029B230u;
    if constexpr (KnownRegArgsCpuCall<0x8029AF20u>(&func_8029AF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_8029AF20_624D = func_8029AF20_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8029AF20_624D);
        r4 = static_cast<uint32_t>(regargs_result_8029AF20_624D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->xer = xer;
        InvokeDirectCpu<0x8029AF20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    f31.d = f1.d;
    f30.d = MemoryInline::FlatReadFloat32((r2 + -14076));
    r3 = r25;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8029B244:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029B32C;
    }
}

loc_8029B248:
{
    r0 = MemoryInline::FlatRead8((r26 + 66));
}

loc_8029B250:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(27))) {
        goto loc_8029B270;
    }
}

loc_8029B254:
{
}

loc_8029B258:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(28))) {
        goto loc_8029B29C;
    }
}

loc_8029B25C:
{
}

loc_8029B260:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(29))) {
        goto loc_8029B2C8;
    }
}

loc_8029B264:
{
}

loc_8029B268:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(30))) {
        goto loc_8029B2FC;
    }
}

loc_8029B26C:
{
    goto loc_8029B32C;
}

loc_8029B270:
{
    r3 = r25;
    r4 = 1;
    r5 = 10;
    if constexpr (KnownRegArgsCpuCall<0x802791B8u>(&func_802791B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_802791B8_6975 = func_802791B8_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802791B8_6975;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x802791B8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r0 = 5400;
    MemoryInline::FlatWrite16((r25 + 1098), static_cast<uint16_t>(r0));
    r3 = r25;
    r4 = 10;
    r5 = 5400;
    // inline leaf 0x8027D6FC (3 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 1106), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite16((r3 + 1112), static_cast<uint16_t>(r5));
    // end of inlined leaf 0x8027D6FC
    goto loc_8029B32C;
}

loc_8029B29C:
{
    r3 = r25;
    r4 = 1;
    r5 = 5;
    if constexpr (KnownRegArgsCpuCall<0x802791B8u>(&func_802791B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_802791B8_6D70 = func_802791B8_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802791B8_6D70;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x802791B8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r0 = 9000;
    MemoryInline::FlatWrite16((r25 + 1098), static_cast<uint16_t>(r0));
    r3 = r25;
    r4 = 20;
    r5 = 9000;
    // inline leaf 0x8027D6FC (3 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 1106), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite16((r3 + 1112), static_cast<uint16_t>(r5));
    // end of inlined leaf 0x8027D6FC
    goto loc_8029B32C;
}

loc_8029B2C8:
{
    r3 = r25;
    r4 = 1;
    r5 = 40;
    if constexpr (KnownRegArgsCpuCall<0x802791F8u>(&func_802791F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_802791F8_716C = func_802791F8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802791F8_716C);
        r4 = static_cast<uint32_t>(regargs_result_802791F8_716C >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x802791F8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8029B2DC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029B2E8;
    }
}

loc_8029B2E0:
{
    r0 = 5400;
    MemoryInline::FlatWrite16((r25 + 1102), static_cast<uint16_t>(r0));
}

loc_8029B2E8:
{
    r3 = r25;
    r4 = 1;
    r5 = 5400;
    // inline leaf 0x8027D708 (7 guest instruction(s))
}

loc_inl4_0x8027D708:
{
    MemoryInline::FlatWrite8((r3 + 1104), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead16((r3 + 1108));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
}

loc_inl4_0x8027D718:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x8027D71C:
{
    MemoryInline::FlatWrite16((r3 + 1108), static_cast<uint16_t>(r5));
    goto loc_inl4_cont_8027D708;
}

loc_inl4_return:
{
}

loc_inl4_cont_8027D708:
{
    // end of inlined leaf 0x8027D708
    goto loc_8029B32C;
}

loc_8029B2FC:
{
    r3 = r25;
    r4 = 1;
    r5 = 20;
    if constexpr (KnownRegArgsCpuCall<0x802791F8u>(&func_802791F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_802791F8_7830 = func_802791F8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802791F8_7830);
        r4 = static_cast<uint32_t>(regargs_result_802791F8_7830 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x802791F8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8029B310:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029B31C;
    }
}

loc_8029B314:
{
    r0 = 9000;
    MemoryInline::FlatWrite16((r25 + 1102), static_cast<uint16_t>(r0));
}

loc_8029B31C:
{
    r3 = r25;
    r4 = 2;
    r5 = 9000;
    // inline leaf 0x8027D708 (7 guest instruction(s))
}

loc_inl5_0x8027D708:
{
    MemoryInline::FlatWrite8((r3 + 1104), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead16((r3 + 1108));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
}

loc_inl5_0x8027D718:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x8027D71C:
{
    MemoryInline::FlatWrite16((r3 + 1108), static_cast<uint16_t>(r5));
    goto loc_inl5_cont_8027D708;
}

loc_inl5_return:
{
}

loc_inl5_cont_8027D708:
{
    // end of inlined leaf 0x8027D708
}

loc_8029B32C:
{
    r0 = MemoryInline::FlatRead16((r26 + 64));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -14056));
    r0 = (r0 ^ -2147483648);
    stackword12 = r0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r0 = 1127219200;
    stackword13 = r0;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword13), static_cast<uint32_t>(stackword12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f2.d = PpcFmulsInline(f30.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r2 + -14068));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 960));
    f1.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -14076));
    r3 = 65536;
    r28 = (r3 + -1);
    r3 = MemoryInline::FlatRead16((r26 + 70));
    r0 = (r3 & 4);
}

loc_8029B384:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029B390;
    }
}

loc_8029B388:
{
    r28 = 0;
    goto loc_8029B3DC;
}

loc_8029B390:
{
    r0 = (r3 & 16);
}

loc_8029B398:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029B3A4;
    }
}

loc_8029B39C:
{
    r28 = 1;
    goto loc_8029B3DC;
}

loc_8029B3A4:
{
    r0 = (r3 & 64);
}

loc_8029B3AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029B3B8;
    }
}

loc_8029B3B0:
{
    r28 = 2;
    goto loc_8029B3DC;
}

loc_8029B3B8:
{
    r0 = (r3 & 32);
}

loc_8029B3C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029B3CC;
    }
}

loc_8029B3C4:
{
    r28 = 4;
    goto loc_8029B3DC;
}

loc_8029B3CC:
{
    r0 = (r3 & 128);
}

loc_8029B3D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029B3DC;
    }
}

loc_8029B3D8:
{
    r28 = 3;
}

loc_8029B3DC:
{
    r3 = r25;
    r4 = (r28 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8029AFBCu>(&func_8029AFBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->xer = xer;
        const auto regargs_result_8029AFBC_8769 = func_8029AFBC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8029AFBC_8769;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->xer = xer;
        InvokeDirectCpu<0x8029AFBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
    r31 = r3;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_8029B3F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029B420;
    }
}

loc_8029B3F8:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -14056));
    r0 = (r0 ^ -2147483648);
    stackword14 = r0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r0 = 1127219200;
    stackword15 = r0;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword15), static_cast<uint32_t>(stackword14));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14064));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
}

loc_8029B420:
{
    r0 = MemoryInline::FlatRead8((r26 + 66));
}

loc_8029B428:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(31))) {
        goto loc_8029B4C0;
    }
}

loc_8029B42C:
{
    r0 = MemoryInline::FlatRead16((r26 + 64));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (0 - r0);
    r30 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = r25;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_80272B14_8EFA = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_8EFA);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_8EFA >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8029B448:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029B470;
    }
}

loc_8029B44C:
{
    r3 = 1717960704;
    r0 = (r3 + 26215);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r30))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 2);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r30 + r0);
    r30 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8029B470:
{
    r3 = r25;
    r4 = 152;
    ctx->lr = 0x8029B47Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8029B480:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029B498;
    }
}

loc_8029B484:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r30);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r30) >> 2);
    r0_addze_src_0 = r0;
    r0_ca_0 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_0 + r0_ca_0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r30 = (r30 + r0);
    goto loc_8029B4D0;
}

loc_8029B498:
{
    r3 = r25;
    r4 = 153;
    ctx->lr = 0x8029B4A4u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8029B4A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029B4D0;
    }
}

loc_8029B4AC:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r30);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r30) >> 2);
    r0_addze_src_2 = r0;
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_2 + r0_ca_2);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r30 = (r30 - r0);
    goto loc_8029B4D0;
}

loc_8029B4C0:
{
    f0.d = PpcFmulsInline(f31.d, f30.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r30 = fctiwzword0;
}

loc_8029B4D0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r26 + 50), 0, 41u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r26 + 50));
}

loc_8029B4D8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8029B4FC;
    }
}

loc_8029B4DC:
{
    r3 = r26;
    r4 = 128;
    // inline leaf 0x8029F5C8 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x8029F5C8
}

loc_8029B4EC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8029B4FC;
    }
}

loc_8029B4F0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r26 + 66));
}

loc_8029B4F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(31))) {
        goto loc_8029B740;
    }
}

loc_8029B4FC:
{
    r0 = (r28 & 65535);
}

loc_8029B504:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_8029B558;
    }
}

loc_8029B508:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 40u, (r26 + 90));
}

loc_8029B510:
{
    r0 = 10;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8029B51C;
    }
}

loc_8029B518:
{
    r0 = r3;
}

loc_8029B51C:
{
    r5 = (r0 - r31);
    r0 = (r28 & 65535);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = (r25 + r0);
    r4 = MemoryInline::FlatRead16((r3 + 908));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_8029B534:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_8029B53C;
    }
}

loc_8029B538:
{
    r4 = (0 - r4);
}

loc_8029B53C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
}

loc_8029B544:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8029B54C;
    }
}

loc_8029B548:
{
    r0 = (0 - r0);
}

loc_8029B54C:
{
}

loc_8029B550:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_8029B558;
    }
}

loc_8029B554:
{
    MemoryInline::FlatWrite16((r3 + 908), static_cast<uint16_t>(r5));
}

loc_8029B558:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 28u, (r26 + 78));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -14056));
    r0 = (r0 ^ -2147483648);
    stackword16 = r0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r0 = 1127219200;
    stackword17 = r0;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword17), static_cast<uint32_t>(stackword16));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r26 + 72));
    r0 = (r0 & 1);
}

loc_8029B588:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029B594;
    }
}

loc_8029B58C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r26 + 74));
    MemoryInline::FlatWrite16((r25 + 1010), static_cast<uint16_t>(r0));
}

loc_8029B594:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r26 + 72));
    r0 = (r0 & 2);
}

loc_8029B5A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029B5AC;
    }
}

loc_8029B5A4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r26 + 74));
    MemoryInline::FlatWrite16((r25 + 1004), static_cast<uint16_t>(r0));
}

loc_8029B5AC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r26 + 72));
    r0 = (r0 & 4);
}

loc_8029B5B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029B5C4;
    }
}

loc_8029B5BC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r26 + 74));
    MemoryInline::FlatWrite16((r25 + 1016), static_cast<uint16_t>(r0));
}

loc_8029B5C4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r26 + 72));
    r0 = (r0 & 1024);
}

loc_8029B5D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029B5DC;
    }
}

loc_8029B5D4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r26 + 74));
    MemoryInline::FlatWrite16((r25 + 1038), static_cast<uint16_t>(r0));
}

loc_8029B5DC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r26 + 72));
    r0 = (r0 & 4096);
}

loc_8029B5E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029B5F4;
    }
}

loc_8029B5EC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r26 + 74));
    MemoryInline::FlatWrite16((r25 + 1056), static_cast<uint16_t>(r0));
}

loc_8029B5F4:
{
    r3 = r26;
    // inline leaf 0x8029A7EC (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r3 = (r0 & 32768);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    // end of inlined leaf 0x8029A7EC
}

loc_8029B600:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029B61C;
    }
}

loc_8029B604:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r26 + 72));
    r0 = (r0 & 16);
}

loc_8029B610:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029B61C;
    }
}

loc_8029B614:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r26 + 74));
    MemoryInline::FlatWrite16((r25 + 1060), static_cast<uint16_t>(r0));
}

loc_8029B61C:
{
    r3 = r26;
    // inline leaf 0x8029A7EC (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r3 = (r0 & 32768);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_7 & 1);
    // end of inlined leaf 0x8029A7EC
}

loc_8029B628:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029B644;
    }
}

loc_8029B62C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r26 + 72));
    r0 = (r0 & 32);
}

loc_8029B638:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029B644;
    }
}

loc_8029B63C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r26 + 74));
    MemoryInline::FlatWrite16((r25 + 1062), static_cast<uint16_t>(r0));
}

loc_8029B644:
{
    r3 = r26;
    // inline leaf 0x8029A7EC (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r3 = (r0 & 32768);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & 1);
    // end of inlined leaf 0x8029A7EC
}

loc_8029B650:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029B66C;
    }
}

loc_8029B654:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r26 + 72));
    r0 = (r0 & 64);
}

loc_8029B660:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029B66C;
    }
}

loc_8029B664:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r26 + 74));
    MemoryInline::FlatWrite16((r25 + 1064), static_cast<uint16_t>(r0));
}

loc_8029B66C:
{
    r3 = r26;
    // inline leaf 0x8029A7EC (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r3 = (r0 & 32768);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_9 & 1);
    // end of inlined leaf 0x8029A7EC
}

loc_8029B678:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029B694;
    }
}

loc_8029B67C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r26 + 72));
    r0 = (r0 & 128);
}

loc_8029B688:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029B694;
    }
}

loc_8029B68C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r26 + 74));
    MemoryInline::FlatWrite16((r25 + 1068), static_cast<uint16_t>(r0));
}

loc_8029B694:
{
    r3 = r26;
    // inline leaf 0x8029A7EC (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 72));
    r3 = (r0 & 32768);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_10 & 1);
    // end of inlined leaf 0x8029A7EC
}

loc_8029B6A0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029B6BC;
    }
}

loc_8029B6A4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r26 + 72));
    r0 = (r0 & 512);
}

loc_8029B6B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029B6BC;
    }
}

loc_8029B6B4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r26 + 74));
    MemoryInline::FlatWrite16((r25 + 1066), static_cast<uint16_t>(r0));
}

loc_8029B6BC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r26 + 66));
}

loc_8029B6C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8029B6DC;
    }
}

loc_8029B6C8:
{
}

loc_8029B6CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(36))) {
        goto loc_8029B708;
    }
}

loc_8029B6D0:
{
}

loc_8029B6D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8029B708;
    }
}

loc_8029B6D8:
{
    goto loc_8029B71C;
}

loc_8029B6DC:
{
    r3 = r25;
    r4 = 88;
    ctx->lr = 0x8029B6E8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8029B6EC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8029B734;
    }
}

loc_8029B6F0:
{
    r3 = r25;
    r4 = 89;
    ctx->lr = 0x8029B6FCu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8029B700:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029B71C;
    }
}

loc_8029B704:
{
    goto loc_8029B734;
}

loc_8029B708:
{
    r3 = r25;
    r4 = 89;
    ctx->lr = 0x8029B714u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8029B718:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8029B734;
    }
}

loc_8029B71C:
{
    r3 = MemoryInline::FlatRead16((r25 + 1022));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    f0.d = PPC_Fctiwz(f30.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword1;
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r25 + 1022), static_cast<uint16_t>(r0));
}

loc_8029B734:
{
    r0 = MemoryInline::FlatRead16((r25 + 906));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r30);
    MemoryInline::FlatWrite16((r25 + 906), static_cast<uint16_t>(r0));
}

loc_8029B740:
{
    r3 = r25;
    r4 = r29;
    ctx->lr = 0x8029B74Cu;
    if constexpr (KnownRegArgsCpuCall<0x80264CA0u>(&func_80264CA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        const auto regargs_result_80264CA0_C9F2 = func_80264CA0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80264CA0_C9F2);
        r4 = static_cast<uint32_t>(regargs_result_80264CA0_C9F2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->xer = xer;
        InvokeDirectCpu<0x80264CA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        xer = ctx->xer;
    }
}

loc_8029B750:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029B7A0;
    }
}

loc_8029B754:
{
    r0 = 5;
    MemoryInline::FlatWrite8((r26 + 14), static_cast<uint8_t>(r0));
    r3 = r26;
    ctx->lr = 0x8029B764u;
    if constexpr (KnownRegArgsCpuCall<0x8029AE5Cu>(&func_8029AE5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_8029AE5C_CEE3 = func_8029AE5C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8029AE5C_CEE3);
        r4 = static_cast<uint32_t>(regargs_result_8029AE5C_CEE3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x8029AE5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r25;
    r4 = 0;
    r5 = r26;
    r6 = r27;
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    r8 = 1;
    ctx->lr = 0x8029B780u;
    if constexpr (KnownRegArgsCpuCall<0x8029AB14u>(&func_8029AB14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->xer = xer;
        const auto regargs_result_8029AB14_D322 = func_8029AB14_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8029AB14_D322);
        r4 = static_cast<uint32_t>(regargs_result_8029AB14_D322 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
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
        ctx->fpr[1] = f1;
        ctx->xer = xer;
        InvokeDirectCpu<0x8029AB14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead8((r26 + 6));
}

loc_8029B788:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8029B794;
    }
}

loc_8029B78C:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r26 + 14), static_cast<uint8_t>(r0));
}

loc_8029B794:
{
    r3 = r26;
    ctx->lr = 0x8029B79Cu;
    if constexpr (KnownRegArgsCpuCall<0x8029AE5Cu>(&func_8029AE5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_8029AE5C_D92F = func_8029AE5C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8029AE5C_D92F);
        r4 = static_cast<uint32_t>(regargs_result_8029AE5C_D92F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x8029AE5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8029B7FC;
}

loc_8029B7A0:
{
    r3 = r26;
    ctx->lr = 0x8029B7A8u;
    if constexpr (KnownRegArgsCpuCall<0x8029AE5Cu>(&func_8029AE5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_8029AE5C_DCA4 = func_8029AE5C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8029AE5C_DCA4);
        r4 = static_cast<uint32_t>(regargs_result_8029AE5C_DCA4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x8029AE5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead8((r26 + 6));
}

loc_8029B7B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029B7E0;
    }
}

loc_8029B7B4:
{
    r0 = MemoryInline::FlatRead8((r26 + 7));
}

loc_8029B7BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029B7E0;
    }
}

loc_8029B7C0:
{
    r3 = r25;
    r4 = MemoryInline::FlatRead32((r26 + 20));
    r5 = r26;
    r6 = r27;
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    r8 = 0;
    ctx->lr = 0x8029B7DCu;
    if constexpr (KnownRegArgsCpuCall<0x8029AB14u>(&func_8029AB14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->xer = xer;
        const auto regargs_result_8029AB14_E270 = func_8029AB14_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8029AB14_E270);
        r4 = static_cast<uint32_t>(regargs_result_8029AB14_E270 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
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
        ctx->fpr[1] = f1;
        ctx->xer = xer;
        InvokeDirectCpu<0x8029AB14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
    }
    goto loc_8029B7FC;
}

loc_8029B7E0:
{
    r3 = r25;
    r4 = 0;
    r5 = r26;
    r6 = r27;
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    r8 = 0;
    ctx->lr = 0x8029B7FCu;
    if constexpr (KnownRegArgsCpuCall<0x8029AB14u>(&func_8029AB14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->xer = xer;
        const auto regargs_result_8029AB14_E881 = func_8029AB14_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8029AB14_E881);
        r4 = static_cast<uint32_t>(regargs_result_8029AB14_E881 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
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
        ctx->fpr[1] = f1;
        ctx->xer = xer;
        InvokeDirectCpu<0x8029AB14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
    }
}

loc_8029B7FC:
{
    r0 = 88;
    addr_psqx_8029B800_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8029B800_loc_0));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 36), 0, 68u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 44u, (r1 + 80));
    r0 = 72;
    addr_psqx_8029B80C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8029B80C_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 28u, (r1 + 64));
    r11 = (r1 + 64);
    // inline leaf 0x804574CC (8 guest instruction(s))
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_2, 64u, (r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8029B05C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8029B05C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8029B05C func_8029B05C preserves=true fpr_mask=0x00000000
