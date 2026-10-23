#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80478000(CpuContext* ctx);
extern "C" uint64_t func_80478000_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8048BB18(CpuContext* ctx);
extern "C" uint64_t func_8048BB18_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8048DF44_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_10 = 0;
    uint32_t r31_addr_11 = 0;
    uint32_t r31_addr_12 = 0;
    uint32_t r31_addr_13 = 0;
    uint32_t r31_addr_14 = 0;
    uint32_t r31_addr_15 = 0;
    uint32_t r31_addr_16 = 0;
    uint32_t r31_addr_17 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r31_addr_6 = 0;
    uint32_t r31_addr_7 = 0;
    uint32_t r31_addr_8 = 0;
    uint32_t r31_addr_9 = 0;
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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_8048DF44;

loc_8048DF44:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r30 = r3;
    r31 = r4;
    r3 = 2;
    ctx->lr = 0x8048DF68u;
    if constexpr (KnownRegArgsCpuCall<0x80478000u>(&func_80478000)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        const auto regargs_result_80478000_BB7 = func_80478000_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_80478000_BB7);
        r4 = static_cast<uint32_t>(regargs_result_80478000_BB7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80478000u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_8048DF6C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8048DF78;
    }
}

loc_8048DF70:
{
    r3 = 0;
    goto loc_8048E0CC;
}

loc_8048DF78:
{
    r0 = 25;
    r4 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 2), 0, 31u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = 11;
    r6 = 4;
    r5 = 22;
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r3 + 4), static_cast<uint16_t>(r4));
    r24 = (15 - r4);
    r25 = 1;
    r27 = 2;
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r3 + 8), static_cast<uint8_t>(r0));
    r26 = (15 - r25);
    r28 = (15 - r27);
    r4 = 3;
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r3 + 9), static_cast<uint8_t>(r6));
    r29 = (15 - r4);
    r9 = 5;
    r10 = (15 - r6);
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r3 + 10), static_cast<uint8_t>(r5));
    r8 = (15 - r9);
    r7 = 6;
    r5 = 7;
    r4 = MemoryInline::FlatRead8((r30 + 5));
    r6 = (15 - r7);
    r23 = 8;
    r25 = 9;
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r3 + 11), static_cast<uint8_t>(r4));
    r4 = (15 - r5);
    r27 = 10;
    r11 = 12;
    r5 = MemoryInline::FlatRead8((r30 + 4));
    r9 = 13;
    r7 = 14;
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r3 + 12), static_cast<uint8_t>(r5));
    r5 = 15;
    r12 = MemoryInline::FlatRead8((r30 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r3 + 13), static_cast<uint8_t>(r12));
    r12 = MemoryInline::FlatRead8((r30 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r3 + 14), static_cast<uint8_t>(r12));
    r12 = MemoryInline::FlatRead8((r30 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r3 + 15), static_cast<uint8_t>(r12));
    r12 = MemoryInline::FlatRead8(r30);
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r3 + 16), static_cast<uint8_t>(r12));
    r31_addr_1 = (r31 + r24);
    r12 = MemoryInline::FlatRead8(r31_addr_1);
    r24 = (15 - r23);
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r3 + 17), static_cast<uint8_t>(r12));
    r31_addr_2 = (r31 + r26);
    r12 = MemoryInline::FlatRead8(r31_addr_2);
    r26 = (15 - r25);
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r3 + 18), static_cast<uint8_t>(r12));
    r31_addr_3 = (r31 + r28);
    r12 = MemoryInline::FlatRead8(r31_addr_3);
    r28 = (15 - r27);
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r3 + 19), static_cast<uint8_t>(r12));
    r31_addr_4 = (r31 + r29);
    r12 = MemoryInline::FlatRead8(r31_addr_4);
    r29 = (15 - r0);
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r3 + 20), static_cast<uint8_t>(r12));
    r31_addr_5 = (r31 + r10);
    r0 = MemoryInline::FlatRead8(r31_addr_5);
    r10 = (15 - r11);
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r3 + 21), static_cast<uint8_t>(r0));
    r31_addr_6 = (r31 + r8);
    r0 = MemoryInline::FlatRead8(r31_addr_6);
    r8 = (15 - r9);
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r3 + 22), static_cast<uint8_t>(r0));
    r31_addr_7 = (r31 + r6);
    r0 = MemoryInline::FlatRead8(r31_addr_7);
    r6 = (15 - r7);
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r3 + 23), static_cast<uint8_t>(r0));
    r31_addr_8 = (r31 + r4);
    r0 = MemoryInline::FlatRead8(r31_addr_8);
    r4 = (15 - r5);
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r3 + 24), static_cast<uint8_t>(r0));
    r31_addr_9 = (r31 + r24);
    r12 = MemoryInline::FlatRead8(r31_addr_9);
    MemoryInline::WriteResolved8(guest_range_1, 23u, (r3 + 25), static_cast<uint8_t>(r12));
    r31_addr_10 = (r31 + r26);
    r12 = MemoryInline::FlatRead8(r31_addr_10);
    MemoryInline::WriteResolved8(guest_range_1, 24u, (r3 + 26), static_cast<uint8_t>(r12));
    r31_addr_11 = (r31 + r28);
    r12 = MemoryInline::FlatRead8(r31_addr_11);
    MemoryInline::WriteResolved8(guest_range_1, 25u, (r3 + 27), static_cast<uint8_t>(r12));
    r31_addr_12 = (r31 + r29);
    r12 = MemoryInline::FlatRead8(r31_addr_12);
    MemoryInline::WriteResolved8(guest_range_1, 26u, (r3 + 28), static_cast<uint8_t>(r12));
    r31_addr_13 = (r31 + r10);
    r0 = MemoryInline::FlatRead8(r31_addr_13);
    MemoryInline::WriteResolved8(guest_range_1, 27u, (r3 + 29), static_cast<uint8_t>(r0));
    r31_addr_14 = (r31 + r8);
    r0 = MemoryInline::FlatRead8(r31_addr_14);
    MemoryInline::WriteResolved8(guest_range_1, 28u, (r3 + 30), static_cast<uint8_t>(r0));
    r31_addr_15 = (r31 + r6);
    r0 = MemoryInline::FlatRead8(r31_addr_15);
    MemoryInline::WriteResolved8(guest_range_1, 29u, (r3 + 31), static_cast<uint8_t>(r0));
    r31_addr_16 = (r31 + r4);
    r0 = MemoryInline::FlatRead8(r31_addr_16);
    MemoryInline::WriteResolved8(guest_range_1, 30u, (r3 + 32), static_cast<uint8_t>(r0));
    ctx->lr = 0x8048E0C8u;
    if constexpr (KnownRegArgsCpuCall<0x8048BB18u>(&func_8048BB18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        const auto regargs_result_8048BB18_2374 = func_8048BB18_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8048BB18_2374);
        r4 = static_cast<uint32_t>(regargs_result_8048BB18_2374 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8048BB18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = 1;
}

loc_8048E0CC:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8048DF44(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8048DF44_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8048DF44 func_8048DF44 preserves=true fpr_mask=0x00000000
