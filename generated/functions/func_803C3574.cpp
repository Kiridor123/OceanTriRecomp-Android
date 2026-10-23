#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80051510(CpuContext* ctx);
extern "C" uint64_t func_80051510_ra18_40_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_800AB6BC(CpuContext* ctx);
extern "C" uint64_t func_800AB6BC_ra18_1a_18_0(CpuContext*, uint32_t, uint32_t, double, double, double);
extern "C" void func_8012D090(CpuContext* ctx);
extern "C" uint64_t func_8012D090_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801A9EC4(CpuContext* ctx);
extern "C" uint64_t func_801A9EC4_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_803BEE9C(CpuContext* ctx);
extern "C" uint32_t func_803BEE9C_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803C3574_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lfsx_803A7DF8_loc_0 = 0;
    uint32_t addr_psqx_803C3A44_loc_0 = 0;
    uint32_t addr_psqx_803C3A50_loc_0 = 0;
    uint32_t addr_psqx_803C3A5C_loc_0 = 0;
    uint32_t addr_psqx_803C3A68_loc_0 = 0;
    uint32_t addr_psqx_803C3A74_loc_0 = 0;
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
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t stackword14 = 0;
    uint32_t stackword15 = 0;
    uint32_t stackword17 = 0;
    uint32_t stackword18 = 0;
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
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_803C3574;

loc_803C3574:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -224), 0, 232u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 228u, (r1 + 228), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 208u, (r1 + 208), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 192u, (r1 + 192), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 176u, (r1 + 176), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 160u, (r1 + 160), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 144u, (r1 + 144), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 144);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r23 = r3;
    r3 = (r1 + 40);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 28);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r25 = MemoryInline::FlatRead32((r23 + 56));
    r0 = MemoryInline::FlatRead32((r2 + -5216));
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r1 + 20), r0);
    r0 = MemoryInline::FlatRead32((r2 + -5212));
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 16), r0);
    r0 = MemoryInline::FlatRead8((r23 + 2));
}

loc_803C35E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803C35F0;
    }
}

loc_803C35E4:
{
}

loc_803C35E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803C37F0;
    }
}

loc_803C35EC:
{
    goto loc_803C3A40;
}

loc_803C35F0:
{
    r24 = MemoryInline::FlatRead32((r23 + 48));
    r22 = MemoryInline::FlatRead32(r24);
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_803C3604:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_803C3620;
    }
}

loc_803C3608:
{
    r3 = MemoryInline::FlatRead8((r23 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r23 + 5), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r23 + 1), static_cast<uint8_t>(r0));
    goto loc_803C3A40;
}

loc_803C3620:
{
    r0 = MemoryInline::FlatRead8((r22 + 1));
    MemoryInline::FlatWrite8((r23 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r22 + 22));
    MemoryInline::FlatWrite8((r23 + 68), static_cast<uint8_t>(r3));
    r4 = (r1 + 9);
    r5 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x803BEE9Cu>(&func_803BEE9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_803BEE9C_1C1C = func_803BEE9C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_803BEE9C_1C1C;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x803BEE9Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
    }
    r26 = 0;
    r30 = (r24 + 352);
    r29 = r25;
    r28 = (r25 + 4);
    r3 = 0x806B0000u;
    r31 = (r3 + -12348);
    f28.d = MemoryInline::FlatReadFloat64((r2 + -5160));
    r22 = 1127219200;
    f29.d = MemoryInline::FlatReadFloat32((r2 + -5200));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -5196));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -5208));
    goto loc_803C37C8;
}

loc_803C366C:
{
    r27 = (r24 + r26);
    r0 = MemoryInline::FlatRead8((r27 + 342));
}

loc_803C3678:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803C37B8;
    }
}

loc_803C367C:
{
    r0 = (r0 & 1);
}

loc_803C3684:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803C37B8;
    }
}

loc_803C3688:
{
    f27.d = MemoryInline::FlatReadFloat32((r2 + -5208));
    r3 = (r1 + 24);
    r4 = (r25 + 38);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    r3 = (r1 + 28);
    r4 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead8((r1 + 9));
    r0 = (r26 + r0);
    r3 = (r31 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 308));
    // inline leaf 0x803A7DC8 (14 guest instruction(s))
}

loc_inl5_0x803A7DC8:
{
    r0 = (r3 & 255);
}

loc_inl5_0x803A7DD0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_inl5_0x803A7DDC;
    }
}

loc_inl5_0x803A7DD4:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5680));
    goto loc_inl5_cont_803A7DC8;
}

