#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B0640(CpuContext* ctx);
extern "C" uint64_t func_804B0640_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804B0A70(CpuContext* ctx);
extern "C" uint64_t func_804B0A70_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804B0F00(CpuContext* ctx);
extern "C" uint64_t func_804B0F00_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804B1020(CpuContext* ctx);
extern "C" uint64_t func_804B1020_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804B10E0(CpuContext* ctx);
extern "C" uint64_t func_804B10E0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804B1210(CpuContext* ctx);
extern "C" uint64_t func_804B1210_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804B1890(CpuContext* ctx);
extern "C" uint64_t func_804B1890_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804B1990(CpuContext* ctx);
extern "C" uint64_t func_804B1990_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804B1E50_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r28_rot_4 = 0;
    uint32_t r28_rot_5 = 0;
    uint32_t r28_rot_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
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

    goto loc_804B1E50;

loc_804B1E50:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_804B1E5C:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r5;
    r30 = r4;
    r29 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_804B1EA0;
    }
}

loc_804B1E80:
{
}

loc_804B1E84:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804B1EA0;
    }
}

loc_804B1E88:
{
    r4 = 0;
    ctx->lr = 0x804B1E90u;
    if constexpr (KnownRegArgsCpuCall<0x804B0F00u>(&func_804B0F00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804B0F00_D47 = func_804B0F00_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804B0F00_D47);
        r4 = static_cast<uint32_t>(regargs_result_804B0F00_D47 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804B0F00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_804B1E94:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804B1EA0;
    }
}

loc_804B1E98:
{
    r3 = 0;
    goto loc_804B1FA8;
}

loc_804B1EA0:
{
    r3 = r29;
    r4 = r30;
    r5 = 0;
    ctx->lr = 0x804B1EB0u;
    if constexpr (KnownRegArgsCpuCall<0x804B1890u>(&func_804B1890)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804B1890_1162 = func_804B1890_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804B1890_1162);
        r4 = static_cast<uint32_t>(regargs_result_804B1890_1162 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804B1890u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r28 = (r28_rot_1 & 134217727);
}

loc_804B1EB8:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_804B1F6C;
    }
}

loc_804B1EBC:
{
    r3 = r29;
    r4 = r30;
    r5 = 0;
    ctx->lr = 0x804B1ECCu;
    if constexpr (KnownRegArgsCpuCall<0x804B10E0u>(&func_804B10E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804B10E0_15F8 = func_804B10E0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804B10E0_15F8);
        r4 = static_cast<uint32_t>(regargs_result_804B10E0_15F8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804B10E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r28_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r28 = (r28_rot_2 & 134217727);
}

loc_804B1ED4:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_804B1F64;
    }
}

loc_804B1ED8:
{
    r4 = 536936448;
    r3 = r29;
    r0 = (r4 + 4864);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = (r1 + 8);
    r5 = 4;
    r6 = 1;
    r7 = 0;
    ctx->lr = 0x804B1EFCu;
    if constexpr (KnownRegArgsCpuCall<0x804B0640u>(&func_804B0640)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804B0640_1B40 = func_804B0640_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804B0640_1B40);
        r4 = static_cast<uint32_t>(regargs_result_804B0640_1B40 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804B0640u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3 = r29;
    r28_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r28 = (r28_rot_3 & 134217727);
    ctx->lr = 0x804B1F0Cu;
    if constexpr (KnownRegArgsCpuCall<0x804B0A70u>(&func_804B0A70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804B0A70_1FC8 = func_804B0A70_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804B0A70_1FC8);
        r4 = static_cast<uint32_t>(regargs_result_804B0A70_1FC8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804B0A70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3 = r29;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    r4 = r31;
    r28 = (r28 | r0);
    r5 = 4;
    r6 = 0;
    r7 = 0;
    ctx->lr = 0x804B1F30u;
    if constexpr (KnownRegArgsCpuCall<0x804B0640u>(&func_804B0640)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804B0640_24D0 = func_804B0640_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804B0640_24D0);
        r4 = static_cast<uint32_t>(regargs_result_804B0640_24D0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804B0640u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3 = r29;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    r28 = (r28 | r0);
    ctx->lr = 0x804B1F44u;
    if constexpr (KnownRegArgsCpuCall<0x804B0A70u>(&func_804B0A70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804B0A70_296C = func_804B0A70_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804B0A70_296C);
        r4 = static_cast<uint32_t>(regargs_result_804B0A70_296C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804B0A70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3 = r29;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 134217727);
    r28 = (r28 | r0);
    ctx->lr = 0x804B1F58u;
    if constexpr (KnownRegArgsCpuCall<0x804B1210u>(&func_804B1210)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804B1210_2E08 = func_804B1210_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804B1210_2E08);
        r4 = static_cast<uint32_t>(regargs_result_804B1210_2E08 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804B1210u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_4 & 134217727);
    r28 = (r28 | r0);
}

loc_804B1F64:
{
    r3 = r29;
    ctx->lr = 0x804B1F6Cu;
    if constexpr (KnownRegArgsCpuCall<0x804B1990u>(&func_804B1990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804B1990_324F = func_804B1990_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804B1990_324F);
        r4 = static_cast<uint32_t>(regargs_result_804B1990_324F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804B1990u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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

loc_804B1F6C:
{
}

loc_804B1F70:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(2))) {
        goto loc_804B1F84;
    }
}

loc_804B1F74:
{
}

loc_804B1F78:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_804B1F84;
    }
}

loc_804B1F7C:
{
    r3 = r29;
    ctx->lr = 0x804B1F84u;
    if constexpr (KnownRegArgsCpuCall<0x804B1020u>(&func_804B1020)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804B1020_3A1D = func_804B1020_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804B1020_3A1D);
        r4 = static_cast<uint32_t>(regargs_result_804B1020_3A1D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804B1020u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_804B1F84:
{
}

loc_804B1F88:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_804B1F94;
    }
}

loc_804B1F8C:
{
    r3 = 0;
    goto loc_804B1FA8;
}

loc_804B1F94:
{
    r4 = MemoryInline::FlatRead32(r31);
    r3 = (-1 - r4);
    r0 = (r4 + 1);
    r0 = (r3 | r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_804B1FA8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

extern "C" void func_804B1E50(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804B1E50_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B1E50 func_804B1E50 preserves=true fpr_mask=0x00000000
