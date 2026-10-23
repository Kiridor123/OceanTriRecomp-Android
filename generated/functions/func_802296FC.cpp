#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800515D8(CpuContext* ctx);
extern "C" uint64_t func_800515D8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80139AC8(CpuContext* ctx);
extern "C" uint64_t func_80139AC8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80139AE0(CpuContext* ctx);
extern "C" uint64_t func_80139AE0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802AD79C(CpuContext* ctx);
extern "C" uint64_t func_802AD79C_ra38_18_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_802AD830(CpuContext* ctx);
extern "C" uint64_t func_802AD830_ra38_180_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);

extern "C" void func_802296FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    goto loc_802296FC;

loc_802296FC:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    r11 = (r1 + 160);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r29 = r3;
    r30 = r4;
    r27 = r6;
    r3 = r27;
    // inline leaf 0x80139530 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 6));
    // end of inlined leaf 0x80139530
    r31 = r3;
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 80);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 32);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r28 = (r29 + r0);
    r3 = MemoryInline::FlatRead32((r28 + 16));
    r0 = (r3 + 65536);
}

loc_8022975C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80229784;
    }
}

loc_80229760:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 280));
    // inline leaf 0x800E0AF0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 236));
    // end of inlined leaf 0x800E0AF0
    r4 = r3;
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r28 + 16));
    r0 = (r0 * 48);
    r4 = (r4 + r0);
    ctx->lr = 0x80229784u;
    if constexpr (KnownRegArgsCpuCall<0x80139AC8u>(&func_80139AC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80139AC8_D82 = func_80139AC8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80139AC8_D82);
        r4 = static_cast<uint32_t>(regargs_result_80139AC8_D82 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80139AC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
}

loc_80229784:
{
    r3 = r27;
    // inline leaf 0x80139530 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 6));
    // end of inlined leaf 0x80139530
    r4 = r3;
    r3 = r27;
    r4 = (r4 + 1);
    // inline leaf 0x80139524 (3 guest instruction(s))
    r0 = (r4 & 65535);
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80139524
    r0 = MemoryInline::FlatRead32((r29 + 12));
}

loc_802297A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_802297B0;
    }
}

loc_802297A8:
{
}

loc_802297AC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_802298B4;
    }
}

loc_802297B0:
{
}

loc_802297B4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_802298B4;
    }
}

loc_802297B8:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & -2);
    r3 = 0x805C0000u;
    r0 = (r3 + -19704);
    r3 = (r0 + r4);
    r5 = MemoryInline::FlatRead8(r3);
    r3 = MemoryInline::FlatRead8((r3 + 1));
    goto loc_80229818;
}

loc_802297D4:
{
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r5 & 255);
    r0 = (r0 * 144);
    r4 = (r4 + r0);
    r28 = (r4 + 1652);
    r0 = MemoryInline::FlatRead8(r28);
}

loc_802297F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80229814;
    }
}

loc_802297F4:
{
    r27 = 0;
    r0 = MemoryInline::FlatRead32((r4 + 1668));
}

loc_80229800:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(r0))) {
        goto loc_80229828;
    }
}

loc_80229804:
{
    r27 = 1;
    r0 = MemoryInline::FlatRead32((r4 + 1672));
}

loc_80229810:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(r0))) {
        goto loc_80229828;
    }
}

loc_80229814:
{
    r5 = (r5 + 1);
}

loc_80229818:
{
    r0 = (r5 & 255);
}

loc_80229820:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_802297D4;
    }
}

loc_80229824:
{
    goto loc_802298B4;
}

loc_80229828:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r28 + 3));
}

loc_80229838:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802298B4;
    }
}

loc_8022983C:
{
    r0 = MemoryInline::FlatRead8((r28 + 1));
}

loc_80229844:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80229884;
    }
}

loc_80229848:
{
    r3 = r30;
    r4 = (r1 + 32);
    ctx->lr = 0x80229854u;
    if constexpr (KnownRegArgsCpuCall<0x80139AE0u>(&func_80139AE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80139AE0_1B6C = func_80139AE0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80139AE0_1B6C);
        r4 = static_cast<uint32_t>(regargs_result_80139AE0_1B6C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80139AE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = (r1 + 80);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    r3 = MemoryInline::FlatRead32((r28 + 120));
    r4 = (r1 + 80);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80050130u>(ctx);
    r3 = (r1 + 32);
    r4 = (r1 + 80);
    ctx->lr = 0x80229874u;
    if constexpr (KnownRegArgsCpuCall<0x800515D8u>(&func_800515D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800515D8_2044 = func_800515D8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800515D8_2044);
        r4 = static_cast<uint32_t>(regargs_result_800515D8_2044 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800515D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = r30;
    r4 = (r1 + 32);
    ctx->lr = 0x80229880u;
    if constexpr (KnownRegArgsCpuCall<0x80139AC8u>(&func_80139AC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80139AC8_240F = func_80139AC8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80139AC8_240F);
        r4 = static_cast<uint32_t>(regargs_result_80139AC8_240F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80139AC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    goto loc_802298B4;
}

loc_80229884:
{
    r3 = r30;
    r4 = (r1 + 32);
    ctx->lr = 0x80229890u;
    if constexpr (KnownRegArgsCpuCall<0x80139AE0u>(&func_80139AE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80139AE0_279D = func_80139AE0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80139AE0_279D);
        r4 = static_cast<uint32_t>(regargs_result_80139AE0_279D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80139AE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = r28;
    r4 = (r1 + 32);
    r5 = (r28 + 120);
    r6 = (r28 + 128);
    r7 = r27;
    ctx->lr = 0x802298A8u;
    if constexpr (KnownRegArgsCpuCall<0x802AD830u>(&func_802AD830)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_802AD830_2BE1 = func_802AD830_ra38_180_18_0(ctx, r3, r4, r5, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802AD830_2BE1);
        r4 = static_cast<uint32_t>(regargs_result_802AD830_2BE1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x802AD830u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = r28;
    r4 = r30;
    ctx->lr = 0x802298B4u;
    if constexpr (KnownRegArgsCpuCall<0x802AD79Cu>(&func_802AD79C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AD79C_3102 = func_802AD79C_ra38_18_18_0(ctx, r3, r4, r5, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802AD79C_3102);
        r4 = static_cast<uint32_t>(regargs_result_802AD79C_3102 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802AD79Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_802298B4:
{
    r11 = (r1 + 160);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000037FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003F80 fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802296FC func_802296FC preserves=true fpr_mask=0x00000000
