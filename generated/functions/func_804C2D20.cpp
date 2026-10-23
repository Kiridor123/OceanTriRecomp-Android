#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804C2D20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_804C2D20;

loc_804C2D20:
{
}

loc_804C2D24:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_804C2D30;
    }
}

loc_804C2D28:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_804C2D30:
{
}

loc_804C2D34:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_804C2D44;
    }
}

loc_804C2D38:
{
    r3 = 65536;
    r3 = (r3 + -156);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_804C2D44:
{
    r0 = (r3 + 904);
    r3 = 0x80620000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3 = (r3 + -18752);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_804C2D20_statefree_v0(uint32_t native_r0, uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r0 = native_r0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

    goto loc_804C2D20;

loc_804C2D20:
{
}

loc_804C2D24:
{
    if ((static_cast<int32_t>(cached_r3) > static_cast<int32_t>(-904))) {
        goto loc_804C2D30;
    }
}

loc_804C2D28:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_804C2D30:
{
}

loc_804C2D34:
{
    if ((static_cast<int32_t>(cached_r3) < static_cast<int32_t>(60))) {
        goto loc_804C2D44;
    }
}

loc_804C2D38:
{
    cached_r3 = 65536;
    cached_r3 = (cached_r3 + -156);

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_804C2D44:
{
    cached_r0 = (cached_r3 + 904);
    cached_r3 = 0x80620000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(1));
    cached_r0 = (r0_rot_0 & -2);
    cached_r3 = (cached_r3 + -18752);
    r3_addr_0 = (cached_r3 + cached_r0);
    cached_r3 = MemoryInline::FlatRead16(r3_addr_0);

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x804C2D20 symbol=func_804C2D20_statefree_v0 gpr_in=0x00000009 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_804C2D20_statefree(uint32_t native_r0, uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = native_r0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

    goto loc_804C2D20;

loc_804C2D20:
{
}

loc_804C2D24:
{
    if ((static_cast<int32_t>(cached_r3) > static_cast<int32_t>(-904))) {
        goto loc_804C2D30;
    }
}

loc_804C2D28:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_804C2D30:
{
}

loc_804C2D34:
{
    if ((static_cast<int32_t>(cached_r3) < static_cast<int32_t>(60))) {
        goto loc_804C2D44;
    }
}

loc_804C2D38:
{
    cached_r3 = 65536;
    cached_r3 = (cached_r3 + -156);

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_804C2D44:
{
    cached_r0 = (cached_r3 + 904);
    cached_r3 = 0x80620000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(1));
    cached_r0 = (r0_rot_0 & -2);
    cached_r3 = (cached_r3 + -18752);
    r3_addr_0 = (cached_r3 + cached_r0);
    cached_r3 = MemoryInline::FlatRead16(r3_addr_0);

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x804C2D20 symbol=func_804C2D20_statefree gpr_in=0x00000009 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804C2D20 func_804C2D20 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_804C2D20_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_804C2D20(ctx);
    return ctx->gpr[3];
}
