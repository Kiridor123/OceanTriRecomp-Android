#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80074708(CpuContext* ctx);
extern "C" uint32_t func_80074708_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_80082C30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_80082C30;

loc_80082C30:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = r3;
    r3 = (r1 + 8);
    r0 = MemoryInline::FlatRead8((r4 + 244));
    r0 = (r0 * 268);
    r4 = (r4 + r0);
    r4 = (r4 + 248);
    ctx->lr = 0x80082C58u;
    if constexpr (KnownRegArgsCpuCall<0x80074708u>(&func_80074708)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80074708_3A8 = func_80074708_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80074708_3A8;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80074708u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = MemoryInline::FlatRead32(r3);
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

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80082C30 func_80082C30 preserves=true fpr_mask=0x00000000
