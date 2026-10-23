#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80043BAC(CpuContext* ctx);
extern "C" uint32_t func_80043BAC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8043AA40(CpuContext* ctx);
extern "C" uint32_t func_8043AA40_ra8_0_10_0(CpuContext*, uint32_t);

extern "C" uint32_t func_8043AB60_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8043AB60;

loc_8043AB60:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r3 = 0x80660000u;
    r29 = (r3 + -18480);
    r31 = MemoryInline::FlatRead16((r29 + 708));
    r28 = 0;
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80043BACu>(&func_80043BAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_80043BAC_4CB = func_80043BAC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80043BAC_4CB;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80043BACu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_8043ABA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8043ABB0;
    }
}

loc_8043ABA4:
{
}

loc_8043ABA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8043ABDC;
    }
}

loc_8043ABAC:
{
    goto loc_8043AC04;
}

loc_8043ABB0:
{
    r3 = MemoryInline::FlatRead16((r29 + 260));
    r0 = (r3 & 1024);
}

loc_8043ABBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8043ABC8;
    }
}

loc_8043ABC0:
{
    r28 = 1;
    goto loc_8043AC04;
}

loc_8043ABC8:
{
    r0 = (r3 & 2048);
}

loc_8043ABD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8043AC04;
    }
}

loc_8043ABD4:
{
    r28 = 2;
    goto loc_8043AC04;
}

loc_8043ABDC:
{
    r3 = MemoryInline::FlatRead16((r29 + 222));
    r0 = (r3 & 4);
}

loc_8043ABE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8043ABF4;
    }
}

loc_8043ABEC:
{
    r28 = 1;
    goto loc_8043AC04;
}

loc_8043ABF4:
{
    r0 = (r3 & 8);
}

loc_8043ABFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8043AC04;
    }
}

loc_8043AC00:
{
    r28 = 2;
}

loc_8043AC04:
{
    r0 = (r28 & 1);
}

loc_8043AC0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8043AC20;
    }
}

loc_8043AC10:
{
    r3 = MemoryInline::FlatRead32((r30 + 508));
    r0 = (r3 + 1024);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r30 + 508), r0);
}

loc_8043AC20:
{
    r0 = (r28 & 2);
}

loc_8043AC28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8043AC3C;
    }
}

loc_8043AC2C:
{
    r3 = MemoryInline::FlatRead32((r30 + 508));
    r0 = (r3 + -1024);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r30 + 508), r0);
}

loc_8043AC3C:
{
    r0 = (r31 & 128);
}

loc_8043AC44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8043AC50;
    }
}

loc_8043AC48:
{
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x8043AA40u>(&func_8043AA40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8043AA40_FA0 = func_8043AA40_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_8043AA40_FA0;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8043AA40u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
}

loc_8043AC50:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    return r3;
}

}

extern "C" void func_8043AB60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8043AB60_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8043AB60 func_8043AB60 preserves=true fpr_mask=0x00000000