loc_inl5_0x803A7DDC:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3 = 0x805F0000u;
    r3 = (r3 + 10432);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_2);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = 0x805F0000u;
    r3 = (r3 + 10488);
    addr_lfsx_803A7DF8_loc_0 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_803A7DF8_loc_0);
}

loc_inl5_cont_803A7DC8:
{
    // end of inlined leaf 0x803A7DC8
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    r0 = MemoryInline::FlatRead8((r27 + 342));
    r0 = (r0 & 4);
}

loc_803C36D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803C3720;
    }
}

loc_803C36D4:
{
    f27.d = MemoryInline::FlatReadFloat32((r2 + -5204));
    r3 = (r1 + 24);
    r4 = (r1 + 20);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    r0 = MemoryInline::FlatRead16((r25 + 36));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r0 = (r0 & 65535);
    r0 = (r0 ^ -2147483648);
    stackword14 = r0;
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    stackword15 = r22;
    MemoryInline::FlatWriteRam32((r1 + 88), r22);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword15), static_cast<uint32_t>(stackword14));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    f0.d = PpcFmulsInline(f29.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f30.d));
    if constexpr (KnownRegArgsCpuCall<0x800AB6BCu>(&func_800AB6BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        const auto regargs_result_800AB6BC_300A = func_800AB6BC_ra18_1a_18_0(ctx, r3, r4, f1.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_800AB6BC_300A);
        r4 = static_cast<uint32_t>(regargs_result_800AB6BC_300A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x800AB6BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    f1.d = PpcFmulsInline(f31.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
}

loc_803C3720:
{
    r0 = MemoryInline::FlatRead8((r27 + 342));
    r0 = (r0 & 2);
}

loc_803C372C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803C373C;
    }
}

loc_803C3730:
{
    r3 = (r1 + 24);
    r4 = (r1 + 16);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
}

loc_803C373C:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r3 = (r3 + 28);
    f1.d = f27.d;
    f2.d = f27.d;
    f3.d = f27.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r0 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = 0;
    r5 = 4;
    r6 = (r1 + 12);
    r7 = 0;
    ctx->lr = 0x803C3774u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[6] = f6;
    InvokeDirectCpu<0x800E2950u>(ctx);
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
    f6 = ctx->fpr[6];
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r3 = (r3 + 4);
    r4 = (r1 + 28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r3 = (r3 + 40);
    r4 = (r23 + 36);
    // inline leaf 0x800FC138 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    // end of inlined leaf 0x800FC138
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = 0;
    ctx->lr = 0x803C37A0u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[6] = f6;
    InvokeDirectCpu<0x800E078Cu>(ctx);
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
    f6 = ctx->fpr[6];
    mkw_gqr0 = ctx->gqr[0];
    r3 = r23;
    r4 = r28;
    r5 = 2;
    r6 = 1;
    r7 = 0;
    ctx->lr = 0x803C37B8u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[6] = f6;
    InvokeDirectCpu<0x800F943Cu>(ctx);
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
    f6 = ctx->fpr[6];
    mkw_gqr0 = ctx->gqr[0];
}

loc_803C37B8:
{
    r30 = (r30 + 12);
    r29 = (r29 + 4);
    r28 = (r28 + 4);
    r26 = (r26 + 1);
}

loc_803C37C8:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_803C37D0:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r0))) {
        goto loc_803C366C;
    }
}

loc_803C37D4:
{
    r3 = MemoryInline::FlatRead32((r23 + 40));
    r3 = MH3_TickLoad(r3, 2151430100);
    r0 = (r3 + 255);
    MemoryInline::FlatWrite32((r23 + 40), r0);
    r3 = MemoryInline::FlatRead16((r25 + 36));
    r3 = MH3_TickLoad(r3, 2151430112);
    r0 = (r3 + 512);
    MemoryInline::FlatWrite16((r25 + 36), static_cast<uint16_t>(r0));
    goto loc_803C3A40;
}

loc_803C37F0:
{
    r24 = MemoryInline::FlatRead32((r23 + 48));
    r0 = MemoryInline::FlatRead16((r25 + 36));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r0 = (r0 & 65535);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -5160));
    r0 = (r0 ^ -2147483648);
    stackword17 = r0;
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    r0 = 1127219200;
    stackword18 = r0;
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword18), static_cast<uint32_t>(stackword17));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5200));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5196));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    if constexpr (KnownRegArgsCpuCall<0x800AB6BCu>(&func_800AB6BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        const auto regargs_result_800AB6BC_4CD5 = func_800AB6BC_ra18_1a_18_0(ctx, r3, r4, f1.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_800AB6BC_4CD5);
        r4 = static_cast<uint32_t>(regargs_result_800AB6BC_4CD5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x800AB6BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5192));
    f27.d = PpcFmulsInline(f0.d, f1.d);
    r3 = MemoryInline::FlatRead8((r23 + 68));
    r0 = MemoryInline::FlatRead8((r24 + 481));
}

