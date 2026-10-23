#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80314FF4(CpuContext* ctx);
extern "C" uint64_t func_80314FF4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80315A30(CpuContext* ctx);
extern "C" uint32_t func_80315A30_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803199B0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
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
    uint32_t ctr = ctx->ctr;

    goto loc_803199B0;

loc_803199B0:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 84u, (r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r23 = r5;
    r24 = r6;
    r25 = r7;
    r22 = MemoryInline::FlatRead32(r4);
    r31 = MemoryInline::FlatRead32((r4 + 4));
    r30 = MemoryInline::FlatRead32((r4 + 8));
    r29 = MemoryInline::FlatRead32((r4 + 12));
    r28 = MemoryInline::FlatRead32((r4 + 16));
    r27 = MemoryInline::FlatRead32((r4 + 20));
    r26 = 0;
    r0 = 0;
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 8u, (r1 + 8), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 20u, (r1 + 20), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r6 + 2), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 10u, (r1 + 10), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 22u, (r1 + 22), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r6 + 4), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r7 + 2), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 12u, (r1 + 12), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 24u, (r1 + 24), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r6 + 6), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r7 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 14u, (r1 + 14), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 26u, (r1 + 26), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r6 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r7 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 16u, (r1 + 16), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 28u, (r1 + 28), static_cast<uint16_t>(r0));
    r3 = (r5 & 255);
    if constexpr (KnownRegArgsCpuCall<0x80315A30u>(&func_80315A30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80315A30_F9C = func_80315A30_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80315A30_F9C;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80315A30u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r0 = (r3 & 255);
}

loc_80319A50:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(5))) {
        goto loc_80319A68;
    }
}

loc_80319A54:
{
}

loc_80319A58:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_80319C0C;
    }
}

loc_80319A5C:
{
}

loc_80319A60:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_80319A7C;
    }
}

loc_80319A64:
{
    goto loc_80319F60;
}

loc_80319A68:
{
}

loc_80319A6C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(9))) {
        goto loc_80319F60;
    }
}

loc_80319A70:
{
}

loc_80319A74:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(7))) {
        goto loc_80319E9C;
    }
}

loc_80319A78:
{
    goto loc_80319DF8;
}

loc_80319A7C:
{
    r3 = r29;
    r4 = 0;
    r5 = (r1 + 20);
    ctx->lr = 0x80319A8Cu;
    if constexpr (KnownRegArgsCpuCall<0x80314FF4u>(&func_80314FF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80314FF4_1538 = func_80314FF4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80314FF4_1538);
        r4 = static_cast<uint32_t>(regargs_result_80314FF4_1538 >> 32);
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
        InvokeDirectCpu<0x80314FF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r3 = r22;
    r4 = 0;
    r5 = (r1 + 8);
    ctx->lr = 0x80319A9Cu;
    if constexpr (KnownRegArgsCpuCall<0x80314FF4u>(&func_80314FF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80314FF4_1900 = func_80314FF4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80314FF4_1900);
        r4 = static_cast<uint32_t>(regargs_result_80314FF4_1900 >> 32);
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
        InvokeDirectCpu<0x80314FF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r26 = r3;
    r9 = 0;
    r4 = (r1 + 8);
    r0 = (r23 & 255);
    r5 = (r0 & 8);
    r6 = (r0 & 1);
    r3 = 1;
    r0 = 5;
    ctr = r0;
}

loc_80319AC0:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_80319AC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80319BF8;
    }
}

loc_80319ACC:
{
    MemoryInline::FlatWrite16(r24, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8(r25);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8(r25, static_cast<uint8_t>(r0));
}

loc_80319AE0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80319BF8;
    }
}

loc_80319AE4:
{
}

loc_80319AE8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80319BF8;
    }
}

loc_80319AEC:
{
    r10 = 0;
    r8 = 0;
    r7 = MemoryInline::FlatRead16(r4);
    r0 = MemoryInline::FlatRead16((r1 + 20));
}

loc_80319B00:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r0))) {
        goto loc_80319B24;
    }
}

loc_80319B04:
{
    r8 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r8));
    r0 = (r9 & 255);
    r0 = (r0 & r8);
}

loc_80319B14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80319B24;
    }
}

loc_80319B18:
{
    r0 = (r8 & 255);
    r9 = (r9 | r0);
    r10 = 1;
}

