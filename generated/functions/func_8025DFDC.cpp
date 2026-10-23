#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8025DFDC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8025DFDC;

loc_8025DFDC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r29 = r3;
    r30 = r4;
    r31 = 0;
    r0 = (r5 & 255);
}

loc_8025E004:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8025E088;
    }
}

loc_8025E008:
{
    r26 = 0;
    r27 = r30;
}

loc_8025E010:
{
    r27 = (r27 + 1);
    r0 = (r27 & 65535);
}

loc_8025E01C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(26))) {
        goto loc_8025E024;
    }
}

loc_8025E020:
{
    r27 = 0;
}

loc_8025E024:
{
    r0 = (r27 & 65535);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 634));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8025E038:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8025E078;
    }
}

loc_8025E03C:
{
    r28 = MemoryInline::FlatRead16((r3 + 632));
    r3 = r28;
    // inline leaf 0x8029F740 (10 guest instruction(s))
}

loc_inl1_0x8029F740:
{
    r4 = 0x806B0000u;
    r4 = MemoryInline::FlatRead32((r4 + -4808));
    r0 = (r3 & 65535);
}

loc_inl1_0x8029F750:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl1_0x8029F758;
    }
}

loc_inl1_0x8029F754:
{
    r3 = 0;
}

loc_inl1_0x8029F758:
{
    r0 = (r3 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
}

loc_inl1_cont_8029F740:
{
    // end of inlined leaf 0x8029F740
}

loc_8025E04C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8025E078;
    }
}

loc_8025E050:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r0 & 8);
}

loc_8025E05C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8025E078;
    }
}

loc_8025E060:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8025E068:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8025E078;
    }
}

loc_8025E06C:
{
    r30 = r27;
    r31 = 1;
    goto loc_8025E104;
}

loc_8025E078:
{
    r26 = (r26 + 1);
}

loc_8025E080:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(26))) {
        goto loc_8025E010;
    }
}

loc_8025E084:
{
    goto loc_8025E104;
}

loc_8025E088:
{
    r28 = 0;
    r27 = r30;
}

loc_8025E090:
{
    r3 = (r27 & 65535);
}

loc_8025E098:
{
    r27 = 25;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8025E0A8;
    }
}

loc_8025E0A0:
{
    r0 = (r3 + -1);
    r27 = (r0 & 65535);
}

loc_8025E0A8:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 634));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8025E0B8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8025E0F8;
    }
}

loc_8025E0BC:
{
    r26 = MemoryInline::FlatRead16((r3 + 632));
    r3 = r26;
    // inline leaf 0x8029F740 (10 guest instruction(s))
}

loc_inl2_0x8029F740:
{
    r4 = 0x806B0000u;
    r4 = MemoryInline::FlatRead32((r4 + -4808));
    r0 = (r3 & 65535);
}

loc_inl2_0x8029F750:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl2_0x8029F758;
    }
}

loc_inl2_0x8029F754:
{
    r3 = 0;
}

loc_inl2_0x8029F758:
{
    r0 = (r3 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
}

loc_inl2_cont_8029F740:
{
    // end of inlined leaf 0x8029F740
}

loc_8025E0CC:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_8025E0F8;
    }
}

loc_8025E0D0:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r0 & 8);
}

loc_8025E0DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8025E0F8;
    }
}

loc_8025E0E0:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8025E0E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8025E0F8;
    }
}

loc_8025E0EC:
{
    r30 = r27;
    r31 = 1;
    goto loc_8025E104;
}

loc_8025E0F8:
{
    r28 = (r28 + 1);
}

loc_8025E100:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(26))) {
        goto loc_8025E090;
    }
}

loc_8025E104:
{
}

loc_8025E108:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8025E110;
    }
}

loc_8025E10C:
{
    r30 = 0;
}

loc_8025E110:
{
    r3 = r30;
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8025DFDC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8025DFDC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8025DFDC func_8025DFDC preserves=true fpr_mask=0x00000000
