#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80044A94(CpuContext* ctx);
extern "C" uint64_t func_80044A94_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" void func_80044AF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80044AF4u);
    goto loc_80044AF4;

loc_80044AF4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = 0;
    r3 = 0x80660000u;
    r31 = (r3 + -21920);
}

loc_80044B14:
{
    r3 = MemoryInline::FlatRead8((r31 + 51));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80044B20:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80044B2C;
    }
}

loc_80044B24:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r31 + 51), static_cast<uint8_t>(r0));
}

loc_80044B2C:
{
    r0 = MemoryInline::FlatRead8((r31 + 55));
}

loc_80044B34:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80044B50;
    }
}

loc_80044B38:
{
    r0 = MemoryInline::FlatRead8((r31 + 51));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80044B44:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80044B50;
    }
}

loc_80044B48:
{
    r3 = (r30 & 255);
    ctx->lr = 0x80044B50u;
    if constexpr (KnownRegArgsCpuCall<0x80044A94u>(&func_80044A94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80044A94_6D4 = func_80044A94_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80044A94_6D4);
        r4 = static_cast<uint32_t>(regargs_result_80044A94_6D4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80044A94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80044B50:
{
    r31 = (r31 + 1);
    r30 = (r30 + 1);
}

loc_80044B5C:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(4))) {
        goto loc_80044B14;
    }
}

loc_80044B60:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000200B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80044AF4 func_80044AF4 preserves=true fpr_mask=0x00000000
