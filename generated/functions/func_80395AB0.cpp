#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80049240(CpuContext* ctx);
extern "C" uint64_t func_80049240_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800DBC94(CpuContext* ctx);
extern "C" uint64_t func_800DBC94_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802125A4(CpuContext* ctx);
extern "C" uint64_t func_802125A4_ra218_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_8037730C(CpuContext* ctx);
extern "C" uint64_t func_8037730C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8042B02C(CpuContext* ctx);
extern "C" uint64_t func_8042B02C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8042B030(CpuContext* ctx);
extern "C" uint64_t func_8042B030_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8042B7C4(CpuContext* ctx);
extern "C" uint64_t func_8042B7C4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8042B980(CpuContext* ctx);
extern "C" uint32_t func_8042B980_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80395AB0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r9 = ctx->gpr[9];
    uint32_t r29 = ctx->gpr[29];
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

    goto loc_80395AB0;

loc_80395AB0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = 0x806B0000u;
    r30 = (r29 + -12348);
    r31 = MemoryInline::FlatRead32((r30 + 172));
    r0 = MemoryInline::FlatRead8((r31 + 578));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80395AE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80395B08;
    }
}

loc_80395AE4:
{
}

loc_80395AE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80395B14;
    }
}

loc_80395AEC:
{
}

loc_80395AF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80395B8C;
    }
}

loc_80395AF4:
{
}

loc_80395AF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80395C30;
    }
}

loc_80395AFC:
{
}

loc_80395B00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80395C8C;
    }
}

loc_80395B04:
{
    goto loc_80395CCC;
}

loc_80395B08:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 578), static_cast<uint8_t>(r0));
    goto loc_80395CCC;
}

loc_80395B14:
{
    r0 = MemoryInline::FlatRead8((r30 + 82));
}

loc_80395B1C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80395B5C;
    }
}

loc_80395B20:
{
    r3 = (r31 + 919);
    r4 = (r31 + 918);
    r5 = (r31 + 917);
    ctx->lr = 0x80395B30u;
    if constexpr (KnownRegArgsCpuCall<0x8042B7C4u>(&func_8042B7C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8042B7C4_FE2 = func_8042B7C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8042B7C4_FE2);
        r4 = static_cast<uint32_t>(regargs_result_8042B7C4_FE2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8042B7C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80395B34:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80395B40;
    }
}

loc_80395B38:
{
    // inline leaf 0x80395A14 (6 guest instruction(s))
    r0 = 0;
    r4 = 0x806B0000u;
    r3 = (r4 + -12348);
    MemoryInline::FlatWriteRam8((r3 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + -12348), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80395A14
    goto loc_80395CCC;
}

loc_80395B40:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 600), r0);
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 578), static_cast<uint8_t>(r0));
    r3 = 0;
    ctx->lr = 0x80395B58u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800DBC94_1590 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_1590);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_1590 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80395CCC;
}

loc_80395B5C:
{
}

loc_80395B60:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80395CCC;
    }
}

loc_80395B64:
{
    r3 = 0;
    ctx->lr = 0x80395B6Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800DBC94_1C9F = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_1C9F);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_1C9F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    ctx->lr = 0x80395B70u;
    if constexpr (KnownRegArgsCpuCall<0x8042B030u>(&func_8042B030)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8042B030_22A7 = func_8042B030_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042B030_22A7);
        r4 = static_cast<uint32_t>(regargs_result_8042B030_22A7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x8042B030u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_80395B74:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80395B84;
    }
}

loc_80395B78:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r31 + 578), static_cast<uint8_t>(r0));
    goto loc_80395CCC;
}

loc_80395B84:
{
    // inline leaf 0x80395A14 (6 guest instruction(s))
    r0 = 0;
    r4 = 0x806B0000u;
    r3 = (r4 + -12348);
    MemoryInline::FlatWriteRam8((r3 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + -12348), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80395A14
    goto loc_80395CCC;
}

loc_80395B8C:
{
    ctx->lr = 0x80395B90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8042B914u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
}

loc_80395B94:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80395BA0;
    }
}

loc_80395B98:
{
    // inline leaf 0x80395A14 (6 guest instruction(s))
    r0 = 0;
    r4 = 0x806B0000u;
    r3 = (r4 + -12348);
    MemoryInline::FlatWriteRam8((r3 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + -12348), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80395A14
    goto loc_80395CCC;
}

loc_80395BA0:
{
    r3 = (r31 + 919);
    r4 = (r31 + 918);
    r5 = (r31 + 917);
    ctx->lr = 0x80395BB0u;
    if constexpr (KnownRegArgsCpuCall<0x8042B7C4u>(&func_8042B7C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8042B7C4_2E5E = func_8042B7C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8042B7C4_2E5E);
        r4 = static_cast<uint32_t>(regargs_result_8042B7C4_2E5E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8042B7C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r4 = MemoryInline::FlatRead8((r31 + 919));
    r3 = MemoryInline::FlatRead8((r31 + 918));
    r0 = (r3 + -1);
}

loc_80395BC0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_80395BD0;
    }
}

loc_80395BC4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 931), static_cast<uint8_t>(r0));
    goto loc_80395BD8;
}

