#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803446BC(CpuContext* ctx);
extern "C" uint64_t func_803446BC_ra38_8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" void func_80344F00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r27_addr_4 = 0;
    uint32_t r27_addr_5 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r28_addr_4 = 0;
    uint32_t r28_addr_5 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80344F00u);
    goto loc_80344F00;

loc_80344F00:
{
    MemoryInline::FlatWriteRam32((r1 + -208), r1);
    r1 = (r1 + -208);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    r11 = (r1 + 208);
    // inline leaf 0x80457464 (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    // end of inlined leaf 0x80457464
    r25 = 0x806C0000u;
    r21 = (r25 + 5408);
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
    r19 = r3;
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
    r18 = (r3 & 65535);
    r26 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 10u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r1 + 8), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r1 + 9), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r1 + 10), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r1 + 11), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r1 + 12), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r1 + 13), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r1 + 14), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r1 + 15), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r1 + 16), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r1 + 17), static_cast<uint8_t>(r26));
    r23 = 0;
    r24 = (r1 + 8);
    r30 = 1;
    r31 = r24;
    r28 = r24;
    r27 = (r1 + 24);
    r29 = 0x806A0000u;
}

loc_80344F7C:
{
    r0 = MemoryInline::FlatRead8(r24);
}

loc_80344F84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80345114;
    }
}

loc_80344F88:
{
    MemoryInline::FlatWrite8(r24, static_cast<uint8_t>(r30));
    r0 = MemoryInline::FlatRead8(r21);
}

loc_80344F94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8034515C;
    }
}

loc_80344F98:
{
    r0 = MemoryInline::FlatRead8((r21 + 22));
}

loc_80344FA0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8034515C;
    }
}

loc_80344FA4:
{
    MemoryInline::FlatWrite8((r21 + 14), static_cast<uint8_t>(r26));
    r20 = r19;
    r22 = 0;
    goto loc_80345044;
}

loc_80344FB4:
{
    r3 = r21;
    r4 = r20;
    ctx->lr = 0x80344FC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x803443B4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f3 = ctx->fpr[3];
    ctr = ctx->ctr;
}

loc_80344FC4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8034503C;
    }
}

loc_80344FC8:
{
    r0 = MemoryInline::FlatRead8((r21 + 14));
    MemoryInline::FlatWrite8((r20 + 1133), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r21 + 14));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r27_addr_3 = (r27 + r0);
    MemoryInline::FlatWrite32(r27_addr_3, r20);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r21 + 14), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8((r20 + 1132));
    r0 = MemoryInline::FlatRead8((r21 + 1));
}

loc_80344FF0:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_8034503C;
    }
}

loc_80344FF4:
{
    r5 = (r21 + 60);
    r6 = (r22 + 1);
    r3 = MemoryInline::FlatRead8(r21);
    r0 = (10 - r6);
    ctr = r0;
}

loc_8034500C:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(10))) {
        goto loc_8034503C;
    }
}

loc_80345010:
{
    r0 = MemoryInline::FlatRead8(r5);
}

loc_80345018:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80345030;
    }
}

loc_8034501C:
{
    r0 = MemoryInline::FlatRead8((r5 + 1));
}

loc_80345024:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80345030;
    }
}

loc_80345028:
{
    r28_addr_3 = (r28 + r6);
    MemoryInline::FlatWrite8(r28_addr_3, static_cast<uint8_t>(r30));
    goto loc_8034503C;
}

loc_80345030:
{
    r6 = (r6 + 1);
    r5 = (r5 + 60);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80345010;
    }
}

loc_8034503C:
{
    r22 = (r22 + 1);
    r20 = (r20 + 2840);
}

loc_80345044:
{
}

loc_80345048:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(r18))) {
        goto loc_80344FB4;
    }
}

loc_8034504C:
{
    r0 = MemoryInline::FlatRead8((r21 + 14));
}

loc_80345054:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80345080;
    }
}

loc_80345058:
{
    r4 = MemoryInline::FlatRead8((r21 + 23));
}

loc_80345060:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_80345070;
    }
}

