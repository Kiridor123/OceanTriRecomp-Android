#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80040890(CpuContext* ctx);
extern "C" uint64_t func_80040890_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800E4B30(CpuContext* ctx);
extern "C" uint64_t func_800E4B30_ra0_0_18_0(CpuContext*);
extern "C" void func_800E4B70(CpuContext* ctx);
extern "C" uint64_t func_800E4B70_ra0_0_18_0(CpuContext*);
extern "C" void func_800E8338(CpuContext* ctx);
extern "C" uint64_t func_800E8338_ra0_0_18_0(CpuContext*);
extern "C" void func_800E8378(CpuContext* ctx);
extern "C" uint64_t func_800E8378_ra0_0_18_0(CpuContext*);
extern "C" void func_800E874C(CpuContext* ctx);
extern "C" uint64_t func_800E874C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_803A91F0(CpuContext* ctx);
extern "C" uint64_t func_803A91F0_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_8045607C(CpuContext* ctx);
extern "C" uint32_t func_8045607C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_804E96A0(CpuContext* ctx);
extern "C" uint32_t func_804E96A0_ra68_1e_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_80435B54_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_80435B54;

loc_80435B54:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x80660000u;
    r4 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r4 + 2163));
}

loc_80435B78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80435D6C;
    }
}

loc_80435B7C:
{
    r0 = MemoryInline::FlatRead8((r4 + 2149));
}

loc_80435B84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80435B8C;
    }
}

loc_80435B88:
{
    goto loc_80435D6C;
}

loc_80435B8C:
{
    r3 = 0x806D0000u;
    r31 = (r3 + 27968);
    r0 = MemoryInline::FlatRead32((r3 + 27968));
}

loc_80435B9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80435BAC;
    }
}

loc_80435BA0:
{
}

loc_80435BA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80435C94;
    }
}

loc_80435BA8:
{
    goto loc_80435D6C;
}

loc_80435BAC:
{
    r3 = 0;
    MemoryInline::FlatWriteRam8((r31 + 10), static_cast<uint8_t>(r3));
    r0 = -1;
    MemoryInline::FlatWriteRam32((r31 + 4), r0);
    r0 = MemoryInline::FlatRead32((r13 + -18056));
}

loc_80435BC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80435BE4;
    }
}

loc_80435BC8:
{
}

loc_80435BCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_80435BEC;
    }
}

loc_80435BD0:
{
}

loc_80435BD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(11))) {
        goto loc_80435BF8;
    }
}

loc_80435BD8:
{
}

loc_80435BDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80435C04;
    }
}

loc_80435BE0:
{
    goto loc_80435C14;
}

loc_80435BE4:
{
    MemoryInline::FlatWriteRam32((r31 + 4), r3);
    goto loc_80435C14;
}

loc_80435BEC:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r31 + 4), r0);
    goto loc_80435C14;
}

loc_80435BF8:
{
    r0 = 2;
    MemoryInline::FlatWriteRam32((r31 + 4), r0);
    goto loc_80435C14;
}

loc_80435C04:
{
    r0 = 3;
    MemoryInline::FlatWriteRam32((r31 + 4), r0);
    r0 = 1;
    MemoryInline::FlatWriteRam8((r4 + 2161), static_cast<uint8_t>(r0));
}

loc_80435C14:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
}

loc_80435C1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80435D6C;
    }
}

loc_80435C20:
{
    r3 = 0x80660000u;
    r30 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r30 + 2160));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWriteRam8((r31 + 11), static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->lr = 0x80435C44u;
    if constexpr (KnownRegArgsCpuCall<0x804E96A0u>(&func_804E96A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_804E96A0_151C = func_804E96A0_ra68_1e_8_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_804E96A0_151C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x804E96A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    MemoryInline::FlatWriteRam8((r31 + 9), static_cast<uint8_t>(r0));
    r3 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2160), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead8((r30 + 5));
    MemoryInline::FlatWriteRam8((r31 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r30 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r31 + 10), static_cast<uint8_t>(r3));
    r3 = 0;
    ctx->lr = 0x80435C74u;
    if constexpr (KnownRegArgsCpuCall<0x800E874Cu>(&func_800E874C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800E874C_1BF0 = func_800E874C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E874C_1BF0);
        r4 = static_cast<uint32_t>(regargs_result_800E874C_1BF0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E874Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x80435C78u;
    if constexpr (KnownRegArgsCpuCall<0x800E8338u>(&func_800E8338)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800E8338_1F26 = func_800E8338_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_800E8338_1F26);
        r4 = static_cast<uint32_t>(regargs_result_800E8338_1F26 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E8338u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x80435C7Cu;
    if constexpr (KnownRegArgsCpuCall<0x800E4B30u>(&func_800E4B30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800E4B30_2258 = func_800E4B30_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_800E4B30_2258);
        r4 = static_cast<uint32_t>(regargs_result_800E4B30_2258 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E4B30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x80435C80u;
    if constexpr (KnownRegArgsCpuCall<0x8045607Cu>(&func_8045607C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045607C_256F = func_8045607C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8045607C_256F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8045607Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    ctx->lr = 0x80435C84u;
    if constexpr (KnownRegArgsCpuCall<0x80040890u>(&func_80040890)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80040890_27A2 = func_80040890_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80040890_27A2);
        r4 = static_cast<uint32_t>(regargs_result_80040890_27A2 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80040890u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = MemoryInline::FlatRead32(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32(r31, r0);
    goto loc_80435D6C;
}

loc_80435C94:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
}

loc_80435C9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80435D6C;
    }
}

loc_80435CA0:
{
    r0 = MemoryInline::FlatRead32((r13 + -18056));
}

loc_80435CA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80435CC8;
    }
}

loc_80435CAC:
{
}

loc_80435CB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_80435CD4;
    }
}

loc_80435CB4:
{
}

loc_80435CB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(11))) {
        goto loc_80435CE0;
    }
}

