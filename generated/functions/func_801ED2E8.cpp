#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004AF24(CpuContext* ctx);
extern "C" uint64_t func_8004AF24_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8004AF70(CpuContext* ctx);
extern "C" uint32_t func_8004AF70_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802A8F78(CpuContext* ctx);
extern "C" uint64_t func_802A8F78_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_8004AF70_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8004AF70_statefree_v0(uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801ED2E8_ra28_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x801ED2E8u);
    goto loc_801ED2E8;

loc_801ED2E8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r31 = 0;
    MemoryInline::FlatWrite16((r3 + 20), static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite16((r3 + 24), static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r3 + 26), static_cast<uint8_t>(r31));
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 1522), 0, 24u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r4 + 1522));
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 1562), 0, 24u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r4 + 1562), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r4 + 1538));
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r4 + 1578), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 1524));
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r4 + 1564), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 17u, (r4 + 1539));
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r4 + 1579), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r4 + 1526));
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r4 + 1566), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r4 + 1540));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r4 + 1580), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r4 + 1528));
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r4 + 1568), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 19u, (r4 + 1541));
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r4 + 1581), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 1530));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r4 + 1570), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r4 + 1542));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r4 + 1582), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r4 + 1532));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r4 + 1572), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 21u, (r4 + 1543));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r4 + 1583), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r4 + 1534));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r4 + 1574), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 22u, (r4 + 1544));
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r4 + 1584), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r4 + 1536));
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r4 + 1576), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 23u, (r4 + 1545));
    MemoryInline::WriteResolved8(guest_range_1, 23u, (r4 + 1585), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x801ED3A0u;
    if constexpr (KnownRegArgsCpuCall<0x8004AF24u>(&func_8004AF24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8004AF24_12B2 = func_8004AF24_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004AF24_12B2);
        r4 = static_cast<uint32_t>(regargs_result_8004AF24_12B2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004AF24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_801ED3A4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801ED3EC;
    }
}

loc_801ED3A8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    r3 = 1;
    // inline leaf 0x8004AF70 (5 guest instruction(s))
}

loc_inl0_0x8004AF70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_inl0_0x8004AF74:
{
    r3 = 24;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8004AF7C:
{
    r3 = 32;
    goto loc_inl0_cont_8004AF70;
}

loc_inl0_return:
{
}

loc_inl0_cont_8004AF70:
{
    // end of inlined leaf 0x8004AF70
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r4 = 8;
    // inline leaf 0x802A8F78 (15 guest instruction(s))
}

loc_inl1_0x802A8F78:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl1_0x802A8F80:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x802A8F8C;
    }
}

loc_inl1_0x802A8F84:
{
    r3 = 1;
    goto loc_inl1_cont_802A8F78;
}

loc_inl1_0x802A8F8C:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r5));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 * r5);
    r0 = (r4 - r0);
}

loc_inl1_0x802A8FA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x802A8FA8:
{
    r0 = (r3 + 1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_inl1_cont_802A8F78;
}

loc_inl1_return:
{
}

loc_inl1_cont_802A8F78:
{
    // end of inlined leaf 0x802A8F78
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r30 + 23), static_cast<uint8_t>(r0));
    r3 = 0;
    // inline leaf 0x8004AF70 (5 guest instruction(s))
}

loc_inl2_0x8004AF70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_inl2_0x8004AF74:
{
    r3 = 24;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8004AF7C:
{
    r3 = 32;
    goto loc_inl2_cont_8004AF70;
}

loc_inl2_return:
{
}

loc_inl2_cont_8004AF70:
{
    // end of inlined leaf 0x8004AF70
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r4 = 8;
    // inline leaf 0x802A8F78 (15 guest instruction(s))
}

loc_inl3_0x802A8F78:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl3_0x802A8F80:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x802A8F8C;
    }
}

loc_inl3_0x802A8F84:
{
    r3 = 1;
    goto loc_inl3_cont_802A8F78;
}

loc_inl3_0x802A8F8C:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r5));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 * r5);
    r0 = (r4 - r0);
}

loc_inl3_0x802A8FA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x802A8FA8:
{
    r0 = (r3 + 1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_inl3_cont_802A8F78;
}

loc_inl3_return:
{
}

loc_inl3_cont_802A8F78:
{
    // end of inlined leaf 0x802A8F78
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r30 + 27), static_cast<uint8_t>(r0));
    goto loc_801ED428;
}

loc_801ED3EC:
{
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r31));
    r3 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004AF70u) && KnownTranslatedCpuCall<0x8004AF70u>::kAvailable && !KnownTranslatedCpuCall<0x8004AF70u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004AF70u>()) {
        const auto state_free_result_8004AF70_240F = func_8004AF70_statefree_v0(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_8004AF70_240F[0]);
        cr = static_cast<uint32_t>(state_free_result_8004AF70_240F[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004AF70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x802A8F78u>(&func_802A8F78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802A8F78_2776 = func_802A8F78_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802A8F78_2776);
        r4 = static_cast<uint32_t>(regargs_result_802A8F78_2776 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x802A8F78u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r30 + 23), static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004AF70u) && KnownTranslatedCpuCall<0x8004AF70u>::kAvailable && !KnownTranslatedCpuCall<0x8004AF70u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004AF70u>()) {
        const auto state_free_result_8004AF70_2B57 = func_8004AF70_statefree_v0(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_8004AF70_2B57[0]);
        cr = static_cast<uint32_t>(state_free_result_8004AF70_2B57[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004AF70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x802A8F78u>(&func_802A8F78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_802A8F78_2EBE = func_802A8F78_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802A8F78_2EBE);
        r4 = static_cast<uint32_t>(regargs_result_802A8F78_2EBE >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x802A8F78u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r30 + 27), static_cast<uint8_t>(r0));
}

loc_801ED428:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 28), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r30 + 38), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801ED2E8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801ED2E8_ra28_0_18_0(ctx, ctx->gpr[3], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000202A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801ED2E8 func_801ED2E8 preserves=true fpr_mask=0x00000000
