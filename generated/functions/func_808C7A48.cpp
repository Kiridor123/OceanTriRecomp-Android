#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808C7A48(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t ctr = ctx->ctr;

    goto loc_808C7A48;

loc_808C7A48:
{
    r6 = r3;
    r5 = 0;
    r4 = 0x80920000u;
    r4 = (r4 + 9612);
}

loc_808C7A58:
{
    r0 = r5;
    r5 = (r5 + 1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4_addr_2 = (r4 + r0);
    r8 = MemoryInline::FlatRead32(r4_addr_2);
    r0 = (r8 + 65536);
}

loc_808C7A70:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_808C7AD4;
    }
}

loc_808C7A74:
{
    r7 = MemoryInline::FlatRead32(r6);
    r0 = MemoryInline::FlatRead32((r6 + 4));
    r6 = (r6 + 8);
    r7 = (r7 + r3);
}

loc_808C7A88:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_808C7A94;
    }
}

loc_808C7A8C:
{
    r9 = r7;
    goto loc_808C7AA8;
}

loc_808C7A94:
{
}

loc_808C7A98:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(1))) {
        goto loc_808C7AA4;
    }
}

loc_808C7A9C:
{
    r10 = r7;
    goto loc_808C7AA8;
}

loc_808C7AA4:
{
    MemoryInline::FlatWrite32(r8, r7);
}

loc_808C7AA8:
{
    ctr = r0;
}

loc_808C7AB0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_808C7A58;
    }
}

loc_808C7AB4:
{
    r0 = MemoryInline::FlatRead32(r7);
}

loc_808C7ABC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808C7AC8;
    }
}

loc_808C7AC0:
{
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32(r7, r0);
}

loc_808C7AC8:
{
    r7 = (r7 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808C7AB4;
    }
}

loc_808C7AD0:
{
    goto loc_808C7A58;
}

loc_808C7AD4:
{
    r3 = 0x80930000u;
    r3 = (r3 + 9840);
    goto loc_808C7AFC;
}

loc_808C7AE0:
{
    r0 = MemoryInline::FlatRead32(r9);
    r9 = (r9 + 4);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32(r10);
    r10 = (r10 + 4);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r3 = (r3 + 12);
}

loc_808C7AFC:
{
    r0 = MemoryInline::FlatRead16(r3);
}

loc_808C7B04:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_808C7AE0;
    }
}

loc_808C7B08:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808C7A48 func_808C7A48 preserves=true fpr_mask=0x00000000
