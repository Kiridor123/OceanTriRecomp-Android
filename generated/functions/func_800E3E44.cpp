#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E3DE0(CpuContext* ctx);
extern "C" uint32_t func_800E3DE0_rac8_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800E3E44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800E3E44;

loc_800E3E44:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = 0;
}

loc_800E3E58:
{
    r3 = (r31 & 255);
    if constexpr (KnownRegArgsCpuCall<0x800E3DE0u>(&func_800E3DE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E3DE0_39D = func_800E3DE0_rac8_0_8_0(ctx, r3, r6, r7);
        r3 = regargs_result_800E3DE0_39D;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800E3DE0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r31 = (r31 + 1);
}

loc_800E3E68:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(6))) {
        goto loc_800E3E58;
    }
}

loc_800E3E6C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001CA gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E3E44 func_800E3E44 preserves=true fpr_mask=0x00000000
