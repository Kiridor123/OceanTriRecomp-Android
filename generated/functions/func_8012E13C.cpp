#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8012E13C_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8012E13C;

loc_8012E13C:
{
    r0 = (r3 & 255);
}

loc_8012E144:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_8012E1B4;
    }
}

loc_8012E148:
{
    r0 = (r4 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(156));
}

loc_8012E150:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012E1AC;
    }
}

loc_8012E154:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012E188;
    }
}

loc_8012E158:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(139));
}

loc_8012E15C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012E1AC;
    }
}

loc_8012E160:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012E17C;
    }
}

loc_8012E164:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(130));
}

loc_8012E168:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012E1AC;
    }
}

loc_8012E16C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012E1B4;
    }
}

loc_8012E170:
{
}

loc_8012E174:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(124))) {
        goto loc_8012E1AC;
    }
}

loc_8012E178:
{
    goto loc_8012E1B4;
}

loc_8012E17C:
{
}

loc_8012E180:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(149))) {
        goto loc_8012E1AC;
    }
}

loc_8012E184:
{
    goto loc_8012E1B4;
}

loc_8012E188:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(232));
}

loc_8012E18C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012E1AC;
    }
}

loc_8012E190:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012E1A0;
    }
}

loc_8012E194:
{
}

loc_8012E198:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(187))) {
        goto loc_8012E1AC;
    }
}

loc_8012E19C:
{
    goto loc_8012E1B4;
}

loc_8012E1A0:
{
}

loc_8012E1A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(238))) {
        goto loc_8012E1AC;
    }
}

loc_8012E1A8:
{
    goto loc_8012E1B4;
}

loc_8012E1AC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return r3;
}

loc_8012E1B4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_8012E13C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8012E13C_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012E13C func_8012E13C preserves=true fpr_mask=0x00000000
