#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80315564_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r9 = ctx->gpr[9];

    goto loc_80315564;

loc_80315564:
{
    r3 = (r3 + 344);
}

loc_80315590:
{
    r0 = MemoryInline::FlatRead8(r6);
    r0 = (r0 & 1);
}

loc_8031559C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803155C8;
    }
}

loc_803155A0:
{
    MemoryInline::FlatWrite32(r7, r4);
    r0 = MemoryInline::FlatRead16((r3 + 2));
}

loc_803155AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803155DC;
    }
}

loc_803155B0:
{
}

loc_803155B4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_803155DC;
    }
}

loc_803155B8:
{
    r0 = MemoryInline::FlatRead8(r6);
    r0 = (r0 & 247);
}

loc_803155C0:
{
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    goto loc_803155DC;
}

loc_803155C8:
{
}

loc_803155CC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_803155D8;
    }
}

loc_803155D0:
{
    MemoryInline::FlatWrite32(r7, r5);
    goto loc_803155DC;
}

loc_803155D8:
{
    MemoryInline::FlatWrite32(r7, r3);
}

loc_803155DC:
{
}

loc_803155E0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80315614;
    }
}

loc_803155E4:
{
    MemoryInline::FlatWrite32((r7 + 12), r5);
    r0 = MemoryInline::FlatRead16((r5 + 2));
}

loc_803155F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80315604;
    }
}

loc_803155F4:
{
    r0 = MemoryInline::FlatRead8(r6);
    r0 = (r0 | 16);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    goto loc_80315618;
}

loc_80315604:
{
    r0 = MemoryInline::FlatRead8(r6);
    r0 = (r0 & 247);
}

loc_8031560C:
{
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    goto loc_80315618;
}

loc_80315614:
{
    MemoryInline::FlatWrite32((r7 + 12), r3);
}

loc_80315618:
{
    r3 = r9;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_80315564(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80315564_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000002F9 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80315564 func_80315564 preserves=true fpr_mask=0x00000000
