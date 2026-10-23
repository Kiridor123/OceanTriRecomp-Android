#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081EA10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8081EA10;

loc_8081EA10:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x8081F450 (3 guest instruction(s))
    r3 = 0x80870000u;
    r3 = MemoryInline::FlatRead32((r3 + -32304));
    // end of inlined leaf 0x8081F450
    r31 = MemoryInline::FlatRead32((r3 + 4));
    ctx->lr = 0x8081EA2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8081F400u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r31 + 60));
}

loc_8081EA34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081EA40;
    }
}

loc_8081EA38:
{
    r3 = 0;
    goto loc_8081EA54;
}

loc_8081EA40:
{
    r0 = MemoryInline::FlatRead32((r31 + 16));
    r3 = 2;
}

loc_8081EA4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081EA54;
    }
}

loc_8081EA50:
{
    r3 = 1;
}

loc_8081EA54:
{
}

loc_8081EA58:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8081EA6C;
    }
}

loc_8081EA5C:
{
    r3 = 0x80840000u;
    r3 = MemoryInline::FlatRead32((r3 + 21764));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    ctx->lr = 0x8081EA6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x804C2850u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
}

loc_8081EA6C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x0FFFFFFF gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8081EA10 func_8081EA10 preserves=true fpr_mask=0x00000000
