#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80273218(CpuContext* ctx);
extern "C" uint64_t func_80273218_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027328C(CpuContext* ctx);
extern "C" uint64_t func_8027328C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803A3680(CpuContext* ctx);
extern "C" uint64_t func_803A3680_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803A3718_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_803A3718;

loc_803A3718:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r27 = r3;
    r31 = 2;
    r30 = 0;
    r29 = 0;
    r28 = 0;
    ctx->lr = 0x803A3744u;
    if constexpr (KnownRegArgsCpuCall<0x803A3680u>(&func_803A3680)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_803A3680_930 = func_803A3680_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803A3680_930);
        r4 = static_cast<uint32_t>(regargs_result_803A3680_930 >> 32);
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
        InvokeDirectCpu<0x803A3680u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = (r3 & 255);
}

loc_803A374C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803A3790;
    }
}

loc_803A3750:
{
    r3 = r27;
    r4 = MemoryInline::FlatRead16((r27 + 1648));
    r5 = 1;
    ctx->lr = 0x803A3760u;
    if constexpr (KnownRegArgsCpuCall<0x8027328Cu>(&func_8027328C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027328C_D9B = func_8027328C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027328C_D9B);
        r4 = static_cast<uint32_t>(regargs_result_8027328C_D9B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027328Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_803A3764:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(1))) {
        goto loc_803A3770;
    }
}

loc_803A3768:
{
    r3 = 3;
    goto loc_803A3950;
}

loc_803A3770:
{
    r3 = r27;
    r4 = MemoryInline::FlatRead16((r27 + 1648));
    ctx->lr = 0x803A377Cu;
    if constexpr (KnownRegArgsCpuCall<0x80273218u>(&func_80273218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80273218_11CB = func_80273218_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273218_11CB);
        r4 = static_cast<uint32_t>(regargs_result_80273218_11CB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80273218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 1);
    r3 = (0 - r0);
    r3 = (r3 + 4);
    goto loc_803A3950;
}

loc_803A3790:
{
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r3 = (r3 & 255);
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl2_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
}

loc_inl2_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x802B06E4:
{
    r3 = r0;
    goto loc_inl2_cont_802B06CC;
}

loc_inl2_return:
{
}

loc_inl2_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_803A37A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803A37CC;
    }
}

loc_803A37A8:
{
}

loc_803A37AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803A37DC;
    }
}

loc_803A37B0:
{
}

loc_803A37B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_803A37EC;
    }
}

loc_803A37B8:
{
}

loc_803A37BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_803A37FC;
    }
}

loc_803A37C0:
{
}

loc_803A37C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_803A380C;
    }
}

loc_803A37C8:
{
    goto loc_803A3818;
}

loc_803A37CC:
{
    r3 = 0x805F0000u;
    r24 = (r3 + 9856);
    r3 = r24;
    goto loc_803A3820;
}

loc_803A37DC:
{
    r3 = 0x805F0000u;
    r24 = (r3 + 9892);
    r3 = r24;
    goto loc_803A3820;
}

loc_803A37EC:
{
    r3 = 0x805F0000u;
    r24 = (r3 + 9912);
    r3 = r24;
    goto loc_803A3820;
}

loc_803A37FC:
{
    r3 = 0x805F0000u;
    r24 = (r3 + 9936);
    r3 = r24;
    goto loc_803A3820;
}

loc_803A380C:
{
    r24 = (r13 + -22776);
    r3 = r24;
    goto loc_803A3820;
}

loc_803A3818:
{
    r3 = 255;
    goto loc_803A3950;
}

loc_803A3820:
{
}

loc_803A3824:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803A3830;
    }
}

loc_803A3828:
{
    r3 = 255;
    goto loc_803A3950;
}

loc_803A3830:
{
    r23 = 0;
    goto loc_803A3840;
}

loc_803A3838:
{
    r23 = (r23 + 1);
    r3 = (r3 + 4);
}

loc_803A3840:
{
    r0 = MemoryInline::FlatRead16(r3);
}

