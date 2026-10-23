#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8055C9B0_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];

    goto loc_8055C9B0;

loc_8055C9B0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -928), 0, 56u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -928));
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r0 = 0;
    r31 = r3;
    MemoryInline::FlatWrite8((r3 + 137), static_cast<uint8_t>(r0));
    r3 = (r1 + 40);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    // inline leaf 0x8055FE84 (9 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r2 + -896));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r2 + -892));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r2 + -888));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r2 + -884));
        }
    }
    MemoryInline::FlatWriteRamFloat32(r3, f3.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x8055FE84
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -928));
    r3 = (r1 + 24);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    // inline leaf 0x8055FEA8 (9 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 48u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r2 + -880));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r2 + -876));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r2 + -888));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r2 + -884));
        }
    }
    MemoryInline::FlatWriteRamFloat32(r3, f3.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x8055FEA8
    f3.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -924));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r3 = MemoryInline::FlatRead32((r31 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f4.d);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 68), f5.d);
    MemoryInline::FlatWriteFloat32((r3 + 72), f4.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    r0 = MemoryInline::FlatRead8((r31 + 104));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 96), f4.d);
    r0 = (r0 | 32);
    MemoryInline::FlatWrite8((r31 + 104), static_cast<uint8_t>(r0));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f5.d);
    MemoryInline::FlatWriteFloat32((r31 + 92), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 120), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r31 + 124), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    MemoryInline::FlatWriteFloat32((r31 + 128), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    MemoryInline::FlatWriteFloat32((r31 + 132), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    return r3;
}

}

extern "C" void func_8055C9B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8055C9B0_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8055C9B0 func_8055C9B0 preserves=true fpr_mask=0x00000000
