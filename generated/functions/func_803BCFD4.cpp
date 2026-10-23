#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803BCFD4_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t ctr = ctx->ctr;

    goto loc_803BCFD4;

loc_803BCFD4:
{
    r7 = 0;
    r4 = 0x806D0000u;
    r6 = (r4 + 20216);
    r5 = 0;
    r0 = 8;
    ctr = r0;
}

loc_803BCFEC:
{
    r4 = MemoryInline::FlatRead32(r6);
}

loc_803BCFF4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803BD01C;
    }
}

loc_803BCFF8:
{
    r0 = MemoryInline::FlatRead8((r4 + 4));
}

loc_803BD000:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BD01C;
    }
}

loc_803BD004:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
}

loc_803BD00C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_803BD01C;
    }
}

loc_803BD010:
{
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32((r4 + 8), r5);
}

loc_803BD01C:
{
    r4 = MemoryInline::FlatRead32((r6 + 4));
}

loc_803BD024:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803BD04C;
    }
}

loc_803BD028:
{
    r0 = MemoryInline::FlatRead8((r4 + 4));
}

loc_803BD030:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BD04C;
    }
}

loc_803BD034:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
}

loc_803BD03C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_803BD04C;
    }
}

loc_803BD040:
{
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32((r4 + 8), r5);
}

loc_803BD04C:
{
    r4 = MemoryInline::FlatRead32((r6 + 8));
}

loc_803BD054:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803BD07C;
    }
}

loc_803BD058:
{
    r0 = MemoryInline::FlatRead8((r4 + 4));
}

loc_803BD060:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BD07C;
    }
}

loc_803BD064:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
}

loc_803BD06C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_803BD07C;
    }
}

loc_803BD070:
{
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWrite32((r4 + 8), r5);
}

loc_803BD07C:
{
    r4 = MemoryInline::FlatRead32((r6 + 12));
}

loc_803BD084:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803BD0AC;
    }
}

loc_803BD088:
{
    r0 = MemoryInline::FlatRead8((r4 + 4));
}

loc_803BD090:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BD0AC;
    }
}

loc_803BD094:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
}

loc_803BD09C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_803BD0AC;
    }
}

loc_803BD0A0:
{
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead32((r6 + 12));
    MemoryInline::FlatWrite32((r4 + 8), r5);
}

loc_803BD0AC:
{
    r6 = (r6 + 16);
    r7 = (r7 + 3);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803BCFEC;
    }
}

loc_803BD0B8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return r4;
}

}

extern "C" void func_803BCFD4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803BCFD4_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803BCFD4 func_803BCFD4 preserves=true fpr_mask=0x00000000
