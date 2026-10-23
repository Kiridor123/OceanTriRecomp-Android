#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80272D2C(CpuContext* ctx);
extern "C" uint64_t func_80272D2C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint32_t func_80272DC0_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80272DC0;

loc_80272DC0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead16((r3 + 622));
    r4 = (r0 & 255);
    ctx->lr = 0x80272DE0u;
    if constexpr (KnownRegArgsCpuCall<0x80272D2Cu>(&func_80272D2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272D2C_3C3 = func_80272D2C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272D2C_3C3);
        r4 = static_cast<uint32_t>(regargs_result_80272D2C_3C3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80272D2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite16((r31 + 624), static_cast<uint16_t>(r3));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    MemoryInline::FlatWrite16((r31 + 626), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead8((r31 + 617));
}

loc_80272DF4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80272E04;
    }
}

loc_80272DF8:
{
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r31 + 617), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 628), static_cast<uint8_t>(r0));
}

loc_80272E04:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    return r3;
}

}

extern "C" void func_80272DC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80272DC0_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80272DC0 func_80272DC0 preserves=true fpr_mask=0x00000000
