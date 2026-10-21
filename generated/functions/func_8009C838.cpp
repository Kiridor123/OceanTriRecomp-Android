#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8009C838(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_8009C958_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t cr6_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r31_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x8009C838u);
    goto loc_8009C838;

loc_8009C838:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r4;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_8009C878:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009C890;
    }
}

loc_8009C87C:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8009C888:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009C890;
    }
}

loc_8009C88C:
{
    r10 = 0;
}

loc_8009C890:
{
}

loc_8009C894:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8009C8AC;
    }
}

loc_8009C898:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8009C8A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009C8AC;
    }
}

loc_8009C8A8:
{
    r9 = 0;
}

loc_8009C8AC:
{
}

loc_8009C8B0:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009C8C4;
    }
}

loc_8009C8B4:
{
    r0 = (r11 + 1073741824);
}

loc_8009C8BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009C8C4;
    }
}

loc_8009C8C0:
{
    r8 = 0;
}

loc_8009C8C4:
{
}

loc_8009C8C8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009C8E0;
    }
}

loc_8009C8CC:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8009C8D8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009C8E0;
    }
}

loc_8009C8DC:
{
    r7 = 0;
}

loc_8009C8E0:
{
}

loc_8009C8E4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009C8FC;
    }
}

loc_8009C8E8:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8009C8F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009C8FC;
    }
}

loc_8009C8F8:
{
    r6 = 0;
}

loc_8009C8FC:
{
}

loc_8009C900:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009C918;
    }
}

loc_8009C904:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009C910:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009C918;
    }
}

loc_8009C914:
{
    r5 = 0;
}

loc_8009C918:
{
}

loc_8009C91C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009C940;
    }
}

loc_8009C920:
{
    r3 = 0x80590000u;
    r3 = (r3 + 8456);
    r4 = 934;
    r5 = 0x80590000u;
    r5 = (r5 + 8944);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009C940u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_8009C940:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 8));
    r3 = 0x80570000u;
    r3 = (r3 + 17568);
    r0 = (r2 + -31536);
    addr_psqx_8009C958_loc_0 = r0;
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8009C958_loc_0));
    f5.d = MemoryInline::FlatReadFloat32((r2 + -31528));
    r6 = (r1 + 8);
    PpcSetPairedFprInline(f3, PPC_PsMerge00Inline(f3.d, f3.d));
    PpcSetPairedFprInline(f4, PPC_PsNegInline(f3.d));
    PpcSetPairedFprInline(f6, PPC_PsSubInline(f3.d, f3.d));
    PpcSetPairedFprInline(f7, PPC_PsMerge00Inline(PPC_PsFromScalarInline(f0.d), PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f7, PPC_PsMuls0Inline(f7.d, PPC_PsFromScalarInline(f5.d)));
    PpcSetPairedFprInline(f0, PPC_PsAbsInline(f7.d));
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs0Inline(f0.d), PpcGetPs0Inline(f3.d));
}

loc_8009C980:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8009C990;
    }
}

loc_8009C984:
{
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f0.d, f4.d, f0.d));
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs0Inline(f0.d), PpcGetPs0Inline(f3.d));
}

loc_8009C98C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009C984;
    }
}

loc_8009C990:
{
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs1Inline(f0.d), PpcGetPs1Inline(f3.d));
}

loc_8009C994:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8009C9AC;
    }
}

loc_8009C998:
{
    PpcSetPairedFprInline(f0, PPC_PsMerge10Inline(f0.d, f0.d));
}

loc_8009C99C:
{
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f0.d, f4.d, f0.d));
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs0Inline(f0.d), PpcGetPs0Inline(f3.d));
}

loc_8009C9A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009C99C;
    }
}

loc_8009C9A8:
{
    PpcSetPairedFprInline(f0, PPC_PsMerge10Inline(f0.d, f0.d));
}

loc_8009C9AC:
{
    // psq_store w=0 quant=3 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 3u>(ctx, r6, f0.d);
    f4.d = PpcFmulsInline(f2.d, f5.d);
    // psq_load w=0 quant=3 (using PPC_PsqL)
    PpcSetPairedFprInline(f5, PPC_PsqLStackInline<0u, 3u>(ctx, r6));
    f2.d = std::fabs(f4.d);
    SetCRFloatResident(cr, 0, f2.d, PPC_PsToScalarInline(f3.d));
}

loc_8009C9C0:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8009C9D4;
    }
}

loc_8009C9C8:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - PPC_PsToScalarInline(f3.d)));
    SetCRFloatResident(cr, 0, f2.d, PPC_PsToScalarInline(f3.d));
}

loc_8009C9D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009C9C8;
    }
}

loc_8009C9D4:
{
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 3u>(ctx, r6, PPC_PsFromScalarInline(f2.d));
    PpcSetPairedFprInline(f5, PPC_PsSubInline(f0.d, f5.d));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
    r4 = (r4_rot_0 & 4080);
    r4 = (r3 + r4);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r5 = (r5_rot_0 & 4080);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 8);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0));
    r5 = (r3 + r5);
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f8.d, f5.d, f3.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs0Inline(f7.d), PpcGetPs0Inline(f6.d));
}

loc_8009CA00:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_0 = (r5 + 8);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_0));
    r0 = MemoryInline::FlatRead16((r1 + 8));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009CA14;
    }
}

loc_8009CA0C:
{
    PpcSetPairedFprInline(f9, PPC_PsNegInline(f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMerge01Inline(f9.d, f0.d));
}

loc_8009CA14:
{
    PpcSetPairedFprInline(f1, PPC_PsMadds1Inline(f8.d, f5.d, f3.d));
    // psq_load w=1 quant=3 (using PPC_PsqL)
    PpcSetPairedFprInline(f5, PPC_PsqLStackInline<1u, 3u>(ctx, r6));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & 4080);
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs1Inline(f7.d), PpcGetPs1Inline(f6.d));
}

loc_8009CA24:
{
    r4 = (r3 + r0);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - PPC_PsToScalarInline(f5.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 8);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009CA40;
    }
}

loc_8009CA38:
{
    PpcSetPairedFprInline(f9, PPC_PsNegInline(f1.d));
    PpcSetPairedFprInline(f1, PPC_PsMerge01Inline(f9.d, f1.d));
}

loc_8009CA40:
{
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f8.d, PPC_PsFromScalarInline(f5.d), f3.d));
    SetCRFloatResident(cr, 0, f4.d, PPC_PsToScalarInline(f6.d));
}

loc_8009CA48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009CA54;
    }
}

loc_8009CA4C:
{
    PpcSetPairedFprInline(f9, PPC_PsNegInline(f2.d));
    PpcSetPairedFprInline(f2, PPC_PsMerge01Inline(f9.d, f2.d));
}

loc_8009CA54:
{
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f1.d, f0.d));
    PpcSetPairedFprInline(f3, PPC_PsMerge10Inline(f2.d, f2.d));
    PpcSetPairedFprInline(f2, PPC_PsMuls1Inline(f2.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsNegInline(f2.d));
    PpcSetPairedFprInline(f2, PPC_PsMerge01Inline(f0.d, f2.d));
    PpcSetPairedFprInline(f3, PPC_PsMadds0Inline(f3.d, f1.d, f2.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r31, f3.d);
    PpcSetPairedFprInline(f1, PPC_PsMerge10Inline(f1.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_0 = (r31 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_0, f1.d);
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x000002FF fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009C838 func_8009C838 preserves=true fpr_mask=0x00000000
