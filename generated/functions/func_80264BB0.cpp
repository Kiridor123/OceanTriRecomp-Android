#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80264BB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80264BB0;

loc_80264BB0:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_80264BB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80264BD0;
    }
}

loc_80264BBC:
{
}

loc_80264BC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80264C28;
    }
}

loc_80264BC4:
{
}

loc_80264BC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_80264C3C;
    }
}

loc_80264BCC:
{
    goto loc_80264C98;
}

loc_80264BD0:
{
    r0 = MemoryInline::FlatRead16((r3 + 12));
}

loc_80264BD8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(100))) {
        goto loc_80264C04;
    }
}

loc_80264BDC:
{
}

loc_80264BE0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(81))) {
        goto loc_80264BF8;
    }
}

loc_80264BE4:
{
}

loc_80264BE8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(27))) {
        goto loc_80264C98;
    }
}

loc_80264BEC:
{
}

loc_80264BF0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(23))) {
        goto loc_80264C20;
    }
}

loc_80264BF4:
{
    goto loc_80264C98;
}

loc_80264BF8:
{
}

loc_80264BFC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(83))) {
        goto loc_80264C98;
    }
}

loc_80264C00:
{
    goto loc_80264C20;
}

loc_80264C04:
{
}

loc_80264C08:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(140))) {
        goto loc_80264C18;
    }
}

loc_80264C0C:
{
}

loc_80264C10:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(102))) {
        goto loc_80264C98;
    }
}

loc_80264C14:
{
    goto loc_80264C20;
}

loc_80264C18:
{
}

loc_80264C1C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(150))) {
        goto loc_80264C98;
    }
}

loc_80264C20:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80264C28:
{
    r0 = MemoryInline::FlatRead16((r3 + 12));
}

loc_80264C30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(20))) {
        goto loc_80264C98;
    }
}

loc_80264C34:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80264C3C:
{
    r0 = MemoryInline::FlatRead16((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(26));
}

loc_80264C44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80264C90;
    }
}

loc_80264C48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80264C74;
    }
}

loc_80264C4C:
{
}

loc_80264C50:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(12))) {
        goto loc_80264C68;
    }
}

loc_80264C54:
{
}

loc_80264C58:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(10))) {
        goto loc_80264C98;
    }
}

loc_80264C5C:
{
}

loc_80264C60:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(2))) {
        goto loc_80264C90;
    }
}

loc_80264C64:
{
    goto loc_80264C98;
}

loc_80264C68:
{
}

loc_80264C6C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(14))) {
        goto loc_80264C98;
    }
}

loc_80264C70:
{
    goto loc_80264C90;
}

loc_80264C74:
{
}

loc_80264C78:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(55))) {
        goto loc_80264C88;
    }
}

loc_80264C7C:
{
}

loc_80264C80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(38))) {
        goto loc_80264C90;
    }
}

loc_80264C84:
{
    goto loc_80264C98;
}

loc_80264C88:
{
}

loc_80264C8C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(59))) {
        goto loc_80264C98;
    }
}

loc_80264C90:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80264C98:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80264BB0_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80264BB0;

loc_80264BB0:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 10));
}

loc_80264BB8:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_80264BD0;
    }
}

loc_80264BBC:
{
}

loc_80264BC0:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(1))) {
        goto loc_80264C28;
    }
}

loc_80264BC4:
{
}

loc_80264BC8:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(6))) {
        goto loc_80264C3C;
    }
}

loc_80264BCC:
{
    goto loc_80264C98;
}

loc_80264BD0:
{
    cached_r0 = MemoryInline::FlatRead16((cached_r3 + 12));
}

loc_80264BD8:
{
    if ((static_cast<int32_t>(cached_r0) >= static_cast<int32_t>(100))) {
        goto loc_80264C04;
    }
}

loc_80264BDC:
{
}

loc_80264BE0:
{
    if ((static_cast<int32_t>(cached_r0) >= static_cast<int32_t>(81))) {
        goto loc_80264BF8;
    }
}

loc_80264BE4:
{
}

loc_80264BE8:
{
    if ((static_cast<int32_t>(cached_r0) >= static_cast<int32_t>(27))) {
        goto loc_80264C98;
    }
}

loc_80264BEC:
{
}

loc_80264BF0:
{
    if ((static_cast<int32_t>(cached_r0) >= static_cast<int32_t>(23))) {
        goto loc_80264C20;
    }
}

loc_80264BF4:
{
    goto loc_80264C98;
}

loc_80264BF8:
{
}

loc_80264BFC:
{
    if ((static_cast<int32_t>(cached_r0) >= static_cast<int32_t>(83))) {
        goto loc_80264C98;
    }
}

loc_80264C00:
{
    goto loc_80264C20;
}

loc_80264C04:
{
}

loc_80264C08:
{
    if ((static_cast<int32_t>(cached_r0) >= static_cast<int32_t>(140))) {
        goto loc_80264C18;
    }
}

loc_80264C0C:
{
}

loc_80264C10:
{
    if ((static_cast<int32_t>(cached_r0) >= static_cast<int32_t>(102))) {
        goto loc_80264C98;
    }
}

loc_80264C14:
{
    goto loc_80264C20;
}

loc_80264C18:
{
}

loc_80264C1C:
{
    if ((static_cast<int32_t>(cached_r0) >= static_cast<int32_t>(150))) {
        goto loc_80264C98;
    }
}

loc_80264C20:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80264C28:
{
    cached_r0 = MemoryInline::FlatRead16((cached_r3 + 12));
}

loc_80264C30:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(20))) {
        goto loc_80264C98;
    }
}

loc_80264C34:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80264C3C:
{
    cached_r0 = MemoryInline::FlatRead16((cached_r3 + 12));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(26));
}

loc_80264C44:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80264C90;
    }
}

loc_80264C48:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80264C74;
    }
}

loc_80264C4C:
{
}

loc_80264C50:
{
    if ((static_cast<int32_t>(cached_r0) >= static_cast<int32_t>(12))) {
        goto loc_80264C68;
    }
}

loc_80264C54:
{
}

loc_80264C58:
{
    if ((static_cast<int32_t>(cached_r0) >= static_cast<int32_t>(10))) {
        goto loc_80264C98;
    }
}

loc_80264C5C:
{
}

loc_80264C60:
{
    if ((static_cast<int32_t>(cached_r0) >= static_cast<int32_t>(2))) {
        goto loc_80264C90;
    }
}

loc_80264C64:
{
    goto loc_80264C98;
}

loc_80264C68:
{
}

loc_80264C6C:
{
    if ((static_cast<int32_t>(cached_r0) >= static_cast<int32_t>(14))) {
        goto loc_80264C98;
    }
}

loc_80264C70:
{
    goto loc_80264C90;
}

loc_80264C74:
{
}

loc_80264C78:
{
    if ((static_cast<int32_t>(cached_r0) >= static_cast<int32_t>(55))) {
        goto loc_80264C88;
    }
}

loc_80264C7C:
{
}

loc_80264C80:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(38))) {
        goto loc_80264C90;
    }
}

loc_80264C84:
{
    goto loc_80264C98;
}

loc_80264C88:
{
}

loc_80264C8C:
{
    if ((static_cast<int32_t>(cached_r0) >= static_cast<int32_t>(59))) {
        goto loc_80264C98;
    }
}

loc_80264C90:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80264C98:
{
    cached_r3 = 0;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80264BB0 symbol=func_80264BB0_statefree gpr_in=0x00000008 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80264BB0 func_80264BB0 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_80264BB0_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_80264BB0(ctx);
    return ctx->gpr[3];
}
