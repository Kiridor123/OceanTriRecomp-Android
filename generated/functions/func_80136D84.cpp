#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80136D84(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x80136D84u);
    goto loc_80136D84;

loc_80136D84:
{
    r4 = MemoryInline::FlatRead16((r3 + 1948));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148756868);
}

loc_80136D8C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80136D90:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 1948), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_80136D84_statefree_v0(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0{};
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x80136D84u);
    goto loc_80136D84;

loc_80136D84:
{
    cached_r4 = MemoryInline::FlatRead16((cached_r3 + 1948));
    cached_r4 = (cached_r4 << 16);
    cached_r4 = (static_cast<int32_t>(cached_r4) >> 16);
    cached_r4 = MH3_TickLoad(cached_r4, 2148756868);
}

loc_80136D8C:
{
    if ((static_cast<int32_t>(cached_r4) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80136D90:
{
    cached_r0 = (cached_r4 + -1);
    MemoryInline::FlatWrite16((cached_r3 + 1948), static_cast<uint16_t>(cached_r0));

    return { static_cast<uint64_t>(cached_r4), static_cast<uint64_t>(native_cr) };
}

loc_return:
{

    return { static_cast<uint64_t>(cached_r4), static_cast<uint64_t>(native_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80136D84 symbol=func_80136D84_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000010 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80136D84_statefree(uint32_t native_r0, uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = native_r0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x80136D84u);
    goto loc_80136D84;

loc_80136D84:
{
    cached_r4 = MemoryInline::FlatRead16((cached_r3 + 1948));
    cached_r4 = (cached_r4 << 16);
    cached_r4 = (static_cast<int32_t>(cached_r4) >> 16);
    cached_r4 = MH3_TickLoad(cached_r4, 2148756868);
}

loc_80136D8C:
{
    if ((static_cast<int32_t>(cached_r4) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80136D90:
{
    cached_r0 = (cached_r4 + -1);
    MemoryInline::FlatWrite16((cached_r3 + 1948), static_cast<uint16_t>(cached_r0));

    return { static_cast<uint64_t>(cached_r4), static_cast<uint64_t>(native_cr) };
}

loc_return:
{

    return { static_cast<uint64_t>(cached_r4), static_cast<uint64_t>(native_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80136D84 symbol=func_80136D84_statefree gpr_in=0x00000009 gpr_out=0x00000010 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80136D84 func_80136D84 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_80136D84_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_80136D84(ctx);
    return ctx->gpr[4];
}
