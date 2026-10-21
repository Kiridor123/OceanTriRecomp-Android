#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803CE620(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x803CE620u);
    goto loc_803CE620;

loc_803CE620:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_803CE628:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803CE630;
    }
}

loc_803CE62C:
{
    // inline leaf 0x803F759C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x803F759C
    ctx->gpr[3] = r3;
    return;
}

loc_803CE630:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_803CE620_statefree_v0(uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x803CE620u);
    goto loc_803CE620;

loc_803CE620:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 4));
}

loc_803CE628:
{
    if ((static_cast<int32_t>(cached_r3) == static_cast<int32_t>(0))) {
        goto loc_803CE630;
    }
}

loc_803CE62C:
{
    // inline leaf 0x803F759C (2 guest instruction(s))
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 4));
    // end of inlined leaf 0x803F759C
return static_cast<uint64_t>(cached_r3);
}

loc_803CE630:
{
    cached_r3 = 0;
return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x803CE620 symbol=func_803CE620_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE uint64_t func_803CE620_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x803CE620u);
    goto loc_803CE620;

loc_803CE620:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 4));
}

loc_803CE628:
{
    if ((static_cast<int32_t>(cached_r3) == static_cast<int32_t>(0))) {
        goto loc_803CE630;
    }
}

loc_803CE62C:
{
    // inline leaf 0x803F759C (2 guest instruction(s))
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 4));
    // end of inlined leaf 0x803F759C
return static_cast<uint64_t>(cached_r3);
}

loc_803CE630:
{
    cached_r3 = 0;
return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x803CE620 symbol=func_803CE620_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803CE620 func_803CE620 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_803CE620_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_803CE620(ctx);
    return ctx->gpr[3];
}
