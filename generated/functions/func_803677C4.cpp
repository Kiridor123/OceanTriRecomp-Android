#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005001C(CpuContext* ctx);
extern "C" double func_8005001C_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80051278(CpuContext* ctx);
extern "C" uint64_t func_80051278_ra18_18_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_800DDD1C(CpuContext* ctx);
extern "C" uint64_t func_800DDD1C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80117F60(CpuContext* ctx);
extern "C" uint64_t func_80117F60_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80119C14(CpuContext* ctx);
extern "C" uint64_t func_80119C14_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_803677C4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_803683AC_loc_0 = 0;
    uint32_t addr_psqx_803683B8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t fctiwzword0 = 0;
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
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword23 = 0;
    uint32_t stackword28 = 0;
    uint32_t stackword31 = 0;
    uint32_t stackword32 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    const uint32_t r23_entry = r23;
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_803677C4;

loc_803677C4:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -208), 0, 216u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -208), r1);
    r1 = (r1 + -208);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 212u, (r1 + 212), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 192u, (r1 + 192), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 176u, (r1 + 176), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 176);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r23 = r3;
    r24 = r4;
    r0 = 1127219200;
    stackword11 = r0;
    MemoryInline::WriteResolved32(guest_range_3, 104u, (r1 + 104), r0);
    r0 = 1127219200;
    stackword12 = r0;
    MemoryInline::WriteResolved32(guest_range_3, 112u, (r1 + 112), r0);
    r28 = 0;
    r3 = (r1 + 92);
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -9056), 0, 148u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -9056));
    f2.d = f1.d;
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r2 + -8976));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 92u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 92u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 96u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 100u, (r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    f30.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -9056));
    r27 = MemoryInline::FlatRead32((r23 + 56));
    r3 = (r1 + 80);
    f1.d = f30.d;
    f2.d = f30.d;
    f3.d = f30.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 80u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 80u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 84u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 88u, (r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = 0x806C0000u;
    r25 = (r3 + -9184);
    r3 = (r1 + 68);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -9056));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 68u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 68u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 72u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 76u, (r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = MemoryInline::FlatRead8((r27 + 36));
    r0 = (r3 + -3);
}

loc_8036785C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_803678B8;
    }
}

loc_80367860:
{
}

loc_80367864:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_80367878;
    }
}

loc_80367868:
{
    r26 = 0;
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 84u, (r2 + -8972));
    r28 = 8192;
    goto loc_80367918;
}

loc_80367878:
{
    r3 = (r27 + r24);
    r0 = MemoryInline::FlatRead8((r3 + 37));
}

loc_80367884:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80367894;
    }
}

loc_80367888:
{
}

loc_8036788C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803678A0;
    }
}

loc_80367890:
{
    goto loc_803678AC;
}

loc_80367894:
{
    r26 = 1;
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 88u, (r2 + -8968));
    goto loc_80367918;
}

loc_803678A0:
{
    r26 = 2;
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 92u, (r2 + -8964));
    goto loc_80367918;
}

loc_803678AC:
{
    r26 = 3;
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 88u, (r2 + -8968));
    goto loc_80367918;
}

loc_803678B8:
{
    r3 = (r27 + r24);
    r0 = MemoryInline::FlatRead8((r3 + 37));
}

loc_803678C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803678DC;
    }
}

loc_803678C8:
{
}

loc_803678CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803678EC;
    }
}

loc_803678D0:
{
}

loc_803678D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_803678FC;
    }
}

loc_803678D8:
{
    goto loc_8036790C;
}

loc_803678DC:
{
    r26 = 4;
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 96u, (r2 + -8960));
    r28 = 5376;
    goto loc_80367918;
}

loc_803678EC:
{
    r26 = 5;
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 100u, (r2 + -8956));
    r28 = 4096;
    goto loc_80367918;
}

loc_803678FC:
{
    r26 = 6;
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 84u, (r2 + -8972));
    r28 = 6656;
    goto loc_80367918;
}

loc_8036790C:
{
    r26 = 7;
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 100u, (r2 + -8956));
    r28 = 8192;
}

