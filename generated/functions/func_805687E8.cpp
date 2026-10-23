#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805687E8_ra8_2_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_805687E8;

loc_805687E8:
{
    r0 = MemoryInline::FlatRead32((r3 + 7144));
    MemoryInline::FlatWriteFloat32((r3 + 6916), f1.d);
}

loc_805687F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80568804;
    }
}

loc_805687F8:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = (-(f0.d));
    goto loc_80568808;
}

loc_80568804:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -844));
}

loc_80568808:
{
    MemoryInline::FlatWriteFloat32((r3 + 256), f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    return;
}

}

extern "C" void func_805687E8(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_805687E8_ra8_2_0_0(ctx, ctx->gpr[3], ctx->fpr[1].d);
}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000002 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805687E8 func_805687E8 preserves=true fpr_mask=0x00000000
