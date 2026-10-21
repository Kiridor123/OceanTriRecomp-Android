#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012B95C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x8012B95Cu);
    goto loc_8012B95C;

loc_8012B95C:
{
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r3 + 1064));
}

loc_8012B968:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(20000))) {
        goto loc_8012B970;
    }
}

loc_8012B96C:
{
    MemoryInline::FlatWrite32((r3 + 1064), r0);
}

loc_8012B970:
{
    r4 = MemoryInline::FlatRead32((r3 + 1068));
}

loc_8012B978:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(20000))) {
        goto loc_8012B980;
    }
}

loc_8012B97C:
{
    MemoryInline::FlatWrite32((r3 + 1068), r0);
}

loc_8012B980:
{
    r3 = (r3 + 8);
    r4 = MemoryInline::FlatRead32((r3 + 1064));
}

loc_8012B98C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(20000))) {
        goto loc_8012B994;
    }
}

loc_8012B990:
{
    MemoryInline::FlatWrite32((r3 + 1064), r0);
}

loc_8012B994:
{
    r4 = MemoryInline::FlatRead32((r3 + 1068));
}

loc_8012B99C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(20000))) {
        goto loc_return;
    }
}

loc_8012B9A0:
{
    MemoryInline::FlatWrite32((r3 + 1068), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_8012B95C_statefree_v0(uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x8012B95Cu);
    goto loc_8012B95C;

loc_8012B95C:
{
    cached_r0 = 0;
    cached_r4 = MemoryInline::FlatRead32((cached_r3 + 1064));
}

loc_8012B968:
{
    if ((static_cast<int32_t>(cached_r4) < static_cast<int32_t>(20000))) {
        goto loc_8012B970;
    }
}

loc_8012B96C:
{
    MemoryInline::FlatWrite32((cached_r3 + 1064), cached_r0);
}

loc_8012B970:
{
    cached_r4 = MemoryInline::FlatRead32((cached_r3 + 1068));
}

loc_8012B978:
{
    if ((static_cast<int32_t>(cached_r4) < static_cast<int32_t>(20000))) {
        goto loc_8012B980;
    }
}

loc_8012B97C:
{
    MemoryInline::FlatWrite32((cached_r3 + 1068), cached_r0);
}

loc_8012B980:
{
    cached_r3 = (cached_r3 + 8);
    cached_r4 = MemoryInline::FlatRead32((cached_r3 + 1064));
}

loc_8012B98C:
{
    if ((static_cast<int32_t>(cached_r4) < static_cast<int32_t>(20000))) {
        goto loc_8012B994;
    }
}

loc_8012B990:
{
    MemoryInline::FlatWrite32((cached_r3 + 1064), cached_r0);
}

loc_8012B994:
{
    cached_r4 = MemoryInline::FlatRead32((cached_r3 + 1068));
}

loc_8012B99C:
{
    if ((static_cast<int32_t>(cached_r4) < static_cast<int32_t>(20000))) {
        goto loc_return;
    }
}

loc_8012B9A0:
{
    MemoryInline::FlatWrite32((cached_r3 + 1068), cached_r0);

return static_cast<uint64_t>(cached_r0);
}

loc_return:
{

return static_cast<uint64_t>(cached_r0);
}


    return static_cast<uint64_t>(cached_r0);
}
// RECOMP_STATE_FREE_ABI address=0x8012B95C symbol=func_8012B95C_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000001 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE uint64_t func_8012B95C_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x8012B95Cu);
    goto loc_8012B95C;

loc_8012B95C:
{
    cached_r0 = 0;
    cached_r4 = MemoryInline::FlatRead32((cached_r3 + 1064));
}

loc_8012B968:
{
    if ((static_cast<int32_t>(cached_r4) < static_cast<int32_t>(20000))) {
        goto loc_8012B970;
    }
}

loc_8012B96C:
{
    MemoryInline::FlatWrite32((cached_r3 + 1064), cached_r0);
}

loc_8012B970:
{
    cached_r4 = MemoryInline::FlatRead32((cached_r3 + 1068));
}

loc_8012B978:
{
    if ((static_cast<int32_t>(cached_r4) < static_cast<int32_t>(20000))) {
        goto loc_8012B980;
    }
}

loc_8012B97C:
{
    MemoryInline::FlatWrite32((cached_r3 + 1068), cached_r0);
}

loc_8012B980:
{
    cached_r3 = (cached_r3 + 8);
    cached_r4 = MemoryInline::FlatRead32((cached_r3 + 1064));
}

loc_8012B98C:
{
    if ((static_cast<int32_t>(cached_r4) < static_cast<int32_t>(20000))) {
        goto loc_8012B994;
    }
}

loc_8012B990:
{
    MemoryInline::FlatWrite32((cached_r3 + 1064), cached_r0);
}

loc_8012B994:
{
    cached_r4 = MemoryInline::FlatRead32((cached_r3 + 1068));
}

loc_8012B99C:
{
    if ((static_cast<int32_t>(cached_r4) < static_cast<int32_t>(20000))) {
        goto loc_return;
    }
}

loc_8012B9A0:
{
    MemoryInline::FlatWrite32((cached_r3 + 1068), cached_r0);

return static_cast<uint64_t>(cached_r0);
}

loc_return:
{

return static_cast<uint64_t>(cached_r0);
}


    return static_cast<uint64_t>(cached_r0);
}
// RECOMP_STATE_FREE_ABI address=0x8012B95C symbol=func_8012B95C_statefree gpr_in=0x00000008 gpr_out=0x00000001 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012B95C func_8012B95C preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_8012B95C_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_8012B95C(ctx);
    return ctx->gpr[3];
}
