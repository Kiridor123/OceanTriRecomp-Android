#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80478000(CpuContext* ctx);
extern "C" uint64_t func_80478000_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8049DF78(CpuContext* ctx);
extern "C" uint64_t func_8049DF78_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8049E4D0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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

    goto loc_8049E4D0;

loc_8049E4D0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r29 = r3;
    r27 = r4;
    r28 = r5;
    r30 = r6;
    r31 = r7;
    r3 = 2;
    ctx->lr = 0x8049E500u;
    if constexpr (KnownRegArgsCpuCall<0x80478000u>(&func_80478000)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        const auto regargs_result_80478000_AE7 = func_80478000_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_80478000_AE7);
        r4 = static_cast<uint32_t>(regargs_result_80478000_AE7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80478000u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_8049E504:
{
    r5 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8049E5D4;
    }
}

loc_8049E50C:
{
    r0 = (0 - r28);
    r4 = 12;
    r0 = (r0 | r28);
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r4));
    r0 = (static_cast<int32_t>(r0) >> 31);
}

loc_8049E524:
{
    r0 = (r0 & 2);
    r4 = (r3 + 21);
    r0 = (r0 | 145);
    MemoryInline::FlatWriteRam8((r3 + 20), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8049E554;
    }
}

loc_8049E538:
{
    r6 = 3;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    MemoryInline::FlatWriteRam8(r4, static_cast<uint8_t>(r6));
    r0 = (r0 | 3);
    MemoryInline::FlatWriteRam8((r4 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r6));
    goto loc_8049E5C8;
}

loc_8049E554:
{
    r6 = 17;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 9u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r4, static_cast<uint8_t>(r6));
    r7 = (r0 | 3);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(24));
    r6 = (r6_rot_1 & 255);
    r0 = 10;
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r4 + 1), static_cast<uint8_t>(r7));
    guest_range_1 = MemoryInline::ResolveRangeHost(r30, 0, 9u, true, false);
    r7 = MemoryInline::ReadResolved8(guest_range_1, 0u, r30);
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r4 + 2), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r30 + 2));
    r9 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r30 + 3));
    r10 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r30 + 4));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r7 = (r7_rot_1 & -4);
    r8 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r30 + 1));
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(3));
    r9 = (r9_rot_1 & -8);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(4));
    r10 = (r10_rot_1 & -16);
    r7 = (r8 | r7);
    r7 = (r9 | r7);
    r7 = (r10 | r7);
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r4 + 3), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r30 + 5));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r4 + 4), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r30 + 7));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r4 + 5), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r30 + 8));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r4 + 6), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r4 + 7), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r4 + 8), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
}

loc_8049E5C8:
{
    r3 = r29;
    r4 = 0;
    ctx->lr = 0x8049E5D4u;
    if constexpr (KnownRegArgsCpuCall<0x8049DF78u>(&func_8049DF78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        const auto regargs_result_8049DF78_1C58 = func_8049DF78_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8049DF78_1C58);
        r4 = static_cast<uint32_t>(regargs_result_8049DF78_1C58 >> 32);
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
        InvokeDirectCpu<0x8049DF78u>(ctx);
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
}

loc_8049E5D4:
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

extern "C" void func_8049E4D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8049E4D0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8049E4D0 func_8049E4D0 preserves=true fpr_mask=0x00000000
