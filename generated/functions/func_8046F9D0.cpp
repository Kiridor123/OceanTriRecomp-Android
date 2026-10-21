#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CCCC0(CpuContext* ctx);
extern "C" uint64_t func_804CCCC0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8046F9D0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_31 = 0;
    uint32_t r0_rot_32 = 0;
    uint32_t r0_rot_33 = 0;
    uint32_t r0_rot_34 = 0;
    uint32_t r0_rot_35 = 0;
    uint32_t r0_rot_36 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8046F9D0u);
    goto loc_8046F9D0;

loc_8046F9D0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 7811;
    r30 = r5;
    r29 = r4;
    r28 = r3;
    MemoryInline::FlatWrite32((r13 + -16108), r0);
    r31 = MemoryInline::FlatRead32((r13 + -16100));
    // inline leaf 0x80470BF0 (3 guest instruction(s))
    r3 = 0x80700000u;
    r3 = (r3 + -9472);
    // end of inlined leaf 0x80470BF0
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_0 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32((r13 + -16104));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = MemoryInline::FlatRead32((r13 + -16108));
}

loc_8046FA54:
{
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r4);
    r0 = (r3 + 4126);
    MemoryInline::FlatWrite32((r13 + -16108), r0);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8046FA7C;
    }
}

loc_8046FA68:
{
}

loc_8046FA6C:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(1))) {
        goto loc_8046FAC4;
    }
}

loc_8046FA70:
{
}

loc_8046FA74:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(2))) {
        goto loc_8046FB0C;
    }
}

loc_8046FA78:
{
    goto loc_8046FB50;
}

loc_8046FA7C:
{
    r0 = 1;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(16));
    r0 = (r0_rot_3 & 65535);
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r28));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = MemoryInline::FlatRead32((r13 + -16108));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r5);
    r0 = (r3 + 733);
    MemoryInline::FlatWrite32((r13 + -16108), r0);
    goto loc_8046FB50;
}

loc_8046FAC4:
{
    r0 = 2;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & 65535);
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r28));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = MemoryInline::FlatRead32((r13 + -16108));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r5);
    r0 = (r3 + 829);
    MemoryInline::FlatWrite32((r13 + -16108), r0);
    goto loc_8046FB50;
}

loc_8046FB0C:
{
    r0 = 3;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 65535);
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r28));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = MemoryInline::FlatRead32((r13 + -16108));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r5);
    r0 = (r3 + 925);
    MemoryInline::FlatWrite32((r13 + -16108), r0);
}

loc_8046FB50:
{
    // inline leaf 0x804718A0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -15944));
    // end of inlined leaf 0x804718A0
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r0 = 4;
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_5 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r13 + -16104));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
}

loc_8046FB9C:
{
    r5 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r5);
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8046FECC;
    }
}

loc_8046FBA8:
{
    r3 = (r1 + 8);
    // inline leaf 0x8046F250 (13 guest instruction(s))
}

loc_inl2_0x8046F250:
{
    r0 = MemoryInline::FlatRead32((r13 + -16144));
}

loc_inl2_0x8046F258:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x8046F278;
    }
}

loc_inl2_0x8046F25C:
{
    r0 = MemoryInline::FlatRead32((r13 + -16192));
    r4 = 0x80700000u;
    r4 = (r4 + -25984);
    r0 = (r0 * 1536);
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam32(r3, r0);
    goto loc_inl2_cont_8046F250;
}

loc_inl2_0x8046F278:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
}

loc_inl2_cont_8046F250:
{
    // end of inlined leaf 0x8046F250
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_8046FBB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046FD38;
    }
}

loc_8046FBBC:
{
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = 8;
    r3 = (r1 + 8);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead16((r13 + -16124));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r4);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_6 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r5);
    // inline leaf 0x8046F2B0 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -16192));
    r4 = 0x80700000u;
    r4 = (r4 + -25984);
    r0 = (r0 * 1536);
    r4 = (r4 + r0);
    r0 = (r4 + 1152);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x8046F2B0
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_7 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r5);
    // inline leaf 0x8046F290 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -16196));
    r4 = 0x80700000u;
    r4 = (r4 + -25984);
    r0 = (r0 * 1536);
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x8046F290
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_8 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r5);
    // inline leaf 0x8046F2D0 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -16196));
    r4 = 0x80700000u;
    r4 = (r4 + -25984);
    r0 = (r0 * 1536);
    r4 = (r4 + r0);
    r0 = (r4 + 384);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x8046F2D0
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_9 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r5);
    // inline leaf 0x8046F2F0 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -16196));
    r4 = 0x80700000u;
    r4 = (r4 + -25984);
    r0 = (r0 * 1536);
    r4 = (r4 + r0);
    r0 = (r4 + 768);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x8046F2F0
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_10 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r5);
    // inline leaf 0x8046F310 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -16196));
    r4 = 0x80700000u;
    r4 = (r4 + -25984);
    r0 = (r0 * 1536);
    r4 = (r4 + r0);
    r0 = (r4 + 1152);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x8046F310
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_11 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = MemoryInline::FlatRead32((r13 + -16108));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r5);
    r0 = (r3 + 3036);
    MemoryInline::FlatWrite32((r13 + -16108), r0);
}

