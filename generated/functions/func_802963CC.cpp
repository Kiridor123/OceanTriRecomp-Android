#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802963CC_ra18_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;

    goto loc_802963CC;

loc_802963CC:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 84));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802963D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8029640C;
    }
}

loc_802963DC:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 72));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802963E4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8029640C;
    }
}

loc_802963E8:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 92));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802963F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8029640C;
    }
}

loc_802963F8:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 80));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80296400:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8029640C;
    }
}

loc_80296404:
{
    r3 = 1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

loc_8029640C:
{
    r3 = 0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_802963CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802963CC_ra18_2_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802963CC func_802963CC preserves=true fpr_mask=0x00000000
