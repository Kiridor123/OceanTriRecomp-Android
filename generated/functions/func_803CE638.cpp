#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803CE638(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x803CE638u);
    goto loc_803CE638;

loc_803CE638:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_803CE640:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803CE648;
    }
}

loc_803CE644:
{
    // inline leaf 0x803F75A4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x803F75A4
    ctx->gpr[3] = r3;
    return;
}

loc_803CE648:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_803CE638_statefree_v0(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x803CE638u);
    goto loc_803CE638;

loc_803CE638:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 4));
}

loc_803CE640:
{
    if ((static_cast<int32_t>(cached_r3) == static_cast<int32_t>(0))) {
        goto loc_803CE648;
    }
}

loc_803CE644:
{
    // inline leaf 0x803F75A4 (2 guest instruction(s))
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 8));
    // end of inlined leaf 0x803F75A4
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

loc_803CE648:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x803CE638 symbol=func_803CE638_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_803CE638_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x803CE638u);
    goto loc_803CE638;

loc_803CE638:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 4));
}

loc_803CE640:
{
    if ((static_cast<int32_t>(cached_r3) == static_cast<int32_t>(0))) {
        goto loc_803CE648;
    }
}

loc_803CE644:
{
    // inline leaf 0x803F75A4 (2 guest instruction(s))
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 8));
    // end of inlined leaf 0x803F75A4
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

loc_803CE648:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x803CE638 symbol=func_803CE638_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803CE638 func_803CE638 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_803CE638_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_803CE638(ctx);
    return ctx->gpr[3];
}
