#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8033AB60(CpuContext* ctx);
extern "C" uint64_t func_8033AB60_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8033ACDC(CpuContext* ctx);
extern "C" uint64_t func_8033ACDC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8031AE9C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
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

    MKW_GUEST_ENTER(0x8031AE9Cu);
    goto loc_8031AE9C;

loc_8031AE9C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r20 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 419));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8((r3 + 416));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r4 * r0);
    r22 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r23 = r22;
    r4 = r22;
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

loc_8031AEDC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8031AEE8;
    }
}

loc_8031AEE0:
{
    r0 = (r22 + -24);
    r22 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8031AEE8:
{
    r24 = (r20 + 108);
    r21 = 0;
    r27 = 1;
    r28 = -204013568;
    r29 = -180944896;
    r30 = -1;
    r31 = -252641280;
    r25 = 0;
}

loc_8031AF08:
{
    MemoryInline::FlatWrite16((r24 + 6), static_cast<uint16_t>(r22));
    MemoryInline::FlatWrite8((r24 + 2), static_cast<uint8_t>(r25));
    MemoryInline::FlatWrite32((r24 + 12), r25);
    r3 = r20;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r23)));
    // inline leaf 0x802A9E44 (16 guest instruction(s))
}

loc_inl2_0x802A9E44:
{
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_inl2_0x802A9E4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x802A9E70;
    }
}

loc_inl2_0x802A9E50:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl2_0x802A9E58:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(24))) {
        goto loc_inl2_0x802A9E70;
    }
}

loc_inl2_0x802A9E5C:
{
    r3 = MemoryInline::FlatRead32((r3 + 408));
    r0 = (r5 + -24);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r3 + r0);
    goto loc_inl2_cont_802A9E44;
}

loc_inl2_0x802A9E70:
{
    r3 = MemoryInline::FlatRead32((r3 + 404));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r3 + r0);
}

loc_inl2_cont_802A9E44:
{
    // end of inlined leaf 0x802A9E44
    r26 = r3;
    r4 = MemoryInline::FlatRead8((r20 + 1));
    r0 = (r4 + -4);
}

loc_8031AF30:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8031B040;
    }
}

loc_8031AF34:
{
    r0 = (r4 + -2);
}

loc_8031AF3C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8031AFB0;
    }
}

loc_8031AF40:
{
}

loc_8031AF44:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8031AF54;
    }
}

loc_8031AF48:
{
}

loc_8031AF4C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_8031AF6C;
    }
}

loc_8031AF50:
{
    goto loc_8031B0B4;
}

loc_8031AF54:
{
    r3 = MemoryInline::FlatRead16(r3);
    ctx->lr = 0x8031AF5Cu;
    if constexpr (KnownRegArgsCpuCall<0x8033AB60u>(&func_8033AB60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8033AB60_14DD = func_8033AB60_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8033AB60_14DD);
        r4 = static_cast<uint32_t>(regargs_result_8033AB60_14DD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8033AB60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r11 = ctx->gpr[11];
    }
}

loc_8031AF60:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8031B0B4;
    }
}

loc_8031AF64:
{
    MemoryInline::FlatWrite8((r24 + 2), static_cast<uint8_t>(r27));
    goto loc_8031B0B4;
}

loc_8031AF6C:
{
    r3 = MemoryInline::FlatRead16((r20 + 496));
    r4 = MemoryInline::FlatRead16(r26);
    r5 = 0;
    ctx->lr = 0x8031AF7Cu;
    if constexpr (KnownRegArgsCpuCall<0x8033ACDCu>(&func_8033ACDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8033ACDC_1946 = func_8033ACDC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8033ACDC_1946);
        r4 = static_cast<uint32_t>(regargs_result_8033ACDC_1946 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8033ACDCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8031AF80:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8031AF88;
    }
}

loc_8031AF84:
{
    MemoryInline::FlatWrite8((r24 + 2), static_cast<uint8_t>(r27));
}

loc_8031AF88:
{
    r3 = MemoryInline::FlatRead16((r20 + 500));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r23)));
}

loc_8031AF94:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8031B0B4;
    }
}

loc_8031AF98:
{
    r0 = (r28 + 16127);
    MemoryInline::FlatWrite32((r24 + 12), r0);
    r0 = (r29 + 14335);
    MemoryInline::FlatWrite32((r24 + 16), r0);
    MemoryInline::FlatWrite32((r24 + 20), r30);
    goto loc_8031B0B4;
}

loc_8031AFB0:
{
    r0 = MemoryInline::FlatRead16((r20 + 500));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r23)));
}

loc_8031AFBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r4))) {
        goto loc_8031AFCC;
    }
}

loc_8031AFC0:
{
    r0 = MemoryInline::FlatRead16((r20 + 502));
}

