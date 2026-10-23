#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046D770(CpuContext* ctx);
extern "C" void func_8046D770_ra8_0_0_0(CpuContext*, uint32_t);
extern "C" void func_8046D794(CpuContext* ctx);
extern "C" void func_8046D794_ra8_0_0_0(CpuContext*, uint32_t);
extern "C" void func_8046D980(CpuContext* ctx);
extern "C" uint64_t func_8046D980_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" MkwStateFreeResult2 func_8046D770_statefree(uint32_t, uint32_t, PPC_FPR, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8046D794_statefree(uint32_t, uint32_t, PPC_FPR, uint32_t, uint32_t);

extern "C" uint64_t func_8046D7B8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
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
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8046D7B8;

loc_8046D7B8:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(32));
}

loc_8046D7C4:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 48), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 68u, (r1 + 116), r0);
    r26 = 0x80570000u;
    r29 = r3;
    r30 = r5;
    r31 = 0;
    r26 = (r26 + 15568);
    guest_range_0 = MemoryInline::ResolveRangeHost(r26, 0, 40u, true, false);
    r27 = MemoryInline::ReadResolved32(guest_range_0, 0u, r26);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 48), r27);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r26 + 4));
            r12 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r26 + 8));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 12u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r26 + 12));
            r10 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r26 + 16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 20u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r26 + 20));
            r8 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r26 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 28u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r26 + 28));
            r6 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r26 + 32));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r26 + 36));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r1 + 52), r28);
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 56), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 60), r11);
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 64), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r1 + 68), r9);
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r1 + 72), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r1 + 76), r7);
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r1 + 80), r6);
    }
    MemoryInline::WriteResolved32(guest_range_2, 36u, (r1 + 84), r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8046D860;
    }
}

loc_8046D830:
{
}

loc_8046D834:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(21));
    r0 = (r0_rot_0 & -2097152);
    r3 = (r0 | -939327488);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8046D844;
    }
}

loc_8046D840:
{
    r3 = (r0 | -670892032);
}

loc_8046D844:
{
    MemoryInline::FlatWriteRam32((r1 + 48), r3);
    r3 = r29;
    r5 = r30;
    r4 = (r1 + 48);
    ctx->lr = 0x8046D858u;
    if constexpr (KnownRegArgsCpuCall<0x8046D980u>(&func_8046D980)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        const auto regargs_result_8046D980_1AE4 = func_8046D980_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8046D980_1AE4);
        r4 = static_cast<uint32_t>(regargs_result_8046D980_1AE4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8046D980u>(ctx);
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
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r31 = r3;
    goto loc_8046D968;
}

loc_8046D860:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8046D894;
    }
}

loc_8046D864:
{
}

loc_8046D868:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8046D874;
    }
}

loc_8046D86C:
{
    ctx->gpr[1] = r1;
    if (false) {
        const auto state_free_result_8046D770_2443 = func_8046D770_statefree(r1, r3, f31, 0x8046D870u, ctx->gqr[0]);
        r1 = static_cast<uint32_t>(state_free_result_8046D770_2443[0]);
        f31.raw = static_cast<uint64_t>(state_free_result_8046D770_2443[1]);
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8046D770u>(ctx);
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
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_8046D878;
}

loc_8046D874:
{
    ctx->gpr[1] = r1;
    if (false) {
        const auto state_free_result_8046D794_2AAE = func_8046D794_statefree(r1, r3, f31, 0x8046D878u, ctx->gqr[0]);
        r1 = static_cast<uint32_t>(state_free_result_8046D794_2AAE[0]);
        f31.raw = static_cast<uint64_t>(state_free_result_8046D794_2AAE[1]);
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8046D794u>(ctx);
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
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8046D878:
{
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r0 = 0;
    r3 = -1;
    MemoryInline::FlatWrite32(r29, r0);
    r0 = (r4 & r3);
    MemoryInline::FlatWrite32((r29 + 4), r0);
    goto loc_8046D968;
}

loc_8046D894:
{
}

loc_8046D898:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(33))) {
        goto loc_8046D968;
    }
}

loc_8046D89C:
{
}

loc_8046D8A0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8046D8AC;
    }
}

loc_8046D8A4:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32(r3, r0);
}

loc_8046D8AC:
{
    r12 = 0x80570000u;
    r12 = (r12 + 15488);
    guest_range_1 = MemoryInline::ResolveRangeHost(r12, 0, 40u, true, false);
    r11 = MemoryInline::ReadResolved32(guest_range_1, 0u, r12);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8046D8B8:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + 8), r11);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 4u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r12 + 4));
            r9 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r12 + 8));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 12u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r12 + 12));
            r7 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r12 + 16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 20u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r12 + 20));
            r5 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r12 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 28u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r12 + 28));
            r3 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r12 + 32));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r12 + 36));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r1 + 12), r10);
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r1 + 16), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r1 + 20), r8);
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r1 + 24), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r1 + 28), r6);
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r1 + 32), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r1 + 36), r4);
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r1 + 40), r3);
    }
    MemoryInline::WriteResolved32(guest_range_3, 36u, (r1 + 44), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8046D920;
    }
}

loc_8046D908:
{
    r3 = 2090795008;
    r0 = 0x90830000u;
    r3 = (r3 + -1370);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    goto loc_8046D934;
}

loc_8046D920:
{
    r3 = 2090795008;
    r4 = 0x80830000u;
    r0 = (r3 + -1114);
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
}

loc_8046D934:
{
    r3 = r29;
    r5 = r30;
    r4 = (r1 + 8);
    ctx->lr = 0x8046D944u;
    if constexpr (KnownRegArgsCpuCall<0x8046D980u>(&func_8046D980)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        const auto regargs_result_8046D980_4480 = func_8046D980_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8046D980_4480);
        r4 = static_cast<uint32_t>(regargs_result_8046D980_4480 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8046D980u>(ctx);
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
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8046D948:
{
    r31 = r3;
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8046D968;
    }
}

loc_8046D950:
{
    r4 = MemoryInline::FlatRead32(r29);
    r3 = -1;
    r0 = 0;
    r3 = (r4 & r3);
    MemoryInline::FlatWrite32((r29 + 4), r3);
    MemoryInline::FlatWrite32(r29, r0);
}

loc_8046D968:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8046D7B8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046D7B8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8046D7B8 func_8046D7B8 preserves=true fpr_mask=0x00000000
