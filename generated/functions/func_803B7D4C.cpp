#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CEA98(CpuContext* ctx);
extern "C" uint64_t func_800CEA98_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80142F50(CpuContext* ctx);
extern "C" uint64_t func_80142F50_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80144644(CpuContext* ctx);
extern "C" uint64_t func_80144644_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80146B80(CpuContext* ctx);
extern "C" uint64_t func_80146B80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803B7D4C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
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

    MKW_GUEST_ENTER(0x803B7D4Cu);
    goto loc_803B7D4C;

loc_803B7D4C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r30 = r3;
    r4 = MemoryInline::FlatRead32((r13 + -22424));
    r0 = MemoryInline::FlatRead8((r4 + 26060));
}

loc_803B7D70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B7D90;
    }
}

loc_803B7D74:
{
}

loc_803B7D78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803B7ED8;
    }
}

loc_803B7D7C:
{
}

loc_803B7D80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803B7EFC;
    }
}

loc_803B7D84:
{
}

loc_803B7D88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_803B7F30;
    }
}

loc_803B7D8C:
{
    goto loc_803B7FBC;
}

loc_803B7D90:
{
    r3 = MemoryInline::FlatRead8((r4 + 26061));
}

loc_803B7D98:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(4))) {
        goto loc_803B7FBC;
    }
}

loc_803B7D9C:
{
    r0 = MemoryInline::FlatRead8((r4 + 15));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803B7DA8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_803B7FBC;
    }
}

loc_803B7DAC:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = (r4 + r0);
    r31 = MemoryInline::FlatRead8((r3 + 26052));
}

loc_803B7DBC:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_803B7FBC;
    }
}

loc_803B7DC0:
{
}

loc_803B7DC4:
{
    if ((static_cast<uint32_t>(r31) > static_cast<uint32_t>(13))) {
        goto loc_803B7FBC;
    }
}

loc_803B7DC8:
{
    r31 = (r31 + -1);
    r3 = MemoryInline::FlatRead32((r4 + 26068));
    r3 = MH3_TickLoad(r3, 2151382476);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 26068), r0);
    r4 = MemoryInline::FlatRead32((r13 + -22424));
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5432));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f2.d = PpcFmulsInline(f1.d, f0.d);
    r3 = 0x80660000u;
    r3 = (r3 + -19148);
    r0 = MemoryInline::FlatRead8((r4 + 26061));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 31));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -5424));
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 1127219200;
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r3 = fctiwzword0;
    r0 = MemoryInline::FlatRead32((r4 + 26068));
}

loc_803B7E38:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_803B7FBC;
    }
}

loc_803B7E3C:
{
    r0 = (r31 & 255);
    r0 = (r0 * 60);
    r3 = (r4 + r0);
    r30 = (r3 + 92);
    r0 = MemoryInline::FlatRead16(r30);
}

loc_803B7E54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B7FBC;
    }
}

loc_803B7E58:
{
    r3 = (r0 & 255);
    ctx->lr = 0x803B7E60u;
    if constexpr (KnownRegArgsCpuCall<0x80146B80u>(&func_80146B80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80146B80_15C8 = func_80146B80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80146B80_15C8);
        r4 = static_cast<uint32_t>(regargs_result_80146B80_15C8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80146B80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_803B7E64:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B7FBC;
    }
}

loc_803B7E68:
{
    r0 = -1;
    r3 = MemoryInline::FlatRead32((r13 + -22424));
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -22424));
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -22424));
    MemoryInline::FlatWrite8((r3 + 14), static_cast<uint8_t>(r0));
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r13 + -22424));
    MemoryInline::FlatWrite8((r3 + 26060), static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    r3 = MemoryInline::FlatRead32((r13 + -22424));
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    r3 = r30;
    r5 = MemoryInline::FlatRead32((r13 + -22424));
    r4 = (r31 & 255);
    r0 = (r4 + 1);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & -16);
    r4 = (r5 + r0);
    r4 = (r4 + 17532);
    // inline leaf 0x803B74B0 (17 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 12u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r4);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 49), 0, 11u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r3 + 49), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r3 + 50), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 51), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 52), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r3 + 53), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r4 + 6));
    MemoryInline::WriteResolved16(guest_range_1, 5u, (r3 + 54), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 8));
    MemoryInline::WriteResolved16(guest_range_1, 7u, (r3 + 56), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r4 + 10));
    MemoryInline::WriteResolved16(guest_range_1, 9u, (r3 + 58), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x803B74B0
    r3 = MemoryInline::FlatRead8((r30 + 49));
    ctx->lr = 0x803B7EC4u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x801410B4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r4 = MemoryInline::FlatRead32((r13 + -22424));
    r3 = MemoryInline::FlatRead8((r4 + 15));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + 15), static_cast<uint8_t>(r0));
    goto loc_803B7FBC;
}

