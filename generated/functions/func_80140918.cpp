#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80140918_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    MKW_GUEST_ENTER(0x80140918u);
    goto loc_80140918;

loc_80140918:
{
    r4 = MemoryInline::FlatRead8((r3 + 2396));
    r0 = (r4 + -3);
}

loc_80140924:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4))) {
        goto loc_801409B0;
    }
}

loc_80140928:
{
}

loc_8014092C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80140954;
    }
}

loc_80140930:
{
}

loc_80140934:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_80140994;
    }
}

loc_80140938:
{
}

loc_8014093C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(11))) {
        goto loc_801409B0;
    }
}

loc_80140940:
{
}

loc_80140944:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_801409CC;
    }
}

loc_80140948:
{
}

loc_8014094C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(10))) {
        goto loc_80140A00;
    }
}

loc_80140950:
{
    goto loc_80140A1C;
}

loc_80140954:
{
    r4 = MemoryInline::FlatRead8((r3 + 2402));
}

loc_8014095C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80140968;
    }
}

loc_80140960:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80140968:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite8((r3 + 2402), static_cast<uint8_t>(r0));
    r5 = (r0 & 255);
    r4 = (r3 + r5);
    r0 = MemoryInline::FlatRead8((r4 + 2403));
    MemoryInline::FlatWrite8((r3 + 2397), static_cast<uint8_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 2416));
    MemoryInline::FlatWrite32((r3 + 2392), r0);
    goto loc_80140A24;
}

loc_80140994:
{
    r0 = MemoryInline::FlatRead8((r3 + 2460));
    MemoryInline::FlatWrite8((r3 + 2396), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 2461));
    MemoryInline::FlatWrite8((r3 + 2397), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 2464));
    MemoryInline::FlatWrite32((r3 + 2392), r0);
    goto loc_80140A24;
}

loc_801409B0:
{
    r0 = MemoryInline::FlatRead8((r3 + 2524));
    MemoryInline::FlatWrite8((r3 + 2396), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 2525));
    MemoryInline::FlatWrite8((r3 + 2397), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 2528));
    MemoryInline::FlatWrite32((r3 + 2392), r0);
    goto loc_80140A24;
}

loc_801409CC:
{
    r4 = MemoryInline::FlatRead8((r3 + 2472));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite8((r3 + 2472), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 2476));
    MemoryInline::FlatWrite8((r3 + 2396), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2477));
    MemoryInline::FlatWrite8((r3 + 2397), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 2480));
    MemoryInline::FlatWrite32((r3 + 2392), r0);
    goto loc_80140A24;
}

loc_80140A00:
{
    r0 = MemoryInline::FlatRead8((r3 + 2536));
    MemoryInline::FlatWrite8((r3 + 2396), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 2537));
    MemoryInline::FlatWrite8((r3 + 2397), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 2540));
    MemoryInline::FlatWrite32((r3 + 2392), r0);
    goto loc_80140A24;
}

loc_80140A1C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80140A24:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80140918(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80140918_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80140918 func_80140918 preserves=true fpr_mask=0x00000000
