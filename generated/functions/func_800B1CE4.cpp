#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005AB6C(CpuContext* ctx);
extern "C" uint64_t func_8005AB6C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800A30A8(CpuContext* ctx);
extern "C" uint64_t func_800A30A8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800A3440(CpuContext* ctx);
extern "C" uint64_t func_800A3440_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800A8364(CpuContext* ctx);
extern "C" uint64_t func_800A8364_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800AF4A4(CpuContext* ctx);
extern "C" uint64_t func_800AF4A4_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_800B1954(CpuContext* ctx);
extern "C" uint64_t func_800B1954_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_800B1CE4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_800B23E8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r21 = ctx->gpr[21];
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
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800B1CE4;

loc_800B1CE4:
{
    MemoryInline::FlatWriteRam32((r1 + -448), r1);
    r1 = (r1 + -448);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 452), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 432), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 440);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 432);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r23 = r3;
    r30 = r4;
    r24 = r5;
    r25 = r6;
    r22 = r7;
    r21 = r8;
    r26 = r9;
    r27 = r10;
    r28 = MemoryInline::FlatRead32((r1 + 456));
    r29 = MemoryInline::FlatRead32((r1 + 460));
    r3 = (r1 + 336);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 336);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    r3 = (r1 + 336);
    r4 = r30;
    r5 = r3;
    ctx->lr = 0x800B1D48u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009CC84u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    r3 = (r1 + 288);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 288);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 20));
    ctx->lr = 0x800B1D64u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009CA94u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    r3 = (r1 + 336);
    r4 = (r1 + 288);
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    r3 = (r1 + 336);
    r4 = (r30 + 24);
    r5 = r3;
    ctx->lr = 0x800B1D84u;
    if constexpr (KnownRegArgsCpuCall<0x8005AB6Cu>(&func_8005AB6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        const auto regargs_result_8005AB6C_1D9C = func_8005AB6C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005AB6C_1D9C);
        r4 = static_cast<uint32_t>(regargs_result_8005AB6C_1D9C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8005AB6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead16((r24 + 44));
    r0 = (r0 & 1);
}

loc_800B1D90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B1DB8;
    }
}

loc_800B1D94:
{
    r3 = (r1 + 128);
    f1.d = MemoryInline::FlatReadFloat32((r22 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r22 + 28));
    f3.d = MemoryInline::FlatReadFloat32((r22 + 44));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = (r1 + 336);
    r4 = (r1 + 128);
    r5 = r3;
    ctx->lr = 0x800B1DB8u;
    if constexpr (KnownRegArgsCpuCall<0x8005AB6Cu>(&func_8005AB6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        const auto regargs_result_8005AB6C_26B7 = func_8005AB6C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005AB6C_26B7);
        r4 = static_cast<uint32_t>(regargs_result_8005AB6C_26B7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8005AB6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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

loc_800B1DB8:
{
    r3 = (r1 + 336);
    r4 = r21;
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    r3 = (r1 + 240);
    r4 = (r1 + 336);
    // inline leaf 0x800A8A04 (25 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, r3, r5);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r3 + 4), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r4 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r3 + 8), r5);
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r3 + 12), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r4 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r4 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r3 + 16), r5);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r3 + 20), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r4 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r4 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r3 + 24), r5);
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r3 + 28), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r4 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r4 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r3 + 32), r5);
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r3 + 36), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r4 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r4 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r3 + 40), r5);
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r3 + 44), r0);
    }
    // end of inlined leaf 0x800A8A04
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31152));
    MemoryInline::FlatWriteRamFloat32((r1 + 252), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 268), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 284), f0.d);
    r3 = (r1 + 192);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 192);
    r4 = (r1 + 336);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80088428u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r1 + 144);
    r4 = (r1 + 192);
    // inline leaf 0x800A8A04 (25 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost(r4, 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r4 + 4));
        }
    }
    guest_range_5 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 0u, r3, r5);
        MemoryInline::WriteResolved32(guest_range_5, 4u, (r3 + 4), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r4 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r4 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 8u, (r3 + 8), r5);
        MemoryInline::WriteResolved32(guest_range_5, 12u, (r3 + 12), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r4 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r4 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 16u, (r3 + 16), r5);
        MemoryInline::WriteResolved32(guest_range_5, 20u, (r3 + 20), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r4 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r4 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 24u, (r3 + 24), r5);
        MemoryInline::WriteResolved32(guest_range_5, 28u, (r3 + 28), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r4 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r4 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 32u, (r3 + 32), r5);
        MemoryInline::WriteResolved32(guest_range_5, 36u, (r3 + 36), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 40u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r4 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r4 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 40u, (r3 + 40), r5);
        MemoryInline::WriteResolved32(guest_range_5, 44u, (r3 + 44), r0);
    }
    // end of inlined leaf 0x800A8A04
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31152));
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 172), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 188), f0.d);
    r3 = (r1 + 116);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 116);
    r4 = (r1 + 192);
    r5 = r26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    r3 = MemoryInline::FlatRead8((r24 + 41));
    r4 = (r1 + 116);
    r5 = MemoryInline::FlatRead8((r24 + 42));
    ctx->lr = 0x800B1E3Cu;
    if constexpr (KnownRegArgsCpuCall<0x800AF4A4u>(&func_800AF4A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_800AF4A4_558A = func_800AF4A4_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_800AF4A4_558A);
        r4 = static_cast<uint32_t>(regargs_result_800AF4A4_558A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x800AF4A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r31 = (r3 & 255);
    r30 = MemoryInline::FlatRead8((r23 + 157));
    MemoryInline::FlatWrite8((r23 + 157), static_cast<uint8_t>(r31));
    r3 = r28;
    // inline leaf 0x80050F40 (6 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80050F40
    r0 = MemoryInline::FlatRead8((r24 + 40));
}

loc_800B1E58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800B1E68;
    }
}

