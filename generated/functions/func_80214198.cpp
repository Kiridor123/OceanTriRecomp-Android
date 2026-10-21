#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004AED4(CpuContext* ctx);
extern "C" uint32_t func_8004AED4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8004B814(CpuContext* ctx);
extern "C" uint64_t func_8004B814_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004C068(CpuContext* ctx);
extern "C" uint32_t func_8004C068_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027F21C(CpuContext* ctx);
extern "C" uint32_t func_8027F21C_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027F628(CpuContext* ctx);
extern "C" uint64_t func_8027F628_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80214198_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80214198u);
    goto loc_80214198;

loc_80214198:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r23 = r5;
    r29 = 0;
    r3 = (r3 & 255);
    r4 = (r4 & 65535);
    ctx->lr = 0x802141C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x802140DCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    ctr = ctx->ctr;
    r31 = r3;
    r3 = r23;
    ctx->lr = 0x802141CCu;
    if constexpr (KnownRegArgsCpuCall<0x8027F21Cu>(&func_8027F21C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->ctr = ctr;
        const auto regargs_result_8027F21C_AFD = func_8027F21C_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8027F21C_AFD;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8027F21Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r26 = r3;
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x802141D8u;
    if constexpr (KnownRegArgsCpuCall<0x8004AED4u>(&func_8004AED4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_8004AED4_E7B = func_8004AED4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8004AED4_E7B;
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
        InvokeDirectCpu<0x8004AED4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = (r3 & 65535);
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r3 + 384);
    if constexpr (KnownRegArgsCpuCall<0x8004C068u>(&func_8004C068)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_8004C068_1193 = func_8004C068_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8004C068_1193;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8004C068u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r30 = (r3 & 65535);
}

loc_802141F0:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(r26))) {
        goto loc_80214320;
    }
}

loc_802141F4:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 22), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 24), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 26), static_cast<uint16_t>(r0));
    r3 = r23;
    r4 = (r1 + 8);
    r5 = 1;
    ctx->lr = 0x80214220u;
    if constexpr (KnownRegArgsCpuCall<0x8027F628u>(&func_8027F628)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8027F628_16E2 = func_8027F628_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027F628_16E2);
        r4 = static_cast<uint32_t>(regargs_result_8027F628_16E2 >> 32);
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
        InvokeDirectCpu<0x8027F628u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r23 = 0;
    r25 = (r1 + 8);
    r24 = (r1 + 16);
    r27 = r24;
    r28 = 1;
    goto loc_802142B0;
}

loc_80214238:
{
    r3 = MemoryInline::FlatRead16(r25);
    // inline leaf 0x8029F718 (10 guest instruction(s))
}

loc_inl1_0x8029F718:
{
    r0 = (r3 & 65535);
}

loc_inl1_0x8029F720:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(132))) {
        goto loc_inl1_0x8029F728;
    }
}

loc_inl1_0x8029F724:
{
    r3 = 0;
}

loc_inl1_0x8029F728:
{
    r0 = (r3 & 65535);
    r4 = (r0 * 12);
    r3 = 0x805E0000u;
    r0 = (r3 + -14472);
    r3 = (r0 + r4);
}

loc_inl1_cont_8029F718:
{
    // end of inlined leaf 0x8029F718
    r5 = MemoryInline::FlatRead16((r3 + 2));
    r6 = 0;
    r4 = 0;
    r3 = (r1 + 16);
    ctr = r23;
}

loc_80214258:
{
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(0))) {
        goto loc_80214290;
    }
}

loc_8021425C:
{
    r0 = MemoryInline::FlatRead16(r3);
}

loc_80214264:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_80214284;
    }
}

loc_80214268:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4 = (r27 + r0);
    r3 = MemoryInline::FlatRead16((r4 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    r6 = 1;
    goto loc_80214290;
}

loc_80214284:
{
    r3 = (r3 + 4);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8021425C;
    }
}

loc_80214290:
{
}

loc_80214294:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_802142A4;
    }
}

loc_80214298:
{
    MemoryInline::FlatWrite16(r24, static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r24 + 2), static_cast<uint16_t>(r28));
    r29 = (r29 + 1);
}

loc_802142A4:
{
    r25 = (r25 + 2);
    r24 = (r24 + 4);
    r23 = (r23 + 1);
}

loc_802142B0:
{
}

loc_802142B4:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(r26))) {
        goto loc_80214238;
    }
}

loc_802142B8:
{
}

loc_802142BC:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(r29))) {
        goto loc_80214320;
    }
}

loc_802142C0:
{
    r23 = (r30 * 99);
    r24 = 0;
    r26 = (r1 + 16);
    goto loc_80214318;
}

loc_802142D0:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x802142D8u;
    if constexpr (KnownRegArgsCpuCall<0x8004AED4u>(&func_8004AED4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_8004AED4_23D2 = func_8004AED4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8004AED4_23D2;
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
        InvokeDirectCpu<0x8004AED4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r5 = (r3 & 65535);
    r3 = MemoryInline::FlatRead16(r26);
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = (r4 + 384);
    ctx->lr = 0x802142ECu;
    if constexpr (KnownRegArgsCpuCall<0x8004B814u>(&func_8004B814)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_8004B814_272F = func_8004B814_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004B814_272F);
        r4 = static_cast<uint32_t>(regargs_result_8004B814_272F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8004B814u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        ctr = ctx->ctr;
    }
    r3 = (r3 - r23);
    r0 = MemoryInline::FlatRead16((r26 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802142F8:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80214300;
    }
}

loc_802142FC:
{
    r30 = (r30 + -1);
}

loc_80214300:
{
}

loc_80214304:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(0))) {
        goto loc_80214310;
    }
}

loc_80214308:
{
    r31 = (r31 | 256);
    goto loc_80214320;
}

loc_80214310:
{
    r26 = (r26 + 4);
    r24 = (r24 + 1);
}

loc_80214318:
{
}

loc_8021431C:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(r29))) {
        goto loc_802142D0;
    }
}

loc_80214320:
{
    r3 = r31;
    r11 = (r1 + 80);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80214198(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80214198_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000037FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80214198 func_80214198 preserves=true fpr_mask=0x00000000
