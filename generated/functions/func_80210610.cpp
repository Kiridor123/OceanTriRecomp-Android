#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802105B0(CpuContext* ctx);
extern "C" uint32_t func_802105B0_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_802105B0_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_802105B0_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_80210610_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80210610u);
    goto loc_80210610;

loc_80210610:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r29 = r3;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r31 = (r31_rot_0 & -8);
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 18), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r4));
    r3 = (r3 + 68);
    r4 = 0;
    r5 = 256;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 324);
    r4 = 0;
    r5 = 96;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r29 + 64));
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r3 = (r3 & 65535);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802105B0u) && KnownTranslatedCpuCall<0x802105B0u>::kAvailable && !KnownTranslatedCpuCall<0x802105B0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802105B0u>()) {
        const auto state_free_result_802105B0_B07 = func_802105B0_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_802105B0_B07[0]);
        r3 = static_cast<uint32_t>(state_free_result_802105B0_B07[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x802105B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        xer = ctx->xer;
    }
    r28 = r3;
}

loc_80210674:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802106BC;
    }
}

loc_80210678:
{
    r30 = 0;
    r27 = r29;
    goto loc_802106B0;
}

loc_80210684:
{
    r3 = MemoryInline::FlatRead16((r28 + 2));
    ctx->lr = 0x8021068Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    xer = ctx->xer;
}

loc_80210690:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802106AC;
    }
}

loc_80210694:
{
    r0 = MemoryInline::FlatRead16(r28);
    MemoryInline::FlatWrite16((r27 + 68), static_cast<uint16_t>(r0));
    r27 = (r27 + 2);
    r30 = (r30 + 1);
}

loc_802106A8:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(128))) {
        goto loc_802106BC;
    }
}

loc_802106AC:
{
    r28 = (r28 + 4);
}

loc_802106B0:
{
    r0 = MemoryInline::FlatRead16(r28);
}

loc_802106B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80210684;
    }
}

loc_802106BC:
{
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_802106C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80210770;
    }
}

loc_802106C8:
{
    r28 = 0;
    r3 = MemoryInline::FlatRead32((r29 + 64));
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_802106D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(39))) {
        goto loc_802106E8;
    }
}

loc_802106DC:
{
}

loc_802106E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(41))) {
        goto loc_80210708;
    }
}

loc_802106E4:
{
    goto loc_80210724;
}

loc_802106E8:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r0 = MemoryInline::FlatRead8((r3 + 352));
}

loc_802106F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80210724;
    }
}

loc_802106FC:
{
    r3 = 0x805E0000u;
    r28 = (r3 + -9320);
    goto loc_80210724;
}

loc_80210708:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r0 = MemoryInline::FlatRead8((r3 + 349));
}

loc_80210718:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80210724;
    }
}

loc_8021071C:
{
    r3 = 0x805E0000u;
    r28 = (r3 + -9184);
}

loc_80210724:
{
}

loc_80210728:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80210770;
    }
}

loc_8021072C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r27 = (r29 + r0);
    goto loc_80210764;
}

loc_80210738:
{
    r3 = MemoryInline::FlatRead16((r28 + 2));
    ctx->lr = 0x80210740u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    xer = ctx->xer;
}

loc_80210744:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80210760;
    }
}

loc_80210748:
{
    r0 = MemoryInline::FlatRead16(r28);
    MemoryInline::FlatWrite16((r27 + 68), static_cast<uint16_t>(r0));
    r27 = (r27 + 2);
    r30 = (r30 + 1);
}

loc_8021075C:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(128))) {
        goto loc_80210770;
    }
}

loc_80210760:
{
    r28 = (r28 + 4);
}

loc_80210764:
{
    r0 = MemoryInline::FlatRead16(r28);
}

loc_8021076C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80210738;
    }
}

loc_80210770:
{
    r26 = 0;
    r28 = r29;
    r27 = (r29 + 326);
}

loc_8021077C:
{
    r0 = (r31 + r26);
}

loc_80210784:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r30))) {
        goto loc_802107C4;
    }
}

loc_80210788:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r3 = (r29 + r0);
    r25 = MemoryInline::FlatRead16((r3 + 68));
    MemoryInline::FlatWrite16((r28 + 324), static_cast<uint16_t>(r25));
    r3 = r25;
    r4 = r27;
    ctx->lr = 0x802107A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x80210854u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r28 + 328), r3);
    r3 = r25;
    r4 = 1;
    ctx->lr = 0x802107B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x80210990u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    xer = ctx->xer;
    MemoryInline::FlatWrite16((r28 + 332), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead16((r29 + 18));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r29 + 18), static_cast<uint16_t>(r0));
}

loc_802107C4:
{
    r28 = (r28 + 12);
    r27 = (r27 + 12);
    r26 = (r26 + 1);
}

loc_802107D4:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(8))) {
        goto loc_8021077C;
    }
}

loc_802107D8:
{
    r3 = MemoryInline::FlatRead16((r29 + 18));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r29 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802107E4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_802107F4;
    }
}

loc_802107E8:
{
    r0 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r0));
}

loc_802107F4:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    r4 = 8;
    // inline leaf 0x802A8F78 (15 guest instruction(s))
}

loc_inl2_0x802A8F78:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl2_0x802A8F80:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x802A8F8C;
    }
}

loc_inl2_0x802A8F84:
{
    r3 = 1;
    goto loc_inl2_cont_802A8F78;
}

loc_inl2_0x802A8F8C:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r5));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 * r5);
    r0 = (r4 - r0);
}

loc_inl2_0x802A8FA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x802A8FA8:
{
    r0 = (r3 + 1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_inl2_cont_802A8F78;
}

loc_inl2_return:
{
}

loc_inl2_cont_802A8F78:
{
    // end of inlined leaf 0x802A8F78
    MemoryInline::FlatWrite16((r29 + 10), static_cast<uint16_t>(r3));
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
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80210610(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80210610_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80210610 func_80210610 preserves=true fpr_mask=0x00000000
