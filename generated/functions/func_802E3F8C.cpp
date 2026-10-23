#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80052654(CpuContext* ctx);
extern "C" uint64_t func_80052654_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80053B30(CpuContext* ctx);
extern "C" uint64_t func_80053B30_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802E3F8C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lhax_802E4024_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
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
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
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
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    goto loc_802E3F8C;

loc_802E3F8C:
{
    MemoryInline::FlatWriteRam32((r1 + -400), r1);
    r1 = (r1 + -400);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 404), r0);
    r11 = (r1 + 400);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r24 = r8;
    r25 = r9;
    r21 = (r3 + 12);
    r22 = (r4 + 8);
    r23 = (r5 + -24);
    r9 = (r6 + -16);
    r0 = (r7 & 255);
}

loc_802E3FC0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802E3FFC;
    }
}

loc_802E3FC4:
{
}

loc_802E3FC8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_802E3FD4;
    }
}

loc_802E3FCC:
{
    r3 = 505151488;
    r24 = (r3 + 3506);
}

loc_802E3FD4:
{
    r3 = (r1 + 20);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r21)));
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r22)));
    r6 = (r23 & 65535);
    r7 = (r9 & 65535);
    r8 = r24;
    ctx->lr = 0x802E3FF0u;
    if constexpr (KnownRegArgsCpuCall<0x80052654u>(&func_80052654)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_80052654_DA8 = func_80052654_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80052654_DA8);
        r4 = static_cast<uint32_t>(regargs_result_80052654_DA8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80052654u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r3 = (r1 + 20);
    ctx->lr = 0x802E3FF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x80053580u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    goto loc_802E411C;
}

loc_802E3FFC:
{
    r3 = (r1 + 192);
    r4 = (r1 + 32);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r7 = (r7_rot_1 & -4);
    r5 = 0x805D0000u;
    r6 = (r5 + 24552);
    r5 = (r6 + r7);
    r31 = MemoryInline::FlatRead16((r5 + 2));
    r31 = (r31 << 16);
    r31 = (static_cast<int32_t>(r31) >> 16);
    r0 = (r21 + r23);
    r30 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r29 = r22;
    addr_lhax_802E4024_loc_0 = (r6 + r7);
    r27 = MemoryInline::FlatRead16(addr_lhax_802E4024_loc_0);
    r27 = (r27 << 16);
    r27 = (static_cast<int32_t>(r27) >> 16);
    r0 = (r27 + r31);
    r26 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r28 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    r6 = 0;
}

loc_802E403C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_802E4048;
    }
}

loc_802E4040:
{
    r5 = 169082880;
    r24 = (r5 + 2047);
}

loc_802E4048:
{
    r20 = 0;
}

loc_802E404C:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
}

loc_802E4054:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_802E40D4;
    }
}

loc_802E4058:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_802E4060:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_802E4070;
    }
}

loc_802E4064:
{
    r31 = r28;
    r0 = (r27 + r28);
    r26 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802E4070:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_2, 12u, (r3 + 12), static_cast<uint16_t>(r21));
    MemoryInline::WriteResolved16(guest_range_2, 0u, r3, static_cast<uint16_t>(r21));
    MemoryInline::WriteResolved16(guest_range_2, 8u, (r3 + 8), static_cast<uint16_t>(r30));
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r29)))) {
        MemoryInline::WriteResolved16(guest_range_2, 4u, (r3 + 4), r30);
        MemoryInline::WriteResolved16(guest_range_2, 6u, (r3 + 6), r29);
    }
    MemoryInline::WriteResolved16(guest_range_2, 2u, (r3 + 2), static_cast<uint16_t>(r29));
    r29 = (r29 + r31);
    MemoryInline::WriteResolved16(guest_range_2, 14u, (r3 + 14), static_cast<uint16_t>(r29));
    MemoryInline::WriteResolved16(guest_range_2, 10u, (r3 + 10), static_cast<uint16_t>(r29));
    r3 = (r3 + 16);
    guest_range_3 = MemoryInline::ResolveRangeHost(r4, 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_3, 12u, (r4 + 12), static_cast<uint16_t>(r20));
    MemoryInline::WriteResolved16(guest_range_3, 0u, r4, static_cast<uint16_t>(r20));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r23)));
    MemoryInline::WriteResolved16(guest_range_3, 8u, (r4 + 8), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r27)))) {
        MemoryInline::WriteResolved16(guest_range_3, 4u, (r4 + 4), r0);
        MemoryInline::WriteResolved16(guest_range_3, 6u, (r4 + 6), r27);
    }
    MemoryInline::WriteResolved16(guest_range_3, 2u, (r4 + 2), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved16(guest_range_3, 14u, (r4 + 14), static_cast<uint16_t>(r26));
    MemoryInline::WriteResolved16(guest_range_3, 10u, (r4 + 10), static_cast<uint16_t>(r26));
    r4 = (r4 + 16);
    r28 = (r28 - r31);
    r6 = (r6 + 4);
    r0 = (r6 & 65535);
}

loc_802E40D0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(40))) {
        goto loc_802E404C;
    }
}

loc_802E40D4:
{
    r3 = 3;
    r4 = (r6 & 65535);
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
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_2);
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
    r3 = (r1 + 192);
    // inline leaf 0x800538C4 (7 guest instruction(s))
    r4 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r4 + -12896));
    r0 = (r0 | 4096);
    MemoryInline::FlatWriteRam32((r4 + -12896), r0);
    r4 = (r4 + -12896);
    MemoryInline::FlatWriteRam32((r4 + 8), r3);
    // end of inlined leaf 0x800538C4
    r3 = r24;
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
    r3 = 6;
    r4 = (r1 + 32);
    ctx->lr = 0x802E40FCu;
    if constexpr (KnownRegArgsCpuCall<0x80053B30u>(&func_80053B30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80053B30_2A8B = func_80053B30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80053B30_2A8B);
        r4 = static_cast<uint32_t>(regargs_result_80053B30_2A8B >> 32);
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
    ctx->lr = 0x802E4100u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x8005480Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
}

loc_802E4108:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802E411C;
    }
}

loc_802E410C:
{
    r3 = (r1 + 192);
    r4 = (r1 + 32);
    r6 = 0;
    goto loc_802E404C;
}

loc_802E411C:
{
    r0 = (r25 & 255);
}

loc_802E4124:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802E415C;
    }
}

loc_802E4128:
{
    r0 = (r24 & -256);
    r24 = (r0 | 178);
    r3 = (r1 + 8);
    r0 = (r21 + 1);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r22 + -16);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r6 = 175;
    r7 = 16;
    r8 = r24;
    ctx->lr = 0x802E4154u;
    if constexpr (KnownRegArgsCpuCall<0x80052654u>(&func_80052654)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_80052654_330E = func_80052654_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80052654_330E);
        r4 = static_cast<uint32_t>(regargs_result_80052654_330E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80052654u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r3 = (r1 + 8);
    ctx->lr = 0x802E415Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x80053580u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
}

loc_802E415C:
{
    r11 = (r1 + 400);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::FlatRead32((r1 + 404));
    ctx->lr = r0;
    r1 = (r1 + 400);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802E3F8C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802E3F8C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802E3F8C func_802E3F8C preserves=true fpr_mask=0x00000000
