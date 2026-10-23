#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126000(CpuContext* ctx);
extern "C" uint32_t func_80126000_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_803ADFE8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_803ADFE8;

loc_803ADFE8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = 0x806C0000u;
    r4 = (r4 + 31960);
    r29 = (r4 + 148);
}

loc_803AE010:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_803AE01C;
    }
}

loc_803AE014:
{
    r3 = -1;
    goto loc_803AE078;
}

loc_803AE01C:
{
    r30 = 0;
    r31 = (r3 & 255);
}

loc_803AE024:
{
    r0 = MemoryInline::FlatRead32(r29);
    r0 = (r0 & 1);
}

loc_803AE030:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AE064;
    }
}

loc_803AE034:
{
    r0 = MemoryInline::FlatRead16((r29 + 4));
}

loc_803AE03C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r31))) {
        goto loc_803AE048;
    }
}

loc_803AE040:
{
    r3 = r30;
    goto loc_803AE078;
}

loc_803AE048:
{
    r3 = (r0 & 255);
    r4 = r31;
    ctx->lr = 0x803AE054u;
    if constexpr (KnownRegArgsCpuCall<0x80126000u>(&func_80126000)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126000_6E3 = func_80126000_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80126000_6E3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80126000u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_803AE058:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803AE064;
    }
}

loc_803AE05C:
{
    r3 = r30;
    goto loc_803AE078;
}

loc_803AE064:
{
    r30 = (r30 + 1);
    r29 = (r29 + 96);
}

loc_803AE070:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(3))) {
        goto loc_803AE024;
    }
}

loc_803AE074:
{
    r3 = -1;
}

loc_803AE078:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803ADFE8 func_803ADFE8 preserves=true fpr_mask=0x00000000
