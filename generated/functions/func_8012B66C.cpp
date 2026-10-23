#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012B66C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_8012B66C;

loc_8012B66C:
{
    r0 = (r4 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 1064));
    r0 = (r0 + r5);
    MemoryInline::FlatWrite32((r3 + 1064), r0);
    r0 = MemoryInline::FlatRead32((r3 + 1064));
}

loc_8012B68C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(20000))) {
        goto loc_8012B69C;
    }
}

loc_8012B690:
{
    r0 = 20000;
    MemoryInline::FlatWrite32((r3 + 1064), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_8012B69C:
{
}

loc_8012B6A0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8012B6A4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 1064), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012B66C func_8012B66C preserves=true fpr_mask=0x00000000
