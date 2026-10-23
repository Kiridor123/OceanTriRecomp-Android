#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80535AE4(CpuContext* ctx);
extern "C" uint64_t func_80535AE4_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8053500C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lhzux_805351D0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r23_addr_0 = 0;
    uint32_t r23_addr_1 = 0;
    uint32_t r23_addr_2 = 0;
    uint32_t r23_addr_3 = 0;
    uint32_t r23_addr_4 = 0;
    uint32_t r23_addr_5 = 0;
    uint32_t r26_addr_0 = 0;
    uint32_t r26_addr_1 = 0;
    uint32_t r26_addr_2 = 0;
    uint32_t r26_addr_3 = 0;
    uint32_t r26_addr_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
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
    uint32_t ctr = ctx->ctr;

    goto loc_8053500C;

loc_8053500C:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457464 (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    // end of inlined leaf 0x80457464
    r25 = MemoryInline::FlatRead32((r5 + 4));
    r18 = r3;
    r19 = r4;
    r20 = r5;
    r0 = MemoryInline::FlatRead32((r25 + 16));
    r21 = (r4 + 188);
    r22 = 0;
    r28 = 0;
    r23 = (r25 + r0);
    goto loc_80535078;
}

loc_80535048:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 262140);
    r23_addr_2 = (r23 + r0);
    r0 = MemoryInline::FlatRead32(r23_addr_2);
    r3 = (r25 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 21));
}

loc_8053505C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80535074;
    }
}

loc_80535060:
{
    r4 = r21;
    ctx->lr = 0x80535068u;
    if constexpr (KnownRegArgsCpuCall<0x80535AE4u>(&func_80535AE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80535AE4_FF8 = func_80535AE4_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_80535AE4_FF8);
        r4 = static_cast<uint32_t>(regargs_result_80535AE4_FF8 >> 32);
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
        InvokeDirectCpu<0x80535AE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8053506C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80535074;
    }
}

loc_80535070:
{
    goto loc_80535090;
}

loc_80535074:
{
    r28 = (r28 + 1);
}

loc_80535078:
{
    r0 = MemoryInline::FlatRead16((r25 + 14));
    r3 = (r28 & 65535);
}

loc_80535084:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80535048;
    }
}

loc_80535088:
{
    r3 = 65536;
    r28 = (r3 + -1);
}

loc_80535090:
{
    r0 = (r28 & 65535);
}

loc_80535098:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_805350A0;
    }
}

loc_8053509C:
{
    r22 = 1;
}

loc_805350A0:
{
    r12 = MemoryInline::FlatRead32(r19);
    r3 = r19;
    r12 = MemoryInline::FlatRead32((r12 + 100));
    ctr = r12;
    ctx->lr = 0x805350B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r29 = r3;
    r23 = (r1 + 8);
    r31 = (r3 & 255);
    r21 = 0;
    r30 = 65536;
    goto loc_8053515C;
}

loc_805350CC:
{
    r12 = MemoryInline::FlatRead32(r19);
    r3 = r19;
    r4 = (r21 & 255);
    r12 = MemoryInline::FlatRead32((r12 + 108));
    ctr = r12;
    ctx->lr = 0x805350E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r25 + 16));
    r24 = (r3 + 68);
    r27 = 0;
    r26 = (r25 + r0);
    goto loc_80535128;
}

loc_805350F8:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & 262140);
    r26_addr_3 = (r26 + r0);
    r0 = MemoryInline::FlatRead32(r26_addr_3);
    r3 = (r25 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 21));
}

loc_8053510C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80535124;
    }
}

loc_80535110:
{
    r4 = r24;
    ctx->lr = 0x80535118u;
    if constexpr (KnownRegArgsCpuCall<0x80535AE4u>(&func_80535AE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80535AE4_1DD6 = func_80535AE4_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_80535AE4_1DD6);
        r4 = static_cast<uint32_t>(regargs_result_80535AE4_1DD6 >> 32);
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
        InvokeDirectCpu<0x80535AE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8053511C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80535124;
    }
}

loc_80535120:
{
    goto loc_8053513C;
}

loc_80535124:
{
    r27 = (r27 + 1);
}

loc_80535128:
{
    r0 = MemoryInline::FlatRead16((r25 + 14));
    r3 = (r27 & 65535);
}

loc_80535134:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_805350F8;
    }
}

loc_80535138:
{
    r27 = (r30 + -1);
}

