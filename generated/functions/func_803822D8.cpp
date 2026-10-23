#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803822D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_803822D8;

loc_803822D8:
{
    r5 = (r3 + 808);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -7704));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_803822E4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_803822EC:
{
    r4 = (r4 & 255);
    r5_addr_1 = (r5 + r4);
    r0 = MemoryInline::FlatRead8(r5_addr_1);
}

loc_803822F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80382338;
    }
}

loc_803822FC:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r5 + r0);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -7672));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80382320:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80382328:
{
    MemoryInline::FlatWriteFloat32((r3 + 16), f2.d);
    r0 = 1;
    r5_addr_2 = (r5 + r4);
    MemoryInline::FlatWrite8(r5_addr_2, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_80382338:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r5 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -7672));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8038235C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80382364:
{
    MemoryInline::FlatWriteFloat32((r3 + 16), f2.d);
    r0 = 0;
    r5_addr_3 = (r5 + r4);
    MemoryInline::FlatWrite8(r5_addr_3, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003D gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803822D8 func_803822D8 preserves=true fpr_mask=0x00000000
