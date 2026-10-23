#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80343A38(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t ctr = ctx->ctr;

    goto loc_80343A38;

loc_80343A38:
{
    r3 = (r3 & 255);
    r0 = (r3 + -10);
}

loc_80343A44:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(22))) {
        goto loc_80343A60;
    }
}

loc_80343A48:
{
    r3 = 0x805F0000u;
    r3 = (r3 + -26292);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80343A68u:
        goto loc_80343A68;
        break;
    case 0x80343A70u:
        goto loc_80343A70;
        break;
    case 0x80343A60u:
        goto loc_80343A60;
        break;
    case 0x80343AA0u:
        goto loc_80343AA0;
        break;
    case 0x80343A78u:
        goto loc_80343A78;
        break;
    case 0x80343A80u:
        goto loc_80343A80;
        break;
    case 0x80343A88u:
        goto loc_80343A88;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80343A60:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->ctr = ctr;
    return;
}

loc_80343A68:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->ctr = ctr;
    return;
}

loc_80343A70:
{
    r3 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->ctr = ctr;
    return;
}

loc_80343A78:
{
    r3 = 5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->ctr = ctr;
    return;
}

loc_80343A80:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->ctr = ctr;
    return;
}

loc_80343A88:
{
    r0 = (r4 & 255);
}

loc_80343A90:
{
    r3 = 1;
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_80343A98:
{
    r3 = 4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->ctr = ctr;
    return;
}

loc_80343AA0:
{
    r0 = (r4 & 255);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 1);
    r3 = (0 - r0);
    r3 = (r3 + 7);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80343A38 func_80343A38 preserves=true fpr_mask=0x00000000
