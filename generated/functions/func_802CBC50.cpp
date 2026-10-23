#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802CBC50_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r0_subfc_sub_1 = 0;
    uint32_t r0_subfc_sub_2 = 0;
    uint32_t r0_subfc_sub_3 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_adde_right_3 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    goto loc_802CBC50;

loc_802CBC50:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = 0;
    // inline leaf 0x802D94F0 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 1155));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x802D94F0
}

loc_802CBC74:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802CBC80;
    }
}

loc_802CBC78:
{
    r3 = 0;
    goto loc_802CBDD0;
}

loc_802CBC80:
{
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl1_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl1_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CEF40;
    }
}

loc_inl1_0x800CEF3C:
{
    r0 = 1;
}

loc_inl1_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl1_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r4 = (r3 & 65535);
    r3 = 1374420992;
    r0 = (r3 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 100);
    r0 = (r4 - r0);
}

loc_802CBCB0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(15))) {
        goto loc_802CBCBC;
    }
}

loc_802CBCB4:
{
    r3 = 0;
    goto loc_802CBDD0;
}

loc_802CBCBC:
{
    r3 = r30;
    // inline leaf 0x802CBC20 (12 guest instruction(s))
}

loc_inl2_0x802CBC20:
{
    r5 = MemoryInline::FlatRead16((r3 + 980));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = MemoryInline::FlatRead16((r3 + 982));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl2_0x802CBC2C:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_inl2_0x802CBC38;
    }
}

loc_inl2_0x802CBC30:
{
    r3 = 1;
    goto loc_inl2_cont_802CBC20;
}

loc_inl2_0x802CBC38:
{
    r0 = MemoryInline::FlatRead16((r3 + 1044));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (static_cast<int32_t>(r5) >> 31);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0_subfc_sub_1 = r0;
    r0 = (r5 - r0_subfc_sub_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0_subfc_sub_1) ? 1u : 0u) << 29);
    r3_adde_right_1 = r3;
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r4 + r3_adde_right_1);
    r3 = (r3 + r3_ca_1);
}

loc_inl2_cont_802CBC20:
{
    // end of inlined leaf 0x802CBC20
}

loc_802CBCC8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802CBCD4;
    }
}

loc_802CBCCC:
{
    r3 = 0;
    goto loc_802CBDD0;
}

loc_802CBCD4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 460), 0, 584u, true, false);
    r3 = MemoryInline::ReadResolved16(guest_range_0, 552u, (r30 + 1012));
    r0 = (r3 & 1);
}

loc_802CBCE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802CBD00;
    }
}

loc_802CBCE4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r30 + 460));
}

loc_802CBCEC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_802CBD00;
    }
}

loc_802CBCF0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 572u, (r30 + 1032));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802CBCF8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802CBD00;
    }
}

loc_802CBCFC:
{
    r31 = (r31 | 1);
}

loc_802CBD00:
{
    r0 = (r3 & 2);
}

loc_802CBD08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802CBD20;
    }
}

loc_802CBD0C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 574u, (r30 + 1034));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802CBD14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802CBD20;
    }
}

loc_802CBD18:
{
    r0 = (r31 | 2);
    r31 = (r0 & 65535);
}

loc_802CBD20:
{
    r0 = (r3 & 4);
}

loc_802CBD28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802CBD40;
    }
}

loc_802CBD2C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 576u, (r30 + 1036));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802CBD34:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802CBD40;
    }
}

loc_802CBD38:
{
    r0 = (r31 | 4);
    r31 = (r0 & 65535);
}

loc_802CBD40:
{
    r0 = (r3 & 64);
}

loc_802CBD48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802CBD60;
    }
}

loc_802CBD4C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 580u, (r30 + 1040));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802CBD54:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802CBD60;
    }
}

loc_802CBD58:
{
    r0 = (r31 | 64);
    r31 = (r0 & 65535);
}

loc_802CBD60:
{
    r0 = (r3 & 512);
}

loc_802CBD68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802CBD80;
    }
}

loc_802CBD6C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 578u, (r30 + 1038));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802CBD74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802CBD80;
    }
}

loc_802CBD78:
{
    r0 = (r31 | 512);
    r31 = (r0 & 65535);
}

loc_802CBD80:
{
    r0 = (r3 & 256);
}

loc_802CBD88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802CBDA0;
    }
}

loc_802CBD8C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 582u, (r30 + 1042));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802CBD94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802CBDA0;
    }
}

loc_802CBD98:
{
    r0 = (r31 | 256);
    r31 = (r0 & 65535);
}

loc_802CBDA0:
{
    r0 = (r3 & 128);
}

loc_802CBDA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802CBDB4;
    }
}

loc_802CBDAC:
{
    r0 = (r31 | 128);
    r31 = (r0 & 65535);
}

loc_802CBDB4:
{
    r0 = (r31 & 65535);
}

loc_802CBDBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802CBDCC;
    }
}

loc_802CBDC0:
{
    MemoryInline::FlatWrite16((r30 + 1010), static_cast<uint16_t>(r31));
    r3 = 1;
    goto loc_802CBDD0;
}

loc_802CBDCC:
{
    r3 = 0;
}

loc_802CBDD0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802CBC50(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802CBC50_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802CBC50 func_802CBC50 preserves=true fpr_mask=0x00000000