loc_803C3844:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803C3868;
    }
}

loc_803C3848:
{
    r3 = r24;
    // inline leaf 0x8012D068 (10 guest instruction(s))
}

loc_inl10_0x8012D068:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl10_0x8012D070:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl10_0x8012D088;
    }
}

loc_inl10_0x8012D074:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_inl10_0x8012D07C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_inl10_0x8012D088;
    }
}

loc_inl10_0x8012D080:
{
    r3 = 0;
    goto loc_inl10_cont_8012D068;
}

loc_inl10_0x8012D088:
{
    r3 = 1;
}

loc_inl10_cont_8012D068:
{
    // end of inlined leaf 0x8012D068
}

loc_803C3854:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803C3868;
    }
}

loc_803C3858:
{
    r3 = r24;
    ctx->lr = 0x803C3860u;
    if constexpr (KnownRegArgsCpuCall<0x8012D090u>(&func_8012D090)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8012D090_5618 = func_8012D090_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012D090_5618);
        r4 = static_cast<uint32_t>(regargs_result_8012D090_5618 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8012D090u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_803C3864:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803C3880;
    }
}

loc_803C3868:
{
    r3 = MemoryInline::FlatRead8((r23 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r23 + 5), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r23 + 1), static_cast<uint8_t>(r0));
    goto loc_803C3A40;
}

loc_803C3880:
{
    r6 = 0;
    r5 = r25;
    r4 = 0;
    goto loc_803C38A0;
}

loc_803C3890:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite8((r3 + 52), static_cast<uint8_t>(r4));
    r5 = (r5 + 4);
    r6 = (r6 + 1);
}

loc_803C38A0:
{
    r0 = MemoryInline::FlatRead32(r25);
}

loc_803C38A8:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r0))) {
        goto loc_803C3890;
    }
}

loc_803C38AC:
{
    r3 = r24;
    ctx->lr = 0x803C38B4u;
    if constexpr (KnownRegArgsCpuCall<0x801A9EC4u>(&func_801A9EC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        const auto regargs_result_801A9EC4_5D6A = func_801A9EC4_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_801A9EC4_5D6A);
        r4 = static_cast<uint32_t>(regargs_result_801A9EC4_5D6A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f30 = ctx->fpr[30];
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x801A9EC4u>(ctx);
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
    }
    r0 = (r3 & 255);
}

loc_803C38BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803C38CC;
    }
}

loc_803C38C0:
{
}

loc_803C38C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803C3920;
    }
}

loc_803C38C8:
{
    goto loc_803C39BC;
}

loc_803C38CC:
{
    r3 = r24;
    r4 = 37;
    r5 = (r1 + 40);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80135994u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 28);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5188));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5184));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f27.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -5180));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 28);
    r4 = (r1 + 40);
    ctx->lr = 0x803C3900u;
    if constexpr (KnownRegArgsCpuCall<0x80051510u>(&func_80051510)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        const auto regargs_result_80051510_67F8 = func_80051510_ra18_40_18_0(ctx, r3, r4, f6.d);
        r3 = static_cast<uint32_t>(regargs_result_80051510_67F8);
        r4 = static_cast<uint32_t>(regargs_result_80051510_67F8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f6 = ctx->fpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[6] = f6;
        InvokeDirectCpu<0x80051510u>(ctx);
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
        f6 = ctx->fpr[6];
    }
    r3 = MemoryInline::FlatRead32((r25 + 4));
    r3 = (r3 + 4);
    r4 = (r1 + 28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r25 + 4));
    MemoryInline::FlatWrite8((r3 + 52), static_cast<uint8_t>(r0));
    goto loc_803C39BC;
}

