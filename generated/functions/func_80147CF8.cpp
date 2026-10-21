#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_80147CF8_ra8_0_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    MKW_GUEST_ENTER(0x80147CF8u);
    goto loc_80147CF8;

loc_80147CF8:
{
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 816), 0, 41u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 816), r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 820), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 824), r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27800));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 828), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -27796));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 832), f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -27792));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 836), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27788));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 840), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 844), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 848), f1.d);
    MemoryInline::WriteResolved8(guest_range_0, 38u, (r3 + 854), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 39u, (r3 + 855), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 36u, (r3 + 852), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r3 + 856), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    return f1.d;
}

}

extern "C" void func_80147CF8(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_80147CF8_ra8_0_0_2(ctx, ctx->gpr[3]);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80147CF8 func_80147CF8 preserves=true fpr_mask=0x00000000
