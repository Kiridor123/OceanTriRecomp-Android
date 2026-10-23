#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80819D18(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_80819D18;

loc_80819D18:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80819D1C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80819D24;
    }
}

loc_80819D20:
{
    goto loc_80819D38;
}

loc_80819D24:
{
    f2.d = (-(f2.d));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80819D2C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80819D34;
    }
}

loc_80819D30:
{
    goto loc_80819D38;
}

loc_80819D34:
{
    f2.d = f1.d;
}

loc_80819D38:
{
    f1.d = f2.d;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000006 fpr_write=0x00000006 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80819D18 func_80819D18 preserves=true fpr_mask=0x00000000
