#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8007375C_ra8_e_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8007375Cu);
    goto loc_8007375C;

loc_8007375C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteFloat32(r4, f1.d);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r4 + 4), f2.d);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r4 + 8), f3.d);
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_8007378C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800737E8;
    }
}

loc_80073790:
{
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_80073794:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800737E8;
    }
}

loc_80073798:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31968));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800737A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800737BC;
    }
}

loc_800737A4:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x80073828 (2 guest instruction(s))
    r3 = (r3 | 1073741824);
    // end of inlined leaf 0x80073828
    r4 = MemoryInline::FlatRead32((r31 + 8));
    MemoryInline::FlatWrite32(r4, r3);
    goto loc_800737FC;
}

loc_800737BC:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x80073820 (2 guest instruction(s))
    r3 = (r3 | 268435456);
    // end of inlined leaf 0x80073820
    r4 = MemoryInline::FlatRead32((r31 + 8));
    MemoryInline::FlatWrite32(r4, r3);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x80073818 (2 guest instruction(s))
    r3 = (r3 & 1073741823);
    // end of inlined leaf 0x80073818
    r4 = MemoryInline::FlatRead32((r31 + 8));
    MemoryInline::FlatWrite32(r4, r3);
    goto loc_800737FC;
}

loc_800737E8:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x80073810 (2 guest instruction(s))
    r3 = (r3 & 268435455);
    // end of inlined leaf 0x80073810
    r4 = MemoryInline::FlatRead32((r31 + 8));
    MemoryInline::FlatWrite32(r4, r3);
}

loc_800737FC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_8007375C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8007375C_ra8_e_8_0(ctx, ctx->gpr[3], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8007375C func_8007375C preserves=true fpr_mask=0x00000000