loc_80345064:
{
    r3 = MemoryInline::FlatRead8(r21);
    ctx->lr = 0x8034506Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80343948u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f3 = ctx->fpr[3];
    ctr = ctx->ctr;
    goto loc_80345074;
}

loc_80345070:
{
    r3 = r21;
}

loc_80345074:
{
    r4 = (r1 + 24);
    r5 = MemoryInline::FlatRead8((r21 + 14));
    ctx->lr = 0x80345080u;
    if constexpr (KnownRegArgsCpuCall<0x803446BCu>(&func_803446BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_803446BC_2660 = func_803446BC_ra38_8_18_0(ctx, r3, r4, r5, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_803446BC_2660);
        r4 = static_cast<uint32_t>(regargs_result_803446BC_2660 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803446BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    }
}

loc_80345080:
{
    r20 = (r29 + 31072);
    r22 = 0;
}

loc_80345088:
{
    r3 = r21;
    r4 = r20;
    ctx->lr = 0x80345094u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x803444C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f3 = ctx->fpr[3];
    ctr = ctx->ctr;
}

loc_80345098:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80345100;
    }
}

loc_8034509C:
{
    r3 = MemoryInline::FlatRead8((r21 + 14));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r21 + 14), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8((r20 + 9));
    r0 = MemoryInline::FlatRead8((r21 + 1));
}

loc_803450B4:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_80345100;
    }
}

loc_803450B8:
{
    r5 = (r21 + 60);
    r6 = (r22 + 1);
    r3 = MemoryInline::FlatRead8(r21);
    r0 = (10 - r6);
    ctr = r0;
}

loc_803450D0:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(10))) {
        goto loc_80345100;
    }
}

loc_803450D4:
{
    r0 = MemoryInline::FlatRead8(r5);
}

loc_803450DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_803450F4;
    }
}

loc_803450E0:
{
    r0 = MemoryInline::FlatRead8((r5 + 1));
}

loc_803450E8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803450F4;
    }
}

loc_803450EC:
{
    r31_addr_3 = (r31 + r6);
    MemoryInline::FlatWrite8(r31_addr_3, static_cast<uint8_t>(r30));
    goto loc_80345100;
}

loc_803450F4:
{
    r6 = (r6 + 1);
    r5 = (r5 + 60);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803450D4;
    }
}

loc_80345100:
{
    r22 = (r22 + 1);
    r20 = (r20 + 68);
}

loc_8034510C:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(128))) {
        goto loc_80345088;
    }
}

loc_80345110:
{
    goto loc_8034515C;
}

loc_80345114:
{
    r4 = (r25 + 5408);
    ctr = r23;
}

loc_80345120:
{
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(0))) {
        goto loc_8034515C;
    }
}

loc_80345124:
{
    r3 = MemoryInline::FlatRead8(r21);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_80345130:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80345154;
    }
}

loc_80345134:
{
    r3 = MemoryInline::FlatRead8((r21 + 23));
}

loc_8034513C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(255))) {
        goto loc_80345154;
    }
}

loc_80345140:
{
    r0 = MemoryInline::FlatRead8((r4 + 23));
}

loc_80345148:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80345154;
    }
}

loc_8034514C:
{
    r0 = MemoryInline::FlatRead8((r4 + 14));
    MemoryInline::FlatWrite8((r21 + 14), static_cast<uint8_t>(r0));
}

loc_80345154:
{
    r4 = (r4 + 60);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80345124;
    }
}

loc_8034515C:
{
    r24 = (r24 + 1);
    r23 = (r23 + 1);
    r21 = (r21 + 60);
}

loc_8034516C:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(10))) {
        goto loc_80344F7C;
    }
}

loc_80345170:
{
    r11 = (r1 + 208);
    // inline leaf 0x804574B0 (15 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    // end of inlined leaf 0x804574B0
    r0 = MemoryInline::FlatRead32((r1 + 212));
    ctx->lr = r0;
    r1 = (r1 + 208);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80344F00 func_80344F00 preserves=true fpr_mask=0x00000000
