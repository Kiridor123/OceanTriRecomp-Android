#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800AEEAC_ra18_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    uint32_t cr = ctx->cr;

    goto loc_800AEEAC;

loc_800AEEAC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = r3;
    r31 = r4;
    r3 = (r1 + 8);
    r4 = r0;
    // inline leaf 0x800514F4 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32(r3, r5);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x800514F4
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -31160), 0, 12u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -31160));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AEEDC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800AEEEC;
    }
}

loc_800AEEE0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -31156));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AEEE8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800AEEF4;
    }
}

loc_800AEEEC:
{
    r3 = 3;
    goto loc_800AEFD4;
}

loc_800AEEF4:
{
    r0 = (r31 & 255);
    r0 = (r0 & 1);
}

loc_800AEF00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AEF18;
    }
}

loc_800AEF04:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -31152));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AEF0C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800AEF18;
    }
}

loc_800AEF10:
{
    r3 = 3;
    goto loc_800AEFD4;
}

loc_800AEF18:
{
    r0 = (r31 & 255);
    r0 = (r0 & 2);
}

loc_800AEF24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AEF40;
    }
}

loc_800AEF28:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -31152));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AEF34:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800AEF40;
    }
}

loc_800AEF38:
{
    r3 = 3;
    goto loc_800AEFD4;
}

loc_800AEF40:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -31160));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_800AEF4C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800AEF5C;
    }
}

loc_800AEF50:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -31156));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800AEF58:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800AEF64;
    }
}

loc_800AEF5C:
{
    r3 = 3;
    goto loc_800AEFD4;
}

loc_800AEF64:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_800AEF6C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800AEF78;
    }
}

loc_800AEF70:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800AEF74:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800AEF80;
    }
}

loc_800AEF78:
{
    r3 = 3;
    goto loc_800AEFD4;
}

loc_800AEF80:
{
    r3 = (r1 + 8);
    // inline leaf 0x80050F40 (6 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80050F40
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -31156));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_800AEF90:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800AEF9C;
    }
}

loc_800AEF94:
{
    r3 = 3;
    goto loc_800AEFD4;
}

loc_800AEF9C:
{
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f0.d), PPC_PsToScalarInline(f1.d));
}

loc_800AEFA0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800AEFAC;
    }
}

loc_800AEFA4:
{
    r3 = 1;
    goto loc_800AEFD4;
}

loc_800AEFAC:
{
    r0 = (r31 & 255);
}

loc_800AEFB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AEFD0;
    }
}

loc_800AEFB8:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -31152));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800AEFC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800AEFD0;
    }
}

loc_800AEFC8:
{
    r3 = 1;
    goto loc_800AEFD4;
}

loc_800AEFD0:
{
    r3 = 2;
}

loc_800AEFD4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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

extern "C" void func_800AEEAC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800AEEAC_ra18_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800AEEAC func_800AEEAC preserves=true fpr_mask=0x00000000
