#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803062E0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lfsx_803063B0_loc_0 = 0;
    uint32_t addr_lfsx_803063D0_loc_0 = 0;
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
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r24_addr_0 = 0;
    uint32_t r24_addr_1 = 0;
    uint32_t r24_addr_2 = 0;
    uint32_t r24_addr_3 = 0;
    uint32_t r24_addr_4 = 0;
    uint32_t r24_addr_5 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    goto loc_803062E0;

loc_803062E0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r22 = r3;
    r23 = MemoryInline::FlatRead32((r3 + 56));
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r3 + 16), r0);
}

loc_8030630C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8030655C;
    }
}

loc_80306310:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r3 + 12), r0);
}

loc_80306320:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8030633C;
    }
}

loc_80306324:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8((r3 + 5));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    goto loc_8030655C;
}

loc_8030633C:
{
    r0 = MemoryInline::FlatRead8((r23 + 228));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r23 + 229));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r23 + 230));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 8));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r13 + -25312);
    r3_addr_1 = (r3 + r0);
    r24 = MemoryInline::FlatRead32(r3_addr_1);
    r25 = 0;
    r28 = (r23 + 12);
    r27 = r23;
    r26 = (r23 + 8);
    r30 = (r13 + -25376);
    r29 = (r13 + -25300);
    r31 = (r13 + -25368);
    r21 = 0;
    r20 = 1;
    goto loc_80306518;
}

loc_8030638C:
{
    r5 = MemoryInline::FlatRead8((r22 + 2));
    r29_addr_2 = (r29 + r5);
    r0 = MemoryInline::FlatRead8(r29_addr_2);
}

loc_80306398:
{
    if ((static_cast<int32_t>(r25) >= static_cast<int32_t>(r0))) {
        goto loc_803063BC;
    }
}

loc_8030639C:
{
    r3 = r28;
    r0 = MemoryInline::FlatRead8((r22 + 8));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r30_addr_2 = (r30 + r0);
    r4 = MemoryInline::FlatRead32(r30_addr_2);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    addr_lfsx_803063B0_loc_0 = (r4 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_803063B0_loc_0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051454u>(ctx);
    goto loc_803063D8;
}

loc_803063BC:
{
    r3 = r28;
    r0 = MemoryInline::FlatRead8((r22 + 8));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r31_addr_2 = (r31 + r0);
    r4 = MemoryInline::FlatRead32(r31_addr_2);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    addr_lfsx_803063D0_loc_0 = (r4 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_803063D0_loc_0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051454u>(ctx);
}

loc_803063D8:
{
    f1.d = MemoryInline::FlatReadFloat32((r27 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r23 + 208));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r27 + 16), f0.d);
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r3 = (r3 + 4);
    r4 = r28;
    ctx->lr = 0x803063F8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl1_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
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
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_9 & 2147483647);
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

loc_inl1_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r3 = (r3 & 65535);
    r0 = MemoryInline::FlatRead8((r22 + 2));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r24_addr_2 = (r24 + r0);
    r0 = MemoryInline::FlatRead16(r24_addr_2);
    r4 = (r0 & r3);
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r0 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 40), r0);
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl2_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl2_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CEF40;
    }
}

loc_inl2_0x800CEF3C:
{
    r0 = 1;
}

loc_inl2_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_12 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_3 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl2_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r3 = (r3 & 65535);
    r0 = MemoryInline::FlatRead8((r22 + 2));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_13 & -2);
    r24_addr_3 = (r24 + r0);
    r0 = MemoryInline::FlatRead16(r24_addr_3);
    r4 = (r0 & r3);
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r0 = MemoryInline::FlatRead32((r3 + 44));
    r0 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 44), r0);
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl3_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_14 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl3_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800CEF40;
    }
}

loc_inl3_0x800CEF3C:
{
    r0 = 1;
}

loc_inl3_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_15 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_4 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl3_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r3 = (r3 & 65535);
    r0 = MemoryInline::FlatRead8((r22 + 2));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_16 & -2);
    r24_addr_4 = (r24 + r0);
    r0 = MemoryInline::FlatRead16(r24_addr_4);
    r4 = (r0 & r3);
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r0 = MemoryInline::FlatRead32((r3 + 48));
    r0 = (r0 + r4);
    MemoryInline::FlatWrite32((r3 + 48), r0);
    r0 = MemoryInline::FlatRead8((r27 + 4));
}

loc_80306484:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80306494;
    }
}

loc_80306488:
{
}

loc_8030648C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803064A8;
    }
}

loc_80306490:
{
    goto loc_803064C8;
}

loc_80306494:
{
    r0 = MemoryInline::FlatRead32((r22 + 12));
}

loc_8030649C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(10))) {
        goto loc_803064C8;
    }
}

loc_803064A0:
{
    MemoryInline::FlatWrite8((r27 + 4), static_cast<uint8_t>(r20));
    goto loc_803064C8;
}

loc_803064A8:
{
    r0 = MemoryInline::FlatRead32((r22 + 12));
}

loc_803064B0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803064C4;
    }
}

loc_803064B4:
{
    r3 = MemoryInline::FlatRead8((r27 + 5));
    r0 = (r3 + -25);
    MemoryInline::FlatWrite8((r27 + 5), static_cast<uint8_t>(r0));
    goto loc_803064C8;
}

loc_803064C4:
{
    MemoryInline::FlatWrite8((r27 + 5), static_cast<uint8_t>(r21));
}

loc_803064C8:
{
    r0 = MemoryInline::FlatRead8((r27 + 5));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r4 = 0;
    r5 = 3;
    r6 = (r1 + 12);
    ctx->lr = 0x803064E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x800E2DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r4 = 0;
    ctx->lr = 0x803064F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x800E078Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r3 = r22;
    r4 = r26;
    r5 = 2;
    r6 = 1;
    r7 = 0;
    ctx->lr = 0x80306508u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r28 = (r28 + 24);
    r27 = (r27 + 24);
    r26 = (r26 + 24);
    r25 = (r25 + 1);
}

loc_80306518:
{
    r0 = MemoryInline::FlatRead32(r23);
}

loc_80306520:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r0))) {
        goto loc_8030638C;
    }
}

loc_80306524:
{
    r3 = MemoryInline::FlatRead32((r23 + 200));
    ctx->lr = 0x8030652Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x800F9984u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r0 = MemoryInline::FlatRead32((r23 + 228));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead32((r23 + 200));
    r4 = (r22 + 24);
    r5 = (r1 + 8);
    ctx->lr = 0x80306544u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r3 = r22;
    r4 = (r23 + 200);
    r5 = 1;
    r6 = 1;
    r7 = 0;
    ctx->lr = 0x8030655Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
}

loc_8030655C:
{
    r11 = (r1 + 64);
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803062E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803062E0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803062E0 func_803062E0 preserves=true fpr_mask=0x00000000
