#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80051758(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x80051758u);
    goto loc_80051758;

loc_80051758:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 44u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 44u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r3, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r3 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r3 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r4 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r3 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r4 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r3 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r4 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r3 + 40), f0.d);
    ctx->fpr[0] = f0;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_80051758_statefree(uint32_t native_r3, uint32_t native_r4, PPC_FPR native_f0)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    PPC_FPR cached_f0 = PPC_FPR{};

    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    MKW_GUEST_ENTER(0x80051758u);
    goto loc_80051758;

loc_80051758:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r4, 0, 44u, true, false);
    cached_f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, cached_r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(cached_r3, 0, 44u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, cached_r3, cached_f0.d);
    cached_f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (cached_r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (cached_r3 + 4), cached_f0.d);
    cached_f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (cached_r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (cached_r3 + 8), cached_f0.d);
    cached_f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (cached_r4 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (cached_r3 + 16), cached_f0.d);
    cached_f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (cached_r4 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (cached_r3 + 20), cached_f0.d);
    cached_f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (cached_r4 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (cached_r3 + 24), cached_f0.d);
    cached_f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (cached_r4 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (cached_r3 + 32), cached_f0.d);
    cached_f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (cached_r4 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (cached_r3 + 36), cached_f0.d);
    cached_f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (cached_r4 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (cached_r3 + 40), cached_f0.d);
return cached_f0.raw;
}


    return cached_f0.raw;
}
// RECOMP_STATE_FREE_ABI address=0x80051758 symbol=func_80051758_statefree gpr_in=0x00000018 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000001 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80051758 func_80051758 preserves=true fpr_mask=0x00000000


extern "C" void func_80051758_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_80051758(ctx);
}