loc_80367918:
{
    r29_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(2));
    r29 = (r29_rot_0 & -4);
    r30 = (r27 + r29);
    r3 = MemoryInline::FlatRead32((r30 + 64));
    r3 = MH3_TickLoad(r3, 2151053600);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 64), r0);
    r31 = (r27 + r24);
    r4 = MemoryInline::FlatRead8((r31 + 96));
}

loc_80367938:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(9))) {
        goto loc_803682EC;
    }
}

loc_8036793C:
{
    r3 = 0x805F0000u;
    r3 = (r3 + -6188);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80367954u:
        goto loc_80367954;
        break;
    case 0x80367A00u:
        goto loc_80367A00;
        break;
    case 0x80367CE0u:
        goto loc_80367CE0;
        break;
    case 0x80367E24u:
        goto loc_80367E24;
        break;
    case 0x80367ED4u:
        goto loc_80367ED4;
        break;
    case 0x80367FF8u:
        goto loc_80367FF8;
        break;
    case 0x8036811Cu:
        goto loc_8036811C;
        break;
    case 0x80368140u:
        goto loc_80368140;
        break;
    case 0x803681C8u:
        goto loc_803681C8;
        break;
    case 0x8036823Cu:
        goto loc_8036823C;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80367954:
{
    r0 = MemoryInline::FlatRead8(r25);
}

loc_8036795C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803682EC;
    }
}

loc_80367960:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r31 + 96), static_cast<uint8_t>(r0));
}

loc_8036796C:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(1))) {
        goto loc_803679AC;
    }
}

loc_80367970:
{
}

loc_80367974:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(2))) {
        goto loc_803679B8;
    }
}

loc_80367978:
{
}

loc_8036797C:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(3))) {
        goto loc_803679C4;
    }
}

loc_80367980:
{
}

loc_80367984:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(4))) {
        goto loc_803679D0;
    }
}

loc_80367988:
{
}

loc_8036798C:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(5))) {
        goto loc_803679DC;
    }
}

loc_80367990:
{
}

loc_80367994:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(6))) {
        goto loc_803679E8;
    }
}

loc_80367998:
{
}

loc_8036799C:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(7))) {
        goto loc_803679F4;
    }
}

loc_803679A0:
{
    r0 = -30;
    MemoryInline::FlatWrite32((r30 + 64), r0);
    goto loc_803682EC;
}

loc_803679AC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 64), r0);
    goto loc_803682EC;
}

loc_803679B8:
{
    r0 = -6;
    MemoryInline::FlatWrite32((r30 + 64), r0);
    goto loc_803682EC;
}

loc_803679C4:
{
    r0 = -2;
    MemoryInline::FlatWrite32((r30 + 64), r0);
    goto loc_803682EC;
}

loc_803679D0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 64), r0);
    goto loc_803682EC;
}

loc_803679DC:
{
    r0 = -6;
    MemoryInline::FlatWrite32((r30 + 64), r0);
    goto loc_803682EC;
}

loc_803679E8:
{
    r0 = -2;
    MemoryInline::FlatWrite32((r30 + 64), r0);
    goto loc_803682EC;
}

loc_803679F4:
{
    r0 = -4;
    MemoryInline::FlatWrite32((r30 + 64), r0);
    goto loc_803682EC;
}

loc_80367A00:
{
    r0 = MemoryInline::FlatRead32((r30 + 64));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(15));
}

loc_80367A08:
{
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80367B08;
    }
}

loc_80367A0C:
{
}

loc_80367A10:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_80367B08;
    }
}

loc_80367A14:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80367A70;
    }
}

loc_80367A18:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r23 + 68));
}

loc_80367A28:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80367A70;
    }
}

