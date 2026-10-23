#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E5408(CpuContext* ctx);
extern "C" uint64_t func_800E5408_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_800E53FC_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_800E53FC;

loc_800E53FC:
{
    r3 = 0x806A0000u;
    r3 = (r3 + -28144);
    if constexpr (KnownRegArgsCpuCall<0x800E5408u>(&func_800E5408)) {
        const auto regargs_result_800E5408_22B = func_800E5408_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E5408_22B);
        r4 = static_cast<uint32_t>(regargs_result_800E5408_22B >> 32);
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E5408u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800E53FC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800E53FC_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E53FC func_800E53FC preserves=true fpr_mask=0x00000000
