#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800518F8(CpuContext* ctx);
extern "C" uint64_t func_800518F8_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_8005D130(CpuContext* ctx);
extern "C" uint64_t func_8005D130_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_801160E4_ra38_3e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5)
{
    uint32_t addr_lfsx_80116260_loc_0 = 0;
    uint32_t addr_lfsx_80116278_loc_0 = 0;
    uint32_t addr_lfsx_80116290_loc_0 = 0;
    uint32_t addr_psqx_801163AC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x801160E4u);
    goto loc_801160E4;

loc_801160E4:
{
    MemoryInline::FlatWriteRam32((r1 + -336), r1);
    r1 = (r1 + -336);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 340), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 320), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 328);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 320);
    // inline leaf 0x8045745C (17 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, false, true);
    // end of inlined leaf 0x8045745C
    r19 = r3;
    r16 = r4;
    r17 = r5;
    r24 = MemoryInline::FlatRead32((r3 + 4));
    r18 = MemoryInline::FlatRead32((r24 + 56));
    r3 = (r1 + 48);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 36);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 24);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 208);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 160);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 112);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 64);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 20);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8005D210u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 16);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8005D210u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryInline::FlatRead32((r19 + 8));
    r0 = (r0 * 288);
    r3 = (r18 + r0);
    r20 = (r3 + 12);
    r3 = r17;
    r4 = 3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80097F7Cu>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 20);
    r4 = (r1 + 12);
    ctx->lr = 0x80116190u;
    if constexpr (KnownRegArgsCpuCall<0x8005D130u>(&func_8005D130)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005D130_1231 = func_8005D130_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005D130_1231);
        r4 = static_cast<uint32_t>(regargs_result_8005D130_1231 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8005D130u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r1 + 20);
    ctx->lr = 0x80116198u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x8006FE30u>(ctx);
    r0 = ctx->gpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
    r0 = (r3 * 48);
    r3 = (r16 + r0);
    r4 = r20;
    // inline leaf 0x80051758 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 44u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r4);
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 44u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, r3, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r3 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r3 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r4 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r3 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r4 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r3 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r4 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r3 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r4 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r3 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r4 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r3 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r4 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r3 + 40), f0.d);
    // end of inlined leaf 0x80051758
    r21 = 4;
    r23 = 0;
    r28 = r20;
    r27 = 0;
    r3 = 0x805A0000u;
    r31 = (r3 + 2564);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -28744));
    r29 = 0x805A0000u;
    r30 = 0x805A0000u;
}

loc_801161CC:
{
    r3 = (r1 + 160);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80053340u>(ctx);
    r3 = (r1 + 112);
    r4 = (r27 + r20);
    r4 = (r4 + 48);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80053340u>(ctx);
    r3 = (r1 + 64);
    r4 = (r27 + r20);
    r4 = (r4 + 96);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80053340u>(ctx);
    r22 = 0;
    r26 = (r29 + 2800);
    r25 = (r30 + 2752);
}

loc_80116204:
{
    r3 = r17;
    r4 = r21;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80097F7Cu>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 20);
    r4 = (r1 + 8);
    ctx->lr = 0x80116220u;
    if constexpr (KnownRegArgsCpuCall<0x8005D130u>(&func_8005D130)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005D130_2220 = func_8005D130_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005D130_2220);
        r4 = static_cast<uint32_t>(regargs_result_8005D130_2220 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8005D130u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r1 + 20);
    ctx->lr = 0x80116228u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x8006FE30u>(ctx);
    r0 = ctx->gpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
    r0 = (r3 * 48);
    r19 = (r16 + r0);
    r6 = MemoryInline::FlatRead32(r26);
    r18 = MemoryInline::FlatRead32(r25);
    r3 = (r1 + 208);
    r4 = (r1 + 160);
    r5 = (r1 + 112);
    f1.d = MemoryInline::FlatReadFloat32(r6);
    f2.d = MemoryInline::FlatReadFloat32((r6 + 4));
    r6 = 1;
    ctx->lr = 0x80116254u;
    if constexpr (KnownRegArgsCpuCall<0x800518F8u>(&func_800518F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[31] = f31;
        const auto regargs_result_800518F8_2923 = func_800518F8_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_800518F8_2923);
        r4 = static_cast<uint32_t>(regargs_result_800518F8_2923 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f31 = ctx->fpr[31];
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
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x800518F8u>(ctx);
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
        f31 = ctx->fpr[31];
    }
    r0 = MemoryInline::FlatRead8((r24 + 2));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 216));
    addr_lfsx_80116260_loc_0 = (r31 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80116260_loc_0);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 216), f0.d);
    r0 = MemoryInline::FlatRead8((r24 + 2));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 232));
    addr_lfsx_80116278_loc_0 = (r31 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80116278_loc_0);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 232), f0.d);
    r0 = MemoryInline::FlatRead8((r24 + 2));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 248));
    addr_lfsx_80116290_loc_0 = (r31 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80116290_loc_0);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 248), f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f1.d = PpcFmulsInline(f0.d, f31.d);
    guest_range_4 = MemoryInline::ResolveRangeHost(r18, 0, 12u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 8u, (r18 + 8));
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 172));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    f1.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 0u, r18);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 4u, (r18 + 4));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f5.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 140));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 92));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f1.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 8u, (r18 + 8));
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 188));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    f1.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 0u, r18);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 4u, (r18 + 4));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f4.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 156));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f1.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 8u, (r18 + 8));
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 204));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    f1.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 0u, r18);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 4u, (r18 + 4));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 220), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 236), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 252), f0.d);
    r3 = r19;
    r4 = (r1 + 208);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80053340u>(ctx);
    r21 = (r21 + 1);
}

loc_8011637C:
{
    if ((static_cast<uint32_t>(r21) >= static_cast<uint32_t>(27))) {
        goto loc_801163A8;
    }
}

loc_80116380:
{
    r26 = (r26 + 4);
    r25 = (r25 + 4);
    r22 = (r22 + 1);
}

loc_80116390:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(6))) {
        goto loc_80116204;
    }
}

loc_80116394:
{
    r28 = (r28 + 48);
    r27 = (r27 + 48);
    r23 = (r23 + 1);
}

loc_801163A4:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(4))) {
        goto loc_801161CC;
    }
}

loc_801163A8:
{
    r0 = 328;
    addr_psqx_801163AC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_801163AC_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 320));
    r11 = (r1 + 320);
    // inline leaf 0x804574A8 (17 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, true, false);
    // end of inlined leaf 0x804574A8
    r0 = MemoryInline::FlatRead32((r1 + 340));
    ctx->lr = r0;
    r1 = (r1 + 336);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801160E4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801160E4_ra38_3e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801160E4 func_801160E4 preserves=true fpr_mask=0x00000000
