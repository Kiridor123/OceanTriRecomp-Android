#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_801DFC6C_ra8_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x801DFC6Cu);
    goto loc_801DFC6C;

loc_801DFC6C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x8012ECC4 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2218));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x8012ECC4
}

loc_801DFC88:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801DFD10;
    }
}

loc_801DFC8C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 808));
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -17832), 0, 648u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 624u, (r2 + -17208));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 808), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 284u, (r2 + -17548));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801DFCA4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801DFCAC;
    }
}

loc_801DFCA8:
{
    MemoryInline::FlatWriteFloat32((r31 + 808), f0.d);
}

loc_801DFCAC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 812));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -17832));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 812), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 628u, (r2 + -17204));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801DFCC4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801DFCCC;
    }
}

loc_801DFCC8:
{
    MemoryInline::FlatWriteFloat32((r31 + 812), f0.d);
}

loc_801DFCCC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 820));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 632u, (r2 + -17200));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 820), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 636u, (r2 + -17196));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801DFCE4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801DFCEC;
    }
}

loc_801DFCE8:
{
    MemoryInline::FlatWriteFloat32((r31 + 820), f0.d);
}

loc_801DFCEC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 824));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 640u, (r2 + -17192));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 824), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 644u, (r2 + -17188));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801DFD04:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801DFD8C;
    }
}

loc_801DFD08:
{
    MemoryInline::FlatWriteFloat32((r31 + 824), f0.d);
    goto loc_801DFD8C;
}

loc_801DFD10:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 808));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17208));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 808), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17832));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801DFD28:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DFD30;
    }
}

loc_801DFD2C:
{
    MemoryInline::FlatWriteFloat32((r31 + 808), f0.d);
}

loc_801DFD30:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 812));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17832));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 812), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_801DFD44:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DFD4C;
    }
}

loc_801DFD48:
{
    MemoryInline::FlatWriteFloat32((r31 + 812), f1.d);
}

loc_801DFD4C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 820));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17200));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 820), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17832));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801DFD64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DFD6C;
    }
}

loc_801DFD68:
{
    MemoryInline::FlatWriteFloat32((r31 + 820), f0.d);
}

loc_801DFD6C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 824));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17192));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 824), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17832));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801DFD84:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DFD8C;
    }
}

loc_801DFD88:
{
    MemoryInline::FlatWriteFloat32((r31 + 824), f0.d);
}

loc_801DFD8C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_801DFC6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_801DFC6C_ra8_2_8_0(ctx, ctx->gpr[3], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801DFC6C func_801DFC6C preserves=true fpr_mask=0x00000000
