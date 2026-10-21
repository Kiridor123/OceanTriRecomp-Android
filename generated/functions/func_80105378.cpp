#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80105378_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_80105594_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x80105378u);
    goto loc_80105378;

loc_80105378:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 80);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r31 = r3;
    r28 = 0;
    r27 = MemoryInline::FlatRead32((r3 + 56));
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r31 + 68));
}

loc_801053B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_801053C4;
    }
}

loc_801053B4:
{
    r3 = MemoryInline::FlatRead8((r31 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r0));
    goto loc_80105590;
}

loc_801053C4:
{
    r0 = MemoryInline::FlatRead8((r31 + 8));
}

loc_801053CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801053F4;
    }
}

loc_801053D0:
{
    ctx->lr = 0x801053D4u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x803C4878u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801053D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801053F4;
    }
}

loc_801053DC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r31 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r0));
    goto loc_80105590;
}

loc_801053F4:
{
    r29 = 0;
    r30 = r27;
    goto loc_80105420;
}

loc_80105400:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    ctx->lr = 0x80105408u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F9984u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_8010540C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80105418;
    }
}

loc_80105410:
{
    r0 = (r28 + 1);
    r28 = (r0 & 255);
}

loc_80105418:
{
    r30 = (r30 + 4);
    r29 = (r29 + 1);
}

loc_80105420:
{
    r0 = MemoryInline::FlatRead32(r27);
}

loc_80105428:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r0))) {
        goto loc_80105400;
    }
}

loc_8010542C:
{
}

loc_80105430:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(r0))) {
        goto loc_8010544C;
    }
}

loc_80105434:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r31 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r0));
    goto loc_80105590;
}

loc_8010544C:
{
    r29 = 0;
    r30 = r27;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -29468));
    goto loc_80105570;
}

loc_8010545C:
{
    r0 = MemoryInline::FlatRead8((r31 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(106));
}

loc_80105464:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80105550;
    }
}

loc_80105468:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801054AC;
    }
}

loc_8010546C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(73));
}

loc_80105470:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80105568;
    }
}

loc_80105474:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8010548C;
    }
}

loc_80105478:
{
}

loc_8010547C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(46))) {
        goto loc_80105550;
    }
}

loc_80105480:
{
}

loc_80105484:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(44))) {
        goto loc_801054F0;
    }
}

loc_80105488:
{
    goto loc_80105550;
}

loc_8010548C:
{
}

loc_80105490:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(78))) {
        goto loc_801054A0;
    }
}

loc_80105494:
{
}

loc_80105498:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(76))) {
        goto loc_80105568;
    }
}

loc_8010549C:
{
    goto loc_80105550;
}

loc_801054A0:
{
}

loc_801054A4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(88))) {
        goto loc_80105568;
    }
}

loc_801054A8:
{
    goto loc_80105550;
}

loc_801054AC:
{
}

loc_801054B0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(125))) {
        goto loc_801054D8;
    }
}

loc_801054B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(120));
}

loc_801054B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80105520;
    }
}

loc_801054BC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801054CC;
    }
}

loc_801054C0:
{
}

loc_801054C4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(112))) {
        goto loc_80105550;
    }
}

loc_801054C8:
{
    goto loc_80105568;
}

loc_801054CC:
{
}

loc_801054D0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(122))) {
        goto loc_80105550;
    }
}

loc_801054D4:
{
    goto loc_801054F0;
}

loc_801054D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(145));
}

loc_801054DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80105568;
    }
}

loc_801054E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80105550;
    }
}

loc_801054E4:
{
}

loc_801054E8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(129))) {
        goto loc_80105550;
    }
}

loc_801054EC:
{
    goto loc_80105568;
}

loc_801054F0:
{
    r3 = (r1 + 32);
    ctx->lr = 0x801054F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x802BDD44u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_80105500:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80105590;
    }
}

loc_80105504:
{
    r0 = MemoryInline::FlatRead32((r27 + 16));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = (r31 + 24);
    r5 = (r1 + 16);
    ctx->lr = 0x8010551Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80105568;
}

loc_80105520:
{
    r3 = (r1 + 20);
    ctx->lr = 0x80105528u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x802BDD44u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_80105530:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80105590;
    }
}

loc_80105534:
{
    r0 = MemoryInline::FlatRead32((r27 + 16));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = (r31 + 24);
    r5 = (r1 + 12);
    ctx->lr = 0x8010554Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80105568;
}

loc_80105550:
{
    r0 = MemoryInline::FlatRead32((r27 + 16));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = (r31 + 24);
    r5 = (r1 + 8);
    ctx->lr = 0x80105568u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_80105568:
{
    r30 = (r30 + 4);
    r29 = (r29 + 1);
}

loc_80105570:
{
    r6 = MemoryInline::FlatRead32(r27);
}

loc_80105578:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r6))) {
        goto loc_8010545C;
    }
}

loc_8010557C:
{
    r3 = r31;
    r4 = (r27 + 8);
    r5 = 1;
    r7 = 0;
    ctx->lr = 0x80105590u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_80105590:
{
    r0 = 88;
    addr_psqx_80105594_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80105594_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r11 = (r1 + 80);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80105378(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80105378_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80105378 func_80105378 preserves=true fpr_mask=0x00000000
