#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80077484(CpuContext* ctx);
extern "C" uint64_t func_80077484_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_800870C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x800870C8u);
    goto loc_800870C8;

loc_800870C8:
{
    r3 = (r3 & 1);
    r0 = (r3 + 4106);
    r3 = (r0 & 65535);
    r4 = MemoryInline::FlatRead32(r4);
    if constexpr (KnownRegArgsCpuCall<0x80077484u>(&func_80077484)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_80077484_2A6 = func_80077484_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80077484_2A6);
        r4 = static_cast<uint32_t>(regargs_result_80077484_2A6 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80077484u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800870C8 func_800870C8 preserves=true fpr_mask=0x00000000
