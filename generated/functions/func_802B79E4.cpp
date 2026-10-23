#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802B79E4_ra8_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;

    goto loc_802B79E4;

loc_802B79E4:
{
    r0 = MemoryInline::FlatRead8((r3 + 9));
}

loc_802B79EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802B7A14;
    }
}

loc_802B79F0:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13620));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802B79FC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802B7A14;
    }
}

loc_802B7A00:
{
    r0 = MemoryInline::FlatRead8((r3 + 116));
}

loc_802B7A08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B7A14;
    }
}

loc_802B7A0C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

loc_802B7A14:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_802B79E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802B79E4_ra8_2_8_0(ctx, ctx->gpr[3], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000D gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802B79E4 func_802B79E4 preserves=true fpr_mask=0x00000000
