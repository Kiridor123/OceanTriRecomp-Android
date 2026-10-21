#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804574EC(CpuContext* ctx);
extern "C" uint64_t func_804574EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80457710(CpuContext* ctx);
extern "C" uint64_t func_80457710_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80418470_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_ca_5 = 0;
    uint32_t r0_ca_6 = 0;
    uint32_t r0_ca_7 = 0;
    uint32_t r0_ca_8 = 0;
    uint32_t r0_not_0 = 0;
    uint32_t r0_not_1 = 0;
    uint32_t r0_not_2 = 0;
    uint32_t r0_not_3 = 0;
    uint32_t r0_not_4 = 0;
    uint32_t r0_not_5 = 0;
    uint32_t r0_not_6 = 0;
    uint32_t r0_not_7 = 0;
    uint32_t r0_not_8 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r0_subfc_sub_1 = 0;
    uint32_t r0_subfc_sub_2 = 0;
    uint32_t r0_subfc_sub_3 = 0;
    uint32_t r27_ca_0 = 0;
    uint32_t r27_ca_1 = 0;
    uint32_t r27_ca_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80418470u);
    goto loc_80418470;

loc_80418470:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r28 = r7;
}

loc_8041848C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804187E0;
    }
}

loc_80418490:
{
    r8 = MemoryInline::FlatRead32((r3 + 140));
    r7 = (static_cast<int32_t>(r8) >> 31);
    r3 = 60030976;
    r4 = (r3 + -30976);
    r30 = 0;
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r8) * static_cast<uint64_t>(r4)) >> 32));
    r3 = (r7 * r4);
    r3 = (r0 + r3);
    r0 = (r8 * r30);
    r4 = (r8 * r4);
    r0 = (r3 + r0);
    r26 = (r6 + r4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6)) + static_cast<uint64_t>(static_cast<uint32_t>(r4)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r27_ca_1 = (xer >> 29) & 1u;
    r27 = (r5 + r0);
    r27 = (r27 + r27_ca_1);
    r3 = 500629504;
    r6 = (r3 + 24576);
    r3 = r27;
    r4 = r26;
    r5 = 20;
    if constexpr (KnownRegArgsCpuCall<0x804574ECu>(&func_804574EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804574EC_EEB = func_804574EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804574EC_EEB);
        r4 = static_cast<uint32_t>(regargs_result_804574EC_EEB >> 32);
        r0 = ctx->gpr[0];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804574ECu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r29 = r4;
    r5 = (r4 + -2);
    r3 = 0x92490000u;
    r0 = (r3 + 9363);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r3 = (r0 + r5);
    r0 = (static_cast<int32_t>(r3) >> 2);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r6 = (r6_rot_1 & 1);
    r0 = (r0 + r6);
    MemoryInline::FlatWrite32((r28 + 16), r0);
    r0 = (static_cast<int32_t>(r3) >> 2);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 7);
    r0 = (r5 - r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r28 + 12), static_cast<uint16_t>(r0));
    r3 = (static_cast<int32_t>(r4) >> 31);
    r24 = 131072;
    r6 = (r24 + 15025);
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x804574ECu>(&func_804574EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804574EC_16B2 = func_804574EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804574EC_16B2);
        r4 = static_cast<uint32_t>(regargs_result_804574EC_16B2 >> 32);
        r0 = ctx->gpr[0];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804574ECu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r25 = r4;
    r3 = (static_cast<int32_t>(r29) >> 31);
    r6 = (r24 + 15025);
    r4 = r29;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80457710u>(&func_80457710)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80457710_1B6C = func_80457710_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80457710_1B6C);
        r4 = static_cast<uint32_t>(regargs_result_80457710_1B6C >> 32);
        r0 = ctx->gpr[0];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80457710u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r29 = r4;
    r0 = (r25 * 400);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    r3 = (static_cast<int32_t>(r4) >> 31);
    r31 = 366;
    r0 = (r4 - r31);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r31) ? 1u : 0u) << 29);
    r0_not_1 = ~(r30);
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_not_1 + r3);
    r0 = (r0 + r0_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r3)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0_not_2 = ~(r4);
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_not_2 + r4);
    r0 = (r0 + r0_ca_2);
    r0 = (0 - r0);
}

loc_80418578:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80418584;
    }
}

loc_8041857C:
{
    r0 = 1;
    goto loc_804186A0;
}

