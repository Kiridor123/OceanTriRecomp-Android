#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8012E1BC_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8012E1BC;

loc_8012E1BC:
{
    r0 = (r3 & 255);
}

loc_8012E1C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_8012E278;
    }
}

loc_8012E1C8:
{
    r0 = (r4 & 255);
}

loc_8012E1D0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(156))) {
        goto loc_8012E22C;
    }
}

loc_8012E1D4:
{
}

loc_8012E1D8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(137))) {
        goto loc_8012E204;
    }
}

loc_8012E1DC:
{
}

loc_8012E1E0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(128))) {
        goto loc_8012E1F8;
    }
}

loc_8012E1E4:
{
}

loc_8012E1E8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(124))) {
        goto loc_8012E278;
    }
}

loc_8012E1EC:
{
}

loc_8012E1F0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(122))) {
        goto loc_8012E270;
    }
}

loc_8012E1F4:
{
    goto loc_8012E278;
}

loc_8012E1F8:
{
}

loc_8012E1FC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(130))) {
        goto loc_8012E278;
    }
}

loc_8012E200:
{
    goto loc_8012E270;
}

loc_8012E204:
{
}

loc_8012E208:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(149))) {
        goto loc_8012E220;
    }
}

loc_8012E20C:
{
}

loc_8012E210:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(147))) {
        goto loc_8012E270;
    }
}

loc_8012E214:
{
}

loc_8012E218:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(139))) {
        goto loc_8012E278;
    }
}

loc_8012E21C:
{
    goto loc_8012E270;
}

loc_8012E220:
{
}

loc_8012E224:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(154))) {
        goto loc_8012E270;
    }
}

loc_8012E228:
{
    goto loc_8012E278;
}

loc_8012E22C:
{
}

loc_8012E230:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(236))) {
        goto loc_8012E25C;
    }
}

loc_8012E234:
{
}

loc_8012E238:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(230))) {
        goto loc_8012E250;
    }
}

loc_8012E23C:
{
}

loc_8012E240:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(187))) {
        goto loc_8012E278;
    }
}

loc_8012E244:
{
}

loc_8012E248:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(185))) {
        goto loc_8012E270;
    }
}

loc_8012E24C:
{
    goto loc_8012E278;
}

loc_8012E250:
{
}

loc_8012E254:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(232))) {
        goto loc_8012E278;
    }
}

loc_8012E258:
{
    goto loc_8012E270;
}

loc_8012E25C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(248));
}

loc_8012E260:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012E270;
    }
}

loc_8012E264:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012E278;
    }
}

loc_8012E268:
{
}

loc_8012E26C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(238))) {
        goto loc_8012E278;
    }
}

loc_8012E270:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return r3;
}

loc_8012E278:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_8012E1BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8012E1BC_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012E1BC func_8012E1BC preserves=true fpr_mask=0x00000000
