#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80478000(CpuContext* ctx);
extern "C" uint64_t func_80478000_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8048BB18(CpuContext* ctx);
extern "C" uint64_t func_8048BB18_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8048E184_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r5_subfic_ra_0 = 0;
    uint32_t r5_subfic_ra_1 = 0;
    uint32_t r5_subfic_ra_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
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

    MKW_GUEST_ENTER(0x8048E184u);
    goto loc_8048E184;

loc_8048E184:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r5;
    r30 = r4;
    r29 = r3;
    r3 = 2;
    ctx->lr = 0x8048E1B0u;
    if constexpr (KnownRegArgsCpuCall<0x80478000u>(&func_80478000)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80478000_936 = func_80478000_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_80478000_936);
        r4 = static_cast<uint32_t>(regargs_result_80478000_936 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x80478000u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8048E1B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8048E1C0;
    }
}

loc_8048E1B8:
{
    r3 = 0;
    goto loc_8048E34C;
}

loc_8048E1C0:
{
    r0 = 26;
    r4 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 2), 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r3 + 2), static_cast<uint16_t>(r0));
    r7 = 13;
    r6 = 4;
    r0 = 23;
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 4), static_cast<uint16_t>(r4));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8048E1E0:
{
    r4 = (r3 + 18);
    r5 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 8), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 9), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 5));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 4));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r3 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 3));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r3 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 2));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r3 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 1));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r3 + 15), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8(r29);
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r3 + 16), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r3 + 17), static_cast<uint8_t>(r30));
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8048E2E8;
    }
}

loc_8048E22C:
{
}

loc_8048E230:
{
    r7 = (r30 + -8);
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(8))) {
        goto loc_8048E2C0;
    }
}

loc_8048E238:
{
    r8 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8048E254;
    }
}

loc_8048E240:
{
    r6 = 0x80000000u;
    r0 = (r6 + -2);
}

loc_8048E24C:
{
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(r0))) {
        goto loc_8048E254;
    }
}

loc_8048E250:
{
    r8 = 1;
}

loc_8048E254:
{
}

loc_8048E258:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8048E2C0;
    }
}

loc_8048E25C:
{
    r0 = (r7 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_8048E26C:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_8048E2C0;
    }
}

loc_8048E270:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, r31);
    r5 = (r5 + 8);
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r4, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r31 + 1));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r31 + 2));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r4 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r31 + 3));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r4 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r31 + 4));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r4 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r31 + 5));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r4 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r31 + 6));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r4 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r31 + 7));
    r31 = (r31 + 8);
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r4 + 7), static_cast<uint8_t>(r0));
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8048E270;
    }
}

loc_8048E2C0:
{
    r0 = (r30 - r5);
    ctr = r0;
}

loc_8048E2CC:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r30))) {
        goto loc_8048E2E8;
    }
}

loc_8048E2D0:
{
    r0 = MemoryInline::FlatRead8(r31);
    r5 = (r5 + 1);
    r31 = (r31 + 1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8048E2D0;
    }
}

loc_8048E2E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(16));
}

loc_8048E2EC:
{
    r5_subfic_ra_1 = r5;
    r5 = (16 - r5_subfic_ra_1);
    r6 = 0;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8048E344;
    }
}

loc_8048E2F8:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r0 = (r0_rot_4 & 536870911);
}

loc_8048E2FC:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048E334;
    }
}

loc_8048E304:
{
    guest_range_3 = MemoryInline::ResolveRangeHost(r4, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, r4, static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r4 + 1), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r4 + 2), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r4 + 3), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r4 + 4), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r4 + 5), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r4 + 6), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r4 + 7), static_cast<uint8_t>(r6));
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8048E304;
    }
}

loc_8048E32C:
{
    r5 = (r5 & 7);
}

loc_8048E330:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8048E344;
    }
}

loc_8048E334:
{
    ctr = r5;
}

loc_8048E338:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r6));
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8048E338;
    }
}

loc_8048E344:
{
    ctx->lr = 0x8048E348u;
    if constexpr (KnownRegArgsCpuCall<0x8048BB18u>(&func_8048BB18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8048BB18_2745 = func_8048BB18_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8048BB18_2745);
        r4 = static_cast<uint32_t>(regargs_result_8048BB18_2745 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
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
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    r3 = 1;
}

loc_8048E34C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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

extern "C" void func_8048E184(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8048E184_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8048E184 func_8048E184 preserves=true fpr_mask=0x00000000
