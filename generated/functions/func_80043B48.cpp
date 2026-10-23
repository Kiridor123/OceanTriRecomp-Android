#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80043B48_ra8_2_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;

    goto loc_80043B48;

loc_80043B48:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r4 = (r3 * 848);
    r3 = 0x80660000u;
    r0 = (r3 + -18480);
    r3 = (r0 + r4);
    r3 = (r3 + 252);
    r5 = MemoryInline::FlatRead8((r3 + 424));
    r0 = (r5 + -1);
    r0 = (r0 & 15);
    r0 = (r0 * 12);
    r4 = (r3 + r0);
    r0 = (r5 * 12);
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 44));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32696));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80043B90:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80043B98;
    }
}

loc_80043B94:
{
    f1.d = (-(f1.d));
}

loc_80043B98:
{
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_80043B48(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80043B48_ra8_2_8_0(ctx, ctx->gpr[3], ctx->fpr[1].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000002 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80043B48 func_80043B48 preserves=true fpr_mask=0x00000000
