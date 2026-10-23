#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050574(CpuContext* ctx);
extern "C" uint64_t func_80050574_ra18_18_18_0(CpuContext*, uint32_t, uint32_t, double, double);

extern "C" uint64_t func_80117A80_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    goto loc_80117A80;

loc_80117A80:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    r30 = r3;
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 80);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 32);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r31 = MemoryInline::FlatRead32((r30 + 56));
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x80117AD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x800F9358u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
}

loc_80117AD4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80117AF0;
    }
}

loc_80117AD8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r30 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    goto loc_80117DD8;
}

loc_80117AF0:
{
    ctx->lr = 0x80117AF4u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x803C4878u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80117AF8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80117B14;
    }
}

loc_80117AFC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r30 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    goto loc_80117DD8;
}

loc_80117B14:
{
    r0 = MemoryInline::FlatRead8((r30 + 2));
}

loc_80117B1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80117B3C;
    }
}

loc_80117B20:
{
}

loc_80117B24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80117BA4;
    }
}

loc_80117B28:
{
}

loc_80117B2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80117BD4;
    }
}

loc_80117B30:
{
}

loc_80117B34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80117CE0;
    }
}

loc_80117B38:
{
    goto loc_80117D7C;
}

loc_80117B3C:
{
    r3 = MemoryInline::FlatRead32((r30 + 48));
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = (r3 + 4);
    r4 = 11;
    r5 = (r1 + 80);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0A78u>(ctx);
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28656));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28652));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28648));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 20);
    r4 = (r1 + 80);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 92));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 24), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
}

loc_80117BA4:
{
    r28 = 0;
    r29 = r31;
    goto loc_80117BC4;
}

loc_80117BB0:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = (r30 + 24);
    ctx->lr = 0x80117BBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x800F9744u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r29 = (r29 + 4);
    r28 = (r28 + 1);
}

loc_80117BC4:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_80117BCC:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r0))) {
        goto loc_80117BB0;
    }
}

loc_80117BD0:
{
    goto loc_80117D7C;
}

loc_80117BD4:
{
    r28 = MemoryInline::FlatRead32((r30 + 48));
    r0 = MemoryInline::FlatRead8((r28 + 10));
}

loc_80117BE0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_80117C08;
    }
}

loc_80117BE4:
{
    r0 = MemoryInline::FlatRead16((r28 + 12));
}

loc_80117BEC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80117C08;
    }
}

loc_80117BF0:
{
    r3 = r28;
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    r3 = (r3 & 65535);
    r0 = MemoryInline::FlatRead32((r31 + 8));
}

loc_80117C04:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_80117C20;
    }
}

loc_80117C08:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r30 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    goto loc_80117DD8;
}

loc_80117C20:
{
    r3 = MemoryInline::FlatRead32((r28 + 88));
    r0 = (r3 + 16384);
    MemoryInline::FlatWrite32((r30 + 40), r0);
    r3 = MemoryInline::FlatRead32((r28 + 316));
    r3 = (r3 + 4);
    r4 = 11;
    r5 = (r1 + 80);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0A78u>(ctx);
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28656));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28652));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28648));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 20);
    r4 = (r1 + 80);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    r3 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    r3 = MemoryInline::FlatRead32((r30 + 40));
    r4 = (r1 + 32);
    ctx->lr = 0x80117C74u;
    if constexpr (KnownRegArgsCpuCall<0x80050574u>(&func_80050574)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_80050574_2489 = func_80050574_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80050574_2489);
        r4 = static_cast<uint32_t>(regargs_result_80050574_2489 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        InvokeDirectCpu<0x80050574u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    f1.d = MemoryInline::FlatReadFloat32((r1 + 92));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 24), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    r28 = 0;
    r29 = r31;
    goto loc_80117CD0;
}

loc_80117CBC:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = (r1 + 32);
    ctx->lr = 0x80117CC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x800A5420u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r29 = (r29 + 4);
    r28 = (r28 + 1);
}

loc_80117CD0:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_80117CD8:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r0))) {
        goto loc_80117CBC;
    }
}

loc_80117CDC:
{
    goto loc_80117D7C;
}

loc_80117CE0:
{
    r3 = MemoryInline::FlatRead32((r30 + 48));
    r3 = (r3 + 8);
    r4 = 16;
    r5 = (r1 + 80);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0A78u>(ctx);
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28652));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28648));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28644));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 20);
    r4 = (r1 + 80);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 92));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 24), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 12));
    ctx->lr = 0x80117D50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x800F9B24u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r28 = 0;
    r29 = r31;
    goto loc_80117D70;
}

loc_80117D5C:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = (r30 + 24);
    ctx->lr = 0x80117D68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x800F9744u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r29 = (r29 + 4);
    r28 = (r28 + 1);
}

loc_80117D70:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_80117D78:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r0))) {
        goto loc_80117D5C;
    }
}

loc_80117D7C:
{
    r28 = 0;
    r29 = r31;
    goto loc_80117DB8;
}

loc_80117D88:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    ctx->lr = 0x80117D90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x800F9984u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
}

loc_80117D94:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80117DB0;
    }
}

loc_80117D98:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r30 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    goto loc_80117DD8;
}

loc_80117DB0:
{
    r29 = (r29 + 4);
    r28 = (r28 + 1);
}

loc_80117DB8:
{
    r6 = MemoryInline::FlatRead32(r31);
}

loc_80117DC0:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r6))) {
        goto loc_80117D88;
    }
}

loc_80117DC4:
{
    r3 = r30;
    r4 = (r31 + 4);
    r5 = 1;
    r7 = 0;
    ctx->lr = 0x80117DD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
}

loc_80117DD8:
{
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80117A80(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80117A80_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80117A80 func_80117A80 preserves=true fpr_mask=0x00000000
