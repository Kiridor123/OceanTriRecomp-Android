#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005001C(CpuContext* ctx);
extern "C" double func_8005001C_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802BB008_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x802BB008u);
    goto loc_802BB008;

loc_802BB008:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r4;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    f0.d = MemoryInline::FlatReadFloat32((r31 + 56));
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 96), 0, 32u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r30 + 112), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r30 + 96), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 60));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r30 + 116), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r30 + 100), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 64));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r30 + 120), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r30 + 104), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r30 + 124), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r30 + 108), f0.d);
    r3 = (r1 + 8);
    r4 = (r31 + 76);
    if constexpr (KnownRegArgsCpuCall<0x8005001Cu>(&func_8005001C)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_8005001C_807 = func_8005001C_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_8005001C_807;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8005001Cu>(ctx);
        f1 = ctx->fpr[1];
    }
    r3 = (r30 + 156);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r4 = r3;
    r3 = (r30 + 132);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 66), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 67), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 128), static_cast<uint8_t>(r0));
    r0 = -1;
    MemoryInline::FlatWrite8((r30 + 85), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802BB008(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802BB008_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802BB008 func_802BB008 preserves=true fpr_mask=0x00000000
