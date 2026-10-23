#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8009C4E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr6_0 = 0;
    uint32_t r30_psq_tmp_0 = 0;
    uint32_t r30_psq_tmp_1 = 0;
    uint32_t r30_psq_tmp_2 = 0;
    uint32_t r31_psq_tmp_0 = 0;

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
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8009C4E8;

loc_8009C4E8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_8009C528:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009C540;
    }
}

loc_8009C52C:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8009C538:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009C540;
    }
}

loc_8009C53C:
{
    r10 = 0;
}

loc_8009C540:
{
}

loc_8009C544:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8009C55C;
    }
}

loc_8009C548:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8009C554:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009C55C;
    }
}

loc_8009C558:
{
    r9 = 0;
}

loc_8009C55C:
{
}

loc_8009C560:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009C574;
    }
}

loc_8009C564:
{
    r0 = (r11 + 1073741824);
}

loc_8009C56C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009C574;
    }
}

loc_8009C570:
{
    r8 = 0;
}

loc_8009C574:
{
}

loc_8009C578:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009C590;
    }
}

loc_8009C57C:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8009C588:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009C590;
    }
}

loc_8009C58C:
{
    r7 = 0;
}

loc_8009C590:
{
}

loc_8009C594:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009C5AC;
    }
}

loc_8009C598:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8009C5A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009C5AC;
    }
}

loc_8009C5A8:
{
    r6 = 0;
}

loc_8009C5AC:
{
}

loc_8009C5B0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009C5C8;
    }
}

loc_8009C5B4:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009C5C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009C5C8;
    }
}

loc_8009C5C4:
{
    r5 = 0;
}

loc_8009C5C8:
{
}

loc_8009C5CC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009C5F0;
    }
}

loc_8009C5D0:
{
    r3 = 0x80590000u;
    r3 = (r3 + 8456);
    r4 = 731;
    r5 = 0x80590000u;
    r5 = (r5 + 8676);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009C5F0u;
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

loc_8009C5F0:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r31 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_8009C614:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009C62C;
    }
}

loc_8009C618:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8009C624:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009C62C;
    }
}

loc_8009C628:
{
    r9 = 0;
}

loc_8009C62C:
{
}

loc_8009C630:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009C648;
    }
}

loc_8009C634:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8009C640:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009C648;
    }
}

loc_8009C644:
{
    r8 = 0;
}

loc_8009C648:
{
}

loc_8009C64C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009C660;
    }
}

loc_8009C650:
{
    r0 = (r10 + 1073741824);
}

loc_8009C658:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009C660;
    }
}

loc_8009C65C:
{
    r7 = 0;
}

loc_8009C660:
{
}

loc_8009C664:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009C67C;
    }
}

loc_8009C668:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8009C674:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009C67C;
    }
}

loc_8009C678:
{
    r6 = 0;
}

loc_8009C67C:
{
}

loc_8009C680:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009C698;
    }
}

loc_8009C684:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8009C690:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009C698;
    }
}

loc_8009C694:
{
    r5 = 0;
}

loc_8009C698:
{
}

loc_8009C69C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009C6B4;
    }
}

loc_8009C6A0:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009C6AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009C6B4;
    }
}

loc_8009C6B0:
{
    r4 = 0;
}

loc_8009C6B4:
{
}

loc_8009C6B8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009C6DC;
    }
}

loc_8009C6BC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 8456);
    r4 = 732;
    r5 = 0x80590000u;
    r5 = (r5 + 8892);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009C6DCu;
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

loc_8009C6DC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31488));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31484));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31));
    PpcSetPairedFprInline(f6, PPC_PsMulInline(f3.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_0 = (r31 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_0));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f4.d, f4.d, f6.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f0.d));
    PpcSetPairedFprInline(f5, PPC_PsSum0Inline(f5.d, f6.d, f4.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f5.d), f2.d);
}

loc_8009C700:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009C730;
    }
}

loc_8009C704:
{
    f2.d = PPC_Frsqrte(PPC_PsToScalarInline(f5.d));
    f6.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f6.d = PPC_Fnmsubs(f6.d, PPC_PsToScalarInline(f5.d), f1.d);
    f2.d = PpcFmulsInline(f6.d, f0.d);
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f2.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30, f3.d);
    PpcSetPairedFprInline(f4, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f2.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_0 = (r30 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_0, f4.d);
    r3 = 1;
    goto loc_8009C73C;
}

loc_8009C730:
{
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30, f3.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_1 = (r30 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_1, f4.d);
    r3 = 0;
}

loc_8009C73C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x0000003B fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009C4E8 func_8009C4E8 preserves=true fpr_mask=0x00000000
