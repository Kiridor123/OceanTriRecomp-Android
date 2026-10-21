#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8049FF04(CpuContext* ctx);
extern "C" uint32_t func_8049FF04_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8049FFF8(CpuContext* ctx);
extern "C" uint64_t func_8049FFF8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8049081C_ra58_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8049081Cu);
    goto loc_8049081C;

loc_8049081C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r4 = 2;
}

loc_8049082C:
{
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 4388;
    r29 = 0;
    r28 = 0x80740000u;
    r28 = (r28 + -6152);
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r4));
    r30 = (r28 + 908);
    r4 = MemoryInline::FlatRead32((r28 + 904));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r28 + 896), static_cast<uint8_t>(r29));
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80490880;
    }
}

loc_80490868:
{
    r12 = MemoryInline::FlatRead32((r28 + 900));
    r4 = 0;
    r5 = 0;
    ctr = r12;
    ctx->lr = 0x8049087Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_80490C4C;
}

loc_80490880:
{
    r3 = r4;
    r4 = (r1 + 8);
    r5 = 0;
    ctx->lr = 0x80490890u;
    if constexpr (KnownRegArgsCpuCall<0x8049FFF8u>(&func_8049FFF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8049FFF8_B0E = func_8049FFF8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8049FFF8_B0E);
        r4 = static_cast<uint32_t>(regargs_result_8049FFF8_B0E >> 32);
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
        InvokeDirectCpu<0x8049FFF8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80490894:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804908B8;
    }
}

loc_8049089C:
{
    r12 = MemoryInline::FlatRead32((r28 + 900));
    r3 = 12;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    ctx->lr = 0x804908B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_80490C4C;
}

loc_804908B8:
{
    r3 = r30;
    r4 = 0;
    r5 = 116;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r31;
    r4 = 518;
    if constexpr (KnownRegArgsCpuCall<0x8049FF04u>(&func_8049FF04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8049FF04_11CF = func_8049FF04_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8049FF04_11CF;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8049FF04u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_804908D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80490930;
    }
}

loc_804908DC:
{
    r0 = MemoryInline::FlatRead16((r3 + 6));
    r0 = (static_cast<int32_t>(r0) >> 12);
}

loc_804908E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_80490930;
    }
}

loc_804908EC:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
}

loc_804908F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80490930;
    }
}

loc_804908F8:
{
    r0 = MemoryInline::FlatRead16((r3 + 6));
    r0 = (static_cast<int32_t>(r0) >> 12);
}

loc_80490904:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_80490930;
    }
}

loc_80490908:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80490910:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80490930;
    }
}

loc_80490914:
{
    r4 = MemoryInline::FlatRead32(r3);
}

loc_8049091C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80490930;
    }
}

loc_80490920:
{
    r3 = MemoryInline::FlatRead16((r4 + 6));
    r0 = (static_cast<int32_t>(r3) >> 12);
}

loc_8049092C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80490954;
    }
}

loc_80490930:
{
    r5 = 0x80740000u;
    r3 = 13;
    r5 = (r5 + -6152);
    r4 = 0;
    r12 = MemoryInline::FlatRead32((r5 + 900));
    r5 = 0;
    ctr = r12;
    ctx->lr = 0x80490950u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_80490C4C;
}

loc_80490954:
{
    r0 = (r3 & 4095);
}

loc_80490958:
{
    MemoryInline::FlatWriteRam16((r30 + 104), static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80490968;
    }
}

loc_80490960:
{
    r0 = (r4 + 8);
    MemoryInline::FlatWriteRam32((r30 + 108), r0);
}

loc_80490968:
{
    r3 = r31;
    r4 = 516;
    if constexpr (KnownRegArgsCpuCall<0x8049FF04u>(&func_8049FF04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8049FF04_1CA0 = func_8049FF04_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8049FF04_1CA0;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8049FF04u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_80490978:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8049098C;
    }
}

loc_8049097C:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
}

loc_80490984:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049098C;
    }
}

loc_80490988:
{
    r29 = (r29 | 1);
}

loc_8049098C:
{
    r3 = r31;
    r4 = 517;
    if constexpr (KnownRegArgsCpuCall<0x8049FF04u>(&func_8049FF04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8049FF04_2012 = func_8049FF04_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8049FF04_2012;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8049FF04u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8049099C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804909B4;
    }
}

loc_804909A0:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
}

