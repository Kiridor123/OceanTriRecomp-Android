#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80278D34(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x80278D34u);
    goto loc_80278D34;

loc_80278D34:
{
    r0 = MemoryInline::FlatRead16((r3 + 1052));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80278D3C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80278D48;
    }
}

loc_80278D40:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_80278D48:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_80278D50:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_80278D78;
    }
}

loc_80278D54:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r3 + -66);
}

loc_80278D60:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(6))) {
        goto loc_80278D70;
    }
}

loc_80278D64:
{
    r0 = (r3 + -63);
}

loc_80278D6C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80278D78;
    }
}

loc_80278D70:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_80278D78:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_80278D34_statefree_v1(uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x80278D34u);
    goto loc_80278D34;

loc_80278D34:
{
    cached_r0 = MemoryInline::FlatRead16((cached_r3 + 1052));
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
}

loc_80278D3C:
{
    if ((static_cast<int32_t>(cached_r0) <= static_cast<int32_t>(0))) {
        goto loc_80278D48;
    }
}

loc_80278D40:
{
    cached_r3 = 1;

    return static_cast<uint64_t>(cached_r3);
}

loc_80278D48:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 10));
}

loc_80278D50:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(6))) {
        goto loc_80278D78;
    }
}

loc_80278D54:
{
    cached_r3 = MemoryInline::FlatRead16((cached_r3 + 12));
    cached_r0 = (cached_r3 + -66);
}

loc_80278D60:
{
    if ((static_cast<uint32_t>(cached_r0) <= static_cast<uint32_t>(6))) {
        goto loc_80278D70;
    }
}

loc_80278D64:
{
    cached_r0 = (cached_r3 + -63);
}

loc_80278D6C:
{
    if ((static_cast<uint32_t>(cached_r0) > static_cast<uint32_t>(1))) {
        goto loc_80278D78;
    }
}

loc_80278D70:
{
    cached_r3 = 1;

    return static_cast<uint64_t>(cached_r3);
}

loc_80278D78:
{
    cached_r3 = 0;

    return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x80278D34 symbol=func_80278D34_statefree_v1 gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_80278D34_statefree_v0(uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x80278D34u);
    goto loc_80278D34;

loc_80278D34:
{
    cached_r0 = MemoryInline::FlatRead16((cached_r3 + 1052));
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
}

loc_80278D3C:
{
    if ((static_cast<int32_t>(cached_r0) <= static_cast<int32_t>(0))) {
        goto loc_80278D48;
    }
}

loc_80278D40:
{
    cached_r3 = 1;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80278D48:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 10));
}

loc_80278D50:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(6))) {
        goto loc_80278D78;
    }
}

loc_80278D54:
{
    cached_r3 = MemoryInline::FlatRead16((cached_r3 + 12));
    cached_r0 = (cached_r3 + -66);
}

loc_80278D60:
{
    if ((static_cast<uint32_t>(cached_r0) <= static_cast<uint32_t>(6))) {
        goto loc_80278D70;
    }
}

loc_80278D64:
{
    cached_r0 = (cached_r3 + -63);
}

loc_80278D6C:
{
    if ((static_cast<uint32_t>(cached_r0) > static_cast<uint32_t>(1))) {
        goto loc_80278D78;
    }
}

loc_80278D70:
{
    cached_r3 = 1;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80278D78:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80278D34 symbol=func_80278D34_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80278D34_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x80278D34u);
    goto loc_80278D34;

loc_80278D34:
{
    cached_r0 = MemoryInline::FlatRead16((cached_r3 + 1052));
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
}

loc_80278D3C:
{
    if ((static_cast<int32_t>(cached_r0) <= static_cast<int32_t>(0))) {
        goto loc_80278D48;
    }
}

loc_80278D40:
{
    cached_r3 = 1;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80278D48:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 10));
}

loc_80278D50:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(6))) {
        goto loc_80278D78;
    }
}

loc_80278D54:
{
    cached_r3 = MemoryInline::FlatRead16((cached_r3 + 12));
    cached_r0 = (cached_r3 + -66);
}

loc_80278D60:
{
    if ((static_cast<uint32_t>(cached_r0) <= static_cast<uint32_t>(6))) {
        goto loc_80278D70;
    }
}

loc_80278D64:
{
    cached_r0 = (cached_r3 + -63);
}

loc_80278D6C:
{
    if ((static_cast<uint32_t>(cached_r0) > static_cast<uint32_t>(1))) {
        goto loc_80278D78;
    }
}

loc_80278D70:
{
    cached_r3 = 1;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80278D78:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80278D34 symbol=func_80278D34_statefree gpr_in=0x00000008 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80278D34 func_80278D34 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_80278D34_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_80278D34(ctx);
    return ctx->gpr[3];
}
