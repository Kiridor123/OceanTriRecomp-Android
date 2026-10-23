#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A6ED4(CpuContext* ctx);
extern "C" uint64_t func_800A6ED4_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800A6A68_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_800A6A68;

loc_800A6A68:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r28 = r3;
    r30 = r4;
    r29 = r5;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 8), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 16), r0);
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800A6ABC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A6AD4;
    }
}

loc_800A6AC0:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800A6ACC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A6AD4;
    }
}

loc_800A6AD0:
{
    r10 = 0;
}

loc_800A6AD4:
{
}

loc_800A6AD8:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800A6AF0;
    }
}

loc_800A6ADC:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800A6AE8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A6AF0;
    }
}

loc_800A6AEC:
{
    r9 = 0;
}

loc_800A6AF0:
{
}

loc_800A6AF4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A6B08;
    }
}

loc_800A6AF8:
{
    r0 = (r11 + 1073741824);
}

loc_800A6B00:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A6B08;
    }
}

loc_800A6B04:
{
    r8 = 0;
}

loc_800A6B08:
{
}

loc_800A6B0C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A6B24;
    }
}

loc_800A6B10:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800A6B1C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A6B24;
    }
}

loc_800A6B20:
{
    r7 = 0;
}

loc_800A6B24:
{
}

loc_800A6B28:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A6B40;
    }
}

loc_800A6B2C:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800A6B38:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A6B40;
    }
}

loc_800A6B3C:
{
    r6 = 0;
}

loc_800A6B40:
{
}

loc_800A6B44:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A6B5C;
    }
}

loc_800A6B48:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A6B54:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A6B5C;
    }
}

loc_800A6B58:
{
    r5 = 0;
}

loc_800A6B5C:
{
}

loc_800A6B60:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A6B84;
    }
}

loc_800A6B64:
{
    r3 = 0x80590000u;
    r3 = (r3 + 12304);
    r4 = 166;
    r5 = 0x80590000u;
    r5 = (r5 + 12564);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A6B84u;
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
}

loc_800A6B84:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r29 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800A6BA8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A6BC0;
    }
}

loc_800A6BAC:
{
    r3 = (r29 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800A6BB8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A6BC0;
    }
}

loc_800A6BBC:
{
    r9 = 0;
}

loc_800A6BC0:
{
}

loc_800A6BC4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A6BDC;
    }
}

loc_800A6BC8:
{
    r3 = (r29 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800A6BD4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A6BDC;
    }
}

loc_800A6BD8:
{
    r8 = 0;
}

loc_800A6BDC:
{
}

loc_800A6BE0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A6BF4;
    }
}

loc_800A6BE4:
{
    r0 = (r10 + 1073741824);
}

loc_800A6BEC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A6BF4;
    }
}

loc_800A6BF0:
{
    r7 = 0;
}

loc_800A6BF4:
{
}

loc_800A6BF8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A6C10;
    }
}

loc_800A6BFC:
{
    r3 = (r29 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800A6C08:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A6C10;
    }
}

loc_800A6C0C:
{
    r6 = 0;
}

loc_800A6C10:
{
}

loc_800A6C14:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A6C2C;
    }
}

loc_800A6C18:
{
    r3 = (r29 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800A6C24:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A6C2C;
    }
}

loc_800A6C28:
{
    r5 = 0;
}

loc_800A6C2C:
{
}

loc_800A6C30:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A6C48;
    }
}

loc_800A6C34:
{
    r3 = (r29 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A6C40:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A6C48;
    }
}

loc_800A6C44:
{
    r4 = 0;
}

loc_800A6C48:
{
}

loc_800A6C4C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800A6C70;
    }
}

loc_800A6C50:
{
    r3 = 0x80590000u;
    r3 = (r3 + 12304);
    r4 = 167;
    r5 = 0x80590000u;
    r5 = (r5 + 12616);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A6C70u;
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
}

