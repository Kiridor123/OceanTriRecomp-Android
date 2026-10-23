#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8009CD10_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_8009CD10;

loc_8009CD10:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31524));
    f1.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8009CD48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009CD54;
    }
}

loc_8009CD4C:
{
    // inline leaf 0x80061110 (6 guest instruction(s))
    PpcSetPairedFprInline(f0, PPC_Fres(PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsNmsubInline(PPC_PsFromScalarInline(f1.d), f0.d, f2.d));
    f1.d = f0.d;
    // end of inlined leaf 0x80061110
    f1.d = PPC_PsToScalarInline(f1.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    goto loc_8009CD58;
}

loc_8009CD54:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31476));
}

loc_8009CD58:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31524));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8009CD68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009CD74;
    }
}

loc_8009CD6C:
{
    // inline leaf 0x80061110 (6 guest instruction(s))
    PpcSetPairedFprInline(f0, PPC_Fres(PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsNmsubInline(PPC_PsFromScalarInline(f1.d), f0.d, f2.d));
    f1.d = f0.d;
    // end of inlined leaf 0x80061110
    f1.d = PPC_PsToScalarInline(f1.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    goto loc_8009CD78;
}

loc_8009CD74:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31476));
}

loc_8009CD78:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31524));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8009CD88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009CD94;
    }
}

loc_8009CD8C:
{
    // inline leaf 0x80061110 (6 guest instruction(s))
    PpcSetPairedFprInline(f0, PPC_Fres(PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsNmsubInline(PPC_PsFromScalarInline(f1.d), f0.d, f2.d));
    f1.d = f0.d;
    // end of inlined leaf 0x80061110
    f0.d = PPC_PsToScalarInline(f0.d);
    f1.d = PPC_PsToScalarInline(f1.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    goto loc_8009CD98;
}

loc_8009CD94:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31476));
}

loc_8009CD98:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    r3 = r29;
    r4 = r30;
    r5 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x805019BCu>(ctx);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8009CD10(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8009CD10_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003E gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000002 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009CD10 func_8009CD10 preserves=true fpr_mask=0x00000000
