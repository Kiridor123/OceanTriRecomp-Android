#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80212A90(CpuContext* ctx);
extern "C" uint64_t func_80212A90_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80213AD4(CpuContext* ctx);
extern "C" uint32_t func_80213AD4_ra68_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80359058(CpuContext* ctx);
extern "C" uint32_t func_80359058_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8035FDD8(CpuContext* ctx);
extern "C" uint64_t func_8035FDD8_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803614C4(CpuContext* ctx);
extern "C" uint64_t func_803614C4_rac8_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80361524_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r27_rot_0 = 0;
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

    MKW_GUEST_ENTER(0x80361524u);
    goto loc_80361524;

loc_80361524:
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
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r27_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r27 = (r27_rot_0 & -8);
    r26 = (r27 + 7);
    ctx->lr = 0x8036154Cu;
    if constexpr (KnownRegArgsCpuCall<0x8035FDD8u>(&func_8035FDD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8035FDD8_99B = func_8035FDD8_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8035FDD8_99B);
        r4 = static_cast<uint32_t>(regargs_result_8035FDD8_99B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8035FDD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r23 = MemoryInline::FlatRead32((r13 + -16952));
    r28 = 0;
    r30 = 0;
    MemoryInline::FlatWrite16((r22 + 24), static_cast<uint16_t>(r30));
    r25 = 0;
}

loc_80361560:
{
}

loc_80361564:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(-1))) {
        goto loc_80361630;
    }
}

loc_80361568:
{
    r0 = (r25 * 24);
    r29 = (r23 + r0);
    r24 = MemoryInline::FlatRead16((r29 + 2));
    r3 = (r25 & 65535);
    ctx->lr = 0x8036157Cu;
    if constexpr (KnownRegArgsCpuCall<0x80213AD4u>(&func_80213AD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        const auto regargs_result_80213AD4_EF4 = func_80213AD4_ra68_0_8_0(ctx, r3, r5, r6);
        r3 = regargs_result_80213AD4_EF4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80213AD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r31 = r3;
    r0 = (r3 & 65535);
    r0 = (r0 & 16);
}

loc_8036158C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80361610;
    }
}

loc_80361590:
{
    r3 = r24;
    // inline leaf 0x8029F740 (10 guest instruction(s))
}

loc_inl1_0x8029F740:
{
    r4 = 0x806B0000u;
    r4 = MemoryInline::FlatRead32((r4 + -4808));
    r0 = (r3 & 65535);
}

loc_inl1_0x8029F750:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl1_0x8029F758;
    }
}

loc_inl1_0x8029F754:
{
    r3 = 0;
}

loc_inl1_0x8029F758:
{
    r0 = (r3 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
}

loc_inl1_cont_8029F740:
{
    // end of inlined leaf 0x8029F740
    r21 = r3;
    r3 = MemoryInline::FlatRead16((r3 + 10));
    // inline leaf 0x8029F718 (10 guest instruction(s))
}

loc_inl2_0x8029F718:
{
    r0 = (r3 & 65535);
}

loc_inl2_0x8029F720:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(132))) {
        goto loc_inl2_0x8029F728;
    }
}

loc_inl2_0x8029F724:
{
    r3 = 0;
}

loc_inl2_0x8029F728:
{
    r0 = (r3 & 65535);
    r4 = (r0 * 12);
    r3 = 0x805E0000u;
    r0 = (r3 + -14472);
    r3 = (r0 + r4);
}

loc_inl2_cont_8029F718:
{
    // end of inlined leaf 0x8029F718
    r20 = r3;
    r3 = MemoryInline::FlatRead8((r22 + 157));
    r4 = MemoryInline::FlatRead16((r21 + 10));
    ctx->lr = 0x803615B4u;
    if constexpr (KnownRegArgsCpuCall<0x80212A90u>(&func_80212A90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80212A90_178F = func_80212A90_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80212A90_178F);
        r4 = static_cast<uint32_t>(regargs_result_80212A90_178F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80212A90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803615B8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80361610;
    }
}

loc_803615BC:
{
}

loc_803615C0:
{
    if ((static_cast<int32_t>(r27) > static_cast<int32_t>(r28))) {
        goto loc_8036160C;
    }
}

loc_803615C4:
{
}

loc_803615C8:
{
    if ((static_cast<int32_t>(r28) > static_cast<int32_t>(r26))) {
        goto loc_8036160C;
    }
}

loc_803615CC:
{
    r0 = MemoryInline::FlatRead16((r22 + 24));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 24);
    r21 = (r22 + r0);
    r0 = MemoryInline::FlatRead8((r22 + 7));
    MemoryInline::FlatWrite8((r21 + 612), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r21 + 616), static_cast<uint16_t>(r24));
    r3 = r24;
    ctx->lr = 0x803615ECu;
    if constexpr (KnownRegArgsCpuCall<0x80359058u>(&func_80359058)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_80359058_1D63 = func_80359058_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80359058_1D63;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80359058u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite32((r21 + 620), r3);
    MemoryInline::FlatWrite32((r21 + 624), r29);
    MemoryInline::FlatWrite32((r21 + 628), r30);
    MemoryInline::FlatWrite32((r21 + 632), r20);
    MemoryInline::FlatWrite16((r21 + 614), static_cast<uint16_t>(r31));
    r3 = MemoryInline::FlatRead16((r22 + 24));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r22 + 24), static_cast<uint16_t>(r0));
}

loc_8036160C:
{
    r28 = (r28 + 1);
}

loc_80361610:
{
    r25 = (r25 + 1);
    r0 = (r25 * 24);
    r3 = (r23 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 2));
}

loc_80361624:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_80361560;
    }
}

loc_80361628:
{
    r25 = -1;
    goto loc_80361560;
}

loc_80361630:
{
    r3 = MemoryInline::FlatRead16((r22 + 24));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r22 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8036163C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_8036165C;
    }
}

loc_80361640:
{
    r0 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r22 + 12), static_cast<uint16_t>(r0));
}

loc_80361650:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8036165C;
    }
}

loc_80361654:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r22 + 12), static_cast<uint16_t>(r0));
}

loc_8036165C:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r4 = 8;
    // inline leaf 0x802A8F78 (15 guest instruction(s))
}

loc_inl3_0x802A8F78:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl3_0x802A8F80:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x802A8F8C;
    }
}

loc_inl3_0x802A8F84:
{
    r3 = 1;
    goto loc_inl3_cont_802A8F78;
}

loc_inl3_0x802A8F8C:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r5));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 * r5);
    r0 = (r4 - r0);
}

loc_inl3_0x802A8FA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x802A8FA8:
{
    r0 = (r3 + 1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_inl3_cont_802A8F78;
}

loc_inl3_return:
{
}

loc_inl3_cont_802A8F78:
{
    // end of inlined leaf 0x802A8F78
    MemoryInline::FlatWrite16((r22 + 20), static_cast<uint16_t>(r3));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_80361674:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80361680;
    }
}

loc_80361678:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r22 + 20), static_cast<uint16_t>(r0));
}

loc_80361680:
{
    r3 = r22;
    ctx->lr = 0x80361688u;
    if constexpr (KnownRegArgsCpuCall<0x803614C4u>(&func_803614C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        const auto regargs_result_803614C4_2BB3 = func_803614C4_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_803614C4_2BB3);
        r4 = static_cast<uint32_t>(regargs_result_803614C4_2BB3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x803614C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    }
    r11 = (r1 + 64);
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80361524(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80361524_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000037FB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80361524 func_80361524 preserves=true fpr_mask=0x00000000
