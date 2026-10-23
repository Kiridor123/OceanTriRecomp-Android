#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802E05B4(CpuContext* ctx);
extern "C" uint64_t func_802E05B4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80464560(CpuContext* ctx);
extern "C" uint64_t func_80464560_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8034CE40_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_8034D108_loc_0 = 0;
    uint32_t addr_psqx_8034D114_loc_0 = 0;
    uint32_t addr_psqx_8034D120_loc_0 = 0;
    uint32_t addr_psqx_8034D12C_loc_0 = 0;
    uint32_t addr_psqx_8034D138_loc_0 = 0;
    uint32_t addr_psqx_8034D144_loc_0 = 0;
    uint32_t addr_psqx_8034D150_loc_0 = 0;
    uint32_t addr_psqx_8034D15C_loc_0 = 0;
    uint32_t addr_psqx_8034D168_loc_0 = 0;
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
    uint32_t r0_rot_6 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_8 = 0;
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
    uint8_t* guest_range_6 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
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
    PPC_FPR f23 = ctx->fpr[23];
    PPC_FPR f24 = ctx->fpr[24];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8034CE40;

loc_8034CE40:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -272), 0, 280u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 276u, (r1 + 276), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 256u, (r1 + 256), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 240u, (r1 + 240), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 224u, (r1 + 224), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 208u, (r1 + 208), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 192u, (r1 + 192), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 176u, (r1 + 176), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 160u, (r1 + 160), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 144u, (r1 + 144), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 128u, (r1 + 128), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    r11 = (r1 + 128);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_3, 48u, (r1 + 48), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_3, 56u, (r1 + 56), r0);
    r27 = MemoryInline::FlatRead32(r4);
    r3 = 0x806B0000u;
    r3 = (r3 + -4792);
    r26 = MemoryInline::FlatRead32((r3 + 804));
}

loc_8034CEC0:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_8034D104;
    }
}

loc_8034CEC4:
{
    r24 = MemoryInline::FlatRead32((r3 + 808));
    r25 = 0;
    r3 = 0x80660000u;
    r28 = (r3 + -21920);
    r30 = 360;
    r31 = -1240793088;
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -10040), 0, 64u, true, false);
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 56u, (r2 + -9984));
    r29 = 1813446656;
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 48u, (r2 + -9992));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            f27.d = PpcBitCastToFloatInline(resolved_pair.first);
            f28.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f27.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -10040));
            f28.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -10036));
        }
    }
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 40u, (r2 + -10000));
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 8u, (r2 + -10032));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 24u, (r2 + -10016));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 16u, (r2 + -10024));
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 32u, (r2 + -10008));
    r23 = -530644992;
    goto loc_8034D0FC;
}

loc_8034CF0C:
{
    r0 = MemoryInline::FlatRead8(r26);
}

loc_8034CF14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8034D0F4;
    }
}

loc_8034CF18:
{
    r3 = 0;
    r5 = 0;
    r4 = MemoryInline::FlatRead32((r26 + 20));
    r0 = (r4 + -1);
}

loc_8034CF2C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(5))) {
        goto loc_8034CF44;
    }
}

loc_8034CF30:
{
}

loc_8034CF34:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(7))) {
        goto loc_8034CF54;
    }
}

loc_8034CF38:
{
}

loc_8034CF3C:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(9))) {
        goto loc_8034CF50;
    }
}

loc_8034CF40:
{
    goto loc_8034CF54;
}

loc_8034CF44:
{
    r3 = 1126;
    r5 = 3;
    goto loc_8034CF54;
}

loc_8034CF50:
{
    r3 = 1125;
}

loc_8034CF54:
{
}

loc_8034CF58:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8034D0F4;
    }
}

loc_8034CF5C:
{
}

loc_8034CF60:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_8034D0F4;
    }
}

loc_8034CF64:
{
    r4 = MemoryInline::FlatRead16((r26 + 8));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r26 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r4 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r26 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = MemoryInline::FlatRead16((r26 + 18));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r5 + r0);
    r0 = (r4 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r0));
    r4 = 0;
    ctx->lr = 0x8034CF98u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_802E05B4_27AE = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_27AE);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_27AE >> 32);
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
    r3 = (r1 + 12);
    // inline leaf 0x801E68B4 (25 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost(r4, 0, 36u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 0u, r4);
    guest_range_5 = MemoryInline::ResolveRangeHost(r3, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_5, 0u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_5, 4u, (r3 + 4), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_4, 8u, (r4 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_5, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_4, 10u, (r4 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_5, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_5, 12u, (r3 + 12), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_4, 16u, (r4 + 16));
    MemoryInline::WriteResolved16(guest_range_5, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 18u, (r4 + 18));
    MemoryInline::WriteResolved8(guest_range_5, 18u, (r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 19u, (r4 + 19));
    MemoryInline::WriteResolved8(guest_range_5, 19u, (r3 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r4 + 20));
    MemoryInline::WriteResolved32(guest_range_5, 20u, (r3 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_5, 24u, (r3 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r4 + 28));
    MemoryInline::WriteResolved32(guest_range_5, 28u, (r3 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_5, 32u, (r3 + 32), r0);
    // end of inlined leaf 0x801E68B4
    // inline leaf 0x80046F70 (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 48));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x80046F70
}

loc_8034CFAC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8034D000;
    }
}

loc_8034CFB0:
{
    r0 = MemoryInline::FlatRead8((r28 + 5));
}

loc_8034CFB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8034D000;
    }
}

