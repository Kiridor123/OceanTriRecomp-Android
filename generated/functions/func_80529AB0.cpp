#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80527970(CpuContext* ctx);
extern "C" uint64_t func_80527970_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8052A4F0(CpuContext* ctx);
extern "C" uint64_t func_8052A4F0_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8052A530(CpuContext* ctx);
extern "C" uint32_t func_8052A530_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80529AB0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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

    MKW_GUEST_ENTER(0x80529AB0u);
    goto loc_80529AB0;

loc_80529AB0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r7 = MemoryInline::FlatRead32((r13 + -13336));
    r27 = r3;
    r28 = r4;
    r29 = r5;
}

loc_80529AD8:
{
    r31 = r6;
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80529AE8;
    }
}

loc_80529AE0:
{
    r3 = 2;
    goto loc_80529B20;
}

loc_80529AE8:
{
}

loc_80529AEC:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(4))) {
        goto loc_80529AF8;
    }
}

loc_80529AF0:
{
    r3 = 4;
    goto loc_80529B20;
}

loc_80529AF8:
{
    r0 = (r3 * 680);
    r3 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80529B08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80529B14;
    }
}

loc_80529B0C:
{
}

loc_80529B10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_80529B1C;
    }
}

loc_80529B14:
{
    r3 = 5;
    goto loc_80529B20;
}

loc_80529B1C:
{
    r3 = 0;
}

loc_80529B20:
{
}

loc_80529B24:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80529B2C;
    }
}

loc_80529B28:
{
    goto loc_80529BB4;
}

loc_80529B2C:
{
    ctx->lr = 0x80529B30u;
    if constexpr (KnownRegArgsCpuCall<0x8052A530u>(&func_8052A530)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_8052A530_C8E = func_8052A530_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8052A530_C8E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8052A530u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80529B34:
{
    r30 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80529BB0;
    }
}

loc_80529B3C:
{
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r27));
    r8 = 0x80530000u;
    r4 = 1;
    r6 = r30;
    MemoryInline::FlatWrite32((r3 + 8), r28);
    r0 = (r27 * 680);
    r9 = r30;
    MemoryInline::FlatWrite32((r3 + 12), r4);
    r8 = (r8 + -26064);
    r4 = 2;
    r5 = 0;
    MemoryInline::FlatWrite32((r3 + 16), r29);
    r7 = 1;
    MemoryInline::FlatWrite32((r3 + 20), r31);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r28));
    r3 = MemoryInline::FlatRead32((r13 + -13336));
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 72));
    ctx->lr = 0x80529B88u;
    if constexpr (KnownRegArgsCpuCall<0x80527970u>(&func_80527970)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        const auto regargs_result_80527970_12A3 = func_80527970_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80527970_12A3);
        r4 = static_cast<uint32_t>(regargs_result_80527970_12A3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80527970u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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

loc_80529B8C:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80529B9C;
    }
}

loc_80529B94:
{
    r3 = r30;
    ctx->lr = 0x80529B9Cu;
    if constexpr (KnownRegArgsCpuCall<0x8052A4F0u>(&func_8052A4F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8052A4F0_1A9C = func_8052A4F0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8052A4F0_1A9C);
        r4 = static_cast<uint32_t>(regargs_result_8052A4F0_1A9C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8052A4F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80529B9C:
{
}

loc_80529BA0:
{
    r3 = 7;
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80529BB4;
    }
}

loc_80529BA8:
{
    r3 = 0;
    goto loc_80529BB4;
}

loc_80529BB0:
{
    r3 = 7;
}

loc_80529BB4:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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

extern "C" void func_80529AB0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80529AB0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80529AB0 func_80529AB0 preserves=true fpr_mask=0x00000000
