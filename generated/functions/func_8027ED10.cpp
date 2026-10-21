#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027ECB4(CpuContext* ctx);
extern "C" uint64_t func_8027ECB4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_8027ED10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x8027ED10u);
    goto loc_8027ED10;

loc_8027ED10:
{
    r4 = r3;
    r3 = MemoryInline::FlatRead8(r3);
    r4 = MemoryInline::FlatRead16((r4 + 2));
    if constexpr (KnownRegArgsCpuCall<0x8027ECB4u>(&func_8027ECB4)) {
        const auto regargs_result_8027ECB4_266 = func_8027ECB4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027ECB4_266);
        r4 = static_cast<uint32_t>(regargs_result_8027ECB4_266 >> 32);
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027ECB4u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027ED10 func_8027ED10 preserves=true fpr_mask=0x00000000
