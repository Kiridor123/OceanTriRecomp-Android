#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80143AA4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_80143AA4;

loc_80143AA4:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80143AAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80143AB0:
{
    // inline leaf 0x801433E8 (11 guest instruction(s))
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 52u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r3, static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 6), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 7), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 48), r0);
    // end of inlined leaf 0x801433E8
    ctx->gpr[0] = r0;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_80143AA4_statefree_v1(uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    goto loc_80143AA4;

loc_80143AA4:
{
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_80143AAC:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80143AB0:
{
    // inline leaf 0x801433E8 (11 guest instruction(s))
    cached_r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r3, 0, 52u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, cached_r3, static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (cached_r3 + 2), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (cached_r3 + 3), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (cached_r3 + 4), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (cached_r3 + 5), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (cached_r3 + 6), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (cached_r3 + 7), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (cached_r3 + 8), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved32(guest_range_0, 48u, (cached_r3 + 48), cached_r0);
    // end of inlined leaf 0x801433E8
return static_cast<uint64_t>(cached_r0);
}

loc_return:
{
return static_cast<uint64_t>(cached_r0);
}


    return static_cast<uint64_t>(cached_r0);
}
// RECOMP_STATE_FREE_ABI address=0x80143AA4 symbol=func_80143AA4_statefree_v1 gpr_in=0x00000008 gpr_out=0x00000001 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_80143AA4_statefree_v0(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    goto loc_80143AA4;

loc_80143AA4:
{
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_80143AAC:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80143AB0:
{
    // inline leaf 0x801433E8 (11 guest instruction(s))
    cached_r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r3, 0, 52u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, cached_r3, static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (cached_r3 + 2), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (cached_r3 + 3), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (cached_r3 + 4), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (cached_r3 + 5), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (cached_r3 + 6), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (cached_r3 + 7), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (cached_r3 + 8), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved32(guest_range_0, 48u, (cached_r3 + 48), cached_r0);
    // end of inlined leaf 0x801433E8
return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(native_cr) };
}

loc_return:
{
return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(native_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80143AA4 symbol=func_80143AA4_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000001 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80143AA4_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    goto loc_80143AA4;

loc_80143AA4:
{
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_80143AAC:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80143AB0:
{
    // inline leaf 0x801433E8 (11 guest instruction(s))
    cached_r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r3, 0, 52u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, cached_r3, static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (cached_r3 + 2), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (cached_r3 + 3), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (cached_r3 + 4), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (cached_r3 + 5), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (cached_r3 + 6), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (cached_r3 + 7), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (cached_r3 + 8), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved32(guest_range_0, 48u, (cached_r3 + 48), cached_r0);
    // end of inlined leaf 0x801433E8
return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(native_cr) };
}

loc_return:
{
return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(native_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80143AA4 symbol=func_80143AA4_statefree gpr_in=0x00000008 gpr_out=0x00000001 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80143AA4 func_80143AA4 preserves=true fpr_mask=0x00000000


extern "C" void func_80143AA4_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_80143AA4(ctx);
}
