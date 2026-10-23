#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F35EC(CpuContext* ctx);
extern "C" uint64_t func_801F35EC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_801F3730(CpuContext* ctx);
extern "C" uint32_t func_801F3730_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801F5528(CpuContext* ctx);
extern "C" uint64_t func_801F5528_ra38_1fa_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_801F9B5C(CpuContext* ctx);
extern "C" uint64_t func_801F9B5C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80214F54(CpuContext* ctx);
extern "C" uint64_t func_80214F54_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802151D4(CpuContext* ctx);
extern "C" uint64_t func_802151D4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802156C0(CpuContext* ctx);
extern "C" uint64_t func_802156C0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802AA450(CpuContext* ctx);
extern "C" uint32_t func_802AA450_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802E05B4(CpuContext* ctx);
extern "C" uint64_t func_802E05B4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_802E09A8(CpuContext* ctx);
extern "C" uint64_t func_802E09A8_ra38_1fa_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_802E0B38(CpuContext* ctx);
extern "C" uint64_t func_802E0B38_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_802E0E0C(CpuContext* ctx);
extern "C" uint64_t func_802E0E0C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802E0E70(CpuContext* ctx);
extern "C" uint64_t func_802E0E70_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_801F9D38(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lhax_801F9E80_loc_0 = 0;
    uint32_t addr_lhax_801FA064_loc_0 = 0;
    uint32_t addr_psqx_801FA120_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
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
    uint32_t r13 = ctx->gpr[13];
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

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_801F9D38;

loc_801F9D38:
{
    MemoryHw::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryHw::FlatWriteRam32((r1 + 164), r0);
    MemoryHw::FlatWriteRamFloat64((r1 + 144), f31.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 152);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 144);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryHw::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r22 = r3;
    r0 = 1127219200;
    MemoryHw::FlatWriteRam32((r1 + 64), r0);
    r0 = 1127219200;
    MemoryHw::FlatWriteRam32((r1 + 72), r0);
    r0 = MemoryHw::FlatRead8((r3 + 2));
}

loc_801F9D70:
{
    r3 = 0x805C0000u;
    r26 = (r3 + -28776);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801F9D84;
    }
}

loc_801F9D7C:
{
    r3 = 0x805C0000u;
    r26 = (r3 + -28748);
}

loc_801F9D84:
{
    r3 = 7416;
    r4 = (r1 + 12);
    ctx->lr = 0x801F9D90u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_802E05B4_15EB = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_15EB);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_15EB >> 32);
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = 0x805C0000u;
    r3 = (r3 + -28016);
    r4 = (r1 + 12);
    ctx->lr = 0x801F9DA0u;
    if constexpr (KnownRegArgsCpuCall<0x802E09A8u>(&func_802E09A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        const auto regargs_result_802E09A8_1AA2 = func_802E09A8_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E09A8_1AA2);
        r4 = static_cast<uint32_t>(regargs_result_802E09A8_1AA2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x802E09A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryHw::FlatRead8((r22 + 2));
}

loc_801F9DA8:
{
    r3 = (r13 + -28928);
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801F9DB4;
    }
}

loc_801F9DB0:
{
    r3 = (r13 + -28936);
}

