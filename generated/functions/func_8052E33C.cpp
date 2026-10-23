#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80504690(CpuContext* ctx);
extern "C" uint64_t func_80504690_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_805051CC(CpuContext* ctx);
extern "C" uint64_t func_805051CC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8052B6AC(CpuContext* ctx);
extern "C" uint32_t func_8052B6AC_ra28_2_8_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_8052E6C0(CpuContext* ctx);
extern "C" uint64_t func_8052E6C0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8052E33C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8052E33C;

loc_8052E33C:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1312));
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    r0 = MemoryInline::FlatRead32((r4 + 228));
    r31 = r5;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 232));
    r30 = r4;
    f2.d = MemoryInline::FlatReadFloat32((r4 + 236));
    r29 = r3;
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    r3 = r31;
    MemoryInline::FlatWriteFloat32((r5 + 44), f0.d);
    MemoryInline::FlatWriteFloat32((r5 + 48), f0.d);
    MemoryInline::FlatWrite32((r5 + 72), r0);
    ctx->lr = 0x8052E394u;
    if constexpr (KnownRegArgsCpuCall<0x80504690u>(&func_80504690)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80504690_BC3 = func_80504690_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80504690_BC3);
        r4 = static_cast<uint32_t>(regargs_result_80504690_BC3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        InvokeDirectCpu<0x80504690u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead32((r30 + 248));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 240));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 244));
}

loc_8052E3A4:
{
    MemoryInline::FlatWriteFloat32((r31 + 84), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 80), f1.d);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8052E3B4;
    }
}

loc_8052E3B0:
{
    MemoryInline::FlatWrite32((r31 + 96), r0);
}

loc_8052E3B4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 100u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r31);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 76));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 32), 0, 100u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r1 + 32), static_cast<uint8_t>(r0));
    r6 = MemoryInline::FlatRead16((r30 + 254));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r31 + 1));
    r5 = MemoryInline::FlatRead32((r30 + 216));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r1 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r31 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r1 + 34), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r31 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r1 + 35), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r31 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r1 + 36), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r31 + 5));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r1 + 37), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r31 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r1 + 38), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r31 + 7));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r1 + 39), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r31 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r1 + 40), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r31 + 9));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r1 + 41), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r31 + 10));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r1 + 42), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r31 + 11));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r1 + 43), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r31 + 12));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r1 + 44), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r31 + 13));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r1 + 45), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r31 + 14));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r1 + 46), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r31 + 15));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r1 + 47), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r31 + 16));
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r1 + 48), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 17u, (r31 + 17));
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r1 + 49), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r31 + 18));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r1 + 50), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 19u, (r31 + 19));
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r1 + 51), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r31 + 20));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r1 + 52), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 21u, (r31 + 21));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r1 + 53), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 22u, (r31 + 22));
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r1 + 54), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 23u, (r31 + 23));
    MemoryInline::WriteResolved8(guest_range_1, 23u, (r1 + 55), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r31 + 24));
    MemoryInline::WriteResolved8(guest_range_1, 24u, (r1 + 56), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 25u, (r31 + 25));
    MemoryInline::WriteResolved8(guest_range_1, 25u, (r1 + 57), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 26u, (r31 + 26));
    MemoryInline::WriteResolved8(guest_range_1, 26u, (r1 + 58), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 27u, (r31 + 27));
    MemoryInline::WriteResolved8(guest_range_1, 27u, (r1 + 59), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 28u, (r31 + 28));
    MemoryInline::WriteResolved8(guest_range_1, 28u, (r1 + 60), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 29u, (r31 + 29));
    MemoryInline::WriteResolved8(guest_range_1, 29u, (r1 + 61), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 30u, (r31 + 30));
    MemoryInline::WriteResolved8(guest_range_1, 30u, (r1 + 62), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 31u, (r31 + 31));
    MemoryInline::WriteResolved8(guest_range_1, 31u, (r1 + 63), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r31 + 32));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 64), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 36u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r31 + 36));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r31 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 68), r3);
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 72), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 44u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r31 + 44));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r31 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 76), r3);
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r1 + 80), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r31 + 52));
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 84), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r31 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r31 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r1 + 88), r3);
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r1 + 92), r0);
    }
    r0 = MemoryInline::ReadResolved8(guest_range_0, 64u, (r31 + 64));
    MemoryInline::WriteResolved8(guest_range_1, 64u, (r1 + 96), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 65u, (r31 + 65));
    MemoryInline::WriteResolved8(guest_range_1, 65u, (r1 + 97), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 66u, (r31 + 66));
    MemoryInline::WriteResolved8(guest_range_1, 66u, (r1 + 98), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 67u, (r31 + 67));
    MemoryInline::WriteResolved8(guest_range_1, 67u, (r1 + 99), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r31 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r1 + 100), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 72u, (r31 + 72));
    MemoryInline::WriteResolved32(guest_range_1, 72u, (r1 + 104), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r31 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r1 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r31 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r1 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r31 + 84));
    r3 = r29;
    r4 = (r1 + 32);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 84u, (r1 + 116), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 88u, (r31 + 88));
    MemoryInline::WriteResolved32(guest_range_1, 88u, (r1 + 120), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r31 + 92));
    MemoryInline::WriteResolved32(guest_range_1, 92u, (r1 + 124), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r31 + 96));
    MemoryInline::WriteResolved32(guest_range_1, 96u, (r1 + 128), r0);
    ctx->lr = 0x8052E56Cu;
    if constexpr (KnownRegArgsCpuCall<0x8052E6C0u>(&func_8052E6C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8052E6C0_3B5E = func_8052E6C0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8052E6C0_3B5E);
        r4 = static_cast<uint32_t>(regargs_result_8052E6C0_3B5E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        InvokeDirectCpu<0x8052E6C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    }
    r3 = (r1 + 32);
    r4 = -1;
    ctx->lr = 0x8052E578u;
    if constexpr (KnownRegArgsCpuCall<0x805051CCu>(&func_805051CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_805051CC_42C5 = func_805051CC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_805051CC_42C5);
        r4 = static_cast<uint32_t>(regargs_result_805051CC_42C5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        InvokeDirectCpu<0x805051CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    }
    f3.d = MemoryInline::FlatReadFloat32((r29 + 12));
    r3 = r30;
    f2.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f0.d = MemoryInline::FlatReadFloat32(r29);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    if constexpr (KnownRegArgsCpuCall<0x8052B6ACu>(&func_8052B6AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8052B6AC_4C09 = func_8052B6AC_ra28_2_8_0(ctx, r3, r5, f1.d);
        r3 = regargs_result_8052B6AC_4C09;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8052B6ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r5 = 1431633920;
    r6 = MemoryInline::FlatRead8((r30 + 256));
    r0 = (r5 + 21846);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r5 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    r0 = (r5 + r0);
    r0 = (r0 * 3);
    r0 = (r6 - r0);
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8052E5D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052E5F8;
    }
}

loc_8052E5DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8052E5E4;
    }
}

