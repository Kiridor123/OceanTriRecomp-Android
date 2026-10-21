#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004A25C(CpuContext* ctx);
extern "C" void func_8004A25C_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8004A270(CpuContext* ctx);
extern "C" void func_8004A270_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8004AFDC(CpuContext* ctx);
extern "C" uint32_t func_8004AFDC_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8026FEA8(CpuContext* ctx);
extern "C" uint64_t func_8026FEA8_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8027EF34(CpuContext* ctx);
extern "C" uint64_t func_8027EF34_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8004A25C_statefree(uint32_t, uint32_t);
extern "C" uint64_t func_8004A270_statefree(uint32_t, uint32_t);
extern "C" void func_8004A270_statefree_v0(uint32_t, uint32_t);

extern "C" void func_80049FE0(CpuContext* MKW_RESTRICT ctx)
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
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80049FE0u);
    goto loc_80049FE0;

loc_80049FE0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    // inline leaf 0x8004D184 (5 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead32((r3 + 2396));
    MemoryInline::FlatWrite32((r13 + -17824), r3);
    // end of inlined leaf 0x8004D184
    r31 = r3;
    r0 = MemoryInline::FlatRead8(r3);
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 20), 0, 591u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r30 + 20), static_cast<uint8_t>(r0));
    r3 = (r30 + 320);
    r4 = (r31 + 68);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 72u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::WriteResolved16(guest_range_3, 2u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::WriteResolved16(guest_range_3, 4u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::WriteResolved32(guest_range_3, 6u, (r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::WriteResolved16(guest_range_3, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r30 + 332);
    r4 = (r31 + 80);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::WriteResolved8(guest_range_3, 12u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 13u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::WriteResolved16(guest_range_3, 14u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::WriteResolved16(guest_range_3, 16u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::WriteResolved32(guest_range_3, 18u, (r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::WriteResolved16(guest_range_3, 22u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r30 + 344);
    r4 = (r31 + 92);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::WriteResolved8(guest_range_3, 24u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 25u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::WriteResolved16(guest_range_3, 26u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::WriteResolved16(guest_range_3, 28u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::WriteResolved32(guest_range_3, 30u, (r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::WriteResolved16(guest_range_3, 34u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r30 + 356);
    r4 = (r31 + 104);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::WriteResolved8(guest_range_3, 36u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 37u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::WriteResolved16(guest_range_3, 38u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::WriteResolved16(guest_range_3, 40u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::WriteResolved32(guest_range_3, 42u, (r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::WriteResolved16(guest_range_3, 46u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r30 + 368);
    r4 = (r31 + 116);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::WriteResolved8(guest_range_3, 48u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 49u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::WriteResolved16(guest_range_3, 50u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::WriteResolved16(guest_range_3, 52u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::WriteResolved32(guest_range_3, 54u, (r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::WriteResolved16(guest_range_3, 58u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r30 + 380);
    r4 = (r31 + 128);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::WriteResolved8(guest_range_3, 60u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 61u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::WriteResolved16(guest_range_3, 62u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::WriteResolved16(guest_range_3, 64u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::WriteResolved32(guest_range_3, 66u, (r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::WriteResolved16(guest_range_3, 70u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r0 = MemoryInline::FlatRead8((r31 + 14778));
    MemoryInline::WriteResolved8(guest_range_1, 590u, (r30 + 610), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 158));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r30 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 589u, (r30 + 609), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 588u, (r30 + 608), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 159));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r30 + 29), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r31 + 20));
    r0 = (r3 & -16777216);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 580u, (r30 + 600), static_cast<uint8_t>(r0));
    r0 = (r3 & 16711680);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 65535);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 581u, (r30 + 601), static_cast<uint8_t>(r0));
    r0 = (r3 & 65280);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_2 & 16777215);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 582u, (r30 + 602), static_cast<uint8_t>(r0));
    r0 = (r3 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 583u, (r30 + 603), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r31 + 14780));
    r0 = (r3 & -16777216);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 584u, (r30 + 604), static_cast<uint8_t>(r0));
    r0 = (r3 & 16711680);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & 65535);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 585u, (r30 + 605), static_cast<uint8_t>(r0));
    r0 = (r3 & 65280);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_5 & 16777215);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 586u, (r30 + 606), static_cast<uint8_t>(r0));
    r0 = (r3 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 587u, (r30 + 607), static_cast<uint8_t>(r0));
    r3 = (r30 + 464);
    r4 = (r31 + 32);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
    }
    r3 = (r30 + 488);
    r4 = (r31 + 44);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
    }
    r3 = (r30 + 500);
    r4 = (r31 + 56);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
    }
    r0 = MemoryInline::FlatRead8((r31 + 14752));
    MemoryInline::FlatWrite8((r30 + 2844), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 14753));
    MemoryInline::FlatWrite8((r30 + 2845), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 15846));
    MemoryInline::FlatWrite8((r30 + 2846), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 15847));
    MemoryInline::FlatWrite8((r30 + 2847), static_cast<uint8_t>(r0));
    r3 = (r30 + 464);
    r4 = (r30 + 488);
    ctx->lr = 0x8004A140u;
    if constexpr (KnownRegArgsCpuCall<0x8027EF34u>(&func_8027EF34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027EF34_3385 = func_8027EF34_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027EF34_3385);
        r4 = static_cast<uint32_t>(regargs_result_8027EF34_3385 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027EF34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 2), 0, 1497u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r30 + 2), static_cast<uint8_t>(r3));
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 3), 0, 17u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r31 + 3));
    MemoryInline::WriteResolved8(guest_range_0, 1480u, (r30 + 1482), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r31 + 4));
    MemoryInline::WriteResolved8(guest_range_0, 1481u, (r30 + 1483), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r31 + 5));
    MemoryInline::WriteResolved8(guest_range_0, 1482u, (r30 + 1484), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r31 + 6));
    MemoryInline::WriteResolved8(guest_range_0, 1483u, (r30 + 1485), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r31 + 7));
    MemoryInline::WriteResolved8(guest_range_0, 1484u, (r30 + 1486), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r31 + 8));
    MemoryInline::WriteResolved8(guest_range_0, 1485u, (r30 + 1487), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r31 + 9));
    MemoryInline::WriteResolved8(guest_range_0, 1486u, (r30 + 1488), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r31 + 10));
    MemoryInline::WriteResolved8(guest_range_0, 1487u, (r30 + 1489), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 8u, (r31 + 11));
    MemoryInline::WriteResolved8(guest_range_0, 1488u, (r30 + 1490), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 9u, (r31 + 12));
    MemoryInline::WriteResolved8(guest_range_0, 1489u, (r30 + 1491), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 10u, (r31 + 13));
    MemoryInline::WriteResolved8(guest_range_0, 1490u, (r30 + 1492), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 11u, (r31 + 14));
    MemoryInline::WriteResolved8(guest_range_0, 1491u, (r30 + 1493), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 12u, (r31 + 15));
    MemoryInline::WriteResolved8(guest_range_0, 1492u, (r30 + 1494), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 13u, (r31 + 16));
    MemoryInline::WriteResolved8(guest_range_0, 1493u, (r30 + 1495), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 14u, (r31 + 17));
    MemoryInline::WriteResolved8(guest_range_0, 1494u, (r30 + 1496), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 15u, (r31 + 18));
    MemoryInline::WriteResolved8(guest_range_0, 1495u, (r30 + 1497), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 16u, (r31 + 19));
    MemoryInline::WriteResolved8(guest_range_0, 1496u, (r30 + 1498), static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x8004A1D4u;
    if constexpr (KnownRegArgsCpuCall<0x8004AFDCu>(&func_8004AFDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8004AFDC_4299 = func_8004AFDC_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8004AFDC_4299;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004AFDCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r28 = r3;
    r29 = 0;
    r31 = (r30 + 632);
}

loc_8004A1E0:
{
    r3 = r31;
    r4 = r28;
    // inline leaf 0x8004A25C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A25C
    r31 = (r31 + 4);
    r29 = (r29 + 1);
    r28 = (r28 + 4);
}

loc_8004A1FC:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(24))) {
        goto loc_8004A1E0;
    }
}

loc_8004A200:
{
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x8026FEA8u>(&func_8026FEA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8026FEA8_47D1 = func_8026FEA8_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8026FEA8_47D1);
        r4 = static_cast<uint32_t>(regargs_result_8026FEA8_47D1 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8026FEA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8004A20C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8004A23C;
    }
}

loc_8004A210:
{
    r31 = 0;
}

loc_8004A214:
{
    r0 = (r31 + 26);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r30 + r0);
    r3 = (r3 + 632);
    r4 = r28;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A25Cu) && KnownTranslatedCpuCall<0x8004A25Cu>::kAvailable && !KnownTranslatedCpuCall<0x8004A25Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A25Cu>()) {
        const auto state_free_result_8004A25C_4C1A = func_8004A25C_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_8004A25C_4C1A);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004A25Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
    }
    r31 = (r31 + 1);
    r28 = (r28 + 4);
}

loc_8004A238:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(8))) {
        goto loc_8004A214;
    }
}

loc_8004A23C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80049FE0 func_80049FE0 preserves=true fpr_mask=0x00000000
