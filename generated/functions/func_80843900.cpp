#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80843900(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x80843900u);
    goto loc_80843900;

loc_80843900:
{
    r4 = MemoryInline::FlatRead32((r3 + 24));
    r0 = MemoryInline::FlatRead16(r4);
}

loc_8084390C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80843924;
    }
}

loc_80843910:
{
}

loc_80843914:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80843928;
    }
}

loc_80843918:
{
}

loc_8084391C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8084392C;
    }
}

loc_80843920:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_80843924:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x808434C0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_80843928:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x808436E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_8084392C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x808437F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80843900 func_80843900 preserves=true fpr_mask=0x00000000