loc_800B1E5C:
{
}

loc_800B1E60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800B1E98;
    }
}

loc_800B1E64:
{
    f0.d = PPC_PsToScalarInline(f0.d);
    f1.d = PPC_PsToScalarInline(f1.d);
    goto loc_800B1EB0;
}

loc_800B1E68:
{
    f0.d = MemoryInline::FlatReadFloat32((r24 + 36));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_800B1E74:
{
    if (((cr & 0x40000000u) == 0)) {
        f1.d = PPC_PsToScalarInline(f1.d);
        goto loc_800B1EB0;
    }
}

loc_800B1E78:
{
    r3 = r28;
    r4 = r28;
    ctx->lr = 0x800B1E84u;
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
    ctx->fpr[0] = f0;
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
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    InvokeDirectCpu<0x8009C4E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
    r3 = r28;
    r4 = r28;
    f1.d = MemoryInline::FlatReadFloat32((r24 + 36));
    // inline leaf 0x80051488 (7 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1, f0.d);
    // end of inlined leaf 0x80051488
    f0.d = PPC_PsToScalarInline(f0.d);
    goto loc_800B1EB0;
}

loc_800B1E98:
{
    f0.d = MemoryInline::FlatReadFloat32((r24 + 36));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_800B1EA4:
{
    if (((cr & 0x40000000u) == 0)) {
        f1.d = PPC_PsToScalarInline(f1.d);
        goto loc_800B1EB0;
    }
}

loc_800B1EA8:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_800B1EB0:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_800B1EB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B1EC4;
    }
}

loc_800B1EBC:
{
    r3 = 1;
    goto loc_800B23E4;
}

loc_800B1EC4:
{
    r3 = MemoryInline::FlatRead16((r23 + 220));
    guest_range_1 = MemoryInline::ResolveRangeHost((r24 + 36), 0, 24u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r24 + 46));
}

loc_800B1ED0:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_800B1EDC;
    }
}

loc_800B1ED4:
{
    r3 = 1;
    goto loc_800B23E4;
}

loc_800B1EDC:
{
    r3 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r24 + 44));
}

loc_800B1EE4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800B1EF0;
    }
}

loc_800B1EE8:
{
    r3 = 1;
    goto loc_800B23E4;
}

loc_800B1EF0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r24 + 43));
}

loc_800B1EF8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_800B1F08;
    }
}

loc_800B1EFC:
{
}

loc_800B1F00:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_800B1F18;
    }
}

loc_800B1F04:
{
    goto loc_800B20BC;
}

loc_800B1F08:
{
}

loc_800B1F0C:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(2))) {
        goto loc_800B1F18;
    }
}

loc_800B1F10:
{
    r3 = 1;
    goto loc_800B23E4;
}

loc_800B1F18:
{
}

loc_800B1F1C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800B1F30;
    }
}

loc_800B1F20:
{
}

loc_800B1F24:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(3))) {
        goto loc_800B1F30;
    }
}

