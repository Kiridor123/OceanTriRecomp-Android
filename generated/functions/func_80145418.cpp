#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80145418_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80145418u);
    goto loc_80145418;

loc_80145418:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r26 = 0;
    r3 = 3;
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
    r25 = r3;
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl2_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB50;
    }
}

loc_inl2_0x800CFB48:
{
    r3 = 0;
    goto loc_inl2_cont_800CFB34;
}

loc_inl2_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB64;
    }
}

loc_inl2_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFB34;
}

loc_inl2_0x800CFB64:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl2_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = 0x806A0000u;
    r31 = (r3 + 31072);
    r6 = 0;
    r4 = (r29 & 255);
    r0 = (r28 & 255);
    r5 = (r27 & 255);
    ctr = r7;
}

loc_80145478:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_80145500;
    }
}

loc_8014547C:
{
    r3 = MemoryInline::FlatRead8(r25);
}

loc_80145484:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801454F4;
    }
}

loc_80145488:
{
    r3 = MemoryInline::FlatRead8((r25 + 3));
}

loc_80145490:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r5))) {
        goto loc_801454F4;
    }
}

loc_80145494:
{
}

loc_80145498:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801454A8;
    }
}

loc_8014549C:
{
    r3 = MemoryInline::FlatRead8((r25 + 10));
}

loc_801454A4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801454F4;
    }
}

loc_801454A8:
{
    r3 = (r27 & 255);
    r4 = (r28 & 255);
    ctx->lr = 0x801454B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80343A38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    r3 = (r3 & 255);
    r4 = MemoryInline::FlatRead8((r25 + 1132));
    ctx->lr = 0x801454C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80343948u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
}

loc_801454C4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801454EC;
    }
}

loc_801454C8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r13 + -17288), static_cast<uint8_t>(r0));
    r3 = (r13 + -17288);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r28));
    r0 = MemoryInline::FlatRead8((r25 + 1132));
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
}

loc_801454EC:
{
    r26 = 1;
    goto loc_80145500;
}

loc_801454F4:
{
    r6 = (r6 + 1);
    r25 = (r25 + 2840);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8014547C;
    }
}

loc_80145500:
{
}

loc_80145504:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_801455A4;
    }
}

loc_80145508:
{
}

loc_8014550C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_801455A4;
    }
}

loc_80145510:
{
    r7 = 0;
    r5 = (r29 & 255);
    r4 = (r28 & 255);
    r6 = (r27 & 255);
    r0 = 128;
    ctr = r0;
}

loc_80145528:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_80145530:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80145598;
    }
}

loc_80145534:
{
    r3 = MemoryInline::FlatRead8((r31 + 2));
}

loc_8014553C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r6))) {
        goto loc_80145598;
    }
}

loc_80145540:
{
}

loc_80145544:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80145554;
    }
}

loc_80145548:
{
    r0 = MemoryInline::FlatRead8((r31 + 3));
}

loc_80145550:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_80145598;
    }
}

loc_80145554:
{
    r4 = MemoryInline::FlatRead8((r31 + 3));
    ctx->lr = 0x8014555Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80343A38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    r3 = (r3 & 255);
    r4 = MemoryInline::FlatRead8((r31 + 9));
    ctx->lr = 0x80145568u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80343948u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
}

loc_8014556C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801455A4;
    }
}

loc_80145570:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r13 + -17288), static_cast<uint8_t>(r0));
    r3 = (r13 + -17288);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r28));
    r0 = MemoryInline::FlatRead8((r31 + 9));
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    goto loc_801455A4;
}

loc_80145598:
{
    r7 = (r7 + 1);
    r31 = (r31 + 68);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80145528;
    }
}

loc_801455A4:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80145418(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80145418_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80145418 func_80145418 preserves=true fpr_mask=0x00000000
