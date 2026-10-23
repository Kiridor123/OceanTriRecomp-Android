#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8056D438(CpuContext* ctx);
extern "C" uint64_t func_8056D438_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8056D15C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addic_src_0 = 0;
    uint32_t r0_addic_src_1 = 0;
    uint32_t r0_addic_src_2 = 0;
    uint32_t r0_addic_src_3 = 0;
    uint32_t r0_addic_src_4 = 0;
    uint32_t r0_addic_src_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
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
    uint32_t ctr = ctx->ctr;

    goto loc_8056D15C;

loc_8056D15C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r31 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r23 = MemoryInline::FlatRead32((r31 + 24));
    r24 = MemoryInline::FlatRead32((r31 + 28));
    r25 = MemoryInline::FlatRead8((r31 + 57));
    r26 = MemoryInline::FlatRead8((r31 + 65));
    r27 = MemoryInline::FlatRead8((r31 + 58));
    r28 = MemoryInline::FlatRead8((r31 + 66));
    r29 = MemoryInline::FlatRead8((r31 + 59));
    r30 = MemoryInline::FlatRead8((r31 + 67));
    r12 = MemoryInline::FlatRead8((r31 + 60));
    r11 = MemoryInline::FlatRead8((r31 + 68));
    r10 = MemoryInline::FlatRead8((r31 + 61));
    r9 = MemoryInline::FlatRead8((r31 + 69));
    r8 = MemoryInline::FlatRead8((r31 + 62));
    r7 = MemoryInline::FlatRead8((r31 + 70));
    r6 = MemoryInline::FlatRead8((r31 + 63));
    r5 = MemoryInline::FlatRead8((r31 + 71));
    r4 = MemoryInline::FlatRead8((r31 + 64));
    r0 = MemoryInline::FlatRead8((r31 + 72));
    MemoryInline::FlatWrite32((r31 + 20), r23);
    MemoryInline::FlatWrite32((r31 + 24), r24);
    MemoryInline::FlatWrite8((r31 + 49), static_cast<uint8_t>(r25));
    MemoryInline::FlatWrite8((r31 + 57), static_cast<uint8_t>(r26));
    MemoryInline::FlatWrite8((r31 + 50), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r31 + 58), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r31 + 51), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r31 + 59), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r31 + 52), static_cast<uint8_t>(r12));
    MemoryInline::FlatWrite8((r31 + 60), static_cast<uint8_t>(r11));
    MemoryInline::FlatWrite8((r31 + 53), static_cast<uint8_t>(r10));
    MemoryInline::FlatWrite8((r31 + 61), static_cast<uint8_t>(r9));
    MemoryInline::FlatWrite8((r31 + 54), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r31 + 62), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r31 + 55), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r31 + 63), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r31 + 56), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r31 + 64), static_cast<uint8_t>(r0));
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl2_0x804D1330:
{
}

loc_inl2_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x804D1344;
    }
}

loc_inl2_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl2_0x804D1348;
}

loc_inl2_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl2_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl2_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = r31;
    ctx->lr = 0x8056D214u;
    if constexpr (KnownRegArgsCpuCall<0x8056D438u>(&func_8056D438)) {
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
        const auto regargs_result_8056D438_162D = func_8056D438_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8056D438_162D);
        r4 = static_cast<uint32_t>(regargs_result_8056D438_162D >> 32);
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
        InvokeDirectCpu<0x8056D438u>(ctx);
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
    r5 = MemoryInline::FlatRead32((r31 + 24));
    r3 = 0;
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 8), r3);
    r7 = 0;
    r4 = 1;
    MemoryInline::FlatWrite32((r31 + 4), r5);
    ctr = r0;
}

loc_8056D234:
{
    r0 = MemoryInline::FlatRead32((r31 + 24));
    r5 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r7));
    r0 = (r0 & r5);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056D270;
    }
}

loc_8056D244:
{
    r0 = MemoryInline::FlatRead32((r31 + 20));
    r0 = (r0 & r5);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056D264;
    }
}

loc_8056D250:
{
    r6 = (r31 + r7);
    r3 = MemoryInline::FlatRead8((r6 + 49));
    r0 = MemoryInline::FlatRead8((r6 + 57));
}

loc_8056D260:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8056D270;
    }
}

loc_8056D264:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r0 = (r0 | r5);
    MemoryInline::FlatWrite32((r31 + 8), r0);
}

loc_8056D270:
{
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead32((r31 + 24));
    r5 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r7));
    r0 = (r0 & r5);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056D2B0;
    }
}

loc_8056D284:
{
    r0 = MemoryInline::FlatRead32((r31 + 20));
    r0 = (r0 & r5);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056D2A4;
    }
}