loc_800B1F28:
{
    r3 = 1;
    goto loc_800B23E4;
}

loc_800B1F30:
{
    r0 = (r3 & 8);
}

loc_800B1F38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B200C;
    }
}

loc_800B1F3C:
{
    f1.d = MemoryInline::FlatReadFloat32(r27);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r24 + 48));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r27 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r24 + 52));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r27 + 4), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r27 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r24 + 56));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r27 + 8), f0.d);
    f1.d = MemoryInline::FlatReadFloat32(r28);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r24 + 48));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32(r28, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r24 + 52));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 4), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r24 + 56));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 8), f0.d);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r24 + 40));
}

loc_800B1FA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800B1FB4;
    }
}

loc_800B1FA8:
{
}

loc_800B1FAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800B1FEC;
    }
}

loc_800B1FB0:
{
    goto loc_800B200C;
}

loc_800B1FB4:
{
    r3 = r28;
    // inline leaf 0x80050F40 (6 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80050F40
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r24 + 36));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_800B1FC8:
{
    if (((cr & 0x40000000u) == 0)) {
        f1.d = PPC_PsToScalarInline(f1.d);
        goto loc_800B200C;
    }
}

loc_800B1FCC:
{
    r3 = r28;
    r4 = r28;
    ctx->lr = 0x800B1FD8u;
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
    ctx->fpr[0] = f0;
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
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    InvokeDirectCpu<0x8009C4E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
    r3 = r28;
    r4 = r28;
    f1.d = MemoryInline::FlatReadFloat32((r24 + 36));
    // inline leaf 0x80051488 (7 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_5 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_5));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5, f0.d);
    // end of inlined leaf 0x80051488
    f0.d = PPC_PsToScalarInline(f0.d);
    goto loc_800B200C;
}

loc_800B1FEC:
{
    r3 = r28;
    // inline leaf 0x80050F40 (6 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80050F40
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r24 + 36));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_800B2000:
{
    if (((cr & 0x40000000u) == 0)) {
        f1.d = PPC_PsToScalarInline(f1.d);
        goto loc_800B200C;
    }
}

loc_800B2004:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_800B200C:
{
    r0 = MemoryInline::FlatRead16((r24 + 44));
    r0 = (r0 & 64);
}

loc_800B2018:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B2024;
    }
}

loc_800B201C:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
}

loc_800B2024:
{
    r0 = MemoryInline::FlatRead16((r24 + 44));
    r0 = (r0 & 16);
}

loc_800B2030:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B206C;
    }
}

loc_800B2034:
{
}

loc_800B2038:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_800B206C;
    }
}

loc_800B203C:
{
    r3 = MemoryInline::FlatRead32((r23 + 200));
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r3 = MemoryInline::FlatRead32((r3 + 188));
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r3 + 16);
    r4 = (r24 + 60);
    r5 = r23;
    r6 = r25;
    r7 = MemoryInline::FlatRead16((r23 + 226));
    r8 = 0;
    r9 = 0;
    ctx->lr = 0x800B206Cu;
    if constexpr (KnownRegArgsCpuCall<0x800A30A8u>(&func_800A30A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800A30A8_8ED9 = func_800A30A8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800A30A8_8ED9);
        r4 = static_cast<uint32_t>(regargs_result_800A30A8_8ED9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
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
        InvokeDirectCpu<0x800A30A8u>(ctx);
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
        f0 = ctx->fpr[0];
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
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800B206C:
{
    r0 = MemoryInline::FlatRead16((r24 + 44));
    r0 = (r0 & 32);
}

loc_800B2078:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B20B4;
    }
}

loc_800B207C:
{
}

loc_800B2080:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_800B20B4;
    }
}

