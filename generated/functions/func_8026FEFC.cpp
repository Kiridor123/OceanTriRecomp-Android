#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026FEFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_8026FEFC;

loc_8026FEFC:
{
    r0 = (r4 & -2147483648);
}

loc_8026FF04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026FF14;
    }
}

loc_8026FF08:
{
    r0 = MemoryInline::FlatRead32((r3 + 860));
    r3 = (r0 & r4);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_8026FF14:
{
    r3 = MemoryInline::FlatRead32((r3 + 864));
    r0 = (r4 & 2147483647);
    r3 = (r3 & r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_8026FEFC_statefree_v0(uint32_t native_r3, uint32_t native_r4, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    uint32_t cr0_0 = 0;

    goto loc_8026FEFC;

loc_8026FEFC:
{
    cached_r0 = (cached_r4 & -2147483648);
}

loc_8026FF04:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_8026FF14;
    }
}

loc_8026FF08:
{
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 860));
    cached_r3 = (cached_r0 & cached_r4);

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_8026FF14:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 864));
    cached_r0 = (cached_r4 & 2147483647);
    cached_r3 = (cached_r3 & cached_r0);

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x8026FEFC symbol=func_8026FEFC_statefree_v0 gpr_in=0x00000018 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_8026FEFC_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    uint32_t cr0_0 = 0;

    goto loc_8026FEFC;

loc_8026FEFC:
{
    cached_r0 = (cached_r4 & -2147483648);
}

loc_8026FF04:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_8026FF14;
    }
}

loc_8026FF08:
{
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 860));
    cached_r3 = (cached_r0 & cached_r4);

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_8026FF14:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 864));
    cached_r0 = (cached_r4 & 2147483647);
    cached_r3 = (cached_r3 & cached_r0);

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x8026FEFC symbol=func_8026FEFC_statefree gpr_in=0x00000018 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8026FEFC func_8026FEFC preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_8026FEFC_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_8026FEFC(ctx);
    return ctx->gpr[3];
}
