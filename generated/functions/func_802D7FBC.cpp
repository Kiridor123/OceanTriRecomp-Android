#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802D7BC0(CpuContext* ctx);
extern "C" uint64_t func_802D7BC0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802D7C68(CpuContext* ctx);
extern "C" uint64_t func_802D7C68_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802D7CD0(CpuContext* ctx);
extern "C" uint64_t func_802D7CD0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802D7F74(CpuContext* ctx);
extern "C" uint64_t func_802D7F74_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802D7FBC_ra38_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_addze_src_1 = 0;
    uint32_t r0_addze_src_2 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword13 = 0;
    uint32_t stackword14 = 0;
    uint32_t stackword15 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_802D7FBC;

loc_802D7FBC:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r22 = r3;
    r23 = r4;
    r28 = 100;
    r27 = 100;
    r26 = 100;
    r25 = 0;
    r3 = MemoryInline::FlatRead8(r3);
    // inline leaf 0x802D77A0 (6 guest instruction(s))
    r0 = (r3 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = 0x805D0000u;
    r3 = (r3 + 19224);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    // end of inlined leaf 0x802D77A0
    r24 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead16((r22 + 4));
    if constexpr (KnownRegArgsCpuCall<0x802D7BC0u>(&func_802D7BC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_802D7BC0_FA7 = func_802D7BC0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D7BC0_FA7);
        r4 = static_cast<uint32_t>(regargs_result_802D7BC0_FA7 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x802D7BC0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWrite8(r23, static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead16((r22 + 6));
    if constexpr (KnownRegArgsCpuCall<0x802D7C68u>(&func_802D7C68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_802D7C68_1381 = func_802D7C68_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D7C68_1381);
        r4 = static_cast<uint32_t>(regargs_result_802D7C68_1381 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x802D7C68u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWrite8((r23 + 1), static_cast<uint8_t>(r3));
    r0 = 100;
    MemoryInline::FlatWrite16((r23 + 2), static_cast<uint16_t>(r0));
    r29 = 0;
    MemoryInline::FlatWrite16((r23 + 4), static_cast<uint16_t>(r29));
    r3 = MemoryInline::FlatRead8(r23);
    // inline leaf 0x802D7C08 (8 guest instruction(s))
    r0 = (r3 & 255);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & -4);
    r0 = (r3 + 1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = 0x805D0000u;
    r3 = (r3 + 19296);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_1);
    // end of inlined leaf 0x802D7C08
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    MemoryInline::FlatWrite16((r23 + 6), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r23 + 10), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite16((r23 + 8), static_cast<uint16_t>(r29));
    MemoryInline::FlatWrite16((r23 + 12), static_cast<uint16_t>(r29));
    MemoryInline::FlatWrite16((r23 + 14), static_cast<uint16_t>(r29));
    r3 = MemoryInline::FlatRead8(r23);
    // inline leaf 0x802D7C28 (8 guest instruction(s))
    r0 = (r3 & 255);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r0 = (r3 + 2);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = 0x805D0000u;
    r3 = (r3 + 19296);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_2);
    // end of inlined leaf 0x802D7C28
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    MemoryInline::FlatWrite16((r23 + 16), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r23 + 18), static_cast<uint16_t>(r29));
    r3 = MemoryInline::FlatRead8((r23 + 1));
    // inline leaf 0x802D7CB0 (8 guest instruction(s))
    r0 = (r3 & 255);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & -2);
    r0 = (r3 + 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3 = 0x805D0000u;
    r3 = (r3 + 19628);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_3);
    // end of inlined leaf 0x802D7CB0
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    MemoryInline::FlatWrite16((r23 + 22), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r23 + 24), static_cast<uint16_t>(r29));
    r3 = MemoryInline::FlatRead16((r22 + 8));
    if constexpr (KnownRegArgsCpuCall<0x802D7CD0u>(&func_802D7CD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_802D7CD0_2170 = func_802D7CD0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D7CD0_2170);
        r4 = static_cast<uint32_t>(regargs_result_802D7CD0_2170 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x802D7CD0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWrite8((r23 + 20), static_cast<uint8_t>(r3));
    r31 = MemoryInline::FlatRead16((r23 + 6));
    r31 = (r31 << 16);
    r31 = (static_cast<int32_t>(r31) >> 16);
    r30 = MemoryInline::FlatRead16((r23 + 16));
    r30 = (r30 << 16);
    r30 = (static_cast<int32_t>(r30) >> 16);
    r29 = MemoryInline::FlatRead16((r23 + 22));
    r29 = (r29 << 16);
    r29 = (static_cast<int32_t>(r29) >> 16);
    r3 = 0;
    f2.d = MemoryInline::FlatReadFloat64((r2 + -13144));
    r5 = 1127219200;
    r6 = 1374420992;
    r0 = 2;
    ctr = r0;
}

loc_802D8094:
{
    r0 = MemoryInline::FlatRead8(r24);
}

loc_802D809C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D80BC;
    }
}

