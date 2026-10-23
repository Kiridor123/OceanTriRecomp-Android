#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80057874(CpuContext* ctx);
extern "C" void func_80057874_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80056F68_ra40_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r6)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    ctx->gpr[6] = arg_r6;

    goto loc_80056F68;

loc_80056F68:
{
    r0 = 0;
    r3 = 0x80670000u;
    r3 = (r3 + -11912);
    MemoryInline::FlatWriteRam8((r3 + 116), static_cast<uint8_t>(r0));
    r3 = 0;
    r4 = 0;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x80057874u>(&func_80057874)) {
        ctx->gpr[0] = r0;
        func_80057874_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80057874u>(ctx);
        r0 = ctx->gpr[0];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80056F68(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80056F68_ra40_0_18_0(ctx, ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000040 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80056F68 func_80056F68 preserves=true fpr_mask=0x00000000
