#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081D280(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_8081D280;

loc_8081D280:
{
    r4 = MemoryInline::FlatRead32(r3);
}

loc_8081D288:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(4))) {
        goto loc_return;
    }
}

loc_8081D28C:
{
    r3 = 0x80870000u;
    r0 = 0;
    r3 = (r3 + -32744);
    r3_addr_0 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_0, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081D280 func_8081D280 preserves=true fpr_mask=0x00000000
