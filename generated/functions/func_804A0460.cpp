#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804A0B48(CpuContext* ctx);
extern "C" uint32_t func_804A0B48_ra48_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804A0BA4(CpuContext* ctx);
extern "C" uint32_t func_804A0BA4_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804A0460_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804A0460u);
    goto loc_804A0460;

loc_804A0460:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = 9;
    r29 = r3;
    r28 = r4;
    r0 = MemoryInline::FlatRead32(r4);
}

loc_804A0490:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A04A4;
    }
}

loc_804A0494:
{
    r3 = 0x80740000u;
    r3 = (r3 + -2048);
    r0 = MemoryInline::FlatRead32((r3 + 4636));
    MemoryInline::FlatWrite32(r4, r0);
}

loc_804A04A4:
{
    r3 = MemoryInline::FlatRead32(r4);
    if constexpr (KnownRegArgsCpuCall<0x804A0B48u>(&func_804A0B48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804A0B48_A74 = func_804A0B48_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_804A0B48_A74;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804A0B48u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_804A04B0:
{
    r30 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804A08E4;
    }
}

loc_804A04B8:
{
    r3 = r29;
    r4 = 0;
    r5 = 250;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r30;
    r31 = 0;
    r4 = 512;
    r5 = 512;
    if constexpr (KnownRegArgsCpuCall<0x804A0BA4u>(&func_804A0BA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_804A0BA4_F92 = func_804A0BA4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_804A0BA4_F92;
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x804A0BA4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_804A04E0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804A04FC;
    }
}

loc_804A04E4:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead8(r4);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_1 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r0));
}

loc_804A04FC:
{
    r3 = r30;
    r4 = 513;
    r5 = 513;
    if constexpr (KnownRegArgsCpuCall<0x804A0BA4u>(&func_804A0BA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_804A0BA4_14D0 = func_804A0BA4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_804A0BA4_14D0;
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x804A0BA4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_804A0510:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804A052C;
    }
}

loc_804A0514:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead8(r4);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_3 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r29 + 2), static_cast<uint16_t>(r0));
}

loc_804A052C:
{
    r3 = r30;
    r4 = 514;
    r5 = 514;
    if constexpr (KnownRegArgsCpuCall<0x804A0BA4u>(&func_804A0BA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_804A0BA4_1A16 = func_804A0BA4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_804A0BA4_1A16;
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x804A0BA4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_804A0540:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804A055C;
    }
}

loc_804A0544:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead8(r4);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_5 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r0));
}

loc_804A055C:
{
    r3 = r30;
    r4 = 515;
    r5 = 515;
    if constexpr (KnownRegArgsCpuCall<0x804A0BA4u>(&func_804A0BA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_804A0BA4_1F5C = func_804A0BA4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_804A0BA4_1F5C;
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x804A0BA4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_804A0570:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804A058C;
    }
}

loc_804A0574:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead8(r4);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_7 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
}

loc_804A058C:
{
    r3 = r30;
    r4 = 517;
    r5 = 517;
    if constexpr (KnownRegArgsCpuCall<0x804A0BA4u>(&func_804A0BA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_804A0BA4_24A2 = func_804A0BA4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_804A0BA4_24A2;
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x804A0BA4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_804A05A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804A05BC;
    }
}

loc_804A05A4:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead8(r4);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_9 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r29 + 4), static_cast<uint16_t>(r0));
}

loc_804A05BC:
{
    r3 = r30;
    r4 = 516;
    r5 = 516;
    if constexpr (KnownRegArgsCpuCall<0x804A0BA4u>(&func_804A0BA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_804A0BA4_29E8 = func_804A0BA4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_804A0BA4_29E8;
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x804A0BA4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_804A05D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804A05E0;
    }
}

loc_804A05D4:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead8(r3);
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r0));
}

loc_804A05E0:
{
    r3 = r30;
    r4 = 11;
    r5 = 11;
    if constexpr (KnownRegArgsCpuCall<0x804A0BA4u>(&func_804A0BA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_804A0BA4_2E7A = func_804A0BA4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_804A0BA4_2E7A;
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x804A0BA4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_804A05F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804A06E0;
    }
}

loc_804A05F8:
{
    r0 = MemoryInline::FlatRead32(r3);
    r4 = 80;
}

loc_804A0604:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(80))) {
        goto loc_804A060C;
    }
}

loc_804A0608:
{
    r4 = r0;
}

loc_804A060C:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_804A0610:
{
    r7 = MemoryInline::FlatRead32((r3 + 4));
    r8 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_804A06E0;
    }
}

loc_804A061C:
{
}

loc_804A0620:
{
    r5 = (r4 + -8);
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_804A06B4;
    }
}

loc_804A0628:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_804A0644;
    }
}

loc_804A0630:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_804A063C:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_804A0644;
    }
}

loc_804A0640:
{
    r6 = 1;
}

loc_804A0644:
{
}

loc_804A0648:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804A06B4;
    }
}

loc_804A064C:
{
    r0 = (r5 + 7);
    r3 = (r29 + 11);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_804A0660:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_804A06B4;
    }
}

loc_804A0664:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r7, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r7);
    r8 = (r8 + 8);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r7 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r7 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r7 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r7 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r7 + 5));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r7 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r3 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r7 + 7));
    r7 = (r7 + 8);
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r3 + 7), static_cast<uint8_t>(r0));
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804A0664;
    }
}

