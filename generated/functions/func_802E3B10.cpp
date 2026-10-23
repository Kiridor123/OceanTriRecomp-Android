#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005399C(CpuContext* ctx);
extern "C" uint32_t func_8005399C_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_80053B30(CpuContext* ctx);
extern "C" uint64_t func_80053B30_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8005432C(CpuContext* ctx);
extern "C" uint64_t func_8005432C_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_8005399C_statefree(uint32_t);
extern "C" void func_8005399C_statefree_v0(uint32_t);

extern "C" uint64_t func_802E3B10_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lhax_802E3C38_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_802E3B10;

loc_802E3B10:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    r11 = (r1 + 112);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r24 = r3;
    r27 = r6;
    r28 = r7;
    r25 = (r4 + -8);
    r26 = (r5 & 65520);
}

loc_802E3B3C:
{
    if ((static_cast<uint32_t>(r26) >= static_cast<uint32_t>(96))) {
        goto loc_802E3B44;
    }
}

loc_802E3B40:
{
    r26 = 96;
}

loc_802E3B44:
{
    r0 = (r6 & 255);
}

loc_802E3B4C:
{
    r31 = 24;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802E3B58;
    }
}

loc_802E3B54:
{
    r31 = 22;
}

loc_802E3B58:
{
    r0 = (r26 - r31);
    r29 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + r31);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r1 + 36), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r1 + 24), static_cast<uint16_t>(r0));
    r0 = (r3 + r29);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r1 + 32), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r1 + 28), static_cast<uint16_t>(r0));
    r0 = (r25 + 20);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r1 + 30), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r1 + 26), static_cast<uint16_t>(r0));
    r0 = (r25 + 44);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r1 + 38), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r1 + 34), static_cast<uint16_t>(r0));
    r3 = 3;
    r4 = 65536;
    r4 = (r4 + -1);
    r4 = (r4 & 65535);
    // inline leaf 0x80053870 (21 guest instruction(s))
}

loc_inl1_0x80053870:
{
    r6 = 0x80670000u;
    r5 = (r6 + -12896);
    MemoryInline::FlatWriteRam8((r5 + 4), static_cast<uint8_t>(r3));
    r0 = 0;
    MemoryInline::FlatWriteRam32((r6 + -12896), r0);
    r0 = (r4 & 65535);
}

loc_inl1_0x8005388C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_inl1_0x800538AC;
    }
}

loc_inl1_0x80053890:
{
    r0 = (r3 & 255);
    r3 = (r13 + -32540);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_0);
    MemoryInline::FlatWriteRam16((r5 + 6), static_cast<uint16_t>(r0));
}

loc_inl1_0x800538A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800538B0;
    }
}

loc_inl1_0x800538A8:
{
    goto loc_inl1_cont_80053870;
}

loc_inl1_0x800538AC:
{
    MemoryInline::FlatWriteRam16((r5 + 6), static_cast<uint16_t>(r4));
}

loc_inl1_0x800538B0:
{
    r0 = 6;
    r3 = 0x80670000u;
    r3 = (r3 + -12896);
    MemoryInline::FlatWriteRam8((r3 + 5), static_cast<uint8_t>(r0));
}

loc_inl1_cont_80053870:
{
    // end of inlined leaf 0x80053870
    r3 = (r1 + 24);
    // inline leaf 0x800538C4 (7 guest instruction(s))
    r4 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r4 + -12896));
    r0 = (r0 | 4096);
    MemoryInline::FlatWriteRam32((r4 + -12896), r0);
    r4 = (r4 + -12896);
    MemoryInline::FlatWriteRam32((r4 + 8), r3);
    // end of inlined leaf 0x800538C4
    r0 = (r28 & 255);
}

loc_802E3BC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802E3BD4;
    }
}

loc_802E3BC8:
{
    r3 = 505151488;
    r30 = (r3 + 3506);
    goto loc_802E3C60;
}

loc_802E3BD4:
{
}

