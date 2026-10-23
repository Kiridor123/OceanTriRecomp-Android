#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804DB0A4(CpuContext* ctx);
extern "C" uint64_t func_804DB0A4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804DA1CC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r24_addr_0 = 0;
    uint32_t r24_addr_1 = 0;
    uint32_t r24_addr_2 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
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

    goto loc_804DA1CC;

loc_804DA1CC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r6 = MemoryInline::FlatRead32((r3 + 12));
    r30 = 0;
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r31 = r5;
    r12 = (r6 + r3);
    r7 = MemoryInline::FlatRead32((r3 + 48));
    r11 = (r0 + r3);
    r6 = MemoryInline::FlatRead32((r3 + 56));
    r10 = (r7 + r3);
    r0 = MemoryInline::FlatRead32((r3 + 64));
    r9 = (r6 + r3);
    r7 = MemoryInline::FlatRead32((r3 + 72));
    r8 = (r0 + r3);
    r6 = MemoryInline::FlatRead32((r3 + 76));
    r0 = MemoryInline::FlatRead32((r3 + 84));
    r7 = (r7 + r3);
    r6 = (r6 + r3);
    MemoryInline::FlatWrite8((r3 + 35), static_cast<uint8_t>(r30));
    r0 = (r0 + r3);
    r29 = r3;
    MemoryInline::FlatWrite32((r3 + 12), r12);
    r30 = r4;
    r12 = 1;
    r5 = 8;
    MemoryInline::FlatWrite32((r3 + 16), r11);
    MemoryInline::FlatWrite32((r3 + 48), r10);
    MemoryInline::FlatWrite32((r3 + 56), r9);
    MemoryInline::FlatWrite32((r3 + 64), r8);
    MemoryInline::FlatWrite32((r3 + 72), r7);
    MemoryInline::FlatWrite32((r3 + 76), r6);
    MemoryInline::FlatWrite32((r3 + 84), r0);
    goto loc_804DA29C;
}

loc_804DA260:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r6 = (r0 + r5);
    r5_addr_2 = (r5 + r0);
    r0 = MemoryInline::FlatRead32(r5_addr_2);
}

loc_804DA270:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DA280;
    }
}

loc_804DA274:
{
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32(r6, r0);
    goto loc_804DA294;
}

loc_804DA280:
{
    r0 = MemoryInline::FlatRead32((r6 + 4));
}

loc_804DA288:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DA294;
    }
}

loc_804DA28C:
{
    MemoryInline::FlatWrite8((r3 + 35), static_cast<uint8_t>(r12));
    MemoryInline::FlatWrite32(r6, r4);
}

loc_804DA294:
{
    r5 = (r5 + 8);
    r12 = (r12 + 1);
}

loc_804DA29C:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_804DA2A4:
{
    if ((static_cast<uint32_t>(r12) < static_cast<uint32_t>(r0))) {
        goto loc_804DA260;
    }
}

loc_804DA2A8:
{
    r0 = MemoryInline::FlatRead8((r3 + 32));
}

loc_804DA2B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DA2CC;
    }
}

loc_804DA2B4:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 2040);
    r5 = MemoryInline::FlatRead32((r3 + 36));
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_1);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r3 + 36), r0);
}

loc_804DA2CC:
{
    r0 = MemoryInline::FlatRead8((r3 + 33));
}

loc_804DA2D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DA2F0;
    }
}

loc_804DA2D8:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 2040);
    r5 = MemoryInline::FlatRead32((r3 + 40));
    r4_addr_3 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_3);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r3 + 40), r0);
}

loc_804DA2F0:
{
    r0 = MemoryInline::FlatRead8((r3 + 34));
}

loc_804DA2F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DA314;
    }
}

loc_804DA2FC:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & 2040);
    r5 = MemoryInline::FlatRead32((r3 + 44));
    r4_addr_5 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_5);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r3 + 44), r0);
}

loc_804DA314:
{
    r4 = -1431633920;
    r0 = MemoryInline::FlatRead32((r3 + 52));
    r3 = (r4 + -21845);
    r25 = 0;
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r3) * static_cast<uint64_t>(r0)) >> 32));
    r24 = 0;
    r26_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r26 = (r26_rot_0 & 536870911);
    goto loc_804DA368;
}

loc_804DA334:
{
    r0 = MemoryInline::FlatRead32((r29 + 48));
    r4 = 0;
    r3 = (r0 + r24);
    r24_addr_2 = (r24 + r0);
    r0 = MemoryInline::FlatRead32(r24_addr_2);
    r0 = (r0 + r29);
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r5 = MemoryInline::FlatRead32((r29 + 12));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_8 & 134217720);
    r5_addr_4 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_4);
    ctx->lr = 0x804DA360u;
    if constexpr (KnownRegArgsCpuCall<0x804DB0A4u>(&func_804DB0A4)) {
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
        const auto regargs_result_804DB0A4_20E2 = func_804DB0A4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804DB0A4_20E2);
        r4 = static_cast<uint32_t>(regargs_result_804DB0A4_20E2 >> 32);
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
        InvokeDirectCpu<0x804DB0A4u>(ctx);
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
    r24 = (r24 + 12);
    r25 = (r25 + 1);
}

loc_804DA368:
{
}

loc_804DA36C:
{
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(r26))) {
        goto loc_804DA334;
    }
}

loc_804DA370:
{
}

