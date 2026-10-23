#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004D254(CpuContext* ctx);
extern "C" uint64_t func_8004D254_rac8_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80441DE4(CpuContext* ctx);
extern "C" uint32_t func_80441DE4_ra148_1e_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_8004F0F0_ra58_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t ctr = ctx->ctr;

    goto loc_8004F0F0;

loc_8004F0F0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r27 = r3;
    r28 = r4;
    r29 = 0;
    // inline leaf 0x8004D184 (5 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead32((r3 + 2396));
    MemoryInline::FlatWrite32((r13 + -17824), r3);
    // end of inlined leaf 0x8004D184
    r31 = r3;
    r3 = (r27 & 255);
    ctx->lr = 0x8004F120u;
    if constexpr (KnownRegArgsCpuCall<0x8004D254u>(&func_8004D254)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8004D254_A4F = func_8004D254_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_8004D254_A4F);
        r4 = static_cast<uint32_t>(regargs_result_8004D254_A4F >> 32);
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
        InvokeDirectCpu<0x8004D254u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = (r27 & 255);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r4 = (r4_rot_0 & -256);
    r3 = 0x80670000u;
    r0 = (r3 + -13664);
    r30 = (r0 + r4);
    r0 = MemoryInline::FlatRead8(r31);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 1));
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 2));
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r0));
    r3 = (r30 + 3);
    r4 = (r31 + 3);
    r5 = 17;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r31 + 20));
    guest_range_2 = MemoryInline::ResolveRangeHost((r30 + 20), 0, 24u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r30 + 20), r0);
    r0 = MemoryInline::FlatRead32((r31 + 21412));
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r30 + 24), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 21412), r0);
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r30 + 28), r0);
    r0 = MemoryInline::FlatRead8((r31 + 158));
    MemoryInline::WriteResolved8(guest_range_2, 12u, (r30 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 159));
    MemoryInline::WriteResolved8(guest_range_2, 13u, (r30 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 14752));
    MemoryInline::WriteResolved8(guest_range_2, 14u, (r30 + 34), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 14753));
    MemoryInline::WriteResolved8(guest_range_2, 15u, (r30 + 35), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 14778));
    MemoryInline::WriteResolved8(guest_range_2, 16u, (r30 + 36), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 15846));
    MemoryInline::WriteResolved8(guest_range_2, 17u, (r30 + 37), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 15847));
    MemoryInline::WriteResolved8(guest_range_2, 18u, (r30 + 38), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 14780));
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r30 + 40), r0);
    r3 = (r30 + 108);
    r4 = (r31 + 21220);
    r5 = 40;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 148);
    r4 = (r31 + 21260);
    r5 = 40;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead16((r31 + 21218));
    MemoryInline::FlatWrite16((r30 + 188), static_cast<uint16_t>(r0));
    r3 = (r30 + 190);
    r4 = 0x80660000u;
    r26 = (r4 + -21920);
    r4 = (r26 + 2026);
    r5 = 17;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r26 + 2024));
    MemoryInline::FlatWrite8((r30 + 207), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 2025));
    MemoryInline::FlatWrite8((r30 + 39), static_cast<uint8_t>(r0));
    r0 = (r27 & 255);
}

loc_8004F210:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8004F22C;
    }
}

loc_8004F214:
{
    r3 = (r30 + 208);
    r4 = 0x80660000u;
    r4 = (r4 + -19184);
    r5 = 31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_8004F234;
}

loc_8004F22C:
{
    r3 = (r30 + 208);
    if constexpr (KnownRegArgsCpuCall<0x80441DE4u>(&func_80441DE4)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_80441DE4_1D2F = func_80441DE4_ra148_1e_10_0(ctx, r3, r6, r8, f1.d, f2.d, f3.d, f4.d);
        r4 = regargs_result_80441DE4_1D2F;
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80441DE4u>(ctx);
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    }
}

loc_8004F234:
{
    r0 = (r28 & 255);
}

loc_8004F23C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004F2A8;
    }
}

loc_8004F240:
{
    r4 = MemoryInline::FlatRead8((r30 + 39));
    r3 = MemoryInline::FlatRead8((r30 + 207));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r0 = (r0 - r3);
    r0 = (r4 + r0);
    r26 = (r0 & 255);
    r0 = MemoryInline::FlatRead32((r31 + 21416));
    r0 = (r0 & 16711680);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 65535);
    r27 = (r0 & 255);
    r27 = (r27 + 1);
    r0 = (r27 & 255);
}

loc_8004F274:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8004F27C;
    }
}

loc_8004F278:
{
    r27 = 1;
}

loc_8004F27C:
{
    // inline leaf 0x804D53F0 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x804D53F0
    r4 = (r3 & 65535);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(24));
    r3 = (r3_rot_0 & -16777216);
    r0 = (r27 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & -65536);
    r0 = (r3 | r0);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32((r30 + 240), r0);
    r0 = MemoryInline::FlatRead32((r30 + 240));
    MemoryInline::FlatWrite32((r31 + 21416), r0);
    goto loc_8004F2B0;
}

loc_8004F2A8:
{
    r0 = MemoryInline::FlatRead32((r31 + 21416));
    MemoryInline::FlatWrite32((r30 + 240), r0);
}

loc_8004F2B0:
{
    r3 = (r30 + 44);
    r4 = (r31 + 21348);
    r5 = 64;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r31 + 21348);
    r4 = 0;
    r5 = 64;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r30;
    r0 = 31;
    ctr = r0;
}

loc_8004F2DC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
    r29 = (r29 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
    r29 = (r29 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
    r29 = (r29 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 3));
    r29 = (r29 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 4));
    r29 = (r29 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    r29 = (r29 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 6));
    r29 = (r29 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 7));
    r3 = (r3 + 8);
    r29 = (r29 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8004F2DC;
    }
}

loc_8004F324:
{
    r0 = MemoryInline::FlatRead8(r3);
    r29 = (r29 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r29 = (r29 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r29 = (r29 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 3));
    r29 = (r29 + r0);
    MemoryInline::FlatWrite32((r30 + 252), r29);
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004F0F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004F0F0_ra58_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FDA gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001E fpr_return=0x00000002 cr_read=0x23 cr_write=0x23 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8004F0F0 func_8004F0F0 preserves=true fpr_mask=0x00000000
