#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E4D04(CpuContext* ctx);
extern "C" uint64_t func_800E4D04_ra98_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800E4F5C(CpuContext* ctx);
extern "C" uint64_t func_800E4F5C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800F29F0(CpuContext* ctx);
extern "C" uint64_t func_800F29F0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800F30B8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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

    MKW_GUEST_ENTER(0x800F30B8u);
    goto loc_800F30B8;

loc_800F30B8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r29 = r3;
    r30 = r4;
    r31 = MemoryInline::FlatRead32((r13 + -30608));
}

loc_800F30DC:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_800F3264;
    }
}

loc_800F30E0:
{
    ctx->lr = 0x800F30E4u;
    if constexpr (KnownRegArgsCpuCall<0x800F29F0u>(&func_800F29F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F29F0_ACA = func_800F29F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F29F0_ACA);
        r4 = static_cast<uint32_t>(regargs_result_800F29F0_ACA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800F29F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = r3;
}

loc_800F30EC:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_800F3108;
    }
}

loc_800F30F0:
{
}

loc_800F30F4:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(71))) {
        goto loc_800F3108;
    }
}

loc_800F30F8:
{
    r3 = (r29 & 255);
    r4 = 1;
    // inline leaf 0x800E48F4 (4 guest instruction(s))
    r0 = (r3 & 255);
    r3 = (r13 + -17520);
    r3_addr_1 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_1, static_cast<uint8_t>(r4));
    // end of inlined leaf 0x800E48F4
    goto loc_800F3114;
}

loc_800F3108:
{
    r3 = (r29 & 255);
    r4 = (r0 & 255);
    // inline leaf 0x800E48F4 (4 guest instruction(s))
    r0 = (r3 & 255);
    r3 = (r13 + -17520);
    r3_addr_2 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_2, static_cast<uint8_t>(r4));
    // end of inlined leaf 0x800E48F4
}

loc_800F3114:
{
    r3 = (r29 & 255);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x800E4948u>(ctx);
    f1 = ctx->fpr[1];
    r3 = r29;
    // inline leaf 0x800F0540 (8 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -17396));
    r0 = (r4 + 65536);
    r3 = (r0 + r3);
    r3 = MemoryInline::FlatRead8((r3 + -26715));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x800F0540
}

loc_800F3128:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F3264;
    }
}

loc_800F312C:
{
    r24 = 0;
    r28 = 3;
    r27 = 2;
    r26 = 1;
    r25 = 0;
}

loc_800F3140:
{
    r3 = r24;
    ctx->lr = 0x800F3148u;
    if constexpr (KnownRegArgsCpuCall<0x800E4F5Cu>(&func_800E4F5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800E4F5C_14A6 = func_800E4F5C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E4F5C_14A6);
        r4 = static_cast<uint32_t>(regargs_result_800E4F5C_14A6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E4F5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_800F314C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F316C;
    }
}

loc_800F3150:
{
}

loc_800F3154:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_800F3180;
    }
}

loc_800F3158:
{
}

loc_800F315C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_800F318C;
    }
}

loc_800F3160:
{
}

loc_800F3164:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_800F3198;
    }
}

loc_800F3168:
{
    goto loc_800F31A0;
}

loc_800F316C:
{
    r3 = (r31 + r24);
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r25));
    MemoryInline::FlatWrite8((r3 + 64), static_cast<uint8_t>(r25));
    MemoryInline::FlatWrite8((r3 + 458), static_cast<uint8_t>(r25));
    goto loc_800F31A0;
}

loc_800F3180:
{
    r3 = (r31 + r24);
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r26));
    goto loc_800F31A0;
}

loc_800F318C:
{
    r3 = (r31 + r24);
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r27));
    goto loc_800F31A0;
}

loc_800F3198:
{
    r3 = (r31 + r24);
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r28));
}

loc_800F31A0:
{
    r24 = (r24 + 1);
}

loc_800F31A8:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(3))) {
        goto loc_800F3140;
    }
}

loc_800F31AC:
{
}

loc_800F31B0:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(50))) {
        goto loc_800F3208;
    }
}

loc_800F31B4:
{
    r28 = (r31 + r29);
    r0 = MemoryInline::FlatRead8((r28 + 64));
}

loc_800F31C0:
{
    if ((static_cast<uint32_t>(r30) == static_cast<uint32_t>(r0))) {
        goto loc_800F3264;
    }
}

loc_800F31C4:
{
    r3 = MemoryInline::FlatRead8((r28 + 24));
}

loc_800F31CC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_800F3264;
    }
}

loc_800F31D0:
{
    r0 = (r3 + 254);
    r0 = (r0 & 255);
}

loc_800F31DC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_800F31FC;
    }
}

loc_800F31E0:
{
    r3 = r29;
    r4 = 1;
    ctx->lr = 0x800F31ECu;
    if constexpr (KnownRegArgsCpuCall<0x800E4D04u>(&func_800E4D04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        const auto regargs_result_800E4D04_202A = func_800E4D04_ra98_1fe_18_0(ctx, r3, r4, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800E4D04_202A);
        r4 = static_cast<uint32_t>(regargs_result_800E4D04_202A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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
        InvokeDirectCpu<0x800E4D04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 64), static_cast<uint8_t>(r0));
    r3 = r28;
    MemoryInline::FlatWrite8((r3 + 458), static_cast<uint8_t>(r0));
}

loc_800F31FC:
{
    r0 = (r30 & 255);
    MemoryInline::FlatWrite8((r28 + 64), static_cast<uint8_t>(r0));
    goto loc_800F321C;
}

loc_800F3208:
{
}

loc_800F320C:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(1))) {
        goto loc_800F321C;
    }
}

loc_800F3210:
{
    r0 = (r30 & 255);
    r3 = (r31 + r29);
    MemoryInline::FlatWrite8((r3 + 64), static_cast<uint8_t>(r0));
}

loc_800F321C:
{
    r3 = r29;
    r4 = r30;
    ctx->lr = 0x800F3228u;
    if constexpr (KnownRegArgsCpuCall<0x800E4D04u>(&func_800E4D04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        const auto regargs_result_800E4D04_2931 = func_800E4D04_ra98_1fe_18_0(ctx, r3, r4, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800E4D04_2931);
        r4 = static_cast<uint32_t>(regargs_result_800E4D04_2931 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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
        InvokeDirectCpu<0x800E4D04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r4 = 0;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite32((r3 + 500), r4);
}

loc_800F323C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_800F3250;
    }
}

loc_800F3240:
{
}

loc_800F3244:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(50))) {
        goto loc_800F3250;
    }
}

loc_800F3248:
{
    r0 = 80;
    MemoryInline::FlatWrite32((r31 + 368), r0);
}

loc_800F3250:
{
    r0 = (r30 & 255);
    r3 = (r31 + r29);
    MemoryInline::FlatWrite8((r3 + 458), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 571), static_cast<uint8_t>(r0));
}

loc_800F3264:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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

extern "C" void func_800F30B8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800F30B8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FBF gpr_write=0x003FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800F30B8 func_800F30B8 preserves=true fpr_mask=0x00000000
