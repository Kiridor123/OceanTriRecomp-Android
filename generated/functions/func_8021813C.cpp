#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8021813C_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8021813C;

loc_8021813C:
{
    r0 = (r3 & 255);
}

loc_80218144:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(11))) {
        goto loc_80218160;
    }
}

loc_80218148:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_8021814C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8021818C;
    }
}

loc_80218150:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80218174;
    }
}

loc_80218154:
{
}

loc_80218158:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_80218184;
    }
}

loc_8021815C:
{
    goto loc_80218194;
}

loc_80218160:
{
}

loc_80218164:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(16))) {
        goto loc_80218194;
    }
}

loc_80218168:
{
}

loc_8021816C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(14))) {
        goto loc_80218174;
    }
}

loc_80218170:
{
    goto loc_8021817C;
}

loc_80218174:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return r3;
}

loc_8021817C:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return r3;
}

loc_80218184:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return r3;
}

loc_8021818C:
{
    r3 = 4;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return r3;
}

loc_80218194:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_8021813C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8021813C_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8021813C func_8021813C preserves=true fpr_mask=0x00000000
