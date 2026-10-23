#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8044CFCC(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_8044CFCC;

loc_8044CFCC:
{
    r0 = 1;
    r3 = 0x80660000u;
    r4 = (r3 + -21920);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 2228), 0, 88u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r4 + 2228), static_cast<uint8_t>(r0));
    r3 = 0x80450000u;
    r0 = (r3 + -29444);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r4 + 2280), r0);
    r3 = 0x80450000u;
    r0 = (r3 + -25856);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r4 + 2284), r0);
    r3 = 0x80450000u;
    r0 = (r3 + -24520);
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r4 + 2288), r0);
    r3 = 0x80450000u;
    r0 = (r3 + -26040);
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r4 + 2292), r0);
    r3 = 0x80450000u;
    r0 = (r3 + -29612);
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r4 + 2296), r0);
    r3 = 0x80450000u;
    r0 = (r3 + -29604);
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r4 + 2300), r0);
    r3 = 0x80450000u;
    r0 = (r3 + -14232);
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r4 + 2304), r0);
    r3 = 0x80450000u;
    r0 = (r3 + -29568);
    MemoryInline::WriteResolved32(guest_range_0, 80u, (r4 + 2308), r0);
    r3 = 0x80450000u;
    r0 = (r3 + -12432);
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r4 + 2312), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_8044CFCC_statefree()
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;
    uint32_t cached_r4 = 0;

    uint8_t* guest_range_0 = nullptr;

    goto loc_8044CFCC;

loc_8044CFCC:
{
    cached_r0 = 1;
    cached_r3 = 0x80660000u;
    cached_r4 = (cached_r3 + -21920);
    guest_range_0 = MemoryInline::ResolveRangeHost((cached_r4 + 2228), 0, 88u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (cached_r4 + 2228), static_cast<uint8_t>(cached_r0));
    cached_r3 = 0x80450000u;
    cached_r0 = (cached_r3 + -29444);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (cached_r4 + 2280), cached_r0);
    cached_r3 = 0x80450000u;
    cached_r0 = (cached_r3 + -25856);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (cached_r4 + 2284), cached_r0);
    cached_r3 = 0x80450000u;
    cached_r0 = (cached_r3 + -24520);
    MemoryInline::WriteResolved32(guest_range_0, 60u, (cached_r4 + 2288), cached_r0);
    cached_r3 = 0x80450000u;
    cached_r0 = (cached_r3 + -26040);
    MemoryInline::WriteResolved32(guest_range_0, 64u, (cached_r4 + 2292), cached_r0);
    cached_r3 = 0x80450000u;
    cached_r0 = (cached_r3 + -29612);
    MemoryInline::WriteResolved32(guest_range_0, 68u, (cached_r4 + 2296), cached_r0);
    cached_r3 = 0x80450000u;
    cached_r0 = (cached_r3 + -29604);
    MemoryInline::WriteResolved32(guest_range_0, 72u, (cached_r4 + 2300), cached_r0);
    cached_r3 = 0x80450000u;
    cached_r0 = (cached_r3 + -14232);
    MemoryInline::WriteResolved32(guest_range_0, 76u, (cached_r4 + 2304), cached_r0);
    cached_r3 = 0x80450000u;
    cached_r0 = (cached_r3 + -29568);
    MemoryInline::WriteResolved32(guest_range_0, 80u, (cached_r4 + 2308), cached_r0);
    cached_r3 = 0x80450000u;
    cached_r0 = (cached_r3 + -12432);
    MemoryInline::WriteResolved32(guest_range_0, 84u, (cached_r4 + 2312), cached_r0);

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_r4) };
}

}
// RECOMP_STATE_FREE_ABI address=0x8044CFCC symbol=func_8044CFCC_statefree gpr_in=0x00000000 gpr_out=0x00000018 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8044CFCC func_8044CFCC preserves=true fpr_mask=0x00000000


extern "C" uint64_t func_8044CFCC_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8044CFCC(ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}
