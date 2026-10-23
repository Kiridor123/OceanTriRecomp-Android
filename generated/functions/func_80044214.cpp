#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80044214_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_80044214;

loc_80044214:
{
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -17932), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r13 + -17932), r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r13 + -17928), r0);
    }
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -32656));
    f1.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r13 + -17924), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r13 + -17920), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r13 + -17916), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r13 + -17912), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32696));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r13 + -17908), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r13 + -17904), f0.d);
    }
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return r3;
}

}

extern "C" void func_80044214(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80044214_ra0_0_8_0(ctx);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002004 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80044214 func_80044214 preserves=true fpr_mask=0x00000000
