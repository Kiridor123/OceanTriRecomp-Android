#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800925E8(CpuContext* ctx);
extern "C" uint64_t func_800925E8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800925EC(CpuContext* ctx);
extern "C" uint64_t func_800925EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800928AC(CpuContext* ctx);
extern "C" uint64_t func_800928AC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800928B0(CpuContext* ctx);
extern "C" uint64_t func_800928B0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80092B70(CpuContext* ctx);
extern "C" uint64_t func_80092B70_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80092B74(CpuContext* ctx);
extern "C" uint64_t func_80092B74_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80092D24(CpuContext* ctx);
extern "C" uint64_t func_80092D24_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80092D28(CpuContext* ctx);
extern "C" uint64_t func_80092D28_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80092ED8(CpuContext* ctx);
extern "C" uint64_t func_80092ED8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80092EDC(CpuContext* ctx);
extern "C" uint64_t func_80092EDC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8009308C(CpuContext* ctx);
extern "C" uint64_t func_8009308C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80093090(CpuContext* ctx);
extern "C" uint64_t func_80093090_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80093240(CpuContext* ctx);
extern "C" uint64_t func_80093240_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80093244(CpuContext* ctx);
extern "C" uint64_t func_80093244_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800933F4(CpuContext* ctx);
extern "C" uint64_t func_800933F4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800933F8(CpuContext* ctx);
extern "C" uint64_t func_800933F8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800935A8(CpuContext* ctx);
extern "C" uint64_t func_800935A8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800935AC(CpuContext* ctx);
extern "C" uint64_t func_800935AC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800936F0(CpuContext* ctx);
extern "C" uint64_t func_800936F0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800936F4(CpuContext* ctx);
extern "C" uint64_t func_800936F4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80093E78(CpuContext* ctx);
extern "C" uint64_t func_80093E78_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80093EC8(CpuContext* ctx);
extern "C" uint64_t func_80093EC8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80093F18(CpuContext* ctx);
extern "C" uint64_t func_80093F18_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80093F68(CpuContext* ctx);
extern "C" uint64_t func_80093F68_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80093FB8(CpuContext* ctx);
extern "C" uint64_t func_80093FB8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80094008(CpuContext* ctx);
extern "C" uint64_t func_80094008_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80094058(CpuContext* ctx);
extern "C" uint64_t func_80094058_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800940A8(CpuContext* ctx);
extern "C" uint64_t func_800940A8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8009A430(CpuContext* ctx);
extern "C" uint64_t func_8009A430_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8009A724(CpuContext* ctx);
extern "C" uint64_t func_8009A724_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80093B70_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80093B70;

loc_80093B70:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r31 = r3;
    ctx->lr = 0x80093B90u;
    if constexpr (KnownRegArgsCpuCall<0x800925ECu>(&func_800925EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800925EC_13E1 = func_800925EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800925EC_13E1);
        r4 = static_cast<uint32_t>(regargs_result_800925EC_13E1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800925ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = r3;
    r29 = 0;
    goto loc_80093BC8;
}

loc_80093B9C:
{
    r3 = r31;
    r4 = r29;
    ctx->lr = 0x80093BA8u;
    if constexpr (KnownRegArgsCpuCall<0x800925E8u>(&func_800925E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800925E8_176F = func_800925E8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800925E8_176F);
        r4 = static_cast<uint32_t>(regargs_result_800925E8_176F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800925E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    r3 = (r1 + 44);
    ctx->lr = 0x80093BB4u;
    if constexpr (KnownRegArgsCpuCall<0x800940A8u>(&func_800940A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800940A8_1ADA = func_800940A8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800940A8_1ADA);
        r4 = static_cast<uint32_t>(regargs_result_800940A8_1ADA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800940A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80093BB8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80093BC4;
    }
}

loc_80093BBC:
{
    r3 = 0;
    goto loc_80093E5C;
}

loc_80093BC4:
{
    r29 = (r29 + 1);
}

loc_80093BC8:
{
}

loc_80093BCC:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r30))) {
        goto loc_80093B9C;
    }
}

