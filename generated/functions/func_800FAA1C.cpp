#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F69E8(CpuContext* ctx);
extern "C" uint64_t func_800F69E8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800F6BD0(CpuContext* ctx);
extern "C" uint64_t func_800F6BD0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800FAA1C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r26_addr_0 = 0;
    uint32_t r26_addr_1 = 0;
    uint32_t r26_addr_2 = 0;
    uint32_t r26_addr_3 = 0;
    uint32_t r26_addr_4 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r31_addr_6 = 0;
    uint32_t r31_addr_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    MKW_GUEST_ENTER(0x800FAA1Cu);
    goto loc_800FAA1C;

loc_800FAA1C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r24 = r3;
    r25 = r4;
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = (r4 & 255);
    r29_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r29 = (r29_rot_0 & -4);
    r3 = 0x80590000u;
    r30 = (r3 + -20416);
    r30_addr_0 = (r30 + r29);
    r28 = MemoryInline::FlatRead32(r30_addr_0);
}

loc_800FAA58:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_800FABB0;
    }
}

loc_800FAA5C:
{
    r27 = 0;
    r26 = 0;
    r0 = 255;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 11u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r1 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r1 + 9), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r1 + 10), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r1 + 11), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r1 + 12), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r1 + 13), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r1 + 14), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r1 + 15), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r1 + 16), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r1 + 17), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 10u, (r1 + 18), static_cast<uint8_t>(r0));
    r31 = (r1 + 8);
    goto loc_800FAB90;
}

loc_800FAA9C:
{
    r0 = MemoryInline::FlatRead32((r28 + 4));
}

loc_800FAAA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800FAAF8;
    }
}

loc_800FAAA8:
{
    r28 = (r28 + 8);
    r0 = MemoryInline::FlatRead32(r28);
}

loc_800FAAB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800FAB9C;
    }
}

loc_800FAAB8:
{
    r0 = MemoryInline::FlatRead32((r28 + 4));
}

loc_800FAAC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800FAB8C;
    }
}

loc_800FAAC4:
{
    r3 = 2;
    r4 = 2;
    r5 = (r25 & 255);
    r6 = 0;
    r0 = r26;
    r26 = (r26 + 1);
    r7 = (r0 & 255);
    ctx->lr = 0x800FAAE4u;
    if constexpr (KnownRegArgsCpuCall<0x800F6BD0u>(&func_800F6BD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_800F6BD0_1455 = func_800F6BD0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F6BD0_1455);
        r4 = static_cast<uint32_t>(regargs_result_800F6BD0_1455 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x800F6BD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r0 = r27;
    r27 = (r27 + 1);
    r31_addr_2 = (r31 + r0);
    MemoryInline::FlatWrite8(r31_addr_2, static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r24 + 2), static_cast<uint8_t>(r3));
    goto loc_800FAB8C;
}

loc_800FAAF8:
{
    r3 = 2;
    r4 = 1;
    r5 = (r25 & 255);
    r6 = 0;
    r7 = MemoryInline::FlatRead8(r24);
    ctx->lr = 0x800FAB10u;
    if constexpr (KnownRegArgsCpuCall<0x800F6BD0u>(&func_800F6BD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_800F6BD0_198C = func_800F6BD0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F6BD0_198C);
        r4 = static_cast<uint32_t>(regargs_result_800F6BD0_198C >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x800F6BD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r0 = r27;
    r27 = (r27 + 1);
    r31_addr_3 = (r31 + r0);
    MemoryInline::FlatWrite8(r31_addr_3, static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead8(r24);
    r4 = (r24 + r0);
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8(r24);
    r7 = (r3 + 1);
    MemoryInline::FlatWrite8(r24, static_cast<uint8_t>(r7));
    r28 = (r28 + 8);
    r0 = MemoryInline::FlatRead32(r28);
}

loc_800FAB40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800FAB9C;
    }
}

loc_800FAB44:
{
    r0 = MemoryInline::FlatRead32((r28 + 4));
}

loc_800FAB4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800FAB8C;
    }
}