loc_801F9DB4:
{
    r4 = (r1 + 12);
    ctx->lr = 0x801F9DBCu;
    if constexpr (KnownRegArgsCpuCall<0x802E09A8u>(&func_802E09A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        const auto regargs_result_802E09A8_235F = func_802E09A8_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E09A8_235F);
        r4 = static_cast<uint32_t>(regargs_result_802E09A8_235F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x802E09A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = 7414;
    r4 = (r1 + 20);
    ctx->lr = 0x801F9DC8u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_802E05B4_2A93 = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_2A93);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_2A93 >> 32);
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = 7415;
    r4 = (r1 + 16);
    ctx->lr = 0x801F9DD4u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_802E05B4_2E9F = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_2E9F);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_2E9F >> 32);
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = 0x805C0000u;
    r3 = (r3 + -28068);
    r4 = 1;
    r5 = (r1 + 16);
    ctx->lr = 0x801F9DE8u;
    if constexpr (KnownRegArgsCpuCall<0x802E0E70u>(&func_802E0E70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        const auto regargs_result_802E0E70_3348 = func_802E0E70_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0E70_3348);
        r4 = static_cast<uint32_t>(regargs_result_802E0E70_3348 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x802E0E70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = 0x805C0000u;
    r3 = (r3 + -28028);
    r4 = 1;
    r5 = (r1 + 16);
    ctx->lr = 0x801F9DFCu;
    if constexpr (KnownRegArgsCpuCall<0x802E0E70u>(&func_802E0E70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        const auto regargs_result_802E0E70_3B1F = func_802E0E70_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0E70_3B1F);
        r4 = static_cast<uint32_t>(regargs_result_802E0E70_3B1F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x802E0E70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    }
    mkw_gqr0 = ctx->gqr[0];
    r21 = 0x805C0000u;
    r3 = (r21 + -28792);
    r4 = MemoryHw::FlatRead16((r22 + 4));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = MemoryHw::FlatRead16((r22 + 6));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    if constexpr (KnownRegArgsCpuCall<0x801F3730u>(&func_801F3730)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_801F3730_4347 = func_801F3730_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_801F3730_4347;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x801F3730u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r23 = (r3 & 65535);
    r3 = (r21 + -28792);
    if constexpr (KnownRegArgsCpuCall<0x801F35ECu>(&func_801F35EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801F35EC_4672 = func_801F35EC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801F35EC_4672);
        r4 = static_cast<uint32_t>(regargs_result_801F35EC_4672 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x801F35ECu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r24 = 0;
    r28 = 0x805C0000u;
    f31.d = MemoryHw::FlatReadFloat64((r2 + -16936));
    r29 = 0x80660000u;
    r30 = (r29 + -19268);
    r4 = 0x805C0000u;
    r31 = (r4 + -28096);
    r21 = (r3 & 65535);
    goto loc_801FA074;
}

loc_801F9E40:
{
    r0 = (r24 & 255);
}

loc_801F9E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r23))) {
        goto loc_801F9E58;
    }
}

loc_801F9E4C:
{
    r25 = 1;
    r20 = 1;
    goto loc_801F9E60;
}

loc_801F9E58:
{
    r25 = 0;
    r20 = 0;
}

loc_801F9E60:
{
    r3 = 1;
    r4 = r20;
    r5 = 1;
    r6 = 0;
    if constexpr (KnownRegArgsCpuCall<0x802AA450u>(&func_802AA450)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802AA450_4B5C = func_802AA450_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_802AA450_4B5C;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802AA450u>(ctx);
        r3 = ctx->gpr[3];
    }
    MemoryHw::FlatWriteRam32((r1 + 8), r3);
    r0 = (r24 & 255);
    r27_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r27 = (r27_rot_2 & -2);
    addr_lhax_801F9E80_loc_0 = (r26 + r27);
    r0 = MemoryHw::FlatRead16(addr_lhax_801F9E80_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801F9E88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-2))) {
        goto loc_801F9E98;
    }
}

loc_801F9E8C:
{
}

loc_801F9E90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-3))) {
        goto loc_801F9EDC;
    }
}

loc_801F9E94:
{
    goto loc_801FA028;
}