loc_804DA374:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(1))) {
        goto loc_804DA380;
    }
}

loc_804DA378:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 52), r0);
}

loc_804DA380:
{
    r3 = -1431633920;
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + 56), 0, 28u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r29 + 60));
    r3 = (r3 + -21845);
    r4 = 0;
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r3) * static_cast<uint64_t>(r0)) >> 32));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r5 = (r5_rot_0 & 536870911);
}

loc_804DA398:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804DA494;
    }
}

loc_804DA39C:
{
}

loc_804DA3A0:
{
    r6 = (r5 + -8);
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(8))) {
        goto loc_804DA468;
    }
}

loc_804DA3A8:
{
    r0 = (r6 + 7);
    r3 = 0;
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_9 & 536870911);
    ctr = r0;
}

loc_804DA3BC:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(0))) {
        goto loc_804DA468;
    }
}

loc_804DA3C0:
{
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r29 + 56));
    r4 = (r4 + 8);
    r6_addr_2 = (r6 + r3);
    r0 = MemoryInline::FlatRead32(r6_addr_2);
    r0 = (r0 + r29);
    r6_addr_3 = (r6 + r3);
    MemoryInline::FlatWrite32(r6_addr_3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r29 + 56));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 12));
    r0 = (r0 + r29);
    MemoryInline::FlatWrite32((r6 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r29 + 56));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 24));
    r0 = (r0 + r29);
    MemoryInline::FlatWrite32((r6 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r29 + 56));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 36));
    r0 = (r0 + r29);
    MemoryInline::FlatWrite32((r6 + 36), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r29 + 56));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 48));
    r0 = (r0 + r29);
    MemoryInline::FlatWrite32((r6 + 48), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r29 + 56));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 60));
    r0 = (r0 + r29);
    MemoryInline::FlatWrite32((r6 + 60), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r29 + 56));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 72));
    r0 = (r0 + r29);
    MemoryInline::FlatWrite32((r6 + 72), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r29 + 56));
    r6 = (r0 + r3);
    r3 = (r3 + 96);
    r0 = MemoryInline::FlatRead32((r6 + 84));
    r0 = (r0 + r29);
    MemoryInline::FlatWrite32((r6 + 84), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804DA3C0;
    }
}

loc_804DA468:
{
    r0 = (r5 - r4);
    r6 = (r4 * 12);
    ctr = r0;
}

loc_804DA478:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r5))) {
        goto loc_804DA494;
    }
}

loc_804DA47C:
{
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r29 + 56));
    r3_addr_2 = (r3 + r6);
    r0 = MemoryInline::FlatRead32(r3_addr_2);
    r0 = (r0 + r29);
    r3_addr_3 = (r3 + r6);
    MemoryInline::FlatWrite32(r3_addr_3, r0);
    r6 = (r6 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804DA47C;
    }
}

loc_804DA494:
{
    r3 = -1431633920;
    r0 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r29 + 80));
    r3 = (r3 + -21845);
    r25 = 0;
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r3) * static_cast<uint64_t>(r0)) >> 32));
    r24 = 0;
    r26_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r26 = (r26_rot_1 & 536870911);
    goto loc_804DA500;
}

loc_804DA4B4:
{
    r3 = MemoryInline::FlatRead32((r29 + 76));
    r0 = MemoryInline::FlatRead32((r29 + 44));
    r28 = (r3 + r24);
    MemoryInline::FlatWrite32((r28 + 4), r0);
    r3 = MemoryInline::FlatRead32((r29 + 56));
    r0 = MemoryInline::FlatRead32((r28 + 8));
    r27 = (r3 + r0);
    goto loc_804DA4E8;
}

loc_804DA4D4:
{
    r5 = MemoryInline::FlatRead32((r28 + 4));
    r3 = r27;
    r4 = 0;
    ctx->lr = 0x804DA4E4u;
    if constexpr (KnownRegArgsCpuCall<0x804DB0A4u>(&func_804DB0A4)) {
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
        const auto regargs_result_804DB0A4_3CCB = func_804DB0A4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804DB0A4_3CCB);
        r4 = static_cast<uint32_t>(regargs_result_804DB0A4_3CCB >> 32);
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
        InvokeDirectCpu<0x804DB0A4u>(ctx);
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
    r27 = (r27 + 12);
}

loc_804DA4E8:
{
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_14 & 16777215);
}

loc_804DA4F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r25))) {
        goto loc_804DA4D4;
    }
}

loc_804DA4F8:
{
    r24 = (r24 + 12);
    r25 = (r25 + 1);
}

loc_804DA500:
{
}

loc_804DA504:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r26))) {
        goto loc_804DA4B4;
    }
}

loc_804DA508:
{
}

loc_804DA50C:
{
    if ((static_cast<int32_t>(r31) > static_cast<int32_t>(1))) {
        goto loc_804DA520;
    }
}

loc_804DA510:
{
    r5 = MemoryInline::FlatRead32((r29 + 28));
    r3 = r30;
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804DA520:
{
    r3 = r29;
    // inline leaf 0x804DA1BC (1 guest instruction(s))
    // end of inlined leaf 0x804DA1BC
    r11 = (r1 + 48);
    r3 = 1;
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
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

extern "C" void func_804DA1CC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804DA1CC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000037FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804DA1CC func_804DA1CC preserves=true fpr_mask=0x00000000
