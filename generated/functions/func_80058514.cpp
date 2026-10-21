#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80056F68(CpuContext* ctx);
extern "C" uint64_t func_80056F68_ra40_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80057990(CpuContext* ctx);
extern "C" uint64_t func_80057990_rac0_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80058514_rac0_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r6, uint32_t arg_r7)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r6 = arg_r6;
    uint32_t r7 = arg_r7;
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x80058514u);
    goto loc_80058514;

loc_80058514:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x80056A30 (21 guest instruction(s))
    r3 = 0x80670000u;
    r4 = (r3 + -11912);
    r3 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 60), 0, 34u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r4 + 60), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r4 + 61), static_cast<uint8_t>(r3));
    r0 = 128;
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r4 + 62), static_cast<uint8_t>(r0));
    r0 = 32;
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r4 + 63), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32392));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r4 + 68), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r4 + 72), f0.d);
    }
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r4 + 83), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r4 + 82), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r4 + 81), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r4 + 80), static_cast<uint8_t>(r3));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + 84), r3);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 88), r3);
    }
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r4 + 92), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 33u, (r4 + 93), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x80056A30
    if constexpr (KnownRegArgsCpuCall<0x80056F68u>(&func_80056F68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80056F68_BAC = func_80056F68_ra40_0_18_0(ctx, r6);
        r3 = static_cast<uint32_t>(regargs_result_80056F68_BAC);
        r4 = static_cast<uint32_t>(regargs_result_80056F68_BAC >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80056F68u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
    }
    ctx->lr = 0x8005852Cu;
    if constexpr (KnownRegArgsCpuCall<0x80057990u>(&func_80057990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80057990_E94 = func_80057990_rac0_0_18_0(ctx, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80057990_E94);
        r4 = static_cast<uint32_t>(regargs_result_80057990_E94 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x80057990u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80058514(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80058514_rac0_0_18_0(ctx, ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000C6 gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80058514 func_80058514 preserves=true fpr_mask=0x00000000
