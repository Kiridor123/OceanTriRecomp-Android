#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF80C(CpuContext* ctx);
extern "C" uint64_t func_800CF80C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80125FB8(CpuContext* ctx);
extern "C" uint32_t func_80125FB8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80142444(CpuContext* ctx);
extern "C" uint64_t func_80142444_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_801436B8(CpuContext* ctx);
extern "C" uint64_t func_801436B8_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_803A7ECC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
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
    const uint32_t r23_entry = r23;
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;

    goto loc_803A7ECC;

loc_803A7ECC:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r26 = r3;
    r24 = r4;
    r25 = r5;
    r23 = r6;
    r3 = (r1 + 8);
    ctx->lr = 0x803A7EF8u;
    if constexpr (KnownRegArgsCpuCall<0x80125FB8u>(&func_80125FB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80125FB8_B48 = func_80125FB8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80125FB8_B48;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80125FB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = MemoryInline::FlatRead32((r26 + 8792));
}

loc_803A7F00:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803A7F1C;
    }
}

loc_803A7F04:
{
    r3 = 16;
    ctx->lr = 0x803A7F0Cu;
    if constexpr (KnownRegArgsCpuCall<0x800CF80Cu>(&func_800CF80C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        const auto regargs_result_800CF80C_F17 = func_800CF80C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CF80C_F17);
        r4 = static_cast<uint32_t>(regargs_result_800CF80C_F17 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
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
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800CF80Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    MemoryInline::FlatWrite32((r26 + 8792), r3);
    r4 = 0;
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_803A7F1C:
{
    r27 = MemoryInline::FlatRead32((r26 + 8792));
    r4 = (r23 & 255);
}

loc_803A7F28:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_803A7F44;
    }
}

loc_803A7F2C:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r26 + r0);
    r31 = (r3 + 8532);
    r0 = 0;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_803A7F64;
}

loc_803A7F44:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r26 + r0);
    r31 = (r3 + 8532);
    r0 = (r4 + -1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r26 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 8532));
    MemoryInline::FlatWrite32(r31, r0);
}

loc_803A7F64:
{
    r4 = (r23 & 255);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(11));
    r0 = (r0_rot_4 & -2048);
    r3 = (r26 + r0);
    r28 = (r3 + 340);
    r0 = (r4 * 24);
    r3 = (r26 + r0);
    r0 = -1;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 8596), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 8596), r0);
    MemoryInline::WriteResolved32(guest_range_1, 96u, (r3 + 8692), r0);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 8600), r0);
    MemoryInline::WriteResolved32(guest_range_1, 100u, (r3 + 8696), r0);
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8604), r0);
    MemoryInline::WriteResolved32(guest_range_1, 104u, (r3 + 8700), r0);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 8608), r0);
    MemoryInline::WriteResolved32(guest_range_1, 108u, (r3 + 8704), r0);
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 8612), r0);
    MemoryInline::WriteResolved32(guest_range_1, 112u, (r3 + 8708), r0);
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 8616), r0);
    MemoryInline::WriteResolved32(guest_range_1, 116u, (r3 + 8712), r0);
    r26 = 0;
    goto loc_803A80BC;
}

loc_803A7FB8:
{
    r30 = MemoryInline::FlatRead32(r24);
}

loc_803A7FC0:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_803A80B4;
    }
}

loc_803A7FC4:
{
    goto loc_803A80A8;
}

loc_803A7FC8:
{
    r0 = MemoryInline::FlatRead8((r30 + 40));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803A7FD4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_803A80A4;
    }
}

loc_803A7FD8:
{
    r3 = MemoryInline::FlatRead32(r31);
    r23 = (r3 + 32);
    r3 = (r1 + 8);
    r4 = (r30 + 8);
    ctx->lr = 0x803A7FECu;
    if constexpr (KnownRegArgsCpuCall<0x80142444u>(&func_80142444)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80142444_23AE = func_80142444_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80142444_23AE);
        r4 = static_cast<uint32_t>(regargs_result_80142444_23AE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80142444u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r0 = MemoryInline::FlatRead32(r30);
    r3 = (r0 & 255);
    r4 = (r1 + 8);
    r5 = (r23 & 65535);
    ctx->lr = 0x803A8000u;
    if constexpr (KnownRegArgsCpuCall<0x801436B8u>(&func_801436B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_801436B8_27F9 = func_801436B8_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801436B8_27F9);
        r4 = static_cast<uint32_t>(regargs_result_801436B8_27F9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801436B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    }
    r29 = r3;
}

loc_803A8008:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803A80C4;
    }
}

loc_803A800C:
{
    r3 = r28;
    r4 = 0;
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32(r28, r23);
    MemoryInline::FlatWrite32((r28 + 8), r30);
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r28 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r28 + 6), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r28 + 12), r29);
    r0 = MemoryInline::FlatRead8((r30 + 10));
}

loc_803A8048:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803A8070;
    }
}

loc_803A804C:
{
    MemoryInline::FlatWrite32(r27, r23);
    MemoryInline::FlatWrite32((r27 + 8), r30);
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r27 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r27 + 6), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r27 + 12), r29);
}

loc_803A8070:
{
    r0 = MemoryInline::FlatRead32(r30);
    r3 = (r0 & 255);
    ctx->lr = 0x803A807Cu;
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
    InvokeDirectCpu<0x803ADFE8u>(ctx);
    r0 = ctx->gpr[0];
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
    r0 = r3;
}

loc_803A8084:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_803A8094;
    }
}

loc_803A8088:
{
    r3 = r29;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // inline leaf 0x80137670 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80137670
}

loc_803A8094:
{
    r28 = (r28 + 16);
    r3 = MemoryInline::FlatRead32(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r31, r0);
}

loc_803A80A4:
{
    r30 = (r30 + 48);
}

loc_803A80A8:
{
    r0 = MemoryInline::FlatRead32(r30);
}

loc_803A80B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803A7FC8;
    }
}

loc_803A80B4:
{
    r24 = (r24 + 4);
    r26 = (r26 + 1);
}

loc_803A80BC:
{
}

loc_803A80C0:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r25))) {
        goto loc_803A7FB8;
    }
}

loc_803A80C4:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->gpr[23] = r23_entry;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803A7ECC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803A7ECC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x007FFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803A7ECC func_803A7ECC preserves=true fpr_mask=0x00000000
