#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80522210_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_80522210;

loc_80522210:
{
}

loc_80522214:
{
    r0 = (r3 & 255);
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(1))) {
        goto loc_80522228;
    }
}

loc_8052221C:
{
}

loc_80522220:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(2))) {
        goto loc_80522254;
    }
}

loc_80522224:
{
    goto loc_80522280;
}

loc_80522228:
{
}

loc_8052222C:
{
    r3 = 0;
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(129))) {
        goto loc_8052223C;
    }
}

loc_80522234:
{
}

loc_80522238:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(159))) {
        goto loc_8052224C;
    }
}

loc_8052223C:
{
}

loc_80522240:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(224))) {
        goto loc_return;
    }
}

loc_80522244:
{
}

loc_80522248:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(252))) {
        goto loc_return;
    }
}

loc_8052224C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_80522254:
{
}

loc_80522258:
{
    r3 = 0;
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(64))) {
        goto loc_80522268;
    }
}

loc_80522260:
{
}

loc_80522264:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(126))) {
        goto loc_80522278;
    }
}

loc_80522268:
{
}

loc_8052226C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(128))) {
        goto loc_return;
    }
}

loc_80522270:
{
}

loc_80522274:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(252))) {
        goto loc_return;
    }
}

loc_80522278:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_80522280:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_80522210(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80522210_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80522210 func_80522210 preserves=true fpr_mask=0x00000000