loc_80093BD0:
{
    r3 = r31;
    ctx->lr = 0x80093BD8u;
    if constexpr (KnownRegArgsCpuCall<0x80092B74u>(&func_80092B74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80092B74_1FA0 = func_80092B74_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80092B74_1FA0);
        r4 = static_cast<uint32_t>(regargs_result_80092B74_1FA0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80092B74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = r3;
    r29 = 0;
    goto loc_80093C10;
}

loc_80093BE4:
{
    r3 = r31;
    r4 = r29;
    ctx->lr = 0x80093BF0u;
    if constexpr (KnownRegArgsCpuCall<0x80092B70u>(&func_80092B70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80092B70_232E = func_80092B70_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80092B70_232E);
        r4 = static_cast<uint32_t>(regargs_result_80092B70_232E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80092B70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam32((r1 + 40), r3);
    r3 = (r1 + 40);
    ctx->lr = 0x80093BFCu;
    if constexpr (KnownRegArgsCpuCall<0x8009A724u>(&func_8009A724)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8009A724_2699 = func_8009A724_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009A724_2699);
        r4 = static_cast<uint32_t>(regargs_result_8009A724_2699 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8009A724u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80093C00:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80093C0C;
    }
}

loc_80093C04:
{
    r3 = 0;
    goto loc_80093E5C;
}

loc_80093C0C:
{
    r29 = (r29 + 1);
}

loc_80093C10:
{
}

loc_80093C14:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r30))) {
        goto loc_80093BE4;
    }
}

loc_80093C18:
{
    r3 = r31;
    ctx->lr = 0x80093C20u;
    if constexpr (KnownRegArgsCpuCall<0x800928B0u>(&func_800928B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800928B0_2B5F = func_800928B0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800928B0_2B5F);
        r4 = static_cast<uint32_t>(regargs_result_800928B0_2B5F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800928B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = r3;
    r29 = 0;
    goto loc_80093C58;
}

loc_80093C2C:
{
    r3 = r31;
    r4 = r29;
    ctx->lr = 0x80093C38u;
    if constexpr (KnownRegArgsCpuCall<0x800928ACu>(&func_800928AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800928AC_2EED = func_800928AC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800928AC_2EED);
        r4 = static_cast<uint32_t>(regargs_result_800928AC_2EED >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800928ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    r3 = (r1 + 36);
    ctx->lr = 0x80093C44u;
    if constexpr (KnownRegArgsCpuCall<0x8009A430u>(&func_8009A430)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8009A430_3258 = func_8009A430_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009A430_3258);
        r4 = static_cast<uint32_t>(regargs_result_8009A430_3258 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8009A430u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80093C48:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80093C54;
    }
}

loc_80093C4C:
{
    r3 = 0;
    goto loc_80093E5C;
}

loc_80093C54:
{
    r29 = (r29 + 1);
}

loc_80093C58:
{
}

loc_80093C5C:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r30))) {
        goto loc_80093C2C;
    }
}

loc_80093C60:
{
    r3 = r31;
    ctx->lr = 0x80093C68u;
    if constexpr (KnownRegArgsCpuCall<0x80092D28u>(&func_80092D28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80092D28_371E = func_80092D28_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80092D28_371E);
        r4 = static_cast<uint32_t>(regargs_result_80092D28_371E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80092D28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = r3;
    r29 = 0;
    goto loc_80093CA0;
}

loc_80093C74:
{
    r3 = r31;
    r4 = r29;
    ctx->lr = 0x80093C80u;
    if constexpr (KnownRegArgsCpuCall<0x80092D24u>(&func_80092D24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80092D24_3AAC = func_80092D24_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80092D24_3AAC);
        r4 = static_cast<uint32_t>(regargs_result_80092D24_3AAC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80092D24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    r3 = (r1 + 32);
    ctx->lr = 0x80093C8Cu;
    if constexpr (KnownRegArgsCpuCall<0x80094058u>(&func_80094058)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80094058_3E17 = func_80094058_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80094058_3E17);
        r4 = static_cast<uint32_t>(regargs_result_80094058_3E17 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80094058u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80093C90:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80093C9C;
    }
}

loc_80093C94:
{
    r3 = 0;
    goto loc_80093E5C;
}

loc_80093C9C:
{
    r29 = (r29 + 1);
}

loc_80093CA0:
{
}

loc_80093CA4:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r30))) {
        goto loc_80093C74;
    }
}

