#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80040370(CpuContext* ctx);
extern "C" uint32_t func_80040370_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_80055F28(CpuContext* ctx);
extern "C" uint64_t func_80055F28_rac8_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80056E80(CpuContext* ctx);
extern "C" uint64_t func_80056E80_rac8_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80057918(CpuContext* ctx);
extern "C" uint64_t func_80057918_rac8_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8005855C_rac0_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r6, uint32_t arg_r7)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r7 = arg_r7;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x8005855Cu);
    goto loc_8005855C;

loc_8005855C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = 0x80670000u;
    r3 = (r30 + -11912);
    r4 = 0;
    r5 = 332;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r31 = (r30 + -11912);
    r3 = (r31 + 288);
    if constexpr (KnownRegArgsCpuCall<0x80040370u>(&func_80040370)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        const auto regargs_result_80040370_703 = func_80040370_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_80040370_703;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x80040370u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
    }
    r3 = (r31 + 296);
    // inline leaf 0x80040354 (7 guest instruction(s))
    r4 = 0x80660000u;
    r4 = (r4 + -19268);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x80040354
    r3 = 1179648;
    r0 = (r3 + -32768);
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 1), 0, 315u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 303u, (r31 + 304), r0);
    r3 = 0x90B50000u;
    r0 = (r3 + -32768);
    MemoryInline::WriteResolved32(guest_range_0, 307u, (r31 + 308), r0);
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r31 + 4), static_cast<uint8_t>(r0));
    r0 = 0x90E30000u;
    MemoryInline::WriteResolved32(guest_range_0, 311u, (r31 + 312), r0);
    r0 = 4;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r31 + 1), static_cast<uint8_t>(r0));
    r30 = 1;
    r0 = (r30 | 2);
    r0 = (r0 | 4);
    r0 = (r0 | 8);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r31 + 2), static_cast<uint8_t>(r0));
    r3 = 0x80050000u;
    r0 = (r3 + 24508);
    MemoryInline::WriteResolved32(guest_range_0, 15u, (r31 + 16), r0);
    r3 = 0x80050000u;
    r0 = (r3 + 28552);
    MemoryInline::WriteResolved32(guest_range_0, 19u, (r31 + 20), r0);
    r3 = 0x80050000u;
    r0 = (r3 + 31240);
    MemoryInline::WriteResolved32(guest_range_0, 23u, (r31 + 24), r0);
    r3 = (r31 + 60);
    MemoryInline::WriteResolved32(guest_range_0, 39u, (r31 + 40), r3);
    r0 = (r31 + 116);
    MemoryInline::WriteResolved32(guest_range_0, 43u, (r31 + 44), r0);
    r0 = (r31 + 176);
    MemoryInline::WriteResolved32(guest_range_0, 47u, (r31 + 48), r0);
    ctx->lr = 0x8005861Cu;
    if constexpr (KnownRegArgsCpuCall<0x80055F28u>(&func_80055F28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        const auto regargs_result_80055F28_10FC = func_80055F28_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80055F28_10FC);
        r4 = static_cast<uint32_t>(regargs_result_80055F28_10FC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x80055F28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    }
    r3 = (r31 + 116);
    ctx->lr = 0x80058624u;
    if constexpr (KnownRegArgsCpuCall<0x80056E80u>(&func_80056E80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        const auto regargs_result_80056E80_153D = func_80056E80_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80056E80_153D);
        r4 = static_cast<uint32_t>(regargs_result_80056E80_153D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x80056E80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    }
    r3 = (r31 + 176);
    ctx->lr = 0x8005862Cu;
    if constexpr (KnownRegArgsCpuCall<0x80057918u>(&func_80057918)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        const auto regargs_result_80057918_197E = func_80057918_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80057918_197E);
        r4 = static_cast<uint32_t>(regargs_result_80057918_197E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x80057918u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    }
    MemoryInline::FlatWriteRam8((r31 + 5), static_cast<uint8_t>(r30));
    r0 = 2;
    MemoryInline::FlatWriteRam8((r31 + 6), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWriteRam8((r31 + 7), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32304));
    MemoryInline::FlatWriteRamFloat32((r31 + 328), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8005855C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8005855C_rac0_0_18_0(ctx, ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000C6 gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8005855C func_8005855C preserves=true fpr_mask=0x00000000
