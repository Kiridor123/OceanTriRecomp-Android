#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804AF000_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x804AF000u);
    goto loc_804AF000;

loc_804AF000:
{
}

loc_804AF004:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(10))) {
        goto loc_804AF010;
    }
}

loc_804AF008:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_804AF010:
{
}

loc_804AF014:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(13))) {
        goto loc_804AF02C;
    }
}

loc_804AF018:
{
    r0 = (r4 + -10);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    r3 = (r3 + 1);
    ctx->gpr[0] = r0;
    return r3;
}

loc_804AF02C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_804AF000(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804AF000_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804AF000 func_804AF000 preserves=true fpr_mask=0x00000000
