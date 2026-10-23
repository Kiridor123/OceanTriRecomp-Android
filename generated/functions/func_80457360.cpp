#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t cr6_0 = 0;
    uint32_t cr7_0 = 0;
    uint32_t fctiwzword0 = 0;

    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    uint32_t cr = ctx->cr;

    goto loc_80457360;

loc_80457360:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r4 = 0x80570000u;
    r4 = (r4 + 11264);
    r3 = 0;
    f0.d = MemoryInline::FlatReadFloat64(r4);
    f3.d = MemoryInline::FlatReadFloat64((r4 + 8));
    f4.d = MemoryInline::FlatReadFloat64((r4 + 16));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80457380:
{
    SetCRFloatResident(cr, 6, f1.d, f3.d);
}

loc_80457384:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_804573B4;
    }
}

loc_80457388:
{
    r3 = (r3 + -1);
    if (((cr & 0x00000080u) == 0)) {
        goto loc_804573B4;
    }
}

loc_80457390:
{
    SetCRFloatResident(cr, 7, f1.d, f4.d);
}

loc_80457394:
{
    f2.d = f1.d;
    if (((cr & 0x00000008u) != 0)) {
        goto loc_804573A0;
    }
}

loc_8045739C:
{
    f2.d = (f1.d - f4.d);
}

loc_804573A0:
{
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword0 = PPC_FprLowWordInline(f2.d);
    r3 = fctiwzword0;
    if (((cr & 0x00000008u) != 0)) {
        goto loc_804573B4;
    }
}

loc_804573B0:
{
    r3 = (r3 + -2147483648);
}

loc_804573B4:
{
    r1 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_80457360(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80457360_ra8_1e_8_0(ctx, ctx->gpr[3], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000001A gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001D fpr_return=0x00000000 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80457360 func_80457360 preserves=true fpr_mask=0x00000000
