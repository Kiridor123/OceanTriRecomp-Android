#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027227C(CpuContext* ctx);
extern "C" uint64_t func_8027227C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802723B0(CpuContext* ctx);
extern "C" uint64_t func_802723B0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80272590(CpuContext* ctx);
extern "C" uint64_t func_80272590_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8030A6F8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r24_addr_0 = 0;
    uint32_t r24_addr_1 = 0;
    uint32_t r24_addr_10 = 0;
    uint32_t r24_addr_11 = 0;
    uint32_t r24_addr_2 = 0;
    uint32_t r24_addr_3 = 0;
    uint32_t r24_addr_4 = 0;
    uint32_t r24_addr_5 = 0;
    uint32_t r24_addr_6 = 0;
    uint32_t r24_addr_7 = 0;
    uint32_t r24_addr_8 = 0;
    uint32_t r24_addr_9 = 0;
    uint32_t r25_addr_0 = 0;
    uint32_t r25_addr_1 = 0;
    uint32_t r25_addr_2 = 0;
    uint32_t r25_addr_3 = 0;
    uint32_t r25_addr_4 = 0;
    uint32_t r25_addr_5 = 0;
    uint32_t r25_addr_6 = 0;
    uint32_t r25_addr_7 = 0;
    uint32_t r25_addr_8 = 0;
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
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8030A6F8u);
    goto loc_8030A6F8;

loc_8030A6F8:
{
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_5, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_5, 100u, (r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r23 = r4;
    r24 = r5;
    r25 = r6;
    r26 = r7;
    r27 = r8;
    r28 = r9;
    r29 = 0;
    r30 = 0;
    r31 = 0;
    MemoryInline::WriteResolved16(guest_range_5, 24u, (r1 + 24), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved8(guest_range_5, 16u, (r1 + 16), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_5, 8u, (r1 + 8), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved16(guest_range_5, 26u, (r1 + 26), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved8(guest_range_5, 17u, (r1 + 17), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_5, 9u, (r1 + 9), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved16(guest_range_5, 28u, (r1 + 28), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved8(guest_range_5, 18u, (r1 + 18), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_5, 10u, (r1 + 10), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved16(guest_range_5, 30u, (r1 + 30), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved8(guest_range_5, 19u, (r1 + 19), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_5, 11u, (r1 + 11), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved16(guest_range_5, 32u, (r1 + 32), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved8(guest_range_5, 20u, (r1 + 20), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_5, 12u, (r1 + 12), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved16(guest_range_5, 34u, (r1 + 34), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved8(guest_range_5, 21u, (r1 + 21), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_5, 13u, (r1 + 13), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved16(guest_range_5, 36u, (r1 + 36), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved8(guest_range_5, 22u, (r1 + 22), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_5, 14u, (r1 + 14), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved16(guest_range_5, 38u, (r1 + 38), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved8(guest_range_5, 23u, (r1 + 23), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_5, 15u, (r1 + 15), static_cast<uint8_t>(r31));
    r3 = r23;
    r4 = (r1 + 24);
    r5 = (r1 + 16);
    r6 = (r1 + 8);
    ctx->lr = 0x8030A7A4u;
    if constexpr (KnownRegArgsCpuCall<0x80272590u>(&func_80272590)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80272590_15E4 = func_80272590_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80272590_15E4);
        r4 = static_cast<uint32_t>(regargs_result_80272590_15E4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
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
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80272590u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_6, 16u, (r1 + 24));
    guest_range_1 = MemoryInline::ResolveRangeHost(r27, 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, r27, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 0u, (r1 + 8));
    guest_range_2 = MemoryInline::ResolveRangeHost(r26, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r26, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 8u, (r1 + 16));
    guest_range_3 = MemoryInline::ResolveRangeHost(r28, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, r28, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_6, 18u, (r1 + 26));
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r27 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 1u, (r1 + 9));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r26 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 9u, (r1 + 17));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r28 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_6, 20u, (r1 + 28));
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r27 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 2u, (r1 + 10));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r26 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 10u, (r1 + 18));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r28 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_6, 22u, (r1 + 30));
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r27 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 3u, (r1 + 11));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r26 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 11u, (r1 + 19));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r28 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_6, 24u, (r1 + 32));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r27 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 4u, (r1 + 12));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r26 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 12u, (r1 + 20));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r28 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_6, 26u, (r1 + 34));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r27 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 5u, (r1 + 13));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r26 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 13u, (r1 + 21));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r28 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_6, 28u, (r1 + 36));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r27 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 6u, (r1 + 14));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r26 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 14u, (r1 + 22));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r28 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_6, 30u, (r1 + 38));
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r27 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 7u, (r1 + 15));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r26 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 15u, (r1 + 23));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r28 + 7), static_cast<uint8_t>(r0));
    r20 = 0;
    r22 = r24;
    r28 = r25;
    r27 = r24;
    r26 = r25;
}

loc_8030A878:
{
    MemoryInline::FlatWrite8(r22, static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r31));
}

loc_8030A884:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_8030A970;
    }
}