loc_8053513C:
{
    r0 = (r27 & 65535);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 510);
}

loc_80535148:
{
    r23_addr_5 = (r23 + r3);
    MemoryInline::FlatWrite16(r23_addr_5, static_cast<uint16_t>(r27));
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80535158;
    }
}

loc_80535150:
{
    r0 = (r22 + 1);
    r22 = (r0 & 65535);
}

loc_80535158:
{
    r21 = (r21 + 1);
}

loc_8053515C:
{
    r0 = (r21 & 255);
}

loc_80535164:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r31))) {
        goto loc_805350CC;
    }
}

loc_80535168:
{
}

loc_8053516C:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_80535254;
    }
}

loc_80535170:
{
    r6 = MemoryInline::FlatRead32(r20);
}

loc_80535178:
{
    r5 = MemoryInline::FlatRead32((r20 + 4));
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r20 + 8));
    r0 = MemoryInline::FlatRead32((r20 + 12));
    MemoryInline::FlatWrite32(r18, r6);
    MemoryInline::FlatWrite32((r18 + 4), r5);
    MemoryInline::FlatWrite32((r18 + 8), r4);
    MemoryInline::FlatWrite32((r18 + 12), r0);
    MemoryInline::FlatWrite16((r18 + 16), static_cast<uint16_t>(r28));
    MemoryInline::FlatWrite8((r18 + 38), static_cast<uint8_t>(r29));
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80535250;
    }
}

loc_805351A4:
{
}

loc_805351A8:
{
    r0 = (r29 + 248);
    if ((static_cast<uint32_t>(r31) <= static_cast<uint32_t>(8))) {
        goto loc_8053521C;
    }
}

loc_805351B0:
{
    r4 = (r0 & 255);
    r0 = (r4 + 7);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_8 & 536870911);
    ctr = r0;
}

loc_805351C4:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(0))) {
        goto loc_8053521C;
    }
}

loc_805351C8:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & 510);
    r5 = (r1 + 8);
    addr_lhzux_805351D0_loc_0 = (r5 + r0);
    guest_range_3 = MemoryInline::ResolveRangeHost(addr_lhzux_805351D0_loc_0, 0, 16u, true, false);
    r4 = MemoryInline::ReadResolved16(guest_range_3, 0u, addr_lhzux_805351D0_loc_0);
    r5 = addr_lhzux_805351D0_loc_0;
    r6 = (r18 + r0);
    r3 = (r3 + 8);
    guest_range_1 = MemoryInline::ResolveRangeHost((r6 + 20), 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r6 + 20), static_cast<uint16_t>(r4));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_3, 2u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved16(guest_range_3, 2u, (r5 + 2));
            r4 = MemoryInline::ReadResolved16(guest_range_3, 4u, (r5 + 4));
        }
    }
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r6 + 22), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 6u, (r5 + 6));
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r6 + 24), static_cast<uint16_t>(r4));
    r4 = MemoryInline::ReadResolved16(guest_range_3, 8u, (r5 + 8));
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r6 + 26), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 10u, (r5 + 10));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r6 + 28), static_cast<uint16_t>(r4));
    r4 = MemoryInline::ReadResolved16(guest_range_3, 12u, (r5 + 12));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r6 + 30), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 14u, (r5 + 14));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 12u, (r6 + 32), r4);
        MemoryInline::WriteResolved16(guest_range_1, 14u, (r6 + 34), r0);
    }
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805351C8;
    }
}

loc_8053521C:
{
    r4 = (r29 & 255);
    r5 = (r3 & 255);
    r0 = (r4 - r5);
    r6 = (r1 + 8);
    ctr = r0;
}

loc_80535234:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r4))) {
        goto loc_80535250;
    }
}

loc_80535238:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 510);
    r3 = (r3 + 1);
    r6_addr_2 = (r6 + r4);
    r0 = MemoryInline::FlatRead16(r6_addr_2);
    r4 = (r18 + r4);
    MemoryInline::FlatWrite16((r4 + 20), static_cast<uint16_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80535238;
    }
}

loc_80535250:
{
    MemoryInline::FlatWrite16((r18 + 18), static_cast<uint16_t>(r22));
}

loc_80535254:
{
    r11 = (r1 + 96);
    // inline leaf 0x804574B0 (15 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    // end of inlined leaf 0x804574B0
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8053500C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8053500C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8053500C func_8053500C preserves=true fpr_mask=0x00000000
