#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8097EA54(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_8097EA54;

loc_8097EA54:
{
    r4 = 0x809D0000u;
    r3 = MemoryInline::FlatRead32((r4 + 13672));
    r5 = MemoryInline::FlatRead8((r3 + 4133));
}

loc_8097EA64:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(255))) {
        goto loc_8097EA84;
    }
}

loc_8097EA68:
{
    MemoryInline::FlatWrite8((r3 + 4135), static_cast<uint8_t>(r5));
    r3 = MemoryInline::FlatRead32((r4 + 13672));
    MemoryInline::FlatWrite8((r3 + 4134), static_cast<uint8_t>(r5));
    r3 = MemoryInline::FlatRead32((r4 + 13672));
    MemoryInline::FlatWrite8((r3 + 4133), static_cast<uint8_t>(r5));
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

loc_8097EA84:
{
}

loc_8097EA88:
{
    r0 = 255;
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(240))) {
        goto loc_8097EA98;
    }
}

loc_8097EA90:
{
    r0 = (r5 + 16);
    r0 = (r0 & 255);
}

loc_8097EA98:
{
    MemoryInline::FlatWrite8((r3 + 4135), static_cast<uint8_t>(r0));
    r4 = 0x809D0000u;
    r3 = MemoryInline::FlatRead32((r4 + 13672));
    MemoryInline::FlatWrite8((r3 + 4134), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r4 + 13672));
    MemoryInline::FlatWrite8((r3 + 4133), static_cast<uint8_t>(r0));
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8097EA54 func_8097EA54 preserves=true fpr_mask=0x00000000
