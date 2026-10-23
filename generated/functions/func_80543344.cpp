#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80543344_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t ctr = ctx->ctr;

    goto loc_80543344;

loc_80543344:
{
}

loc_80543348:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(768))) {
        goto loc_return;
    }
}

loc_8054334C:
{
}

loc_80543350:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(816))) {
        goto loc_80543358;
    }
}

loc_80543354:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return r3;
}

loc_80543358:
{
    r0 = (r3 + -768);
}

loc_80543360:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(39))) {
        goto loc_return;
    }
}

loc_80543364:
{
    r4 = 0x80650000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r4 + 3408);
    r4_addr_0 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_0);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8054337Cu:
        goto loc_8054337C;
        break;
    case 0x80543384u:
        goto loc_80543384;
        break;
    case 0x8054338Cu:
        goto loc_8054338C;
        break;
    case 0x80543394u:
        goto loc_80543394;
        break;
    case 0x805433B8u:
        goto loc_805433B8;
        break;
    case 0x8054339Cu:
        goto loc_8054339C;
        break;
    case 0x805433A4u:
        goto loc_805433A4;
        break;
    case 0x805433ACu:
        goto loc_805433AC;
        break;
    case 0x805433B4u:
        goto loc_805433B4;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return ctx->gpr[3];
    }
}

loc_8054337C:
{
    r3 = 96;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return r3;
}

loc_80543384:
{
    r3 = 180;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return r3;
}

loc_8054338C:
{
    r3 = 94;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return r3;
}

loc_80543394:
{
    r3 = 126;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return r3;
}

loc_8054339C:
{
    r3 = 168;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return r3;
}

loc_805433A4:
{
    r3 = 39;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return r3;
}

loc_805433AC:
{
    r3 = 34;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return r3;
}

loc_805433B4:
{
    r3 = 184;
}

loc_805433B8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_80543344(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80543344_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80543344 func_80543344 preserves=true fpr_mask=0x00000000
