#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804451EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_804451EC;

loc_804451EC:
{
    r0 = MemoryInline::FlatRead8((r28 + 2));
}

loc_804451F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8044578C;
    }
}

loc_804451F8:
{
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r28 + 6), static_cast<uint8_t>(r31));
    r0 = 1;
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r31));
}

loc_8044578C:
{
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xD0000003 gpr_write=0xF000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804451EC func_804451EC preserves=true fpr_mask=0x00000000
