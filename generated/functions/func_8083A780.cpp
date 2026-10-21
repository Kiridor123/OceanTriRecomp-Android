#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8083A780(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x8083A780u);
    goto loc_8083A780;

loc_8083A780:
{
    r5 = MemoryInline::FlatRead32((r3 + 20));
    r6 = MemoryInline::FlatRead32((r5 + 12));
    goto loc_8083A7C4;
}

loc_8083A790:
{
    r3 = MemoryInline::FlatRead16(r6);
}

loc_8083A798:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r4))) {
        goto loc_8083A7C0;
    }
}

loc_8083A79C:
{
    r0 = MemoryInline::FlatRead16((r6 + 2));
}

loc_8083A7A4:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_8083A7C0;
    }
}

loc_8083A7A8:
{
    r3 = (r4 - r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r0 = (r0 - r3);
    r3 = (r6 + r0);
    r3 = (r3 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

loc_8083A7C0:
{
    r6 = MemoryInline::FlatRead32((r6 + 4));
}

loc_8083A7C4:
{
}

loc_8083A7C8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8083A790;
    }
}

loc_8083A7CC:
{
    r3 = (r5 + 4);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8083A780 func_8083A780 preserves=true fpr_mask=0x00000000
