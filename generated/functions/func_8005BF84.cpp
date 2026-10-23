#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005BF84(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_8005BF84;

loc_8005BF84:
{
    r5 = 0;
    r4 = 0x80580000u;
    r4 = (r4 + 2072);
    goto loc_8005BFAC;
}

loc_8005BF94:
{
}

loc_8005BF98:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8005BFA4;
    }
}

loc_8005BF9C:
{
    r3 = (r5 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

loc_8005BFA4:
{
    r5 = (r5 + 1);
    r4 = (r4 + 4);
}

loc_8005BFAC:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_8005BFB4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_8005BF94;
    }
}

loc_8005BFB8:
{
    r3 = 63;
    goto loc_8005BF84;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8005BF84 func_8005BF84 preserves=true fpr_mask=0x00000000
