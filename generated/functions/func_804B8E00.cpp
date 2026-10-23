#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B8E00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mdest_1 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_mrot_1 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_804B8E00;

loc_804B8E00:
{
    r7 = MemoryInline::FlatRead32((r3 + 4));
    r0 = 100;
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r7_mrot_0 = (r7_rot_0 & 16777215);
    r7_mdest_0 = (r7 & -16777216);
    r7 = (r7_mdest_0 | r7_mrot_0);
    r4 = 0;
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(10));
    r4_mrot_0 = (r4_rot_0 & 3072);
    r4_mdest_0 = (r4 & -3073);
    r4 = (r4_mdest_0 | r4_mrot_0);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r6));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r7_mrot_1 = (r7_rot_1 & -16777216);
    r7_mdest_1 = (r7 & 16777215);
    r7 = (r7_mdest_1 | r7_mrot_1);
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 4), r7);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000091 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B8E00 func_804B8E00 preserves=true fpr_mask=0x00000000