loc_8030A888:
{
    r3 = r23;
    r4 = (r20 & 255);
    ctx->lr = 0x8030A894u;
    if constexpr (KnownRegArgsCpuCall<0x8027227Cu>(&func_8027227C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8027227C_2CF7 = func_8027227C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027227C_2CF7);
        r4 = static_cast<uint32_t>(regargs_result_8027227C_2CF7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027227Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r21 = r3;
    r3 = r23;
    r4 = (r20 & 255);
    ctx->lr = 0x8030A8A4u;
    if constexpr (KnownRegArgsCpuCall<0x802723B0u>(&func_802723B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_802723B0_30FE = func_802723B0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802723B0_30FE);
        r4 = static_cast<uint32_t>(regargs_result_802723B0_30FE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x802723B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_8030A8AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8030A8B8;
    }
}

loc_8030A8B0:
{
}

loc_8030A8B4:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_8030A970;
    }
}

loc_8030A8B8:
{
}

loc_8030A8BC:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(1))) {
        goto loc_8030A8C4;
    }
}

loc_8030A8C0:
{
    r3 = 1;
}

loc_8030A8C4:
{
    r30 = (r30 + 1);
    r5 = 0;
    r0 = (r20 & 255);
    r4 = MemoryInline::FlatRead8((r1 + 8));
}

loc_8030A8D8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8030A8E0;
    }
}

loc_8030A8DC:
{
    r5 = 1;
}

loc_8030A8E0:
{
    r4 = MemoryInline::FlatRead8((r1 + 9));
}

loc_8030A8E8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8030A8F0;
    }
}

loc_8030A8EC:
{
    r5 = 1;
}

loc_8030A8F0:
{
    r4 = MemoryInline::FlatRead8((r1 + 10));
}

loc_8030A8F8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8030A900;
    }
}

loc_8030A8FC:
{
    r5 = 1;
}

loc_8030A900:
{
    r4 = MemoryInline::FlatRead8((r1 + 11));
}

loc_8030A908:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8030A910;
    }
}

loc_8030A90C:
{
    r5 = 1;
}

loc_8030A910:
{
    r4 = MemoryInline::FlatRead8((r1 + 12));
}

loc_8030A918:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8030A920;
    }
}

loc_8030A91C:
{
    r5 = 1;
}

loc_8030A920:
{
    r4 = MemoryInline::FlatRead8((r1 + 13));
}

loc_8030A928:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8030A930;
    }
}

loc_8030A92C:
{
    r5 = 1;
}

loc_8030A930:
{
    r4 = MemoryInline::FlatRead8((r1 + 14));
}

loc_8030A938:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8030A940;
    }
}

loc_8030A93C:
{
    r5 = 1;
}

loc_8030A940:
{
    r4 = MemoryInline::FlatRead8((r1 + 15));
}

loc_8030A948:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8030A950;
    }
}

loc_8030A94C:
{
    r5 = 1;
}

loc_8030A950:
{
}

loc_8030A954:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8030A970;
    }
}

loc_8030A958:
{
    r0 = (r20 & 255);
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r26, static_cast<uint8_t>(r3));
    r29 = (r29 + 1);
    r26 = (r26 + 1);
    r27 = (r27 + 1);
}

loc_8030A970:
{
    r20 = (r20 + 1);
    r28 = (r28 + 1);
    r22 = (r22 + 1);
}

loc_8030A980:
{
    if ((static_cast<int32_t>(r20) < static_cast<int32_t>(85))) {
        goto loc_8030A878;
    }
}

loc_8030A984:
{
    r7 = 0;
    r3 = (r29 + -1);
    goto loc_8030A9F4;
}

loc_8030A990:
{
    r8 = (r7 + 1);
    r0 = (r29 - r8);
    ctr = r0;
}

loc_8030A9A0:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r29))) {
        goto loc_8030A9F0;
    }
}

loc_8030A9A4:
{
    r25_addr_3 = (r25 + r8);
    r5 = MemoryInline::FlatRead8(r25_addr_3);
    r25_addr_4 = (r25 + r7);
    r6 = MemoryInline::FlatRead8(r25_addr_4);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8030A9B8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8030A9D0;
    }
}

loc_8030A9BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8030A9E8;
    }
}

loc_8030A9C0:
{
    r24_addr_3 = (r24 + r7);
    r4 = MemoryInline::FlatRead8(r24_addr_3);
    r24_addr_4 = (r24 + r8);
    r0 = MemoryInline::FlatRead8(r24_addr_4);
}

loc_8030A9CC:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_8030A9E8;
    }
}

loc_8030A9D0:
{
    r24_addr_6 = (r24 + r7);
    r4 = MemoryInline::FlatRead8(r24_addr_6);
    r25_addr_5 = (r25 + r7);
    MemoryInline::FlatWrite8(r25_addr_5, static_cast<uint8_t>(r5));
    r24_addr_7 = (r24 + r8);
    r0 = MemoryInline::FlatRead8(r24_addr_7);
    r24_addr_8 = (r24 + r7);
    MemoryInline::FlatWrite8(r24_addr_8, static_cast<uint8_t>(r0));
    r25_addr_6 = (r25 + r8);
    MemoryInline::FlatWrite8(r25_addr_6, static_cast<uint8_t>(r6));
    r24_addr_9 = (r24 + r8);
    MemoryInline::FlatWrite8(r24_addr_9, static_cast<uint8_t>(r4));
}

loc_8030A9E8:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8030A9A4;
    }
}

loc_8030A9F0:
{
    r7 = (r7 + 1);
}

loc_8030A9F4:
{
}

loc_8030A9F8:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r3))) {
        goto loc_8030A990;
    }
}

loc_8030A9FC:
{
    r3 = r30;
    r11 = (r1 + 96);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8030A6F8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8030A6F8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000017FB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8030A6F8 func_8030A6F8 preserves=true fpr_mask=0x00000000
