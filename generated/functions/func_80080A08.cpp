#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80080A08(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x80080A08u);
    goto loc_80080A08;

loc_80080A08:
{
}

loc_80080A0C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80080A34;
    }
}

loc_80080A10:
{
}

loc_80080A14:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_80080A3C;
    }
}

loc_80080A18:
{
}

loc_80080A1C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_80080A44;
    }
}

loc_80080A20:
{
}

loc_80080A24:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_80080A4C;
    }
}

loc_80080A28:
{
}

loc_80080A2C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(4))) {
        goto loc_80080A54;
    }
}

loc_80080A30:
{
    goto loc_80080A5C;
}

loc_80080A34:
{
    r3 = MemoryInline::FlatRead32((r3 + 292));
    ctx->gpr[3] = r3;
    return;
}

loc_80080A3C:
{
    r3 = MemoryInline::FlatRead32((r3 + 296));
    ctx->gpr[3] = r3;
    return;
}

loc_80080A44:
{
    r3 = MemoryInline::FlatRead32((r3 + 300));
    ctx->gpr[3] = r3;
    return;
}

loc_80080A4C:
{
    r3 = MemoryInline::FlatRead32((r3 + 304));
    ctx->gpr[3] = r3;
    return;
}

loc_80080A54:
{
    r3 = MemoryInline::FlatRead32((r3 + 308));
    ctx->gpr[3] = r3;
    return;
}

loc_80080A5C:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_80080A08_statefree_v0(uint32_t native_r3, uint32_t native_r4, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x80080A08u);
    goto loc_80080A08;

loc_80080A08:
{
}

loc_80080A0C:
{
    if ((static_cast<int32_t>(cached_r4) == static_cast<int32_t>(0))) {
        goto loc_80080A34;
    }
}

loc_80080A10:
{
}

loc_80080A14:
{
    if ((static_cast<int32_t>(cached_r4) == static_cast<int32_t>(1))) {
        goto loc_80080A3C;
    }
}

loc_80080A18:
{
}

loc_80080A1C:
{
    if ((static_cast<int32_t>(cached_r4) == static_cast<int32_t>(2))) {
        goto loc_80080A44;
    }
}

loc_80080A20:
{
}

loc_80080A24:
{
    if ((static_cast<int32_t>(cached_r4) == static_cast<int32_t>(3))) {
        goto loc_80080A4C;
    }
}

loc_80080A28:
{
}

loc_80080A2C:
{
    if ((static_cast<int32_t>(cached_r4) == static_cast<int32_t>(4))) {
        goto loc_80080A54;
    }
}

loc_80080A30:
{
    goto loc_80080A5C;
}

loc_80080A34:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 292));
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

loc_80080A3C:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 296));
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

loc_80080A44:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 300));
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

loc_80080A4C:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 304));
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

loc_80080A54:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 308));
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

loc_80080A5C:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80080A08 symbol=func_80080A08_statefree_v0 gpr_in=0x00000018 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80080A08_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x80080A08u);
    goto loc_80080A08;

loc_80080A08:
{
}

loc_80080A0C:
{
    if ((static_cast<int32_t>(cached_r4) == static_cast<int32_t>(0))) {
        goto loc_80080A34;
    }
}

loc_80080A10:
{
}

loc_80080A14:
{
    if ((static_cast<int32_t>(cached_r4) == static_cast<int32_t>(1))) {
        goto loc_80080A3C;
    }
}

loc_80080A18:
{
}

loc_80080A1C:
{
    if ((static_cast<int32_t>(cached_r4) == static_cast<int32_t>(2))) {
        goto loc_80080A44;
    }
}

loc_80080A20:
{
}

loc_80080A24:
{
    if ((static_cast<int32_t>(cached_r4) == static_cast<int32_t>(3))) {
        goto loc_80080A4C;
    }
}

loc_80080A28:
{
}

loc_80080A2C:
{
    if ((static_cast<int32_t>(cached_r4) == static_cast<int32_t>(4))) {
        goto loc_80080A54;
    }
}

loc_80080A30:
{
    goto loc_80080A5C;
}

loc_80080A34:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 292));
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

loc_80080A3C:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 296));
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

loc_80080A44:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 300));
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

loc_80080A4C:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 304));
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

loc_80080A54:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 308));
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

loc_80080A5C:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80080A08 symbol=func_80080A08_statefree gpr_in=0x00000018 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80080A08 func_80080A08 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_80080A08_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_80080A08(ctx);
    return ctx->gpr[3];
}
