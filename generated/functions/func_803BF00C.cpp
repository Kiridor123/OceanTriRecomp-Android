#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802BBAA0(CpuContext* ctx);
extern "C" uint32_t func_802BBAA0_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint32_t func_803BF00C_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_803BF00C;

loc_803BF00C:
{
    r0 = 0;
    r3 = 0x806B0000u;
    MemoryInline::FlatWriteRam8((r3 + -12348), static_cast<uint8_t>(r0));
    r3 = (r3 + -12348);
    MemoryInline::FlatWriteRam8((r3 + 8), static_cast<uint8_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x802BBAA0u>(&func_802BBAA0)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_802BBAA0_2E2 = func_802BBAA0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BBAA0_2E2;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802BBAA0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_803BF00C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803BF00C_ra0_0_8_0(ctx);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803BF00C func_803BF00C preserves=true fpr_mask=0x00000000
