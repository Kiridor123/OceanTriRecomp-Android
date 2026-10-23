#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DB8D0(CpuContext* ctx);
extern "C" uint64_t func_800DB8D0_ra38_1fa_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_80274B84(CpuContext* ctx);
extern "C" uint64_t func_80274B84_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027CF88(CpuContext* ctx);
extern "C" uint32_t func_8027CF88_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802BE400(CpuContext* ctx);
extern "C" uint32_t func_802BE400_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802BED84(CpuContext* ctx);
extern "C" uint64_t func_802BED84_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_802E0CE4(CpuContext* ctx);
extern "C" uint64_t func_802E0CE4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_802EC728(CpuContext* ctx);
extern "C" uint64_t func_802EC728_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802EC554_ra38_1fa_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_802EC554;

loc_802EC554:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = MemoryInline::FlatRead32(r3);
    r3 = 0x806C0000u;
    r0 = MemoryInline::FlatRead8((r3 + 1136));
}

loc_802EC580:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802EC594;
    }
}

loc_802EC584:
{
    r3 = MemoryInline::FlatRead8((r30 + 8));
    ctx->lr = 0x802EC58Cu;
    if constexpr (KnownRegArgsCpuCall<0x802BED84u>(&func_802BED84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802BED84_A55 = func_802BED84_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_802BED84_A55);
        r4 = static_cast<uint32_t>(regargs_result_802BED84_A55 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802BED84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
    goto loc_802EC59C;
}

loc_802EC594:
{
    ctx->lr = 0x802EC598u;
    if constexpr (KnownRegArgsCpuCall<0x802BE400u>(&func_802BE400)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802BE400_D5A = func_802BE400_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BE400_D5A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802BE400u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r31 = r3;
}

loc_802EC59C:
{
    r3 = r30;
    // inline leaf 0x8026FEA8 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r3 + -4);
    r3 = 2;
    r0 = (2 - r4);
    r3 = (r3 | ~r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8026FEA8
}

loc_802EC5A8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802EC618;
    }
}

loc_802EC5AC:
{
    r0 = MemoryInline::FlatRead8((r30 + 2));
}

loc_802EC5B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_802EC70C;
    }
}

loc_802EC5B8:
{
    r0 = MemoryInline::FlatRead16((r30 + 876));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = MemoryInline::FlatRead16((r29 + 360));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_802EC5C4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_802EC5D0;
    }
}

loc_802EC5C8:
{
    MemoryInline::FlatWrite16((r29 + 360), static_cast<uint16_t>(r0));
    goto loc_802EC5D8;
}

loc_802EC5D0:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r29 + 360), static_cast<uint16_t>(r0));
}

loc_802EC5D8:
{
    r3 = r30;
    ctx->lr = 0x802EC5E0u;
    if constexpr (KnownRegArgsCpuCall<0x802EC728u>(&func_802EC728)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802EC728_155D = func_802EC728_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_802EC728_155D);
        r4 = static_cast<uint32_t>(regargs_result_802EC728_155D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802EC728u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802EC5E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802EC600;
    }
}

loc_802EC5E8:
{
    r3 = MemoryInline::FlatRead8((r29 + 362));
}

loc_802EC5F0:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(5))) {
        goto loc_802EC70C;
    }
}

loc_802EC5F4:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 362), static_cast<uint8_t>(r0));
    goto loc_802EC70C;
}

loc_802EC600:
{
    r3 = MemoryInline::FlatRead8((r29 + 362));
}

loc_802EC608:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802EC70C;
    }
}

loc_802EC60C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r29 + 362), static_cast<uint8_t>(r0));
    goto loc_802EC70C;
}

loc_802EC618:
{
    r3 = r30;
    r0 = MemoryInline::FlatRead16((r30 + 622));
    r4 = (r0 & 255);
    // inline leaf 0x80272CE4 (18 guest instruction(s))
}

loc_inl1_0x80272CE4:
{
    r4 = (r4 & 255);
}

loc_inl1_0x80272CEC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_inl1_0x80272CF8;
    }
}

loc_inl1_0x80272CF0:
{
    r3 = 0;
    goto loc_inl1_cont_80272CE4;
}

loc_inl1_0x80272CF8:
{
    r0 = (r4 & 128);
}

loc_inl1_0x80272D00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x80272D1C;
    }
}

