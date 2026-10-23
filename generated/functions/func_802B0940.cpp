#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802B0940_ra8_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_802B0940;

loc_802B0940:
{
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r0 = MemoryInline::FlatRead8((r3 + 3013));
}

loc_802B0950:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(6))) {
        goto loc_802B095C;
    }
}

loc_802B0954:
{
}

loc_802B0958:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(17))) {
        goto loc_return;
    }
}

loc_802B095C:
{
    r0 = MemoryInline::FlatRead8((r3 + 3014));
}

loc_802B0964:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_return;
    }
}

loc_802B0968:
{
    MemoryInline::FlatWriteRamFloat32((r3 + 10264), f1.d);
    ctx->gpr[0] = r0;
    return r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_802B0940(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802B0940_ra8_2_8_0(ctx, ctx->gpr[3], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000002 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802B0940 func_802B0940 preserves=true fpr_mask=0x00000000