loc_80319B24:
{
    r8 = 1;
    r0 = MemoryInline::FlatRead16((r1 + 22));
}

loc_80319B30:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r0))) {
        goto loc_80319B54;
    }
}

loc_80319B34:
{
    r8 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r8));
    r0 = (r9 & 255);
    r0 = (r0 & r8);
}

loc_80319B44:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80319B54;
    }
}

loc_80319B48:
{
    r0 = (r8 & 255);
    r9 = (r9 | r0);
    r10 = 1;
}

loc_80319B54:
{
    r8 = 2;
    r0 = MemoryInline::FlatRead16((r1 + 24));
}

loc_80319B60:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r0))) {
        goto loc_80319B84;
    }
}

loc_80319B64:
{
    r8 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r8));
    r0 = (r9 & 255);
    r0 = (r0 & r8);
}

loc_80319B74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80319B84;
    }
}

loc_80319B78:
{
    r0 = (r8 & 255);
    r9 = (r9 | r0);
    r10 = 1;
}

loc_80319B84:
{
    r8 = 3;
    r0 = MemoryInline::FlatRead16((r1 + 26));
}

loc_80319B90:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r0))) {
        goto loc_80319BB4;
    }
}

loc_80319B94:
{
    r8 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r8));
    r0 = (r9 & 255);
    r0 = (r0 & r8);
}

loc_80319BA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80319BB4;
    }
}

loc_80319BA8:
{
    r0 = (r8 & 255);
    r9 = (r9 | r0);
    r10 = 1;
}

loc_80319BB4:
{
    r8 = 4;
    r0 = MemoryInline::FlatRead16((r1 + 28));
}

loc_80319BC0:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r0))) {
        goto loc_80319BE4;
    }
}

loc_80319BC4:
{
    r8 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r8));
    r0 = (r9 & 255);
    r0 = (r0 & r8);
}

loc_80319BD4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80319BE4;
    }
}

loc_80319BD8:
{
    r0 = (r8 & 255);
    r9 = (r9 | r0);
    r10 = 1;
}

loc_80319BE4:
{
}

loc_80319BE8:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_80319BF8;
    }
}

loc_80319BEC:
{
    r0 = MemoryInline::FlatRead8(r25);
    r0 = (r0 | 8);
    MemoryInline::FlatWrite8(r25, static_cast<uint8_t>(r0));
}

loc_80319BF8:
{
    r4 = (r4 + 2);
    r24 = (r24 + 2);
    r25 = (r25 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80319AC0;
    }
}

loc_80319C08:
{
    goto loc_80319F60;
}

loc_80319C0C:
{
    r0 = MemoryInline::FlatRead8(r22);
}

loc_80319C14:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80319F60;
    }
}

loc_80319C18:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_80319C20:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80319F60;
    }
}

loc_80319C24:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80319C2C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80319F60;
    }
}

loc_80319C30:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80319C38:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80319C68;
    }
}

loc_80319C3C:
{
    r0 = MemoryInline::FlatRead8(r28);
}

loc_80319C44:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80319C68;
    }
}

loc_80319C48:
{
    r0 = MemoryInline::FlatRead8(r27);
}

loc_80319C50:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80319C68;
    }
}

loc_80319C54:
{
    r3 = r28;
    r4 = r27;
    r5 = (r1 + 20);
    ctx->lr = 0x80319C64u;
    if constexpr (KnownRegArgsCpuCall<0x80314FF4u>(&func_80314FF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80314FF4_3188 = func_80314FF4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80314FF4_3188);
        r4 = static_cast<uint32_t>(regargs_result_80314FF4_3188 >> 32);
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
        InvokeDirectCpu<0x80314FF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    goto loc_80319C78;
}

loc_80319C68:
{
    r3 = r29;
    r4 = 0;
    r5 = (r1 + 20);
    ctx->lr = 0x80319C78u;
    if constexpr (KnownRegArgsCpuCall<0x80314FF4u>(&func_80314FF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80314FF4_3580 = func_80314FF4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80314FF4_3580);
        r4 = static_cast<uint32_t>(regargs_result_80314FF4_3580 >> 32);
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
        InvokeDirectCpu<0x80314FF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
}

loc_80319C78:
{
    r3 = r31;
    r4 = r30;
    r5 = (r1 + 8);
    ctx->lr = 0x80319C88u;
    if constexpr (KnownRegArgsCpuCall<0x80314FF4u>(&func_80314FF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80314FF4_3961 = func_80314FF4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80314FF4_3961);
        r4 = static_cast<uint32_t>(regargs_result_80314FF4_3961 >> 32);
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
        InvokeDirectCpu<0x80314FF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r26 = r3;
    r9 = 0;
    r4 = (r1 + 8);
    r0 = (r23 & 255);
    r5 = (r0 & 8);
    r6 = (r0 & 1);
    r3 = 1;
    r0 = 5;
    ctr = r0;
}

loc_80319CAC:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_80319CB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80319DE4;
    }
}

loc_80319CB8:
{
    MemoryInline::FlatWrite16(r24, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8(r25);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8(r25, static_cast<uint8_t>(r0));
}

loc_80319CCC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80319DE4;
    }
}

