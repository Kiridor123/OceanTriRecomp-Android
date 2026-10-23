#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803BEE9C_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r6_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];

    goto loc_803BEE9C;

loc_803BEE9C:
{
    r6 = 255;
    r0 = (r3 & 255);
}

loc_803BEEA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803BEEC8;
    }
}

loc_803BEEAC:
{
}

loc_803BEEB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_803BEED0;
    }
}

loc_803BEEB4:
{
}

loc_803BEEB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_803BEED8;
    }
}

loc_803BEEBC:
{
}

loc_803BEEC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_803BEEE0;
    }
}

loc_803BEEC4:
{
    goto loc_803BEEE4;
}

loc_803BEEC8:
{
    r6 = 0;
    goto loc_803BEEE4;
}

loc_803BEED0:
{
    r6 = 1;
    goto loc_803BEEE4;
}

loc_803BEED8:
{
    r6 = 2;
    goto loc_803BEEE4;
}

loc_803BEEE0:
{
    r6 = 3;
}

loc_803BEEE4:
{
}

loc_803BEEE8:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(255))) {
        goto loc_803BEF0C;
    }
}

loc_803BEEEC:
{
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_0 & -2);
    r3 = (r13 + -22376);
    r3_addr_0 = (r3 + r6);
    r0 = MemoryInline::FlatRead8(r3_addr_0);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r3 = (r6 + r3);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return r3;
}

loc_803BEF0C:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_803BEE9C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803BEE9C_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002079 gpr_write=0x00000049 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803BEE9C func_803BEE9C preserves=true fpr_mask=0x00000000
