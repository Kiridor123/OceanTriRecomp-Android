#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802717D0(CpuContext* ctx);
extern "C" uint64_t func_802717D0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802719DC(CpuContext* ctx);
extern "C" uint64_t func_802719DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802723B0(CpuContext* ctx);
extern "C" uint64_t func_802723B0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802724A0(CpuContext* ctx);
extern "C" uint64_t func_802724A0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80272590(CpuContext* ctx);
extern "C" uint64_t func_80272590_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8031A2A8(CpuContext* ctx);
extern "C" uint64_t func_8031A2A8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8031A474(CpuContext* ctx);
extern "C" uint64_t func_8031A474_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80319F7C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_10 = 0;
    uint32_t r27_addr_11 = 0;
    uint32_t r27_addr_12 = 0;
    uint32_t r27_addr_13 = 0;
    uint32_t r27_addr_14 = 0;
    uint32_t r27_addr_15 = 0;
    uint32_t r27_addr_16 = 0;
    uint32_t r27_addr_17 = 0;
    uint32_t r27_addr_18 = 0;
    uint32_t r27_addr_19 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_20 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r27_addr_4 = 0;
    uint32_t r27_addr_5 = 0;
    uint32_t r27_addr_6 = 0;
    uint32_t r27_addr_7 = 0;
    uint32_t r27_addr_8 = 0;
    uint32_t r27_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    goto loc_80319F7C;

loc_80319F7C:
{
    MemoryInline::FlatWriteRam32((r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    r11 = (r1 + 192);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r25 = r3;
    r24 = r4;
    r26 = r6;
    r27 = r7;
    r28 = 0;
    r0 = (r5 & 255);
    r0 = (r0 & 1);
}

loc_80319FB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031A1FC;
    }
}

loc_80319FB4:
{
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost(r6, 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, r6, static_cast<uint16_t>(r0));
    guest_range_2 = MemoryInline::ResolveRangeHost(r7, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r7, static_cast<uint8_t>(r0));
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 32u, false, true);
    MemoryInline::WriteResolved16(guest_range_4, 16u, (r1 + 24), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 8u, (r1 + 16), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 0u, (r1 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r6 + 2), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r7 + 1), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_4, 18u, (r1 + 26), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 9u, (r1 + 17), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r1 + 9), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r6 + 4), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r7 + 2), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_4, 20u, (r1 + 28), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 10u, (r1 + 18), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r1 + 10), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r6 + 6), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r7 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_4, 22u, (r1 + 30), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 11u, (r1 + 19), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r1 + 11), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r6 + 8), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r7 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_4, 24u, (r1 + 32), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 12u, (r1 + 20), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r1 + 12), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r6 + 10), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r7 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_4, 26u, (r1 + 34), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 13u, (r1 + 21), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r1 + 13), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r6 + 12), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r7 + 6), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_4, 28u, (r1 + 36), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 14u, (r1 + 22), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r1 + 14), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r6 + 14), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r7 + 7), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_4, 30u, (r1 + 38), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 15u, (r1 + 23), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r1 + 15), static_cast<uint8_t>(r0));
    r5 = (r1 + 40);
    ctx->lr = 0x8031A060u;
    if constexpr (KnownRegArgsCpuCall<0x8031A2A8u>(&func_8031A2A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_8031A2A8_1CFB = func_8031A2A8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031A2A8_1CFB);
        r4 = static_cast<uint32_t>(regargs_result_8031A2A8_1CFB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8031A2A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r3 = r25;
    r4 = r24;
    r5 = (r1 + 40);
    ctx->lr = 0x8031A070u;
    if constexpr (KnownRegArgsCpuCall<0x8031A474u>(&func_8031A474)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_8031A474_20F0 = func_8031A474_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031A474_20F0);
        r4 = static_cast<uint32_t>(regargs_result_8031A474_20F0 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8031A474u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    }
    r3 = (r1 + 40);
    r4 = (r1 + 24);
    r5 = (r1 + 16);
    r6 = (r1 + 8);
    ctx->lr = 0x8031A084u;
    if constexpr (KnownRegArgsCpuCall<0x80272590u>(&func_80272590)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_80272590_25CC = func_80272590_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80272590_25CC);
        r4 = static_cast<uint32_t>(regargs_result_80272590_25CC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80272590u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    }
    r29 = 0;
    r31 = (r1 + 24);
    r30 = (r1 + 8);
    r24 = 2;
}

loc_8031A094:
{
    r0 = MemoryInline::FlatRead16(r31);
}

loc_8031A09C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031A1E0;
    }
}

