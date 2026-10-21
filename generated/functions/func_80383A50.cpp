#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DBC94(CpuContext* ctx);
extern "C" uint64_t func_800DBC94_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_80383CF8(CpuContext* ctx);
extern "C" uint64_t func_80383CF8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80383A50_ra38_1f8_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    MKW_GUEST_ENTER(0x80383A50u);
    goto loc_80383A50;

loc_80383A50:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = 0x806C0000u;
    r31 = (r5 + 18584);
    r3 = 0x80660000u;
    r4 = (r3 + -18480);
    r3 = MemoryInline::FlatRead16((r4 + 708));
    r0 = MemoryInline::FlatRead16((r4 + 724));
    r0 = (r0 & 15);
    r0 = (r3 | r0);
    r30 = (r0 & 65535);
    r0 = MemoryInline::FlatRead16((r5 + 18584));
}

loc_80383A90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80383B30;
    }
}

loc_80383A94:
{
    r0 = MemoryInline::FlatRead8((r31 + 3));
}

loc_80383A9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80383AB0;
    }
}

loc_80383AA0:
{
    r3 = 24;
    ctx->lr = 0x80383AA8u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800DBC94_812 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_812);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_812 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 3), static_cast<uint8_t>(r0));
}

loc_80383AB0:
{
    r3 = MemoryInline::FlatRead16(r31);
    r3 = MH3_TickLoad(r3, 2151168688);
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16(r31, static_cast<uint16_t>(r0));
    ctx->lr = 0x80383AC0u;
    if constexpr (KnownRegArgsCpuCall<0x80383CF8u>(&func_80383CF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80383CF8_E20 = func_80383CF8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80383CF8_E20);
        r4 = static_cast<uint32_t>(regargs_result_80383CF8_E20 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80383CF8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_80383AC8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80383AD4;
    }
}

loc_80383ACC:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16(r31, static_cast<uint16_t>(r0));
}

loc_80383AD4:
{
    r0 = (r30 & 256);
}

loc_80383ADC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80383B30;
    }
}

loc_80383AE0:
{
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_80383AEC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80383B30;
    }
}

loc_80383AF0:
{
    // inline leaf 0x802A0514 (15 guest instruction(s))
}

loc_inl1_0x802A0514:
{
    r4 = 0x806B0000u;
    r3 = (r4 + -4792);
    r0 = MemoryInline::FlatRead8((r3 + 14));
}

loc_inl1_0x802A0524:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x802A0548;
    }
}

loc_inl1_0x802A0528:
{
    r0 = MemoryInline::FlatRead8((r4 + -4792));
}

loc_inl1_0x802A0530:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_inl1_0x802A0548;
    }
}

loc_inl1_0x802A0534:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_inl1_0x802A053C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_inl1_0x802A0548;
    }
}

loc_inl1_0x802A0540:
{
    r3 = 1;
    goto loc_inl1_cont_802A0514;
}

loc_inl1_0x802A0548:
{
    r3 = 0;
}

loc_inl1_cont_802A0514:
{
    // end of inlined leaf 0x802A0514
}

loc_80383AF8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80383B30;
    }
}

loc_80383AFC:
{
    // inline leaf 0x8038440C (12 guest instruction(s))
}

loc_inl2_0x8038440C:
{
    r3 = 0x806C0000u;
    r3 = (r3 + 18584);
    r0 = MemoryInline::FlatRead8((r3 + 9));
}

loc_inl2_0x8038441C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x80384434;
    }
}

loc_inl2_0x80384420:
{
    r0 = MemoryInline::FlatRead8((r3 + 7));
}

loc_inl2_0x80384428:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl2_0x80384434;
    }
}

loc_inl2_0x8038442C:
{
    r3 = 1;
    goto loc_inl2_cont_8038440C;
}

loc_inl2_0x80384434:
{
    r3 = 0;
}

loc_inl2_cont_8038440C:
{
    // end of inlined leaf 0x8038440C
}

loc_80383B04:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80383B30;
    }
}

loc_80383B08:
{
    r3 = 5;
    ctx->lr = 0x80383B10u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800DBC94_1B0B = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_1B0B);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_1B0B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead8((r31 + 8));
}

loc_80383B18:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_80383B28;
    }
}

loc_80383B1C:
{
    r0 = 12;
    MemoryInline::FlatWriteRam8((r31 + 8), static_cast<uint8_t>(r0));
    goto loc_80383B30;
}

loc_80383B28:
{
    r0 = 4;
    MemoryInline::FlatWriteRam8((r31 + 8), static_cast<uint8_t>(r0));
}

loc_80383B30:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80383A50(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80383A50_ra38_1f8_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003E3F gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FF8 fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80383A50 func_80383A50 preserves=true fpr_mask=0x00000000