loc_80367A2C:
{
    r3 = (r1 + 68);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -9056));
    f2.d = f1.d;
    f3.d = f31.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r25 = r30;
    r3 = (r1 + 68);
    r4 = MemoryInline::FlatRead32((r25 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 44));
    ctx->lr = 0x80367A54u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800510C8u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 68);
    r4 = MemoryInline::FlatRead32((r25 + 4));
    r4 = (r4 + 4);
    ctx->lr = 0x80367A64u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = 14;
    r4 = (r1 + 68);
    ctx->lr = 0x80367A70u;
    if constexpr (KnownRegArgsCpuCall<0x800DDD1Cu>(&func_800DDD1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DDD1C_45DB = func_800DDD1C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800DDD1C_45DB);
        r4 = static_cast<uint32_t>(regargs_result_800DDD1C_45DB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DDD1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_80367A70:
{
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl6_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl6_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl6_0x800CEF40;
    }
}

loc_inl6_0x800CEF3C:
{
    r0 = 1;
}

loc_inl6_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_3 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl6_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r3 = (r3 & 65535);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(28));
    r0 = (r0_rot_4 & -268435456);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 - r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & -1);
    r3 = (r0 + r3);
    r0 = (r3 + -8);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -9008));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 104));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    r3 = MemoryInline::FlatRead32((r30 + 64));
    r0 = (r3 + -15);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 112));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -8944));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9048));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9036));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9052));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 120), f0.d);
    r0 = fctiwzword0;
    r4 = (r0 & 65535);
    r3 = (r27 + r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 48));
    r0 = (r0 - r4);
    MemoryInline::FlatWrite32((r3 + 48), r0);
}

loc_80367B08:
{
    r0 = MemoryInline::FlatRead32((r30 + 64));
}

loc_80367B10:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(45))) {
        goto loc_803682EC;
    }
}

loc_80367B14:
{
    r3 = MemoryInline::FlatRead8((r31 + 96));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 96), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 64), r0);
    r3 = MemoryInline::FlatRead8((r27 + 36));
}

loc_80367B30:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(2))) {
        goto loc_80367BD4;
    }
}

loc_80367B34:
{
    r25 = (r27 + r29);
    r5 = MemoryInline::FlatRead32((r25 + 4));
    r3 = 7;
    r4 = (r5 + 4);
    r5 = (r5 + 40);
    r6 = MemoryInline::FlatRead8((r23 + 68));
    f1.d = f31.d;
    ctx->lr = 0x80367B54u;
    if constexpr (KnownRegArgsCpuCall<0x80117F60u>(&func_80117F60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80117F60_59B5 = func_80117F60_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80117F60_59B5);
        r4 = static_cast<uint32_t>(regargs_result_80117F60_59B5 >> 32);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80117F60u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 44);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -9056));
    f2.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -8940));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r1 + 68);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 68);
    r4 = MemoryInline::FlatRead32((r25 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 44));
    ctx->lr = 0x80367B84u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800510C8u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 68);
    r4 = MemoryInline::FlatRead32((r25 + 4));
    r4 = (r4 + 4);
    ctx->lr = 0x80367B94u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = (r1 + 56);
    r4 = MemoryInline::FlatRead32((r25 + 4));
    r4 = (r4 + 40);
    // inline leaf 0x800FC138 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x800FC138
    r3 = MemoryInline::FlatRead32((r1 + 60));
    r3 = (r3 + 65536);
    r0 = (r3 + -32768);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    r3 = 8;
    r4 = (r1 + 68);
    r5 = (r1 + 56);
    r6 = MemoryInline::FlatRead8((r23 + 68));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -8936));
    r7 = 0;
    ctx->lr = 0x80367BD0u;
    if constexpr (KnownRegArgsCpuCall<0x80119C14u>(&func_80119C14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80119C14_6CDA = func_80119C14_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80119C14_6CDA);
        r4 = static_cast<uint32_t>(regargs_result_80119C14_6CDA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80119C14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_80367C80;
}

loc_80367BD4:
{
    r0 = (r3 + 251);
    r0 = (r0 & 255);
}

loc_80367BE0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80367C80;
    }
}

