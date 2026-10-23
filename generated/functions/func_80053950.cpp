#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80053950_ra0_1e_8_0(CpuContext* MKW_RESTRICT ctx, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;

    goto loc_80053950;

loc_80053950:
{
    r3 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r3 + -12896));
    r0 = (r0 | 65536);
    r0 = (r0 | 4096);
    MemoryInline::FlatWriteRam32((r3 + -12896), r0);
    r3 = (r3 + -12896);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 8), 0, 44u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 44), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 20), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 36), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 28), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 32), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 24), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f4.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 48), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 40), f0.d);
    r0 = (r3 + 20);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 8), r0);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    return r3;
}

}

extern "C" void func_80053950(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80053950_ra0_1e_8_0(ctx, ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x0000001E fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80053950 func_80053950 preserves=true fpr_mask=0x00000000
