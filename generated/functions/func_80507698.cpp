#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80507698(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80507698u);
    goto loc_80507698;

loc_80507698:
{
    r0 = MemoryInline::FlatRead16((r13 + -19504));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805076A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805076BC;
    }
}

loc_805076A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805076C4;
    }
}

loc_805076A8:
{
}

loc_805076AC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_805076B4;
    }
}

loc_805076B0:
{
    goto loc_805076C4;
}

loc_805076B4:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_805076BC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_805076C4:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002001 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80507698 func_80507698 preserves=true fpr_mask=0x00000000
