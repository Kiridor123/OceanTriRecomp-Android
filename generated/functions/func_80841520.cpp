#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80841520(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80841520;

loc_80841520:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x80870000u;
}

loc_80841530:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = (r5 + -32096);
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r3 = 0x80870000u;
    r3 = MemoryInline::FlatRead32((r3 + -31996));
    r5_addr_0 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_0);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 100);
    r31 = (r3 + r0);
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_80841564;
    }
}

loc_8084155C:
{
    r0 = 0;
    goto loc_80841574;
}

loc_80841564:
{
}

loc_80841568:
{
    r0 = 127;
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(127))) {
        goto loc_80841574;
    }
}

loc_80841570:
{
    r0 = r4;
}

loc_80841574:
{
    MemoryInline::FlatWrite32((r31 + 16), r0);
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80840840u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r0 | 1073741824);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80841520 func_80841520 preserves=true fpr_mask=0x00000000
