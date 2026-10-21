#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802D2BD4(CpuContext* ctx);
extern "C" uint64_t func_802D2BD4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_809FE2A0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    MKW_GUEST_ENTER(0x809FE2A0u);
    goto loc_809FE2A0;

loc_809FE2A0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r30 = r3;
    r31 = r4;
    r3 = (r1 + 20);
    // inline leaf 0x809EA85C (1 guest instruction(s))
    // end of inlined leaf 0x809EA85C
    r3 = (r1 + 8);
    // inline leaf 0x809EA85C (1 guest instruction(s))
    // end of inlined leaf 0x809EA85C
    r3 = r31;
    r4 = 8;
    r5 = (r1 + 20);
    ctx->lr = 0x809FE2DCu;
    if constexpr (KnownRegArgsCpuCall<0x802D2BD4u>(&func_802D2BD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_802D2BD4_56C = func_802D2BD4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D2BD4_56C);
        r4 = static_cast<uint32_t>(regargs_result_802D2BD4_56C >> 32);
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
        InvokeDirectCpu<0x802D2BD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
    }
    r3 = r31;
    r4 = 12;
    r5 = (r1 + 8);
    ctx->lr = 0x809FE2ECu;
    if constexpr (KnownRegArgsCpuCall<0x802D2BD4u>(&func_802D2BD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_802D2BD4_90C = func_802D2BD4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D2BD4_90C);
        r4 = static_cast<uint32_t>(regargs_result_802D2BD4_90C >> 32);
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
        InvokeDirectCpu<0x802D2BD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
    }
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r1 + 20));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    r3 = 0x80A20000u;
    f3.d = MemoryInline::FlatReadFloat32((r3 + -5932));
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 24), f0.d);
    r3 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + -5968));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 84));
    f2.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r1 + 24));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r1 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r1 + 28));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001DE gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809FE2A0 func_809FE2A0 preserves=true fpr_mask=0x00000000
