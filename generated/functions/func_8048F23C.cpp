#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8048BB18(CpuContext* ctx);
extern "C" uint64_t func_8048BB18_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8048F23C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_10 = 0;
    uint32_t r6_addr_11 = 0;
    uint32_t r6_addr_12 = 0;
    uint32_t r6_addr_13 = 0;
    uint32_t r6_addr_14 = 0;
    uint32_t r6_addr_15 = 0;
    uint32_t r6_addr_16 = 0;
    uint32_t r6_addr_17 = 0;
    uint32_t r6_addr_18 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;
    uint32_t r6_addr_7 = 0;
    uint32_t r6_addr_8 = 0;
    uint32_t r6_addr_9 = 0;
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8048F23Cu);
    goto loc_8048F23C;

loc_8048F23C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r7 = (r4 * 22);
    r0 = 0;
    r9 = 17;
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    r8 = 12;
    r10 = (r7 + 4);
    r7 = (r10 & 65535);
}

loc_8048F270:
{
    r0 = (r7 + -3);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r10));
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r9));
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r0));
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(11))) {
        goto loc_8048F28C;
    }
}

loc_8048F288:
{
    r4 = 11;
}

loc_8048F28C:
{
    MemoryInline::FlatWrite8((r3 + 11), static_cast<uint8_t>(r4));
    r7 = (r3 + 12);
    ctr = r4;
}

loc_8048F29C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_8048F3E0;
    }
}

loc_8048F2A0:
{
    r0 = MemoryInline::FlatRead8((r5 + 5));
    r22 = 0;
    r23 = (15 - r22);
    r24 = 1;
    guest_range_1 = MemoryInline::ResolveRangeHost(r7, 0, 22u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r7, static_cast<uint8_t>(r0));
    r25 = (15 - r24);
    r26 = 2;
    r28 = 3;
    r0 = MemoryInline::FlatRead8((r5 + 4));
    r27 = (15 - r26);
    r29 = (15 - r28);
    r30 = 4;
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r7 + 1), static_cast<uint8_t>(r0));
    r31 = (15 - r30);
    r12 = 5;
    r10 = 6;
    r0 = MemoryInline::FlatRead8((r5 + 3));
    r11 = (15 - r12);
    r9 = (15 - r10);
    r8 = 7;
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r7 + 2), static_cast<uint8_t>(r0));
    r4 = (15 - r8);
    r22 = 8;
    r24 = 9;
    r0 = MemoryInline::FlatRead8((r5 + 2));
    r26 = 10;
    r28 = 11;
    r30 = 12;
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r7 + 3), static_cast<uint8_t>(r0));
    r12 = 13;
    r10 = 14;
    r8 = 15;
    r0 = MemoryInline::FlatRead8((r5 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r7 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8(r5);
    r5 = (r5 + 6);
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r7 + 5), static_cast<uint8_t>(r0));
    r6_addr_2 = (r6 + r23);
    r0 = MemoryInline::FlatRead8(r6_addr_2);
    r23 = (15 - r22);
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r7 + 6), static_cast<uint8_t>(r0));
    r6_addr_3 = (r6 + r25);
    r0 = MemoryInline::FlatRead8(r6_addr_3);
    r25 = (15 - r24);
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r7 + 7), static_cast<uint8_t>(r0));
    r6_addr_4 = (r6 + r27);
    r0 = MemoryInline::FlatRead8(r6_addr_4);
    r27 = (15 - r26);
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r7 + 8), static_cast<uint8_t>(r0));
    r6_addr_5 = (r6 + r29);
    r0 = MemoryInline::FlatRead8(r6_addr_5);
    r29 = (15 - r28);
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r7 + 9), static_cast<uint8_t>(r0));
    r6_addr_6 = (r6 + r31);
    r0 = MemoryInline::FlatRead8(r6_addr_6);
    r31 = (15 - r30);
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r7 + 10), static_cast<uint8_t>(r0));
    r6_addr_7 = (r6 + r11);
    r0 = MemoryInline::FlatRead8(r6_addr_7);
    r11 = (15 - r12);
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r7 + 11), static_cast<uint8_t>(r0));
    r6_addr_8 = (r6 + r9);
    r0 = MemoryInline::FlatRead8(r6_addr_8);
    r9 = (15 - r10);
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r7 + 12), static_cast<uint8_t>(r0));
    r6_addr_9 = (r6 + r4);
    r0 = MemoryInline::FlatRead8(r6_addr_9);
    r4 = (15 - r8);
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r7 + 13), static_cast<uint8_t>(r0));
    r6_addr_10 = (r6 + r23);
    r0 = MemoryInline::FlatRead8(r6_addr_10);
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r7 + 14), static_cast<uint8_t>(r0));
    r6_addr_11 = (r6 + r25);
    r0 = MemoryInline::FlatRead8(r6_addr_11);
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r7 + 15), static_cast<uint8_t>(r0));
    r6_addr_12 = (r6 + r27);
    r0 = MemoryInline::FlatRead8(r6_addr_12);
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r7 + 16), static_cast<uint8_t>(r0));
    r6_addr_13 = (r6 + r29);
    r0 = MemoryInline::FlatRead8(r6_addr_13);
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r7 + 17), static_cast<uint8_t>(r0));
    r6_addr_14 = (r6 + r31);
    r0 = MemoryInline::FlatRead8(r6_addr_14);
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r7 + 18), static_cast<uint8_t>(r0));
    r6_addr_15 = (r6 + r11);
    r0 = MemoryInline::FlatRead8(r6_addr_15);
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r7 + 19), static_cast<uint8_t>(r0));
    r6_addr_16 = (r6 + r9);
    r0 = MemoryInline::FlatRead8(r6_addr_16);
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r7 + 20), static_cast<uint8_t>(r0));
    r6_addr_17 = (r6 + r4);
    r0 = MemoryInline::FlatRead8(r6_addr_17);
    r6 = (r6 + 16);
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r7 + 21), static_cast<uint8_t>(r0));
    r7 = (r7 + 22);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8048F2A0;
    }
}

loc_8048F3E0:
{
    ctx->lr = 0x8048F3E4u;
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
        ctx->ctr = ctr;
        const auto regargs_result_8048BB18_1F87 = func_8048BB18_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8048BB18_1F87);
        r4 = static_cast<uint32_t>(regargs_result_8048BB18_1F87 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
    r11 = (r1 + 48);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
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
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8048F23C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8048F23C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8048F23C func_8048F23C preserves=true fpr_mask=0x00000000