loc_802D80A0:
{
}

loc_802D80A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802D80EC;
    }
}

loc_802D80A8:
{
}

loc_802D80AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802D811C;
    }
}

loc_802D80B0:
{
}

loc_802D80B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802D8134;
    }
}

loc_802D80B8:
{
    goto loc_802D8180;
}

loc_802D80BC:
{
    r0 = MemoryInline::FlatRead8((r23 + 20));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r4 = (r24 + r0);
    r4 = MemoryInline::FlatRead16((r4 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 + 100);
    r0 = (r31 * r0);
    r4 = (r6 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_3 & 1);
    r31 = (r0 + r4);
    goto loc_802D8180;
}

loc_802D80EC:
{
    r0 = MemoryInline::FlatRead8((r23 + 20));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r4 = (r24 + r0);
    r4 = MemoryInline::FlatRead16((r4 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 + 100);
    r0 = (r30 * r0);
    r4 = (r6 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r30 = (r0 + r4);
    goto loc_802D8180;
}

loc_802D811C:
{
    r0 = MemoryInline::FlatRead8((r23 + 20));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r4 = (r24 + r0);
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r23 + 4), static_cast<uint16_t>(r0));
    goto loc_802D8180;
}

loc_802D8134:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r25)));
    r0 = (r0 ^ -2147483648);
    stackword12 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    stackword13 = r5;
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword13), static_cast<uint32_t>(stackword12));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r0 = MemoryInline::FlatRead8((r23 + 20));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r4 = (r24 + r0);
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    stackword14 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    stackword15 = r5;
    MemoryInline::FlatWriteRam32((r1 + 16), r5);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword15), static_cast<uint32_t>(stackword14));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r25 = fctiwzword0;
}

loc_802D8180:
{
    r3 = (r3 + 1);
    r24 = (r24 + 14);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802D8094;
    }
}

loc_802D818C:
{
    r3 = (r22 + 1);
    r4 = 14;
    if constexpr (KnownRegArgsCpuCall<0x802D7F74u>(&func_802D7F74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_802D7F74_36E2 = func_802D7F74_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D7F74_36E2);
        r4 = static_cast<uint32_t>(regargs_result_802D7F74_36E2 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x802D7F74u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D819C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D81A4;
    }
}

loc_802D81A0:
{
    r28 = 120;
}

loc_802D81A4:
{
    r3 = (r22 + 1);
    r4 = 15;
    if constexpr (KnownRegArgsCpuCall<0x802D7F74u>(&func_802D7F74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_802D7F74_3A70 = func_802D7F74_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D7F74_3A70);
        r4 = static_cast<uint32_t>(regargs_result_802D7F74_3A70 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x802D7F74u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D81B4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D81BC;
    }
}

loc_802D81B8:
{
    r27 = 120;
}

loc_802D81BC:
{
    r3 = (r22 + 1);
    r4 = 19;
    if constexpr (KnownRegArgsCpuCall<0x802D7F74u>(&func_802D7F74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_802D7F74_3DFE = func_802D7F74_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D7F74_3DFE);
        r4 = static_cast<uint32_t>(regargs_result_802D7F74_3DFE >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x802D7F74u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D81CC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D81DC;
    }
}

loc_802D81D0:
{
    r28 = (r28 + 20);
    r27 = (r27 + 20);
    r26 = 120;
}

loc_802D81DC:
{
    r3 = (r22 + 1);
    r4 = 22;
    if constexpr (KnownRegArgsCpuCall<0x802D7F74u>(&func_802D7F74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_802D7F74_41BA = func_802D7F74_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D7F74_41BA);
        r4 = static_cast<uint32_t>(regargs_result_802D7F74_41BA >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x802D7F74u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D81EC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D81FC;
    }
}

loc_802D81F0:
{
    r28 = (r28 + 50);
    r27 = (r27 + 50);
    r26 = (r26 + 50);
}

loc_802D81FC:
{
    r3 = (r22 + 1);
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x802D7F74u>(&func_802D7F74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_802D7F74_457C = func_802D7F74_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D7F74_457C);
        r4 = static_cast<uint32_t>(regargs_result_802D7F74_457C >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x802D7F74u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D820C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D8218;
    }
}

loc_802D8210:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r23 + 10), static_cast<uint8_t>(r0));
}

loc_802D8218:
{
    r3 = (r22 + 1);
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x802D7F74u>(&func_802D7F74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_802D7F74_494B = func_802D7F74_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D7F74_494B);
        r4 = static_cast<uint32_t>(regargs_result_802D7F74_494B >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x802D7F74u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D8228:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D8234;
    }
}

loc_802D822C:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r23 + 10), static_cast<uint8_t>(r0));
}

