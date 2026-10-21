#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802A4DFC_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x802A4DFCu);
    goto loc_802A4DFC;

loc_802A4DFC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r25 = r3;
    r28 = (r3 + 108);
    r22 = MemoryInline::FlatRead32((r3 + 404));
    r0 = MemoryInline::FlatRead8((r3 + 416));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8((r3 + 419));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r4 * r0);
    r27 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r4 = r27;
    // inline leaf 0x802A9DB4 (10 guest instruction(s))
}

loc_inl1_0x802A9DB4:
{
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_inl1_0x802A9DBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x802A9DD4;
    }
}

loc_inl1_0x802A9DC0:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl1_0x802A9DC8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(24))) {
        goto loc_inl1_0x802A9DD4;
    }
}

loc_inl1_0x802A9DCC:
{
    r3 = 1;
    goto loc_inl1_cont_802A9DB4;
}

loc_inl1_0x802A9DD4:
{
    r3 = 0;
}

loc_inl1_cont_802A9DB4:
{
    // end of inlined leaf 0x802A9DB4
}

loc_802A4E40:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802A4E4C;
    }
}

loc_802A4E44:
{
    r27 = (r27 + -24);
    r22 = MemoryInline::FlatRead32((r25 + 408));
}

loc_802A4E4C:
{
    r26 = 0;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r29 = (r22 + r0);
    r30 = 0;
    r22 = -204013568;
    r23 = -180944896;
    r24 = -1;
    r31 = 1;
    goto loc_802A4F34;
}

loc_802A4E74:
{
    MemoryInline::FlatWrite32((r28 + 12), r30);
    r0 = MemoryInline::FlatRead16(r29);
}

loc_802A4E80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A4F1C;
    }
}

loc_802A4E84:
{
    MemoryInline::FlatWrite8((r28 + 2), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead8((r25 + 1));
}

loc_802A4E90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_802A4F20;
    }
}

loc_802A4E94:
{
    r0 = MemoryInline::FlatRead8((r25 + 26));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802A4EA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_802A4F20;
    }
}

loc_802A4EA4:
{
    r0 = MemoryInline::FlatRead8((r25 + 487));
}

loc_802A4EAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A4F14;
    }
}

loc_802A4EB0:
{
    r0 = MemoryInline::FlatRead8((r25 + 486));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8((r25 + 416));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8((r25 + 419));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r3 * r0);
    r0 = (r26 + r0);
}

loc_802A4ED4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_802A4EF0;
    }
}

loc_802A4ED8:
{
    r0 = (r22 + 16127);
    MemoryInline::FlatWrite32((r28 + 12), r0);
    r0 = (r23 + 14335);
    MemoryInline::FlatWrite32((r28 + 16), r0);
    MemoryInline::FlatWrite32((r28 + 20), r24);
    goto loc_802A4F20;
}

loc_802A4EF0:
{
}

loc_802A4EF4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(24))) {
        goto loc_802A4F20;
    }
}

loc_802A4EF8:
{
    r3 = MemoryInline::FlatRead16(r29);
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
    r0 = MemoryInline::FlatRead8(r3);
}

loc_802A4F08:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_802A4F20;
    }
}

loc_802A4F0C:
{
    MemoryInline::FlatWrite8((r28 + 2), static_cast<uint8_t>(r30));
    goto loc_802A4F20;
}

loc_802A4F14:
{
    MemoryInline::FlatWrite8((r28 + 2), static_cast<uint8_t>(r30));
    goto loc_802A4F20;
}

loc_802A4F1C:
{
    MemoryInline::FlatWrite8((r28 + 2), static_cast<uint8_t>(r30));
}

loc_802A4F20:
{
    MemoryInline::FlatWrite16((r28 + 6), static_cast<uint16_t>(r27));
    r26 = (r26 + 1);
    r28 = (r28 + 24);
    r29 = (r29 + 4);
    r27 = (r27 + 1);
}

loc_802A4F34:
{
    r0 = MemoryInline::FlatRead8((r25 + 419));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802A4F40:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r0))) {
        goto loc_802A4E74;
    }
}

loc_802A4F44:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802A4DFC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802A4DFC_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802A4DFC func_802A4DFC preserves=true fpr_mask=0x00000000