loc_80319CD0:
{
}

loc_80319CD4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80319DE4;
    }
}

loc_80319CD8:
{
    r10 = 0;
    r8 = 0;
    r7 = MemoryInline::FlatRead16(r4);
    r0 = MemoryInline::FlatRead16((r1 + 20));
}

loc_80319CEC:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r0))) {
        goto loc_80319D10;
    }
}

loc_80319CF0:
{
    r8 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r8));
    r0 = (r9 & 255);
    r0 = (r0 & r8);
}

loc_80319D00:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80319D10;
    }
}

loc_80319D04:
{
    r0 = (r8 & 255);
    r9 = (r9 | r0);
    r10 = 1;
}

loc_80319D10:
{
    r8 = 1;
    r0 = MemoryInline::FlatRead16((r1 + 22));
}

loc_80319D1C:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r0))) {
        goto loc_80319D40;
    }
}

loc_80319D20:
{
    r8 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r8));
    r0 = (r9 & 255);
    r0 = (r0 & r8);
}

loc_80319D30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80319D40;
    }
}

loc_80319D34:
{
    r0 = (r8 & 255);
    r9 = (r9 | r0);
    r10 = 1;
}

loc_80319D40:
{
    r8 = 2;
    r0 = MemoryInline::FlatRead16((r1 + 24));
}

loc_80319D4C:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r0))) {
        goto loc_80319D70;
    }
}

loc_80319D50:
{
    r8 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r8));
    r0 = (r9 & 255);
    r0 = (r0 & r8);
}

loc_80319D60:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80319D70;
    }
}

loc_80319D64:
{
    r0 = (r8 & 255);
    r9 = (r9 | r0);
    r10 = 1;
}

loc_80319D70:
{
    r8 = 3;
    r0 = MemoryInline::FlatRead16((r1 + 26));
}

loc_80319D7C:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r0))) {
        goto loc_80319DA0;
    }
}

loc_80319D80:
{
    r8 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r8));
    r0 = (r9 & 255);
    r0 = (r0 & r8);
}

loc_80319D90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80319DA0;
    }
}

loc_80319D94:
{
    r0 = (r8 & 255);
    r9 = (r9 | r0);
    r10 = 1;
}

loc_80319DA0:
{
    r8 = 4;
    r0 = MemoryInline::FlatRead16((r1 + 28));
}

loc_80319DAC:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r0))) {
        goto loc_80319DD0;
    }
}

loc_80319DB0:
{
    r8 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r8));
    r0 = (r9 & 255);
    r0 = (r0 & r8);
}

loc_80319DC0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80319DD0;
    }
}

loc_80319DC4:
{
    r0 = (r8 & 255);
    r9 = (r9 | r0);
    r10 = 1;
}

loc_80319DD0:
{
}

loc_80319DD4:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_80319DE4;
    }
}

loc_80319DD8:
{
    r0 = MemoryInline::FlatRead8(r25);
    r0 = (r0 | 8);
    MemoryInline::FlatWrite8(r25, static_cast<uint8_t>(r0));
}

loc_80319DE4:
{
    r4 = (r4 + 2);
    r24 = (r24 + 2);
    r25 = (r25 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80319CAC;
    }
}

loc_80319DF4:
{
    goto loc_80319F60;
}