loc_802D8234:
{
    r3 = (r22 + 1);
    r4 = 4;
    if constexpr (KnownRegArgsCpuCall<0x802D7F74u>(&func_802D7F74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_802D7F74_4D1A = func_802D7F74_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D7F74_4D1A);
        r4 = static_cast<uint32_t>(regargs_result_802D7F74_4D1A >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x802D7F74u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D8244:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D8250;
    }
}

loc_802D8248:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r23 + 10), static_cast<uint8_t>(r0));
}

loc_802D8250:
{
    r3 = (r22 + 1);
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x802D7F74u>(&func_802D7F74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_802D7F74_50E9 = func_802D7F74_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D7F74_50E9);
        r4 = static_cast<uint32_t>(regargs_result_802D7F74_50E9 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x802D7F74u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D8260:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D826C;
    }
}

loc_802D8264:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r23 + 10), static_cast<uint8_t>(r0));
}

loc_802D826C:
{
    r3 = (r22 + 1);
    r4 = 6;
    if constexpr (KnownRegArgsCpuCall<0x802D7F74u>(&func_802D7F74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_802D7F74_54B8 = func_802D7F74_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D7F74_54B8);
        r4 = static_cast<uint32_t>(regargs_result_802D7F74_54B8 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x802D7F74u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D827C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D8288;
    }
}

loc_802D8280:
{
    r0 = 5;
    MemoryInline::FlatWrite8((r23 + 10), static_cast<uint8_t>(r0));
}

loc_802D8288:
{
    r3 = (r22 + 1);
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x802D7F74u>(&func_802D7F74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_802D7F74_5887 = func_802D7F74_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D7F74_5887);
        r4 = static_cast<uint32_t>(regargs_result_802D7F74_5887 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x802D7F74u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D8298:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D82A4;
    }
}

loc_802D829C:
{
    r0 = 6;
    MemoryInline::FlatWrite8((r23 + 10), static_cast<uint8_t>(r0));
}

loc_802D82A4:
{
    r3 = (r22 + 1);
    r4 = 9;
    if constexpr (KnownRegArgsCpuCall<0x802D7F74u>(&func_802D7F74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_802D7F74_5C56 = func_802D7F74_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D7F74_5C56);
        r4 = static_cast<uint32_t>(regargs_result_802D7F74_5C56 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x802D7F74u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D82B4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D82C0;
    }
}

loc_802D82B8:
{
    r0 = 7;
    MemoryInline::FlatWrite8((r23 + 10), static_cast<uint8_t>(r0));
}

loc_802D82C0:
{
    r3 = (r22 + 1);
    r4 = 10;
    if constexpr (KnownRegArgsCpuCall<0x802D7F74u>(&func_802D7F74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_802D7F74_6026 = func_802D7F74_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D7F74_6026);
        r4 = static_cast<uint32_t>(regargs_result_802D7F74_6026 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x802D7F74u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D82D0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D82DC;
    }
}

loc_802D82D4:
{
    r0 = 8;
    MemoryInline::FlatWrite8((r23 + 10), static_cast<uint8_t>(r0));
}

loc_802D82DC:
{
    r0 = (r31 * r28);
    r3 = 1374420992;
    r3 = (r3 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    r3 = (r0 + r3);
    r0 = MemoryInline::FlatRead8((r23 + 10));
}

loc_802D8300:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D8320;
    }
}

loc_802D8304:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r3) >> 2);
    r0_addze_src_1 = r0;
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_1 + r0_ca_1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r23 + 12), static_cast<uint16_t>(r0));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & 1);
    r0 = (r0 + r3);
    r3 = (static_cast<int32_t>(r0) >> 1);
}

