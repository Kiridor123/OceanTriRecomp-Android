#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DCEC8(CpuContext* ctx);
extern "C" uint64_t func_800DCEC8_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_801E1AA4(CpuContext* ctx);
extern "C" uint64_t func_801E1AA4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801E1C4C_ra38_a_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2 = ctx->fpr[2];
    ctx->fpr[3].d = arg_f3;

    goto loc_801E1C4C;

loc_801E1C4C:
{
    r3 = r29;
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17096));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -17172));
    ctx->lr = 0x801E1C60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_801E1C64:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E2148;
    }
}

loc_801E1C68:
{
    r0 = MemoryInline::FlatRead8((r28 + 8));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r28 + 8), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 6), static_cast<uint8_t>(r0));
}

loc_801E1F10:
{
    r0 = MemoryInline::FlatRead8((r30 + 91));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = 0x88890000u;
    r0 = (r3 + -30583);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (r0 + r4);
    r0 = (static_cast<int32_t>(r0) >> 4);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 30);
    r0 = (r4 - r0);
}

loc_801E1F40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E1F64;
    }
}

loc_801E1F44:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r28 + 68));
}

loc_801E1F54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_801E1F64;
    }
}

loc_801E1F58:
{
    r3 = MemoryInline::FlatRead32((r31 + 1176));
    r4 = (r28 + 24);
    ctx->lr = 0x801E1F64u;
    if constexpr (KnownRegArgsCpuCall<0x800DCEC8u>(&func_800DCEC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_800DCEC8_E7C = func_800DCEC8_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DCEC8_E7C);
        r4 = static_cast<uint32_t>(regargs_result_800DCEC8_E7C >> 32);
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
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800DCEC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    }
}

loc_801E1F64:
{
    r3 = MemoryInline::FlatRead8((r30 + 91));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 91), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 39), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 35), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 31), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 10));
}

loc_801E1F8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E1FC8;
    }
}

loc_801E1F90:
{
    r3 = MemoryInline::FlatRead16((r29 + 12));
    r3 = (r3 + 65536);
    r0 = (r3 + -162);
    r0 = (r0 & 65535);
}

loc_801E1FA4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_801E1FC8;
    }
}

loc_801E1FA8:
{
    r3 = 0;
    r4 = 0;
    r5 = (r1 + 36);
    r6 = (r1 + 32);
    r7 = (r1 + 28);
    r8 = (r1 + 24);
    if constexpr (KnownRegArgsCpuCall<0x801E1AA4u>(&func_801E1AA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_801E1AA4_167B = func_801E1AA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801E1AA4_167B);
        r4 = static_cast<uint32_t>(regargs_result_801E1AA4_167B >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x801E1AA4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_801E2068;
}

loc_801E1FC8:
{
    r0 = MemoryInline::FlatRead32((r28 + 12));
}

loc_801E1FD0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(4))) {
        goto loc_801E2020;
    }
}

loc_801E1FD4:
{
    r0 = MemoryInline::FlatRead8((r28 + 6));
}

loc_801E1FDC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E2000;
    }
}

loc_801E1FE0:
{
    r3 = 0;
    r4 = MemoryInline::FlatRead8((r29 + 1466));
    r5 = (r1 + 36);
    r6 = (r1 + 32);
    r7 = (r1 + 28);
    r8 = (r1 + 24);
    if constexpr (KnownRegArgsCpuCall<0x801E1AA4u>(&func_801E1AA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_801E1AA4_1CD5 = func_801E1AA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801E1AA4_1CD5);
        r4 = static_cast<uint32_t>(regargs_result_801E1AA4_1CD5 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x801E1AA4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_801E2068;
}

loc_801E2000:
{
    r3 = 1;
    r4 = MemoryInline::FlatRead8((r29 + 1466));
    r5 = (r1 + 36);
    r6 = (r1 + 32);
    r7 = (r1 + 28);
    r8 = (r1 + 24);
    if constexpr (KnownRegArgsCpuCall<0x801E1AA4u>(&func_801E1AA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_801E1AA4_21AC = func_801E1AA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801E1AA4_21AC);
        r4 = static_cast<uint32_t>(regargs_result_801E1AA4_21AC >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x801E1AA4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_801E2068;
}

loc_801E2020:
{
    r0 = MemoryInline::FlatRead8((r28 + 6));
}

loc_801E2028:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E204C;
    }
}

loc_801E202C:
{
    r3 = 1;
    r4 = MemoryInline::FlatRead8((r29 + 1466));
    r5 = (r1 + 36);
    r6 = (r1 + 32);
    r7 = (r1 + 28);
    r8 = (r1 + 24);
    if constexpr (KnownRegArgsCpuCall<0x801E1AA4u>(&func_801E1AA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_801E1AA4_2744 = func_801E1AA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801E1AA4_2744);
        r4 = static_cast<uint32_t>(regargs_result_801E1AA4_2744 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x801E1AA4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_801E2068;
}

loc_801E204C:
{
    r3 = 0;
    r4 = MemoryInline::FlatRead8((r29 + 1466));
    r5 = (r1 + 36);
    r6 = (r1 + 32);
    r7 = (r1 + 28);
    r8 = (r1 + 24);
    if constexpr (KnownRegArgsCpuCall<0x801E1AA4u>(&func_801E1AA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_801E1AA4_2C1B = func_801E1AA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801E1AA4_2C1B);
        r4 = static_cast<uint32_t>(regargs_result_801E1AA4_2C1B >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x801E1AA4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
}

loc_801E2068:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = 8;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = 9;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    r0 = MemoryInline::FlatRead8((r28 + 8));
    r0 = (r0 & 1);
}

loc_801E2094:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801E20E8;
    }
}

loc_801E2098:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = 8;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    r0 = MemoryInline::FlatRead32((r1 + 28));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = 1;
    r5 = 4;
    r6 = (r1 + 20);
    r7 = 0;
    ctx->lr = 0x801E20C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x800E2950u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    r0 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = 2;
    r5 = 4;
    r6 = (r1 + 16);
    r7 = 0;
    ctx->lr = 0x801E20E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x800E2950u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_801E20E8:
{
    r0 = MemoryInline::FlatRead8((r28 + 8));
    r0 = (r0 & 2);
}

loc_801E20F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801E2148;
    }
}

loc_801E20F8:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = 9;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = 3;
    r5 = 4;
    r6 = (r1 + 12);
    r7 = 0;
    ctx->lr = 0x801E2128u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x800E2950u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    r0 = MemoryInline::FlatRead32((r1 + 32));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = 4;
    r5 = 4;
    r6 = (r1 + 8);
    r7 = 0;
    ctx->lr = 0x801E2148u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x800E2950u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_801E2148:
{
    r31 = MemoryInline::FlatRead32((r1 + 124));
    r30 = MemoryInline::FlatRead32((r1 + 120));
    r29 = MemoryInline::FlatRead32((r1 + 116));
    r28 = MemoryInline::FlatRead32((r1 + 112));
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801E1C4C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801E1C4C_ra38_a_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xF0003FFF gpr_write=0xF0001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801E1C4C func_801E1C4C preserves=true fpr_mask=0x00000000
