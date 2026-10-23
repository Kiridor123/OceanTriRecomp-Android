#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DD050(CpuContext* ctx);
extern "C" uint64_t func_800DD050_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_80106858(CpuContext* ctx);
extern "C" uint64_t func_80106858_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80119AA4(CpuContext* ctx);
extern "C" uint64_t func_80119AA4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802BE560(CpuContext* ctx);
extern "C" uint64_t func_802BE560_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802B1674_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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

    goto loc_802B1674;

loc_802B1674:
{
    r29 = 4;
}

loc_802B16A0:
{
}

loc_802B16A4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_802B16BC;
    }
}

loc_802B16A8:
{
    r0 = MemoryInline::FlatRead8((r27 + 11948));
}

loc_802B16B0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802B16BC;
    }
}

loc_802B16B4:
{
    r3 = (r29 | 64);
    ctx->lr = 0x802B16BCu;
    if constexpr (KnownRegArgsCpuCall<0x802BE560u>(&func_802BE560)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_802BE560_A0E = func_802BE560_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_802BE560_A0E);
        r4 = static_cast<uint32_t>(regargs_result_802BE560_A0E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        InvokeDirectCpu<0x802BE560u>(ctx);
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
    }
}

loc_802B16BC:
{
    r31_addr_0 = (r31 + r26);
    r4 = MemoryInline::FlatRead32(r31_addr_0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 16), 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 16));
}

loc_802B16C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B16E0;
    }
}

loc_802B16CC:
{
}

loc_802B16D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802B1720;
    }
}

loc_802B16D4:
{
}

loc_802B16D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802B175C;
    }
}

loc_802B16DC:
{
    goto loc_802B1798;
}

loc_802B16E0:
{
    r3 = (r1 + 32);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 20));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 24));
        }
    }
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 28));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r31_addr_3 = (r31 + r26);
    r6 = MemoryInline::FlatRead32(r31_addr_3);
    r3 = 0;
    r4 = (r1 + 44);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 32));
    r5 = MemoryInline::FlatRead8((r27 + 3014));
    r6 = MemoryInline::FlatRead16((r6 + 36));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    ctx->lr = 0x802B171Cu;
    if constexpr (KnownRegArgsCpuCall<0x80106858u>(&func_80106858)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_80106858_170A = func_80106858_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80106858_170A);
        r4 = static_cast<uint32_t>(regargs_result_80106858_170A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80106858u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
    }
    goto loc_802B1798;
}

loc_802B1720:
{
    r3 = (r1 + 20);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 20));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 24));
        }
    }
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 28));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = 1;
    r4 = (r1 + 44);
    r5 = MemoryInline::FlatRead8((r27 + 3014));
    r31_addr_2 = (r31 + r26);
    r6 = MemoryInline::FlatRead32(r31_addr_2);
    r6 = MemoryInline::FlatRead16((r6 + 36));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    ctx->lr = 0x802B1758u;
    if constexpr (KnownRegArgsCpuCall<0x80119AA4u>(&func_80119AA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_80119AA4_208B = func_80119AA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80119AA4_208B);
        r4 = static_cast<uint32_t>(regargs_result_80119AA4_208B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x80119AA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
    }
    goto loc_802B1798;
}

loc_802B175C:
{
    r3 = (r1 + 8);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 20));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 24));
        }
    }
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 28));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r31_addr_1 = (r31 + r26);
    r6 = MemoryInline::FlatRead32(r31_addr_1);
    r3 = 6;
    r4 = (r1 + 44);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 32));
    r5 = MemoryInline::FlatRead8((r27 + 3014));
    r6 = MemoryInline::FlatRead16((r6 + 36));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    ctx->lr = 0x802B1798u;
    if constexpr (KnownRegArgsCpuCall<0x80106858u>(&func_80106858)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_80106858_29E6 = func_80106858_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80106858_29E6);
        r4 = static_cast<uint32_t>(regargs_result_80106858_29E6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80106858u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
    }
}

loc_802B1798:
{
    r0 = MemoryInline::FlatRead8((r27 + 3013));
}

loc_802B17A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_802B17AC;
    }
}

loc_802B17A4:
{
}

loc_802B17A8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(18))) {
        goto loc_802B1844;
    }
}

loc_802B17AC:
{
    r5 = MemoryInline::FlatRead8((r27 + 3014));
}

loc_802B17B4:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(2))) {
        goto loc_802B1844;
    }
}

loc_802B17B8:
{
    r0 = (r28 & 255);
}

loc_802B17C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B1844;
    }
}

loc_802B17C4:
{
    r3 = 0x805D0000u;
    r26 = (r3 + -2032);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r26 = (r26 + r0);
    f0.d = MemoryInline::FlatReadFloat32(r26);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 12));
    r3 = 1;
    r4 = (r1 + 68);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f0.d);
    r6 = fctiwzword0;
    ctx->lr = 0x802B180Cu;
    if constexpr (KnownRegArgsCpuCall<0x80119AA4u>(&func_80119AA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_80119AA4_34A3 = func_80119AA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80119AA4_34A3);
        r4 = static_cast<uint32_t>(regargs_result_80119AA4_34A3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x80119AA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
    }
    f0.d = MemoryInline::FlatReadFloat32((r26 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 24));
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 28));
    r3 = 1;
    r4 = (r1 + 68);
    r5 = MemoryInline::FlatRead8((r27 + 3014));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 88), f0.d);
    r6 = fctiwzword1;
    ctx->lr = 0x802B1844u;
    if constexpr (KnownRegArgsCpuCall<0x80119AA4u>(&func_80119AA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_80119AA4_3B16 = func_80119AA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80119AA4_3B16);
        r4 = static_cast<uint32_t>(regargs_result_80119AA4_3B16 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x80119AA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
    }
}

loc_802B1844:
{
    r3 = (r1 + 56);
    r4 = (r27 + r30);
    r4 = (r4 + 11312);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r28 & 255);
    r4 = (r1 + 56);
    ctx->lr = 0x802B1860u;
    if constexpr (KnownRegArgsCpuCall<0x800DD050u>(&func_800DD050)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DD050_4008 = func_800DD050_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_800DD050_4008);
        r4 = static_cast<uint32_t>(regargs_result_800DD050_4008 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        InvokeDirectCpu<0x800DD050u>(ctx);
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
    }
    r11 = (r1 + 128);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802B1674(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802B1674_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xFC0007FF gpr_write=0xFC000FFB gpr_return=0x00000018 fpr_read=0x8000000F fpr_write=0x8000000F fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802B1674 func_802B1674 preserves=true fpr_mask=0x00000000
