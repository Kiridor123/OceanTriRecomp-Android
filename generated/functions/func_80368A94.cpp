#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80056AE8(CpuContext* ctx);
extern "C" uint64_t func_80056AE8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800DDD1C(CpuContext* ctx);
extern "C" uint64_t func_800DDD1C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80112674(CpuContext* ctx);
extern "C" uint64_t func_80112674_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);

extern "C" uint64_t func_80368A94_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r0_subfic_ra_4 = 0;
    uint32_t r0_subfic_ra_5 = 0;
    uint32_t r0_subfic_ra_6 = 0;
    uint32_t r30_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;

    MKW_GUEST_ENTER(0x80368A94u);
    goto loc_80368A94;

loc_80368A94:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r27 = r3;
    r26 = r4;
    r29 = MemoryInline::FlatRead32((r3 + 56));
    r3 = 0x806C0000u;
    r28 = (r3 + -9184);
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r30 = (r30_rot_0 & -4);
    r31 = (r29 + r30);
    r3 = MemoryInline::FlatRead32((r31 + 64));
    r3 = MH3_TickLoad(r3, 2151058124);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 64), r0);
    r0 = MemoryInline::FlatRead8((r27 + 68));
}

loc_80368AE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80368AF0;
    }
}

loc_80368AE4:
{
}

loc_80368AE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80368B08;
    }
}

loc_80368AEC:
{
    goto loc_80368B20;
}

loc_80368AF0:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -9056));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -8900));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -8896));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    goto loc_80368B30;
}

loc_80368B08:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -8892));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -8980));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -8888));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    goto loc_80368B30;
}

loc_80368B20:
{
    r0 = 6;
    r3 = (r29 + r26);
    MemoryInline::FlatWrite8((r3 + 96), static_cast<uint8_t>(r0));
    goto loc_80368DB4;
}

loc_80368B30:
{
    r3 = (r29 + r26);
    r4 = MemoryInline::FlatRead8((r3 + 96));
}

loc_80368B3C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80368B74;
    }
}

loc_80368B40:
{
}

loc_80368B44:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_80368B94;
    }
}

loc_80368B48:
{
}

loc_80368B4C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_80368BB4;
    }
}

loc_80368B50:
{
}

loc_80368B54:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_80368C38;
    }
}

loc_80368B58:
{
}

loc_80368B5C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(4))) {
        goto loc_80368D1C;
    }
}

loc_80368B60:
{
}

loc_80368B64:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(5))) {
        goto loc_80368D3C;
    }
}

loc_80368B68:
{
}

loc_80368B6C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(6))) {
        goto loc_80368D74;
    }
}

loc_80368B70:
{
    goto loc_80368DB4;
}

loc_80368B74:
{
    r0 = MemoryInline::FlatRead8((r28 + 8));
}

loc_80368B7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80368DB4;
    }
}

loc_80368B80:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 96), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 64), r0);
    goto loc_80368DB4;
}

loc_80368B94:
{
    r0 = MemoryInline::FlatRead32((r31 + 64));
}

loc_80368B9C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(45))) {
        goto loc_80368DB4;
    }
}

loc_80368BA0:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 96), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 64), r0);
    goto loc_80368DB4;
}

loc_80368BB4:
{
    r5 = (r29 + r30);
    r0 = MemoryInline::FlatRead32((r5 + 64));
    r0 = (r0 * 3034);
    r0 = (0 - r0);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite32((r4 + 48), r0);
    r0 = MemoryInline::FlatRead32((r5 + 64));
}

loc_80368BD4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(3))) {
        goto loc_80368DB4;
    }
}

loc_80368BD8:
{
    r4 = MemoryInline::FlatRead8((r3 + 96));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 96), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 64), r0);
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead8((r27 + 68));
    r5 = 111;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -8884));
    f2.d = f1.d;
    ctx->lr = 0x80368C04u;
    if constexpr (KnownRegArgsCpuCall<0x80112674u>(&func_80112674)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80112674_1A10 = func_80112674_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80112674_1A10);
        r4 = static_cast<uint32_t>(regargs_result_80112674_1A10 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x80112674u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r3 = (r1 + 8);
    r4 = 10;
    r5 = MemoryInline::FlatRead8((r27 + 68));
    ctx->lr = 0x80368C14u;
    if constexpr (KnownRegArgsCpuCall<0x80056AE8u>(&func_80056AE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80056AE8_1DFF = func_80056AE8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80056AE8_1DFF);
        r4 = static_cast<uint32_t>(regargs_result_80056AE8_1DFF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80056AE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r27 + 68));
}

loc_80368C24:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80368DB4;
    }
}

