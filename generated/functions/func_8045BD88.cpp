#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8045BD88_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_stbu_ea_0 = 0;
    uint32_t r3_stbu_ea_1 = 0;
    uint32_t r3_stbu_ea_2 = 0;
    uint32_t r3_stbu_ea_3 = 0;
    uint32_t r3_stbu_ea_4 = 0;
    uint32_t r3_stbu_ea_5 = 0;
    uint32_t r4_addic_src_0 = 0;
    uint32_t r4_addic_src_1 = 0;
    uint32_t r4_addic_src_2 = 0;
    uint32_t r4_addic_src_3 = 0;
    uint32_t r4_addic_src_4 = 0;
    uint32_t r4_addic_src_5 = 0;
    uint32_t r4_addic_src_6 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r5_addic_src_0 = 0;
    uint32_t r5_addic_src_1 = 0;
    uint32_t r5_addic_src_2 = 0;
    uint32_t r6_addic_src_0 = 0;
    uint32_t r6_addic_src_1 = 0;
    uint32_t r6_addic_src_2 = 0;
    uint32_t r6_addic_src_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_8045BD88;

loc_8045BD88:
{
    r0 = (0 - r3);
    r7 = (r4 + -1);
    r6 = (r0 & 3);
}

loc_8045BD94:
{
    r3 = (r3 + -1);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8045BDB0;
    }
}

loc_8045BD9C:
{
    r5 = (r5 - r6);
}

loc_8045BDA0:
{
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead8(r7);
    r6_addic_src_2 = r6;
    r6 = (r6_addic_src_2 + -1);
}

loc_8045BDA8:
{
    r3_stbu_ea_2 = (r3 + 1);
    MemoryInline::FlatWrite8(r3_stbu_ea_2, static_cast<uint8_t>(r0));
    r3 = r3_stbu_ea_2;
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8045BDA0;
    }
}

loc_8045BDB0:
{
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r4 = (r4_rot_0 & 134217727);
}

loc_8045BDB4:
{
    r6 = (r7 + -3);
    r3 = (r3 + -3);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8045BE08;
    }
}

loc_8045BDC0:
{
    r0 = MemoryInline::FlatRead32((r6 + 4));
    r4_addic_src_2 = r4;
    r4 = (r4_addic_src_2 + -1);
}

loc_8045BDC8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 8), r0);
    r0 = MemoryInline::FlatRead32((r6 + 12));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 12), r0);
    r0 = MemoryInline::FlatRead32((r6 + 16));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 16), r0);
    r0 = MemoryInline::FlatRead32((r6 + 20));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 20), r0);
    r0 = MemoryInline::FlatRead32((r6 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 24), r0);
    r0 = MemoryInline::FlatRead32((r6 + 28));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 28), r0);
    r6 = (r6 + 32);
    r0 = MemoryInline::FlatRead32(r6);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 32), r0);
    r3 = (r3 + 32);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8045BDC0;
    }
}

loc_8045BE08:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r4 = (r4_rot_1 & 7);
}

loc_8045BE0C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8045BE20;
    }
}

loc_8045BE10:
{
    r6 = (r6 + 4);
    r0 = MemoryInline::FlatRead32(r6);
    r4_addic_src_5 = r4;
    r4 = (r4_addic_src_5 + -1);
}

loc_8045BE18:
{
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r3 = (r3 + 4);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8045BE10;
    }
}

loc_8045BE20:
{
    r5 = (r5 & 3);
}

loc_8045BE24:
{
    r4 = (r6 + 3);
    r3 = (r3 + 3);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8045BE30:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead8(r4);
    r5_addic_src_2 = r5;
    r5 = (r5_addic_src_2 + -1);
}

loc_8045BE38:
{
    r3_stbu_ea_5 = (r3 + 1);
    MemoryInline::FlatWrite8(r3_stbu_ea_5, static_cast<uint8_t>(r0));
    r3 = r3_stbu_ea_5;
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8045BE30;
    }
}

loc_8045BE40:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8045BD88(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8045BD88_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8045BD88 func_8045BD88 preserves=true fpr_mask=0x00000000
