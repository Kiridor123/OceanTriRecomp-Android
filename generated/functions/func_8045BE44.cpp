#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8045BE44_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addic_src_0 = 0;
    uint32_t r3_addic_src_1 = 0;
    uint32_t r3_addic_src_2 = 0;
    uint32_t r3_addic_src_3 = 0;
    uint32_t r3_addic_src_4 = 0;
    uint32_t r3_addic_src_5 = 0;
    uint32_t r3_addic_src_6 = 0;
    uint32_t r3_addic_src_7 = 0;
    uint32_t r3_addic_src_8 = 0;
    uint32_t r3_addic_src_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r5_addic_src_0 = 0;
    uint32_t r5_addic_src_1 = 0;
    uint32_t r5_addic_src_2 = 0;
    uint32_t r6_stbu_ea_0 = 0;
    uint32_t r6_stbu_ea_1 = 0;
    uint32_t r6_stbu_ea_2 = 0;
    uint32_t r6_stbu_ea_3 = 0;
    uint32_t r6_stbu_ea_4 = 0;
    uint32_t r6_stbu_ea_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_8045BE44;

loc_8045BE44:
{
    r6 = (r3 + r5);
    r4 = (r4 + r5);
    r3 = (r6 & 3);
}

loc_8045BE50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045BE68;
    }
}

loc_8045BE54:
{
    r5 = (r5 - r3);
}

loc_8045BE58:
{
    r4 = (r4 + -1);
    r0 = MemoryInline::FlatRead8(r4);
    r3_addic_src_2 = r3;
    r3 = (r3_addic_src_2 + -1);
}

loc_8045BE60:
{
    r6_stbu_ea_2 = (r6 + -1);
    MemoryInline::FlatWrite8(r6_stbu_ea_2, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_2;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8045BE58;
    }
}

loc_8045BE68:
{
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
}

loc_8045BE6C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045BEB8;
    }
}

loc_8045BE70:
{
    r0 = MemoryInline::FlatRead32((r4 + -4));
    r3_addic_src_5 = r3;
    r3 = (r3_addic_src_5 + -1);
}

loc_8045BE78:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r6 + -32), 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r6 + -4), r0);
    r0 = MemoryInline::FlatRead32((r4 + -8));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r6 + -8), r0);
    r0 = MemoryInline::FlatRead32((r4 + -12));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r6 + -12), r0);
    r0 = MemoryInline::FlatRead32((r4 + -16));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r6 + -16), r0);
    r0 = MemoryInline::FlatRead32((r4 + -20));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r6 + -20), r0);
    r0 = MemoryInline::FlatRead32((r4 + -24));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r6 + -24), r0);
    r0 = MemoryInline::FlatRead32((r4 + -28));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r6 + -28), r0);
    r4 = (r4 + -32);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r6 + -32), r0);
    r6 = (r6 + -32);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8045BE70;
    }
}

loc_8045BEB8:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r3 = (r3_rot_1 & 7);
}

loc_8045BEBC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045BED0;
    }
}

loc_8045BEC0:
{
    r4 = (r4 + -4);
    r0 = MemoryInline::FlatRead32(r4);
    r3_addic_src_8 = r3;
    r3 = (r3_addic_src_8 + -1);
}

loc_8045BEC8:
{
    MemoryInline::FlatWrite32((r6 + -4), r0);
    r6 = (r6 + -4);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8045BEC0;
    }
}

loc_8045BED0:
{
    r5 = (r5 & 3);
}

loc_8045BED4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8045BED8:
{
    r4 = (r4 + -1);
    r0 = MemoryInline::FlatRead8(r4);
    r5_addic_src_2 = r5;
    r5 = (r5_addic_src_2 + -1);
}

loc_8045BEE0:
{
    r6_stbu_ea_5 = (r6 + -1);
    MemoryInline::FlatWrite8(r6_stbu_ea_5, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_5;
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8045BED8;
    }
}

loc_8045BEE8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8045BE44(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8045BE44_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8045BE44 func_8045BE44 preserves=true fpr_mask=0x00000000
