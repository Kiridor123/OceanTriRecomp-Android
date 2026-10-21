#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80051884(CpuContext* ctx);
extern "C" uint64_t func_80051884_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800517A4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x800517A4u);
    goto loc_800517A4;

loc_800517A4:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r3 = (r1 + 44);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 44);
    r4 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    r3 = (r1 + 8);
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    r3 = (r1 + 20);
    r4 = (r1 + 44);
    r5 = (r1 + 8);
    ctx->lr = 0x80051810u;
    if constexpr (KnownRegArgsCpuCall<0x80051884u>(&func_80051884)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80051884_79F = func_80051884_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80051884_79F);
        r4 = static_cast<uint32_t>(regargs_result_80051884_79F >> 32);
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
        InvokeDirectCpu<0x80051884u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
    }
    r3 = (r1 + 32);
    r4 = (r1 + 20);
    r5 = (r1 + 44);
    ctx->lr = 0x80051820u;
    if constexpr (KnownRegArgsCpuCall<0x80051884u>(&func_80051884)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80051884_B4D = func_80051884_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80051884_B4D);
        r4 = static_cast<uint32_t>(regargs_result_80051884_B4D >> 32);
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
        InvokeDirectCpu<0x80051884u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
    }
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 68u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r1 + 44));
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 44u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r29, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r1 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r29 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r1 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r29 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r1 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r29 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r1 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r29 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r1 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r29 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r1 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r29 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r1 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r29 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r1 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r29 + 40), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800517A4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800517A4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x000007FF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800517A4 func_800517A4 preserves=true fpr_mask=0x00000000
