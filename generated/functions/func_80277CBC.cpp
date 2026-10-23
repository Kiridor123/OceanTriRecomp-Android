#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80277CBC_ra18_2_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;

    goto loc_80277CBC;

loc_80277CBC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r4 = MemoryInline::FlatRead32((r3 + 316));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14876));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80277CD0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80277CD8;
    }
}

loc_80277CD4:
{
    f1.d = f0.d;
}

loc_80277CD8:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 120));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite16((r3 + 612), static_cast<uint16_t>(r0));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r4;
}

}

extern "C" void func_80277CBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80277CBC_ra18_2_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001E gpr_write=0x00000013 gpr_return=0x00000010 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80277CBC func_80277CBC preserves=true fpr_mask=0x00000000
