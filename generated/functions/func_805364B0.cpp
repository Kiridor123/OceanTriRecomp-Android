#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_805364B0_ra38_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_805364B0;

loc_805364B0:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r0 = -1;
}

loc_805364CC:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r26 = r3;
    r27 = r4;
    r28 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r29 = r6;
    r30 = r7;
    r31 = r8;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80536568;
    }
}

loc_805364F8:
{
    r24 = r30;
    r23 = (r1 + 16);
    r25 = 0;
}

loc_80536504:
{
    r0 = MemoryInline::FlatRead8(r24);
    r5 = r31;
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r24 + 1));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r24 + 2));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r24 + 3));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    // inline leaf 0x80535E18 (21 guest instruction(s))
}

loc_inl1_0x80535E18:
{
    r8 = MemoryInline::FlatRead8(r4);
}

loc_inl1_0x80535E20:
{
    r7 = MemoryInline::FlatRead8((r4 + 1));
    r6 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(255))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80535E40:
{
    r0 = MemoryInline::FlatRead8((r4 + 3));
    r4 = 0x80810000u;
    r4 = (r4 + -32639);
    r0 = (r0 * r5);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (r4 + r0);
    r0 = (static_cast<int32_t>(r0) >> 7);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r0 = (r0 + r4);
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_80535E18;
}

loc_inl1_return:
{
}

loc_inl1_cont_80535E18:
{
    // end of inlined leaf 0x80535E18
    r3 = MemoryInline::FlatRead8((r1 + 12));
    r25 = (r25 + 1);
    r0 = MemoryInline::FlatRead8((r1 + 13));
}

loc_80536544:
{
    MemoryInline::FlatWrite8(r23, static_cast<uint8_t>(r3));
    r24 = (r24 + 4);
    r3 = MemoryInline::FlatRead8((r1 + 14));
    MemoryInline::FlatWrite8((r23 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 15));
    MemoryInline::FlatWrite8((r23 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r23 + 3), static_cast<uint8_t>(r0));
    r23 = (r23 + 4);
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(4))) {
        goto loc_80536504;
    }
}

loc_80536568:
{
    r3 = (0 - r30);
    r0 = (r1 + 16);
    r4 = (r3 | r30);
    r5 = r28;
    r7 = (static_cast<int32_t>(r4) >> 31);
    r3 = r26;
    r4 = r27;
    r6 = r29;
    r7 = (r0 & r7);
    ctx->lr = 0x80536590u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x80535F50u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r11 = (r1 + 80);
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_805364B0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805364B0_ra38_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805364B0 func_805364B0 preserves=true fpr_mask=0x00000000