loc_803C3920:
{
    r3 = r24;
    r4 = 20;
    r5 = (r1 + 40);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80135994u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 28);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5176));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5172));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f27.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -5168));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 28);
    r4 = (r1 + 40);
    ctx->lr = 0x803C3954u;
    if constexpr (KnownRegArgsCpuCall<0x80051510u>(&func_80051510)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        const auto regargs_result_80051510_7223 = func_80051510_ra18_40_18_0(ctx, r3, r4, f6.d);
        r3 = static_cast<uint32_t>(regargs_result_80051510_7223);
        r4 = static_cast<uint32_t>(regargs_result_80051510_7223 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f6 = ctx->fpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[6] = f6;
        InvokeDirectCpu<0x80051510u>(ctx);
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
        f6 = ctx->fpr[6];
    }
    r3 = MemoryInline::FlatRead32((r25 + 4));
    r3 = (r3 + 4);
    r4 = (r1 + 28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r26 = 1;
    r3 = MemoryInline::FlatRead32((r25 + 4));
    MemoryInline::FlatWrite8((r3 + 52), static_cast<uint8_t>(r26));
    r3 = r24;
    r4 = 20;
    r5 = (r1 + 40);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80135994u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 28);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5164));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5172));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f27.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -5168));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 28);
    r4 = (r1 + 40);
    ctx->lr = 0x803C39A4u;
    if constexpr (KnownRegArgsCpuCall<0x80051510u>(&func_80051510)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        const auto regargs_result_80051510_7C21 = func_80051510_ra18_40_18_0(ctx, r3, r4, f6.d);
        r3 = static_cast<uint32_t>(regargs_result_80051510_7C21);
        r4 = static_cast<uint32_t>(regargs_result_80051510_7C21 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f6 = ctx->fpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[6] = f6;
        InvokeDirectCpu<0x80051510u>(ctx);
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
        f6 = ctx->fpr[6];
    }
    r3 = MemoryInline::FlatRead32((r25 + 8));
    r3 = (r3 + 4);
    r4 = (r1 + 28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = MemoryInline::FlatRead32((r25 + 8));
    MemoryInline::FlatWrite8((r3 + 52), static_cast<uint8_t>(r26));
}

loc_803C39BC:
{
    r26 = 0;
    r22 = r25;
    r24 = (r25 + 4);
    goto loc_803C3A1C;
}

loc_803C39CC:
{
    r3 = MemoryInline::FlatRead32((r22 + 4));
    r3 = (r3 + 40);
    r4 = (r23 + 36);
    // inline leaf 0x800FC138 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    // end of inlined leaf 0x800FC138
    r3 = MemoryInline::FlatRead32((r22 + 4));
    r4 = 0;
    ctx->lr = 0x803C39E8u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[6] = f6;
    InvokeDirectCpu<0x800E078Cu>(ctx);
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
    f6 = ctx->fpr[6];
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryInline::FlatRead32((r22 + 4));
    r0 = MemoryInline::FlatRead8((r3 + 52));
}

loc_803C39F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803C3A10;
    }
}

loc_803C39F8:
{
    r3 = r23;
    r4 = r24;
    r5 = 2;
    r6 = 1;
    r7 = 0;
    ctx->lr = 0x803C3A10u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[6] = f6;
    InvokeDirectCpu<0x800F943Cu>(ctx);
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
    f6 = ctx->fpr[6];
    mkw_gqr0 = ctx->gqr[0];
}

loc_803C3A10:
{
    r22 = (r22 + 4);
    r24 = (r24 + 4);
    r26 = (r26 + 1);
}

loc_803C3A1C:
{
    r0 = MemoryInline::FlatRead32(r25);
}

loc_803C3A24:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r0))) {
        goto loc_803C39CC;
    }
}

loc_803C3A28:
{
    r3 = MemoryInline::FlatRead32((r23 + 40));
    r3 = MH3_TickLoad(r3, 2151430696);
    r0 = (r3 + 255);
    MemoryInline::FlatWrite32((r23 + 40), r0);
    r3 = MemoryInline::FlatRead16((r25 + 36));
    r3 = MH3_TickLoad(r3, 2151430708);
    r0 = (r3 + 512);
    MemoryInline::FlatWrite16((r25 + 36), static_cast<uint16_t>(r0));
}

loc_803C3A40:
{
    r0 = 216;
    addr_psqx_803C3A44_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803C3A44_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 208));
    r0 = 200;
    addr_psqx_803C3A50_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803C3A50_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 192));
    r0 = 184;
    addr_psqx_803C3A5C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803C3A5C_loc_0));
    f29.d = MemoryInline::FlatReadFloat64((r1 + 176));
    r0 = 168;
    addr_psqx_803C3A68_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803C3A68_loc_0));
    f28.d = MemoryInline::FlatReadFloat64((r1 + 160));
    r0 = 152;
    addr_psqx_803C3A74_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803C3A74_loc_0));
    f27.d = MemoryInline::FlatReadFloat64((r1 + 144));
    r11 = (r1 + 144);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 228));
    ctx->lr = r0;
    r1 = (r1 + 224);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[6] = f6;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803C3574(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803C3574_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803C3574 func_803C3574 preserves=true fpr_mask=0x00000000
