#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80074708(CpuContext* ctx);
extern "C" uint32_t func_80074708_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_80082BD4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_80082BD4;

loc_80082BD4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = r3;
}

loc_80082BE8:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_80082C10;
    }
}

loc_80082BEC:
{
}

loc_80082BF0:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(32))) {
        goto loc_80082C10;
    }
}

loc_80082BF4:
{
    r3 = (r1 + 12);
    r0 = (r4 * 268);
    r4 = (r5 + r0);
    r4 = (r4 + 248);
    ctx->lr = 0x80082C08u;
    if constexpr (KnownRegArgsCpuCall<0x80074708u>(&func_80074708)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80074708_4DB = func_80074708_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80074708_4DB;
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
    goto loc_80082C20;
}

loc_80082C10:
{
    r3 = (r1 + 8);
    r4 = 0;
    ctx->lr = 0x80082C1Cu;
    if constexpr (KnownRegArgsCpuCall<0x80074708u>(&func_80074708)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80074708_7A4 = func_80074708_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80074708_7A4;
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
}

loc_80082C20:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80082BD4 func_80082BD4 preserves=true fpr_mask=0x00000000
