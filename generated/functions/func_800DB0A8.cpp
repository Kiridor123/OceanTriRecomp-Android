#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DAEAC(CpuContext* ctx);
extern "C" uint64_t func_800DAEAC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800E8090(CpuContext* ctx);
extern "C" uint64_t func_800E8090_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800E8140(CpuContext* ctx);
extern "C" uint64_t func_800E8140_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_800E83B8(CpuContext* ctx);
extern "C" uint64_t func_800E83B8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_800DB0A8_ra38_1fa_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
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
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_800DB0A8;

loc_800DB0A8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r28 = r4;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r0);
    r30 = MemoryInline::FlatRead32((r13 + -17576));
    r0 = 0;
    r3 = (r30 + 196608);
    MemoryInline::FlatWrite32((r3 + -27152), r0);
    ctx->lr = 0x800DB0ECu;
    if constexpr (KnownRegArgsCpuCall<0x800DAEACu>(&func_800DAEAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800DAEAC_BAF = func_800DAEAC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800DAEAC_BAF);
        r4 = static_cast<uint32_t>(regargs_result_800DAEAC_BAF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800DAEACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r29 = (r3 & 255);
}

loc_800DB0F4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_800DB320;
    }
}

loc_800DB0F8:
{
    r3 = (r30 + 196608);
    r0 = MemoryInline::FlatRead8((r3 + -27154));
    r0 = (r0 & 1);
}

loc_800DB108:
{
    r3 = (r28 & 255);
    r31 = (r3 + 11);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800DB118;
    }
}

loc_800DB114:
{
    r31 = (r3 + 111);
}

loc_800DB118:
{
    r0 = (r28 & 255);
}

loc_800DB120:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DB1D8;
    }
}

loc_800DB124:
{
    r3 = r29;
    r4 = r31;
    r5 = 0;
    ctx->lr = 0x800DB134u;
    if constexpr (KnownRegArgsCpuCall<0x800E8140u>(&func_800E8140)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800E8140_117F = func_800E8140_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800E8140_117F);
        r4 = static_cast<uint32_t>(regargs_result_800E8140_117F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800E8140u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r5 = (r30 + 196608);
    r0 = MemoryInline::FlatRead8((r5 + -27154));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r5 + r0);
    MemoryInline::FlatWrite32((r4 + -27164), r3);
    r3 = MemoryInline::FlatRead8((r5 + -27154));
    r0 = MemoryInline::FlatRead8((r5 + -27153));
}

loc_800DB154:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800DB170;
    }
}

loc_800DB158:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r5 + r0);
    r3 = MemoryInline::FlatRead32((r3 + -27164));
    r4 = 0;
    ctx->lr = 0x800DB16Cu;
    if constexpr (KnownRegArgsCpuCall<0x800E83B8u>(&func_800E83B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800E83B8_1A31 = func_800E83B8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800E83B8_1A31);
        r4 = static_cast<uint32_t>(regargs_result_800E83B8_1A31 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E83B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_800DB1C4;
}

loc_800DB170:
{
    r3 = r29;
    r4 = r31;
    // inline leaf 0x800F26E4 (14 guest instruction(s))
}

loc_inl0_0x800F26E4:
{
}

loc_inl0_0x800F26E8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(49))) {
        goto loc_inl0_0x800F26F4;
    }
}

loc_inl0_0x800F26EC:
{
    r3 = 0;
    goto loc_inl0_cont_800F26E4;
}

loc_inl0_0x800F26F4:
{
}

loc_inl0_0x800F26F8:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(256))) {
        goto loc_inl0_0x800F2704;
    }
}

loc_inl0_0x800F26FC:
{
    r3 = 0;
    goto loc_inl0_cont_800F26E4;
}

loc_inl0_0x800F2704:
{
    r5 = MemoryInline::FlatRead32((r13 + -17396));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & -256);
    r0 = (r5 + r0);
    r3 = (r0 + r4);
    r3 = MemoryInline::FlatRead8((r3 + 898));
}

loc_inl0_cont_800F26E4:
{
    // end of inlined leaf 0x800F26E4
    r4 = r3;
    r3 = (r30 + 196608);
    r0 = MemoryInline::FlatRead8((r3 + -27153));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + -27164));
    r0 = (r4 & 255);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30368));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30396));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r4 = fctiwzword0;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    ctx->lr = 0x800DB1C4u;
    if constexpr (KnownRegArgsCpuCall<0x800E83B8u>(&func_800E83B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800E83B8_2495 = func_800E83B8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800E83B8_2495);
        r4 = static_cast<uint32_t>(regargs_result_800E83B8_2495 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E83B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_800DB1C4:
{
    r3 = (r30 + 196608);
    r0 = MemoryInline::FlatRead8((r3 + -27154));
    r0 = (r0 ^ 1);
    MemoryInline::FlatWrite8((r3 + -27154), static_cast<uint8_t>(r0));
    goto loc_800DB320;
}

loc_800DB1D8:
{
    r3 = r29;
    r4 = r31;
    r5 = 0;
    ctx->lr = 0x800DB1E8u;
    if constexpr (KnownRegArgsCpuCall<0x800E8140u>(&func_800E8140)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800E8140_2904 = func_800E8140_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800E8140_2904);
        r4 = static_cast<uint32_t>(regargs_result_800E8140_2904 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800E8140u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r5 = (r30 + 196608);
    MemoryInline::FlatWrite32((r5 + -27152), r3);
    r4 = 0;
    r0 = MemoryInline::FlatRead8((r5 + -27153));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r5 + r0);
    MemoryInline::FlatWrite32((r3 + -27164), r4);
    r0 = MemoryInline::FlatRead8((r5 + -27153));
    r0 = (r0 ^ 1);
    MemoryInline::FlatWrite8((r5 + -27153), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + -27153));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r5 + r0);
    r3 = MemoryInline::FlatRead32((r3 + -27164));
}

