#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E0C00(CpuContext* ctx);
extern "C" uint64_t func_800E0C00_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800E324C(CpuContext* ctx);
extern "C" uint64_t func_800E324C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80136160(CpuContext* ctx);
extern "C" uint64_t func_80136160_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80136184(CpuContext* ctx);
extern "C" uint64_t func_80136184_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802B0BE0(CpuContext* ctx);
extern "C" uint64_t func_802B0BE0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802B0C74_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t addr_psqx_802B101C_loc_0 = 0;
    uint32_t addr_psqx_802B1028_loc_0 = 0;
    uint32_t addr_psqx_802B1034_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_10 = 0;
    uint32_t r29_addr_11 = 0;
    uint32_t r29_addr_12 = 0;
    uint32_t r29_addr_13 = 0;
    uint32_t r29_addr_14 = 0;
    uint32_t r29_addr_15 = 0;
    uint32_t r29_addr_16 = 0;
    uint32_t r29_addr_17 = 0;
    uint32_t r29_addr_18 = 0;
    uint32_t r29_addr_19 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r29_addr_4 = 0;
    uint32_t r29_addr_5 = 0;
    uint32_t r29_addr_6 = 0;
    uint32_t r29_addr_7 = 0;
    uint32_t r29_addr_8 = 0;
    uint32_t r29_addr_9 = 0;
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

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
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
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_802B0C74;

loc_802B0C74:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r11 = (r1 + 112);
    // inline leaf 0x80457468 (14 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    // end of inlined leaf 0x80457468
    r19 = r3;
    r3 = (r1 + 8);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8005D210u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 12);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r23 = MemoryInline::FlatRead32((r19 + 4));
    r22 = MemoryInline::FlatRead32((r19 + 8));
    r21 = 0;
    r3 = r19;
    r4 = MemoryInline::FlatRead8((r19 + 3014));
    ctx->lr = 0x802B0CD0u;
    if constexpr (KnownRegArgsCpuCall<0x802B0BE0u>(&func_802B0BE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802B0BE0_145B = func_802B0BE0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802B0BE0_145B);
        r4 = static_cast<uint32_t>(regargs_result_802B0BE0_145B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802B0BE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r29 = r3;
    r20 = 0;
    r0 = 255;
    guest_range_1 = MemoryInline::ResolveRangeHost((r19 + 11949), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r19 + 11949), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r19 + 11950), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r19 + 11951), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r19 + 11952), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r19 + 11953), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r19 + 11954), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r19 + 11955), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r19 + 11956), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r19 + 12176));
}

loc_802B0D04:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802B0D48;
    }
}

loc_802B0D08:
{
    r21 = MemoryInline::FlatRead32((r19 + 16));
}

loc_802B0D10:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_802B1018;
    }
}

loc_802B0D14:
{
    r3 = r21;
    ctx->lr = 0x802B0D1Cu;
    if constexpr (KnownRegArgsCpuCall<0x800E324Cu>(&func_800E324C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E324C_1C41 = func_800E324C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E324C_1C41);
        r4 = static_cast<uint32_t>(regargs_result_800E324C_1C41 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E324Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    mkw_gqr0 = ctx->gqr[0];
    r24 = r3;
    r25 = 0;
    goto loc_802B0D3C;
}

loc_802B0D28:
{
    r3 = r21;
    r4 = (r25 & 255);
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r25 = (r25 + 1);
}

loc_802B0D3C:
{
    r0 = (r25 & 255);
}

loc_802B0D44:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r24))) {
        goto loc_802B0D28;
    }
}

loc_802B0D48:
{
    r25 = 0;
    r31 = 0;
    f29.d = MemoryInline::FlatReadFloat32((r2 + -13848));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -13844));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -13852));
    r30 = 1;
}

loc_802B0D60:
{
    r0 = (r25 & 255);
    r28_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r28 = (r28_rot_2 & -4);
    r29_addr_2 = (r29 + r28);
    r0 = MemoryInline::FlatRead32(r29_addr_2);
}

loc_802B0D70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B100C;
    }
}

loc_802B0D74:
{
    r0 = MemoryInline::FlatRead8((r19 + 12176));
}

loc_802B0D7C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802B0DE8;
    }
}

loc_802B0D80:
{
    r24 = 0;
}