loc_80368C28:
{
    r3 = 9;
    r4 = (r1 + 8);
    ctx->lr = 0x80368C34u;
    if constexpr (KnownRegArgsCpuCall<0x800DDD1Cu>(&func_800DDD1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800DDD1C_227F = func_800DDD1C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800DDD1C_227F);
        r4 = static_cast<uint32_t>(regargs_result_800DDD1C_227F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800DDD1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_80368DB4;
}

loc_80368C38:
{
    r4 = MemoryInline::FlatRead32((r31 + 64));
}

loc_80368C40:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(2))) {
        goto loc_80368C60;
    }
}

loc_80368C44:
{
    r0 = (r4 * 1274);
    r0_subfic_ra_3 = r0;
    r0 = (9102 - r0_subfic_ra_3);
    r0 = (0 - r0);
    r4 = (r29 + r30);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r4 + 48), r0);
    goto loc_80368CD4;
}

loc_80368C60:
{
}

loc_80368C64:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(4))) {
        goto loc_80368C88;
    }
}

loc_80368C68:
{
    r0 = (r4 + -2);
    r4 = (r0 * 1274);
    r0 = (r4 + 6554);
    r0 = (0 - r0);
    r4 = (r29 + r30);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r4 + 48), r0);
    goto loc_80368CD4;
}

loc_80368C88:
{
}

loc_80368C8C:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(5))) {
        goto loc_80368CB0;
    }
}

loc_80368C90:
{
    r0 = (r4 + -4);
    r0 = (r0 * 849);
    r0_subfic_ra_4 = r0;
    r0 = (9102 - r0_subfic_ra_4);
    r0 = (0 - r0);
    r4 = (r29 + r30);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r4 + 48), r0);
    goto loc_80368CD4;
}

loc_80368CB0:
{
}

loc_80368CB4:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(6))) {
        goto loc_80368CD4;
    }
}

loc_80368CB8:
{
    r0 = (r4 + -5);
    r4 = (r0 * 849);
    r0 = (r4 + 8253);
    r0 = (0 - r0);
    r4 = (r29 + r30);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r4 + 48), r0);
}

loc_80368CD4:
{
    r0 = MemoryInline::FlatRead32((r31 + 64));
}

loc_80368CDC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(6))) {
        goto loc_80368CF4;
    }
}

loc_80368CE0:
{
    r4 = MemoryInline::FlatRead8((r3 + 96));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 96), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 64), r0);
}

loc_80368CF4:
{
    r0 = MemoryInline::FlatRead32((r31 + 64));
}

loc_80368CFC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_80368DB4;
    }
}

loc_80368D00:
{
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead8((r27 + 68));
    r5 = 111;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -8884));
    f2.d = f1.d;
    ctx->lr = 0x80368D18u;
    if constexpr (KnownRegArgsCpuCall<0x80112674u>(&func_80112674)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80112674_2E76 = func_80112674_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80112674_2E76);
        r4 = static_cast<uint32_t>(regargs_result_80112674_2E76 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x80112674u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    goto loc_80368DB4;
}

loc_80368D1C:
{
    r0 = MemoryInline::FlatRead32((r31 + 64));
}

loc_80368D24:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(30))) {
        goto loc_80368DB4;
    }
}

loc_80368D28:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 96), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 64), r0);
    goto loc_80368DB4;
}

loc_80368D3C:
{
    r5 = (r29 + r30);
    r0 = MemoryInline::FlatRead32((r5 + 64));
    r0 = (r0 * 303);
    r0_subfic_ra_1 = r0;
    r0 = (9102 - r0_subfic_ra_1);
    r0 = (0 - r0);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite32((r4 + 48), r0);
    r0 = MemoryInline::FlatRead32((r5 + 64));
}

loc_80368D60:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(30))) {
        goto loc_80368DB4;
    }
}

loc_80368D64:
{
    r0 = 6;
    MemoryInline::FlatWrite8((r3 + 96), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r28 + 12));
    MemoryInline::FlatWrite32((r31 + 64), r0);
}

loc_80368D74:
{
    r4 = MemoryInline::FlatRead32((r31 + 64));
    r0 = MemoryInline::FlatRead32((r28 + 12));
}

loc_80368D80:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_80368D98;
    }
}

loc_80368D84:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 64), r0);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 96), static_cast<uint8_t>(r0));
    goto loc_80368DB4;
}

loc_80368D98:
{
    r0 = MemoryInline::FlatRead8((r28 + 8));
}

loc_80368DA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80368DAC;
    }
}

loc_80368DA4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 96), static_cast<uint8_t>(r0));
}

loc_80368DAC:
{
    r0 = MemoryInline::FlatRead32((r28 + 12));
    MemoryInline::FlatWrite32((r31 + 64), r0);
}

loc_80368DB4:
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
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80368A94(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80368A94_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0xC000000F fpr_write=0xC000000F fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80368A94 func_80368A94 preserves=true fpr_mask=0x00000000
