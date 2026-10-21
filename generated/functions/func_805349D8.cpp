#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805329D0(CpuContext* ctx);
extern "C" uint64_t func_805329D0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80534030(CpuContext* ctx);
extern "C" uint64_t func_80534030_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80534118(CpuContext* ctx);
extern "C" uint32_t func_80534118_ra38_1fe_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_805349D8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_stfsx_80534B70_loc_0 = 0;
    uint32_t addr_stfsx_80534C78_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r19_rot_0 = 0;
    uint32_t r19_rot_1 = 0;
    uint32_t r19_rot_2 = 0;
    uint32_t r19_rot_3 = 0;
    uint32_t r19_rot_4 = 0;
    uint32_t r19_rot_5 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r23_addr_0 = 0;
    uint32_t r23_addr_1 = 0;
    uint32_t r23_addr_2 = 0;
    uint32_t r23_addr_3 = 0;
    uint32_t r23_addr_4 = 0;
    uint32_t r23_addr_5 = 0;
    uint32_t r23_addr_6 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r27_addr_4 = 0;
    uint32_t r27_addr_5 = 0;
    uint32_t r27_addr_6 = 0;
    uint32_t r27_addr_7 = 0;
    uint32_t r27_addr_8 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x805349D8u);
    goto loc_805349D8;

loc_805349D8:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r11 = (r1 + 80);
    // inline leaf 0x80457468 (14 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    // end of inlined leaf 0x80457468
    r6 = MemoryInline::FlatRead32((r3 + 12));
    r31 = 1380712448;
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    f30.d = MemoryInline::FlatReadFloat32((r2 + -1172));
    r0 = MemoryInline::FlatRead32((r6 + 16));
    r20 = r3;
    r21 = r5;
    r30 = (r31 + 21584);
    r0 = (r6 + r0);
    r22 = 0;
    r4_addr_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_0);
    r28 = (r6 + r0);
    r25 = (r28 + 24);
    goto loc_80534C98;
}

loc_80534A3C:
{
    r0 = MemoryInline::FlatRead32(r25);
    r28_addr_2 = (r28 + r0);
    r3 = MemoryInline::FlatRead32(r28_addr_2);
    r27 = (r28 + r0);
    r24 = (r27 + 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r30));
}

loc_80534A50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80534B8C;
    }
}

loc_80534A54:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80534A78;
    }
}

loc_80534A58:
{
    r0 = (r31 + 19779);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80534A60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80534A88;
    }
}

loc_80534A64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80534C90;
    }
}

loc_80534A68:
{
    r0 = (r31 + 18765);
}

loc_80534A70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_80534C1C;
    }
}

loc_80534A74:
{
    goto loc_80534C90;
}

loc_80534A78:
{
    r0 = (r31 + 21587);
}

loc_80534A80:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_80534B14;
    }
}

loc_80534A84:
{
    goto loc_80534C90;
}

loc_80534A88:
{
    r0 = MemoryInline::FlatRead8((r27 + 4));
    r19 = 0;
    f31.d = MemoryInline::FlatReadFloat32((r20 + 16));
}

loc_80534A98:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80534C90;
    }
}

loc_80534A9C:
{
    goto loc_80534B04;
}

loc_80534AA0:
{
    r0 = MemoryInline::FlatRead32(r24);
    f1.d = f31.d;
    r23 = (r27 + r0);
    r0 = MemoryInline::FlatRead32((r23 + 8));
    r4 = MemoryInline::FlatRead16((r23 + 4));
    r3 = (r23 + r0);
    if constexpr (KnownRegArgsCpuCall<0x80534118u>(&func_80534118)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80534118_200E = func_80534118_ra38_1fe_8_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_80534118_200E;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80534118u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
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
        xer = ctx->xer;
    }
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f30.d));
    // psq_store w=1 quant=5 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 8);
    PPC_PsqStStackInline<1u, 5u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f0.d));
    r6 = -1024;
    r0 = MemoryInline::FlatRead16((r1 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80534AD0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(-1024))) {
        goto loc_80534AD8;
    }
}

loc_80534AD4:
{
    r6 = r0;
}

loc_80534AD8:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r4 = MemoryInline::FlatRead8((r23 + 1));
}