loc_80435CBC:
{
}

loc_80435CC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80435CEC;
    }
}

loc_80435CC4:
{
    goto loc_80435D00;
}

loc_80435CC8:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r31 + 4), r0);
    goto loc_80435D00;
}

loc_80435CD4:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r31 + 4), r0);
    goto loc_80435D00;
}

loc_80435CE0:
{
    r0 = 2;
    MemoryInline::FlatWriteRam32((r31 + 4), r0);
    goto loc_80435D00;
}

loc_80435CEC:
{
    r0 = 3;
    MemoryInline::FlatWriteRam32((r31 + 4), r0);
    r0 = 1;
    MemoryInline::FlatWriteRam8((r4 + 2161), static_cast<uint8_t>(r0));
    goto loc_80435D6C;
}

loc_80435D00:
{
    r3 = 0;
    r0 = MemoryInline::FlatRead32((r13 + -18056));
}

loc_80435D0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80435D14;
    }
}

loc_80435D10:
{
    r3 = 1;
}

loc_80435D14:
{
}

loc_80435D18:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80435D68;
    }
}

loc_80435D1C:
{
    r3 = MemoryInline::FlatRead8((r31 + 9));
    ctx->lr = 0x80435D24u;
    if constexpr (KnownRegArgsCpuCall<0x804E96A0u>(&func_804E96A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_804E96A0_356F = func_804E96A0_ra68_1e_8_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_804E96A0_356F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x804E96A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r0 = MemoryInline::FlatRead8((r31 + 11));
    r3 = 0x80660000u;
    r30 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r30 + 2160), static_cast<uint8_t>(r0));
    r3 = 65536;
    r3 = (r3 + -32768);
    r3 = (r3 & 65535);
    ctx->lr = 0x80435D44u;
    if constexpr (KnownRegArgsCpuCall<0x800E874Cu>(&func_800E874C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800E874C_3AE7 = func_800E874C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E874C_3AE7);
        r4 = static_cast<uint32_t>(regargs_result_800E874C_3AE7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E874Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x80435D48u;
    if constexpr (KnownRegArgsCpuCall<0x800E8378u>(&func_800E8378)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800E8378_3E1D = func_800E8378_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_800E8378_3E1D);
        r4 = static_cast<uint32_t>(regargs_result_800E8378_3E1D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E8378u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x80435D4Cu;
    if constexpr (KnownRegArgsCpuCall<0x800E4B70u>(&func_800E4B70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800E4B70_414F = func_800E4B70_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_800E4B70_414F);
        r4 = static_cast<uint32_t>(regargs_result_800E4B70_414F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E4B70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead8((r31 + 8));
    MemoryInline::FlatWriteRam8((r30 + 5), static_cast<uint8_t>(r0));
    ctx->lr = 0x80435D58u;
    if constexpr (KnownRegArgsCpuCall<0x803A91F0u>(&func_803A91F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803A91F0_44DB = func_803A91F0_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_803A91F0_44DB);
        r4 = static_cast<uint32_t>(regargs_result_803A91F0_44DB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x803A91F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    }
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 10), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32(r31, r0);
    goto loc_80435D6C;
}

loc_80435D68:
{
    ctx->lr = 0x80435D6Cu;
    if constexpr (KnownRegArgsCpuCall<0x800E4B30u>(&func_800E4B30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800E4B30_4957 = func_800E4B30_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_800E4B30_4957);
        r4 = static_cast<uint32_t>(regargs_result_800E4B30_4957 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E4B30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80435D6C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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

extern "C" void func_80435B54(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80435B54_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80435B54 func_80435B54 preserves=true fpr_mask=0x00000000