loc_802E3BD8:
{
    r3 = 169082880;
    r30 = (r3 + 2047);
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802E3BE8;
    }
}

loc_802E3BE4:
{
    r30 = -1;
}

loc_802E3BE8:
{
    r0 = (r28 & 255);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r3 = 0x805D0000u;
    r4 = (r3 + 24552);
    r3 = (r4 + r5);
    r6 = MemoryInline::FlatRead16((r3 + 2));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r0 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_2, 12u, (r1 + 20), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 0u, (r1 + 8), static_cast<uint16_t>(r0));
    r0 = (r29 - r31);
    r0 = (r6 * r0);
    r3 = 715849728;
    r3 = (r3 + -21845);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 2);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_2, 8u, (r1 + 16), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 4u, (r1 + 12), static_cast<uint16_t>(r0));
    addr_lhax_802E3C38_loc_0 = (r4 + r5);
    r0 = MemoryInline::FlatRead16(addr_lhax_802E3C38_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_2, 6u, (r1 + 14), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 2u, (r1 + 10), static_cast<uint16_t>(r0));
    r0 = (r0 + r6);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_2, 14u, (r1 + 22), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 10u, (r1 + 18), static_cast<uint16_t>(r0));
    r3 = 6;
    r4 = (r1 + 8);
    ctx->lr = 0x802E3C60u;
    if constexpr (KnownRegArgsCpuCall<0x80053B30u>(&func_80053B30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80053B30_21BA = func_80053B30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80053B30_21BA);
        r4 = static_cast<uint32_t>(regargs_result_80053B30_21BA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80053B30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_802E3C60:
{
    r3 = r30;
    // inline leaf 0x8005399C (10 guest instruction(s))
    r4 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r4 + -12896));
    r0 = (r0 | 131072);
    r0 = (r0 | 8192);
    MemoryInline::FlatWriteRam32((r4 + -12896), r0);
    r4 = (r4 + -12896);
    MemoryInline::FlatWriteRam32((r4 + 68), r3);
    r0 = (r4 + 68);
    MemoryInline::FlatWriteRam32((r4 + 12), r0);
    // end of inlined leaf 0x8005399C
    ctx->lr = 0x802E3C6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x8005480Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r3 = (r24 + r0);
    r0 = (r3 + -16);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r24 + r26);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 56u, false, true);
    MemoryInline::WriteResolved16(guest_range_3, 4u, (r1 + 28), static_cast<uint16_t>(r24));
    MemoryInline::WriteResolved16(guest_range_3, 0u, (r1 + 24), static_cast<uint16_t>(r24));
    r0 = (r24 + 32);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_3, 12u, (r1 + 36), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_3, 8u, (r1 + 32), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_3, 20u, (r1 + 44), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_3, 16u, (r1 + 40), static_cast<uint16_t>(r3));
    r0 = (r3 + 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_3, 28u, (r1 + 52), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_3, 24u, (r1 + 48), static_cast<uint16_t>(r0));
    r0 = (r3 + 32);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_3, 36u, (r1 + 60), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_3, 32u, (r1 + 56), static_cast<uint16_t>(r0));
    r0 = (r4 + -32);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_3, 44u, (r1 + 68), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_3, 40u, (r1 + 64), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_3, 52u, (r1 + 76), static_cast<uint16_t>(r4));
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 48u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r25)))) {
        MemoryInline::WriteResolved16(guest_range_3, 48u, (r1 + 72), r4);
        MemoryInline::WriteResolved16(guest_range_3, 50u, (r1 + 74), r25);
    }
    MemoryInline::WriteResolved16(guest_range_3, 42u, (r1 + 66), static_cast<uint16_t>(r25));
    MemoryInline::WriteResolved16(guest_range_3, 34u, (r1 + 58), static_cast<uint16_t>(r25));
    MemoryInline::WriteResolved16(guest_range_3, 26u, (r1 + 50), static_cast<uint16_t>(r25));
    MemoryInline::WriteResolved16(guest_range_3, 18u, (r1 + 42), static_cast<uint16_t>(r25));
    MemoryInline::WriteResolved16(guest_range_3, 10u, (r1 + 34), static_cast<uint16_t>(r25));
    MemoryInline::WriteResolved16(guest_range_3, 2u, (r1 + 26), static_cast<uint16_t>(r25));
    r0 = (r25 + 64);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_3, 54u, (r1 + 78), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_3, 46u, (r1 + 70), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_3, 38u, (r1 + 62), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_3, 30u, (r1 + 54), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_3, 22u, (r1 + 46), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_3, 14u, (r1 + 38), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_3, 6u, (r1 + 30), static_cast<uint16_t>(r0));
    r3 = 5;
    r4 = 14;
    // inline leaf 0x80053870 (21 guest instruction(s))
}