loc_800B2084:
{
    r3 = MemoryInline::FlatRead32((r23 + 200));
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r3 = MemoryInline::FlatRead32((r3 + 188));
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r3 + 16);
    r4 = (r24 + 60);
    r5 = r23;
    r6 = r25;
    r7 = MemoryInline::FlatRead16((r23 + 226));
    r8 = 0;
    r9 = 0;
    ctx->lr = 0x800B20B4u;
    if constexpr (KnownRegArgsCpuCall<0x800A3440u>(&func_800A3440)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800A3440_9B7E = func_800A3440_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800A3440_9B7E);
        r4 = static_cast<uint32_t>(regargs_result_800A3440_9B7E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
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
        InvokeDirectCpu<0x800A3440u>(ctx);
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
        f0 = ctx->fpr[0];
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
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800B20B4:
{
    r3 = 1;
    goto loc_800B23E4;
}

loc_800B20BC:
{
    r3 = (r1 + 104);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    f1.d = MemoryInline::FlatReadFloat32(r27);
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r23 + 196));
    f1.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r26);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r27 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r27 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f0.d);
    r3 = (r1 + 104);
    r4 = (r1 + 192);
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    r3 = (r1 + 92);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 92);
    r4 = (r1 + 144);
    r5 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    r21 = 0;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -31108));
    r22 = (r1 + 80);
    r28 = (r1 + 68);
    r27 = (r1 + 56);
    r26 = (r1 + 44);
}

loc_800B215C:
{
    r3 = (r1 + 80);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 68);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 56);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 44);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 116);
    r4 = (r1 + 104);
    ctx->lr = 0x800B2188u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x800A8364u>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_800B218C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800B2198;
    }
}

loc_800B2190:
{
    r3 = 0;
    goto loc_800B21E8;
}

loc_800B2198:
{
    r3 = MemoryInline::FlatRead32((r1 + 92));
    r0 = MemoryInline::FlatRead32((r1 + 96));
    guest_range_7 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_7, 24u, (r1 + 32), r3);
        MemoryInline::WriteResolved32(guest_range_7, 28u, (r1 + 36), r0);
    }
    r0 = MemoryInline::FlatRead32((r1 + 100));
    MemoryInline::WriteResolved32(guest_range_7, 32u, (r1 + 40), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_7, 0u, (r1 + 8), r29);
        MemoryInline::WriteResolved32(guest_range_7, 4u, (r1 + 12), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_7, 8u, (r1 + 16), r28);
        MemoryInline::WriteResolved32(guest_range_7, 12u, (r1 + 20), r27);
    }
    MemoryInline::WriteResolved32(guest_range_7, 16u, (r1 + 24), r26);
    r3 = (r1 + 336);
    r4 = (r1 + 240);
    r5 = r24;
    r6 = r25;
    r7 = r23;
    r8 = (r1 + 116);
    r9 = (r1 + 104);
    r10 = (r1 + 32);
    ctx->lr = 0x800B21E8u;
    if constexpr (KnownRegArgsCpuCall<0x800B1954u>(&func_800B1954)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800B1954_B825 = func_800B1954_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800B1954_B825);
        r4 = static_cast<uint32_t>(regargs_result_800B1954_B825 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
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
        InvokeDirectCpu<0x800B1954u>(ctx);
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
        f0 = ctx->fpr[0];
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
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800B21E8:
{
}

loc_800B21EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800B225C;
    }
}

loc_800B21F0:
{
    r3 = (r23 + 172);
    r4 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r23 + 160);
    r4 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead8((r23 + 157));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite8((r23 + 157), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8(r29);
}

loc_800B221C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B2228;
    }
}

loc_800B2220:
{
    r3 = 0;
    goto loc_800B23E4;
}

loc_800B2228:
{
    r31 = 1;
    r3 = (r1 + 116);
    r4 = (r1 + 80);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 104);
    r4 = (r1 + 192);
    r5 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    r3 = (r1 + 92);
    r4 = (r1 + 144);
    r5 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    goto loc_800B23CC;
}

loc_800B225C:
{
}

loc_800B2260:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(0))) {
        goto loc_800B2354;
    }
}

loc_800B2264:
{
    r3 = MemoryInline::FlatRead16((r23 + 220));
    r0 = MemoryInline::FlatRead16((r24 + 46));
}

loc_800B2270:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_800B234C;
    }
}

loc_800B2274:
{
}

loc_800B2278:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(2))) {
        goto loc_800B228C;
    }
}

loc_800B227C:
{
}

loc_800B2280:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(3))) {
        goto loc_800B22A4;
    }
}

loc_800B2284:
{
}

loc_800B2288:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(1))) {
        goto loc_800B22A4;
    }
}

loc_800B228C:
{
}

loc_800B2290:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(3))) {
        goto loc_800B234C;
    }
}

loc_800B2294:
{
    r0 = (r31 + 255);
    r0 = (r0 & 255);
}

loc_800B22A0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_800B234C;
    }
}

loc_800B22A4:
{
    r0 = MemoryInline::FlatRead16((r24 + 44));
    r0 = (r0 & 64);
}

