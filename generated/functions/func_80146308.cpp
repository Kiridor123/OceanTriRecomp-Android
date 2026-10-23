#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80052364(CpuContext* ctx);
extern "C" uint32_t func_80052364_ra8_32_8_0(CpuContext*, uint32_t, double, double, double);
extern "C" void func_800523D4(CpuContext* ctx);
extern "C" uint32_t func_800523D4_ra38_e_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_8005246C(CpuContext* ctx);
extern "C" uint32_t func_8005246C_ra38_e_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_801460F8(CpuContext* ctx);
extern "C" double func_801460F8_ra0_2_0_2(CpuContext*, double);
extern "C" void func_80146170(CpuContext* ctx);
extern "C" uint32_t func_80146170_ra8_e_8_0(CpuContext*, uint32_t, double, double, double);

extern "C" void func_80146308(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_801465DC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80146308;

loc_80146308:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r28 = r3;
    r29 = r6;
    r30 = r7;
    r31 = r8;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -27856));
    r0 = (r0 ^ -2147483648);
    stackword6 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r0);
    r0 = 1127219200;
    stackword7 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
}

loc_80146364:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80146490;
    }
}

loc_80146368:
{
    r0 = (r7 & 255);
}

loc_80146370:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80146490;
    }
}

loc_80146374:
{
}

loc_80146378:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8014638C;
    }
}

loc_8014637C:
{
}

loc_80146380:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8014638C;
    }
}

loc_80146384:
{
}

loc_80146388:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_801463E0;
    }
}

loc_8014638C:
{
    r3 = r5;
    f1.d = f31.d;
    if constexpr (KnownRegArgsCpuCall<0x80052364u>(&func_80052364)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80052364_1016 = func_80052364_ra8_32_8_0(ctx, r3, f1.d, f4.d, f5.d);
        r3 = regargs_result_80052364_1016;
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80052364u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    }
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    r0 = (r30 & 255);
}

loc_801463A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801463BC;
    }
}

loc_801463A8:
{
}

loc_801463AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801463C8;
    }
}

loc_801463B0:
{
}

loc_801463B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801463D4;
    }
}

loc_801463B8:
{
    goto loc_80146484;
}

loc_801463BC:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    MemoryInline::FlatWriteFloat32((r28 + 392), f0.d);
    goto loc_80146484;
}

loc_801463C8:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    MemoryInline::FlatWriteFloat32((r28 + 396), f0.d);
    goto loc_80146484;
}

loc_801463D4:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    MemoryInline::FlatWriteFloat32((r28 + 400), f0.d);
    goto loc_80146484;
}

loc_801463E0:
{
}

loc_801463E4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_80146418;
    }
}

loc_801463E8:
{
    r3 = r5;
    f1.d = f31.d;
    r4 = (r1 + 16);
    r5 = (r1 + 12);
    r6 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x8005246Cu>(&func_8005246C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_8005246C_1917 = func_8005246C_ra38_e_8_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = regargs_result_8005246C_1917;
        r0 = ctx->gpr[0];
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
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005246Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r28 + 392);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    goto loc_80146484;
}

loc_80146418:
{
    r3 = r5;
    f1.d = f31.d;
    r4 = (r1 + 16);
    r5 = (r1 + 12);
    if constexpr (KnownRegArgsCpuCall<0x800523D4u>(&func_800523D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800523D4_1EED = func_800523D4_ra38_e_8_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = regargs_result_800523D4_1EED;
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x800523D4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r0 = (r30 & 255);
}

loc_80146434:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8014644C;
    }
}

loc_80146438:
{
}

loc_8014643C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80146460;
    }
}

loc_80146440:
{
}

loc_80146444:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_80146474;
    }
}

loc_80146448:
{
    goto loc_80146484;
}

loc_8014644C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r28 + 392), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r28 + 396), f0.d);
    goto loc_80146484;
}

loc_80146460:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r28 + 392), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r28 + 400), f0.d);
    goto loc_80146484;
}

loc_80146474:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r28 + 396), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r28 + 400), f0.d);
}

loc_80146484:
{
    r3 = (r28 + 404);
    r4 = (r28 + 392);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_80146490:
{
}

loc_80146494:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_801465D8;
    }
}

loc_80146498:
{
    r0 = (r31 & 255);
}

loc_801464A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801465D8;
    }
}

loc_801464A4:
{
}

loc_801464A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_801464BC;
    }
}

loc_801464AC:
{
}

loc_801464B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_801464BC;
    }
}

loc_801464B4:
{
}

loc_801464B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_8014651C;
    }
}

loc_801464BC:
{
    r3 = r29;
    f1.d = f31.d;
    if constexpr (KnownRegArgsCpuCall<0x80052364u>(&func_80052364)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80052364_2B8D = func_80052364_ra8_32_8_0(ctx, r3, f1.d, f4.d, f5.d);
        r3 = regargs_result_80052364_2B8D;
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80052364u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    }
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    r0 = (r31 & 255);
}

loc_801464D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801464EC;
    }
}

loc_801464D8:
{
}

loc_801464DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801464FC;
    }
}

loc_801464E0:
{
}

loc_801464E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8014650C;
    }
}

