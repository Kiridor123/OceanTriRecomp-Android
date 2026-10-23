#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8010BAAC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r22_addr_0 = 0;
    uint32_t r22_addr_1 = 0;
    uint32_t r22_addr_2 = 0;
    uint32_t r22_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    goto loc_8010BAAC;

loc_8010BAAC:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    r11 = (r1 + 144);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r24 = r3;
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 48);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r26 = MemoryInline::FlatRead32((r24 + 48));
    r25 = MemoryInline::FlatRead32((r24 + 56));
    r3 = r26;
    // inline leaf 0x8012D068 (10 guest instruction(s))
}

loc_inl5_0x8012D068:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl5_0x8012D070:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl5_0x8012D088;
    }
}

loc_inl5_0x8012D074:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_inl5_0x8012D07C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_inl5_0x8012D088;
    }
}

loc_inl5_0x8012D080:
{
    r3 = 0;
    goto loc_inl5_cont_8012D068;
}

loc_inl5_0x8012D088:
{
    r3 = 1;
}

loc_inl5_cont_8012D068:
{
    // end of inlined leaf 0x8012D068
}

loc_8010BAF8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8010BB18;
    }
}

loc_8010BAFC:
{
    r3 = MemoryInline::FlatRead8((r24 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r24 + 5), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r24 + 6), static_cast<uint8_t>(r0));
    r0 = 20;
    MemoryInline::FlatWrite32((r24 + 16), r0);
}

loc_8010BB18:
{
    r3 = MemoryInline::FlatRead32((r24 + 12));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r24 + 12), r0);
}

loc_8010BB28:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8010BB44;
    }
}

loc_8010BB2C:
{
    r3 = MemoryInline::FlatRead8((r24 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r24 + 5), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r24 + 1), static_cast<uint8_t>(r0));
    goto loc_8010BC18;
}

loc_8010BB44:
{
    r0 = MemoryInline::FlatRead8((r26 + 481));
    MemoryInline::FlatWrite8((r24 + 68), static_cast<uint8_t>(r0));
    r3 = (r24 + 24);
    r4 = (r26 + 392);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r27 = 0;
    r3 = 0x805A0000u;
    r31 = (r3 + -1152);
    r3 = 0x805A0000u;
    r30 = (r3 + -1132);
    r29 = r25;
    r28 = (r25 + 4);
    r23 = 0;
    goto loc_8010BC0C;
}

loc_8010BB7C:
{
    r22 = MemoryInline::FlatRead32(r31);
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl6_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl6_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl6_0x800CEF40;
    }
}

loc_inl6_0x800CEF3C:
{
    r0 = 1;
}

loc_inl6_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_3 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_2 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl6_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r4 = (r3 & 65535);
    r3 = MemoryInline::FlatRead32(r30);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
    r0 = (r0 & 255);
    r3 = r26;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r22_addr_2 = (r22 + r0);
    r4 = MemoryInline::FlatRead32(r22_addr_2);
    r5 = (r1 + 48);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80135994u>(ctx);
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = (r1 + 48);
    ctx->lr = 0x8010BBC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x800A5420u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r3 = MemoryInline::FlatRead32((r29 + 4));
    ctx->lr = 0x8010BBC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x800F9984u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
}

loc_8010BBCC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8010BBE0;
    }
}

loc_8010BBD0:
{
    MemoryInline::FlatWrite8((r24 + 1), static_cast<uint8_t>(r23));
    r3 = MemoryInline::FlatRead8((r24 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r24 + 5), static_cast<uint8_t>(r0));
}

loc_8010BBE0:
{
    r3 = r24;
    r4 = r28;
    r5 = 1;
    r6 = 1;
    r7 = 0;
    ctx->lr = 0x8010BBF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r31 = (r31 + 4);
    r30 = (r30 + 4);
    r29 = (r29 + 4);
    r28 = (r28 + 4);
    r27 = (r27 + 1);
}

loc_8010BC0C:
{
    r0 = MemoryInline::FlatRead32(r25);
}

loc_8010BC14:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r0))) {
        goto loc_8010BB7C;
    }
}

loc_8010BC18:
{
    r11 = (r1 + 144);
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8010BAAC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8010BAAC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8010BAAC func_8010BAAC preserves=true fpr_mask=0x00000000
