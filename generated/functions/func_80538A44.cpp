#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80538A44_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80538A44u);
    goto loc_80538A44;

loc_80538A44:
{
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & 15);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80538A50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80538A78;
    }
}

loc_80538A54:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80538A64;
    }
}

loc_80538A58:
{
}

loc_80538A5C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80538A70;
    }
}

loc_80538A60:
{
    goto loc_80538A88;
}

loc_80538A64:
{
}

loc_80538A68:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_80538A88;
    }
}

loc_80538A6C:
{
    goto loc_80538A80;
}

loc_80538A70:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return r3;
}

loc_80538A78:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return r3;
}

loc_80538A80:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return r3;
}

loc_80538A88:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_80538A44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80538A44_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80538A44 func_80538A44 preserves=true fpr_mask=0x00000000
