#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804155BC_ra10_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x804155BCu);
    goto loc_804155BC;

loc_804155BC:
{
    r0 = (r4 & 255);
}

loc_804155C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80415608;
    }
}

loc_804155C8:
{
}

loc_804155CC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(144))) {
        goto loc_80415608;
    }
}

loc_804155D0:
{
    r0 = (r4 + -48);
    r0 = (r0 & 255);
}

loc_804155DC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(9))) {
        goto loc_80415608;
    }
}

loc_804155E0:
{
    r0 = (r4 + -65);
    r0 = (r0 & 255);
}

loc_804155EC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(25))) {
        goto loc_80415608;
    }
}

loc_804155F0:
{
    r0 = (r4 + -97);
    r0 = (r0 & 255);
}

loc_804155FC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(25))) {
        goto loc_80415608;
    }
}

loc_80415600:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_80415608:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}

extern "C" void func_804155BC(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_804155BC_ra10_0_0_0(ctx, ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000011 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804155BC func_804155BC preserves=true fpr_mask=0x00000000
