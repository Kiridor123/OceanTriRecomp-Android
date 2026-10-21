#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80079F78(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80079F78u);
    goto loc_80079F78;

loc_80079F78:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r5 = MemoryInline::FlatRead16((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_80079F84:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80079F90;
    }
}

loc_80079F88:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_80079F90:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80079F9C;
    }
}

loc_80079F94:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_80079F9C:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = MemoryInline::FlatReadFloat32(r4);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80079FA8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80079FB4;
    }
}

loc_80079FAC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_80079FB4:
{
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80079FB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80079FD4;
    }
}

loc_80079FBC:
{
    r3 = MemoryInline::FlatRead16((r3 + 8));
    r0 = MemoryInline::FlatRead16((r4 + 8));
}

loc_80079FC8:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_80079FD4;
    }
}

loc_80079FCC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_80079FD4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80079F78 func_80079F78 preserves=true fpr_mask=0x00000000
