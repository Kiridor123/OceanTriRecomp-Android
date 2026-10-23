#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80836E40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_80836E40;

loc_80836E40:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0 = 0;
    r5 = MemoryInline::FlatRead8(r4);
}

loc_80836E50:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(129))) {
        goto loc_80836E5C;
    }
}

loc_80836E54:
{
}

loc_80836E58:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(160))) {
        goto loc_80836E64;
    }
}

loc_80836E5C:
{
}

loc_80836E60:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(224))) {
        goto loc_80836E68;
    }
}

loc_80836E64:
{
    r0 = 1;
}

loc_80836E68:
{
}

loc_80836E6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80836E88;
    }
}

loc_80836E70:
{
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r6_mrot_0 = (r6_rot_0 & 65280);
    r6_mdest_0 = (r6 & -65281);
    r6 = (r6_mdest_0 | r6_mrot_0);
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r4 + 2);
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80836E98;
}

loc_80836E88:
{
    r4 = MemoryInline::FlatRead32(r3);
    r6 = r5;
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32(r3, r0);
}

loc_80836E98:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80836E40 func_80836E40 preserves=true fpr_mask=0x00000000