loc_803B7ED8:
{
    r3 = 0;
    r4 = 0;
    ctx->lr = 0x803B7EE4u;
    if constexpr (KnownRegArgsCpuCall<0x800CEA98u>(&func_800CEA98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800CEA98_26AD = func_800CEA98_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800CEA98_26AD);
        r4 = static_cast<uint32_t>(regargs_result_800CEA98_26AD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800CEA98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_803B7EE8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_803B7FBC;
    }
}

loc_803B7EEC:
{
    r0 = 2;
    r3 = MemoryInline::FlatRead32((r13 + -22424));
    MemoryInline::FlatWrite8((r3 + 26060), static_cast<uint8_t>(r0));
    goto loc_803B7FBC;
}

loc_803B7EFC:
{
    r0 = MemoryInline::FlatRead8((r4 + 12));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 60);
    r3 = (r4 + r0);
    r3 = (r3 + 92);
    r4 = MemoryInline::FlatRead8((r4 + 26061));
    r0 = (r4 + 2);
    r4 = (r0 & 65535);
    ctx->lr = 0x803B7F20u;
    if constexpr (KnownRegArgsCpuCall<0x80142F50u>(&func_80142F50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80142F50_2C0A = func_80142F50_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80142F50_2C0A);
        r4 = static_cast<uint32_t>(regargs_result_80142F50_2C0A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80142F50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = 3;
    r3 = MemoryInline::FlatRead32((r13 + -22424));
    MemoryInline::FlatWrite8((r3 + 26060), static_cast<uint8_t>(r0));
    goto loc_803B7FBC;
}

loc_803B7F30:
{
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    r3 = MemoryInline::FlatRead8((r4 + 26061));
    r0 = (r3 + 2);
    r3 = (r0 & 65535);
    r4 = (r1 + 12);
    r5 = (r1 + 8);
    ctx->lr = 0x803B7F54u;
    if constexpr (KnownRegArgsCpuCall<0x80144644u>(&func_80144644)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80144644_3413 = func_80144644_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80144644_3413);
        r4 = static_cast<uint32_t>(regargs_result_80144644_3413 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80144644u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_803B7F5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B7FBC;
    }
}

loc_803B7F60:
{
    r3 = MemoryInline::FlatRead32((r13 + -22424));
    r0 = MemoryInline::FlatRead8((r3 + 12));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 60);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite32((r4 + 132), r0);
    r3 = MemoryInline::FlatRead32((r13 + -22424));
    r3 = MemoryInline::FlatRead8((r3 + 26061));
    r5 = (r3 + 2);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite32((r3 + 8820), r5);
    r0 = 1;
    MemoryInline::FlatWrite16((r3 + 8824), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 141));
    MemoryInline::FlatWrite16((r3 + 8826), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -22424));
    r3 = MemoryInline::FlatRead8((r4 + 26061));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + 26061), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -22424));
    MemoryInline::FlatWrite8((r3 + 26060), static_cast<uint8_t>(r31));
}

loc_803B7FBC:
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803B7D4C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B7D4C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x0FFFFFFF gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803B7D4C func_803B7D4C preserves=true fpr_mask=0x00000000