loc_8031AFC8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r4))) {
        goto loc_8031AFE0;
    }
}

loc_8031AFCC:
{
    r0 = (r28 + 16127);
    MemoryInline::FlatWrite32((r24 + 12), r0);
    r0 = (r29 + 14335);
    MemoryInline::FlatWrite32((r24 + 16), r0);
    MemoryInline::FlatWrite32((r24 + 20), r30);
}

loc_8031AFE0:
{
    r0 = MemoryInline::FlatRead8((r20 + 510));
}

loc_8031AFE8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8031B0B4;
    }
}

loc_8031AFEC:
{
    r4 = MemoryInline::FlatRead32((r20 + 492));
}

loc_8031AFF4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8031B0B4;
    }
}

loc_8031AFF8:
{
    r3 = MemoryInline::FlatRead16(r3);
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8031B004:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8031B0B4;
    }
}

loc_8031B008:
{
    // inline leaf 0x8029F740 (10 guest instruction(s))
}

loc_inl3_0x8029F740:
{
    r4 = 0x806B0000u;
    r4 = MemoryInline::FlatRead32((r4 + -4808));
    r0 = (r3 & 65535);
}

loc_inl3_0x8029F750:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl3_0x8029F758;
    }
}

loc_inl3_0x8029F754:
{
    r3 = 0;
}

loc_inl3_0x8029F758:
{
    r0 = (r3 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
}

loc_inl3_cont_8029F740:
{
    // end of inlined leaf 0x8029F740
    r3 = MemoryInline::FlatRead8((r3 + 3));
    r0 = MemoryInline::FlatRead16((r26 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8031B018:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_8031B028;
    }
}

loc_8031B01C:
{
    r0 = (r31 + -3841);
    MemoryInline::FlatWrite32((r24 + 12), r0);
    goto loc_8031B030;
}

loc_8031B028:
{
    r0 = (r29 + 14335);
    MemoryInline::FlatWrite32((r24 + 12), r0);
}

loc_8031B030:
{
    r0 = (r29 + 14335);
    MemoryInline::FlatWrite32((r24 + 16), r0);
    MemoryInline::FlatWrite32((r24 + 20), r30);
    goto loc_8031B0B4;
}

loc_8031B040:
{
    r0 = MemoryInline::FlatRead16((r20 + 500));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r23)));
}

loc_8031B04C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r4))) {
        goto loc_8031B05C;
    }
}

loc_8031B050:
{
    r0 = MemoryInline::FlatRead16((r20 + 502));
}

loc_8031B058:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r4))) {
        goto loc_8031B070;
    }
}

loc_8031B05C:
{
    r0 = (r28 + 16127);
    MemoryInline::FlatWrite32((r24 + 12), r0);
    r0 = (r29 + 14335);
    MemoryInline::FlatWrite32((r24 + 16), r0);
    MemoryInline::FlatWrite32((r24 + 20), r30);
}

loc_8031B070:
{
    r3 = MemoryInline::FlatRead16(r3);
    r0 = MemoryInline::FlatRead16((r20 + 504));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8031B07C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8031B0B4;
    }
}

loc_8031B080:
{
    // inline leaf 0x8029F740 (10 guest instruction(s))
}

loc_inl4_0x8029F740:
{
    r4 = 0x806B0000u;
    r4 = MemoryInline::FlatRead32((r4 + -4808));
    r0 = (r3 & 65535);
}

loc_inl4_0x8029F750:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl4_0x8029F758;
    }
}

loc_inl4_0x8029F754:
{
    r3 = 0;
}

loc_inl4_0x8029F758:
{
    r0 = (r3 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
}

loc_inl4_cont_8029F740:
{
    // end of inlined leaf 0x8029F740
    r3 = MemoryInline::FlatRead8((r3 + 3));
    r0 = MemoryInline::FlatRead16((r26 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8031B090:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_8031B0A0;
    }
}

loc_8031B094:
{
    r0 = (r31 + -3841);
    MemoryInline::FlatWrite32((r24 + 12), r0);
    goto loc_8031B0A8;
}

loc_8031B0A0:
{
    r0 = (r29 + 14335);
    MemoryInline::FlatWrite32((r24 + 12), r0);
}

loc_8031B0A8:
{
    r0 = (r29 + 14335);
    MemoryInline::FlatWrite32((r24 + 16), r0);
    MemoryInline::FlatWrite32((r24 + 20), r30);
}

loc_8031B0B4:
{
    r21 = (r21 + 1);
    r24 = (r24 + 24);
    r23 = (r23 + 1);
    r22 = (r22 + 1);
}

loc_8031B0C8:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(8))) {
        goto loc_8031AF08;
    }
}

loc_8031B0CC:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8031AE9C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8031AE9C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8031AE9C func_8031AE9C preserves=true fpr_mask=0x00000000
