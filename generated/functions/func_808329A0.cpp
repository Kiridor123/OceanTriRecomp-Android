#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808329A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_808329A0;

loc_808329A0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & -4);
    r0 = MemoryInline::FlatRead32(r5);
    r3 = (r3 + r4);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryInline::FlatRead8((r1 + 8));
    MemoryInline::FlatWrite8((r3 + 216), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 9));
    MemoryInline::FlatWrite8((r3 + 217), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 10));
    MemoryInline::FlatWrite8((r3 + 218), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 11));
    MemoryInline::FlatWrite8((r3 + 219), static_cast<uint8_t>(r0));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808329A0 func_808329A0 preserves=true fpr_mask=0x00000000