loc_8046FD38:
{
    r3 = (r1 + 8);
    // inline leaf 0x8046F330 (13 guest instruction(s))
}

loc_inl8_0x8046F330:
{
    r0 = MemoryInline::FlatRead32((r13 + -16148));
}

loc_inl8_0x8046F338:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl8_0x8046F358;
    }
}

loc_inl8_0x8046F33C:
{
    r0 = MemoryInline::FlatRead32((r13 + -16192));
    r4 = 0x80700000u;
    r4 = (r4 + -21376);
    r0 = (r0 * 1536);
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam32(r3, r0);
    goto loc_inl8_cont_8046F330;
}

loc_inl8_0x8046F358:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
}

loc_inl8_cont_8046F330:
{
    // end of inlined leaf 0x8046F330
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_8046FD48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804700DC;
    }
}

loc_8046FD4C:
{
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = 9;
    r3 = (r1 + 8);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead16((r13 + -16126));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r4);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_13 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r5);
    // inline leaf 0x8046F390 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -16192));
    r4 = 0x80700000u;
    r4 = (r4 + -21376);
    r0 = (r0 * 1536);
    r4 = (r4 + r0);
    r0 = (r4 + 1152);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x8046F390
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_14 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r5);
    // inline leaf 0x8046F370 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -16196));
    r4 = 0x80700000u;
    r4 = (r4 + -21376);
    r0 = (r0 * 1536);
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x8046F370
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_15 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r5);
    // inline leaf 0x8046F3B0 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -16196));
    r4 = 0x80700000u;
    r4 = (r4 + -21376);
    r0 = (r0 * 1536);
    r4 = (r4 + r0);
    r0 = (r4 + 384);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x8046F3B0
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_16 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r5);
    // inline leaf 0x8046F3D0 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -16196));
    r4 = 0x80700000u;
    r4 = (r4 + -21376);
    r0 = (r0 * 1536);
    r4 = (r4 + r0);
    r0 = (r4 + 768);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x8046F3D0
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_17 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r5);
    // inline leaf 0x8046F3F0 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -16196));
    r4 = 0x80700000u;
    r4 = (r4 + -21376);
    r0 = (r0 * 1536);
    r4 = (r4 + r0);
    r0 = (r4 + 1152);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x8046F3F0
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_18 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = MemoryInline::FlatRead32((r13 + -16108));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r5);
    r0 = (r3 + 3036);
    MemoryInline::FlatWrite32((r13 + -16108), r0);
    goto loc_804700DC;
}

loc_8046FECC:
{
    r3 = (r1 + 8);
    // inline leaf 0x8046F250 (13 guest instruction(s))
}

loc_inl14_0x8046F250:
{
    r0 = MemoryInline::FlatRead32((r13 + -16144));
}

loc_inl14_0x8046F258:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl14_0x8046F278;
    }
}

loc_inl14_0x8046F25C:
{
    r0 = MemoryInline::FlatRead32((r13 + -16192));
    r4 = 0x80700000u;
    r4 = (r4 + -25984);
    r0 = (r0 * 1536);
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam32(r3, r0);
    goto loc_inl14_cont_8046F250;
}

loc_inl14_0x8046F278:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
}

loc_inl14_cont_8046F250:
{
    // end of inlined leaf 0x8046F250
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_8046FEDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046FF7C;
    }
}

loc_8046FEE0:
{
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = 5;
    r3 = (r1 + 8);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead16((r13 + -16124));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r4);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_19 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r5);
    // inline leaf 0x8046F290 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -16196));
    r4 = 0x80700000u;
    r4 = (r4 + -25984);
    r0 = (r0 * 1536);
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x8046F290
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_20 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = MemoryInline::FlatRead32((r13 + -16108));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r5);
    r0 = (r3 + 2235);
    MemoryInline::FlatWrite32((r13 + -16108), r0);
}

loc_8046FF7C:
{
    r3 = (r1 + 8);
    // inline leaf 0x8046F330 (13 guest instruction(s))
}

loc_inl16_0x8046F330:
{
    r0 = MemoryInline::FlatRead32((r13 + -16148));
}

loc_inl16_0x8046F338:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl16_0x8046F358;
    }
}

loc_inl16_0x8046F33C:
{
    r0 = MemoryInline::FlatRead32((r13 + -16192));
    r4 = 0x80700000u;
    r4 = (r4 + -21376);
    r0 = (r0 * 1536);
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam32(r3, r0);
    goto loc_inl16_cont_8046F330;
}

loc_inl16_0x8046F358:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
}

loc_inl16_cont_8046F330:
{
    // end of inlined leaf 0x8046F330
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_8046FF8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8047002C;
    }
}

