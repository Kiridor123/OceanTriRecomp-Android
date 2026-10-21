#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_800D6EB0_ra18_0_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    MKW_GUEST_ENTER(0x800D6EB0u);
    goto loc_800D6EB0;

loc_800D6EB0:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 32u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r3, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r2 + -30424));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f3.d);
    }
    f1.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f3.d);
    }
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f3.d);
    }
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30420));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 28), f0.d);
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return f1.d;
}

}

extern "C" void func_800D6EB0(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_800D6EB0_ra18_0_0_2(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D6EB0 func_800D6EB0 preserves=true fpr_mask=0x00000000
