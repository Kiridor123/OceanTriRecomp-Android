#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B8A60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];

    goto loc_804B8A60;

loc_804B8A60:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r12 = MemoryInline::FlatRead32((r3 + 8));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_0 & 536870880);
    MemoryInline::FlatWrite32(r4, r0);
    r4 = (r12 & 1023);
    r11 = MemoryInline::FlatRead32(r3);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(22));
    r4 = (r4_rot_0 & 1023);
    r0 = MemoryInline::FlatRead8((r3 + 31));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r4));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r4 = (r11 & 3);
    MemoryInline::FlatWrite32(r7, r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(30));
    r3 = (r3_rot_0 & 3);
    r0 = (r0 & 1);
    MemoryInline::FlatWrite32(r8, r4);
    MemoryInline::FlatWrite32(r9, r3);
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007F8 gpr_write=0x00001819 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B8A60 func_804B8A60 preserves=true fpr_mask=0x00000000