loc_801F9E98:
{
    r3 = (r1 + 24);
    r4 = 7354;
    r5 = 1;
    r6 = (r1 + 12);
    ctx->lr = 0x801F9EACu;
    if constexpr (KnownRegArgsCpuCall<0x802E0B38u>(&func_802E0B38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_802E0B38_50D7 = func_802E0B38_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0B38_50D7);
        r4 = static_cast<uint32_t>(regargs_result_802E0B38_50D7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x802E0B38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
    }
    r3 = MemoryHw::FlatRead16((r1 + 12));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryHw::FlatRead16((r1 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    MemoryHw::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    r3 = MemoryHw::FlatRead16((r1 + 14));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryHw::FlatRead16((r1 + 18));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    MemoryHw::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    r3 = r25;
    r4 = (r1 + 12);
    ctx->lr = 0x801F9ED8u;
    if constexpr (KnownRegArgsCpuCall<0x802156C0u>(&func_802156C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        const auto regargs_result_802156C0_5A3D = func_802156C0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802156C0_5A3D);
        r4 = static_cast<uint32_t>(regargs_result_802156C0_5A3D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x802156C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_801FA070;
}

loc_801F9EDC:
{
    r3 = (r28 + -28052);
}

loc_801F9EE4:
{
    if ((static_cast<uint32_t>(r20) != static_cast<uint32_t>(1))) {
        goto loc_801F9EF8;
    }
}

loc_801F9EE8:
{
    r4 = MemoryHw::FlatRead16((r22 + 12));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 + 10);
    r4 = (r0 & 65535);
    goto loc_801F9EFC;
}

loc_801F9EF8:
{
    r4 = 1;
}

loc_801F9EFC:
{
    r4 = (r4 & 65535);
    r5 = (r1 + 16);
    ctx->lr = 0x801F9F08u;
    if constexpr (KnownRegArgsCpuCall<0x802E0E70u>(&func_802E0E70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        const auto regargs_result_802E0E70_63C0 = func_802E0E70_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0E70_63C0);
        r4 = static_cast<uint32_t>(regargs_result_802E0E70_63C0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x802E0E70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_801F9F0C:
{
    if ((static_cast<uint32_t>(r20) != static_cast<uint32_t>(1))) {
        goto loc_801FA070;
    }
}

loc_801F9F10:
{
    ctx->lr = 0x801F9F14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x804B67E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 24);
    r4 = 7336;
    r5 = 1;
    r6 = (r1 + 12);
    ctx->lr = 0x801F9F28u;
    if constexpr (KnownRegArgsCpuCall<0x802E0B38u>(&func_802E0B38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_802E0B38_6ED7 = func_802E0B38_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0B38_6ED7);
        r4 = static_cast<uint32_t>(regargs_result_802E0B38_6ED7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x802E0B38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
    }
    r3 = 7334;
    r4 = 0;
    ctx->lr = 0x801F9F34u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_802E05B4_7546 = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_7546);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_7546 >> 32);
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r4 = r3;
    r3 = (r1 + 24);
    // inline leaf 0x801E68B4 (25 guest instruction(s))
    guest_range_4 = MemoryHw::ResolveRangeHost(r4, 0, 36u, true, false);
    r0 = MemoryHw::ReadResolved32(guest_range_4, 0u, r4);
    MemoryHw::FlatWriteRam32(r3, r0);
    r0 = MemoryHw::ReadResolved32(guest_range_4, 4u, (r4 + 4));
    MemoryHw::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryHw::ReadResolved16(guest_range_4, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_4, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved32(guest_range_4, 12u, (r4 + 12));
    MemoryHw::FlatWriteRam32((r3 + 12), r0);
    r0 = MemoryHw::ReadResolved16(guest_range_4, 16u, (r4 + 16));
    MemoryHw::FlatWriteRam16((r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_4, 18u, (r4 + 18));
    MemoryHw::FlatWriteRam8((r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_4, 19u, (r4 + 19));
    MemoryHw::FlatWriteRam8((r3 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved32(guest_range_4, 20u, (r4 + 20));
    MemoryHw::FlatWriteRam32((r3 + 20), r0);
    r0 = MemoryHw::ReadResolved32(guest_range_4, 24u, (r4 + 24));
    MemoryHw::FlatWriteRam32((r3 + 24), r0);
    r0 = MemoryHw::ReadResolved32(guest_range_4, 28u, (r4 + 28));
    MemoryHw::FlatWriteRam32((r3 + 28), r0);
    r0 = MemoryHw::ReadResolved32(guest_range_4, 32u, (r4 + 32));
    MemoryHw::FlatWriteRam32((r3 + 32), r0);
    // end of inlined leaf 0x801E68B4
    r7 = MemoryHw::FlatRead16((r22 + 14));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    MemoryHw::FlatWriteRam16((r1 + 24), static_cast<uint16_t>(r7));
    r6 = MemoryHw::FlatRead16((r22 + 16));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    MemoryHw::FlatWriteRam16((r1 + 26), static_cast<uint16_t>(r6));
    r3 = MemoryHw::FlatRead16((r1 + 12));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryHw::FlatRead16((r1 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5 = (r3 + r0);
    MemoryHw::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r5));
    r3 = MemoryHw::FlatRead16((r1 + 14));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryHw::FlatRead16((r1 + 18));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r3 + r0);
    MemoryHw::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0 = (r0 + r7);
    r0 = (r0 ^ -2147483648);
    MemoryHw::FlatWriteRam32((r1 + 68), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 64));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    r0 = MemoryHw::FlatRead16((r29 + -19268));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryHw::FlatWriteRam32((r1 + 76), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 72));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f0.d = MemoryHw::FlatReadFloat32((r30 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryHw::FlatWriteRamFloat64((r1 + 80), f0.d);
    r3 = fctiwzword0;
    r3 = (r3 & 65535);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (r0 + r6);
    r0 = (r0 ^ -2147483648);
    MemoryHw::FlatWriteRam32((r1 + 68), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 64));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    r0 = MemoryHw::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryHw::FlatWriteRam32((r1 + 76), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 72));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f0.d = MemoryHw::FlatReadFloat32((r30 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryHw::FlatWriteRamFloat64((r1 + 88), f0.d);
    r4 = fctiwzword1;
    r4 = (r4 & 65535);
    r5 = (r1 + 8);
    ctx->lr = 0x801FA008u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x804B6A10u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    r0 = MemoryHw::FlatRead32((r1 + 8));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & -256);
    r0 = (r0 | 255);
    MemoryHw::FlatWrite32((r22 + 20), r0);
    r3 = (r1 + 24);
    r4 = (r1 + 12);
    ctx->lr = 0x801FA024u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x802E07A4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    mkw_gqr0 = ctx->gqr[0];
    goto loc_801FA070;
}

loc_801FA028:
{
    r3 = (r31 + r27);
    r3 = MemoryHw::FlatRead16((r3 + 2));
    r4 = (r1 + 12);
    ctx->lr = 0x801FA038u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_802E05B4_9332 = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_9332);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_9332 >> 32);
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = MemoryHw::FlatRead16((r1 + 12));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryHw::FlatRead16((r1 + 20));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    MemoryHw::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    r3 = MemoryHw::FlatRead16((r1 + 14));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryHw::FlatRead16((r1 + 22));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 + r0);
    MemoryHw::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    r3 = (r1 + 12);
    r4 = MemoryHw::FlatRead32((r1 + 8));
    r5 = r25;
    addr_lhax_801FA064_loc_0 = (r26 + r27);
    r6 = MemoryHw::FlatRead16(addr_lhax_801FA064_loc_0);
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r7 = 1;
    ctx->lr = 0x801FA070u;
    if constexpr (KnownRegArgsCpuCall<0x801F9B5Cu>(&func_801F9B5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        const auto regargs_result_801F9B5C_9B15 = func_801F9B5C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801F9B5C_9B15);
        r4 = static_cast<uint32_t>(regargs_result_801F9B5C_9B15 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x801F9B5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_801FA070:
{
    r24 = (r24 + 1);
}

loc_801FA074:
{
    r0 = (r24 & 255);
}

loc_801FA07C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r21))) {
        goto loc_801F9E40;
    }
}

loc_801FA080:
{
    r3 = 7346;
    r4 = 0;
    ctx->lr = 0x801FA08Cu;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_802E05B4_A336 = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_A336);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_A336 >> 32);
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r4 = r3;
    r3 = (r1 + 24);
    // inline leaf 0x801E68B4 (25 guest instruction(s))
    guest_range_1 = MemoryHw::ResolveRangeHost(r4, 0, 36u, true, false);
    r0 = MemoryHw::ReadResolved32(guest_range_1, 0u, r4);
    guest_range_2 = MemoryHw::ResolveRangeHost(r3, 0, 36u, false, true);
    MemoryHw::WriteResolved32(guest_range_2, 0u, r3, r0);
    r0 = MemoryHw::ReadResolved32(guest_range_1, 4u, (r4 + 4));
    MemoryHw::WriteResolved32(guest_range_2, 4u, (r3 + 4), r0);
    r0 = MemoryHw::ReadResolved16(guest_range_1, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_2, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved16(guest_range_1, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryHw::WriteResolved16(guest_range_2, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved32(guest_range_1, 12u, (r4 + 12));
    MemoryHw::WriteResolved32(guest_range_2, 12u, (r3 + 12), r0);
    r0 = MemoryHw::ReadResolved16(guest_range_1, 16u, (r4 + 16));
    MemoryHw::WriteResolved16(guest_range_2, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_1, 18u, (r4 + 18));
    MemoryHw::WriteResolved8(guest_range_2, 18u, (r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved8(guest_range_1, 19u, (r4 + 19));
    MemoryHw::WriteResolved8(guest_range_2, 19u, (r3 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryHw::ReadResolved32(guest_range_1, 20u, (r4 + 20));
    MemoryHw::WriteResolved32(guest_range_2, 20u, (r3 + 20), r0);
    r0 = MemoryHw::ReadResolved32(guest_range_1, 24u, (r4 + 24));
    MemoryHw::WriteResolved32(guest_range_2, 24u, (r3 + 24), r0);
    r0 = MemoryHw::ReadResolved32(guest_range_1, 28u, (r4 + 28));
    MemoryHw::WriteResolved32(guest_range_2, 28u, (r3 + 28), r0);
    r0 = MemoryHw::ReadResolved32(guest_range_1, 32u, (r4 + 32));
    MemoryHw::WriteResolved32(guest_range_2, 32u, (r3 + 32), r0);
    // end of inlined leaf 0x801E68B4
    r0 = MemoryHw::FlatRead32((r22 + 24));
    MemoryHw::FlatWriteRam32((r1 + 52), r0);
    r3 = (r1 + 24);
    r4 = 1;
    r5 = (r1 + 16);
    ctx->lr = 0x801FA0B0u;
    if constexpr (KnownRegArgsCpuCall<0x802E0E0Cu>(&func_802E0E0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        const auto regargs_result_802E0E0C_B0C6 = func_802E0E0C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0E0C_B0C6);
        r4 = static_cast<uint32_t>(regargs_result_802E0E0C_B0C6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x802E0E0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    }
    mkw_gqr0 = ctx->gqr[0];
    r20 = -1;
    r0 = MemoryHw::FlatRead8(r22);
}

loc_801FA0BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801FA0CC;
    }
}

loc_801FA0C0:
{
}

loc_801FA0C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801FA0F8;
    }
}

loc_801FA0C8:
{
    goto loc_801FA108;
}

loc_801FA0CC:
{
    ctx->lr = 0x801FA0D0u;
    if constexpr (KnownRegArgsCpuCall<0x801F5528u>(&func_801F5528)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        const auto regargs_result_801F5528_B9F2 = func_801F5528_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801F5528_B9F2);
        r4 = static_cast<uint32_t>(regargs_result_801F5528_B9F2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x801F5528u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryHw::FlatRead8((r22 + 2));
}

loc_801FA0D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801FA0E8;
    }
}

loc_801FA0DC:
{
}

loc_801FA0E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801FA0F0;
    }
}

loc_801FA0E4:
{
    goto loc_801FA108;
}

loc_801FA0E8:
{
    r20 = 284;
    goto loc_801FA108;
}

loc_801FA0F0:
{
    r20 = 287;
    goto loc_801FA108;
}

loc_801FA0F8:
{
    r20 = 292;
    r3 = 6265;
    r4 = MemoryHw::FlatRead32((r22 + 32));
    ctx->lr = 0x801FA108u;
    if constexpr (KnownRegArgsCpuCall<0x802151D4u>(&func_802151D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        const auto regargs_result_802151D4_C3C2 = func_802151D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802151D4_C3C2);
        r4 = static_cast<uint32_t>(regargs_result_802151D4_C3C2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x802151D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_801FA108:
{
}

loc_801FA10C:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(-1))) {
        goto loc_801FA11C;
    }
}

loc_801FA110:
{
    r3 = 6263;
    r4 = r20;
    ctx->lr = 0x801FA11Cu;
    if constexpr (KnownRegArgsCpuCall<0x80214F54u>(&func_80214F54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        const auto regargs_result_80214F54_CC12 = func_80214F54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80214F54_CC12);
        r4 = static_cast<uint32_t>(regargs_result_80214F54_CC12 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x80214F54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_801FA11C:
{
    r0 = 152;
    addr_psqx_801FA120_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_801FA120_loc_0));
    f31.d = MemoryHw::FlatReadFloat64((r1 + 144));
    r11 = (r1 + 144);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_3 = MemoryHw::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryHw::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF80FFFF fpr_write=0xFF80FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801F9D38 func_801F9D38 preserves=true fpr_mask=0x00000000
