#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_801920E4_ra8_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x801920E4u);
    goto loc_801920E4;

loc_801920E4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x8012ECA0 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2207));
    r4 = (r3 + -2);
    r3 = 1;
    r0 = (1 - r4);
    r3 = (r3 | ~r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8012ECA0
}

loc_80192100:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80192130;
    }
}

loc_80192104:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 836));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22644));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 836), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -23556));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019211C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80192124;
    }
}

loc_80192120:
{
    MemoryInline::FlatWriteFloat32((r31 + 836), f0.d);
}

loc_80192124:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 836));
    MemoryInline::FlatWriteFloat32((r31 + 840), f0.d);
    goto loc_80192158;
}

loc_80192130:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 836));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22644));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 836), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -23188));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80192148:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80192150;
    }
}

loc_8019214C:
{
    MemoryInline::FlatWriteFloat32((r31 + 836), f0.d);
}

loc_80192150:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 836));
    MemoryInline::FlatWriteFloat32((r31 + 840), f0.d);
}

loc_80192158:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_801920E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_801920E4_ra8_2_8_0(ctx, ctx->gpr[3], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801920E4 func_801920E4 preserves=true fpr_mask=0x00000000
