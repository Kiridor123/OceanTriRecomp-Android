#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F87EC(CpuContext* ctx);
extern "C" uint64_t func_800F87EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803045B4_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t addr_psqx_80304848_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x803045B4u);
    goto loc_803045B4;

loc_803045B4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 48u, (r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    f31.d = f1.d;
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r27 + 481));
}

loc_803045F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_80304600;
    }
}

loc_803045F8:
{
    r3 = 0;
    goto loc_80304844;
}

loc_80304600:
{
    r3 = 32;
    ctx->lr = 0x80304608u;
    if constexpr (KnownRegArgsCpuCall<0x800F87ECu>(&func_800F87EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800F87EC_A6F = func_800F87EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F87EC_A6F);
        r4 = static_cast<uint32_t>(regargs_result_800F87EC_A6F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F87ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r31 = r3;
}

loc_80304610:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8030461C;
    }
}

loc_80304614:
{
    r3 = 0;
    goto loc_80304844;
}

loc_8030461C:
{
    r0 = (r28 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(61));
}

loc_80304624:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803046CC;
    }
}

loc_80304628:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80304670;
    }
}

loc_8030462C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(18));
}

loc_80304630:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8030469C;
    }
}

loc_80304634:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8030465C;
    }
}

loc_80304638:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(13));
}

loc_8030463C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80304774;
    }
}

loc_80304640:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80304650;
    }
}

loc_80304644:
{
}

loc_80304648:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(12))) {
        goto loc_8030469C;
    }
}

loc_8030464C:
{
    goto loc_80304774;
}

loc_80304650:
{
}

loc_80304654:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(15))) {
        goto loc_80304774;
    }
}

loc_80304658:
{
    goto loc_8030469C;
}

loc_8030465C:
{
}

loc_80304660:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(36))) {
        goto loc_80304774;
    }
}

loc_80304664:
{
}

loc_80304668:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(34))) {
        goto loc_803046B4;
    }
}

loc_8030466C:
{
    goto loc_80304774;
}

loc_80304670:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(71));
}

loc_80304674:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8030472C;
    }
}

loc_80304678:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80304690;
    }
}

loc_8030467C:
{
}

loc_80304680:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(70))) {
        goto loc_80304774;
    }
}

loc_80304684:
{
}

loc_80304688:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(68))) {
        goto loc_803046FC;
    }
}

loc_8030468C:
{
    goto loc_80304774;
}

loc_80304690:
{
}

loc_80304694:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(85))) {
        goto loc_80304714;
    }
}

loc_80304698:
{
    goto loc_80304774;
}

loc_8030469C:
{
    r0 = MemoryInline::FlatRead16((r27 + 552));
    r0 = (r0 & 6);
}

loc_803046A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80304774;
    }
}

loc_803046AC:
{
    r28 = (r28 + 1);
    goto loc_80304774;
}

loc_803046B4:
{
    r0 = MemoryInline::FlatRead16((r27 + 552));
    r0 = (r0 & 6);
}

loc_803046C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80304774;
    }
}

loc_803046C4:
{
    r28 = (r28 + 54);
    goto loc_80304774;
}

loc_803046CC:
{
    r3 = (r1 + 8);
    ctx->lr = 0x803046D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x802BDD44u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -11512));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803046E0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80304774;
    }
}

loc_803046E4:
{
    r0 = MemoryInline::FlatRead16((r27 + 552));
    r0 = (r0 & 2);
}

loc_803046F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80304774;
    }
}

loc_803046F4:
{
    r28 = 62;
    goto loc_80304774;
}

loc_803046FC:
{
    r0 = MemoryInline::FlatRead16((r27 + 552));
    r0 = (r0 & 6);
}

loc_80304708:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80304774;
    }
}

loc_8030470C:
{
    r28 = (r28 + 86);
    goto loc_80304774;
}

loc_80304714:
{
    r0 = MemoryInline::FlatRead16((r27 + 552));
    r0 = (r0 & 6);
}

loc_80304720:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80304774;
    }
}

loc_80304724:
{
    r28 = 156;
    goto loc_80304774;
}

loc_8030472C:
{
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r0 = (r3 & 255);
}

loc_80304738:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80304744;
    }
}

loc_8030473C:
{
}

loc_80304740:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(15))) {
        goto loc_80304750;
    }
}

loc_80304744:
{
    r0 = 2;
    MemoryInline::FlatWriteRam8((r31 + 8), static_cast<uint8_t>(r0));
    goto loc_80304774;
}

loc_80304750:
{
    r0 = MemoryInline::FlatRead16((r27 + 552));
    r0 = (r0 & 6);
}

loc_8030475C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8030476C;
    }
}

loc_80304760:
{
    r0 = 3;
    MemoryInline::FlatWriteRam8((r31 + 8), static_cast<uint8_t>(r0));
    goto loc_80304774;
}

loc_8030476C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 8), static_cast<uint8_t>(r0));
}

loc_80304774:
{
    r3 = MemoryInline::FlatRead32((r31 + 56));
    r0 = 1;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWriteFloat32((r3 + 8), f31.d);
    MemoryInline::FlatWrite32((r3 + 12), r29);
}

loc_8030478C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_803047A0;
    }
}

loc_80304790:
{
    r3 = (r3 + 16);
    r4 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_803047B4;
}

loc_803047A0:
{
    r3 = (r3 + 16);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -11512));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
}

loc_803047B4:
{
    r0 = 39;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 2), 0, 67u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r31 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r31 + 2), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved32(guest_range_0, 46u, (r31 + 48), r27);
    r0 = MemoryInline::FlatRead8((r27 + 481));
    MemoryInline::WriteResolved8(guest_range_0, 66u, (r31 + 68), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r27 + 444));
    MemoryInline::WriteResolved32(guest_range_0, 34u, (r31 + 36), r0);
    r0 = MemoryInline::FlatRead32((r27 + 448));
    MemoryInline::WriteResolved32(guest_range_0, 38u, (r31 + 40), r0);
    r0 = MemoryInline::FlatRead32((r27 + 452));
    MemoryInline::WriteResolved32(guest_range_0, 42u, (r31 + 44), r0);
    r0 = (r28 & 255);
}

loc_803047EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(44))) {
        goto loc_803047FC;
    }
}

loc_803047F0:
{
    r0 = 12;
    MemoryInline::WriteResolved32(guest_range_0, 10u, (r31 + 12), r0);
    goto loc_80304804;
}

loc_803047FC:
{
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 10u, (r31 + 12), r0);
}

loc_80304804:
{
    r3 = r31;
    r4 = 0;
    r5 = 0;
    // inline leaf 0x800F9E58 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800F9E58
    r3 = 0x80300000u;
    r0 = (r3 + 18536);
    MemoryInline::WriteResolved32(guest_range_0, 62u, (r31 + 64), r0);
    r3 = 0x80300000u;
    r0 = (r3 + 18596);
    MemoryInline::WriteResolved32(guest_range_0, 50u, (r31 + 52), r0);
    ctx->lr = 0x80304830u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x803C4878u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80304834:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80304840;
    }
}

loc_80304838:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r31 + 7), static_cast<uint8_t>(r0));
}

loc_80304840:
{
    r3 = r31;
}

loc_80304844:
{
    r0 = 56;
    addr_psqx_80304848_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80304848_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r11 = (r1 + 48);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803045B4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803045B4_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803045B4 func_803045B4 preserves=true fpr_mask=0x00000000