loc_80367BE4:
{
    r25 = (r27 + r29);
    r5 = MemoryInline::FlatRead32((r25 + 4));
    r3 = 10;
    r4 = (r5 + 4);
    r5 = (r5 + 40);
    r6 = MemoryInline::FlatRead8((r23 + 68));
    f1.d = f31.d;
    ctx->lr = 0x80367C04u;
    if constexpr (KnownRegArgsCpuCall<0x80117F60u>(&func_80117F60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80117F60_7463 = func_80117F60_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80117F60_7463);
        r4 = static_cast<uint32_t>(regargs_result_80117F60_7463 >> 32);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80117F60u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 32);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -9056));
    f2.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -8932));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r1 + 68);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 68);
    r4 = MemoryInline::FlatRead32((r25 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 44));
    ctx->lr = 0x80367C34u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800510C8u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 68);
    r4 = MemoryInline::FlatRead32((r25 + 4));
    r4 = (r4 + 4);
    ctx->lr = 0x80367C44u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = (r1 + 56);
    r4 = MemoryInline::FlatRead32((r25 + 4));
    r4 = (r4 + 40);
    // inline leaf 0x800FC138 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x800FC138
    r3 = MemoryInline::FlatRead32((r1 + 60));
    r3 = (r3 + 65536);
    r0 = (r3 + -32768);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    r3 = 13;
    r4 = (r1 + 68);
    r5 = (r1 + 56);
    r6 = MemoryInline::FlatRead8((r23 + 68));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -8944));
    r7 = 0;
    ctx->lr = 0x80367C80u;
    if constexpr (KnownRegArgsCpuCall<0x80119C14u>(&func_80119C14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80119C14_8789 = func_80119C14_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80119C14_8789);
        r4 = static_cast<uint32_t>(regargs_result_80119C14_8789 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80119C14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_80367C80:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r23 + 68));
}

loc_80367C90:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_803682EC;
    }
}

loc_80367C94:
{
    r3 = (r1 + 68);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -9056));
    f2.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -9052));
    f3.d = PpcFmulsInline(f31.d, f0.d);
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r23 = (r27 + r29);
    r3 = (r1 + 68);
    r4 = MemoryInline::FlatRead32((r23 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 44));
    ctx->lr = 0x80367CC0u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800510C8u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 68);
    r4 = MemoryInline::FlatRead32((r23 + 4));
    r4 = (r4 + 4);
    ctx->lr = 0x80367CD0u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = 2;
    r4 = (r1 + 68);
    ctx->lr = 0x80367CDCu;
    if constexpr (KnownRegArgsCpuCall<0x800DDD1Cu>(&func_800DDD1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DDD1C_9599 = func_800DDD1C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800DDD1C_9599);
        r4 = static_cast<uint32_t>(regargs_result_800DDD1C_9599 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DDD1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_803682EC;
}

loc_80367CE0:
{
}

loc_80367CE4:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_80367CFC;
    }
}

loc_80367CE8:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 48));
    r0 = (r0 - r28);
    MemoryInline::FlatWrite32((r3 + 48), r0);
    goto loc_80367D1C;
}

loc_80367CFC:
{
    r0 = (r26 + 252);
    r0 = (r0 & 255);
}

loc_80367D08:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_80367D1C;
    }
}

loc_80367D0C:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 48));
    r0 = (r0 + r28);
    MemoryInline::FlatWrite32((r3 + 48), r0);
}

loc_80367D1C:
{
    r3 = MemoryInline::FlatRead32((r30 + 64));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 104u, (r2 + -8952));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 48u, (r2 + -9008));
    r0 = (r3 ^ -2147483648);
    stackword23 = r0;
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword11), static_cast<uint32_t>(stackword23));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 108u, (r2 + -8948));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f30.d = PpcFmulsInline(f2.d, f0.d);
}

loc_80367D4C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80367E00;
    }
}

loc_80367D50:
{
    r3 = MemoryInline::FlatRead8((r27 + 36));
    r0 = (r3 + 251);
    r0 = (r0 & 255);
}

loc_80367D60:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80367E00;
    }
}

