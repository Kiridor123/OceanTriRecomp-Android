#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80868FFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80869018_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t stackword1 = 0;
    uint32_t stackword2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x80868FFCu);
    goto loc_80868FFC;

loc_80868FFC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r6 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r6 + -21652));
    r0 = (r3 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = 0x808A0000u;
    r3 = (r3 + -22796);
    addr_lfsx_80869018_loc_0 = (r3 + r0);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_80869018_loc_0);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80869020:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80869054;
    }
}

loc_80869024:
{
    r0 = (r4 & 65535);
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat64((r3 + -21640));
    stackword1 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword2 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword1));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = PpcFmulsInline(f2.d, f0.d);
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -21648));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
}

loc_80869054:
{
    MemoryInline::FlatWriteFloat32(r5, f0.d);
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000004B gpr_return=0x00000008 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80868FFC func_80868FFC preserves=true fpr_mask=0x00000000
