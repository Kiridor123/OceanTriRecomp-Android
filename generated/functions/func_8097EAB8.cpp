#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8097EAB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_8097EAB8;

loc_8097EAB8:
{
    r6 = 0x809D0000u;
    r5 = MemoryInline::FlatRead32((r6 + 13672));
    MemoryInline::FlatWrite8((r5 + 4132), static_cast<uint8_t>(r3));
    r0 = (r4 & -16777216);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & 255);
    r3 = MemoryInline::FlatRead32((r6 + 13672));
    MemoryInline::FlatWrite8((r3 + 4133), static_cast<uint8_t>(r0));
    r0 = (r4 & 16711680);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 65535);
    r0 = (r0 & 255);
    r3 = MemoryInline::FlatRead32((r6 + 13672));
    MemoryInline::FlatWrite8((r3 + 4134), static_cast<uint8_t>(r0));
    r0 = (r4 & 65280);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_2 & 16777215);
    r0 = (r0 & 255);
    r3 = MemoryInline::FlatRead32((r6 + 13672));
    MemoryInline::FlatWrite8((r3 + 4135), static_cast<uint8_t>(r0));
    r0 = (r4 & 255);
    r3 = MemoryInline::FlatRead32((r6 + 13672));
    MemoryInline::FlatWrite8((r3 + 4136), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8097EAB8 func_8097EAB8 preserves=true fpr_mask=0x00000000