loc_8052E5E0:
{
    goto loc_8052E5F0;
}

loc_8052E5E4:
{
}

loc_8052E5E8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_8052E5F0;
    }
}

loc_8052E5EC:
{
    goto loc_8052E600;
}

loc_8052E5F0:
{
    f3.d = MemoryInline::FlatReadFloat32((r2 + -1312));
    goto loc_8052E604;
}

loc_8052E5F8:
{
    f3.d = MemoryInline::FlatReadFloat32((r2 + -1296));
    goto loc_8052E604;
}

loc_8052E600:
{
    f3.d = MemoryInline::FlatReadFloat32((r2 + -1292));
}

loc_8052E604:
{
    r3 = 1431633920;
    f2.d = MemoryInline::FlatReadFloat32((r30 + 76));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r0 = (r3 + 21846);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r3 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8052E638:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052E65C;
    }
}

loc_8052E640:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8052E648;
    }
}

loc_8052E644:
{
    goto loc_8052E654;
}

loc_8052E648:
{
}

loc_8052E64C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_8052E654;
    }
}

loc_8052E650:
{
    goto loc_8052E664;
}

loc_8052E654:
{
    f5.d = MemoryInline::FlatReadFloat32((r2 + -1312));
    goto loc_8052E668;
}

loc_8052E65C:
{
    f5.d = MemoryInline::FlatReadFloat32((r2 + -1296));
    goto loc_8052E668;
}

loc_8052E664:
{
    f5.d = MemoryInline::FlatReadFloat32((r2 + -1292));
}

loc_8052E668:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 80));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32(r29, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f1.d = PpcFmulsInline(f3.d, f5.d);
    MemoryInline::FlatWriteFloat32((r29 + 8), f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteFloat32((r29 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 12), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8052E33C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8052E33C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x1FFFFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8052E33C func_8052E33C preserves=true fpr_mask=0x00000000
