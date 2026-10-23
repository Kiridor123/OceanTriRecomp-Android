#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D84A0(CpuContext* ctx);
extern "C" uint32_t func_800D84A0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800DAEAC(CpuContext* ctx);
extern "C" uint64_t func_800DAEAC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800DB340(CpuContext* ctx);
extern "C" uint32_t func_800DB340_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800E8140(CpuContext* ctx);
extern "C" uint64_t func_800E8140_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_800E83B8(CpuContext* ctx);
extern "C" uint64_t func_800E83B8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_800DB3D0_ra38_1fa_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_800DB3D0;

loc_800DB3D0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r30 = r3;
    r29 = r5;
    ctx->lr = 0x800DB3F4u;
    if constexpr (KnownRegArgsCpuCall<0x800D84A0u>(&func_800D84A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800D84A0_8C8 = func_800D84A0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D84A0_8C8;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800D84A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_800DB3F8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_800DB504;
    }
}

loc_800DB3FC:
{
    ctx->lr = 0x800DB400u;
    if constexpr (KnownRegArgsCpuCall<0x800DB340u>(&func_800DB340)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_800DB340_C15 = func_800DB340_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800DB340_C15;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800DB340u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x800DB404u;
    if constexpr (KnownRegArgsCpuCall<0x800DAEACu>(&func_800DAEAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800DAEAC_EE8 = func_800DAEAC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800DAEAC_EE8);
        r4 = static_cast<uint32_t>(regargs_result_800DAEAC_EE8 >> 32);
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
    r31 = (r3 & 255);
}

loc_800DB40C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_800DB504;
    }
}

loc_800DB410:
{
    r3 = (r30 & 255);
    r0 = (r3 + -2);
}

loc_800DB41C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_800DB458;
    }
}

loc_800DB420:
{
    r0 = (r3 + -130);
}

loc_800DB428:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_800DB474;
    }
}

loc_800DB42C:
{
}

loc_800DB430:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DB448;
    }
}

loc_800DB434:
{
}

loc_800DB438:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_800DB450;
    }
}

loc_800DB43C:
{
}

loc_800DB440:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_800DB490;
    }
}

loc_800DB444:
{
    goto loc_800DB504;
}

loc_800DB448:
{
    r30 = 6;
    goto loc_800DB49C;
}

loc_800DB450:
{
    r30 = 7;
    goto loc_800DB49C;
}

loc_800DB458:
{
    r0 = (r29 & 255);
}

loc_800DB460:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800DB46C;
    }
}

loc_800DB464:
{
    r30 = 8;
    goto loc_800DB49C;
}

loc_800DB46C:
{
    r30 = 16;
    goto loc_800DB49C;
}

loc_800DB474:
{
    r0 = (r29 & 255);
}

loc_800DB47C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800DB488;
    }
}

loc_800DB480:
{
    r30 = 13;
    goto loc_800DB49C;
}

loc_800DB488:
{
    r30 = 16;
    goto loc_800DB49C;
}

loc_800DB490:
{
    r30 = 9;
}

loc_800DB49C:
{
    r3 = r31;
    r4 = r30;
    r5 = 0;
    ctx->lr = 0x800DB4ACu;
    if constexpr (KnownRegArgsCpuCall<0x800E8140u>(&func_800E8140)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800E8140_1903 = func_800E8140_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800E8140_1903);
        r4 = static_cast<uint32_t>(regargs_result_800E8140_1903 >> 32);
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
    r29 = r3;
}

loc_800DB4B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DB504;
    }
}

loc_800DB4B8:
{
    r3 = r31;
    r4 = r30;
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
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & -256);
    r0 = (r5 + r0);
    r3 = (r0 + r4);
    r3 = MemoryInline::FlatRead8((r3 + 898));
}

loc_inl0_cont_800F26E4:
{
    // end of inlined leaf 0x800F26E4
    r0 = r3;
    r3 = r29;
    r0 = (r0 & 255);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30368));
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword5));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30396));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r4 = fctiwzword0;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    ctx->lr = 0x800DB504u;
    if constexpr (KnownRegArgsCpuCall<0x800E83B8u>(&func_800E83B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800E83B8_2640 = func_800E83B8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800E83B8_2640);
        r4 = static_cast<uint32_t>(regargs_result_800E83B8_2640 >> 32);
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

loc_800DB504:
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

extern "C" void func_800DB3D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800DB3D0_ra38_1fa_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003E3F gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFB fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800DB3D0 func_800DB3D0 preserves=true fpr_mask=0x00000000
