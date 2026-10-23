#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457360(CpuContext* ctx);
extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);

extern "C" void func_809D7610(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_809D7610;

loc_809D7610:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r3 = 0x80A80000u;
    r28 = (r3 + -31488);
    ctx->lr = 0x809D7638u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x809D6C34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->lr = 0x809D763Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x809D7170u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r28 + 48));
}

loc_809D7644:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_809D7984;
    }
}

loc_809D7648:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_809D7658:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809D7668;
    }
}

loc_809D765C:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r28 + 4), r0);
}

loc_809D7668:
{
    r0 = MemoryInline::FlatRead32((r28 + 4));
}

loc_809D7670:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(600))) {
        goto loc_809D7984;
    }
}

loc_809D7674:
{
    r4 = MemoryInline::FlatRead8((r28 + 3));
}

loc_809D767C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_809D7694;
    }
}

loc_809D7680:
{
}

loc_809D7684:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_809D76AC;
    }
}

loc_809D7688:
{
}

loc_809D768C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_809D76C8;
    }
}

loc_809D7690:
{
    goto loc_809D771C;
}

loc_809D7694:
{
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -7420));
    MemoryInline::FlatWriteRamFloat32((r28 + 40), f0.d);
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam8((r28 + 3), static_cast<uint8_t>(r0));
    goto loc_809D771C;
}

loc_809D76AC:
{
}

loc_809D76B0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(480))) {
        goto loc_809D771C;
    }
}

loc_809D76B4:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam8((r28 + 3), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWriteRam32((r28 + 48), r0);
    goto loc_809D771C;
}

loc_809D76C8:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_809D76D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809D76F0;
    }
}

loc_809D76DC:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 40));
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -7416));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r28 + 40), f0.d);
}

loc_809D76F0:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 40));
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -7456));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_809D7700:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_809D771C;
    }
}

loc_809D7704:
{
    MemoryInline::FlatWriteRamFloat32((r28 + 40), f0.d);
    r3 = MemoryInline::FlatRead8((r28 + 3));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r28 + 3), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWriteRam32((r28 + 48), r0);
}

loc_809D771C:
{
    r3 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + -7412));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 40));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80457360_1969 = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_1969;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
    r31 = (r0 | 987824128);
    r31 = (r31 | 31488);
    r30 = (r0 | 1010827264);
    r30 = (r30 | 7424);
    // inline leaf 0x80040424 (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r3 = MemoryInline::FlatRead8((r3 + 25));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80040424
}

loc_809D774C:
{
    r29 = 155;
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809D7758;
    }
}

loc_809D7754:
{
    r29 = 262;
}

loc_809D7758:
{
    r3 = 0x80A20000u;
    r8 = (r3 + 11596);
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r3 = 1431633920;
    r3 = (r3 + 21846);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r7 = (r3 + r0);
}

loc_809D777C:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(21))) {
        goto loc_809D7784;
    }
}

loc_809D7780:
{
    r7 = 21;
}

loc_809D7784:
{
    r3 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_809D778C:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_809D785C;
    }
}

loc_809D7790:
{
    r5 = (r7 + -8);
}

loc_809D7798:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(8))) {
        goto loc_809D7828;
    }
}

loc_809D779C:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_809D77B8;
    }
}

loc_809D77A4:
{
    r4 = 0x80000000u;
    r0 = (r4 + -2);
}

loc_809D77B0:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(r0))) {
        goto loc_809D77B8;
    }
}

loc_809D77B4:
{
    r6 = 1;
}

loc_809D77B8:
{
}

loc_809D77BC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_809D7828;
    }
}

loc_809D77C0:
{
    r4 = (r1 + 8);
    r0 = (r5 + 7);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 536870911);
    ctr = r0;
}

loc_809D77D4:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_809D7828;
    }
}

loc_809D77D8:
{
    r5 = (r8 + r3);
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r5);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r4, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r5 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r5 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r4 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r5 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r4 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r5 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r4 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r5 + 5));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r4 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r5 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r4 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r5 + 7));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r4 + 7), static_cast<uint8_t>(r0));
    r4 = (r4 + 8);
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_809D77D8;
    }
}

loc_809D7828:
{
    r5 = (r1 + 8);
    r5 = (r5 + r3);
    r4 = (r8 + r3);
    r0 = (r7 - r3);
    ctr = r0;
}

loc_809D7840:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r7))) {
        goto loc_809D785C;
    }
}

loc_809D7844:
{
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    r3 = (r3 + 1);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_809D7844;
    }
}

loc_809D785C:
{
}

loc_809D7860:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(32))) {
        goto loc_809D7954;
    }
}

loc_809D7864:
{
    r6 = (32 - r3);
}

loc_809D786C:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(8))) {
        goto loc_809D792C;
    }
}

loc_809D7870:
{
    r4 = 0;
    r5 = 0;
    r0 = 0;
}

loc_809D7880:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(33))) {
        goto loc_809D7888;
    }
}

loc_809D7884:
{
    r0 = 1;
}

loc_809D7888:
{
}

loc_809D788C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809D78A0;
    }
}

loc_809D7890:
{
    r0 = (r3 + -2147483648);
}

loc_809D7898:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_809D78A0;
    }
}

loc_809D789C:
{
    r5 = 1;
}

loc_809D78A0:
{
}

loc_809D78A4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_809D78D8;
    }
}

loc_809D78A8:
{
    r5 = 1;
    r0 = (0 - r3);
    r0 = (r0 & -2147483648);
}

loc_809D78B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809D78CC;
    }
}

loc_809D78BC:
{
    r0 = (r6 & -2147483648);
}

loc_809D78C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809D78CC;
    }
}

loc_809D78C8:
{
    r5 = 0;
}

loc_809D78CC:
{
}

loc_809D78D0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_809D78D8;
    }
}

loc_809D78D4:
{
    r4 = 1;
}

loc_809D78D8:
{
}

loc_809D78DC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_809D792C;
    }
}

loc_809D78E0:
{
    r5 = (r1 + 8);
    r5 = (r5 + r3);
    r4 = 0;
    r0 = (31 - r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_5 & 536870911);
    ctr = r0;
}

loc_809D78FC:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(24))) {
        goto loc_809D792C;
    }
}

loc_809D7900:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r5, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r5, static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r5 + 1), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r5 + 2), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r5 + 3), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r5 + 4), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r5 + 5), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r5 + 6), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r5 + 7), static_cast<uint8_t>(r4));
    r5 = (r5 + 8);
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_809D7900;
    }
}

loc_809D792C:
{
    r5 = (r1 + 8);
    r5 = (r5 + r3);
    r4 = 0;
    r0 = (32 - r3);
    ctr = r0;
}

loc_809D7944:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(32))) {
        goto loc_809D7954;
    }
}

loc_809D7948:
{
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r4));
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_809D7948;
    }
}

loc_809D7954:
{
    r3 = (r29 + 2);
    r4 = 400;
    r5 = (r1 + 8);
    r6 = r30;
    r7 = 1;
    ctx->lr = 0x809D796Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x809D79A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r29;
    r4 = 398;
    r5 = (r1 + 8);
    r6 = r31;
    r7 = 1;
    ctx->lr = 0x809D7984u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x809D79A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_809D7984:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809D7610 func_809D7610 preserves=true fpr_mask=0x00000000