loc_800DB224:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DB28C;
    }
}

loc_800DB228:
{
    ctx->lr = 0x800DB22Cu;
    if constexpr (KnownRegArgsCpuCall<0x800E8090u>(&func_800E8090)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800E8090_3242 = func_800E8090_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E8090_3242);
        r4 = static_cast<uint32_t>(regargs_result_800E8090_3242 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E8090u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_800DB230:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DB320;
    }
}

loc_800DB234:
{
    r3 = r29;
    r4 = r31;
    // inline leaf 0x800F26E4 (14 guest instruction(s))
}

loc_inl1_0x800F26E4:
{
}

loc_inl1_0x800F26E8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(49))) {
        goto loc_inl1_0x800F26F4;
    }
}

loc_inl1_0x800F26EC:
{
    r3 = 0;
    goto loc_inl1_cont_800F26E4;
}

loc_inl1_0x800F26F4:
{
}

loc_inl1_0x800F26F8:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(256))) {
        goto loc_inl1_0x800F2704;
    }
}

loc_inl1_0x800F26FC:
{
    r3 = 0;
    goto loc_inl1_cont_800F26E4;
}

loc_inl1_0x800F2704:
{
    r5 = MemoryInline::FlatRead32((r13 + -17396));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_9 & -256);
    r0 = (r5 + r0);
    r3 = (r0 + r4);
    r3 = MemoryInline::FlatRead8((r3 + 898));
}

loc_inl1_cont_800F26E4:
{
    // end of inlined leaf 0x800F26E4
    r4 = r3;
    r3 = (r30 + 196608);
    r0 = MemoryInline::FlatRead8((r3 + -27153));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + -27164));
    r0 = (r4 & 255);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30368));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30396));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r4 = fctiwzword1;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    ctx->lr = 0x800DB288u;
    if constexpr (KnownRegArgsCpuCall<0x800E83B8u>(&func_800E83B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800E83B8_3D08 = func_800E83B8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800E83B8_3D08);
        r4 = static_cast<uint32_t>(regargs_result_800E83B8_3D08 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E83B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_800DB320;
}

loc_800DB28C:
{
    r3 = r29;
    r4 = r31;
    // inline leaf 0x800F26E4 (14 guest instruction(s))
}

loc_inl2_0x800F26E4:
{
}

loc_inl2_0x800F26E8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(49))) {
        goto loc_inl2_0x800F26F4;
    }
}

loc_inl2_0x800F26EC:
{
    r3 = 0;
    goto loc_inl2_cont_800F26E4;
}

loc_inl2_0x800F26F4:
{
}

loc_inl2_0x800F26F8:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(256))) {
        goto loc_inl2_0x800F2704;
    }
}

loc_inl2_0x800F26FC:
{
    r3 = 0;
    goto loc_inl2_cont_800F26E4;
}

loc_inl2_0x800F2704:
{
    r5 = MemoryInline::FlatRead32((r13 + -17396));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_12 & -256);
    r0 = (r5 + r0);
    r3 = (r0 + r4);
    r3 = MemoryInline::FlatRead8((r3 + 898));
}

loc_inl2_cont_800F26E4:
{
    // end of inlined leaf 0x800F26E4
    r5 = r3;
    r4 = (r30 + 196608);
    r0 = MemoryInline::FlatRead8((r4 + -27153));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + -27164));
}

loc_800DB2B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DB2EC;
    }
}

loc_800DB2B8:
{
    r0 = (r5 & 255);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30368));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30396));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r4 = fctiwzword2;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    ctx->lr = 0x800DB2E8u;
    if constexpr (KnownRegArgsCpuCall<0x800E83B8u>(&func_800E83B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800E83B8_4803 = func_800E83B8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800E83B8_4803);
        r4 = static_cast<uint32_t>(regargs_result_800E83B8_4803 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E83B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_800DB320;
}

loc_800DB2EC:
{
    r3 = MemoryInline::FlatRead32((r4 + -27152));
    r0 = (r5 & 255);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30368));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30396));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r4 = fctiwzword3;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    ctx->lr = 0x800DB320u;
    if constexpr (KnownRegArgsCpuCall<0x800E83B8u>(&func_800E83B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800E83B8_4DDC = func_800E83B8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800E83B8_4DDC);
        r4 = static_cast<uint32_t>(regargs_result_800E83B8_4DDC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E83B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_800DB320:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800DB0A8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800DB0A8_ra38_1fa_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003E3F gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFB fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800DB0A8 func_800DB0A8 preserves=true fpr_mask=0x00000000