loc_inl1_0x80272D04:
{
    r4 = (r4 & 127);
    r0 = (r4 + 26);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 632));
    goto loc_inl1_cont_80272CE4;
}

loc_inl1_0x80272D1C:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 632));
}

loc_inl1_cont_80272CE4:
{
    // end of inlined leaf 0x80272CE4
    r3 = (r3 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x80274B84u>(&func_80274B84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80274B84_1FEA = func_80274B84_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80274B84_1FEA);
        r4 = static_cast<uint32_t>(regargs_result_80274B84_1FEA >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80274B84u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r4 = MemoryInline::FlatRead8((r29 + 356));
    r0 = (r3 & 255);
}

loc_802EC63C:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_802EC650;
    }
}

loc_802EC640:
{
    MemoryInline::FlatWrite8((r29 + 356), static_cast<uint8_t>(r3));
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 358), static_cast<uint8_t>(r0));
    goto loc_802EC6A8;
}

loc_802EC650:
{
    r4 = MemoryInline::FlatRead8((r29 + 358));
}

loc_802EC658:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802EC690;
    }
}

loc_802EC65C:
{
    r3 = 0x80790000u;
    r3 = (r3 + 21680);
    ctx->lr = 0x802EC668u;
    if constexpr (KnownRegArgsCpuCall<0x802E0CE4u>(&func_802E0CE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802E0CE4_2519 = func_802E0CE4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0CE4_2519);
        r4 = static_cast<uint32_t>(regargs_result_802E0CE4_2519 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E0CE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r0 = (r3 & 65535);
    r3 = MemoryInline::FlatRead8((r29 + 358));
}

loc_802EC674:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r3))) {
        goto loc_802EC684;
    }
}

loc_802EC678:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 358), static_cast<uint8_t>(r0));
    goto loc_802EC6A8;
}

loc_802EC684:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 358), static_cast<uint8_t>(r0));
    goto loc_802EC6A8;
}

loc_802EC690:
{
    r3 = MemoryInline::FlatRead8((r29 + 357));
    r0 = MemoryInline::FlatRead8((r30 + 617));
}

loc_802EC69C:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_802EC6A8;
    }
}

loc_802EC6A0:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r29 + 358), static_cast<uint8_t>(r0));
}

loc_802EC6A8:
{
    r0 = MemoryInline::FlatRead8((r30 + 617));
    MemoryInline::FlatWrite8((r29 + 357), static_cast<uint8_t>(r0));
    r3 = r30;
    ctx->lr = 0x802EC6B8u;
    if constexpr (KnownRegArgsCpuCall<0x8027CF88u>(&func_8027CF88)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8027CF88_2C81 = func_8027CF88_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8027CF88_2C81;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027CF88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802EC6BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802EC704;
    }
}

loc_802EC6C0:
{
    r3 = 0x805E0000u;
    r3 = (r3 + 30536);
    ctx->lr = 0x802EC6CCu;
    if constexpr (KnownRegArgsCpuCall<0x802E0CE4u>(&func_802E0CE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802E0CE4_2FC7 = func_802E0CE4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E0CE4_2FC7);
        r4 = static_cast<uint32_t>(regargs_result_802E0CE4_2FC7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E0CE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r0 = (r3 & 65535);
    r3 = MemoryInline::FlatRead8((r29 + 359));
}

loc_802EC6D8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r3))) {
        goto loc_802EC70C;
    }
}

loc_802EC6DC:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 359), static_cast<uint8_t>(r0));
}

loc_802EC6E8:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_802EC70C;
    }
}

loc_802EC6EC:
{
    r0 = (r0 & 255);
}

loc_802EC6F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_802EC70C;
    }
}

loc_802EC6F8:
{
    r3 = r30;
    ctx->lr = 0x802EC700u;
    if constexpr (KnownRegArgsCpuCall<0x800DB8D0u>(&func_800DB8D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800DB8D0_35C6 = func_800DB8D0_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DB8D0_35C6);
        r4 = static_cast<uint32_t>(regargs_result_800DB8D0_35C6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
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
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DB8D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_802EC70C;
}

loc_802EC704:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 359), static_cast<uint8_t>(r0));
}

loc_802EC70C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802EC554(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802EC554_ra38_1fa_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003E7F gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFB fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802EC554 func_802EC554 preserves=true fpr_mask=0x00000000