loc_8031A0A0:
{
    MemoryInline::FlatWrite16(r26, static_cast<uint16_t>(r0));
    r28 = (r28 + 1);
    r3 = (r1 + 40);
    r4 = MemoryInline::FlatRead8(r30);
    ctx->lr = 0x8031A0B4u;
    if constexpr (KnownRegArgsCpuCall<0x802723B0u>(&func_802723B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_802723B0_2BFE = func_802723B0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802723B0_2BFE);
        r4 = static_cast<uint32_t>(regargs_result_802723B0_2BFE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x802723B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_8031A0BC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8031A0CC;
    }
}

loc_8031A0C0:
{
    r27_addr_2 = (r27 + r29);
    r0 = MemoryInline::FlatRead8(r27_addr_2);
    r0 = (r0 | 16);
    r27_addr_3 = (r27 + r29);
    MemoryInline::FlatWrite8(r27_addr_3, static_cast<uint8_t>(r0));
}

loc_8031A0CC:
{
    r3 = r25;
    r4 = (r1 + 112);
    r5 = (r1 + 124);
    r6 = MemoryInline::FlatRead8(r30);
    ctx->lr = 0x8031A0E0u;
    if constexpr (KnownRegArgsCpuCall<0x802717D0u>(&func_802717D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802717D0_31A3 = func_802717D0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802717D0_31A3);
        r4 = static_cast<uint32_t>(regargs_result_802717D0_31A3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802717D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8031A0E4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8031A0F4;
    }
}

loc_8031A0E8:
{
    r27_addr_5 = (r27 + r29);
    r0 = MemoryInline::FlatRead8(r27_addr_5);
    r0 = (r0 | 32);
    r27_addr_6 = (r27 + r29);
    MemoryInline::FlatWrite8(r27_addr_6, static_cast<uint8_t>(r0));
}

loc_8031A0F4:
{
    r7 = 0;
    r6 = 0;
    r4 = r25;
    ctr = r24;
}

loc_8031A104:
{
    r5 = MemoryInline::FlatRead16((r4 + 1522));
}

loc_8031A10C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8031A130;
    }
}

loc_8031A110:
{
    r3 = (r25 + r6);
    r0 = MemoryInline::FlatRead8((r3 + 1538));
}

loc_8031A11C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031A130;
    }
}

loc_8031A120:
{
    r0 = MemoryInline::FlatRead16(r26);
}

loc_8031A128:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8031A130;
    }
}

loc_8031A12C:
{
    r7 = 1;
}

loc_8031A130:
{
    r6 = (r6 + 1);
    r5 = MemoryInline::FlatRead16((r4 + 1524));
}

loc_8031A13C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8031A160;
    }
}

loc_8031A140:
{
    r3 = (r25 + r6);
    r0 = MemoryInline::FlatRead8((r3 + 1538));
}

loc_8031A14C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031A160;
    }
}

loc_8031A150:
{
    r0 = MemoryInline::FlatRead16(r26);
}

loc_8031A158:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8031A160;
    }
}

loc_8031A15C:
{
    r7 = 1;
}

loc_8031A160:
{
    r6 = (r6 + 1);
    r5 = MemoryInline::FlatRead16((r4 + 1526));
}

loc_8031A16C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8031A190;
    }
}

loc_8031A170:
{
    r3 = (r25 + r6);
    r0 = MemoryInline::FlatRead8((r3 + 1538));
}

loc_8031A17C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031A190;
    }
}

loc_8031A180:
{
    r0 = MemoryInline::FlatRead16(r26);
}

loc_8031A188:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8031A190;
    }
}

loc_8031A18C:
{
    r7 = 1;
}

loc_8031A190:
{
    r6 = (r6 + 1);
    r5 = MemoryInline::FlatRead16((r4 + 1528));
}

