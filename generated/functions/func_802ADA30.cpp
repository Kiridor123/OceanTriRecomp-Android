#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802B297C(CpuContext* ctx);
extern "C" uint32_t func_802B297C_ra0_0_8_0(CpuContext*);
extern "C" void func_804335CC(CpuContext* ctx);
extern "C" uint64_t func_804335CC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_802B297C_statefree(uint32_t, PPC_FPR);

extern "C" uint64_t func_802ADA30_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_802ADA30;

loc_802ADA30:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_4, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r4 = 0x806C0000u;
    r26 = (r4 + -21440);
    r3 = 0x806C0000u;
    r25 = (r3 + -9184);
    r31 = 0;
    MemoryInline::FlatWriteRam8((r4 + -21440), static_cast<uint8_t>(r31));
    guest_range_1 = MemoryInline::ResolveRangeHost((r26 + 1), 0, 3014u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r26 + 1), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r26 + 2), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r26 + 3), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_1, 3u, (r26 + 4), r31);
    MemoryInline::WriteResolved32(guest_range_1, 19u, (r26 + 20), r31);
    MemoryInline::WriteResolved32(guest_range_1, 7u, (r26 + 8), r31);
    MemoryInline::WriteResolved32(guest_range_1, 23u, (r26 + 24), r31);
    MemoryInline::WriteResolved32(guest_range_1, 11u, (r26 + 12), r31);
    MemoryInline::WriteResolved32(guest_range_1, 27u, (r26 + 28), r31);
    MemoryInline::WriteResolved32(guest_range_1, 15u, (r26 + 16), r31);
    MemoryInline::WriteResolved32(guest_range_1, 31u, (r26 + 32), r31);
    r0 = -1;
    MemoryInline::WriteResolved8(guest_range_1, 3011u, (r26 + 3012), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 3012u, (r26 + 3013), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 3013u, (r26 + 3014), static_cast<uint8_t>(r31));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802B297Cu) && KnownTranslatedCpuCall<0x802B297Cu>::kAvailable && !KnownTranslatedCpuCall<0x802B297Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802B297Cu>()) {
        const auto state_free_result_802B297C_DD0 = func_802B297C_statefree(r2, f0);
        r0 = static_cast<uint32_t>(state_free_result_802B297C_DD0[0]);
        f0.raw = static_cast<uint64_t>(state_free_result_802B297C_DD0[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x802B297Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    guest_range_2 = MemoryInline::ResolveRangeHost((r26 + 3092), 0, 9u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r26 + 3092), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r26 + 3093), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r26 + 3097), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r26 + 3094), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r26 + 3098), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r26 + 3095), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r26 + 3099), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r26 + 3096), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r26 + 3100), static_cast<uint8_t>(r31));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13912));
    guest_range_0 = MemoryInline::ResolveRangeHost((r26 + 10244), 0, 2010u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r26 + 10244), f1.d);
    r3 = (r26 + 10248);
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r26 + 10268), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 25u, (r26 + 10269), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 26u, (r26 + 10270), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r26 + 10271), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r26 + 10272), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 29u, (r26 + 10273), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 30u, (r26 + 10274), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 31u, (r26 + 10275), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r26 + 10276), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 33u, (r26 + 10277), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 34u, (r26 + 10278), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 35u, (r26 + 10279), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r26 + 10280), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 37u, (r26 + 10281), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 38u, (r26 + 10282), static_cast<uint8_t>(r31));
    r27 = 0;
    r30 = r26;
    r29 = (r26 + 10346);
    r28 = (r26 + 10306);
}

