#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802740A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x802740A0u);
    goto loc_802740A0;

loc_802740A0:
{
    r0 = (r3 & 65535);
}

loc_802740A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(139))) {
        goto loc_802740C8;
    }
}

loc_802740AC:
{
}

loc_802740B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(381))) {
        goto loc_802740D0;
    }
}

loc_802740B4:
{
}

loc_802740B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(382))) {
        goto loc_802740D8;
    }
}

loc_802740BC:
{
}

loc_802740C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(395))) {
        goto loc_802740E0;
    }
}

loc_802740C4:
{
    goto loc_802740E8;
}

loc_802740C8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_802740D0:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_802740D8:
{
    r3 = 4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_802740E0:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_802740E8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_802740A0_statefree_v1(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x802740A0u);
    goto loc_802740A0;

loc_802740A0:
{
    cached_r0 = (cached_r3 & 65535);
}

loc_802740A8:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(139))) {
        goto loc_802740C8;
    }
}

loc_802740AC:
{
}

loc_802740B0:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(381))) {
        goto loc_802740D0;
    }
}

loc_802740B4:
{
}

loc_802740B8:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(382))) {
        goto loc_802740D8;
    }
}

loc_802740BC:
{
}

loc_802740C0:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(395))) {
        goto loc_802740E0;
    }
}

loc_802740C4:
{
    goto loc_802740E8;
}

loc_802740C8:
{
    cached_r3 = 1;

    return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

loc_802740D0:
{
    cached_r3 = 3;

    return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

loc_802740D8:
{
    cached_r3 = 4;

    return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

loc_802740E0:
{
    cached_r3 = 2;

    return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

loc_802740E8:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x802740A0 symbol=func_802740A0_statefree_v1 gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_802740A0_statefree_v0(uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x802740A0u);
    goto loc_802740A0;

loc_802740A0:
{
    cached_r0 = (cached_r3 & 65535);
}

loc_802740A8:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(139))) {
        goto loc_802740C8;
    }
}

loc_802740AC:
{
}

loc_802740B0:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(381))) {
        goto loc_802740D0;
    }
}

loc_802740B4:
{
}

loc_802740B8:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(382))) {
        goto loc_802740D8;
    }
}

loc_802740BC:
{
}

loc_802740C0:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(395))) {
        goto loc_802740E0;
    }
}

loc_802740C4:
{
    goto loc_802740E8;
}

loc_802740C8:
{
    cached_r3 = 1;

    return static_cast<uint64_t>(cached_r3);
}

loc_802740D0:
{
    cached_r3 = 3;

    return static_cast<uint64_t>(cached_r3);
}

loc_802740D8:
{
    cached_r3 = 4;

    return static_cast<uint64_t>(cached_r3);
}

loc_802740E0:
{
    cached_r3 = 2;

    return static_cast<uint64_t>(cached_r3);
}

loc_802740E8:
{
    cached_r3 = 0;

    return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x802740A0 symbol=func_802740A0_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_802740A0_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x802740A0u);
    goto loc_802740A0;

loc_802740A0:
{
    cached_r0 = (cached_r3 & 65535);
}

loc_802740A8:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(139))) {
        goto loc_802740C8;
    }
}

loc_802740AC:
{
}

loc_802740B0:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(381))) {
        goto loc_802740D0;
    }
}

loc_802740B4:
{
}

loc_802740B8:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(382))) {
        goto loc_802740D8;
    }
}

loc_802740BC:
{
}

loc_802740C0:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(395))) {
        goto loc_802740E0;
    }
}

loc_802740C4:
{
    goto loc_802740E8;
}

loc_802740C8:
{
    cached_r3 = 1;

    return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

loc_802740D0:
{
    cached_r3 = 3;

    return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

loc_802740D8:
{
    cached_r3 = 4;

    return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

loc_802740E0:
{
    cached_r3 = 2;

    return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

loc_802740E8:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(native_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x802740A0 symbol=func_802740A0_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802740A0 func_802740A0 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_802740A0_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_802740A0(ctx);
    return ctx->gpr[3];
}
