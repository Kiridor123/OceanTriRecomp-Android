#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80297848_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_80297848;

loc_80297848:
{
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 20u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, r3, static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r3 + 4), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 6), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 7), static_cast<uint8_t>(r0));
    r3 = (r3 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14192));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -14184));
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    ctx->gpr[0] = r0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return r3;
}

}

extern "C" void func_80297848(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80297848_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x0000000E fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80297848 func_80297848 preserves=true fpr_mask=0x00000000
