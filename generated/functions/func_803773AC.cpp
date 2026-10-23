#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80427880(CpuContext* ctx);
extern "C" uint64_t func_80427880_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80427B6C(CpuContext* ctx);
extern "C" uint32_t func_80427B6C_ra0_0_8_0(CpuContext*);

extern "C" uint64_t func_803773AC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
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

    goto loc_803773AC;

loc_803773AC:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r30 = r3;
    ctx->lr = 0x803773C8u;
    if constexpr (KnownRegArgsCpuCall<0x80427B6Cu>(&func_80427B6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_80427B6C_674 = func_80427B6C_ra0_0_8_0(ctx);
        r3 = regargs_result_80427B6C_674;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80427B6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803773CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80377474;
    }
}

loc_803773D0:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 54;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r31 = (r1 + 8);
    r0 = 7;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    // inline leaf 0x803769CC (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + 1984);
    r3 = (r3 + 3);
    // end of inlined leaf 0x803769CC
    r4 = r3;
    r3 = (r31 + 4);
    r5 = 10;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 44), 0, 18u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r1 + 47), static_cast<uint8_t>(r30));
    r3 = 0x80660000u;
    r3 = (r3 + -19148);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 12), 0, 18u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 12));
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r1 + 44), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r1 + 48), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 13));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r1 + 45), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r3 + 18));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r1 + 50), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 14));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r1 + 46), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r3 + 20));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r1 + 52), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r3 + 22));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r1 + 54), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r3 + 24));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r1 + 56), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r3 + 26));
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r1 + 58), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r3 + 28));
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r1 + 60), static_cast<uint16_t>(r0));
    r3 = 0;
    r4 = r31;
    r5 = 54;
    ctx->lr = 0x80377474u;
    if constexpr (KnownRegArgsCpuCall<0x80427880u>(&func_80427880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80427880_14FA = func_80427880_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80427880_14FA);
        r4 = static_cast<uint32_t>(regargs_result_80427880_14FA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x80427880u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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

loc_80377474:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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

extern "C" void func_803773AC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803773AC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803773AC func_803773AC preserves=true fpr_mask=0x00000000
