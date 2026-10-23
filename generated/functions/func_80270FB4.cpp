#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004A270(CpuContext* ctx);
extern "C" void func_8004A270_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027078C(CpuContext* ctx);
extern "C" uint64_t func_8027078C_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80272A6C(CpuContext* ctx);
extern "C" uint64_t func_80272A6C_ra188_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80273F3C(CpuContext* ctx);
extern "C" uint64_t func_80273F3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802788C0(CpuContext* ctx);
extern "C" uint64_t func_802788C0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80278A50(CpuContext* ctx);
extern "C" uint64_t func_80278A50_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8004A270_statefree(uint32_t, uint32_t);
extern "C" void func_8004A270_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_80270FB4_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_80270FB4;

loc_80270FB4:
{
    MemoryInline::FlatWriteRam32((r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    r11 = (r1 + 192);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r29 = r3;
    r30 = r4;
    r31 = r5;
}

loc_80270FD8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80271130;
    }
}

loc_80270FDC:
{
    r3 = (r1 + 8);
    r4 = (r29 + 320);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    guest_range_5 = MemoryInline::ResolveRangeHost(r3, 0, 108u, false, true);
    MemoryInline::WriteResolved8(guest_range_5, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_5, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::WriteResolved16(guest_range_5, 2u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::WriteResolved16(guest_range_5, 4u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::WriteResolved32(guest_range_5, 6u, (r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::WriteResolved16(guest_range_5, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r1 + 20);
    r4 = (r29 + 332);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::WriteResolved8(guest_range_5, 12u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_5, 13u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::WriteResolved16(guest_range_5, 14u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::WriteResolved16(guest_range_5, 16u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::WriteResolved32(guest_range_5, 18u, (r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::WriteResolved16(guest_range_5, 22u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r1 + 32);
    r4 = (r29 + 344);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::WriteResolved8(guest_range_5, 24u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_5, 25u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::WriteResolved16(guest_range_5, 26u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::WriteResolved16(guest_range_5, 28u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::WriteResolved32(guest_range_5, 30u, (r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::WriteResolved16(guest_range_5, 34u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r1 + 44);
    r4 = (r29 + 356);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::WriteResolved8(guest_range_5, 36u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_5, 37u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::WriteResolved16(guest_range_5, 38u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::WriteResolved16(guest_range_5, 40u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::WriteResolved32(guest_range_5, 42u, (r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::WriteResolved16(guest_range_5, 46u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r1 + 56);
    r4 = (r29 + 368);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::WriteResolved8(guest_range_5, 48u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_5, 49u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::WriteResolved16(guest_range_5, 50u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::WriteResolved16(guest_range_5, 52u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::WriteResolved32(guest_range_5, 54u, (r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::WriteResolved16(guest_range_5, 58u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r1 + 68);
    r4 = (r29 + 380);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::WriteResolved8(guest_range_5, 60u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_5, 61u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::WriteResolved16(guest_range_5, 62u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::WriteResolved16(guest_range_5, 64u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::WriteResolved32(guest_range_5, 66u, (r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::WriteResolved16(guest_range_5, 70u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r1 + 80);
    r4 = (r29 + 464);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::WriteResolved8(guest_range_5, 72u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_5, 73u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::WriteResolved16(guest_range_5, 74u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::WriteResolved16(guest_range_5, 76u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::WriteResolved32(guest_range_5, 78u, (r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::WriteResolved16(guest_range_5, 82u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r1 + 92);
    r4 = (r29 + 488);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::WriteResolved8(guest_range_5, 84u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_5, 85u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::WriteResolved16(guest_range_5, 86u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::WriteResolved16(guest_range_5, 88u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::WriteResolved32(guest_range_5, 90u, (r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::WriteResolved16(guest_range_5, 94u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r1 + 104);
    r4 = (r29 + 500);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::WriteResolved8(guest_range_5, 96u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_5, 97u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::WriteResolved16(guest_range_5, 98u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::WriteResolved16(guest_range_5, 100u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::WriteResolved32(guest_range_5, 102u, (r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::WriteResolved16(guest_range_5, 106u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r29 + 320);
    r4 = r30;
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::FlatWrite32((r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r29 + 332);
    r4 = (r30 + 12);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r29 + 344);
    r4 = (r30 + 24);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r29 + 356);
    r4 = (r30 + 36);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r29 + 368);
    r4 = (r30 + 48);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r29 + 380);
    r4 = (r30 + 60);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r29 + 464);
    r4 = (r30 + 72);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r29 + 488);
    r4 = (r30 + 84);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r29 + 500);
    r4 = (r30 + 96);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = r29;
    ctx->lr = 0x802710BCu;
    if constexpr (KnownRegArgsCpuCall<0x80272A6Cu>(&func_80272A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        const auto regargs_result_80272A6C_4B45 = func_80272A6C_ra188_0_18_0(ctx, r3, r7, r8);
        r3 = static_cast<uint32_t>(regargs_result_80272A6C_4B45);
        r4 = static_cast<uint32_t>(regargs_result_80272A6C_4B45 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80272A6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
    }
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + 1522), 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r29 + 1522));
    guest_range_2 = MemoryInline::ResolveRangeHost((r29 + 1562), 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_2, 0u, (r29 + 1562), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r29 + 1524));
    MemoryInline::WriteResolved16(guest_range_2, 2u, (r29 + 1564), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r29 + 1526));
    MemoryInline::WriteResolved16(guest_range_2, 4u, (r29 + 1566), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r29 + 1528));
    MemoryInline::WriteResolved16(guest_range_2, 6u, (r29 + 1568), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r29 + 1530));
    MemoryInline::WriteResolved16(guest_range_2, 8u, (r29 + 1570), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r29 + 1532));
    MemoryInline::WriteResolved16(guest_range_2, 10u, (r29 + 1572), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r29 + 1534));
    MemoryInline::WriteResolved16(guest_range_2, 12u, (r29 + 1574), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r29 + 1536));
    MemoryInline::WriteResolved16(guest_range_2, 14u, (r29 + 1576), static_cast<uint16_t>(r0));
    r3 = r29;
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x8027110Cu;
    if constexpr (KnownRegArgsCpuCall<0x802788C0u>(&func_802788C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802788C0_5554 = func_802788C0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802788C0_5554);
        r4 = static_cast<uint32_t>(regargs_result_802788C0_5554 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802788C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r29;
    r4 = 0;
    ctx->lr = 0x80271118u;
    if constexpr (KnownRegArgsCpuCall<0x80278A50u>(&func_80278A50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80278A50_5894 = func_80278A50_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80278A50_5894);
        r4 = static_cast<uint32_t>(regargs_result_80278A50_5894 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80278A50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = r29;
    ctx->lr = 0x80271120u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x802703C0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r3 = r29;
    ctx->lr = 0x80271128u;
    if constexpr (KnownRegArgsCpuCall<0x8027078Cu>(&func_8027078C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_8027078C_5D88 = func_8027078C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8027078C_5D88);
        r4 = static_cast<uint32_t>(regargs_result_8027078C_5D88 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8027078Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = r29;
    ctx->lr = 0x80271130u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80270D08u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
}

loc_80271130:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 10), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
    r27 = 1;
    r3 = 0x805C0000u;
    r3 = (r3 + 26504);
    r28 = (r3 + 4);
}

loc_8027114C:
{
    r3 = r29;
    r4 = MemoryInline::FlatRead32(r28);
    r5 = 0;
    ctx->lr = 0x8027115Cu;
    if constexpr (KnownRegArgsCpuCall<0x80273F3Cu>(&func_80273F3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_80273F3C_65A6 = func_80273F3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273F3C_65A6);
        r4 = static_cast<uint32_t>(regargs_result_80273F3C_65A6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80273F3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_80271164:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80271178;
    }
}

loc_80271168:
{
    r0 = (r27 & 255);
    MemoryInline::FlatWrite8((r31 + 10), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r3));
    goto loc_80271188;
}

loc_80271178:
{
    r28 = (r28 + 4);
    r27 = (r27 + 1);
}

loc_80271184:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(6))) {
        goto loc_8027114C;
    }
}

loc_80271188:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 11), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r31 + 14), static_cast<uint16_t>(r0));
    r27 = 0;
    r3 = 0x805C0000u;
    r28 = (r3 + 26528);
}

loc_802711A0:
{
    r3 = r29;
    r4 = MemoryInline::FlatRead32(r28);
    r5 = 0;
    ctx->lr = 0x802711B0u;
    if constexpr (KnownRegArgsCpuCall<0x80273F3Cu>(&func_80273F3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_80273F3C_6E15 = func_80273F3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273F3C_6E15);
        r4 = static_cast<uint32_t>(regargs_result_80273F3C_6E15 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80273F3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_802711B8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802711D0;
    }
}

loc_802711BC:
{
    r0 = (r27 + 12);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r31 + 11), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r31 + 14), static_cast<uint16_t>(r3));
    goto loc_802711E0;
}

loc_802711D0:
{
    r28 = (r28 + 4);
    r27 = (r27 + 1);
}

loc_802711DC:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(3))) {
        goto loc_802711A0;
    }
}

loc_802711E0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 882), 0, 102u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r29 + 882));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    guest_range_4 = MemoryInline::ResolveRangeHost(r31, 0, 33u, false, true);
    MemoryInline::WriteResolved16(guest_range_4, 0u, r31, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r29 + 890));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_4, 2u, (r31 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r29 + 896));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_4, 4u, (r31 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 70u, (r29 + 952));
    MemoryInline::WriteResolved16(guest_range_4, 6u, (r31 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 72u, (r29 + 954));
    MemoryInline::WriteResolved16(guest_range_4, 8u, (r31 + 8), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 82u, (r29 + 964));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 120), f0.d);
    r0 = fctiwzword0;
    MemoryInline::WriteResolved16(guest_range_4, 16u, (r31 + 16), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 86u, (r29 + 968));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f0.d);
    r0 = fctiwzword1;
    MemoryInline::WriteResolved16(guest_range_4, 18u, (r31 + 18), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 90u, (r29 + 972));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 136), f0.d);
    r0 = fctiwzword2;
    MemoryInline::WriteResolved16(guest_range_4, 20u, (r31 + 20), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 94u, (r29 + 976));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f0.d);
    r0 = fctiwzword3;
    MemoryInline::WriteResolved16(guest_range_4, 24u, (r31 + 24), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 98u, (r29 + 980));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 152), f0.d);
    r0 = fctiwzword4;
    MemoryInline::WriteResolved16(guest_range_4, 22u, (r31 + 22), static_cast<uint16_t>(r0));
    r28 = 0;
    MemoryInline::WriteResolved8(guest_range_4, 26u, (r31 + 26), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_4, 27u, (r31 + 27), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_4, 28u, (r31 + 28), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_4, 29u, (r31 + 29), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_4, 30u, (r31 + 30), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_4, 31u, (r31 + 31), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_4, 32u, (r31 + 32), static_cast<uint8_t>(r28));
}

loc_80271290:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8027135C;
    }
}

loc_80271294:
{
    r3 = (r29 + 320);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r29 + 332);
    r4 = (r1 + 20);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r29 + 344);
    r4 = (r1 + 32);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r29 + 356);
    r4 = (r1 + 44);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r29 + 368);
    r4 = (r1 + 56);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r29 + 380);
    r4 = (r1 + 68);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r29 + 464);
    r4 = (r1 + 80);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r29 + 488);
    r4 = (r1 + 92);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r29 + 500);
    r4 = (r1 + 104);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = r29;
    ctx->lr = 0x80271308u;
    if constexpr (KnownRegArgsCpuCall<0x80272A6Cu>(&func_80272A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        const auto regargs_result_80272A6C_A30E = func_80272A6C_ra188_0_18_0(ctx, r3, r7, r8);
        r3 = static_cast<uint32_t>(regargs_result_80272A6C_A30E);
        r4 = static_cast<uint32_t>(regargs_result_80272A6C_A30E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80272A6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
    }
    guest_range_3 = MemoryInline::ResolveRangeHost((r29 + 1562), 0, 16u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r28)) << 16) | static_cast<uint16_t>(r28)))) {
        MemoryInline::WriteResolved16(guest_range_3, 0u, (r29 + 1562), r28);
        MemoryInline::WriteResolved16(guest_range_3, 2u, (r29 + 1564), r28);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r28)) << 16) | static_cast<uint16_t>(r28)))) {
        MemoryInline::WriteResolved16(guest_range_3, 4u, (r29 + 1566), r28);
        MemoryInline::WriteResolved16(guest_range_3, 6u, (r29 + 1568), r28);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r28)) << 16) | static_cast<uint16_t>(r28)))) {
        MemoryInline::WriteResolved16(guest_range_3, 8u, (r29 + 1570), r28);
        MemoryInline::WriteResolved16(guest_range_3, 10u, (r29 + 1572), r28);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r28)) << 16) | static_cast<uint16_t>(r28)))) {
        MemoryInline::WriteResolved16(guest_range_3, 12u, (r29 + 1574), r28);
        MemoryInline::WriteResolved16(guest_range_3, 14u, (r29 + 1576), r28);
    }
    r3 = r29;
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x80271338u;
    if constexpr (KnownRegArgsCpuCall<0x802788C0u>(&func_802788C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802788C0_AC77 = func_802788C0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802788C0_AC77);
        r4 = static_cast<uint32_t>(regargs_result_802788C0_AC77 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802788C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r29;
    r4 = 0;
    ctx->lr = 0x80271344u;
    if constexpr (KnownRegArgsCpuCall<0x80278A50u>(&func_80278A50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80278A50_AFB7 = func_80278A50_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80278A50_AFB7);
        r4 = static_cast<uint32_t>(regargs_result_80278A50_AFB7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80278A50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = r29;
    ctx->lr = 0x8027134Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x802703C0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r3 = r29;
    ctx->lr = 0x80271354u;
    if constexpr (KnownRegArgsCpuCall<0x8027078Cu>(&func_8027078C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_8027078C_B4AB = func_8027078C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8027078C_B4AB);
        r4 = static_cast<uint32_t>(regargs_result_8027078C_B4AB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8027078Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = r29;
    ctx->lr = 0x8027135Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80270D08u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
}

loc_8027135C:
{
    r11 = (r1 + 192);
    r0 = MemoryInline::FlatRead32((r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80270FB4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80270FB4_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80270FB4 func_80270FB4 preserves=true fpr_mask=0x00000000
