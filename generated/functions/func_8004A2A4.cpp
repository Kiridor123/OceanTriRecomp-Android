#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004A270(CpuContext* ctx);
extern "C" void func_8004A270_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027EF34(CpuContext* ctx);
extern "C" uint64_t func_8027EF34_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8004A270_statefree(uint32_t, uint32_t);
extern "C" void func_8004A270_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_8004A2A4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8004A2A4;

loc_8004A2A4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r4;
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 116u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, r3);
    guest_range_2 = MemoryInline::ResolveRangeHost((r4 + 20), 0, 360u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r4 + 20), static_cast<uint8_t>(r0));
    r3 = (r4 + 320);
    r4 = (r30 + 68);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::ReadResolved8(guest_range_1, 68u, r4);
    MemoryInline::WriteResolved8(guest_range_2, 300u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 69u, (r4 + 1));
    MemoryInline::WriteResolved8(guest_range_2, 301u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 70u, (r4 + 2));
    MemoryInline::WriteResolved16(guest_range_2, 302u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 72u, (r4 + 4));
    MemoryInline::WriteResolved16(guest_range_2, 304u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 74u, (r4 + 6));
    MemoryInline::WriteResolved32(guest_range_2, 306u, (r3 + 6), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 78u, (r4 + 10));
    MemoryInline::WriteResolved16(guest_range_2, 310u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r31 + 332);
    r4 = (r30 + 92);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::ReadResolved8(guest_range_1, 92u, r4);
    MemoryInline::WriteResolved8(guest_range_2, 312u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 93u, (r4 + 1));
    MemoryInline::WriteResolved8(guest_range_2, 313u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 94u, (r4 + 2));
    MemoryInline::WriteResolved16(guest_range_2, 314u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 96u, (r4 + 4));
    MemoryInline::WriteResolved16(guest_range_2, 316u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 98u, (r4 + 6));
    MemoryInline::WriteResolved32(guest_range_2, 318u, (r3 + 6), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 102u, (r4 + 10));
    MemoryInline::WriteResolved16(guest_range_2, 322u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r31 + 344);
    r4 = (r30 + 80);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::ReadResolved8(guest_range_1, 80u, r4);
    MemoryInline::WriteResolved8(guest_range_2, 324u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 81u, (r4 + 1));
    MemoryInline::WriteResolved8(guest_range_2, 325u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 82u, (r4 + 2));
    MemoryInline::WriteResolved16(guest_range_2, 326u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 84u, (r4 + 4));
    MemoryInline::WriteResolved16(guest_range_2, 328u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 86u, (r4 + 6));
    MemoryInline::WriteResolved32(guest_range_2, 330u, (r3 + 6), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 90u, (r4 + 10));
    MemoryInline::WriteResolved16(guest_range_2, 334u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r31 + 356);
    r4 = (r30 + 104);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::ReadResolved8(guest_range_1, 104u, r4);
    MemoryInline::WriteResolved8(guest_range_2, 336u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 105u, (r4 + 1));
    MemoryInline::WriteResolved8(guest_range_2, 337u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 106u, (r4 + 2));
    MemoryInline::WriteResolved16(guest_range_2, 338u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 108u, (r4 + 4));
    MemoryInline::WriteResolved16(guest_range_2, 340u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 110u, (r4 + 6));
    MemoryInline::WriteResolved32(guest_range_2, 342u, (r3 + 6), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 114u, (r4 + 10));
    MemoryInline::WriteResolved16(guest_range_2, 346u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r31 + 368);
    r4 = (r30 + 56);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::ReadResolved8(guest_range_1, 56u, r4);
    MemoryInline::WriteResolved8(guest_range_2, 348u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 57u, (r4 + 1));
    MemoryInline::WriteResolved8(guest_range_2, 349u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 58u, (r4 + 2));
    MemoryInline::WriteResolved16(guest_range_2, 350u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 60u, (r4 + 4));
    MemoryInline::WriteResolved16(guest_range_2, 352u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 62u, (r4 + 6));
    MemoryInline::WriteResolved32(guest_range_2, 354u, (r3 + 6), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 66u, (r4 + 10));
    MemoryInline::WriteResolved16(guest_range_2, 358u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r31 + 380);
    r4 = (r30 + 116);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead8((r30 + 11));
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 28), 0, 583u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 582u, (r31 + 610), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 1));
    MemoryInline::WriteResolved8(guest_range_0, 581u, (r31 + 609), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 2));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r31 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 3));
    MemoryInline::WriteResolved8(guest_range_0, 580u, (r31 + 608), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r3 & -16777216);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 572u, (r31 + 600), static_cast<uint8_t>(r0));
    r0 = (r3 & 16711680);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 65535);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 573u, (r31 + 601), static_cast<uint8_t>(r0));
    r0 = (r3 & 65280);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_2 & 16777215);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 574u, (r31 + 602), static_cast<uint8_t>(r0));
    r0 = (r3 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 575u, (r31 + 603), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 8));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r31 + 28), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r0 = (r3 & -16777216);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 576u, (r31 + 604), static_cast<uint8_t>(r0));
    r0 = (r3 & 16711680);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & 65535);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 577u, (r31 + 605), static_cast<uint8_t>(r0));
    r0 = (r3 & 65280);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_5 & 16777215);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 578u, (r31 + 606), static_cast<uint8_t>(r0));
    r0 = (r3 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 579u, (r31 + 607), static_cast<uint8_t>(r0));
    r3 = (r31 + 464);
    r4 = (r30 + 20);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r31 + 488);
    r4 = (r30 + 32);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r31 + 500);
    r4 = (r30 + 44);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        const auto state_free_result_8004A270_2F8A = func_8004A270_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_8004A270_2F8A);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r31 + 464);
    r4 = (r31 + 488);
    ctx->lr = 0x8004A3E0u;
    if constexpr (KnownRegArgsCpuCall<0x8027EF34u>(&func_8027EF34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027EF34_323D = func_8027EF34_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027EF34_323D);
        r4 = static_cast<uint32_t>(regargs_result_8027EF34_323D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027EF34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r3));
    r28 = 0;
    r29 = r30;
}