loc_8046FF90:
{
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = 6;
    r3 = (r1 + 8);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead16((r13 + -16126));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r4);
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_22 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r5);
    // inline leaf 0x8046F370 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -16196));
    r4 = 0x80700000u;
    r4 = (r4 + -21376);
    r0 = (r0 * 1536);
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x8046F370
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_23 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = MemoryInline::FlatRead32((r13 + -16108));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r5);
    r0 = (r3 + 2235);
    MemoryInline::FlatWrite32((r13 + -16108), r0);
}

loc_8047002C:
{
    r3 = (r1 + 8);
    // inline leaf 0x8046F410 (13 guest instruction(s))
}

loc_inl18_0x8046F410:
{
    r0 = MemoryInline::FlatRead32((r13 + -16152));
}

loc_inl18_0x8046F418:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl18_0x8046F438;
    }
}

loc_inl18_0x8046F41C:
{
    r0 = MemoryInline::FlatRead32((r13 + -16192));
    r4 = 0x80700000u;
    r4 = (r4 + -16768);
    r0 = (r0 * 1152);
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam32(r3, r0);
    goto loc_inl18_cont_8046F410;
}

loc_inl18_0x8046F438:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
}

loc_inl18_cont_8046F410:
{
    // end of inlined leaf 0x8046F410
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_8047003C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804700DC;
    }
}

loc_80470040:
{
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = 7;
    r3 = (r1 + 8);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead16((r13 + -16128));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r4);
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_25 & 65535);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r5);
    // inline leaf 0x8046F450 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -16196));
    r4 = 0x80700000u;
    r4 = (r4 + -16768);
    r0 = (r0 * 1152);
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x8046F450
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_26 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = MemoryInline::FlatRead32((r13 + -16108));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r5);
    r0 = (r3 + 2235);
    MemoryInline::FlatWrite32((r13 + -16108), r0);
}

loc_804700DC:
{
    r0 = MemoryInline::FlatRead32((r13 + -16112));
}

loc_804700E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80470164;
    }
}

loc_804700E8:
{
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = 10;
    r3 = 65536;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r0 = (r3 + -32768);
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead16((r13 + -16120));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead32((r13 + -16116));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_28 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = MemoryInline::FlatRead32((r13 + -16116));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = MemoryInline::FlatRead32((r13 + -16108));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r5);
    r0 = (r3 + 1850);
    MemoryInline::FlatWrite32((r13 + -16108), r0);
}

loc_80470164:
{
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r0 = 13;
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_30 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 4));
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_31 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 4));
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 8));
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_32 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 8));
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r30 + 12));
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_33 & 65535);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r30 + 12));
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r13 + -16104));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = MemoryInline::FlatRead32((r13 + -16108));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80470230:
{
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r4);
    r0 = (r3 + 409);
    MemoryInline::FlatWrite32((r13 + -16108), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804702C4;
    }
}

loc_80470244:
{
    r0 = 12;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(16));
    r3 = (r3_rot_0 & 65535);
    r5 = MemoryInline::FlatRead32((r13 + -16100));
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(16));
    r0 = (r0_rot_34 & 65535);
    r4 = MemoryInline::FlatRead16((r13 + -16122));
    r5 = (r5 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r5);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r4));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r28));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r29));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = MemoryInline::FlatRead32((r13 + -16108));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r5);
    r0 = (r3 + 1195);
    MemoryInline::FlatWrite32((r13 + -16108), r0);
    goto loc_80470340;
}

loc_804702C4:
{
    r0 = 11;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(16));
    r3 = (r3_rot_1 & 65535);
    r5 = MemoryInline::FlatRead32((r13 + -16100));
    r0_rot_35 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(16));
    r0 = (r0_rot_35 & 65535);
    r4 = MemoryInline::FlatRead16((r13 + -16122));
    r5 = (r5 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r5);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r4));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r4 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r28));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r3);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r29));
    r4 = MemoryInline::FlatRead32((r13 + -16100));
    r3 = MemoryInline::FlatRead32((r13 + -16108));
    r5 = (r4 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r5);
    r0 = (r3 + 1172);
    MemoryInline::FlatWrite32((r13 + -16108), r0);
}

loc_80470340:
{
    r0 = 14;
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    r3 = r31;
    r4 = 128;
    r5 = MemoryInline::FlatRead32((r13 + -16100));
    r6 = MemoryInline::FlatRead32((r13 + -16108));
    r5 = (r5 + 2);
    MemoryInline::FlatWrite32((r13 + -16100), r5);
    r0 = (r6 + 30);
    MemoryInline::FlatWrite32((r13 + -16108), r0);
    if constexpr (KnownRegArgsCpuCall<0x804CCCC0u>(&func_804CCCC0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804CCCC0_95FA = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_95FA);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_95FA >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8046F9D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046F9D0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8046F9D0 func_8046F9D0 preserves=true fpr_mask=0x00000000
