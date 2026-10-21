#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802D3F80_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    MKW_GUEST_ENTER(0x802D3F80u);
    goto loc_802D3F80;

loc_802D3F80:
{
    r5 = 255;
    r4 = MemoryInline::FlatRead8((r3 + 590));
}

loc_802D3F8C:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_802D3FA8;
    }
}

loc_802D3F90:
{
    r0 = 255;
}

loc_802D3F98:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_802D3FA4;
    }
}

loc_802D3F9C:
{
}

loc_802D3FA0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_802D3FA8;
    }
}

loc_802D3FA4:
{
    r5 = r4;
}

loc_802D3FA8:
{
    r4 = MemoryInline::FlatRead8((r3 + 682));
}

loc_802D3FB0:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_802D3FCC;
    }
}

loc_802D3FB4:
{
    r0 = (r5 & 255);
}

loc_802D3FBC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_802D3FC8;
    }
}

loc_802D3FC0:
{
}

loc_802D3FC4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_802D3FCC;
    }
}

loc_802D3FC8:
{
    r5 = r4;
}

loc_802D3FCC:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802D3F80(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802D3F80_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D3F80 func_802D3F80 preserves=true fpr_mask=0x00000000