loc_80093CA8:
{
    r3 = r31;
    ctx->lr = 0x80093CB0u;
    if constexpr (KnownRegArgsCpuCall<0x80092EDCu>(&func_80092EDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80092EDC_42DD = func_80092EDC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80092EDC_42DD);
        r4 = static_cast<uint32_t>(regargs_result_80092EDC_42DD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80092EDCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = r3;
    r29 = 0;
    goto loc_80093CE8;
}

loc_80093CBC:
{
    r3 = r31;
    r4 = r29;
    ctx->lr = 0x80093CC8u;
    if constexpr (KnownRegArgsCpuCall<0x80092ED8u>(&func_80092ED8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80092ED8_466B = func_80092ED8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80092ED8_466B);
        r4 = static_cast<uint32_t>(regargs_result_80092ED8_466B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80092ED8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    r3 = (r1 + 28);
    ctx->lr = 0x80093CD4u;
    if constexpr (KnownRegArgsCpuCall<0x80094008u>(&func_80094008)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80094008_49D6 = func_80094008_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80094008_49D6);
        r4 = static_cast<uint32_t>(regargs_result_80094008_49D6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80094008u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80093CD8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80093CE4;
    }
}

loc_80093CDC:
{
    r3 = 0;
    goto loc_80093E5C;
}

loc_80093CE4:
{
    r29 = (r29 + 1);
}

loc_80093CE8:
{
}

loc_80093CEC:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r30))) {
        goto loc_80093CBC;
    }
}

loc_80093CF0:
{
    r3 = r31;
    ctx->lr = 0x80093CF8u;
    if constexpr (KnownRegArgsCpuCall<0x80093090u>(&func_80093090)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80093090_4E9C = func_80093090_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80093090_4E9C);
        r4 = static_cast<uint32_t>(regargs_result_80093090_4E9C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80093090u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = r3;
    r29 = 0;
    goto loc_80093D30;
}

loc_80093D04:
{
    r3 = r31;
    r4 = r29;
    ctx->lr = 0x80093D10u;
    if constexpr (KnownRegArgsCpuCall<0x8009308Cu>(&func_8009308C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8009308C_522A = func_8009308C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009308C_522A);
        r4 = static_cast<uint32_t>(regargs_result_8009308C_522A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8009308Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    r3 = (r1 + 24);
    ctx->lr = 0x80093D1Cu;
    if constexpr (KnownRegArgsCpuCall<0x80093FB8u>(&func_80093FB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80093FB8_5595 = func_80093FB8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80093FB8_5595);
        r4 = static_cast<uint32_t>(regargs_result_80093FB8_5595 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80093FB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80093D20:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80093D2C;
    }
}

loc_80093D24:
{
    r3 = 0;
    goto loc_80093E5C;
}

loc_80093D2C:
{
    r29 = (r29 + 1);
}

loc_80093D30:
{
}

loc_80093D34:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r30))) {
        goto loc_80093D04;
    }
}

