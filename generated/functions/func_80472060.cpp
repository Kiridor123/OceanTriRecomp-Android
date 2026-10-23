#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80472290(CpuContext* ctx);
extern "C" uint64_t func_80472290_ra38_3e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);
extern "C" void func_80472A10(CpuContext* ctx);
extern "C" uint64_t func_80472A10_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804CCCC0(CpuContext* ctx);
extern "C" uint64_t func_804CCCC0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80472060_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r30_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
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

    goto loc_80472060;

loc_80472060:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
}

loc_80472078:
{
    r23 = r3;
    r24 = r4;
    r25 = r5;
    r26 = r6;
    r27 = r8;
    r28 = r9;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804720AC;
    }
}

loc_80472094:
{
}

loc_80472098:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804720AC;
    }
}

loc_8047209C:
{
}

loc_804720A0:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_804720AC;
    }
}

loc_804720A4:
{
}

loc_804720A8:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_804720B4;
    }
}

loc_804720AC:
{
    r3 = 0;
    goto loc_80472270;
}

loc_804720B4:
{
}

loc_804720B8:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_804720C4;
    }
}

loc_804720BC:
{
}

loc_804720C0:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(0))) {
        goto loc_804720CC;
    }
}

loc_804720C4:
{
    r3 = 0;
    goto loc_80472270;
}

loc_804720CC:
{
}

loc_804720D0:
{
    r31 = 0;
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_8047214C;
    }
}

loc_804720D8:
{
}

loc_804720DC:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_8047214C;
    }
}

loc_804720E0:
{
}

loc_804720E4:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(r6))) {
        goto loc_8047214C;
    }
}

loc_804720E8:
{
}

loc_804720EC:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r4))) {
        goto loc_8047214C;
    }
}

loc_804720F0:
{
    r3 = 613548032;
    r31 = 1;
    r0 = (r3 + 18725);
    r4 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r6)) >> 32));
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r7)) >> 32));
    r0 = (r6 - r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r5 = (r0 + r4);
    r0 = (r7 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r4 = (r4_rot_1 & 536870911);
    r3 = (r0 + r3);
    r30_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r30 = (r30_rot_1 & -16);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_3 & 536870911);
    r0 = (r0 * 14);
    r29_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r29 = (r29_rot_1 & -16);
    r30 = (r30 + 2);
    r29 = (r29 + 2);
    r4 = (r4 * 14);
    r0 = (r7 - r0);
    r3 = (r6 - r4);
    r29 = (r29 + r0);
    r30 = (r30 + r3);
}

loc_8047214C:
{
    r3 = r23;
    r4 = r24;
    r5 = r28;
    r6 = r10;
    ctx->lr = 0x80472160u;
    if constexpr (KnownRegArgsCpuCall<0x80472A10u>(&func_80472A10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        const auto regargs_result_80472A10_191F = func_80472A10_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80472A10_191F);
        r4 = static_cast<uint32_t>(regargs_result_80472A10_191F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80472A10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
    r4 = r3;
    r3 = r28;
    r5 = r23;
    r6 = r24;
    r7 = r31;
    r8 = r26;
    r9 = r27;
    r10 = (r1 + 8);
    ctx->lr = 0x80472184u;
    if constexpr (KnownRegArgsCpuCall<0x80472290u>(&func_80472290)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        const auto regargs_result_80472290_2212 = func_80472290_ra38_3e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_80472290_2212);
        r4 = static_cast<uint32_t>(regargs_result_80472290_2212 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        InvokeDirectCpu<0x80472290u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    }
    r3 = 0x92490000u;
    r0 = (r3 + 9363);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r24))) >> 32));
    r0 = (r0 + r24);
    r3 = (static_cast<int32_t>(r0) >> 3);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_3 & 1);
    r0 = (static_cast<int32_t>(r0) >> 3);
    r3 = (r3 + r4);
    r4 = (r3 * 14);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r0 = (r0 + r3);
    r3 = (r24 - r4);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r5 = (r5_rot_0 & -16);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804721C4;
    }
}

loc_804721BC:
{
    r5 = (r5 + r3);
    r5 = (r5 + 2);
}

loc_804721C4:
{
    r4 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost(r28, 0, 74u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r28, r24);
}

loc_804721D0:
{
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r28 + 4), r5);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r28 + 8), r25);
    }
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r28 + 14), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved16(guest_range_1, 60u, (r28 + 60), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead8(r27);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 62u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_1, 62u, (r28 + 62), r0);
        MemoryInline::WriteResolved16(guest_range_1, 64u, (r28 + 64), r4);
    }
    MemoryInline::WriteResolved16(guest_range_1, 66u, (r28 + 66), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r28 + 12), static_cast<uint16_t>(r31));
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8047221C;
    }
}

loc_804721F8:
{
    r3 = 2;
    r0 = (r5 + -1);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r28 + 16), r3);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r28 + 20), r0);
    }
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r28 + 24), r3);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 68u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_1, 68u, (r28 + 68), r4);
        MemoryInline::WriteResolved16(guest_range_1, 70u, (r28 + 70), r4);
    }
    MemoryInline::WriteResolved16(guest_range_1, 72u, (r28 + 72), static_cast<uint16_t>(r4));
    goto loc_80472244;
}

loc_8047221C:
{
    r0 = 2;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r28 + 16), r30);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r28 + 20), r29);
    }
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r28 + 24), r0);
    r0 = MemoryInline::FlatRead8((r1 + 8));
    MemoryInline::WriteResolved16(guest_range_1, 68u, (r28 + 68), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 10));
    MemoryInline::WriteResolved16(guest_range_1, 70u, (r28 + 70), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 12));
    MemoryInline::WriteResolved16(guest_range_1, 72u, (r28 + 72), static_cast<uint16_t>(r0));
}

loc_80472244:
{
    r4 = 0x92490000u;
    r3 = r27;
    r0 = (r4 + 9363);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r0 = (r0 + r5);
    r0 = (static_cast<int32_t>(r0) >> 3);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_4 & 1);
    r0 = (r0 + r4);
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r4 = (r4_rot_5 & -8);
    if constexpr (KnownRegArgsCpuCall<0x804CCCC0u>(&func_804CCCC0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804CCCC0_3A4C = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_3A4C);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_3A4C >> 32);
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r24;
}

loc_80472270:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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

extern "C" void func_80472060(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80472060_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFE000FFF fpr_write=0xFE000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80472060 func_80472060 preserves=true fpr_mask=0x00000000
