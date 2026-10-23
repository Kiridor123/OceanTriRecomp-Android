#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803EEE30_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t ctr = ctx->ctr;

    goto loc_803EEE30;

loc_803EEE30:
{
}

loc_803EEE34:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803EEF2C;
    }
}

loc_803EEE38:
{
    r7 = 0;
    r6 = r3;
    r0 = 20;
    ctr = r0;
}

loc_803EEE48:
{
    r0 = MemoryInline::FlatRead8((r3 + 13729));
}

loc_803EEE50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EEE6C;
    }
}

loc_803EEE54:
{
    r5 = (r6 + 65536);
    r0 = MemoryInline::FlatRead32((r5 + -15952));
}

loc_803EEE60:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803EEE6C;
    }
}

loc_803EEE64:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return r3;
}

loc_803EEE6C:
{
    r6 = (r6 + 16);
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead8((r3 + 13785));
}

loc_803EEE7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EEE98;
    }
}

loc_803EEE80:
{
    r5 = (r6 + 65536);
    r0 = MemoryInline::FlatRead32((r5 + -15952));
}

loc_803EEE8C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803EEE98;
    }
}

loc_803EEE90:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return r3;
}

loc_803EEE98:
{
    r6 = (r6 + 16);
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead8((r3 + 13841));
}

loc_803EEEA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EEEC4;
    }
}

loc_803EEEAC:
{
    r5 = (r6 + 65536);
    r0 = MemoryInline::FlatRead32((r5 + -15952));
}

loc_803EEEB8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803EEEC4;
    }
}

loc_803EEEBC:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return r3;
}

loc_803EEEC4:
{
    r6 = (r6 + 16);
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead8((r3 + 13897));
}

loc_803EEED4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EEEF0;
    }
}

loc_803EEED8:
{
    r5 = (r6 + 65536);
    r0 = MemoryInline::FlatRead32((r5 + -15952));
}

loc_803EEEE4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803EEEF0;
    }
}

loc_803EEEE8:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return r3;
}

loc_803EEEF0:
{
    r6 = (r6 + 16);
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead8((r3 + 13953));
}

loc_803EEF00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EEF1C;
    }
}

loc_803EEF04:
{
    r5 = (r6 + 65536);
    r0 = MemoryInline::FlatRead32((r5 + -15952));
}

loc_803EEF10:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803EEF1C;
    }
}

loc_803EEF14:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return r3;
}

loc_803EEF1C:
{
    r3 = (r3 + 280);
    r6 = (r6 + 16);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803EEE48;
    }
}

loc_803EEF2C:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_803EEE30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803EEE30_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803EEE30 func_803EEE30 preserves=true fpr_mask=0x00000000
