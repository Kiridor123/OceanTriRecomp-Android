#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081AA30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8081AA30u);
    goto loc_8081AA30;

loc_8081AA30:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8081AA38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_return;
    }
}

loc_8081AA3C:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_8081AA44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081AA64;
    }
}

loc_8081AA48:
{
}

loc_8081AA4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8081AAA0;
    }
}

loc_8081AA50:
{
}

loc_8081AA54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8081AAD0;
    }
}

loc_8081AA58:
{
}

loc_8081AA5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8081AB04;
    }
}

loc_8081AA60:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_8081AA64:
{
    r4 = 0x80840000u;
    f3.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 17552));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8081AA88:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8081AA90:
{
    r0 = 0;
    MemoryInline::FlatWriteFloat32((r3 + 12), f2.d);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_8081AAA0:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8081AAB8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8081AAC0:
{
    r0 = 0;
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_8081AAD0:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f2.d);
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8081AAE8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8081AAF0:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_8081AB04:
{
    r0 = MemoryInline::FlatRead8((r3 + 28));
}

loc_8081AB0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8081AB4C;
    }
}

loc_8081AB10:
{
    r4 = 0x80840000u;
    f3.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 17552));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8081AB34:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8081AB3C:
{
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 12), f2.d);
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_8081AB4C:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8081AB64:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8081AB6C:
{
    r0 = 0;
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081AA30 func_8081AA30 preserves=true fpr_mask=0x00000000