loc_80418584:
{
    r4 = (r4 + -1);
    r3 = (static_cast<int32_t>(r4) >> 31);
    r25 = 65536;
    r6 = (r25 + -29012);
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x804574ECu>(&func_804574EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804574EC_2467 = func_804574EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804574EC_2467);
        r4 = static_cast<uint32_t>(regargs_result_804574EC_2467 >> 32);
        r0 = ctx->gpr[0];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804574ECu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r24 = r4;
    r4 = (r29 + -1);
    r3 = (static_cast<int32_t>(r4) >> 31);
    r6 = (r25 + -29012);
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80457710u>(&func_80457710)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80457710_2928 = func_80457710_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80457710_2928);
        r4 = static_cast<uint32_t>(regargs_result_80457710_2928 >> 32);
        r0 = ctx->gpr[0];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80457710u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r29 = r4;
    r3 = MemoryInline::FlatRead16(r28);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r24 * 100);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    r3 = (static_cast<int32_t>(r4) >> 31);
    r0 = 365;
    r0_subfc_sub_1 = r0;
    r0 = (r4 - r0_subfc_sub_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0_subfc_sub_1) ? 1u : 0u) << 29);
    r0_not_3 = ~(r30);
    r0_ca_3 = (xer >> 29) & 1u;
    r0 = (r0_not_3 + r3);
    r0 = (r0 + r0_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_3)) + static_cast<uint64_t>(static_cast<uint32_t>(r3)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0_not_4 = ~(r4);
    r0_ca_4 = (xer >> 29) & 1u;
    r0 = (r0_not_4 + r4);
    r0 = (r0 + r0_ca_4);
    r0 = (0 - r0);
}

loc_804185E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804185F4;
    }
}

loc_804185EC:
{
    r0 = 0;
    goto loc_804186A0;
}

loc_804185F4:
{
    r4 = (r4 + 1);
    r3 = (static_cast<int32_t>(r4) >> 31);
    r5 = 0;
    r6 = 1461;
    if constexpr (KnownRegArgsCpuCall<0x804574ECu>(&func_804574EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804574EC_32B1 = func_804574EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804574EC_32B1);
        r4 = static_cast<uint32_t>(regargs_result_804574EC_32B1 >> 32);
        r0 = ctx->gpr[0];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804574ECu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r25 = r4;
    r4 = (r29 + 1);
    r3 = (static_cast<int32_t>(r4) >> 31);
    r5 = 0;
    r6 = 1461;
    if constexpr (KnownRegArgsCpuCall<0x80457710u>(&func_80457710)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80457710_3767 = func_80457710_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80457710_3767);
        r4 = static_cast<uint32_t>(regargs_result_80457710_3767 >> 32);
        r0 = ctx->gpr[0];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80457710u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r29 = r4;
    r3 = MemoryInline::FlatRead16(r28);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    r3 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r4 - r31);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r31) ? 1u : 0u) << 29);
    r0_not_5 = ~(r30);
    r0_ca_5 = (xer >> 29) & 1u;
    r0 = (r0_not_5 + r3);
    r0 = (r0 + r0_ca_5);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_5)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0_not_6 = ~(r4);
    r0_ca_6 = (xer >> 29) & 1u;
    r0 = (r0_not_6 + r4);
    r0 = (r0 + r0_ca_6);
    r0 = (0 - r0);
}

loc_80418650:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8041865C;
    }
}

loc_80418654:
{
    r0 = 1;
    goto loc_804186A0;
}

loc_8041865C:
{
    r4 = (r4 + -1);
    r3 = (static_cast<int32_t>(r4) >> 31);
    r5 = 0;
    r6 = 365;
    if constexpr (KnownRegArgsCpuCall<0x804574ECu>(&func_804574EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804574EC_410D = func_804574EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804574EC_410D);
        r4 = static_cast<uint32_t>(regargs_result_804574EC_410D >> 32);
        r0 = ctx->gpr[0];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804574ECu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r30 = r4;
    r4 = (r29 + -1);
    r3 = (static_cast<int32_t>(r4) >> 31);
    r5 = 0;
    r6 = 365;
    if constexpr (KnownRegArgsCpuCall<0x80457710u>(&func_80457710)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80457710_45C3 = func_80457710_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80457710_45C3);
        r4 = static_cast<uint32_t>(regargs_result_80457710_45C3 >> 32);
        r0 = ctx->gpr[0];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80457710u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r29 = r4;
    r3 = MemoryInline::FlatRead16(r28);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    r0 = 0;
}

loc_804186A0:
{
    r4 = (r0 * 48);
    r3 = 0x80600000u;
    r0 = (r3 + 12872);
    r4 = (r0 + r4);
    r3 = 0;
    r0 = 2;
    ctr = r0;
}

loc_804186BC:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_804186C4:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r0))) {
        goto loc_8041873C;
    }
}

