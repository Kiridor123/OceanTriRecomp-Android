#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80528330(CpuContext* ctx);
extern "C" uint64_t func_80528330_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80528540_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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

    MKW_GUEST_ENTER(0x80528540u);
    goto loc_80528540;

loc_80528540:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r28 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r28);
    r23 = r3;
    r25 = r5;
    r24 = r4;
    r27 = (r4 + 40);
    r5 = 32;
    r3 = (r3 + 16);
    r4 = (r4 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32((r23 + 48), r28);
    r30 = (r23 + 16);
    r31 = (r23 + 36);
    r22 = 255;
    r25 = (r25 + -40);
    goto loc_805286D0;
}

loc_80528594:
{
    // inline leaf 0x805289F0 (9 guest instruction(s))
}

loc_inl1_0x805289F0:
{
    r5 = MemoryInline::FlatRead32((r13 + -13344));
    r3 = MemoryInline::FlatRead32((r5 + 15048));
}

loc_inl1_0x805289FC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80528A00:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0 = 0;
    MemoryInline::FlatWrite32((r5 + 15048), r4);
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_inl1_cont_805289F0;
}

loc_inl1_return:
{
}

loc_inl1_cont_805289F0:
{
    // end of inlined leaf 0x805289F0
    r0 = MemoryInline::FlatRead32((r23 + 48));
    r29 = r3;
    MemoryInline::FlatWrite32(r3, r0);
    r4 = r27;
    r5 = 12;
    MemoryInline::FlatWrite32((r23 + 48), r3);
    r3 = (r3 + 68);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32((r29 + 4), r28);
    r26 = (r27 + 12);
    r0 = (r29 + 68);
    r3 = (r29 + 84);
    MemoryInline::FlatWrite32((r29 + 8), r23);
    r4 = r26;
    r5 = 8;
    r6 = MemoryInline::FlatRead32((r24 + 4));
    MemoryInline::FlatWrite32((r29 + 12), r6);
    r6 = MemoryInline::FlatRead32((r24 + 4));
    MemoryInline::FlatWrite32((r29 + 36), r6);
    r6 = MemoryInline::FlatRead16((r23 + 24));
    MemoryInline::FlatWrite16((r29 + 40), static_cast<uint16_t>(r6));
    r6 = MemoryInline::FlatRead16((r23 + 26));
    MemoryInline::FlatWrite16((r29 + 42), static_cast<uint16_t>(r6));
    r6 = MemoryInline::FlatRead8((r27 + 2));
    MemoryInline::FlatWrite8((r29 + 44), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8((r29 + 47));
    r6 = (r6 + 1);
    MemoryInline::FlatWrite8((r29 + 47), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite32((r29 + 48), r30);
    MemoryInline::FlatWrite32((r29 + 52), r31);
    MemoryInline::FlatWrite32((r29 + 56), r0);
    r0 = MemoryInline::FlatRead8((r27 + 4));
    MemoryInline::FlatWrite32((r29 + 80), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r4 = r26;
    r3 = (r29 + 92);
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r29 + 86));
    r3 = (r29 + 84);
    MemoryInline::FlatWrite8((r29 + 45), static_cast<uint8_t>(r0));
    r25 = (r25 + -20);
    r27 = (r27 + 20);
    MemoryInline::FlatWrite32((r29 + 60), r3);
    r0 = MemoryInline::FlatRead8((r29 + 86));
    MemoryInline::FlatWrite8((r29 + 46), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r29 + 64), r3);
    r0 = MemoryInline::FlatRead8((r29 + 72));
}

loc_8052865C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_805286C8;
    }
}

loc_80528660:
{
    r0 = MemoryInline::FlatRead8((r29 + 94));
    r4 = (r29 + 92);
    MemoryInline::FlatWrite8((r29 + 46), static_cast<uint8_t>(r0));
    r27 = (r27 + 8);
    MemoryInline::FlatWrite32((r29 + 64), r4);
    r0 = MemoryInline::FlatRead8((r26 + 10));
    r0 = (r0 & 128);
}

loc_8052867C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805286A0;
    }
}

loc_80528680:
{
    r4 = (r26 + 8);
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead8((r29 + 86));
    r0 = (r29 + 84);
    MemoryInline::FlatWrite8((r29 + 45), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32((r29 + 60), r0);
    goto loc_805286C0;
}

loc_805286A0:
{
    r3 = r4;
    r4 = (r26 + 8);
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead8((r29 + 94));
    r0 = (r29 + 92);
    MemoryInline::FlatWrite8((r29 + 46), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32((r29 + 64), r0);
}

loc_805286C0:
{
    r25 = (r25 + -8);
    goto loc_805286D0;
}

loc_805286C8:
{
    MemoryInline::FlatWrite8((r29 + 46), static_cast<uint8_t>(r22));
    MemoryInline::FlatWrite32((r29 + 64), r28);
}

loc_805286D0:
{
}

loc_805286D4:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_80528594;
    }
}

loc_805286D8:
{
    r3 = MemoryInline::FlatRead32((r23 + 48));
    ctx->lr = 0x805286E0u;
    if constexpr (KnownRegArgsCpuCall<0x80528330u>(&func_80528330)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_80528330_1BDE = func_80528330_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80528330_1BDE);
        r4 = static_cast<uint32_t>(regargs_result_80528330_1BDE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80528330u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r11 = (r1 + 48);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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

extern "C" void func_80528540(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80528540_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80528540 func_80528540 preserves=true fpr_mask=0x00000000