loc_802ADB24:
{
    MemoryInline::FlatWrite8((r30 + 10289), static_cast<uint8_t>(r31));
    r3 = r28;
    r4 = r29;
    // inline leaf 0x8029F1D4 (25 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = 65536;
    r0 = (r4 + -1);
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 0u, r3, r0);
        MemoryInline::WriteResolved16(guest_range_3, 2u, (r3 + 2), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 4u, (r3 + 4), r0);
        MemoryInline::WriteResolved16(guest_range_3, 6u, (r3 + 6), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 8u, (r3 + 8), r0);
        MemoryInline::WriteResolved16(guest_range_3, 10u, (r3 + 10), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 12u, (r3 + 12), r0);
        MemoryInline::WriteResolved16(guest_range_3, 14u, (r3 + 14), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 16u, (r3 + 16), r0);
        MemoryInline::WriteResolved16(guest_range_3, 18u, (r3 + 18), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 20u, (r3 + 20), r0);
        MemoryInline::WriteResolved16(guest_range_3, 22u, (r3 + 22), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 24u, (r3 + 24), r0);
        MemoryInline::WriteResolved16(guest_range_3, 26u, (r3 + 26), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 28u, (r3 + 28), r0);
        MemoryInline::WriteResolved16(guest_range_3, 30u, (r3 + 30), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 32u, (r3 + 32), r0);
        MemoryInline::WriteResolved16(guest_range_3, 34u, (r3 + 34), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 36u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 36u, (r3 + 36), r0);
        MemoryInline::WriteResolved16(guest_range_3, 38u, (r3 + 38), r0);
    }
    // end of inlined leaf 0x8029F1D4
    r30 = (r30 + 64);
    r29 = (r29 + 64);
    r28 = (r28 + 64);
    r27 = (r27 + 1);
}

loc_802ADB48:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(16))) {
        goto loc_802ADB24;
    }
}

loc_802ADB4C:
{
    r0 = 255;
    MemoryInline::WriteResolved8(guest_range_0, 1705u, (r26 + 11949), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1706u, (r26 + 11950), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1707u, (r26 + 11951), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1708u, (r26 + 11952), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1709u, (r26 + 11953), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1710u, (r26 + 11954), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1711u, (r26 + 11955), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1712u, (r26 + 11956), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 1704u, (r26 + 11948), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1932u, (r26 + 12176), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1933u, (r26 + 12177), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8(r25, static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r25 + 4), r0);
    MemoryInline::FlatWriteRam8((r25 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r25 + 12), r0);
    MemoryInline::FlatWriteRam8((r25 + 16), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r25 + 20), r0);
    MemoryInline::WriteResolved16(guest_range_0, 1934u, (r26 + 12178), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1936u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1936u, (r26 + 12180), r0);
        MemoryInline::WriteResolved32(guest_range_0, 1940u, (r26 + 12184), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1944u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1944u, (r26 + 12188), r0);
        MemoryInline::WriteResolved32(guest_range_0, 1948u, (r26 + 12192), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1952u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1952u, (r26 + 12196), r0);
        MemoryInline::WriteResolved32(guest_range_0, 1956u, (r26 + 12200), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1960u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1960u, (r26 + 12204), r0);
        MemoryInline::WriteResolved32(guest_range_0, 1964u, (r26 + 12208), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1968u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1968u, (r26 + 12212), r0);
        MemoryInline::WriteResolved32(guest_range_0, 1972u, (r26 + 12216), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1976u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1976u, (r26 + 12220), r0);
        MemoryInline::WriteResolved32(guest_range_0, 1980u, (r26 + 12224), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1984u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1984u, (r26 + 12228), r0);
        MemoryInline::WriteResolved32(guest_range_0, 1988u, (r26 + 12232), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1992u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1992u, (r26 + 12236), r0);
        MemoryInline::WriteResolved32(guest_range_0, 1996u, (r26 + 12240), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 2008u, (r26 + 12252), static_cast<uint16_t>(r0));
    ctx->lr = 0x802ADBE4u;
    if constexpr (KnownRegArgsCpuCall<0x804335CCu>(&func_804335CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804335CC_3CFC = func_804335CC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804335CC_3CFC);
        r4 = static_cast<uint32_t>(regargs_result_804335CC_3CFC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804335CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_5 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_5, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802ADA30(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802ADA30_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FF gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802ADA30 func_802ADA30 preserves=true fpr_mask=0x00000000