loc_804909A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804909B4;
    }
}

loc_804909AC:
{
    r0 = (r29 | 4);
    r29 = (r0 & 65535);
}

loc_804909B4:
{
    r3 = r31;
    r4 = 525;
    if constexpr (KnownRegArgsCpuCall<0x8049FF04u>(&func_8049FF04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8049FF04_239B = func_8049FF04_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8049FF04_239B;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8049FF04u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_804909C4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804909DC;
    }
}

loc_804909C8:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
}

loc_804909D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804909DC;
    }
}

loc_804909D4:
{
    r0 = (r29 | 2);
    r29 = (r0 & 65535);
}

loc_804909DC:
{
    r3 = r31;
    r4 = 520;
    if constexpr (KnownRegArgsCpuCall<0x8049FF04u>(&func_8049FF04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8049FF04_2724 = func_8049FF04_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8049FF04_2724;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8049FF04u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_804909EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80490A04;
    }
}

loc_804909F0:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
}

loc_804909F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80490A04;
    }
}

loc_804909FC:
{
    r0 = (r29 | 8);
    r29 = (r0 & 65535);
}

loc_80490A04:
{
    r3 = r31;
    r4 = 521;
    if constexpr (KnownRegArgsCpuCall<0x8049FF04u>(&func_8049FF04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8049FF04_2AAD = func_8049FF04_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8049FF04_2AAD;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8049FF04u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_80490A14:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80490A2C;
    }
}

loc_80490A18:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
}

loc_80490A20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80490A2C;
    }
}

loc_80490A24:
{
    r0 = (r29 | 16);
    r29 = (r0 & 65535);
}

loc_80490A2C:
{
    r3 = r31;
    r4 = 522;
    if constexpr (KnownRegArgsCpuCall<0x8049FF04u>(&func_8049FF04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8049FF04_2E37 = func_8049FF04_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8049FF04_2E37;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8049FF04u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_80490A3C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80490A54;
    }
}

loc_80490A40:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
}

loc_80490A48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80490A54;
    }
}

loc_80490A4C:
{
    r0 = (r29 | 32);
    r29 = (r0 & 65535);
}

loc_80490A54:
{
    r3 = r31;
    r4 = 256;
    if constexpr (KnownRegArgsCpuCall<0x8049FF04u>(&func_8049FF04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8049FF04_31C1 = func_8049FF04_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8049FF04_31C1;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8049FF04u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_80490A64:
{
    r4 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80490AB4;
    }
}

loc_80490A6C:
{
    r0 = MemoryInline::FlatRead16((r3 + 6));
    r28 = (r0 & 4095);
}

loc_80490A78:
{
    if ((static_cast<uint32_t>(r28) >= static_cast<uint32_t>(32))) {
        goto loc_80490A98;
    }
}

loc_80490A7C:
{
    r3 = r30;
    r5 = r28;
    r4 = (r4 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    r30_addr_1 = (r30 + r28);
    MemoryInline::FlatWrite8(r30_addr_1, static_cast<uint8_t>(r0));
    goto loc_80490ABC;
}

loc_80490A98:
{
    r3 = r30;
    r4 = (r4 + 8);
    r5 = 31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    MemoryInline::FlatWriteRam8((r30 + 32), static_cast<uint8_t>(r0));
    goto loc_80490ABC;
}

loc_80490AB4:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8(r30, static_cast<uint8_t>(r0));
}

loc_80490ABC:
{
    r3 = r31;
    r4 = 257;
    if constexpr (KnownRegArgsCpuCall<0x8049FF04u>(&func_8049FF04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8049FF04_382F = func_8049FF04_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8049FF04_382F;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8049FF04u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_80490ACC:
{
    r4 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80490B20;
    }
}

loc_80490AD4:
{
    r0 = MemoryInline::FlatRead16((r3 + 6));
    r28 = (r0 & 4095);
}

loc_80490AE0:
{
    if ((static_cast<uint32_t>(r28) >= static_cast<uint32_t>(32))) {
        goto loc_80490B04;
    }
}

loc_80490AE4:
{
    r5 = r28;
    r3 = (r30 + 32);
    r4 = (r4 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + r28);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r0));
    goto loc_80490B28;
}

loc_80490B04:
{
    r3 = (r30 + 32);
    r4 = (r4 + 8);
    r5 = 31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    MemoryInline::FlatWriteRam8((r30 + 64), static_cast<uint8_t>(r0));
    goto loc_80490B28;
}

loc_80490B20:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r30 + 32), static_cast<uint8_t>(r0));
}