loc_800FAB50:
{
    r3 = 2;
    r4 = 1;
    r5 = (r25 & 255);
    r6 = 0;
    r7 = (r7 & 255);
    ctx->lr = 0x800FAB68u;
    if constexpr (KnownRegArgsCpuCall<0x800F6BD0u>(&func_800F6BD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_800F6BD0_20B4 = func_800F6BD0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F6BD0_20B4);
        r4 = static_cast<uint32_t>(regargs_result_800F6BD0_20B4 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x800F6BD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r0 = r27;
    r27 = (r27 + 1);
    r31_addr_4 = (r31 + r0);
    MemoryInline::FlatWrite8(r31_addr_4, static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead8(r24);
    r4 = (r24 + r0);
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8(r24);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8(r24, static_cast<uint8_t>(r0));
}

loc_800FAB8C:
{
    r28 = (r28 + 8);
}

loc_800FAB90:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_800FAB98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800FAA9C;
    }
}

loc_800FAB9C:
{
    r3 = (r25 & 255);
    r4 = 0;
    r30_addr_1 = (r30 + r29);
    r5 = MemoryInline::FlatRead32(r30_addr_1);
    r6 = (r1 + 8);
    ctx->lr = 0x800FABB0u;
    if constexpr (KnownRegArgsCpuCall<0x800F69E8u>(&func_800F69E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_800F69E8_277F = func_800F69E8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F69E8_277F);
        r4 = static_cast<uint32_t>(regargs_result_800F69E8_277F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800F69E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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

loc_800FABB0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r24 + 1), static_cast<uint8_t>(r0));
    r3 = 0x80590000u;
    r27 = (r3 + -20252);
    r27_addr_0 = (r27 + r29);
    r28 = MemoryInline::FlatRead32(r27_addr_0);
}

loc_800FABC8:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_800FAC68;
    }
}

loc_800FABCC:
{
    r0 = 255;
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 11u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r1 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r1 + 9), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r1 + 10), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r1 + 11), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r1 + 12), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r1 + 13), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r1 + 14), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r1 + 15), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 8u, (r1 + 16), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 9u, (r1 + 17), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 10u, (r1 + 18), static_cast<uint8_t>(r0));
    r26 = (r1 + 8);
    goto loc_800FAC48;
}

loc_800FAC04:
{
    r0 = MemoryInline::FlatRead32((r28 + 4));
}

loc_800FAC0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800FAC44;
    }
}

loc_800FAC10:
{
    r3 = 2;
    r4 = 3;
    r5 = (r25 & 255);
    r6 = 0;
    r7 = MemoryInline::FlatRead8((r24 + 1));
    ctx->lr = 0x800FAC28u;
    if constexpr (KnownRegArgsCpuCall<0x800F6BD0u>(&func_800F6BD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_800F6BD0_356F = func_800F6BD0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F6BD0_356F);
        r4 = static_cast<uint32_t>(regargs_result_800F6BD0_356F >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x800F6BD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r0 = MemoryInline::FlatRead8((r24 + 1));
    r26_addr_2 = (r26 + r0);
    MemoryInline::FlatWrite8(r26_addr_2, static_cast<uint8_t>(r3));
    r4 = (r24 + r0);
    MemoryInline::FlatWrite8((r4 + 13), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r24 + 1));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r24 + 1), static_cast<uint8_t>(r0));
}

loc_800FAC44:
{
    r28 = (r28 + 8);
}

loc_800FAC48:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_800FAC50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800FAC04;
    }
}

loc_800FAC54:
{
    r3 = (r25 & 255);
    r4 = 3;
    r27_addr_1 = (r27 + r29);
    r5 = MemoryInline::FlatRead32(r27_addr_1);
    r6 = (r1 + 8);
    ctx->lr = 0x800FAC68u;
    if constexpr (KnownRegArgsCpuCall<0x800F69E8u>(&func_800F69E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_800F69E8_3C2A = func_800F69E8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F69E8_3C2A);
        r4 = static_cast<uint32_t>(regargs_result_800F69E8_3C2A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800F69E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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

loc_800FAC68:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

extern "C" void func_800FAA1C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800FAA1C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00003FFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800FAA1C func_800FAA1C preserves=true fpr_mask=0x00000000