loc_800B22B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B22BC;
    }
}

loc_800B22B4:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
}

loc_800B22BC:
{
    r0 = MemoryInline::FlatRead16((r24 + 44));
    r0 = (r0 & 16);
}

loc_800B22C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B2304;
    }
}

loc_800B22CC:
{
}

loc_800B22D0:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_800B2304;
    }
}

loc_800B22D4:
{
    r3 = MemoryInline::FlatRead32((r23 + 200));
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r3 = MemoryInline::FlatRead32((r3 + 188));
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r3 + 16);
    r4 = (r24 + 60);
    r5 = r23;
    r6 = r25;
    r7 = MemoryInline::FlatRead16((r23 + 226));
    r8 = 0;
    r9 = 0;
    ctx->lr = 0x800B2304u;
    if constexpr (KnownRegArgsCpuCall<0x800A30A8u>(&func_800A30A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800A30A8_D04E = func_800A30A8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800A30A8_D04E);
        r4 = static_cast<uint32_t>(regargs_result_800A30A8_D04E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
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
        InvokeDirectCpu<0x800A30A8u>(ctx);
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
        f0 = ctx->fpr[0];
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
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800B2304:
{
    r0 = MemoryInline::FlatRead16((r24 + 44));
    r0 = (r0 & 32);
}

loc_800B2310:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B234C;
    }
}

loc_800B2314:
{
}

loc_800B2318:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_800B234C;
    }
}

loc_800B231C:
{
    r3 = MemoryInline::FlatRead32((r23 + 200));
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r3 = MemoryInline::FlatRead32((r3 + 188));
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r3 + 16);
    r4 = (r24 + 60);
    r5 = r23;
    r6 = r25;
    r7 = MemoryInline::FlatRead16((r23 + 226));
    r8 = 0;
    r9 = 0;
    ctx->lr = 0x800B234Cu;
    if constexpr (KnownRegArgsCpuCall<0x800A3440u>(&func_800A3440)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800A3440_DCF3 = func_800A3440_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800A3440_DCF3);
        r4 = static_cast<uint32_t>(regargs_result_800A3440_DCF3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
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
        InvokeDirectCpu<0x800A3440u>(ctx);
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
        f0 = ctx->fpr[0];
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
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800B234C:
{
    r3 = 1;
    goto loc_800B23E4;
}

loc_800B2354:
{
    r0 = MemoryInline::FlatRead8((r24 + 40));
}

loc_800B235C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800B236C;
    }
}

loc_800B2360:
{
}

loc_800B2364:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800B23A4;
    }
}

loc_800B2368:
{
    goto loc_800B23C4;
}

loc_800B236C:
{
    r3 = (r23 + 160);
    // inline leaf 0x80050F40 (6 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80050F40
    f0.d = MemoryInline::FlatReadFloat32((r24 + 36));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_800B2380:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B23C4;
    }
}

loc_800B2384:
{
    r3 = (r23 + 160);
    r4 = r3;
    ctx->lr = 0x800B2390u;
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
    ctx->fpr[0] = f0;
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
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    InvokeDirectCpu<0x8009C4E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
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
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r23 + 160);
    r4 = r3;
    f1.d = MemoryInline::FlatReadFloat32((r24 + 36));
    // inline leaf 0x80051488 (7 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3, f0.d);
    // end of inlined leaf 0x80051488
    goto loc_800B23C4;
}

loc_800B23A4:
{
    r3 = (r23 + 160);
    // inline leaf 0x80050F40 (6 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80050F40
    f0.d = MemoryInline::FlatReadFloat32((r24 + 36));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_800B23B8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800B23C4;
    }
}

loc_800B23BC:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
}

loc_800B23C4:
{
    r3 = 0;
    goto loc_800B23E4;
}

loc_800B23CC:
{
    r21 = (r21 + 1);
}

loc_800B23D4:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(5))) {
        goto loc_800B215C;
    }
}

loc_800B23D8:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    r3 = 0;
}

loc_800B23E4:
{
    r0 = 440;
    addr_psqx_800B23E8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800B23E8_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 432));
    r11 = (r1 + 432);
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_6 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryInline::FlatRead32((r1 + 452));
    ctx->lr = r0;
    r1 = (r1 + 448);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
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

extern "C" void func_800B1CE4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800B1CE4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF003FFF fpr_write=0xFF003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800B1CE4 func_800B1CE4 preserves=true fpr_mask=0x00000000
