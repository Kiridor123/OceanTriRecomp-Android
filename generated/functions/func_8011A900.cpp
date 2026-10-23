#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8011A900_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    goto loc_8011A900;

loc_8011A900:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r30 = r3;
    r31 = MemoryInline::FlatRead32((r3 + 56));
    r3 = (r1 + 12);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl1_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB10;
    }
}

loc_inl1_0x800CFB08:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB24;
    }
}

loc_inl1_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl1_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r29 = r3;
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 68));
}

loc_8011A948:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_8011A964;
    }
}

loc_8011A94C:
{
    r3 = MemoryInline::FlatRead8((r30 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    goto loc_8011AB48;
}

loc_8011A964:
{
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r0 * 2848);
    r3 = (r29 + r0);
    r3 = (r3 + 60);
    r4 = (r31 + 12);
    ctx->lr = 0x8011A980u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80290820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    MemoryInline::FlatWrite8((r31 + 68), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead8((r31 + 68));
}

loc_8011A98C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8011A9A4;
    }
}

loc_8011A990:
{
    r0 = MemoryInline::FlatRead8((r30 + 6));
}

loc_8011A998:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8011A9A4;
    }
}

loc_8011A99C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 6), static_cast<uint8_t>(r0));
}

loc_8011A9A4:
{
    r0 = MemoryInline::FlatRead8((r30 + 6));
}

loc_8011A9AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8011A9D4;
    }
}

loc_8011A9B0:
{
}

loc_8011A9B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8011A9F0;
    }
}

loc_8011A9B8:
{
}

loc_8011A9BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8011AA30;
    }
}

loc_8011A9C0:
{
}

loc_8011A9C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8011AA60;
    }
}

loc_8011A9C8:
{
}

loc_8011A9CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8011AA8C;
    }
}

loc_8011A9D0:
{
    goto loc_8011AAB4;
}

loc_8011A9D4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 11), static_cast<uint8_t>(r0));
    r0 = 20;
    MemoryInline::FlatWrite32((r30 + 12), r0);
    r3 = MemoryInline::FlatRead8((r30 + 6));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 6), static_cast<uint8_t>(r0));
}

loc_8011A9F0:
{
    r3 = MemoryInline::FlatRead8((r31 + 11));
    r3 = MH3_TickLoad(r3, 2148641264);
    r0 = (r3 + 13);
    MemoryInline::FlatWrite8((r31 + 11), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r3 = MH3_TickLoad(r3, 2148641276);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r30 + 12), r0);
}

loc_8011AA0C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8011AAB4;
    }
}

loc_8011AA10:
{
    r0 = 255;
    MemoryInline::FlatWrite8((r31 + 11), static_cast<uint8_t>(r0));
    r0 = 31;
    MemoryInline::FlatWrite32((r30 + 12), r0);
    r3 = MemoryInline::FlatRead8((r30 + 6));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 6), static_cast<uint8_t>(r0));
    goto loc_8011AAB4;
}

loc_8011AA30:
{
    r3 = MemoryInline::FlatRead8((r31 + 11));
    r3 = MH3_TickLoad(r3, 2148641328);
    r0 = (r3 + -5);
    MemoryInline::FlatWrite8((r31 + 11), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r3 = MH3_TickLoad(r3, 2148641340);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r30 + 12), r0);
}

loc_8011AA4C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8011AAB4;
    }
}

loc_8011AA50:
{
    r3 = MemoryInline::FlatRead8((r30 + 6));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 6), static_cast<uint8_t>(r0));
    goto loc_8011AAB4;
}

loc_8011AA60:
{
    r0 = 100;
    MemoryInline::FlatWrite8((r31 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 68));
}

loc_8011AA70:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8011AAB4;
    }
}

loc_8011AA74:
{
    r0 = 34;
    MemoryInline::FlatWrite32((r30 + 12), r0);
    r3 = MemoryInline::FlatRead8((r30 + 6));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 6), static_cast<uint8_t>(r0));
    goto loc_8011AAB4;
}

loc_8011AA8C:
{
    r3 = MemoryInline::FlatRead8((r31 + 11));
    r3 = MH3_TickLoad(r3, 2148641420);
    r0 = (r3 + -3);
    MemoryInline::FlatWrite8((r31 + 11), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r3 = MH3_TickLoad(r3, 2148641432);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r30 + 12), r0);
}

loc_8011AAA8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8011AAB4;
    }
}

loc_8011AAAC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 6), static_cast<uint8_t>(r0));
}

loc_8011AAB4:
{
    r0 = MemoryInline::FlatRead8((r30 + 6));
}

loc_8011AABC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8011AAC8;
    }
}

loc_8011AAC0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 11), static_cast<uint8_t>(r0));
}

loc_8011AAC8:
{
    // inline leaf 0x8021F29C (4 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12536);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x8021F29C
}

loc_8011AAD0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8011AB48;
    }
}

loc_8011AAD4:
{
    r28 = 0;
    r29 = r31;
    goto loc_8011AB28;
}

loc_8011AAE0:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    ctx->lr = 0x8011AAE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x800F9984u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
}

loc_8011AAEC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8011AB08;
    }
}

loc_8011AAF0:
{
    r3 = MemoryInline::FlatRead8((r30 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    goto loc_8011AB48;
}

loc_8011AB08:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = (r30 + 24);
    r5 = (r1 + 8);
    ctx->lr = 0x8011AB20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = (r29 + 4);
    r28 = (r28 + 1);
}

loc_8011AB28:
{
    r6 = MemoryInline::FlatRead32(r31);
}

loc_8011AB30:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r6))) {
        goto loc_8011AAE0;
    }
}

loc_8011AB34:
{
    r3 = r30;
    r4 = (r31 + 4);
    r5 = 1;
    r7 = 0;
    ctx->lr = 0x8011AB48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
}

loc_8011AB48:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8011A900(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8011A900_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8011A900 func_8011A900 preserves=true fpr_mask=0x00000000
