#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803FD75C_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x803FD75Cu);
    goto loc_803FD75C;

loc_803FD75C:
{
}

loc_803FD760:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803FD764:
{
}

loc_803FD768:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_803FD774;
    }
}

loc_803FD76C:
{
    MemoryInline::FlatWrite32(r5, r4);
    goto loc_803FD780;
}

loc_803FD774:
{
    r6 = 0x80000000u;
    r0 = (r6 + 7);
    MemoryInline::FlatWrite32(r5, r0);
}

loc_803FD780:
{
    r0 = 104;
    MemoryInline::FlatWrite32((r5 + 4), r0);
    r0 = MemoryInline::FlatRead32((r3 + 24892));
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r0 = (r4 + 2147155968);
}

loc_803FD798:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(18))) {
        goto loc_return;
    }
}

loc_803FD79C:
{
    r3 = MemoryInline::FlatRead32((r3 + 24892));
    r3 = (r3 + 10092544);
    r0 = (r3 + -32535);
}

loc_803FD7AC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_803FD7D8;
    }
}

loc_803FD7B0:
{
    r0 = (r3 + -32537);
}

loc_803FD7B8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_803FD808;
    }
}

loc_803FD7BC:
{
}

loc_803FD7C0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(32544))) {
        goto loc_803FD7D8;
    }
}

loc_803FD7C4:
{
}

loc_803FD7C8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(32540))) {
        goto loc_803FD7E8;
    }
}

loc_803FD7CC:
{
}

loc_803FD7D0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(32539))) {
        goto loc_803FD7F8;
    }
}

loc_803FD7D4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return r3;
}

loc_803FD7D8:
{
    r3 = 0x80050000u;
    r0 = (r3 + 55);
    MemoryInline::FlatWrite32(r5, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return r3;
}

loc_803FD7E8:
{
    r3 = 0x80050000u;
    r0 = (r3 + 57);
    MemoryInline::FlatWrite32(r5, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return r3;
}

loc_803FD7F8:
{
    r3 = 0x80050000u;
    r0 = (r3 + 68);
    MemoryInline::FlatWrite32(r5, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return r3;
}

loc_803FD808:
{
    r3 = 0x80050000u;
    r0 = (r3 + 56);
    MemoryInline::FlatWrite32(r5, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_803FD75C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803FD75C_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000049 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803FD75C func_803FD75C preserves=true fpr_mask=0x00000000
