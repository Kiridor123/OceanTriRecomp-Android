#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CEB14(CpuContext* ctx);
extern "C" uint64_t func_800CEB14_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800D4D48(CpuContext* ctx);
extern "C" uint64_t func_800D4D48_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800D4EEC(CpuContext* ctx);
extern "C" uint64_t func_800D4EEC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_800F8698_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_800F8698;

loc_800F8698:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r27 = r4;
    r28 = r6;
    r29 = r7;
    r30 = r8;
    r5 = 0x806A0000u;
    r31 = (r5 + 17776);
}

loc_800F86CC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(3))) {
        goto loc_800F8750;
    }
}

loc_800F86D0:
{
    r4 = MemoryInline::FlatRead32(r3);
}

loc_800F86D8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800F87D4;
    }
}

loc_800F86DC:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    ctx->lr = 0x800F86E4u;
    if constexpr (KnownRegArgsCpuCall<0x800D4D48u>(&func_800D4D48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_800D4D48_B54 = func_800D4D48_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800D4D48_B54);
        r4 = static_cast<uint32_t>(regargs_result_800D4D48_B54 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x800D4D48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
    }
}

loc_800F86E8:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_800F87D4;
    }
}

loc_800F86EC:
{
    r3 = MemoryInline::FlatRead32((r26 + 4));
    r4 = MemoryInline::FlatRead32(r26);
    r5 = 0;
    ctx->lr = 0x800F86FCu;
    if constexpr (KnownRegArgsCpuCall<0x800D4EECu>(&func_800D4EEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_800D4EEC_1125 = func_800D4EEC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800D4EEC_1125);
        r4 = static_cast<uint32_t>(regargs_result_800D4EEC_1125 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800D4EECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
}

loc_800F8700:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_800F87D4;
    }
}

loc_800F8704:
{
    r0 = MemoryInline::FlatRead8(r28);
    MemoryInline::FlatWriteRam32((r1 + 8), r29);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteRam32((r1 + 16), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r27);
    // inline leaf 0x800D5168 (13 guest instruction(s))
}

loc_inl1_0x800D5168:
{
}

loc_inl1_0x800D516C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_inl1_0x800D5178;
    }
}

loc_inl1_0x800D5170:
{
    r3 = 0;
    goto loc_inl1_cont_800D5168;
}

loc_inl1_0x800D5178:
{
}

loc_inl1_0x800D517C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(1024))) {
        goto loc_inl1_0x800D5188;
    }
}

loc_inl1_0x800D5180:
{
    r3 = 0;
    goto loc_inl1_cont_800D5168;
}

loc_inl1_0x800D5188:
{
    r4 = MemoryInline::FlatRead32((r13 + -17584));
    r0 = (r3 * 76);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12400));
}

loc_inl1_cont_800D5168:
{
    // end of inlined leaf 0x800D5168
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r26 + 4));
    r5 = MemoryInline::FlatRead32(r26);
    r6 = 0x80100000u;
    r6 = (r6 + -31812);
    r7 = 4;
    r8 = (r1 + 8);
    ctx->lr = 0x800F873Cu;
    if constexpr (KnownRegArgsCpuCall<0x800CEB14u>(&func_800CEB14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_800CEB14_1E4B = func_800CEB14_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800CEB14_1E4B);
        r4 = static_cast<uint32_t>(regargs_result_800CEB14_1E4B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x800CEB14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
    }
    r3 = MemoryInline::FlatRead32((r31 + 3132));
    r0 = MemoryInline::FlatRead32(r26);
    r0 = (r3 + r0);
    MemoryInline::FlatWriteRam32((r31 + 3132), r0);
    goto loc_800F87D4;
}

loc_800F8750:
{
}

loc_800F8754:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(1))) {
        goto loc_800F87D4;
    }
}

loc_800F8758:
{
    r4 = MemoryInline::FlatRead32(r3);
}

loc_800F8760:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800F87D4;
    }
}

loc_800F8764:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    ctx->lr = 0x800F876Cu;
    if constexpr (KnownRegArgsCpuCall<0x800D4D48u>(&func_800D4D48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_800D4D48_2578 = func_800D4D48_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800D4D48_2578);
        r4 = static_cast<uint32_t>(regargs_result_800D4D48_2578 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x800D4D48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
    }
}

loc_800F8770:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_800F87D4;
    }
}

loc_800F8774:
{
    r3 = MemoryInline::FlatRead32((r26 + 4));
    r4 = MemoryInline::FlatRead32(r26);
    r5 = 0;
    ctx->lr = 0x800F8784u;
    if constexpr (KnownRegArgsCpuCall<0x800D4EECu>(&func_800D4EEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_800D4EEC_2B4C = func_800D4EEC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800D4EEC_2B4C);
        r4 = static_cast<uint32_t>(regargs_result_800D4EEC_2B4C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800D4EECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
}

loc_800F8788:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_800F87D4;
    }
}

loc_800F878C:
{
    r0 = MemoryInline::FlatRead8(r28);
    MemoryInline::FlatWriteRam32((r1 + 8), r29);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteRam32((r1 + 16), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r27);
    // inline leaf 0x800D5168 (13 guest instruction(s))
}

loc_inl2_0x800D5168:
{
}

loc_inl2_0x800D516C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_inl2_0x800D5178;
    }
}

loc_inl2_0x800D5170:
{
    r3 = 0;
    goto loc_inl2_cont_800D5168;
}

loc_inl2_0x800D5178:
{
}

loc_inl2_0x800D517C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(1024))) {
        goto loc_inl2_0x800D5188;
    }
}

loc_inl2_0x800D5180:
{
    r3 = 0;
    goto loc_inl2_cont_800D5168;
}

loc_inl2_0x800D5188:
{
    r4 = MemoryInline::FlatRead32((r13 + -17584));
    r0 = (r3 * 76);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12400));
}

loc_inl2_cont_800D5168:
{
    // end of inlined leaf 0x800D5168
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r26 + 4));
    r5 = MemoryInline::FlatRead32(r26);
    r6 = 0x80100000u;
    r6 = (r6 + -31812);
    r7 = 4;
    r8 = (r1 + 8);
    ctx->lr = 0x800F87C4u;
    if constexpr (KnownRegArgsCpuCall<0x800CEB14u>(&func_800CEB14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_800CEB14_3872 = func_800CEB14_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800CEB14_3872);
        r4 = static_cast<uint32_t>(regargs_result_800CEB14_3872 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x800CEB14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
    }
    r3 = MemoryInline::FlatRead32((r31 + 3132));
    r0 = MemoryInline::FlatRead32(r26);
    r0 = (r3 + r0);
    MemoryInline::FlatWriteRam32((r31 + 3132), r0);
}

loc_800F87D4:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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

extern "C" void func_800F8698(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800F8698_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x01FFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800F8698 func_800F8698 preserves=true fpr_mask=0x00000000
