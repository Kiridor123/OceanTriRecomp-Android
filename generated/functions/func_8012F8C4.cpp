#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012F8C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_8012F8C4;

loc_8012F8C4:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1124));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8012F8CC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012F8E8;
    }
}

loc_8012F8D0:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 1124), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8012F8DC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012F900;
    }
}

loc_8012F8E0:
{
    MemoryInline::FlatWriteFloat32((r3 + 1124), f1.d);
    goto loc_8012F900;
}

loc_8012F8E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012F900;
    }
}

loc_8012F8EC:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 1124), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8012F8F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012F900;
    }
}

loc_8012F8FC:
{
    MemoryInline::FlatWriteFloat32((r3 + 1124), f1.d);
}

loc_8012F900:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1124));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28240));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8012F90C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012F918;
    }
}

loc_8012F910:
{
    MemoryInline::FlatWriteFloat32((r3 + 1124), f0.d);
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_8012F918:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28236));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8012F920:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_8012F924:
{
    MemoryInline::FlatWriteFloat32((r3 + 1124), f0.d);
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000007 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012F8C4 func_8012F8C4 preserves=true fpr_mask=0x00000000
