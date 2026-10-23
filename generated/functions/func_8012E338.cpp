#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8012E338_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8012E338;

loc_8012E338:
{
    r0 = (r3 & 255);
}

loc_8012E340:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_8012E3B8;
    }
}

loc_8012E344:
{
    r0 = (r4 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(157));
}

loc_8012E34C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012E3B0;
    }
}

loc_8012E350:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012E38C;
    }
}

loc_8012E354:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(140));
}

loc_8012E358:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012E3B0;
    }
}

loc_8012E35C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012E380;
    }
}

loc_8012E360:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(131));
}

loc_8012E364:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012E3B0;
    }
}

loc_8012E368:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012E3B8;
    }
}

loc_8012E36C:
{
}

loc_8012E370:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(128))) {
        goto loc_8012E3B8;
    }
}

loc_8012E374:
{
}

loc_8012E378:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(125))) {
        goto loc_8012E3B0;
    }
}

loc_8012E37C:
{
    goto loc_8012E3B8;
}

loc_8012E380:
{
}

loc_8012E384:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(150))) {
        goto loc_8012E3B0;
    }
}

loc_8012E388:
{
    goto loc_8012E3B8;
}

loc_8012E38C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(233));
}

loc_8012E390:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012E3B0;
    }
}

loc_8012E394:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012E3A4;
    }
}

loc_8012E398:
{
}

loc_8012E39C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(188))) {
        goto loc_8012E3B0;
    }
}

loc_8012E3A0:
{
    goto loc_8012E3B8;
}

loc_8012E3A4:
{
}

loc_8012E3A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(239))) {
        goto loc_8012E3B0;
    }
}

loc_8012E3AC:
{
    goto loc_8012E3B8;
}

loc_8012E3B0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return r3;
}

loc_8012E3B8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_8012E338(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8012E338_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012E338 func_8012E338 preserves=true fpr_mask=0x00000000