loc_80367D64:
{
    r25 = (r27 + r29);
    r5 = MemoryInline::FlatRead32((r25 + 4));
    r3 = 10;
    r4 = (r5 + 4);
    r5 = (r5 + 40);
    r6 = MemoryInline::FlatRead8((r23 + 68));
    f1.d = f31.d;
    ctx->lr = 0x80367D84u;
    if constexpr (KnownRegArgsCpuCall<0x80117F60u>(&func_80117F60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80117F60_A235 = func_80117F60_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80117F60_A235);
        r4 = static_cast<uint32_t>(regargs_result_80117F60_A235 >> 32);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80117F60u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -9056));
    f2.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -8928));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r1 + 68);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 68);
    r4 = MemoryInline::FlatRead32((r25 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 44));
    ctx->lr = 0x80367DB4u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800510C8u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 68);
    r4 = MemoryInline::FlatRead32((r25 + 4));
    r4 = (r4 + 4);
    ctx->lr = 0x80367DC4u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = (r1 + 56);
    r4 = MemoryInline::FlatRead32((r25 + 4));
    r4 = (r4 + 40);
    // inline leaf 0x800FC138 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x800FC138
    r3 = MemoryInline::FlatRead32((r1 + 60));
    r3 = (r3 + 65536);
    r0 = (r3 + -32768);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    r3 = 13;
    r4 = (r1 + 68);
    r5 = (r1 + 56);
    r6 = MemoryInline::FlatRead8((r23 + 68));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -8944));
    r7 = 0;
    ctx->lr = 0x80367E00u;
    if constexpr (KnownRegArgsCpuCall<0x80119C14u>(&func_80119C14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80119C14_B55B = func_80119C14_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80119C14_B55B);
        r4 = static_cast<uint32_t>(regargs_result_80119C14_B55B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80119C14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_80367E00:
{
    r0 = MemoryInline::FlatRead32((r30 + 64));
}

loc_80367E08:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(4))) {
        goto loc_803682EC;
    }
}

loc_80367E0C:
{
    r3 = MemoryInline::FlatRead8((r31 + 96));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 96), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 64), r0);
    goto loc_803682EC;
}

loc_80367E24:
{
}

loc_80367E28:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_80367E40;
    }
}

loc_80367E2C:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 48));
    r0 = (r0 - r28);
    MemoryInline::FlatWrite32((r3 + 48), r0);
    goto loc_80367E78;
}

loc_80367E40:
{
    r0 = (r26 + 252);
    r0 = (r0 & 255);
}

loc_80367E4C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_80367E78;
    }
}

loc_80367E50:
{
    r0 = MemoryInline::FlatRead32((r30 + 64));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r3 = (r3_rot_3 & -64);
    r0 = (r28 - r3);
    r4 = (r0 & 65535);
}

loc_80367E64:
{
    if ((static_cast<int32_t>(r28) <= static_cast<int32_t>(r3))) {
        goto loc_80367E78;
    }
}

loc_80367E68:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 48));
    r0 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 48), r0);
}

loc_80367E78:
{
    r3 = MemoryInline::FlatRead32((r30 + 64));
}

loc_80367E80:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(4))) {
        goto loc_80367EB0;
    }
}

loc_80367E84:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 104u, (r2 + -8952));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 48u, (r2 + -9008));
    r0 = (r3 ^ -2147483648);
    stackword28 = r0;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword12), static_cast<uint32_t>(stackword28));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 132u, (r2 + -8924));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    goto loc_80367EB4;
}

loc_80367EB0:
{
    f30.d = f31.d;
}

loc_80367EB4:
{
}

loc_80367EB8:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(90))) {
        goto loc_803682EC;
    }
}

loc_80367EBC:
{
    r3 = MemoryInline::FlatRead8((r31 + 96));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 96), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 64), r0);
    goto loc_803682EC;
}

loc_80367ED4:
{
}

loc_80367ED8:
{
    if ((static_cast<uint32_t>(r26) > static_cast<uint32_t>(7))) {
        goto loc_80367F34;
    }
}