loc_80490B28:
{
    r3 = r31;
    r4 = 258;
    if constexpr (KnownRegArgsCpuCall<0x8049FF04u>(&func_8049FF04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8049FF04_3EA9 = func_8049FF04_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8049FF04_3EA9;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8049FF04u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_80490B38:
{
    r4 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80490B8C;
    }
}

loc_80490B40:
{
    r0 = MemoryInline::FlatRead16((r3 + 6));
    r28 = (r0 & 4095);
}

loc_80490B4C:
{
    if ((static_cast<uint32_t>(r28) >= static_cast<uint32_t>(32))) {
        goto loc_80490B70;
    }
}

loc_80490B50:
{
    r5 = r28;
    r3 = (r30 + 64);
    r4 = (r4 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + r28);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 64), static_cast<uint8_t>(r0));
    goto loc_80490B94;
}

loc_80490B70:
{
    r3 = (r30 + 64);
    r4 = (r4 + 8);
    r5 = 31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    MemoryInline::FlatWriteRam8((r30 + 96), static_cast<uint8_t>(r0));
    goto loc_80490B94;
}

loc_80490B8C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r30 + 64), static_cast<uint8_t>(r0));
}

loc_80490B94:
{
    r3 = r31;
    r4 = 512;
    if constexpr (KnownRegArgsCpuCall<0x8049FF04u>(&func_8049FF04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8049FF04_4523 = func_8049FF04_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8049FF04_4523;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8049FF04u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_80490BA4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80490BB0;
    }
}

loc_80490BA8:
{
    r0 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWriteRam16((r30 + 96), static_cast<uint16_t>(r0));
}

loc_80490BB0:
{
    r3 = r31;
    r4 = 515;
    if constexpr (KnownRegArgsCpuCall<0x8049FF04u>(&func_8049FF04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8049FF04_4842 = func_8049FF04_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8049FF04_4842;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8049FF04u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_80490BC0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80490BCC;
    }
}

loc_80490BC4:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
    MemoryInline::FlatWriteRam8((r30 + 101), static_cast<uint8_t>(r0));
}

loc_80490BCC:
{
    r3 = r31;
    r4 = 514;
    if constexpr (KnownRegArgsCpuCall<0x8049FF04u>(&func_8049FF04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8049FF04_4B5F = func_8049FF04_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8049FF04_4B5F;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8049FF04u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_80490BDC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80490BE8;
    }
}

loc_80490BE0:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
    MemoryInline::FlatWriteRam8((r30 + 100), static_cast<uint8_t>(r0));
}

loc_80490BE8:
{
    r3 = r31;
    r4 = 513;
    if constexpr (KnownRegArgsCpuCall<0x8049FF04u>(&func_8049FF04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8049FF04_4E7C = func_8049FF04_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8049FF04_4E7C;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8049FF04u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_80490BF8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80490C04;
    }
}

loc_80490BFC:
{
    r0 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWriteRam16((r30 + 98), static_cast<uint16_t>(r0));
}

loc_80490C04:
{
    r3 = r31;
    r4 = 524;
    if constexpr (KnownRegArgsCpuCall<0x8049FF04u>(&func_8049FF04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8049FF04_519B = func_8049FF04_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8049FF04_519B;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8049FF04u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_80490C14:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80490C28;
    }
}

loc_80490C18:
{
    r0 = MemoryInline::FlatRead16((r3 + 8));
    r3 = (r29 | 64);
    r29 = (r3 & 65535);
    MemoryInline::FlatWriteRam16((r30 + 102), static_cast<uint16_t>(r0));
}

loc_80490C28:
{
    r6 = 0x80740000u;
    r4 = (r29 & 65535);
    r6 = (r6 + -6152);
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r6 + 900));
    r5 = (r6 + 908);
    MemoryInline::FlatWriteRam32((r6 + 1020), r31);
    ctr = r12;
    ctx->lr = 0x80490C4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_80490C4C:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8049081C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8049081C_ra58_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FDF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8049081C func_8049081C preserves=true fpr_mask=0x00000000