loc_804186C8:
{
    r29 = (r29 - r0);
    r3 = (r3 + 1);
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_804186D8:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r0))) {
        goto loc_8041873C;
    }
}

loc_804186DC:
{
    r29 = (r29 - r0);
    r3 = (r3 + 1);
    r0 = MemoryInline::FlatRead32((r4 + 8));
}

loc_804186EC:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r0))) {
        goto loc_8041873C;
    }
}

loc_804186F0:
{
    r29 = (r29 - r0);
    r3 = (r3 + 1);
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80418700:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r0))) {
        goto loc_8041873C;
    }
}

loc_80418704:
{
    r29 = (r29 - r0);
    r3 = (r3 + 1);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_80418714:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r0))) {
        goto loc_8041873C;
    }
}

loc_80418718:
{
    r29 = (r29 - r0);
    r3 = (r3 + 1);
    r0 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80418728:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r0))) {
        goto loc_8041873C;
    }
}

loc_8041872C:
{
    r29 = (r29 - r0);
    r4 = (r4 + 24);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804186BC;
    }
}

loc_8041873C:
{
    r0 = (r3 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r28 + 2), static_cast<uint16_t>(r0));
    r0 = (r29 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r28 + 4), static_cast<uint16_t>(r0));
    r3 = 500629504;
    r6 = (r3 + 24576);
    r3 = r27;
    r4 = r26;
    r5 = 20;
    if constexpr (KnownRegArgsCpuCall<0x80457710u>(&func_80457710)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80457710_52E9 = func_80457710_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80457710_52E9);
        r4 = static_cast<uint32_t>(regargs_result_80457710_52E9 >> 32);
        r0 = ctx->gpr[0];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80457710u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r25 = r4;
    r24 = r3;
    r26 = -694943744;
    r6 = (r26 + -23552);
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x804574ECu>(&func_804574EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804574EC_578E = func_804574EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804574EC_578E);
        r4 = static_cast<uint32_t>(regargs_result_804574EC_578E >> 32);
        r0 = ctx->gpr[0];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804574ECu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    MemoryInline::FlatWrite16((r28 + 6), static_cast<uint16_t>(r4));
    r6 = (r26 + -23552);
    r3 = r24;
    r4 = r25;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80457710u>(&func_80457710)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80457710_5C62 = func_80457710_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80457710_5C62);
        r4 = static_cast<uint32_t>(regargs_result_80457710_5C62 >> 32);
        r0 = ctx->gpr[0];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80457710u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r25 = r4;
    r24 = r3;
    r26 = 60030976;
    r6 = (r26 + -30976);
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x804574ECu>(&func_804574EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804574EC_6105 = func_804574EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804574EC_6105);
        r4 = static_cast<uint32_t>(regargs_result_804574EC_6105 >> 32);
        r0 = ctx->gpr[0];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804574ECu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    MemoryInline::FlatWrite16((r28 + 8), static_cast<uint16_t>(r4));
    r6 = (r26 + -30976);
    r3 = r24;
    r4 = r25;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80457710u>(&func_80457710)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_80457710_65D9 = func_80457710_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80457710_65D9);
        r4 = static_cast<uint32_t>(regargs_result_80457710_65D9 >> 32);
        r0 = ctx->gpr[0];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80457710u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r5 = 983040;
    r6 = (r5 + 16960);
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x804574ECu>(&func_804574EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_804574EC_6A5B = func_804574EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804574EC_6A5B);
        r4 = static_cast<uint32_t>(regargs_result_804574EC_6A5B >> 32);
        r0 = ctx->gpr[0];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804574ECu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    MemoryInline::FlatWrite16((r28 + 10), static_cast<uint16_t>(r4));
}

loc_804187E0:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80418470(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80418470_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80418470 func_80418470 preserves=true fpr_mask=0x00000000
