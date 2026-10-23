#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80828630(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8082868C_loc_0 = 0;
    uint32_t addr_lfsx_808286D0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_80828630;

loc_80828630:
{
}

loc_80828634:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(1))) {
        goto loc_80828648;
    }
}

loc_80828638:
{
    f0.d = MemoryInline::FlatReadFloat32(r3);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80828640:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80828650;
    }
}

loc_80828648:
{
    r3 = MemoryInline::FlatRead16((r3 + 4));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_80828650:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r5 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r5 + -8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80828660:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80828670;
    }
}

loc_80828668:
{
    r3 = MemoryInline::FlatRead16((r5 + -4));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_80828670:
{
    r5 = (r4 + -1);
    r6 = 0;
    goto loc_808286B4;
}

loc_8082867C:
{
    r4 = (r6 + r5);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r4 = (r0 + r4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -8);
    addr_lfsx_8082868C_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8082868C_loc_0);
    r4 = (static_cast<int32_t>(r4) >> 1);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80828698:
{
    r0 = cr;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
}

loc_808286A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808286A8;
    }
}

loc_808286A4:
{
    r5 = r4;
}

loc_808286A8:
{
}

loc_808286AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_808286B4;
    }
}

loc_808286B0:
{
    r6 = r4;
}

loc_808286B4:
{
    r0 = (r5 + -1);
}

loc_808286BC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(r0))) {
        goto loc_808286C8;
    }
}

loc_808286C0:
{
}

loc_808286C4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r5))) {
        goto loc_8082867C;
    }
}

loc_808286C8:
{
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_0 & -8);
    r4 = 0x80840000u;
    addr_lfsx_808286D0_loc_0 = (r3 + r5);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_808286D0_loc_0);
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 18520));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_808286E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808286FC;
    }
}

loc_808286E8:
{
    r4 = 0x80840000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 18524));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_808286F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808286FC;
    }
}

loc_808286F8:
{
    r0 = 1;
}

loc_808286FC:
{
}

loc_80828700:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80828710;
    }
}

loc_80828704:
{
    r3 = (r3 + r5);
    r3 = MemoryInline::FlatRead16((r3 + 4));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_80828710:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & -8);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 4));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80828630 func_80828630 preserves=true fpr_mask=0x00000000
