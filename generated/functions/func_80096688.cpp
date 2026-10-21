#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80091F18(CpuContext* ctx);
extern "C" uint32_t func_80091F18_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80094600(CpuContext* ctx);
extern "C" uint64_t func_80094600_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80096688_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80096688u);
    goto loc_80096688;

loc_80096688:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r30 = r4;
    r31 = r5;
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    ctx->lr = 0x800966B8u;
    if constexpr (KnownRegArgsCpuCall<0x80094600u>(&func_80094600)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80094600_998 = func_80094600_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80094600_998);
        r4 = static_cast<uint32_t>(regargs_result_80094600_998 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80094600u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_800966BC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(1))) {
        goto loc_800966D4;
    }
}

loc_800966C0:
{
}

loc_800966C4:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(2))) {
        goto loc_800966DC;
    }
}

loc_800966C8:
{
}

loc_800966CC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(3))) {
        goto loc_800966E4;
    }
}

loc_800966D0:
{
    goto loc_800966EC;
}

loc_800966D4:
{
    r30 = (r3 + 10);
    goto loc_80096710;
}

loc_800966DC:
{
    r30 = (r3 + 32);
    goto loc_80096710;
}

loc_800966E4:
{
    r30 = (r3 + 47);
    goto loc_80096710;
}

loc_800966EC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 5432);
    r4 = 1814;
    r5 = 0x80590000u;
    r5 = (r5 + 5940);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80096708u;
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
    r3 = 0;
    goto loc_800969B4;
}

loc_80096710:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80096718:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80096724;
    }
}

loc_8009671C:
{
    r3 = 0;
    goto loc_800969B4;
}

loc_80096724:
{
    r3 = r30;
    r4 = (r1 + 16);
    ctx->lr = 0x80096730u;
    if constexpr (KnownRegArgsCpuCall<0x80091F18u>(&func_80091F18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80091F18_12E9 = func_80091F18_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80091F18_12E9;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80091F18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r30 + 5);
    r4 = (r1 + 12);
    ctx->lr = 0x8009673Cu;
    if constexpr (KnownRegArgsCpuCall<0x80091F18u>(&func_80091F18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80091F18_1552 = func_80091F18_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80091F18_1552;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80091F18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r30 + 10);
    r4 = (r1 + 8);
    ctx->lr = 0x80096748u;
    if constexpr (KnownRegArgsCpuCall<0x80091F18u>(&func_80091F18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80091F18_17BB = func_80091F18_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80091F18_17BB;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80091F18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r5 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
    r0 = (r0_rot_1 & 3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r4 = (r4_rot_1 & -16);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(10));
    r3 = (r3_rot_1 & 3);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
    r0 = (r0_rot_2 & 3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r0 = (r3 | r0);
    r3 = (r4 | r0);
    r0 = (r3 + -17);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -31628));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80096780:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80096800;
    }
}

loc_80096784:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31608));
    r3 = r4;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009687C;
    }
}

loc_80096790:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
    r0 = (r0_rot_4 & 536870911);
}

loc_80096798:
{
    ctr = r0;
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800967EC;
    }
}

loc_800967A0:
{
    r4 = (r4 + -1);
    f4.d = PpcFmulsInline(f4.d, f0.d);
    r4 = (r4 + -1);
    f4.d = PpcFmulsInline(f4.d, f0.d);
    r4 = (r4 + -1);
    f4.d = PpcFmulsInline(f4.d, f0.d);
    r4 = (r4 + -1);
    f4.d = PpcFmulsInline(f4.d, f0.d);
    r4 = (r4 + -1);
    f4.d = PpcFmulsInline(f4.d, f0.d);
    r4 = (r4 + -1);
    f4.d = PpcFmulsInline(f4.d, f0.d);
    r4 = (r4 + -1);
    f4.d = PpcFmulsInline(f4.d, f0.d);
    r4 = (r4 + -1);
    f4.d = PpcFmulsInline(f4.d, f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800967A0;
    }
}

loc_800967E4:
{
    r3 = (r3 & 7);
}

loc_800967E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8009687C;
    }
}

loc_800967EC:
{
    ctr = r3;
}

loc_800967F0:
{
    r4 = (r4 + -1);
    f4.d = PpcFmulsInline(f4.d, f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800967F0;
    }
}

loc_800967FC:
{
    goto loc_8009687C;
}

loc_80096800:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009687C;
    }
}

loc_80096804:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31604));
    r3 = (0 - r4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009687C;
    }
}

loc_80096810:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_5 & 536870911);
}

loc_80096818:
{
    ctr = r0;
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009686C;
    }
}

loc_80096820:
{
    r4 = (r4 + 1);
    f4.d = PpcFmulsInline(f4.d, f0.d);
    r4 = (r4 + 1);
    f4.d = PpcFmulsInline(f4.d, f0.d);
    r4 = (r4 + 1);
    f4.d = PpcFmulsInline(f4.d, f0.d);
    r4 = (r4 + 1);
    f4.d = PpcFmulsInline(f4.d, f0.d);
    r4 = (r4 + 1);
    f4.d = PpcFmulsInline(f4.d, f0.d);
    r4 = (r4 + 1);
    f4.d = PpcFmulsInline(f4.d, f0.d);
    r4 = (r4 + 1);
    f4.d = PpcFmulsInline(f4.d, f0.d);
    r4 = (r4 + 1);
    f4.d = PpcFmulsInline(f4.d, f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80096820;
    }
}

loc_80096864:
{
    r3 = (r3 & 7);
}

loc_80096868:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8009687C;
    }
}

loc_8009686C:
{
    ctr = r3;
}

loc_80096870:
{
    r4 = (r4 + 1);
    f4.d = PpcFmulsInline(f4.d, f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80096870;
    }
}

loc_8009687C:
{
}

loc_80096880:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_800969B0;
    }
}

loc_80096884:
{
    r0 = (r5 & 2047);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_7 & -2097152);
    r0 = (static_cast<int32_t>(r0) >> 21);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -31592));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31600));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r31, f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r0 & 2047);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_8 & -2097152);
    r0 = (static_cast<int32_t>(r0) >> 21);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r31 + 4), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r0 & 2047);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_9 & -2097152);
    r0 = (static_cast<int32_t>(r0) >> 21);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r31 + 8), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31632));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r31 + 12), f1.d);
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_10 & 2047);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_11 & -2097152);
    r0 = (static_cast<int32_t>(r0) >> 21);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r31 + 16), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_12 & 2047);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_13 & -2097152);
    r0 = (static_cast<int32_t>(r0) >> 21);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r31 + 20), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_14 & 2047);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_15 & -2097152);
    r0 = (static_cast<int32_t>(r0) >> 21);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r31 + 24), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r31 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r31 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r31 + 36), f1.d);
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31628));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r31 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r31 + 44), f1.d);
    }
}

loc_800969B0:
{
    r3 = 1;
}

loc_800969B4:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80096688(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80096688_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FF gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80096688 func_80096688 preserves=true fpr_mask=0x00000000
