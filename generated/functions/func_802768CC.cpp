#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80276880(CpuContext* ctx);
extern "C" uint32_t func_80276880_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint32_t func_802768CC_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802768CC;

loc_802768CC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802768F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80276944;
    }
}

loc_802768F4:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_802768FC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80276910;
    }
}

loc_80276900:
{
    r3 = r30;
    ctx->lr = 0x80276908u;
    if constexpr (KnownRegArgsCpuCall<0x80276880u>(&func_80276880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80276880_58E = func_80276880_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80276880_58E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80276880u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8027690C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80276944;
    }
}

loc_80276910:
{
    r0 = MemoryInline::FlatRead16((r30 + 888));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r31);
    MemoryInline::FlatWrite16((r30 + 888), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80276924:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80276930;
    }
}

loc_80276928:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 888), static_cast<uint16_t>(r0));
}

loc_80276930:
{
    r3 = MemoryInline::FlatRead16((r30 + 890));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r30 + 888));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8027693C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_80276944;
    }
}

loc_80276940:
{
    MemoryInline::FlatWrite16((r30 + 888), static_cast<uint16_t>(r3));
}

loc_80276944:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_802768CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802768CC_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802768CC func_802768CC preserves=true fpr_mask=0x00000000
