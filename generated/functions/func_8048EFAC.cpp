#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8048BB18(CpuContext* ctx);
extern "C" uint64_t func_8048BB18_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8048EFAC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;
    uint32_t r9_addr_3 = 0;
    uint32_t r9_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8048EFACu);
    goto loc_8048EFAC;

loc_8048EFAC:
{
    r0 = 0;
    r9 = 5;
    r8 = 12;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 2), 0, 11u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 4), static_cast<uint16_t>(r0));
}

loc_8048EFC0:
{
    r0 = r6;
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 8), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 9), static_cast<uint8_t>(r8));
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8048F150;
    }
}

loc_8048EFD0:
{
    r8 = (r7 + 5);
    r9 = (r7 + 2);
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r3 + 2), static_cast<uint16_t>(r8));
}

loc_8048EFE0:
{
    r8 = (r3 + 13);
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 10), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 11), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r3 + 12), static_cast<uint8_t>(r5));
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(1))) {
        goto loc_8048F038;
    }
}

loc_8048EFF4:
{
    r4 = MemoryInline::FlatRead8((r6 + 2));
    r0 = (r7 + -6);
    r7 = (r0 & 255);
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r4));
    r0 = (r6 + 6);
    r4 = MemoryInline::FlatRead8((r6 + 1));
    MemoryInline::FlatWrite8((r8 + 1), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8(r6);
    MemoryInline::FlatWrite8((r8 + 2), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r6 + 5));
    MemoryInline::FlatWrite8((r8 + 3), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r6 + 4));
    MemoryInline::FlatWrite8((r8 + 4), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r6 + 3));
    MemoryInline::FlatWrite8((r8 + 5), static_cast<uint8_t>(r4));
    r8 = (r8 + 6);
    goto loc_8048F080;
}

loc_8048F038:
{
}

loc_8048F03C:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(2))) {
        goto loc_8048F080;
    }
}

loc_8048F040:
{
    r4 = MemoryInline::FlatRead8((r6 + 5));
    r0 = (r7 + -6);
    r7 = (r0 & 255);
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r4));
    r0 = (r6 + 6);
    r4 = MemoryInline::FlatRead8((r6 + 4));
    MemoryInline::FlatWrite8((r8 + 1), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r6 + 3));
    MemoryInline::FlatWrite8((r8 + 2), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r6 + 2));
    MemoryInline::FlatWrite8((r8 + 3), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r6 + 1));
    MemoryInline::FlatWrite8((r8 + 4), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8(r6);
    MemoryInline::FlatWrite8((r8 + 5), static_cast<uint8_t>(r4));
    r8 = (r8 + 6);
}

loc_8048F080:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8048F084:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_8048F164;
    }
}

loc_8048F088:
{
    r9 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8048F164;
    }
}

loc_8048F090:
{
}

loc_8048F094:
{
    r5 = (r7 + -8);
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(8))) {
        goto loc_8048F124;
    }
}

loc_8048F09C:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8048F0B8;
    }
}

loc_8048F0A4:
{
    r4 = 0x80000000u;
    r4 = (r4 + -2);
}

loc_8048F0B0:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(r4))) {
        goto loc_8048F0B8;
    }
}

loc_8048F0B4:
{
    r6 = 1;
}

loc_8048F0B8:
{
}

loc_8048F0BC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8048F124;
    }
}

loc_8048F0C0:
{
    r4 = (r5 + 7);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
    r4 = (r4_rot_1 & 536870911);
    ctr = r4;
}

loc_8048F0D0:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_8048F124;
    }
}

loc_8048F0D4:
{
    r9_addr_2 = (r9 + r0);
    r4 = MemoryInline::FlatRead8(r9_addr_2);
    r5 = (r0 + r9);
    r9 = (r9 + 8);
    guest_range_1 = MemoryInline::ResolveRangeHost(r8, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r8, static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r5 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r8 + 1), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r5 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r8 + 2), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r5 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r8 + 3), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r5 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r8 + 4), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r5 + 5));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r8 + 5), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r5 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r8 + 6), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r5 + 7));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r8 + 7), static_cast<uint8_t>(r4));
    r8 = (r8 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8048F0D4;
    }
}

loc_8048F124:
{
    r4 = (r7 - r9);
    r5 = (r0 + r9);
    ctr = r4;
}

loc_8048F134:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(r7))) {
        goto loc_8048F164;
    }
}

loc_8048F138:
{
    r0 = MemoryInline::FlatRead8(r5);
    r5 = (r5 + 1);
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r0));
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8048F138;
    }
}

loc_8048F14C:
{
    goto loc_8048F164;
}

loc_8048F150:
{
    r5 = 4;
    r0 = 1;
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r3 + 2), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 10), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 11), static_cast<uint8_t>(r4));
}

loc_8048F164:
{
    if constexpr (KnownRegArgsCpuCall<0x8048BB18u>(&func_8048BB18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8048BB18_1EB5 = func_8048BB18_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8048BB18_1EB5);
        r4 = static_cast<uint32_t>(regargs_result_8048BB18_1EB5 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8048BB18u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8048EFAC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8048EFAC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8048EFAC func_8048EFAC preserves=true fpr_mask=0x00000000
