#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8050B420(CpuContext* ctx);
extern "C" uint64_t func_8050B420_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8050D460(CpuContext* ctx);
extern "C" uint64_t func_8050D460_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80511930(CpuContext* ctx);
extern "C" uint64_t func_80511930_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8050F890_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
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

    MKW_GUEST_ENTER(0x8050F890u);
    goto loc_8050F890;

loc_8050F890:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 92));
    r24 = r4;
    r25 = r5;
    r26 = r6;
    r27 = r7;
    r31 = r8;
    // inline leaf 0x8050B2B0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x8050B2B0
    r29 = r3;
    r28 = 0;
    goto loc_8050F908;
}

loc_8050F8D0:
{
    r3 = MemoryInline::FlatRead32((r30 + 92));
    r4 = r28;
    // inline leaf 0x8050B2C0 (12 guest instruction(s))
}

loc_inl2_0x8050B2C0:
{
}

loc_inl2_0x8050B2C4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_inl2_0x8050B2D4;
    }
}

loc_inl2_0x8050B2C8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl2_0x8050B2D0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_inl2_0x8050B2DC;
    }
}

loc_inl2_0x8050B2D4:
{
    r3 = 0;
    goto loc_inl2_cont_8050B2C0;
}

loc_inl2_0x8050B2DC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_inl2_cont_8050B2C0:
{
    // end of inlined leaf 0x8050B2C0
    r0 = MemoryInline::FlatRead16((r3 + 12));
}

loc_8050F8E4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r25))) {
        goto loc_8050F8F8;
    }
}

loc_8050F8E8:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r31, r0);
    r3 = 1;
    goto loc_8050FA24;
}

loc_8050F8F8:
{
    r0 = (r0 - r25);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8050F910;
    }
}

loc_8050F904:
{
    r28 = (r28 + 1);
}

loc_8050F908:
{
}

loc_8050F90C:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r29))) {
        goto loc_8050F8D0;
    }
}

loc_8050F910:
{
    r3 = (r30 + 68);
    // inline leaf 0x8050D400 (4 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r0 - r4);
    // end of inlined leaf 0x8050D400
}

loc_8050F91C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r27))) {
        goto loc_8050F930;
    }
}

loc_8050F920:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r31, r0);
    r3 = 1;
    goto loc_8050FA24;
}

loc_8050F930:
{
    r0 = MemoryInline::FlatRead32((r30 + 76));
    r5 = 0x80510000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = (r1 + 8);
    r5 = (r5 + -1936);
    MemoryInline::FlatWriteRam32((r1 + 12), r27);
    MemoryInline::FlatWriteRam32((r1 + 16), r24);
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r25));
    r3 = MemoryInline::FlatRead32((r30 + 92));
    ctx->lr = 0x8050F958u;
    if constexpr (KnownRegArgsCpuCall<0x8050B420u>(&func_8050B420)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8050B420_137E = func_8050B420_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8050B420_137E);
        r4 = static_cast<uint32_t>(regargs_result_8050B420_137E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8050B420u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    r3 = MemoryInline::FlatRead32((r30 + 92));
    // inline leaf 0x8050B2B0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x8050B2B0
    r0 = (r29 + 1);
}

loc_8050F968:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r3))) {
        goto loc_8050F97C;
    }
}

loc_8050F96C:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r31, r0);
    r3 = 1;
    goto loc_8050FA24;
}

loc_8050F97C:
{
    r4 = r26;
    r5 = r27;
    r3 = (r30 + 68);
    ctx->lr = 0x8050F98Cu;
    if constexpr (KnownRegArgsCpuCall<0x8050D460u>(&func_8050D460)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8050D460_1C24 = func_8050D460_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8050D460_1C24);
        r4 = static_cast<uint32_t>(regargs_result_8050D460_1C24 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x8050D460u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
}

loc_8050F990:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8050F9B8;
    }
}

loc_8050F994:
{
    r0 = (r25 + -1);
    r4 = MemoryInline::FlatRead16((r30 + 102));
    r3 = r30;
    r5 = (r0 & 65535);
    ctx->lr = 0x8050F9A8u;
    if constexpr (KnownRegArgsCpuCall<0x80511930u>(&func_80511930)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80511930_2281 = func_80511930_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80511930_2281);
        r4 = static_cast<uint32_t>(regargs_result_80511930_2281 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80511930u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
}

loc_8050F9AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8050FA18;
    }
}

loc_8050F9B0:
{
    r3 = 0;
    goto loc_8050FA24;
}

loc_8050F9B8:
{
    r3 = MemoryInline::FlatRead32((r30 + 92));
    r4 = r29;
    // inline leaf 0x8050B2C0 (12 guest instruction(s))
}

loc_inl5_0x8050B2C0:
{
}

loc_inl5_0x8050B2C4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_inl5_0x8050B2D4;
    }
}

loc_inl5_0x8050B2C8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl5_0x8050B2D0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_inl5_0x8050B2DC;
    }
}

loc_inl5_0x8050B2D4:
{
    r3 = 0;
    goto loc_inl5_cont_8050B2C0;
}

loc_inl5_0x8050B2DC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_inl5_cont_8050B2C0:
{
    // end of inlined leaf 0x8050B2C0
    r0 = MemoryInline::FlatRead16((r3 + 12));
}

loc_8050F9CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r25))) {
        goto loc_8050FA18;
    }
}

loc_8050F9D0:
{
    r3 = MemoryInline::FlatRead32((r30 + 92));
    r4 = (r29 + -1);
    // inline leaf 0x8050B2C0 (12 guest instruction(s))
}

loc_inl6_0x8050B2C0:
{
}

loc_inl6_0x8050B2C4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_inl6_0x8050B2D4;
    }
}

loc_inl6_0x8050B2C8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl6_0x8050B2D0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_inl6_0x8050B2DC;
    }
}

loc_inl6_0x8050B2D4:
{
    r3 = 0;
    goto loc_inl6_cont_8050B2C0;
}

loc_inl6_0x8050B2DC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_inl6_cont_8050B2C0:
{
    // end of inlined leaf 0x8050B2C0
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r25 - r3);
    r0 = (r0 & 65535);
}

loc_8050F9EC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8050FA18;
    }
}

loc_8050F9F0:
{
    r4 = (r3 + 1);
    r0 = (r25 + -1);
    r3 = r30;
    r4 = (r4 & 65535);
    r5 = (r0 & 65535);
    ctx->lr = 0x8050FA08u;
    if constexpr (KnownRegArgsCpuCall<0x80511930u>(&func_80511930)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80511930_31FB = func_80511930_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80511930_31FB);
        r4 = static_cast<uint32_t>(regargs_result_80511930_31FB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80511930u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
}

loc_8050FA0C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8050FA18;
    }
}

loc_8050FA10:
{
    r3 = 0;
    goto loc_8050FA24;
}

loc_8050FA18:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r31, r0);
    r3 = 1;
}

loc_8050FA24:
{
    r11 = (r1 + 64);
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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

extern "C" void func_8050F890(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8050F890_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8050F890 func_8050F890 preserves=true fpr_mask=0x00000000
