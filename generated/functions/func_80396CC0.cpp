#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803B4CC8(CpuContext* ctx);
extern "C" uint32_t func_803B4CC8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B4D4C(CpuContext* ctx);
extern "C" uint32_t func_803B4D4C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint32_t func_80396CC0_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;

    goto loc_80396CC0;

loc_80396CC0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0;
    ctx->lr = 0x80396CD4u;
    if constexpr (KnownRegArgsCpuCall<0x803B4CC8u>(&func_803B4CC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B4CC8_3A3 = func_803B4CC8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4CC8_3A3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803B4CC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80396CD8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80396CEC;
    }
}

loc_80396CDC:
{
    r3 = 0;
    ctx->lr = 0x80396CE4u;
    if constexpr (KnownRegArgsCpuCall<0x803B4D4Cu>(&func_803B4D4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B4D4C_676 = func_803B4D4C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4D4C_676;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803B4D4Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80396CE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80396CF4;
    }
}

loc_80396CEC:
{
    r3 = 1;
    goto loc_80396CF8;
}

loc_80396CF4:
{
    r3 = 0;
}

loc_80396CF8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_80396CC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80396CC0_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80396CC0 func_80396CC0 preserves=true fpr_mask=0x00000000