loc_80367EDC:
{
    r3 = 0x805F0000u;
    r3 = (r3 + -6220);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80367EF4u:
        goto loc_80367EF4;
        break;
    case 0x80367EFCu:
        goto loc_80367EFC;
        break;
    case 0x80367F04u:
        goto loc_80367F04;
        break;
    case 0x80367F0Cu:
        goto loc_80367F0C;
        break;
    case 0x80367F14u:
        goto loc_80367F14;
        break;
    case 0x80367F1Cu:
        goto loc_80367F1C;
        break;
    case 0x80367F24u:
        goto loc_80367F24;
        break;
    case 0x80367F2Cu:
        goto loc_80367F2C;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80367EF4:
{
    r5 = 0;
    goto loc_80367F38;
}

loc_80367EFC:
{
    r5 = 0;
    goto loc_80367F38;
}

loc_80367F04:
{
    r5 = 90;
    goto loc_80367F38;
}

loc_80367F0C:
{
    r5 = 45;
    goto loc_80367F38;
}

loc_80367F14:
{
    r5 = 0;
    goto loc_80367F38;
}

loc_80367F1C:
{
    r5 = 60;
    goto loc_80367F38;
}

loc_80367F24:
{
    r5 = 30;
    goto loc_80367F38;
}

loc_80367F2C:
{
    r5 = 45;
    goto loc_80367F38;
}

loc_80367F34:
{
    r5 = 0;
}

loc_80367F38:
{
    r0 = (r26 + 252);
    r0 = (r0 & 255);
}

loc_80367F44:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_80367F78;
    }
}

loc_80367F48:
{
    r3 = MemoryInline::FlatRead32((r30 + 64));
    r0 = (r3 + 90);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r3 = (r3_rot_5 & -64);
    r0 = (r28 - r3);
    r4 = (r0 & 65535);
}

loc_80367F60:
{
    if ((static_cast<int32_t>(r28) <= static_cast<int32_t>(r3))) {
        goto loc_80367F78;
    }
}

loc_80367F64:
{
    r3 = (r27 + r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 48));
    r0 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 48), r0);
}

loc_80367F78:
{
    f30.d = f31.d;
    r0 = MemoryInline::FlatRead32((r30 + 64));
}

loc_80367F84:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r5))) {
        goto loc_803682EC;
    }
}

loc_80367F88:
{
    r3 = MemoryInline::FlatRead8((r31 + 96));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 96), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 64), r0);
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r23 + 68));
}

loc_80367FAC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80367FF8;
    }
}

loc_80367FB0:
{
    r3 = (r1 + 68);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -9056));
    f2.d = f1.d;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -9052));
    f3.d = PpcFmulsInline(f31.d, f0.d);
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r23 = (r27 + r29);
    r3 = (r1 + 68);
    r4 = MemoryInline::FlatRead32((r23 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 44));
    ctx->lr = 0x80367FDCu;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800510C8u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 68);
    r4 = MemoryInline::FlatRead32((r23 + 4));
    r4 = (r4 + 4);
    ctx->lr = 0x80367FECu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = 3;
    r4 = (r1 + 68);
    ctx->lr = 0x80367FF8u;
    if constexpr (KnownRegArgsCpuCall<0x800DDD1Cu>(&func_800DDD1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DDD1C_DD63 = func_800DDD1C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800DDD1C_DD63);
        r4 = static_cast<uint32_t>(regargs_result_800DDD1C_DD63 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DDD1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_80367FF8:
{
}

loc_80367FFC:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_803680CC;
    }
}

loc_80368000:
{
    r4 = MemoryInline::FlatRead32((r30 + 64));
    r3 = 458162176;
    r0 = (r3 + -32331);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r28))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 4);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * r4);
    r0 = (r28 - r0);
    r26 = (r0 & 65535);
}

loc_8036802C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(100))) {
        goto loc_80368074;
    }
}

loc_80368030:
{
    r23 = (r27 + r29);
    r3 = MemoryInline::FlatRead32((r23 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 48));
    r0 = (0 - r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    // inline leaf 0x8045B1B8 (4 guest instruction(s))
    r4 = (static_cast<int32_t>(r3) >> 31);
    r0 = (r4 ^ r3);
    r3 = (r0 - r4);
    // end of inlined leaf 0x8045B1B8
}

loc_8036804C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r26))) {
        goto loc_80368060;
    }
}

loc_80368050:
{
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r23 + 4));
    MemoryInline::FlatWrite32((r3 + 48), r0);
    goto loc_80368088;
}