loc_803A3848:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_803A3838;
    }
}

loc_803A384C:
{
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl3_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
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
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_3 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
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
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r23));
    r0 = (r0 * r23);
    r0 = (r3 - r0);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r25 = (r24 + r0);
    r22 = 0;
    goto loc_803A3930;
}

loc_803A3874:
{
    r3 = r27;
    r4 = MemoryInline::FlatRead16(r25);
    ctx->lr = 0x803A3880u;
    if constexpr (KnownRegArgsCpuCall<0x80273218u>(&func_80273218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80273218_26BF = func_80273218_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273218_26BF);
        r4 = static_cast<uint32_t>(regargs_result_80273218_26BF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80273218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r26 = r3;
}

loc_803A3888:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(1))) {
        goto loc_803A3918;
    }
}

loc_803A388C:
{
    r31 = 1;
    r3 = r27;
    r4 = MemoryInline::FlatRead16((r25 + 2));
    r5 = 1;
    ctx->lr = 0x803A38A0u;
    if constexpr (KnownRegArgsCpuCall<0x8027328Cu>(&func_8027328C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027328C_2ADD = func_8027328C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027328C_2ADD);
        r4 = static_cast<uint32_t>(regargs_result_8027328C_2ADD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027328Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_803A38A4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(1))) {
        goto loc_803A38C8;
    }
}

loc_803A38A8:
{
    r0 = MemoryInline::FlatRead16(r25);
    MemoryInline::FlatWrite16((r27 + 1644), static_cast<uint16_t>(r0));
    r0 = -1;
    MemoryInline::FlatWrite16((r27 + 1646), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r25 + 2));
    MemoryInline::FlatWrite16((r27 + 1648), static_cast<uint16_t>(r0));
    r3 = 0;
    goto loc_803A3950;
}

loc_803A38C8:
{
}

loc_803A38CC:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(1))) {
        goto loc_803A3904;
    }
}

loc_803A38D0:
{
    r3 = r27;
    r4 = MemoryInline::FlatRead16((r25 + 2));
    ctx->lr = 0x803A38DCu;
    if constexpr (KnownRegArgsCpuCall<0x80273218u>(&func_80273218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80273218_30E2 = func_80273218_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273218_30E2);
        r4 = static_cast<uint32_t>(regargs_result_80273218_30E2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80273218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_803A38E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803A3904;
    }
}

loc_803A38E4:
{
    r0 = MemoryInline::FlatRead16(r25);
    MemoryInline::FlatWrite16((r27 + 1644), static_cast<uint16_t>(r0));
    r0 = -1;
    MemoryInline::FlatWrite16((r27 + 1646), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r25 + 2));
    MemoryInline::FlatWrite16((r27 + 1648), static_cast<uint16_t>(r0));
    r3 = 0;
    goto loc_803A3950;
}

loc_803A3904:
{
}

loc_803A3908:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_803A3918;
    }
}

loc_803A390C:
{
    r29 = MemoryInline::FlatRead16(r25);
    r30 = MemoryInline::FlatRead16((r25 + 2));
    r28 = -1;
}

loc_803A3918:
{
    r25 = (r25 + 4);
    r22 = (r22 + 1);
    r0 = MemoryInline::FlatRead16(r25);
}

loc_803A3928:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_803A3930;
    }
}

loc_803A392C:
{
    r25 = r24;
}

loc_803A3930:
{
}

loc_803A3934:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(r23))) {
        goto loc_803A3874;
    }
}

loc_803A3938:
{
}

loc_803A393C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_803A394C;
    }
}

loc_803A3940:
{
    MemoryInline::FlatWrite16((r27 + 1644), static_cast<uint16_t>(r29));
    MemoryInline::FlatWrite16((r27 + 1648), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r27 + 1646), static_cast<uint16_t>(r28));
}

loc_803A394C:
{
    r3 = r31;
}

loc_803A3950:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803A3718(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803A3718_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803A3718 func_803A3718 preserves=true fpr_mask=0x00000000