loc_801464E8:
{
    goto loc_801465D8;
}

loc_801464EC:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    if constexpr (KnownRegArgsCpuCall<0x801460F8u>(&func_801460F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        const auto regargs_result_801460F8_31E1 = func_801460F8_ra0_2_0_2(ctx, f1.d);
        f1.d = regargs_result_801460F8_31E1;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801460F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    MemoryInline::FlatWrite32((r28 + 444), r3);
    goto loc_801465D8;
}

loc_801464FC:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    if constexpr (KnownRegArgsCpuCall<0x801460F8u>(&func_801460F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        const auto regargs_result_801460F8_3576 = func_801460F8_ra0_2_0_2(ctx, f1.d);
        f1.d = regargs_result_801460F8_3576;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801460F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    MemoryInline::FlatWrite32((r28 + 448), r3);
    goto loc_801465D8;
}

loc_8014650C:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    if constexpr (KnownRegArgsCpuCall<0x801460F8u>(&func_801460F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        const auto regargs_result_801460F8_390B = func_801460F8_ra0_2_0_2(ctx, f1.d);
        f1.d = regargs_result_801460F8_390B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801460F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    MemoryInline::FlatWrite32((r28 + 452), r3);
    goto loc_801465D8;
}

loc_8014651C:
{
}

loc_80146520:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_80146554;
    }
}

loc_80146524:
{
    r3 = r29;
    f1.d = f31.d;
    r4 = (r1 + 16);
    r5 = (r1 + 12);
    r6 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x8005246Cu>(&func_8005246C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_8005246C_3D53 = func_8005246C_ra38_e_8_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = regargs_result_8005246C_3D53;
        r0 = ctx->gpr[0];
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
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8005246Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = r28;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    ctx->lr = 0x80146550u;
    if constexpr (KnownRegArgsCpuCall<0x80146170u>(&func_80146170)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        const auto regargs_result_80146170_41E8 = func_80146170_ra8_e_8_0(ctx, r3, f1.d, f2.d, f3.d);
        r3 = regargs_result_80146170_41E8;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x80146170u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
    }
    goto loc_801465D8;
}

loc_80146554:
{
    r3 = r29;
    f1.d = f31.d;
    r4 = (r1 + 16);
    r5 = (r1 + 12);
    if constexpr (KnownRegArgsCpuCall<0x800523D4u>(&func_800523D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800523D4_45D6 = func_800523D4_ra38_e_8_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = regargs_result_800523D4_45D6;
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x800523D4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r0 = (r31 & 255);
}

loc_80146570:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80146588;
    }
}

loc_80146574:
{
}

loc_80146578:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_801465A4;
    }
}

loc_8014657C:
{
}

loc_80146580:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_801465C0;
    }
}

loc_80146584:
{
    goto loc_801465D8;
}

loc_80146588:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    if constexpr (KnownRegArgsCpuCall<0x801460F8u>(&func_801460F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        const auto regargs_result_801460F8_4BB7 = func_801460F8_ra0_2_0_2(ctx, f1.d);
        f1.d = regargs_result_801460F8_4BB7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801460F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    MemoryInline::FlatWrite32((r28 + 444), r3);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    if constexpr (KnownRegArgsCpuCall<0x801460F8u>(&func_801460F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        const auto regargs_result_801460F8_4F11 = func_801460F8_ra0_2_0_2(ctx, f1.d);
        f1.d = regargs_result_801460F8_4F11;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801460F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    MemoryInline::FlatWrite32((r28 + 448), r3);
    goto loc_801465D8;
}

loc_801465A4:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    if constexpr (KnownRegArgsCpuCall<0x801460F8u>(&func_801460F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        const auto regargs_result_801460F8_529A = func_801460F8_ra0_2_0_2(ctx, f1.d);
        f1.d = regargs_result_801460F8_529A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801460F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    MemoryInline::FlatWrite32((r28 + 444), r3);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    if constexpr (KnownRegArgsCpuCall<0x801460F8u>(&func_801460F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        const auto regargs_result_801460F8_55F4 = func_801460F8_ra0_2_0_2(ctx, f1.d);
        f1.d = regargs_result_801460F8_55F4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801460F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    MemoryInline::FlatWrite32((r28 + 452), r3);
    goto loc_801465D8;
}

loc_801465C0:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    if constexpr (KnownRegArgsCpuCall<0x801460F8u>(&func_801460F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        const auto regargs_result_801460F8_597D = func_801460F8_ra0_2_0_2(ctx, f1.d);
        f1.d = regargs_result_801460F8_597D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801460F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    MemoryInline::FlatWrite32((r28 + 448), r3);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    if constexpr (KnownRegArgsCpuCall<0x801460F8u>(&func_801460F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        const auto regargs_result_801460F8_5CD7 = func_801460F8_ra0_2_0_2(ctx, f1.d);
        f1.d = regargs_result_801460F8_5CD7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801460F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    MemoryInline::FlatWrite32((r28 + 452), r3);
}

loc_801465D8:
{
    r0 = 56;
    addr_psqx_801465DC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_801465DC_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001FF gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0xC000003F fpr_write=0xC000003F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80146308 func_80146308 preserves=true fpr_mask=0x00000000
