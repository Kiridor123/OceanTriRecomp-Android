#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802716D8(CpuContext* ctx);
extern "C" uint64_t func_802716D8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80315A30(CpuContext* ctx);
extern "C" uint32_t func_80315A30_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803191DC(CpuContext* ctx);
extern "C" uint32_t func_803191DC_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80319268_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r24_addr_0 = 0;
    uint32_t r24_addr_1 = 0;
    uint32_t r24_addr_2 = 0;
    uint32_t r24_addr_3 = 0;
    uint32_t r24_addr_4 = 0;
    uint32_t r24_addr_5 = 0;
    uint32_t r24_addr_6 = 0;
    uint32_t r24_addr_7 = 0;
    uint32_t r25_addr_0 = 0;
    uint32_t r25_addr_1 = 0;
    uint32_t r25_addr_10 = 0;
    uint32_t r25_addr_11 = 0;
    uint32_t r25_addr_12 = 0;
    uint32_t r25_addr_13 = 0;
    uint32_t r25_addr_14 = 0;
    uint32_t r25_addr_15 = 0;
    uint32_t r25_addr_16 = 0;
    uint32_t r25_addr_17 = 0;
    uint32_t r25_addr_18 = 0;
    uint32_t r25_addr_19 = 0;
    uint32_t r25_addr_2 = 0;
    uint32_t r25_addr_20 = 0;
    uint32_t r25_addr_21 = 0;
    uint32_t r25_addr_22 = 0;
    uint32_t r25_addr_23 = 0;
    uint32_t r25_addr_24 = 0;
    uint32_t r25_addr_3 = 0;
    uint32_t r25_addr_4 = 0;
    uint32_t r25_addr_5 = 0;
    uint32_t r25_addr_6 = 0;
    uint32_t r25_addr_7 = 0;
    uint32_t r25_addr_8 = 0;
    uint32_t r25_addr_9 = 0;
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80319268;

loc_80319268:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r22 = r3;
    r28 = r5;
    r23 = r6;
    r24 = r7;
    r25 = r8;
    r26 = MemoryInline::FlatRead32((r4 + 12));
    r27 = MemoryInline::FlatRead32(r4);
    r0 = 0;
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 20u, (r1 + 20), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 12u, (r1 + 12), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 16u, (r1 + 16), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r1 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r6 + 2), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r8 + 1), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 22u, (r1 + 22), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 13u, (r1 + 13), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 18u, (r1 + 18), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r1 + 9), static_cast<uint8_t>(r0));
    r3 = (r5 & 255);
    if constexpr (KnownRegArgsCpuCall<0x80315A30u>(&func_80315A30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80315A30_116F = func_80315A30_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80315A30_116F;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80315A30u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r3 & 255);
    r0 = (r3 + -1);
}

loc_803192E8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_803192FC;
    }
}

loc_803192EC:
{
    r0 = (r3 + -5);
}

loc_803192F4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80319464;
    }
}

loc_803192F8:
{
    goto loc_803194E4;
}

loc_803192FC:
{
    r3 = r26;
    r4 = (r1 + 16);
    r5 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x803191DCu>(&func_803191DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803191DC_15AF = func_803191DC_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_803191DC_15AF;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x803191DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    }
    r3 = r27;
    r4 = (r1 + 20);
    r5 = (r1 + 12);
    if constexpr (KnownRegArgsCpuCall<0x803191DCu>(&func_803191DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803191DC_1906 = func_803191DC_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_803191DC_1906;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x803191DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    }
    r26 = r3;
    r27 = 0;
    r31 = (r1 + 20);
    r30 = (r1 + 12);
    r0 = (r28 & 255);
    r29 = (r0 & 8);
    r28 = (r0 & 1);
}

loc_80319338:
{
    r0 = MemoryInline::FlatRead16(r31);
}

loc_80319340:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80319448;
    }
}

loc_80319344:
{
    MemoryInline::FlatWrite16(r23, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8(r30);
    r24_addr_5 = (r24 + r27);
    MemoryInline::FlatWrite8(r24_addr_5, static_cast<uint8_t>(r0));
    r25_addr_8 = (r25 + r27);
    r0 = MemoryInline::FlatRead8(r25_addr_8);
    r0 = (r0 | 1);
    r25_addr_9 = (r25 + r27);
    MemoryInline::FlatWrite8(r25_addr_9, static_cast<uint8_t>(r0));
    r3 = r22;
    r0 = MemoryInline::FlatRead16(r31);
    r4 = (r0 & 255);
    ctx->lr = 0x8031936Cu;
    if constexpr (KnownRegArgsCpuCall<0x802716D8u>(&func_802716D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802716D8_1F7D = func_802716D8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802716D8_1F7D);
        r4 = static_cast<uint32_t>(regargs_result_802716D8_1F7D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802716D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80319370:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80319380;
    }
}

loc_80319374:
{
    r25_addr_10 = (r25 + r27);
    r0 = MemoryInline::FlatRead8(r25_addr_10);
    r0 = (r0 | 32);
    r25_addr_11 = (r25 + r27);
    MemoryInline::FlatWrite8(r25_addr_11, static_cast<uint8_t>(r0));
}

loc_80319380:
{
}

loc_80319384:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80319448;
    }
}