loc_8004A3EC:
{
    r4 = MemoryInline::FlatRead16((r29 + 224));
}

loc_8004A3F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8004A40C;
    }
}

loc_8004A3F8:
{
    r5 = MemoryInline::FlatRead16((r29 + 226));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
}

loc_8004A400:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_8004A40C;
    }
}

loc_8004A404:
{
    r3 = r31;
    ctx->lr = 0x8004A40Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80272E94u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
}

loc_8004A40C:
{
    r29 = (r29 + 4);
    r28 = (r28 + 1);
}

loc_8004A418:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(8))) {
        goto loc_8004A3EC;
    }
}

loc_8004A41C:
{
    r28 = 0;
    r29 = r30;
}

loc_8004A424:
{
    r4 = MemoryInline::FlatRead16((r29 + 128));
}

loc_8004A42C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8004A444;
    }
}

loc_8004A430:
{
    r5 = MemoryInline::FlatRead16((r29 + 130));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
}

loc_8004A438:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_8004A444;
    }
}

loc_8004A43C:
{
    r3 = r31;
    ctx->lr = 0x8004A444u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80272E94u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
}

loc_8004A444:
{
    r29 = (r29 + 4);
    r28 = (r28 + 1);
}

loc_8004A450:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(24))) {
        goto loc_8004A424;
    }
}

loc_8004A454:
{
    r0 = MemoryInline::FlatRead8((r30 + 9));
    MemoryInline::FlatWrite8((r31 + 2844), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 10));
    MemoryInline::FlatWrite8((r31 + 2845), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 12));
    MemoryInline::FlatWrite8((r31 + 2846), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 13));
    MemoryInline::FlatWrite8((r31 + 2847), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004A2A4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004A2A4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8004A2A4 func_8004A2A4 preserves=true fpr_mask=0x00000000
