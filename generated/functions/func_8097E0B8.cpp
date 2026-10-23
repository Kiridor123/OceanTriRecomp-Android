#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8097E2BC_statefree(uint32_t, uint32_t);

extern "C" void func_8097E0B8(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8097E0B8;

loc_8097E0B8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r0 = MemoryInline::FlatRead8(r4);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 11u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 159));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 20));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
    r0 = MemoryInline::FlatRead8((r4 + 158));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 14752));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 14753));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r3 + 10), static_cast<uint8_t>(r0));
    r3 = (r3 + 20);
    r4 = (r4 + 32);
    // inline leaf 0x8097E2BC (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 60u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::WriteResolved16(guest_range_2, 2u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::WriteResolved16(guest_range_2, 4u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::WriteResolved32(guest_range_2, 6u, (r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::WriteResolved16(guest_range_2, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8097E2BC
    r3 = (r30 + 32);
    r4 = (r31 + 44);
    // inline leaf 0x8097E2BC (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::WriteResolved8(guest_range_2, 12u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_2, 13u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::WriteResolved16(guest_range_2, 14u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::WriteResolved16(guest_range_2, 16u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::WriteResolved32(guest_range_2, 18u, (r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::WriteResolved16(guest_range_2, 22u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8097E2BC
    r3 = (r30 + 44);
    r4 = (r31 + 56);
    // inline leaf 0x8097E2BC (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::WriteResolved8(guest_range_2, 24u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_2, 25u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::WriteResolved16(guest_range_2, 26u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::WriteResolved16(guest_range_2, 28u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::WriteResolved32(guest_range_2, 30u, (r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::WriteResolved16(guest_range_2, 34u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8097E2BC
    r3 = (r30 + 56);
    r4 = (r31 + 116);
    // inline leaf 0x8097E2BC (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::WriteResolved8(guest_range_2, 36u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_2, 37u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::WriteResolved16(guest_range_2, 38u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::WriteResolved16(guest_range_2, 40u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::WriteResolved32(guest_range_2, 42u, (r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::WriteResolved16(guest_range_2, 46u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8097E2BC
    r3 = (r30 + 68);
    r4 = (r31 + 68);
    // inline leaf 0x8097E2BC (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::WriteResolved8(guest_range_2, 48u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_2, 49u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::WriteResolved16(guest_range_2, 50u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::WriteResolved16(guest_range_2, 52u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::WriteResolved32(guest_range_2, 54u, (r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::WriteResolved16(guest_range_2, 58u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8097E2BC
    r3 = (r30 + 80);
    r4 = (r31 + 92);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8097E2BCu) && KnownTranslatedCpuCall<0x8097E2BCu>::kAvailable && !KnownTranslatedCpuCall<0x8097E2BCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8097E2BCu>()) {
        func_8097E2BC_statefree(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8097E2BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r30 + 92);
    r4 = (r31 + 80);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8097E2BCu) && KnownTranslatedCpuCall<0x8097E2BCu>::kAvailable && !KnownTranslatedCpuCall<0x8097E2BCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8097E2BCu>()) {
        func_8097E2BC_statefree(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8097E2BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r30 + 104);
    r4 = (r31 + 104);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8097E2BCu) && KnownTranslatedCpuCall<0x8097E2BCu>::kAvailable && !KnownTranslatedCpuCall<0x8097E2BCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8097E2BCu>()) {
        func_8097E2BC_statefree(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8097E2BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r30 + 116);
    r4 = (r31 + 128);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8097E2BCu) && KnownTranslatedCpuCall<0x8097E2BCu>::kAvailable && !KnownTranslatedCpuCall<0x8097E2BCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8097E2BCu>()) {
        func_8097E2BC_statefree(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8097E2BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead8((r31 + 14778));
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 11), 0, 245u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r30 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 15846));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r30 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 15847));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r30 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 14780));
    MemoryInline::WriteResolved32(guest_range_1, 5u, (r30 + 16), r0);
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 117u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 117u, (r30 + 128), r0);
        MemoryInline::WriteResolved16(guest_range_1, 119u, (r30 + 130), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 121u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 121u, (r30 + 132), r0);
        MemoryInline::WriteResolved16(guest_range_1, 123u, (r30 + 134), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 125u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 125u, (r30 + 136), r0);
        MemoryInline::WriteResolved16(guest_range_1, 127u, (r30 + 138), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 129u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 129u, (r30 + 140), r0);
        MemoryInline::WriteResolved16(guest_range_1, 131u, (r30 + 142), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 133u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 133u, (r30 + 144), r0);
        MemoryInline::WriteResolved16(guest_range_1, 135u, (r30 + 146), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 137u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 137u, (r30 + 148), r0);
        MemoryInline::WriteResolved16(guest_range_1, 139u, (r30 + 150), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 141u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 141u, (r30 + 152), r0);
        MemoryInline::WriteResolved16(guest_range_1, 143u, (r30 + 154), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 145u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 145u, (r30 + 156), r0);
        MemoryInline::WriteResolved16(guest_range_1, 147u, (r30 + 158), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 149u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 149u, (r30 + 160), r0);
        MemoryInline::WriteResolved16(guest_range_1, 151u, (r30 + 162), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 153u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 153u, (r30 + 164), r0);
        MemoryInline::WriteResolved16(guest_range_1, 155u, (r30 + 166), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 157u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 157u, (r30 + 168), r0);
        MemoryInline::WriteResolved16(guest_range_1, 159u, (r30 + 170), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 161u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 161u, (r30 + 172), r0);
        MemoryInline::WriteResolved16(guest_range_1, 163u, (r30 + 174), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 165u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 165u, (r30 + 176), r0);
        MemoryInline::WriteResolved16(guest_range_1, 167u, (r30 + 178), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 169u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 169u, (r30 + 180), r0);
        MemoryInline::WriteResolved16(guest_range_1, 171u, (r30 + 182), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 173u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 173u, (r30 + 184), r0);
        MemoryInline::WriteResolved16(guest_range_1, 175u, (r30 + 186), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 177u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 177u, (r30 + 188), r0);
        MemoryInline::WriteResolved16(guest_range_1, 179u, (r30 + 190), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 181u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 181u, (r30 + 192), r0);
        MemoryInline::WriteResolved16(guest_range_1, 183u, (r30 + 194), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 185u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 185u, (r30 + 196), r0);
        MemoryInline::WriteResolved16(guest_range_1, 187u, (r30 + 198), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 189u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 189u, (r30 + 200), r0);
        MemoryInline::WriteResolved16(guest_range_1, 191u, (r30 + 202), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 193u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 193u, (r30 + 204), r0);
        MemoryInline::WriteResolved16(guest_range_1, 195u, (r30 + 206), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 197u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 197u, (r30 + 208), r0);
        MemoryInline::WriteResolved16(guest_range_1, 199u, (r30 + 210), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 201u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 201u, (r30 + 212), r0);
        MemoryInline::WriteResolved16(guest_range_1, 203u, (r30 + 214), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 205u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 205u, (r30 + 216), r0);
        MemoryInline::WriteResolved16(guest_range_1, 207u, (r30 + 218), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 209u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 209u, (r30 + 220), r0);
        MemoryInline::WriteResolved16(guest_range_1, 211u, (r30 + 222), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 213u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 213u, (r30 + 224), r0);
        MemoryInline::WriteResolved16(guest_range_1, 215u, (r30 + 226), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 217u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 217u, (r30 + 228), r0);
        MemoryInline::WriteResolved16(guest_range_1, 219u, (r30 + 230), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 221u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 221u, (r30 + 232), r0);
        MemoryInline::WriteResolved16(guest_range_1, 223u, (r30 + 234), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 225u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 225u, (r30 + 236), r0);
        MemoryInline::WriteResolved16(guest_range_1, 227u, (r30 + 238), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 229u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 229u, (r30 + 240), r0);
        MemoryInline::WriteResolved16(guest_range_1, 231u, (r30 + 242), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 233u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 233u, (r30 + 244), r0);
        MemoryInline::WriteResolved16(guest_range_1, 235u, (r30 + 246), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 237u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 237u, (r30 + 248), r0);
        MemoryInline::WriteResolved16(guest_range_1, 239u, (r30 + 250), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 241u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 241u, (r30 + 252), r0);
        MemoryInline::WriteResolved16(guest_range_1, 243u, (r30 + 254), r0);
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8097E0B8 func_8097E0B8 preserves=true fpr_mask=0x00000000