loc_80319388:
{
}

loc_8031938C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80319448;
    }
}

loc_80319390:
{
    r4 = 0;
    r3 = MemoryInline::FlatRead16((r1 + 16));
}

loc_8031939C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803193E4;
    }
}

loc_803193A0:
{
    r0 = MemoryInline::FlatRead16(r31);
}

loc_803193A8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_803193E4;
    }
}

loc_803193AC:
{
    r3 = MemoryInline::FlatRead8((r1 + 8));
    r0 = MemoryInline::FlatRead8(r30);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_803193C0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_803193E0;
    }
}

loc_803193C4:
{
    r25_addr_13 = (r25 + r27);
    r3 = MemoryInline::FlatRead8(r25_addr_13);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_803193CC:
{
    r0 = 4;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803193D8;
    }
}

loc_803193D4:
{
    r0 = 2;
}

loc_803193D8:
{
    r0 = (r3 | r0);
    r25_addr_14 = (r25 + r27);
    MemoryInline::FlatWrite8(r25_addr_14, static_cast<uint8_t>(r0));
}

loc_803193E0:
{
    r4 = 1;
}

loc_803193E4:
{
    r3 = MemoryInline::FlatRead16((r1 + 18));
}

loc_803193EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80319434;
    }
}

loc_803193F0:
{
    r0 = MemoryInline::FlatRead16(r31);
}

loc_803193F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80319434;
    }
}

loc_803193FC:
{
    r3 = MemoryInline::FlatRead8((r1 + 9));
    r0 = MemoryInline::FlatRead8(r30);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80319410:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_80319430;
    }
}

loc_80319414:
{
    r25_addr_17 = (r25 + r27);
    r3 = MemoryInline::FlatRead8(r25_addr_17);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_8031941C:
{
    r0 = 4;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80319428;
    }
}

loc_80319424:
{
    r0 = 2;
}

loc_80319428:
{
    r0 = (r3 | r0);
    r25_addr_18 = (r25 + r27);
    MemoryInline::FlatWrite8(r25_addr_18, static_cast<uint8_t>(r0));
}

loc_80319430:
{
    r4 = 1;
}

loc_80319434:
{
}

loc_80319438:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80319448;
    }
}

loc_8031943C:
{
    r25_addr_21 = (r25 + r27);
    r0 = MemoryInline::FlatRead8(r25_addr_21);
    r0 = (r0 | 8);
    r25_addr_22 = (r25 + r27);
    MemoryInline::FlatWrite8(r25_addr_22, static_cast<uint8_t>(r0));
}

loc_80319448:
{
    r31 = (r31 + 2);
    r23 = (r23 + 2);
    r30 = (r30 + 1);
    r27 = (r27 + 1);
}

loc_8031945C:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(2))) {
        goto loc_80319338;
    }
}

loc_80319460:
{
    goto loc_803194E4;
}

loc_80319464:
{
    r3 = r27;
    r4 = (r1 + 20);
    r5 = (r1 + 12);
    if constexpr (KnownRegArgsCpuCall<0x803191DCu>(&func_803191DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803191DC_31F3 = func_803191DC_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_803191DC_31F3;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x803191DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    }
    r26 = r3;
    r29 = 0;
    r27 = (r1 + 20);
    r28 = (r1 + 12);
}

loc_80319484:
{
    r0 = MemoryInline::FlatRead16(r27);
}

loc_8031948C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803194CC;
    }
}

loc_80319490:
{
    MemoryInline::FlatWrite16(r23, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8(r28);
    r24_addr_2 = (r24 + r29);
    MemoryInline::FlatWrite8(r24_addr_2, static_cast<uint8_t>(r0));
    r25_addr_2 = (r25 + r29);
    r0 = MemoryInline::FlatRead8(r25_addr_2);
    r0 = (r0 | 1);
    r25_addr_3 = (r25 + r29);
    MemoryInline::FlatWrite8(r25_addr_3, static_cast<uint8_t>(r0));
    r3 = r22;
    r0 = MemoryInline::FlatRead16(r27);
    r4 = (r0 & 255);
    ctx->lr = 0x803194B8u;
    if constexpr (KnownRegArgsCpuCall<0x802716D8u>(&func_802716D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802716D8_3829 = func_802716D8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802716D8_3829);
        r4 = static_cast<uint32_t>(regargs_result_802716D8_3829 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802716D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_803194BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803194CC;
    }
}

loc_803194C0:
{
    r25_addr_4 = (r25 + r29);
    r0 = MemoryInline::FlatRead8(r25_addr_4);
    r0 = (r0 | 32);
    r25_addr_5 = (r25 + r29);
    MemoryInline::FlatWrite8(r25_addr_5, static_cast<uint8_t>(r0));
}

loc_803194CC:
{
    r27 = (r27 + 2);
    r23 = (r23 + 2);
    r28 = (r28 + 1);
    r29 = (r29 + 1);
}

loc_803194E0:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(2))) {
        goto loc_80319484;
    }
}

loc_803194E4:
{
    r3 = r26;
    r11 = (r1 + 64);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80319268(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80319268_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80319268 func_80319268 preserves=true fpr_mask=0x00000000
