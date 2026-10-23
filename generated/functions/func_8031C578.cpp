#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DD024(CpuContext* ctx);
extern "C" uint64_t func_800DD024_ra70_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8033B3E4(CpuContext* ctx);
extern "C" uint64_t func_8033B3E4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8031C578_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_8031C578;

loc_8031C578:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = (r4 & 255);
}

loc_8031C594:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8031C5AC;
    }
}

loc_8031C598:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    r0 = 16;
    MemoryInline::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    goto loc_8031C5BC;
}

loc_8031C5AC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    r0 = 5;
    MemoryInline::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
}

loc_8031C5BC:
{
    r0 = MemoryInline::FlatRead8((r3 + 17));
}

loc_8031C5C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8031C5D8;
    }
}

loc_8031C5C8:
{
    r0 = 30;
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r0));
    ctx->lr = 0x8031C5D4u;
    if constexpr (KnownRegArgsCpuCall<0x800DD024u>(&func_800DD024)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800DD024_A0D = func_800DD024_ra70_1fe_18_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DD024_A0D);
        r4 = static_cast<uint32_t>(regargs_result_800DD024_A0D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DD024u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_8031C5E0;
}

loc_8031C5D8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r0));
}

loc_8031C5E0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 4), 0, 11u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r31 + 14));
}

loc_8031C5E8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8031C5F8;
    }
}

loc_8031C5EC:
{
}

loc_8031C5F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8031C620;
    }
}

loc_8031C5F4:
{
    goto loc_8031C644;
}

loc_8031C5F8:
{
    r3 = (r31 + 21);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r31 + 4));
            r5 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r31 + 6));
        }
    }
    r6 = 0;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 4u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r31 + 8));
            r8 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r31 + 10));
        }
    }
    ctx->lr = 0x8031C614u;
    if constexpr (KnownRegArgsCpuCall<0x8033B3E4u>(&func_8033B3E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8033B3E4_1702 = func_8033B3E4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8033B3E4_1702);
        r4 = static_cast<uint32_t>(regargs_result_8033B3E4_1702 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8033B3E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
    goto loc_8031C644;
}

loc_8031C620:
{
    r3 = (r31 + 21);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r31 + 4));
            r5 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r31 + 6));
        }
    }
    r6 = 2;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 4u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r31 + 8));
            r8 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r31 + 10));
        }
    }
    ctx->lr = 0x8031C63Cu;
    if constexpr (KnownRegArgsCpuCall<0x8033B3E4u>(&func_8033B3E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8033B3E4_1F66 = func_8033B3E4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8033B3E4_1F66);
        r4 = static_cast<uint32_t>(regargs_result_8033B3E4_1F66 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8033B3E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
}

loc_8031C644:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 22), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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

extern "C" void func_8031C578(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8031C578_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8031C578 func_8031C578 preserves=true fpr_mask=0x00000000
