#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012B9EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_8012B9EC;

loc_8012B9EC:
{
    r0 = MemoryInline::FlatRead32((r3 + 928));
    r0 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 928), r0);
}

loc_8012B9FC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(20000))) {
        goto loc_8012BA0C;
    }
}

loc_8012BA00:
{
    r0 = 20000;
    MemoryInline::FlatWrite32((r3 + 928), r0);
    ctx->gpr[0] = r0;
    return;
}

loc_8012BA0C:
{
}

loc_8012BA10:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8012BA14:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 928), r0);
    ctx->gpr[0] = r0;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012B9EC func_8012B9EC preserves=true fpr_mask=0x00000000