loc_80368060:
{
    r3 = MemoryInline::FlatRead32((r23 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 48));
    r0 = (r0 - r26);
    MemoryInline::FlatWrite32((r3 + 48), r0);
    goto loc_80368088;
}

loc_80368074:
{
    r3 = (r27 + r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 48));
    r0 = (r0 - r26);
    MemoryInline::FlatWrite32((r3 + 48), r0);
}

loc_80368088:
{
    r3 = MemoryInline::FlatRead32((r30 + 64));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -9008));
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 104));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -8920));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f0.d));
}

loc_803680B4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(150))) {
        goto loc_803682EC;
    }
}

loc_803680B8:
{
    r0 = 8;
    MemoryInline::FlatWrite8((r31 + 96), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r25 + 4));
    MemoryInline::FlatWrite32((r30 + 64), r0);
    goto loc_803682EC;
}

loc_803680CC:
{
    r3 = MemoryInline::FlatRead32((r30 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -8916));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -9008));
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 112));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -8920));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f0.d));
}

loc_80368100:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(150))) {
        goto loc_803682EC;
    }
}

loc_80368104:
{
    r3 = MemoryInline::FlatRead8((r31 + 96));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 96), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 64), r0);
    goto loc_803682EC;
}

loc_8036811C:
{
    f30.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 140u, (r2 + -8916));
    r0 = MemoryInline::FlatRead32((r30 + 64));
}

loc_80368128:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(10))) {
        goto loc_803682EC;
    }
}

loc_8036812C:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r31 + 96), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 64), r0);
    goto loc_803682EC;
}

loc_80368140:
{
    r0 = MemoryInline::FlatRead32((r30 + 64));
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 48u, (r2 + -9008));
    r0 = (r0 ^ -2147483648);
    stackword31 = r0;
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword11), static_cast<uint32_t>(stackword31));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 144u, (r2 + -8912));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 140u, (r2 + -8916));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl18_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl18_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl18_0x800CEF40;
    }
}

loc_inl18_0x800CEF3C:
{
    r0 = 1;
}

loc_inl18_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_11 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_3 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl18_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r3 = (r3 & 65535);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(28));
    r0 = (r0_rot_12 & -268435456);
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_9 & 1);
    r0 = (r0 - r3);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_13 & -1);
    r3 = (r0 + r3);
    r0 = (r3 + -8);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 48u, (r2 + -9008));
    r0 = (r0 ^ -2147483648);
    stackword32 = r0;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword12), static_cast<uint32_t>(stackword32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    r0 = MemoryInline::FlatRead32((r30 + 64));
}

loc_803681B0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_803682EC;
    }
}

loc_803681B4:
{
    r0 = 8;
    MemoryInline::FlatWrite8((r31 + 96), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r25 + 4));
    MemoryInline::FlatWrite32((r30 + 64), r0);
    goto loc_803682EC;
}

loc_803681C8:
{
    r3 = MemoryInline::FlatRead32((r30 + 64));
    r0 = MemoryInline::FlatRead32((r25 + 4));
}

loc_803681D4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80368208;
    }
}

loc_803681D8:
{
}

loc_803681DC:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_803681F4;
    }
}

loc_803681E0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 64), r0);
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 96), static_cast<uint8_t>(r0));
    goto loc_803682EC;
}

loc_803681F4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 64), r0);
    r0 = 9;
    MemoryInline::FlatWrite8((r31 + 96), static_cast<uint8_t>(r0));
    goto loc_803682EC;
}

loc_80368208:
{
    r0 = MemoryInline::FlatRead8(r25);
}

loc_80368210:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80368230;
    }
}

loc_80368214:
{
}

loc_80368218:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_80368228;
    }
}

loc_8036821C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 96), static_cast<uint8_t>(r0));
    goto loc_80368230;
}

loc_80368228:
{
    r0 = 9;
    MemoryInline::FlatWrite8((r31 + 96), static_cast<uint8_t>(r0));
}

loc_80368230:
{
    r0 = MemoryInline::FlatRead32((r25 + 4));
    MemoryInline::FlatWrite32((r30 + 64), r0);
    goto loc_803682EC;
}

