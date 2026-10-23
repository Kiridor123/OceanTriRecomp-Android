#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802FF9E0(CpuContext* ctx);
extern "C" uint64_t func_802FF9E0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802FFA20_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r25_addr_0 = 0;
    uint32_t r25_addr_1 = 0;
    uint32_t r25_addr_2 = 0;
    uint32_t r25_addr_3 = 0;
    uint32_t r25_addr_4 = 0;
    uint32_t r25_addr_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
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

    goto loc_802FFA20;

loc_802FFA20:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457464 (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    // end of inlined leaf 0x80457464
    r18 = r3;
    r19 = r4;
    r26 = (r3 + 1096);
    r0 = MemoryInline::FlatRead16((r3 + 48));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802FFA48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802FFA58;
    }
}

loc_802FFA4C:
{
    r22 = 5;
    r21 = 64;
    goto loc_802FFA64;
}

loc_802FFA58:
{
    r22 = 5;
    r21 = 192;
    r27 = (r3 + 326);
}

loc_802FFA64:
{
    r0 = (r4 * r22);
    r24 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = (r24 + r22);
    r0 = (r3 + -1);
    r23 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = r26;
    r4 = 0;
    r5 = (r22 * 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r20 = 0;
    r30 = 0;
    MemoryInline::FlatWrite16((r18 + 76), static_cast<uint16_t>(r30));
    r29 = r18;
    r28 = (r18 + 1156);
    r31 = 1;
}

loc_802FFAA0:
{
    r3 = MemoryInline::FlatRead16((r18 + 48));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_802FFAA8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_802FFABC;
    }
}

loc_802FFAAC:
{
    r0 = MemoryInline::FlatRead16(r27);
}

loc_802FFAB4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_802FFBD4;
    }
}

loc_802FFAB8:
{
    goto loc_802FFAC8;
}

loc_802FFABC:
{
    r0 = MemoryInline::FlatRead16((r29 + 1158));
}

loc_802FFAC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802FFBD4;
    }
}

loc_802FFAC8:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r20)));
}

loc_802FFAD0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r24))) {
        goto loc_802FFBA8;
    }
}

loc_802FFAD4:
{
}

loc_802FFAD8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r23))) {
        goto loc_802FFBA8;
    }
}

loc_802FFADC:
{
}

loc_802FFAE0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_802FFB8C;
    }
}

loc_802FFAE4:
{
    r0 = MemoryInline::FlatRead8((r27 + 2));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r18 + r0);
    r25 = MemoryInline::FlatRead32((r3 + 100));
    r0 = MemoryInline::FlatRead16(r27);
    r0 = (r0 * 12);
    r25_addr_2 = (r25 + r0);
    r0 = MemoryInline::FlatRead16(r25_addr_2);
    MemoryInline::FlatWrite16(r26, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8(r18);
}

loc_802FFB0C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802FFB48;
    }
}

loc_802FFB10:
{
    MemoryInline::FlatWrite32((r26 + 4), r31);
    r3 = r18;
    r4 = MemoryInline::FlatRead16(r27);
    // inline leaf 0x802FF970 (7 guest instruction(s))
    r0 = (r4 & 65535);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 116));
    r3 = 0x80790000u;
    r3 = (r3 + 20216);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_2);
    // end of inlined leaf 0x802FF970
    MemoryInline::FlatWrite8((r26 + 8), static_cast<uint8_t>(r3));
    r5 = MemoryInline::FlatRead16(r27);
    r3 = r18;
    r0 = (r5 * 12);
    r4 = (r25 + r0);
    r4 = MemoryInline::FlatRead16((r4 + 4));
    ctx->lr = 0x802FFB3Cu;
    if constexpr (KnownRegArgsCpuCall<0x802FF9E0u>(&func_802FF9E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802FF9E0_1653 = func_802FF9E0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802FF9E0_1653);
        r4 = static_cast<uint32_t>(regargs_result_802FF9E0_1653 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802FF9E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite16((r26 + 2), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r26 + 9), static_cast<uint8_t>(r30));
    goto loc_802FFB98;
}

loc_802FFB48:
{
    r0 = MemoryInline::FlatRead16(r27);
    r0 = (r0 * 12);
    r3 = (r25 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    MemoryInline::FlatWrite32((r26 + 4), r0);
    MemoryInline::FlatWrite8((r26 + 8), static_cast<uint8_t>(r30));
    r0 = MemoryInline::FlatRead16(r27);
    r0 = (r0 * 12);
    r3 = (r25 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 4));
    MemoryInline::FlatWrite16((r26 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16(r27);
    r0 = (r0 * 12);
    r3 = (r25 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 10));
    MemoryInline::FlatWrite8((r26 + 9), static_cast<uint8_t>(r0));
    goto loc_802FFB98;
}

loc_802FFB8C:
{
    r3 = r26;
    r4 = r28;
    // inline leaf 0x802FFC3C (11 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead8((r4 + 8));
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 9));
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802FFC3C
}

loc_802FFB98:
{
    r3 = MemoryInline::FlatRead16((r18 + 76));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r18 + 76), static_cast<uint16_t>(r0));
    r26 = (r26 + 12);
}

loc_802FFBA8:
{
    r29 = (r29 + 12);
    r28 = (r28 + 12);
    r20 = (r20 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r20)));
}

loc_802FFBBC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r21))) {
        goto loc_802FFBD4;
    }
}

loc_802FFBC0:
{
    r0 = MemoryInline::FlatRead16((r18 + 48));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802FFBC8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_802FFAA0;
    }
}

loc_802FFBCC:
{
    r27 = (r27 + 4);
    goto loc_802FFAA0;
}

loc_802FFBD4:
{
    MemoryInline::FlatWrite16((r18 + 60), static_cast<uint16_t>(r19));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r20)));
    r4 = r22;
    // inline leaf 0x802A8F78 (15 guest instruction(s))
}

loc_inl3_0x802A8F78:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl3_0x802A8F80:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x802A8F8C;
    }
}

loc_inl3_0x802A8F84:
{
    r3 = 1;
    goto loc_inl3_cont_802A8F78;
}

loc_inl3_0x802A8F8C:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r5));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 * r5);
    r0 = (r4 - r0);
}

loc_inl3_0x802A8FA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x802A8FA8:
{
    r0 = (r3 + 1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_inl3_cont_802A8F78;
}

loc_inl3_return:
{
}

loc_inl3_cont_802A8F78:
{
    // end of inlined leaf 0x802A8F78
    MemoryInline::FlatWrite16((r18 + 62), static_cast<uint16_t>(r3));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_802FFBF0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802FFBFC;
    }
}

loc_802FFBF4:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r18 + 62), static_cast<uint16_t>(r0));
}

loc_802FFBFC:
{
    r3 = MemoryInline::FlatRead16((r18 + 76));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r18 + 52), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r18 + 50));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802FFC14:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_802FFC24;
    }
}

loc_802FFC18:
{
    r0 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r18 + 50), static_cast<uint16_t>(r0));
}

loc_802FFC24:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574B0 (15 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    // end of inlined leaf 0x804574B0
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

extern "C" void func_802FFA20(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802FFA20_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802FFA20 func_802FFA20 preserves=true fpr_mask=0x00000000