loc_802B0D84:
{
    r29_addr_4 = (r29 + r28);
    r3 = MemoryInline::FlatRead32(r29_addr_4);
    r0 = (r24 & 255);
    r3 = (r3 + r0);
    r4 = MemoryInline::FlatRead8((r3 + 1));
}

loc_802B0D98:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_802B0DB4;
    }
}

loc_802B0D9C:
{
    r3 = r23;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r24 = (r24 + 1);
}

loc_802B0DB0:
{
    if ((static_cast<uint32_t>(r24) < static_cast<uint32_t>(3))) {
        goto loc_802B0D84;
    }
}

loc_802B0DB4:
{
    r24 = 0;
}

loc_802B0DB8:
{
    r29_addr_6 = (r29 + r28);
    r3 = MemoryInline::FlatRead32(r29_addr_6);
    r0 = (r24 & 255);
    r3 = (r3 + r0);
    r4 = MemoryInline::FlatRead8((r3 + 4));
}

loc_802B0DCC:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_802B0DE8;
    }
}

loc_802B0DD0:
{
    r3 = r23;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r24 = (r24 + 1);
}

loc_802B0DE4:
{
    if ((static_cast<uint32_t>(r24) < static_cast<uint32_t>(2))) {
        goto loc_802B0DB8;
    }
}

loc_802B0DE8:
{
    r4 = (r25 & 255);
    r0 = (r4 * 160);
    r3 = (r19 + r0);
    r24 = (r3 + 11308);
    MemoryInline::FlatWrite8(r24, static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r24 + 154), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead8((r19 + 3014));
    // inline leaf 0x802B0B68 (13 guest instruction(s))
    r5 = 16;
    r0 = (r4 & 255);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r4 = 0x806C0000u;
    r4 = (r4 + -21440);
    r0 = (r3 & 255);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 10268));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x802B0B68
}

loc_802B0E0C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802B0E18;
    }
}

loc_802B0E10:
{
    MemoryInline::FlatWrite8((r24 + 155), static_cast<uint8_t>(r31));
    goto loc_802B0E1C;
}

loc_802B0E18:
{
    MemoryInline::FlatWrite8((r24 + 155), static_cast<uint8_t>(r30));
}

loc_802B0E1C:
{
    r0 = MemoryInline::FlatRead8((r19 + 12176));
}

loc_802B0E24:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802B0E2C;
    }
}

loc_802B0E28:
{
    r23 = r21;
}

loc_802B0E2C:
{
    r26 = 0;
}

loc_802B0E30:
{
    r0 = (r26 & 255);
    r27 = (r0 * 12);
    r3 = (r24 + r27);
    r3 = (r3 + 76);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13912));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r24 + r27);
    MemoryInline::FlatWrite32((r3 + 112), r31);
    MemoryInline::FlatWrite32((r3 + 116), r31);
    MemoryInline::FlatWrite32((r3 + 120), r31);
    r4 = (r26 & 255);
    r3 = (r24 + r4);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r31));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3 = (r24 + r0);
    MemoryInline::FlatWrite16((r3 + 148), static_cast<uint16_t>(r31));
    r29_addr_9 = (r29 + r28);
    r0 = MemoryInline::FlatRead32(r29_addr_9);
    r3 = (r0 + r4);
    r5 = MemoryInline::FlatRead8((r3 + 1));
}

loc_802B0E88:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(255))) {
        goto loc_802B0F5C;
    }
}

loc_802B0E8C:
{
    r3 = r23;
    r4 = (r1 + 8);
    ctx->lr = 0x802B0E98u;
    if constexpr (KnownRegArgsCpuCall<0x800E0C00u>(&func_800E0C00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E0C00_34B0 = func_800E0C00_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E0C00_34B0);
        r4 = static_cast<uint32_t>(regargs_result_800E0C00_34B0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E0C00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 8);
    ctx->lr = 0x802B0EA0u;
    if constexpr (KnownRegArgsCpuCall<0x80136160u>(&func_80136160)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80136160_3805 = func_80136160_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136160_3805);
        r4 = static_cast<uint32_t>(regargs_result_80136160_3805 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80136160u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    mkw_gqr0 = ctx->gqr[0];
    r4 = r3;
    r3 = (r24 + r27);
    r3 = (r3 + 4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 8);
    ctx->lr = 0x802B0EB8u;
    if constexpr (KnownRegArgsCpuCall<0x80136184u>(&func_80136184)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80136184_3C00 = func_80136184_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136184_3C00);
        r4 = static_cast<uint32_t>(regargs_result_80136184_3C00 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80136184u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    mkw_gqr0 = ctx->gqr[0];
    r4 = r3;
    r3 = (r1 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r24 + r27);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = PpcFmulsInline(f29.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f30.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword0;
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r3 + 40), r0);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = PpcFmulsInline(f29.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f30.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r0 = fctiwzword1;
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r3 + 44), r0);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = PpcFmulsInline(f29.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f30.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    r0 = fctiwzword2;
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r3 + 48), r0);
    r3 = r23;
    r29_addr_10 = (r29 + r28);
    r4 = MemoryInline::FlatRead32(r29_addr_10);
    r0 = (r26 & 255);
    r4 = (r4 + r0);
    r4 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r24 + 155));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r26 = (r26 + 1);
}