loc_80534AE4:
{
    r3 = r21;
    r5 = 1023;
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(1023))) {
        goto loc_80534AF4;
    }
}

loc_80534AF0:
{
    r5 = r6;
}

loc_80534AF4:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    if constexpr (KnownRegArgsCpuCall<0x805329D0u>(&func_805329D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        const auto regargs_result_805329D0_2B3A = func_805329D0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_805329D0_2B3A);
        r4 = static_cast<uint32_t>(regargs_result_805329D0_2B3A >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        InvokeDirectCpu<0x805329D0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r24 = (r24 + 4);
    r19 = (r19 + 1);
}

loc_80534B04:
{
    r0 = MemoryInline::FlatRead8((r27 + 4));
}

loc_80534B0C:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(r0))) {
        goto loc_80534AA0;
    }
}

loc_80534B10:
{
    goto loc_80534C90;
}

loc_80534B14:
{
    f29.d = MemoryInline::FlatReadFloat32((r20 + 16));
    r29 = 0;
    goto loc_80534B7C;
}

loc_80534B20:
{
    r3 = MemoryInline::FlatRead32(r24);
    r0 = MemoryInline::FlatRead32((r21 + 56));
    r23 = (r27 + r3);
    r27_addr_5 = (r27 + r3);
    r3 = MemoryInline::FlatRead8(r27_addr_5);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_9 & 15);
}

loc_80534B38:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_80534B74;
    }
}

loc_80534B3C:
{
    r0 = MemoryInline::FlatRead32((r23 + 8));
    f1.d = f29.d;
    r4 = MemoryInline::FlatRead16((r23 + 4));
    r3 = (r23 + r0);
    if constexpr (KnownRegArgsCpuCall<0x80534118u>(&func_80534118)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80534118_3450 = func_80534118_ra38_1fe_8_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_80534118_3450;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80534118u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
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
        xer = ctx->xer;
    }
    f31.d = f1.d;
    r19 = MemoryInline::FlatRead8((r23 + 1));
    r23 = MemoryInline::FlatRead8(r23);
    r3 = r21;
    // inline leaf 0x8053241C (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 64));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_10 & 15);
    r0 = (r0 * 28);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8053241C
    r4 = (r23 * 20);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r19), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3 = (r3 + r4);
    addr_stfsx_80534B70_loc_0 = (r3 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80534B70_loc_0, f31.d);
}

loc_80534B74:
{
    r24 = (r24 + 4);
    r29 = (r29 + 1);
}

loc_80534B7C:
{
    r0 = MemoryInline::FlatRead8((r27 + 4));
}

loc_80534B84:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r0))) {
        goto loc_80534B20;
    }
}

loc_80534B88:
{
    goto loc_80534C90;
}

loc_80534B8C:
{
    r23 = MemoryInline::FlatRead32((r20 + 20));
}

loc_80534B94:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_80534C90;
    }
}

loc_80534B98:
{
    f29.d = MemoryInline::FlatReadFloat32((r20 + 16));
    r29 = 0;
    goto loc_80534C0C;
}

loc_80534BA4:
{
    r3 = MemoryInline::FlatRead32(r24);
    r0 = MemoryInline::FlatRead32((r21 + 60));
    r26 = (r27 + r3);
    r27_addr_7 = (r27 + r3);
    r3 = MemoryInline::FlatRead8(r27_addr_7);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_14 & 15);
}

loc_80534BBC:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_80534C04;
    }
}

loc_80534BC0:
{
    r0 = MemoryInline::FlatRead32((r26 + 8));
    f1.d = f29.d;
    r4 = MemoryInline::FlatRead16((r26 + 4));
    r3 = (r26 + r0);
    if constexpr (KnownRegArgsCpuCall<0x80534030u>(&func_80534030)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_80534030_432E = func_80534030_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80534030_432E);
        r4 = static_cast<uint32_t>(regargs_result_80534030_432E >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80534030u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r19_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r19 = (r19_rot_3 & 262140);
    r23_addr_3 = (r23 + r19);
    r0 = MemoryInline::FlatRead32(r23_addr_3);
}

loc_80534BE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80534C04;
    }
}

