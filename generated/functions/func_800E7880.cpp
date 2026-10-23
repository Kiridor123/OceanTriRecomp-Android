#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E7880(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800E7880;

loc_800E7880:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r5;
}

loc_800E7898:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800E78C8;
    }
}

loc_800E789C:
{
    r3 = r4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E5F9Cu>(ctx);
    r3 = ctx->gpr[3];
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_800E78AC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(127))) {
        goto loc_800E78B8;
    }
}

loc_800E78B0:
{
    r31 = 127;
    goto loc_800E78C4;
}

loc_800E78B8:
{
}

loc_800E78BC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_800E78C4;
    }
}

loc_800E78C0:
{
    r31 = 0;
}

loc_800E78C4:
{
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r31));
}

loc_800E78C8:
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

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E7880 func_800E7880 preserves=true fpr_mask=0x00000000
