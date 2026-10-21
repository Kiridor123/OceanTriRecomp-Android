#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8012E280_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8012E280u);
    goto loc_8012E280;

loc_8012E280:
{
    r0 = (r3 & 255);
}

loc_8012E288:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_8012E304;
    }
}

loc_8012E28C:
{
    r0 = (r4 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(155));
}

loc_8012E294:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012E2FC;
    }
}

loc_8012E298:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012E2CC;
    }
}

loc_8012E29C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(138));
}

loc_8012E2A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012E2FC;
    }
}

loc_8012E2A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012E2C0;
    }
}

loc_8012E2A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(129));
}

loc_8012E2AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012E2FC;
    }
}

loc_8012E2B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012E304;
    }
}

loc_8012E2B4:
{
}

loc_8012E2B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(123))) {
        goto loc_8012E2FC;
    }
}

loc_8012E2BC:
{
    goto loc_8012E304;
}

loc_8012E2C0:
{
}

loc_8012E2C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(148))) {
        goto loc_8012E2FC;
    }
}

loc_8012E2C8:
{
    goto loc_8012E304;
}

loc_8012E2CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(237));
}

loc_8012E2D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012E2FC;
    }
}

loc_8012E2D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012E2F0;
    }
}

loc_8012E2D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(231));
}

loc_8012E2DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012E2FC;
    }
}

loc_8012E2E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012E304;
    }
}

loc_8012E2E4:
{
}

loc_8012E2E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(186))) {
        goto loc_8012E2FC;
    }
}

loc_8012E2EC:
{
    goto loc_8012E304;
}

loc_8012E2F0:
{
}

loc_8012E2F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(248))) {
        goto loc_8012E2FC;
    }
}

loc_8012E2F8:
{
    goto loc_8012E304;
}

loc_8012E2FC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return r3;
}

loc_8012E304:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_8012E280(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8012E280_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012E280 func_8012E280 preserves=true fpr_mask=0x00000000
