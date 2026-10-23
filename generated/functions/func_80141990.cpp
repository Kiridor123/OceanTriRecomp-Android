#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80141990(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_80141990;

loc_80141990:
{
    r3 = 0x806A0000u;
    r3 = (r3 + 27152);
    r3 = (r3 + 304);
    r0 = MemoryInline::FlatRead16((r3 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801419A4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_801419A8:
{
    r3 = (r3 + 20);
    r0 = MemoryInline::FlatRead16((r3 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801419B4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_801419B8:
{
    r3 = (r3 + 20);
    r0 = MemoryInline::FlatRead16((r3 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801419C4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_801419C8:
{
    r3 = (r3 + 20);
    r0 = MemoryInline::FlatRead16((r3 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801419D4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_801419D8:
{
    r3 = (r3 + 20);
    r0 = MemoryInline::FlatRead16((r3 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801419E4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_801419E8:
{
    r3 = (r3 + 20);
    r0 = MemoryInline::FlatRead16((r3 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801419F4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_801419F8:
{
    r3 = (r3 + 20);
    r0 = MemoryInline::FlatRead16((r3 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80141A04:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80141A08:
{
    r3 = (r3 + 20);
    r0 = MemoryInline::FlatRead16((r3 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80141A14:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80141A18:
{
    r3 = (r3 + 20);
    r0 = MemoryInline::FlatRead16((r3 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80141A24:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80141A28:
{
    r3 = (r3 + 20);
    r0 = MemoryInline::FlatRead16((r3 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80141A34:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80141A38:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80141990_statefree(uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;

    uint32_t cr0_0 = 0;

    goto loc_80141990;

loc_80141990:
{
    cached_r3 = 0x806A0000u;
    cached_r3 = (cached_r3 + 27152);
    cached_r3 = (cached_r3 + 304);
    cached_r0 = MemoryInline::FlatRead16((cached_r3 + 16));
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
}

loc_801419A4:
{
    if ((static_cast<int32_t>(cached_r0) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_801419A8:
{
    cached_r3 = (cached_r3 + 20);
    cached_r0 = MemoryInline::FlatRead16((cached_r3 + 16));
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
}

loc_801419B4:
{
    if ((static_cast<int32_t>(cached_r0) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_801419B8:
{
    cached_r3 = (cached_r3 + 20);
    cached_r0 = MemoryInline::FlatRead16((cached_r3 + 16));
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
}

loc_801419C4:
{
    if ((static_cast<int32_t>(cached_r0) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_801419C8:
{
    cached_r3 = (cached_r3 + 20);
    cached_r0 = MemoryInline::FlatRead16((cached_r3 + 16));
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
}

loc_801419D4:
{
    if ((static_cast<int32_t>(cached_r0) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_801419D8:
{
    cached_r3 = (cached_r3 + 20);
    cached_r0 = MemoryInline::FlatRead16((cached_r3 + 16));
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
}

loc_801419E4:
{
    if ((static_cast<int32_t>(cached_r0) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_801419E8:
{
    cached_r3 = (cached_r3 + 20);
    cached_r0 = MemoryInline::FlatRead16((cached_r3 + 16));
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
}

loc_801419F4:
{
    if ((static_cast<int32_t>(cached_r0) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_801419F8:
{
    cached_r3 = (cached_r3 + 20);
    cached_r0 = MemoryInline::FlatRead16((cached_r3 + 16));
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
}

loc_80141A04:
{
    if ((static_cast<int32_t>(cached_r0) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80141A08:
{
    cached_r3 = (cached_r3 + 20);
    cached_r0 = MemoryInline::FlatRead16((cached_r3 + 16));
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
}

loc_80141A14:
{
    if ((static_cast<int32_t>(cached_r0) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80141A18:
{
    cached_r3 = (cached_r3 + 20);
    cached_r0 = MemoryInline::FlatRead16((cached_r3 + 16));
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
}

loc_80141A24:
{
    if ((static_cast<int32_t>(cached_r0) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80141A28:
{
    cached_r3 = (cached_r3 + 20);
    cached_r0 = MemoryInline::FlatRead16((cached_r3 + 16));
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
}

loc_80141A34:
{
    if ((static_cast<int32_t>(cached_r0) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80141A38:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_return:
{

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80141990 symbol=func_80141990_statefree gpr_in=0x00000000 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80141990 func_80141990 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_80141990_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_80141990(ctx);
    return ctx->gpr[3];
}
