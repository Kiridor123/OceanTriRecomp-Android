#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D2ECC(CpuContext* ctx);
extern "C" uint32_t func_800D2ECC_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint32_t func_8027EB94_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    MKW_GUEST_ENTER(0x8027EB94u);
    goto loc_8027EB94;

loc_8027EB94:
{
    r0 = (r3 & 65535);
}

loc_8027EB9C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(206))) {
        goto loc_8027EBA4;
    }
}

loc_8027EBA0:
{
    r3 = 0;
}

loc_8027EBA4:
{
    r3 = (r3 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x800D2ECCu>(&func_800D2ECC)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_800D2ECC_31F = func_800D2ECC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2ECC_31F;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800D2ECCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8027EB94(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8027EB94_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027EB94 func_8027EB94 preserves=true fpr_mask=0x00000000
