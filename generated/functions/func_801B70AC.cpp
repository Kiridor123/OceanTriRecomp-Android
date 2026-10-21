#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_801B70AC_ra8_2_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x801B70ACu);
    goto loc_801B70AC;

loc_801B70AC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead16((r3 + 552));
    r0 = (r0 & 6);
}

loc_801B70CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B70F4;
    }
}

loc_801B70D0:
{
    // inline leaf 0x801359A4 (4 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 460));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 464));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    // end of inlined leaf 0x801359A4
    f0.d = MemoryInline::FlatReadFloat32((r2 + -19872));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 528));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 396));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_801B70EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B70F4;
    }
}

loc_801B70F0:
{
    MemoryInline::FlatWriteFloat32((r31 + 396), f1.d);
}

loc_801B70F4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return f1.d;
}

}

extern "C" void func_801B70AC(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_801B70AC_ra8_2_0_2(ctx, ctx->gpr[3], ctx->fpr[1].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x00000003 gpr_return=0x00000000 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801B70AC func_801B70AC preserves=true fpr_mask=0x00000000
