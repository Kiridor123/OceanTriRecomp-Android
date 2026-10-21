#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F39FC_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    MKW_GUEST_ENTER(0x801F39FCu);
    goto loc_801F39FC;

loc_801F39FC:
{
    r0 = (r5 & 255);
}

loc_801F3A04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F3A14;
    }
}

loc_801F3A08:
{
}

loc_801F3A0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F3A30;
    }
}

loc_801F3A10:
{
    ctx->gpr[0] = r0;
    return;
}

loc_801F3A14:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & 255);
    MemoryInline::FlatWrite8((r3 + 600), static_cast<uint8_t>(r0));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & 255);
    MemoryInline::FlatWrite8((r3 + 601), static_cast<uint8_t>(r0));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r0 = (r0_rot_5 & 255);
    MemoryInline::FlatWrite8((r3 + 602), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

loc_801F3A30:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & 255);
    MemoryInline::FlatWrite8((r3 + 604), static_cast<uint8_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 255);
    MemoryInline::FlatWrite8((r3 + 605), static_cast<uint8_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r0 = (r0_rot_2 & 255);
    MemoryInline::FlatWrite8((r3 + 606), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_801F39FC(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_801F39FC_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F39FC func_801F39FC preserves=true fpr_mask=0x00000000