loc_80093D38:
{
    r3 = r31;
    ctx->lr = 0x80093D40u;
    if constexpr (KnownRegArgsCpuCall<0x80093244u>(&func_80093244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80093244_5A5B = func_80093244_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80093244_5A5B);
        r4 = static_cast<uint32_t>(regargs_result_80093244_5A5B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80093244u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = r3;
    r29 = 0;
    goto loc_80093D78;
}

loc_80093D4C:
{
    r3 = r31;
    r4 = r29;
    ctx->lr = 0x80093D58u;
    if constexpr (KnownRegArgsCpuCall<0x80093240u>(&func_80093240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80093240_5DE9 = func_80093240_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80093240_5DE9);
        r4 = static_cast<uint32_t>(regargs_result_80093240_5DE9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80093240u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r3 = (r1 + 20);
    ctx->lr = 0x80093D64u;
    if constexpr (KnownRegArgsCpuCall<0x80093F68u>(&func_80093F68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80093F68_6154 = func_80093F68_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80093F68_6154);
        r4 = static_cast<uint32_t>(regargs_result_80093F68_6154 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80093F68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80093D68:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80093D74;
    }
}

loc_80093D6C:
{
    r3 = 0;
    goto loc_80093E5C;
}

loc_80093D74:
{
    r29 = (r29 + 1);
}

loc_80093D78:
{
}

loc_80093D7C:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r30))) {
        goto loc_80093D4C;
    }
}

loc_80093D80:
{
    r3 = r31;
    ctx->lr = 0x80093D88u;
    if constexpr (KnownRegArgsCpuCall<0x800933F8u>(&func_800933F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800933F8_661A = func_800933F8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800933F8_661A);
        r4 = static_cast<uint32_t>(regargs_result_800933F8_661A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800933F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = r3;
    r29 = 0;
    goto loc_80093DC0;
}

loc_80093D94:
{
    r3 = r31;
    r4 = r29;
    ctx->lr = 0x80093DA0u;
    if constexpr (KnownRegArgsCpuCall<0x800933F4u>(&func_800933F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800933F4_69A8 = func_800933F4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800933F4_69A8);
        r4 = static_cast<uint32_t>(regargs_result_800933F4_69A8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800933F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r3 = (r1 + 16);
    ctx->lr = 0x80093DACu;
    if constexpr (KnownRegArgsCpuCall<0x80093F18u>(&func_80093F18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80093F18_6D13 = func_80093F18_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80093F18_6D13);
        r4 = static_cast<uint32_t>(regargs_result_80093F18_6D13 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80093F18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80093DB0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80093DBC;
    }
}

loc_80093DB4:
{
    r3 = 0;
    goto loc_80093E5C;
}

loc_80093DBC:
{
    r29 = (r29 + 1);
}

loc_80093DC0:
{
}

loc_80093DC4:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r30))) {
        goto loc_80093D94;
    }
}

loc_80093DC8:
{
    r3 = r31;
    ctx->lr = 0x80093DD0u;
    if constexpr (KnownRegArgsCpuCall<0x800935ACu>(&func_800935AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800935AC_71D9 = func_800935AC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800935AC_71D9);
        r4 = static_cast<uint32_t>(regargs_result_800935AC_71D9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800935ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = r3;
    r29 = 0;
    goto loc_80093E08;
}

loc_80093DDC:
{
    r3 = r31;
    r4 = r29;
    ctx->lr = 0x80093DE8u;
    if constexpr (KnownRegArgsCpuCall<0x800935A8u>(&func_800935A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800935A8_7567 = func_800935A8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800935A8_7567);
        r4 = static_cast<uint32_t>(regargs_result_800935A8_7567 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800935A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 12);
    ctx->lr = 0x80093DF4u;
    if constexpr (KnownRegArgsCpuCall<0x80093EC8u>(&func_80093EC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80093EC8_78D2 = func_80093EC8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80093EC8_78D2);
        r4 = static_cast<uint32_t>(regargs_result_80093EC8_78D2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80093EC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80093DF8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80093E04;
    }
}

loc_80093DFC:
{
    r3 = 0;
    goto loc_80093E5C;
}

loc_80093E04:
{
    r29 = (r29 + 1);
}

loc_80093E08:
{
}

loc_80093E0C:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r30))) {
        goto loc_80093DDC;
    }
}

loc_80093E10:
{
    r3 = r31;
    ctx->lr = 0x80093E18u;
    if constexpr (KnownRegArgsCpuCall<0x800936F4u>(&func_800936F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800936F4_7D98 = func_800936F4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800936F4_7D98);
        r4 = static_cast<uint32_t>(regargs_result_800936F4_7D98 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800936F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = r3;
    r29 = 0;
    goto loc_80093E50;
}

loc_80093E24:
{
    r3 = r31;
    r4 = r29;
    ctx->lr = 0x80093E30u;
    if constexpr (KnownRegArgsCpuCall<0x800936F0u>(&func_800936F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800936F0_8126 = func_800936F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800936F0_8126);
        r4 = static_cast<uint32_t>(regargs_result_800936F0_8126 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800936F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 8);
    ctx->lr = 0x80093E3Cu;
    if constexpr (KnownRegArgsCpuCall<0x80093E78u>(&func_80093E78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80093E78_848F = func_80093E78_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80093E78_848F);
        r4 = static_cast<uint32_t>(regargs_result_80093E78_848F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80093E78u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80093E40:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80093E4C;
    }
}

loc_80093E44:
{
    r3 = 0;
    goto loc_80093E5C;
}

loc_80093E4C:
{
    r29 = (r29 + 1);
}

loc_80093E50:
{
}

loc_80093E54:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r30))) {
        goto loc_80093E24;
    }
}

loc_80093E58:
{
    r3 = 1;
}

loc_80093E5C:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80093B70(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80093B70_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FA gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80093B70 func_80093B70 preserves=true fpr_mask=0x00000000
