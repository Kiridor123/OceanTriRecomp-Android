#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B5FE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_rot_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_804B5FE0;

loc_804B5FE0:
{
    r4 = MemoryInline::FlatRead32((r3 + 28));
    r0 = 0;
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(15));
    r4 = (r4_rot_0 & 1);
    MemoryInline::FlatWrite32(r5, r4);
    r3 = MemoryInline::FlatRead32((r3 + 28));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(14));
    r3 = (r3_rot_0 & 7);
    MemoryInline::FlatWrite32(r6, r3);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000E8 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B5FE0 func_804B5FE0 preserves=true fpr_mask=0x00000000
