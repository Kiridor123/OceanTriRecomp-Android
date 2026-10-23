#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081D220(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_8081D220;

loc_8081D220:
{
}

loc_8081D224:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8081D228:
{
}

loc_8081D22C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(4))) {
        goto loc_return;
    }
}

loc_8081D230:
{
    r4 = 0x80870000u;
    r0 = 1;
    r4 = (r4 + -32744);
    r4_addr_0 = (r4 + r3);
    MemoryInline::FlatWrite8(r4_addr_0, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081D220 func_8081D220 preserves=true fpr_mask=0x00000000