loc_8031A19C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8031A1C0;
    }
}

loc_8031A1A0:
{
    r3 = (r25 + r6);
    r0 = MemoryInline::FlatRead8((r3 + 1538));
}

loc_8031A1AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031A1C0;
    }
}

loc_8031A1B0:
{
    r0 = MemoryInline::FlatRead16(r26);
}

loc_8031A1B8:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8031A1C0;
    }
}

loc_8031A1BC:
{
    r7 = 1;
}

loc_8031A1C0:
{
    r4 = (r4 + 8);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8031A104;
    }
}

loc_8031A1CC:
{
}

loc_8031A1D0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8031A1E0;
    }
}

loc_8031A1D4:
{
    r27_addr_8 = (r27 + r29);
    r0 = MemoryInline::FlatRead8(r27_addr_8);
    r0 = (r0 | 8);
    r27_addr_9 = (r27 + r29);
    MemoryInline::FlatWrite8(r27_addr_9, static_cast<uint8_t>(r0));
}

loc_8031A1E0:
{
    r31 = (r31 + 2);
    r26 = (r26 + 2);
    r30 = (r30 + 1);
    r29 = (r29 + 1);
}

loc_8031A1F4:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(8))) {
        goto loc_8031A094;
    }
}

loc_8031A1F8:
{
    goto loc_8031A28C;
}

loc_8031A1FC:
{
    r30 = 0;
    r29 = r25;
    r24 = 0;
}

loc_8031A208:
{
    MemoryInline::FlatWrite16(r26, static_cast<uint16_t>(r24));
    r27_addr_12 = (r27 + r30);
    MemoryInline::FlatWrite8(r27_addr_12, static_cast<uint8_t>(r24));
    r3 = MemoryInline::FlatRead16((r29 + 1522));
}

loc_8031A218:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8031A278;
    }
}

loc_8031A21C:
{
    r4 = (r25 + r30);
    r0 = MemoryInline::FlatRead8((r4 + 1538));
}

loc_8031A228:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031A278;
    }
}

loc_8031A22C:
{
    MemoryInline::FlatWrite16(r26, static_cast<uint16_t>(r3));
    r3 = r25;
    r4 = MemoryInline::FlatRead8((r4 + 1538));
    ctx->lr = 0x8031A23Cu;
    if constexpr (KnownRegArgsCpuCall<0x802724A0u>(&func_802724A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_802724A0_471F = func_802724A0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802724A0_471F);
        r4 = static_cast<uint32_t>(regargs_result_802724A0_471F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x802724A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_8031A244:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8031A254;
    }
}

loc_8031A248:
{
    r27_addr_13 = (r27 + r30);
    r0 = MemoryInline::FlatRead8(r27_addr_13);
    r0 = (r0 | 16);
    r27_addr_14 = (r27 + r30);
    MemoryInline::FlatWrite8(r27_addr_14, static_cast<uint8_t>(r0));
}

loc_8031A254:
{
    r3 = r25;
    r4 = MemoryInline::FlatRead16((r29 + 1522));
    ctx->lr = 0x8031A260u;
    if constexpr (KnownRegArgsCpuCall<0x802719DCu>(&func_802719DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802719DC_4C8B = func_802719DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802719DC_4C8B);
        r4 = static_cast<uint32_t>(regargs_result_802719DC_4C8B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802719DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8031A264:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8031A274;
    }
}

loc_8031A268:
{
    r27_addr_16 = (r27 + r30);
    r0 = MemoryInline::FlatRead8(r27_addr_16);
    r0 = (r0 | 32);
    r27_addr_17 = (r27 + r30);
    MemoryInline::FlatWrite8(r27_addr_17, static_cast<uint8_t>(r0));
}

loc_8031A274:
{
    r28 = (r28 + 1);
}

loc_8031A278:
{
    r26 = (r26 + 2);
    r29 = (r29 + 2);
    r30 = (r30 + 1);
}

loc_8031A288:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(8))) {
        goto loc_8031A208;
    }
}

loc_8031A28C:
{
    r3 = r28;
    r11 = (r1 + 192);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
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

extern "C" void func_80319F7C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80319F7C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80319F7C func_80319F7C preserves=true fpr_mask=0x00000000
