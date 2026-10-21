#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8097D23C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x8097D23Cu);
    goto loc_8097D23C;

loc_8097D23C:
{
    r0 = (r3 & 255);
}

loc_8097D244:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8097D274;
    }
}

loc_8097D248:
{
    r5 = 0x809D0000u;
    r3 = MemoryInline::FlatRead32((r5 + 13672));
    r0 = MemoryInline::FlatRead8((r3 + 4327));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r5 + 13672));
    r0 = MemoryInline::FlatRead8((r3 + 4328));
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r5 + 13672));
    r0 = MemoryInline::FlatRead8((r3 + 4329));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    return;
}

loc_8097D274:
{
    r5 = 0x809D0000u;
    r3 = MemoryInline::FlatRead32((r5 + 13672));
    r0 = MemoryInline::FlatRead8((r3 + 4338));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r5 + 13672));
    r0 = MemoryInline::FlatRead8((r3 + 4339));
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r5 + 13672));
    r0 = MemoryInline::FlatRead8((r3 + 4340));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8097D23C func_8097D23C preserves=true fpr_mask=0x00000000
