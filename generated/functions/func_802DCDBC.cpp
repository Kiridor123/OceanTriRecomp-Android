#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800440BC(CpuContext* ctx);
extern "C" uint64_t func_800440BC_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_802DCDBC_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;

    MKW_GUEST_ENTER(0x802DCDBCu);
    goto loc_802DCDBC;

loc_802DCDBC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    ctx->lr = 0x802DCDD4u;
    if constexpr (KnownRegArgsCpuCall<0x800440BCu>(&func_800440BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800440BC_545 = func_800440BC_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_800440BC_545);
        r4 = static_cast<uint32_t>(regargs_result_800440BC_545 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x800440BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = 0x80670000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -18120));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword0;
    r3 = (r3 + -18120);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword1;
    r0 = MemoryInline::FlatRead32((r13 + -17932));
}

loc_802DCE04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DCE14;
    }
}

loc_802DCE08:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 35), static_cast<uint8_t>(r0));
    goto loc_802DCE1C;
}

loc_802DCE14:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 35), static_cast<uint8_t>(r0));
}

loc_802DCE1C:
{
    r0 = MemoryInline::FlatRead8((r31 + 1));
}

loc_802DCE24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DCEA8;
    }
}

loc_802DCE28:
{
    r0 = MemoryInline::FlatRead8((r31 + 35));
}

loc_802DCE30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DCE9C;
    }
}

loc_802DCE34:
{
    r0 = MemoryInline::FlatRead32((r13 + -17932));
}

loc_802DCE3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_802DCE7C;
    }
}

loc_802DCE40:
{
    r0 = MemoryInline::FlatRead16((r31 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 18));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 22), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 14), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r31 + 10), static_cast<uint16_t>(r3));
    goto loc_802DCE9C;
}

loc_802DCE7C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 8), 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r31 + 8), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r31 + 12), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r31 + 16), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r31 + 20), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r31 + 10), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r31 + 14), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r31 + 18), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 14u, (r31 + 22), static_cast<uint16_t>(r3));
}

loc_802DCE9C:
{
    MemoryInline::FlatWrite16((r31 + 4), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r31 + 6), static_cast<uint16_t>(r3));
    goto loc_802DCEDC;
}

loc_802DCEA8:
{
    r0 = MemoryInline::FlatRead8((r31 + 35));
}

loc_802DCEB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DCEDC;
    }
}

loc_802DCEB4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 4), 0, 20u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r31 + 4), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r31 + 8), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r31 + 12), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r31 + 16), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r31 + 20), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r31 + 6), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r31 + 10), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r31 + 14), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r31 + 18), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_1, 18u, (r31 + 22), static_cast<uint16_t>(r3));
}

loc_802DCEDC:
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
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802DCDBC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802DCDBC_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802DCDBC func_802DCDBC preserves=true fpr_mask=0x00000000
