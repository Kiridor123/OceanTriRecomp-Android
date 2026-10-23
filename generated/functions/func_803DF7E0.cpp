#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803DF9B0(CpuContext* ctx);
extern "C" uint64_t func_803DF9B0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803E0BC4(CpuContext* ctx);
extern "C" uint64_t func_803E0BC4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_803DF7E0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_803DF7E0;

loc_803DF7E0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r30 = r3;
    r22 = 0;
    r25 = r30;
    r24 = (r3 + 12);
    r26 = 0x80600000u;
    r27 = 1;
    r28 = 0;
    r29 = 3;
}

loc_803DF814:
{
    r31 = MemoryInline::FlatRead32((r25 + 12));
}

loc_803DF81C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_803DF930;
    }
}

loc_803DF820:
{
    r4 = (r30 + r22);
    r0 = MemoryInline::FlatRead8((r4 + 96));
}

loc_803DF82C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803DF930;
    }
}

loc_803DF830:
{
}

loc_803DF834:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(2))) {
        goto loc_803DF844;
    }
}

loc_803DF838:
{
    r0 = MemoryInline::FlatRead32((r30 + 20));
}

loc_803DF840:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803DF970;
    }
}

loc_803DF844:
{
}

loc_803DF848:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(1))) {
        goto loc_803DF858;
    }
}

loc_803DF84C:
{
}

loc_803DF850:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(2))) {
        goto loc_803DF868;
    }
}

loc_803DF854:
{
    goto loc_803DF92C;
}

loc_803DF858:
{
    r0 = MemoryInline::FlatRead8((r30 + 98));
}

loc_803DF860:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803DF970;
    }
}

loc_803DF864:
{
    goto loc_803DF92C;
}

loc_803DF868:
{
    r23 = 0;
    ctr = r29;
}

loc_803DF870:
{
    r3 = (r30 + r23);
    r0 = MemoryInline::FlatRead8((r3 + 96));
}

loc_803DF87C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803DF900;
    }
}

loc_803DF880:
{
    r23 = (r23 + 1);
    r3 = (r30 + r23);
    r0 = MemoryInline::FlatRead8((r3 + 96));
}

loc_803DF890:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803DF900;
    }
}

loc_803DF894:
{
    r23 = (r23 + 1);
    r3 = (r30 + r23);
    r0 = MemoryInline::FlatRead8((r3 + 96));
}

loc_803DF8A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803DF900;
    }
}

loc_803DF8A8:
{
    r23 = (r23 + 1);
    r3 = (r30 + r23);
    r0 = MemoryInline::FlatRead8((r3 + 96));
}

loc_803DF8B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803DF900;
    }
}

loc_803DF8BC:
{
    r23 = (r23 + 1);
    r3 = (r30 + r23);
    r0 = MemoryInline::FlatRead8((r3 + 96));
}

loc_803DF8CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803DF900;
    }
}

loc_803DF8D0:
{
    r23 = (r23 + 1);
    r3 = (r30 + r23);
    r0 = MemoryInline::FlatRead8((r3 + 96));
}

loc_803DF8E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803DF900;
    }
}

loc_803DF8E4:
{
    r23 = (r23 + 1);
    r3 = (r30 + r23);
    r0 = MemoryInline::FlatRead8((r3 + 96));
}

loc_803DF8F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803DF900;
    }
}

loc_803DF8F8:
{
    r23 = (r23 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803DF870;
    }
}

loc_803DF900:
{
}

loc_803DF904:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(21))) {
        goto loc_803DF92C;
    }
}

loc_803DF908:
{
    // inline leaf 0x803C99D8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16736));
    // end of inlined leaf 0x803C99D8
    r4 = (r26 + -17800);
    r5 = r23;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x803DF928u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    goto loc_803DF970;
}

loc_803DF92C:
{
    MemoryInline::FlatWrite8((r4 + 96), static_cast<uint8_t>(r27));
}

loc_803DF930:
{
}

loc_803DF934:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_803DF970;
    }
}

loc_803DF938:
{
    r23 = (r30 + r22);
    r0 = MemoryInline::FlatRead8((r23 + 96));
}

loc_803DF944:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803DF970;
    }
}

loc_803DF948:
{
    r3 = r31;
    ctx->lr = 0x803DF950u;
    if constexpr (KnownRegArgsCpuCall<0x803DF9B0u>(&func_803DF9B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803DF9B0_1E7A = func_803DF9B0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DF9B0_1E7A);
        r4 = static_cast<uint32_t>(regargs_result_803DF9B0_1E7A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DF9B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = r31;
    // inline leaf 0x803DF99C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 148));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x803DF99C
}

loc_803DF95C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803DF970;
    }
}

loc_803DF960:
{
    r3 = r30;
    r4 = r24;
    ctx->lr = 0x803DF96Cu;
    if constexpr (KnownRegArgsCpuCall<0x803E0BC4u>(&func_803E0BC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803E0BC4_27E8 = func_803E0BC4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803E0BC4_27E8);
        r4 = static_cast<uint32_t>(regargs_result_803E0BC4_27E8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803E0BC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite8((r23 + 96), static_cast<uint8_t>(r28));
}

loc_803DF970:
{
    r25 = (r25 + 4);
    r24 = (r24 + 4);
    r22 = (r22 + 1);
}

loc_803DF980:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(21))) {
        goto loc_803DF814;
    }
}

loc_803DF984:
{
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803DF7E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803DF7E0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803DF7E0 func_803DF7E0 preserves=true fpr_mask=0x00000000
