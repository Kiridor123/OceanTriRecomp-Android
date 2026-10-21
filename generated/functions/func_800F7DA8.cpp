#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D55B4(CpuContext* ctx);
extern "C" uint64_t func_800D55B4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800D5758(CpuContext* ctx);
extern "C" uint64_t func_800D5758_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800F7CD8(CpuContext* ctx);
extern "C" uint64_t func_800F7CD8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_800F7DA8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
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

    MKW_GUEST_ENTER(0x800F7DA8u);
    goto loc_800F7DA8;

loc_800F7DA8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r25 = r3;
    r26 = r4;
    r24 = r6;
    r3 = 0x806A0000u;
    r31 = (r3 + 17776);
    r3 = 0x806A0000u;
    r27 = (r3 + 20916);
    // inline leaf 0x800B28DC (3 guest instruction(s))
    r3 = 0x80690000u;
    r3 = (r3 + 27160);
    // end of inlined leaf 0x800B28DC
    r30 = r3;
    r28 = MemoryInline::FlatRead32((r24 + 4));
    r29 = MemoryInline::FlatRead32((r24 + 8));
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 16), r0);
    MemoryInline::FlatWrite32((r28 + 20), r0);
    r0 = MemoryInline::FlatRead32(r24);
}

loc_800F7DFC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_800F7E14;
    }
}

loc_800F7E00:
{
}

loc_800F7E04:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_800F7E78;
    }
}

loc_800F7E08:
{
}

loc_800F7E0C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_800F7EEC;
    }
}

loc_800F7E10:
{
    goto loc_800F7F64;
}

loc_800F7E14:
{
    r0 = MemoryInline::FlatRead32((r31 + 56));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r28 + 6), static_cast<uint16_t>(r0));
    r3 = r25;
    r4 = r26;
    ctx->lr = 0x800F7E2Cu;
    if constexpr (KnownRegArgsCpuCall<0x800D5758u>(&func_800D5758)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D5758_DDF = func_800D5758_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800D5758_DDF);
        r4 = static_cast<uint32_t>(regargs_result_800D5758_DDF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800D5758u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWrite32((r28 + 12), r3);
    r5 = MemoryInline::FlatRead32((r28 + 12));
    r4 = MemoryInline::FlatRead32((r31 + 56));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite32((r3 + 2108), r5);
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r31 + 56), r0);
}

loc_800F7E50:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(1))) {
        goto loc_800F7E64;
    }
}

loc_800F7E54:
{
    r3 = MemoryInline::FlatRead8((r27 + 1));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r27 + 1), static_cast<uint8_t>(r0));
    goto loc_800F7F64;
}

loc_800F7E64:
{
    r3 = MemoryInline::FlatRead8((r27 + 1));
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r3));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r27 + 1), static_cast<uint8_t>(r0));
    goto loc_800F7F64;
}

loc_800F7E78:
{
    r0 = MemoryInline::FlatRead32((r31 + 48));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r28 + 6), static_cast<uint16_t>(r0));
    r3 = r25;
    r4 = r26;
    ctx->lr = 0x800F7E90u;
    if constexpr (KnownRegArgsCpuCall<0x800D55B4u>(&func_800D55B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D55B4_159C = func_800D55B4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800D55B4_159C);
        r4 = static_cast<uint32_t>(regargs_result_800D55B4_159C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800D55B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWrite32((r28 + 12), r3);
    r5 = MemoryInline::FlatRead32((r28 + 12));
    r4 = MemoryInline::FlatRead32((r31 + 48));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite32((r3 + 60), r5);
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r31 + 48), r0);
    r3 = r30;
    r4 = r26;
    ctx->lr = 0x800F7EBCu;
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
    InvokeDirectCpu<0x800B36D4u>(ctx);
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
    MemoryInline::FlatWrite32((r28 + 16), r3);
}

loc_800F7EC4:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(1))) {
        goto loc_800F7ED8;
    }
}

loc_800F7EC8:
{
    r3 = MemoryInline::FlatRead8((r27 + 2));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r27 + 2), static_cast<uint8_t>(r0));
    goto loc_800F7F64;
}

loc_800F7ED8:
{
    r3 = MemoryInline::FlatRead8((r27 + 2));
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r3));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r27 + 2), static_cast<uint8_t>(r0));
    goto loc_800F7F64;
}

loc_800F7EEC:
{
    r0 = MemoryInline::FlatRead32((r31 + 52));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r28 + 6), static_cast<uint16_t>(r0));
    r3 = r25;
    r4 = r26;
    ctx->lr = 0x800F7F04u;
    if constexpr (KnownRegArgsCpuCall<0x800D55B4u>(&func_800D55B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D55B4_2053 = func_800D55B4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800D55B4_2053);
        r4 = static_cast<uint32_t>(regargs_result_800D55B4_2053 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800D55B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWrite32((r28 + 12), r3);
    r5 = MemoryInline::FlatRead32((r28 + 12));
    r4 = MemoryInline::FlatRead32((r31 + 52));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite32((r3 + 1084), r5);
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r31 + 52), r0);
}

loc_800F7F28:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(1))) {
        goto loc_800F7F3C;
    }
}

loc_800F7F2C:
{
    r3 = MemoryInline::FlatRead8((r27 + 3));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r27 + 3), static_cast<uint8_t>(r0));
    goto loc_800F7F4C;
}

loc_800F7F3C:
{
    r3 = MemoryInline::FlatRead8((r27 + 3));
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r3));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r27 + 3), static_cast<uint8_t>(r0));
}

loc_800F7F4C:
{
    r3 = r30;
    r4 = r26;
    ctx->lr = 0x800F7F58u;
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
    InvokeDirectCpu<0x800B3EE4u>(ctx);
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
    MemoryInline::FlatWrite32((r28 + 20), r3);
    r3 = 1;
    ctx->lr = 0x800F7F64u;
    if constexpr (KnownRegArgsCpuCall<0x800F7CD8u>(&func_800F7CD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_800F7CD8_2A52 = func_800F7CD8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F7CD8_2A52);
        r4 = static_cast<uint32_t>(regargs_result_800F7CD8_2A52 >> 32);
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800F7CD8u>(ctx);
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
}

loc_800F7F64:
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

extern "C" void func_800F7DA8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800F7DA8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800F7DA8 func_800F7DA8 preserves=true fpr_mask=0x00000000
