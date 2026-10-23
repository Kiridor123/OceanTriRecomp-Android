#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CCCC0(CpuContext* ctx);
extern "C" uint64_t func_804CCCC0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80471920_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r0_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_80471920;

loc_80471920:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_4, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r4 = 0x80000000u;
    r3 = 0x89050000u;
    r4 = MemoryInline::FlatRead32((r4 + 248));
    r5 = (r3 + -687);
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -15944), 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r13 + -15932));
    r3 = 0;
    r5 = (static_cast<uint32_t>((static_cast<uint64_t>(r5) * static_cast<uint64_t>(r4)) >> 32));
    MemoryInline::FlatWrite32((r13 + -15924), r3);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -15944));
    r6 = (r0 * 80);
    r0 = (r4 - r5);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r0 = (r0 + r5);
}

loc_8047196C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
    r0 = (r0_rot_1 & 8388607);
    MemoryInline::FlatWrite32((r13 + -15920), r0);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804719C4;
    }
}

loc_80471978:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 536870911);
}

loc_8047197C:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804719B4;
    }
}

loc_80471984:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r7, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r7, r3);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r7 + 4), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r7 + 8), r3);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r7 + 12), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r7 + 16), r3);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r7 + 20), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r7 + 24), r3);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r7 + 28), r3);
    }
    r7 = (r7 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80471984;
    }
}

loc_804719AC:
{
    r6 = (r6 & 7);
}

loc_804719B0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804719C4;
    }
}

loc_804719B4:
{
    ctr = r6;
}

loc_804719B8:
{
    MemoryInline::FlatWrite32(r7, r3);
    r7 = (r7 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804719B8;
    }
}

loc_804719C4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r13 + -15932));
    r3 = 0;
    r4 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r13 + -15940));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r5 = (r5_rot_0 & -16);
}

loc_804719D4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80471A24;
    }
}

loc_804719D8:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r0 = (r0_rot_4 & 536870911);
}

loc_804719DC:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80471A14;
    }
}

loc_804719E4:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, r4, r3);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r4 + 4), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r4 + 8), r3);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r4 + 12), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r4 + 16), r3);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r4 + 20), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r4 + 24), r3);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r4 + 28), r3);
    }
    r4 = (r4 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804719E4;
    }
}

loc_80471A0C:
{
    r5 = (r5 & 7);
}

loc_80471A10:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80471A24;
    }
}

loc_80471A14:
{
    ctr = r5;
}

loc_80471A18:
{
    MemoryInline::FlatWrite32(r4, r3);
    r4 = (r4 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80471A18;
    }
}

loc_80471A24:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r13 + -15932));
    r3 = 0;
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r13 + -15936));
    r5 = (r0 * 90);
}

loc_80471A38:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80471A8C;
    }
}

loc_80471A3C:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r0 = (r0_rot_6 & 536870911);
}

loc_80471A40:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80471A78;
    }
}

loc_80471A48:
{
    guest_range_3 = MemoryInline::ResolveRangeHost(r4, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, r4, r3);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r4 + 4), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r4 + 8), r3);
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r4 + 12), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r4 + 16), r3);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r4 + 20), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r4 + 24), r3);
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r4 + 28), r3);
    }
    r4 = (r4 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80471A48;
    }
}

loc_80471A70:
{
    r5 = (r5 & 7);
}

loc_80471A74:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80471A8C;
    }
}

loc_80471A78:
{
    ctr = r5;
    // nop
}

loc_80471A80:
{
    MemoryInline::FlatWrite32(r4, r3);
    r4 = (r4 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80471A80;
    }
}

loc_80471A8C:
{
    r3 = 413663232;
    r31 = 0;
    r29 = (r3 + 36);
    r27 = 0;
    r26 = 0;
    r25 = 0;
    r28 = 0;
    r30 = 1;
    goto loc_80471B7C;
}

loc_80471AB0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r13 + -15936));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -15944));
            r4 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r13 + -15940));
        }
    }
    r3 = (r0 + r25);
    r5 = (r5 + r27);
    guest_range_5 = MemoryInline::ResolveRangeHost((r3 + 24), 0, 294u, false, true);
    MemoryInline::WriteResolved32(guest_range_5, 0u, (r3 + 24), r31);
    r6 = (r4 + r26);
    MemoryInline::WriteResolved32(guest_range_5, 12u, (r3 + 36), r6);
    MemoryInline::WriteResolved16(guest_range_5, 32u, (r3 + 56), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_5, 84u, (r3 + 108), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved32(guest_range_5, 4u, (r3 + 28), r29);
    MemoryInline::WriteResolved16(guest_range_5, 202u, (r3 + 226), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_5, 210u, (r3 + 234), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_5, 230u, (r3 + 254), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_5, 292u, (r3 + 316), static_cast<uint16_t>(r28));
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 282u, ((static_cast<uint32_t>(static_cast<uint16_t>(r28)) << 16) | static_cast<uint16_t>(r28)))) {
        MemoryInline::WriteResolved16(guest_range_5, 282u, (r3 + 306), r28);
        MemoryInline::WriteResolved16(guest_range_5, 284u, (r3 + 308), r28);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 286u, ((static_cast<uint32_t>(static_cast<uint16_t>(r28)) << 16) | static_cast<uint16_t>(r28)))) {
        MemoryInline::WriteResolved16(guest_range_5, 286u, (r3 + 310), r28);
        MemoryInline::WriteResolved16(guest_range_5, 288u, (r3 + 312), r28);
    }
    MemoryInline::WriteResolved16(guest_range_5, 290u, (r3 + 314), static_cast<uint16_t>(r28));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r13 + -15932));
    r0 = (r4 + -1);
}

loc_80471B0C:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_80471B24;
    }
}

loc_80471B10:
{
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r28));
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r28));
    MemoryInline::FlatWrite16((r3 + 42), static_cast<uint16_t>(r28));
    MemoryInline::FlatWrite16((r3 + 40), static_cast<uint16_t>(r28));
    goto loc_80471B3C;
}

loc_80471B24:
{
    r0 = (r5 + 320);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r4 = (r4_rot_2 & 65535);
    MemoryInline::FlatWrite16((r3 + 40), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r3 + 42), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
}

loc_80471B3C:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r0 = (r0_rot_9 & 65535);
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r0));
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r4 = (r4_rot_4 & 65535);
    MemoryInline::FlatWrite16((r3 + 46), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r5 + 6), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r3 + 110), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r3 + 112), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r5 + 70), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r5 + 72), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite32((r3 + 12), r30);
    // inline leaf 0x8046EDA0 (7 guest instruction(s))
    r5 = 0x80700000u;
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r5 + -26256));
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWriteRam32((r5 + -26256), r3);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    // end of inlined leaf 0x8046EDA0
    r27 = (r27 + 320);
    r26 = (r26 + 64);
    r25 = (r25 + 360);
    r31 = (r31 + 1);
}

loc_80471B7C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r13 + -15932));
}

loc_80471B84:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(r0))) {
        goto loc_80471AB0;
    }
}

loc_80471B88:
{
    r4 = (r0 * 320);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -15944));
    if constexpr (KnownRegArgsCpuCall<0x804CCCC0u>(&func_804CCCC0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_804CCCC0_3BAE = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_3BAE);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_3BAE >> 32);
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_6 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_6, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80471920(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80471920_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80471920 func_80471920 preserves=true fpr_mask=0x00000000