loc_inl4_0x80053870:
{
    r6 = 0x80670000u;
    r5 = (r6 + -12896);
    MemoryInline::FlatWriteRam8((r5 + 4), static_cast<uint8_t>(r3));
    r0 = 0;
    MemoryInline::FlatWriteRam32((r6 + -12896), r0);
    r0 = (r4 & 65535);
}

loc_inl4_0x8005388C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_inl4_0x800538AC;
    }
}

loc_inl4_0x80053890:
{
    r0 = (r3 & 255);
    r3 = (r13 + -32540);
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_4);
    MemoryInline::FlatWriteRam16((r5 + 6), static_cast<uint16_t>(r0));
}

loc_inl4_0x800538A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x800538B0;
    }
}

loc_inl4_0x800538A8:
{
    goto loc_inl4_cont_80053870;
}

loc_inl4_0x800538AC:
{
    MemoryInline::FlatWriteRam16((r5 + 6), static_cast<uint16_t>(r4));
}

loc_inl4_0x800538B0:
{
    r0 = 6;
    r3 = 0x80670000u;
    r3 = (r3 + -12896);
    MemoryInline::FlatWriteRam8((r3 + 5), static_cast<uint8_t>(r0));
}

loc_inl4_cont_80053870:
{
    // end of inlined leaf 0x80053870
    r3 = (r1 + 24);
    // inline leaf 0x800538C4 (7 guest instruction(s))
    r4 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r4 + -12896));
    r0 = (r0 | 4096);
    MemoryInline::FlatWriteRam32((r4 + -12896), r0);
    r4 = (r4 + -12896);
    MemoryInline::FlatWriteRam32((r4 + 8), r3);
    // end of inlined leaf 0x800538C4
    r3 = -1;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8005399Cu) && KnownTranslatedCpuCall<0x8005399Cu>::kAvailable && !KnownTranslatedCpuCall<0x8005399Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8005399Cu>()) {
        func_8005399C_statefree_v0(r3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8005399Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
    }
    r3 = 5;
    r4 = 0x805D0000u;
    r4 = (r4 + 25128);
    ctx->lr = 0x802E3D48u;
    if constexpr (KnownRegArgsCpuCall<0x80053B30u>(&func_80053B30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80053B30_3F9F = func_80053B30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80053B30_3F9F);
        r4 = static_cast<uint32_t>(regargs_result_80053B30_3F9F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80053B30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r27 & 255);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r4 = (r4_rot_0 & -8);
    r3 = 0x805D0000u;
    r0 = (r3 + 25184);
    r3 = (r0 + r4);
    ctx->lr = 0x802E3D60u;
    if constexpr (KnownRegArgsCpuCall<0x8005432Cu>(&func_8005432C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_8005432C_43C5 = func_8005432C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8005432C_43C5);
        r4 = static_cast<uint32_t>(regargs_result_8005432C_43C5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8005432Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    ctx->lr = 0x802E3D64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x8005480Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r11 = (r1 + 112);
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802E3B10(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802E3B10_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x8000FFFF fpr_write=0x8000FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802E3B10 func_802E3B10 preserves=true fpr_mask=0x00000000
