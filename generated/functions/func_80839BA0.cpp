#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80839BA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x80839BA0u);
    goto loc_80839BA0;

loc_80839BA0:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80839BA8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80839BD8;
    }
}

loc_80839BAC:
{
    r5 = MemoryInline::FlatRead16((r3 + 10));
    r0 = 0;
    r5 = (r4 + r5);
    MemoryInline::FlatWrite32((r5 + 4), r0);
    MemoryInline::FlatWrite32(r5, r0);
    r5 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWrite32(r3, r4);
    r0 = (r5 + 1);
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return;
}

loc_80839BD8:
{
    r5 = MemoryInline::FlatRead16((r3 + 10));
    r0 = 0;
    r5_addr_0 = (r5 + r4);
    MemoryInline::FlatWrite32(r5_addr_0, r0);
    r5 = r5_addr_0;
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32((r5 + 4), r0);
    r5 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r5_addr_1 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_1, r4);
    r5 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWrite32(r3, r4);
    r0 = (r5 + 1);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80839BA0 func_80839BA0 preserves=true fpr_mask=0x00000000