loc_802D8320:
{
    r0 = MemoryInline::FlatRead16((r23 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 - r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r23 + 8), static_cast<uint16_t>(r0));
    r3 = (r22 + 1);
    r4 = 7;
    if constexpr (KnownRegArgsCpuCall<0x802D7F74u>(&func_802D7F74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_802D7F74_6B14 = func_802D7F74_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D7F74_6B14);
        r4 = static_cast<uint32_t>(regargs_result_802D7F74_6B14 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x802D7F74u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D8340:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D8374;
    }
}

loc_802D8344:
{
    r4 = MemoryInline::FlatRead16((r23 + 12));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 * 130);
    r3 = 1374420992;
    r3 = (r3 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    r0 = (r0 + r3);
    r0 = (r0 - r4);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r23 + 14), static_cast<uint16_t>(r0));
    goto loc_802D83B4;
}

loc_802D8374:
{
    r3 = (r22 + 1);
    r4 = 11;
    if constexpr (KnownRegArgsCpuCall<0x802D7F74u>(&func_802D7F74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_802D7F74_7134 = func_802D7F74_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D7F74_7134);
        r4 = static_cast<uint32_t>(regargs_result_802D7F74_7134 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x802D7F74u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D8384:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D83B4;
    }
}

loc_802D8388:
{
    r4 = MemoryInline::FlatRead16((r23 + 12));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 * 130);
    r3 = 1374420992;
    r3 = (r3 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    r0 = (r0 + r3);
    r0 = (r0 - r4);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r23 + 14), static_cast<uint16_t>(r0));
}

loc_802D83B4:
{
    r0 = (r30 * r27);
    r3 = 1374420992;
    r4 = (r3 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_7 & 1);
    r3 = (r0 + r3);
    r0 = MemoryInline::FlatRead16((r23 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 - r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r23 + 18), static_cast<uint16_t>(r0));
    r0 = (r29 * r26);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & 1);
    r3 = (r0 + r3);
    r0 = MemoryInline::FlatRead16((r23 + 22));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 - r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r23 + 24), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r25)));
}

loc_802D840C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(-6))) {
        goto loc_802D841C;
    }
}

loc_802D8410:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r23 + 26), static_cast<uint8_t>(r0));
    goto loc_802D8460;
}

loc_802D841C:
{
}

loc_802D8420:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(-2))) {
        goto loc_802D8430;
    }
}

loc_802D8424:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r23 + 26), static_cast<uint8_t>(r0));
    goto loc_802D8460;
}

loc_802D8430:
{
}

loc_802D8434:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(2))) {
        goto loc_802D8444;
    }
}

loc_802D8438:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r23 + 26), static_cast<uint8_t>(r0));
    goto loc_802D8460;
}

loc_802D8444:
{
}

loc_802D8448:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(6))) {
        goto loc_802D8458;
    }
}

loc_802D844C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r23 + 26), static_cast<uint8_t>(r0));
    goto loc_802D8460;
}

loc_802D8458:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r23 + 26), static_cast<uint8_t>(r0));
}

loc_802D8460:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802D7FBC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802D7FBC_ra38_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802D7FBC func_802D7FBC preserves=true fpr_mask=0x00000000