loc_8036823C:
{
}

loc_80368240:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(3))) {
        goto loc_80368288;
    }
}

loc_80368244:
{
    r0 = (r24 + -2);
}

loc_8036824C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_803682EC;
    }
}

loc_80368250:
{
    r0 = MemoryInline::FlatRead8((r31 + 94));
}

loc_80368258:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_803682EC;
    }
}

loc_8036825C:
{
    r0 = (r24 + -1);
}

loc_80368264:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_803682EC;
    }
}

loc_80368268:
{
    r0 = MemoryInline::FlatRead8((r31 + 95));
}

loc_80368270:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_803682EC;
    }
}

loc_80368274:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 94), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 95), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 96), static_cast<uint8_t>(r0));
    goto loc_803682EC;
}

loc_80368288:
{
}

loc_8036828C:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(7))) {
        goto loc_803682EC;
    }
}

loc_80368290:
{
    r0 = (r24 + -3);
}

loc_80368298:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_803682EC;
    }
}

loc_8036829C:
{
    r0 = MemoryInline::FlatRead8((r31 + 93));
}

loc_803682A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_803682EC;
    }
}

loc_803682A8:
{
    r0 = (r24 + -2);
}

loc_803682B0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_803682EC;
    }
}

loc_803682B4:
{
    r0 = MemoryInline::FlatRead8((r31 + 94));
}

loc_803682BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_803682EC;
    }
}

loc_803682C0:
{
    r0 = (r24 + -1);
}

loc_803682C8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_803682EC;
    }
}

loc_803682CC:
{
    r0 = MemoryInline::FlatRead8((r31 + 95));
}

loc_803682D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_803682EC;
    }
}

loc_803682D8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 93), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 94), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 95), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 96), static_cast<uint8_t>(r0));
}

loc_803682EC:
{
    r3 = (r1 + 92);
    r4 = (r27 + r29);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 40);
    ctx->lr = 0x80368300u;
    if constexpr (KnownRegArgsCpuCall<0x80051278u>(&func_80051278)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80051278_1107B = func_80051278_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80051278_1107B);
        r4 = static_cast<uint32_t>(regargs_result_80051278_1107B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80051278u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = (r1 + 92);
    // inline leaf 0x80050F40 (6 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80050F40
    f0.d = MemoryInline::FlatReadFloat32((r2 + -8908));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_80368310:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80368324;
    }
}

loc_80368314:
{
    r3 = (r1 + 92);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    goto loc_80368338;
}

loc_80368324:
{
    r3 = (r1 + 92);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -9056));
    f2.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -8976));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
}

loc_80368338:
{
    r23 = (r27 + r29);
    r3 = MemoryInline::FlatRead32((r23 + 4));
    r3 = (r3 + 4);
    r0 = MemoryInline::FlatRead8((r27 + 36));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r4 = 0x805F0000u;
    r4 = (r4 + -6584);
    r4_addr_0 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_0);
    r0 = (r24 * 24);
    r4 = (r4 + r0);
    r4 = (r4 + 4);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_8005001C_11D0B = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_11D0B;
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r1 + 8);
    r4 = (r1 + 92);
    f1.d = f30.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = MemoryInline::FlatRead32((r23 + 4));
    r3 = (r3 + 4);
    r4 = (r1 + 8);
    ctx->lr = 0x80368388u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = (r1 + 80);
    r4 = MemoryInline::FlatRead32((r23 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 44));
    ctx->lr = 0x80368398u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800510C8u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r23 + 4));
    r3 = (r3 + 4);
    r4 = (r1 + 80);
    ctx->lr = 0x803683A8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r0 = 200;
    addr_psqx_803683AC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803683AC_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 192));
    r0 = 184;
    addr_psqx_803683B8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803683B8_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 176));
    r11 = (r1 + 176);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 212));
    ctx->lr = r0;
    r1 = (r1 + 208);
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->gpr[23] = r23_entry;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803677C4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803677C4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803677C4 func_803677C4 preserves=true fpr_mask=0x00000000