loc_80534BE4:
{
    r26 = MemoryInline::FlatRead8(r26);
    r3 = r21;
    // inline leaf 0x80532414 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 64));
    // end of inlined leaf 0x80532414
    r0 = (r26 * 28);
    r23_addr_4 = (r23 + r19);
    r4 = MemoryInline::FlatRead32(r23_addr_4);
    r5 = 0;
    r3 = (r3 + r0);
    ctx->lr = 0x80534C04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80533EACu>(ctx);
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
    xer = ctx->xer;
}

loc_80534C04:
{
    r24 = (r24 + 4);
    r29 = (r29 + 1);
}

loc_80534C0C:
{
    r0 = MemoryInline::FlatRead8((r27 + 4));
}

loc_80534C14:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r0))) {
        goto loc_80534BA4;
    }
}

loc_80534C18:
{
    goto loc_80534C90;
}

loc_80534C1C:
{
    f29.d = MemoryInline::FlatReadFloat32((r20 + 16));
    r29 = 0;
    goto loc_80534C84;
}

loc_80534C28:
{
    r3 = MemoryInline::FlatRead32(r24);
    r0 = MemoryInline::FlatRead32((r21 + 56));
    r23 = (r27 + r3);
    r27_addr_3 = (r27 + r3);
    r3 = MemoryInline::FlatRead8(r27_addr_3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(14));
    r0 = (r0_rot_3 & 3);
}

loc_80534C40:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_80534C7C;
    }
}

loc_80534C44:
{
    r0 = MemoryInline::FlatRead32((r23 + 8));
    f1.d = f29.d;
    r4 = MemoryInline::FlatRead16((r23 + 4));
    r3 = (r23 + r0);
    if constexpr (KnownRegArgsCpuCall<0x80534118u>(&func_80534118)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80534118_5273 = func_80534118_ra38_1fe_8_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_80534118_5273;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80534118u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
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
        xer = ctx->xer;
    }
    f31.d = f1.d;
    r19 = MemoryInline::FlatRead8((r23 + 1));
    r23 = MemoryInline::FlatRead8(r23);
    r3 = r21;
    // inline leaf 0x805325D8 (23 guest instruction(s))
    r10 = MemoryInline::FlatRead32((r3 + 56));
    r11 = MemoryInline::FlatRead32((r3 + 64));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(8));
    r3 = (r3_rot_3 & 15);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & 15);
    r4 = (r3 * 20);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(27));
    r6 = (r6_rot_3 & 4);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(26));
    r5 = (r5_rot_3 & 4);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(28));
    r8 = (r8_rot_3 & 4);
    r3 = (r0 * 28);
    r5 = (r6 + r5);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(20));
    r7 = (r7_rot_3 & 4);
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(14));
    r6 = (r6_rot_4 & 60);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(19));
    r9 = (r9_rot_3 & 28);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(29));
    r0 = (r0_rot_5 & 4);
    r0 = (r9 + r0);
    r6 = (r7 + r6);
    r5 = (r8 + r5);
    r3 = (r4 + r3);
    r4 = (r6 + r5);
    r0 = (r11 + r0);
    r3 = (r4 + r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x805325D8
    r4 = (r23 * 20);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r19), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r3 + r4);
    addr_stfsx_80534C78_loc_0 = (r3 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80534C78_loc_0, f31.d);
}

loc_80534C7C:
{
    r24 = (r24 + 4);
    r29 = (r29 + 1);
}

loc_80534C84:
{
    r0 = MemoryInline::FlatRead8((r27 + 4));
}

loc_80534C8C:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r0))) {
        goto loc_80534C28;
    }
}

loc_80534C90:
{
    r25 = (r25 + 4);
    r22 = (r22 + 1);
}

loc_80534C98:
{
    r0 = MemoryInline::FlatRead8((r28 + 20));
}

loc_80534CA0:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(r0))) {
        goto loc_80534A3C;
    }
}

loc_80534CA4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 80);
    f29.d = MemoryInline::FlatReadFloat64((r1 + 80));
    // inline leaf 0x804574B4 (14 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
    // end of inlined leaf 0x804574B4
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_805349D8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805349D8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805349D8 func_805349D8 preserves=true fpr_mask=0x00000000