loc_804A06B4:
{
    r3 = (r29 + r8);
    r0 = (r4 - r8);
    r3 = (r3 + 11);
    ctr = r0;
}

loc_804A06C8:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r4))) {
        goto loc_804A06E0;
    }
}

loc_804A06CC:
{
    r0 = MemoryInline::FlatRead8(r7);
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804A06CC;
    }
}

loc_804A06E0:
{
    r3 = r30;
    r4 = 257;
    r5 = 257;
    if constexpr (KnownRegArgsCpuCall<0x804A0BA4u>(&func_804A0BA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_804A0BA4_3F8A = func_804A0BA4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_804A0BA4_3F8A;
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x804A0BA4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_804A06F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804A07E0;
    }
}

loc_804A06F8:
{
    r0 = MemoryInline::FlatRead32(r3);
    r4 = 80;
}

loc_804A0704:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(80))) {
        goto loc_804A070C;
    }
}

loc_804A0708:
{
    r4 = r0;
}

loc_804A070C:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_804A0710:
{
    r7 = MemoryInline::FlatRead32((r3 + 4));
    r8 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_804A07E0;
    }
}

loc_804A071C:
{
}

loc_804A0720:
{
    r5 = (r4 + -8);
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_804A07B4;
    }
}

loc_804A0728:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_804A0744;
    }
}

loc_804A0730:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_804A073C:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_804A0744;
    }
}

loc_804A0740:
{
    r6 = 1;
}

loc_804A0744:
{
}

loc_804A0748:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804A07B4;
    }
}

loc_804A074C:
{
    r0 = (r5 + 7);
    r3 = (r29 + 91);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_4 & 536870911);
    ctr = r0;
}

loc_804A0760:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_804A07B4;
    }
}

loc_804A0764:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r7, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, r7);
    r8 = (r8 + 8);
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r7 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r7 + 2));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r7 + 3));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r7 + 4));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r7 + 5));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r7 + 6));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r3 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r7 + 7));
    r7 = (r7 + 8);
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r3 + 7), static_cast<uint8_t>(r0));
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804A0764;
    }
}

loc_804A07B4:
{
    r3 = (r29 + r8);
    r0 = (r4 - r8);
    r3 = (r3 + 91);
    ctr = r0;
}

loc_804A07C8:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r4))) {
        goto loc_804A07E0;
    }
}

loc_804A07CC:
{
    r0 = MemoryInline::FlatRead8(r7);
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804A07CC;
    }
}

loc_804A07E0:
{
    r3 = r30;
    r4 = 10;
    r5 = 10;
    if constexpr (KnownRegArgsCpuCall<0x804A0BA4u>(&func_804A0BA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_804A0BA4_5098 = func_804A0BA4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_804A0BA4_5098;
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x804A0BA4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_804A07F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804A08EC;
    }
}

loc_804A07F8:
{
    r0 = MemoryInline::FlatRead32(r3);
    r4 = 80;
}

loc_804A0804:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(80))) {
        goto loc_804A080C;
    }
}

loc_804A0808:
{
    r4 = r0;
}

loc_804A080C:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_804A0810:
{
    r7 = MemoryInline::FlatRead32((r3 + 4));
    r8 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_804A08EC;
    }
}

loc_804A081C:
{
}

loc_804A0820:
{
    r5 = (r4 + -8);
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_804A08B4;
    }
}

loc_804A0828:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_804A0844;
    }
}

loc_804A0830:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_804A083C:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_804A0844;
    }
}

loc_804A0840:
{
    r6 = 1;
}

loc_804A0844:
{
}

loc_804A0848:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804A08B4;
    }
}

loc_804A084C:
{
    r0 = (r5 + 7);
    r3 = (r29 + 171);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_7 & 536870911);
    ctr = r0;
}

loc_804A0860:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_804A08B4;
    }
}

loc_804A0864:
{
    guest_range_4 = MemoryInline::ResolveRangeHost(r7, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_4, 0u, r7);
    r8 = (r8 + 8);
    guest_range_5 = MemoryInline::ResolveRangeHost(r3, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_5, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 1u, (r7 + 1));
    MemoryInline::WriteResolved8(guest_range_5, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 2u, (r7 + 2));
    MemoryInline::WriteResolved8(guest_range_5, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 3u, (r7 + 3));
    MemoryInline::WriteResolved8(guest_range_5, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 4u, (r7 + 4));
    MemoryInline::WriteResolved8(guest_range_5, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 5u, (r7 + 5));
    MemoryInline::WriteResolved8(guest_range_5, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 6u, (r7 + 6));
    MemoryInline::WriteResolved8(guest_range_5, 6u, (r3 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 7u, (r7 + 7));
    r7 = (r7 + 8);
    MemoryInline::WriteResolved8(guest_range_5, 7u, (r3 + 7), static_cast<uint8_t>(r0));
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804A0864;
    }
}

loc_804A08B4:
{
    r3 = (r29 + r8);
    r0 = (r4 - r8);
    r3 = (r3 + 171);
    ctr = r0;
}

loc_804A08C8:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r4))) {
        goto loc_804A08EC;
    }
}

loc_804A08CC:
{
    r0 = MemoryInline::FlatRead8(r7);
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804A08CC;
    }
}

loc_804A08E0:
{
    goto loc_804A08EC;
}

loc_804A08E4:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r28, r0);
}

loc_804A08EC:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804A0460(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804A0460_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804A0460 func_804A0460 preserves=true fpr_mask=0x00000000
