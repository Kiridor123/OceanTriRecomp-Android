#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E8FDC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x800E8FDCu);
    goto loc_800E8FDC;

loc_800E8FDC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30136));
    f1.d = MemoryInline::FlatReadFloat32(r3);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800E8FE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E8FF8;
    }
}

loc_800E8FEC:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800E8FF4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800E9004;
    }
}

loc_800E8FF8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30136));
    MemoryInline::FlatWriteFloat32(r5, f0.d);
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_800E9004:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30132));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32(r5, f0.d);
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003C gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E8FDC func_800E8FDC preserves=true fpr_mask=0x00000000
