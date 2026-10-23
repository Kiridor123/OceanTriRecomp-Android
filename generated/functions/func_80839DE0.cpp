#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80839DE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_80839DE0;

loc_80839DE0:
{
    r6 = 0;
    r5 = 0;
    goto loc_80839E04;
}

loc_80839DF0:
{
}

loc_80839DF4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r6))) {
        goto loc_80839E00;
    }
}

loc_80839DF8:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

loc_80839E00:
{
    r6 = (r6 + 1);
}

loc_80839E04:
{
}

loc_80839E08:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80839E1C;
    }
}

loc_80839E0C:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r5 = (r5 + r0);
    r5 = MemoryInline::FlatRead32((r5 + 4));
    goto loc_80839E20;
}

loc_80839E1C:
{
    r5 = MemoryInline::FlatRead32(r3);
}

loc_80839E20:
{
}

loc_80839E24:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80839DF0;
    }
}

loc_80839E28:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80839DE0 func_80839DE0 preserves=true fpr_mask=0x00000000