loc_80319DF8:
{
    r3 = r22;
    r4 = 0;
    r5 = (r1 + 8);
    ctx->lr = 0x80319E08u;
    if constexpr (KnownRegArgsCpuCall<0x80314FF4u>(&func_80314FF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80314FF4_4D72 = func_80314FF4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80314FF4_4D72);
        r4 = static_cast<uint32_t>(regargs_result_80314FF4_4D72 >> 32);
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
        InvokeDirectCpu<0x80314FF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r26 = r3;
    r0 = MemoryInline::FlatRead16((r1 + 8));
}

loc_80319E14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80319E28;
    }
}

loc_80319E18:
{
    MemoryInline::FlatWrite16(r24, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8(r25);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8(r25, static_cast<uint8_t>(r0));
}

loc_80319E28:
{
    r0 = MemoryInline::FlatRead16((r1 + 10));
}

loc_80319E30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80319E44;
    }
}

loc_80319E34:
{
    MemoryInline::FlatWrite16((r24 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r25 + 1));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r25 + 1), static_cast<uint8_t>(r0));
}

loc_80319E44:
{
    r0 = MemoryInline::FlatRead16((r1 + 12));
}

loc_80319E4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80319E60;
    }
}

loc_80319E50:
{
    MemoryInline::FlatWrite16((r24 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r25 + 2));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r25 + 2), static_cast<uint8_t>(r0));
}

loc_80319E60:
{
    r0 = MemoryInline::FlatRead16((r1 + 14));
}

loc_80319E68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80319E7C;
    }
}

loc_80319E6C:
{
    MemoryInline::FlatWrite16((r24 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r25 + 3));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r25 + 3), static_cast<uint8_t>(r0));
}

loc_80319E7C:
{
    r0 = MemoryInline::FlatRead16((r1 + 16));
}

loc_80319E84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80319F60;
    }
}

loc_80319E88:
{
    MemoryInline::FlatWrite16((r24 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r25 + 4));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r25 + 4), static_cast<uint8_t>(r0));
    goto loc_80319F60;
}

loc_80319E9C:
{
    r0 = MemoryInline::FlatRead8(r22);
}

loc_80319EA4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80319F60;
    }
}

loc_80319EA8:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_80319EB0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80319F60;
    }
}

loc_80319EB4:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80319EBC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80319F60;
    }
}

loc_80319EC0:
{
    r3 = r31;
    r4 = r30;
    r5 = (r1 + 8);
    ctx->lr = 0x80319ED0u;
    if constexpr (KnownRegArgsCpuCall<0x80314FF4u>(&func_80314FF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80314FF4_5BC3 = func_80314FF4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80314FF4_5BC3);
        r4 = static_cast<uint32_t>(regargs_result_80314FF4_5BC3 >> 32);
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
        InvokeDirectCpu<0x80314FF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r26 = r3;
    r0 = MemoryInline::FlatRead16((r1 + 8));
}

loc_80319EDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80319EF0;
    }
}

loc_80319EE0:
{
    MemoryInline::FlatWrite16(r24, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8(r25);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8(r25, static_cast<uint8_t>(r0));
}

loc_80319EF0:
{
    r0 = MemoryInline::FlatRead16((r1 + 10));
}

loc_80319EF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80319F0C;
    }
}

loc_80319EFC:
{
    MemoryInline::FlatWrite16((r24 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r25 + 1));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r25 + 1), static_cast<uint8_t>(r0));
}

loc_80319F0C:
{
    r0 = MemoryInline::FlatRead16((r1 + 12));
}

loc_80319F14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80319F28;
    }
}

loc_80319F18:
{
    MemoryInline::FlatWrite16((r24 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r25 + 2));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r25 + 2), static_cast<uint8_t>(r0));
}

loc_80319F28:
{
    r0 = MemoryInline::FlatRead16((r1 + 14));
}

loc_80319F30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80319F44;
    }
}

loc_80319F34:
{
    MemoryInline::FlatWrite16((r24 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r25 + 3));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r25 + 3), static_cast<uint8_t>(r0));
}

loc_80319F44:
{
    r0 = MemoryInline::FlatRead16((r1 + 16));
}

loc_80319F4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80319F60;
    }
}

loc_80319F50:
{
    MemoryInline::FlatWrite16((r24 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r25 + 4));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r25 + 4), static_cast<uint8_t>(r0));
}

loc_80319F60:
{
    r3 = r26;
    r11 = (r1 + 80);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803199B0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803199B0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803199B0 func_803199B0 preserves=true fpr_mask=0x00000000
