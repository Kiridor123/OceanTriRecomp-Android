#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80284430(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x80284430u);
    goto loc_80284430;

loc_80284430:
{
    r4 = MemoryInline::FlatRead16((r3 + 784));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80284438:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(999))) {
        goto loc_80284448;
    }
}

loc_8028443C:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 784), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_80284448:
{
    r0 = 999;
    MemoryInline::FlatWrite16((r3 + 784), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80284430 func_80284430 preserves=true fpr_mask=0x00000000