loc_80395BD0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 931), static_cast<uint8_t>(r0));
}

loc_80395BD8:
{
    r3 = (r31 + 600);
    ctx->lr = 0x80395BE0u;
    if constexpr (KnownRegArgsCpuCall<0x802125A4u>(&func_802125A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_802125A4_33A9 = func_802125A4_ra218_1f8_18_0(ctx, r3, r4, r9, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802125A4_33A9);
        r4 = static_cast<uint32_t>(regargs_result_802125A4_33A9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x802125A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_80395BE4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80395BF4;
    }
}

loc_80395BE8:
{
}

loc_80395BEC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_80395C14;
    }
}

loc_80395BF0:
{
    goto loc_80395C18;
}

loc_80395BF4:
{
    ctx->lr = 0x80395BF8u;
    if constexpr (KnownRegArgsCpuCall<0x8042B02Cu>(&func_8042B02C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8042B02C_3B07 = func_8042B02C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042B02C_3B07);
        r4 = static_cast<uint32_t>(regargs_result_8042B02C_3B07 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x8042B02Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_80395BFC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80395C0C;
    }
}

loc_80395C00:
{
    r0 = 5;
    MemoryInline::FlatWrite8((r31 + 578), static_cast<uint8_t>(r0));
    goto loc_80395C18;
}

loc_80395C0C:
{
    // inline leaf 0x80395A14 (6 guest instruction(s))
    r0 = 0;
    r4 = 0x806B0000u;
    r3 = (r4 + -12348);
    MemoryInline::FlatWriteRam8((r3 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + -12348), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80395A14
    goto loc_80395C18;
}

loc_80395C14:
{
    // inline leaf 0x80395A14 (6 guest instruction(s))
    r0 = 0;
    r4 = 0x806B0000u;
    r3 = (r4 + -12348);
    MemoryInline::FlatWriteRam8((r3 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + -12348), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80395A14
}

loc_80395C18:
{
    r3 = 0x80390000u;
    r3 = (r3 + 23084);
    r4 = 0;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80049240u>(&func_80049240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80049240_44FF = func_80049240_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80049240_44FF);
        r4 = static_cast<uint32_t>(regargs_result_80049240_44FF >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80049240u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
    }
    goto loc_80395CCC;
}

loc_80395C30:
{
    r0 = MemoryInline::FlatRead8((r30 + 82));
    r0 = (r0 & 4);
}

loc_80395C3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80395CCC;
    }
}

loc_80395C40:
{
    ctx->lr = 0x80395C44u;
    if constexpr (KnownRegArgsCpuCall<0x8042B980u>(&func_8042B980)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8042B980_4943 = func_8042B980_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8042B980_4943;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8042B980u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80395C48:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80395CCC;
    }
}

loc_80395C4C:
{
    r0 = MemoryInline::FlatRead8((r30 + 82));
    r0 = (r0 | 4);
    MemoryInline::FlatWriteRam8((r30 + 82), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r31 + 612));
    r0 = MemoryInline::FlatRead8((r3 + 2817));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r3 + 2817), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r31 + 612));
    r3 = MemoryInline::FlatRead8((r4 + 2817));
    r4 = MemoryInline::FlatRead8((r4 + 2818));
    ctx->lr = 0x80395C78u;
    if constexpr (KnownRegArgsCpuCall<0x8037730Cu>(&func_8037730C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8037730C_4E33 = func_8037730C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8037730C_4E33);
        r4 = static_cast<uint32_t>(regargs_result_8037730C_4E33 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x8037730Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = 10;
    MemoryInline::FlatWriteRam8((r29 + -12348), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 8), static_cast<uint8_t>(r0));
    goto loc_80395CCC;
}

loc_80395C8C:
{
    ctx->lr = 0x80395C90u;
    if constexpr (KnownRegArgsCpuCall<0x8042B980u>(&func_8042B980)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8042B980_553F = func_8042B980_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8042B980_553F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8042B980u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80395C94:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80395CCC;
    }
}

loc_80395C98:
{
    r0 = MemoryInline::FlatRead8((r30 + 82));
    r0 = (r0 | 4);
    MemoryInline::FlatWriteRam8((r30 + 82), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWrite8((r31 + 578), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r31 + 612));
    r0 = MemoryInline::FlatRead8((r3 + 2817));
    r0 = (r0 & 248);
    MemoryInline::FlatWrite8((r3 + 2817), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r31 + 612));
    r3 = MemoryInline::FlatRead8((r4 + 2817));
    r4 = MemoryInline::FlatRead8((r4 + 2818));
    ctx->lr = 0x80395CCCu;
    if constexpr (KnownRegArgsCpuCall<0x8037730Cu>(&func_8037730C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8037730C_5A84 = func_8037730C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8037730C_5A84);
        r4 = static_cast<uint32_t>(regargs_result_8037730C_5A84 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x8037730Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_80395CCC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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

extern "C" void func_80395AB0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80395AB0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80395AB0 func_80395AB0 preserves=true fpr_mask=0x00000000