loc_8034CFBC:
{
    r0 = MemoryInline::FlatRead32((r28 + 12));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r3 = (r3_rot_3 & -16);
    r0 = PPC_Divw(static_cast<int32_t>(r30), static_cast<int32_t>(r24));
    r0 = (r25 * r0);
    r4 = (r3 + r0);
    r0 = (r29 + -16019);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r0 = (r4 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r0 + r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_3 & 16777215);
    r0 = (r0 * 360);
    r0 = (r4 - r0);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f25.d));
    goto loc_8034D038;
}

loc_8034D000:
{
    r0 = PPC_Divw(static_cast<int32_t>(r30), static_cast<int32_t>(r24));
    r4 = (r25 * r0);
    r0 = (r31 + 24759);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (r0 + r4);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 360);
    r0 = (r4 - r0);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
}

loc_8034D038:
{
    f0.d = PpcFmulsInline(f27.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f28.d));
    ctx->lr = 0x8034D044u;
    if constexpr (KnownRegArgsCpuCall<0x80464560u>(&func_80464560)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[23] = f23;
        ctx->fpr[24] = f24;
        ctx->fpr[25] = f25;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        const auto regargs_result_80464560_3F0A = func_80464560_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80464560_3F0A);
        r4 = static_cast<uint32_t>(regargs_result_80464560_3F0A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        f23 = ctx->fpr[23];
        f24 = ctx->fpr[24];
        f25 = ctx->fpr[25];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
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
        ctx->fpr[23] = f23;
        ctx->fpr[24] = f24;
        ctx->fpr[25] = f25;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x80464560u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
        f23 = ctx->fpr[23];
        f24 = ctx->fpr[24];
        f25 = ctx->fpr[25];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
    }
}

loc_8034D048:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(r25))) {
        goto loc_8034D0B4;
    }
}

loc_8034D04C:
{
    r0 = MemoryInline::FlatRead16((r1 + 26));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f3.d = (f0.d - f25.d);
    f2.d = (f29.d * f1.d);
    f0.d = (f30.d + f2.d);
    f0.d = (f24.d * f0.d);
    f0.d = (f3.d + f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWriteRam16((r1 + 26), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f1.d = (f0.d - f25.d);
    f0.d = (f31.d + f2.d);
    f0.d = (f24.d * f0.d);
    f0.d = (f1.d + f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 72), f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWriteRam16((r1 + 24), static_cast<uint16_t>(r0));
    r0 = (r23 + 7167);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    goto loc_8034D0E8;
}

loc_8034D0B4:
{
}

loc_8034D0B8:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(255))) {
        goto loc_8034D0E8;
    }
}

loc_8034D0BC:
{
    r0 = MemoryInline::FlatRead16((r1 + 26));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f2.d = (f0.d - f25.d);
    f0.d = (f23.d * f1.d);
    f0.d = (f24.d * f0.d);
    f0.d = (f2.d + f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 72), f0.d);
    r0 = fctiwzword2;
    MemoryInline::FlatWriteRam16((r1 + 26), static_cast<uint16_t>(r0));
}

loc_8034D0E8:
{
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    ctx->lr = 0x8034D0F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    InvokeDirectCpu<0x802E07A4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
}

loc_8034D0F4:
{
    r25 = (r25 + 1);
    r26 = (r26 + 36);
}

loc_8034D0FC:
{
}

loc_8034D100:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r24))) {
        goto loc_8034CF0C;
    }
}

loc_8034D104:
{
    r0 = 264;
    addr_psqx_8034D108_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8034D108_loc_0));
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 128), 0, 152u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 128u, (r1 + 256));
    r0 = 248;
    addr_psqx_8034D114_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8034D114_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 112u, (r1 + 240));
    r0 = 232;
    addr_psqx_8034D120_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8034D120_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 96u, (r1 + 224));
    r0 = 216;
    addr_psqx_8034D12C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8034D12C_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 80u, (r1 + 208));
    r0 = 200;
    addr_psqx_8034D138_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8034D138_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 64u, (r1 + 192));
    r0 = 184;
    addr_psqx_8034D144_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8034D144_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 48u, (r1 + 176));
    r0 = 168;
    addr_psqx_8034D150_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8034D150_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 32u, (r1 + 160));
    r0 = 152;
    addr_psqx_8034D15C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f24, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8034D15C_loc_0));
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 16u, (r1 + 144));
    r0 = 136;
    addr_psqx_8034D168_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f23, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8034D168_loc_0));
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 0u, (r1 + 128));
    r11 = (r1 + 128);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::ReadResolved32(guest_range_6, 148u, (r1 + 276));
    ctx->lr = r0;
    r1 = (r1 + 272);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8034CE40(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8034CE40_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8034CE40 func_8034CE40 preserves=true fpr_mask=0x00000000