loc_8056D290:
{
    r6 = (r31 + r7);
    r3 = MemoryInline::FlatRead8((r6 + 49));
    r0 = MemoryInline::FlatRead8((r6 + 57));
}

loc_8056D2A0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8056D2B0;
    }
}

loc_8056D2A4:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r0 = (r0 | r5);
    MemoryInline::FlatWrite32((r31 + 8), r0);
}

loc_8056D2B0:
{
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8056D234;
    }
}

loc_8056D2B8:
{
    r3 = 0;
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 12), r3);
    r7 = 0;
    r4 = 1;
    ctr = r0;
}

loc_8056D2D0:
{
    r0 = MemoryInline::FlatRead32((r31 + 20));
    r5 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r7));
    r0 = (r0 & r5);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056D30C;
    }
}

loc_8056D2E0:
{
    r0 = MemoryInline::FlatRead32((r31 + 24));
    r0 = (r0 & r5);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056D300;
    }
}

loc_8056D2EC:
{
    r6 = (r31 + r7);
    r3 = MemoryInline::FlatRead8((r6 + 49));
    r0 = MemoryInline::FlatRead8((r6 + 57));
}

loc_8056D2FC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8056D30C;
    }
}

loc_8056D300:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r0 = (r0 | r5);
    MemoryInline::FlatWrite32((r31 + 12), r0);
}

loc_8056D30C:
{
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead32((r31 + 20));
    r5 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r7));
    r0 = (r0 & r5);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056D34C;
    }
}

loc_8056D320:
{
    r0 = MemoryInline::FlatRead32((r31 + 24));
    r0 = (r0 & r5);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056D340;
    }
}

loc_8056D32C:
{
    r6 = (r31 + r7);
    r3 = MemoryInline::FlatRead8((r6 + 49));
    r0 = MemoryInline::FlatRead8((r6 + 57));
}

loc_8056D33C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8056D34C;
    }
}

loc_8056D340:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r0 = (r0 | r5);
    MemoryInline::FlatWrite32((r31 + 12), r0);
}

loc_8056D34C:
{
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8056D2D0;
    }
}

loc_8056D354:
{
    r3 = 0;
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 16), r3);
    r6 = r31;
    r8 = 0;
    r4 = 30;
    r3 = 8;
    r5 = 1;
    ctr = r0;
}

loc_8056D378:
{
    r0 = MemoryInline::FlatRead32((r31 + 24));
    r7 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r8));
    r0 = (r0 & r7);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056D3C4;
    }
}

loc_8056D388:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r0 = (r0 & r7);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056D3A4;
    }
}

loc_8056D394:
{
    MemoryInline::FlatWrite32((r6 + 76), r4);
    r0 = MemoryInline::FlatRead32((r31 + 16));
    r0 = (r0 | r7);
    MemoryInline::FlatWrite32((r31 + 16), r0);
}

loc_8056D3A4:
{
    r0 = MemoryInline::FlatRead32((r6 + 76));
    r0_addic_src_2 = r0;
    r0 = (r0_addic_src_2 + -1);
}

loc_8056D3AC:
{
    MemoryInline::FlatWrite32((r6 + 76), r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8056D3C4;
    }
}

loc_8056D3B4:
{
    MemoryInline::FlatWrite32((r6 + 76), r3);
    r0 = MemoryInline::FlatRead32((r31 + 16));
    r0 = (r0 | r7);
    MemoryInline::FlatWrite32((r31 + 16), r0);
}

loc_8056D3C4:
{
    r8 = (r8 + 1);
    r0 = MemoryInline::FlatRead32((r31 + 24));
    r7 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r8));
    r0 = (r0 & r7);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056D414;
    }
}

loc_8056D3D8:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r0 = (r0 & r7);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056D3F4;
    }
}

loc_8056D3E4:
{
    MemoryInline::FlatWrite32((r6 + 80), r4);
    r0 = MemoryInline::FlatRead32((r31 + 16));
    r0 = (r0 | r7);
    MemoryInline::FlatWrite32((r31 + 16), r0);
}

loc_8056D3F4:
{
    r0 = MemoryInline::FlatRead32((r6 + 80));
    r0_addic_src_4 = r0;
    r0 = (r0_addic_src_4 + -1);
}

loc_8056D3FC:
{
    MemoryInline::FlatWrite32((r6 + 80), r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8056D414;
    }
}

loc_8056D404:
{
    MemoryInline::FlatWrite32((r6 + 80), r3);
    r0 = MemoryInline::FlatRead32((r31 + 16));
    r0 = (r0 | r7);
    MemoryInline::FlatWrite32((r31 + 16), r0);
}

loc_8056D414:
{
    r6 = (r6 + 8);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8056D378;
    }
}

loc_8056D420:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
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
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8056D15C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8056D15C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8056D15C func_8056D15C preserves=true fpr_mask=0x00000000