loc_802B0F58:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(3))) {
        goto loc_802B0E30;
    }
}

loc_802B0F5C:
{
    r27 = 0;
}

loc_802B0F60:
{
    r29_addr_13 = (r29 + r28);
    r3 = MemoryInline::FlatRead32(r29_addr_13);
    r0 = (r27 & 255);
    r3 = (r3 + r0);
    r4 = MemoryInline::FlatRead8((r3 + 4));
}

loc_802B0F74:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_802B100C;
    }
}

loc_802B0F78:
{
    r0 = MemoryInline::FlatRead8((r19 + 3013));
}

loc_802B0F80:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_802B0F8C;
    }
}

loc_802B0F84:
{
}

loc_802B0F88:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(14))) {
        goto loc_802B0FAC;
    }
}

loc_802B0F8C:
{
    r0 = MemoryInline::FlatRead8((r19 + 3014));
}

loc_802B0F94:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_802B0FAC;
    }
}

loc_802B0F98:
{
    r23 = MemoryInline::FlatRead32((r19 + 4));
    r3 = r23;
    r5 = MemoryInline::FlatRead8((r24 + 155));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    goto loc_802B0FD4;
}

loc_802B0FAC:
{
    // inline leaf 0x802AFF9C (8 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r0 = MemoryInline::FlatRead8((r3 + 3092));
    r3 = (r0 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x802AFF9C
}

loc_802B0FB4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B0FD4;
    }
}

loc_802B0FB8:
{
    r3 = r22;
    r29_addr_14 = (r29 + r28);
    r4 = MemoryInline::FlatRead32(r29_addr_14);
    r0 = (r27 & 255);
    r4 = (r4 + r0);
    r4 = MemoryInline::FlatRead8((r4 + 4));
    r5 = MemoryInline::FlatRead8((r24 + 155));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
}

loc_802B0FD4:
{
    r0 = MemoryInline::FlatRead8((r24 + 155));
}

loc_802B0FDC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B1000;
    }
}

loc_802B0FE0:
{
    r29_addr_16 = (r29 + r28);
    r3 = MemoryInline::FlatRead32(r29_addr_16);
    r0 = (r27 & 255);
    r3 = (r3 + r0);
    r4 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r20 & 255);
    r3 = (r19 + r0);
    MemoryInline::FlatWrite8((r3 + 11949), static_cast<uint8_t>(r4));
    r20 = (r20 + 1);
}

loc_802B1000:
{
    r27 = (r27 + 1);
}

loc_802B1008:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(2))) {
        goto loc_802B0F60;
    }
}

loc_802B100C:
{
    r25 = (r25 + 1);
}

loc_802B1014:
{
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(4))) {
        goto loc_802B0D60;
    }
}

loc_802B1018:
{
    r0 = 152;
    addr_psqx_802B101C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802B101C_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 144));
    r0 = 136;
    addr_psqx_802B1028_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802B1028_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 128));
    r0 = 120;
    addr_psqx_802B1034_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802B1034_loc_0));
    f29.d = MemoryInline::FlatReadFloat64((r1 + 112));
    r11 = (r1 + 112);
    // inline leaf 0x804574B4 (14 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
    // end of inlined leaf 0x804574B4
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802B0C74(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802B0C74_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FF gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0xE000000F fpr_write=0xE000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802B0C74 func_802B0C74 preserves=true fpr_mask=0x00000000