loc_800A6C70:
{
    r27 = 0;
    guest_range_3 = MemoryInline::ResolveRangeHost((r28 + 12), 0, 222u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 216u, (r28 + 228), r27);
    r31 = 1;
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r28 + 12), r31);
    MemoryInline::WriteResolved32(guest_range_3, 172u, (r28 + 184), r30);
    r3 = r30;
    // inline leaf 0x800A48C8 (2 guest instruction(s))
    r3 = (r3 + 8);
    // end of inlined leaf 0x800A48C8
    r30 = r3;
    MemoryInline::WriteResolved32(guest_range_3, 168u, (r28 + 180), r27);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 135u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r3 + 22));
    MemoryInline::WriteResolved16(guest_range_3, 220u, (r28 + 232), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    MemoryInline::WriteResolved32(guest_range_3, 20u, (r28 + 32), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 4));
    MemoryInline::WriteResolved32(guest_range_3, 24u, (r28 + 36), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r3 + 8));
    MemoryInline::WriteResolved16(guest_range_3, 48u, (r28 + 60), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r3 + 20));
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 210u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r27)))) {
        MemoryInline::WriteResolved16(guest_range_3, 210u, (r28 + 222), r0);
        MemoryInline::WriteResolved16(guest_range_3, 212u, (r28 + 224), r27);
    }
    r0 = MemoryInline::ReadResolved8(guest_range_0, 133u, (r3 + 133));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31384));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31392));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 56u, (r28 + 68), f0.d);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 132u, (r3 + 132));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 52u, (r28 + 64), f0.d);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 134u, (r3 + 134));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 60u, (r28 + 72), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r28 + 40), f0.d);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r3 + 15));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31376));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r28 + 44), f0.d);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 24u, (r3 + 24));
    MemoryInline::WriteResolved16(guest_range_3, 36u, (r28 + 48), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 52u, (r3 + 52));
    MemoryInline::WriteResolved16(guest_range_3, 38u, (r28 + 50), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r3 + 14));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r28 + 52), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31388));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 44u, (r28 + 56), f0.d);
    MemoryInline::WriteResolved8(guest_range_3, 208u, (r28 + 220), static_cast<uint8_t>(r31));
    r3 = (r28 + 144);
    r4 = (r30 + 120);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r28 + 156);
    r4 = (r30 + 96);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r28 + 168);
    r4 = (r30 + 108);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = 3;
    guest_range_4 = MemoryInline::ResolveRangeHost((r28 + 100), 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, (r28 + 100), static_cast<uint8_t>(r0));
    r0 = 100;
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r28 + 101), static_cast<uint8_t>(r0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 54), 0, 30u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r30 + 54));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r28 + 102), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r30 + 55));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r28 + 103), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 2u, (r30 + 56));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r28 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 6u, (r30 + 60));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r28 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 10u, (r30 + 64));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r28 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 14u, (r30 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 16u, (r28 + 116), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 18u, (r30 + 72));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 20u, (r28 + 120), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 22u, (r30 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 24u, (r28 + 124), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 26u, (r30 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 28u, (r28 + 128), f0.d);
    r3 = (r28 + 132);
    r4 = (r30 + 84);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    // inline leaf 0x800B28DC (3 guest instruction(s))
    r3 = 0x80690000u;
    r3 = (r3 + 27160);
    // end of inlined leaf 0x800B28DC
    r0 = MemoryInline::FlatRead32((r30 + 136));
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r28 + 234), static_cast<uint16_t>(r0));
}

loc_800A6E14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A6E30;
    }
}

loc_800A6E18:
{
    r3 = MemoryInline::FlatRead32((r29 + 32));
    r3 = (r3 + 65536);
    r3 = (r3 + -16356);
    ctx->lr = 0x800A6E28u;
    if constexpr (KnownRegArgsCpuCall<0x800A6ED4u>(&func_800A6ED4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800A6ED4_418F = func_800A6ED4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800A6ED4_418F);
        r4 = static_cast<uint32_t>(regargs_result_800A6ED4_418F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800A6ED4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 65535);
    MemoryInline::FlatWrite16((r28 + 234), static_cast<uint16_t>(r0));
}

loc_800A6E30:
{
    r3 = (r28 + 236);
    r4 = MemoryInline::FlatRead16((r28 + 234));
    // inline leaf 0x800A5964 (2 guest instruction(s))
    guest_range_5 = MemoryInline::ResolveRangeHost((r3 + -160), 0, 213u, false, true);
    MemoryInline::WriteResolved32(guest_range_5, 160u, r3, r4);
    // end of inlined leaf 0x800A5964
    f0.d = MemoryInline::FlatReadFloat32((r30 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, (r28 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r28 + 80), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r28 + 84), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r28 + 88), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 16u, (r28 + 92), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 20u, (r28 + 96), f0.d);
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_5, 212u, (r28 + 288), static_cast<uint8_t>(r0));
    r31 = 0;
    MemoryInline::WriteResolved32(guest_range_5, 172u, (r28 + 248), r31);
    r3 = r30;
    // inline leaf 0x800A6EC8 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r0 & 255);
    // end of inlined leaf 0x800A6EC8
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 32));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x800A6EA0u;
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    MemoryInline::FlatWrite32((r28 + 240), r3);
    MemoryInline::FlatWrite32((r28 + 244), r31);
    MemoryInline::FlatWrite32((r28 + 188), r31);
    r3 = 1;
    r11 = (r1 + 48);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800A6A68(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800A6A68_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFE fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800A6A68 func_800A6A68 preserves=true fpr_mask=0x00000000
